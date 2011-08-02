/* $Id$ */

/** @file src/driver.c %Driver functions. */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "os/endian.h"
#include "os/math.h"
#include "os/strings.h"

#include "driver.h"

#include "dsp.h"
#include "file.h"
#include "mt32mpu.h"
#include "timer.h"
#include "tools.h"

static bool s_driverInstalled[16];
static bool s_driverLoaded[16];

static Driver s_driverMusic;
static Driver s_driverSound;
static Driver s_driverVoice;

static MSBuffer s_bufferMusic;
static MSBuffer s_bufferSound[4];

Driver *g_driverMusic = &s_driverMusic;
Driver *g_driverSound = &s_driverSound;
Driver *g_driverVoice = &s_driverVoice;

MSBuffer *g_bufferMusic = &s_bufferMusic;
MSBuffer *g_bufferSound[4] = { &s_bufferSound[0], &s_bufferSound[1], &s_bufferSound[2], &s_bufferSound[3] };

static uint8 s_bufferSoundIndex;

static void Driver_Init(uint16 driver)
{
	if (driver >= 16) return;

	s_driverLoaded[driver] = true;
}

static void Driver_Uninstall(uint16 driver)
{
	if (driver >= 16) return;

	s_driverInstalled[driver] = false;
}

static void Driver_Uninit(uint16 driver)
{
	if (driver >= 16 || !s_driverLoaded[driver]) return;
	s_driverLoaded[driver] = false;
}

static void Drivers_Uninit(Driver *driver)
{
	if (driver == NULL) return;

	Driver_Uninit(driver->index);

	Driver_Uninstall(driver->index);

	driver->index = 0xFFFF;
}

static uint16 Driver_Install()
{
	uint16 index;

	for (index = 0; index < 16; index++) {
		if (!s_driverInstalled[index]) break;
	}
	if (index == 16) return 0xFFFF;
	s_driverInstalled[index] = true;

	return index;
}

static bool Drivers_Init(Driver *driver, const char *extension)
{
	driver->index = Driver_Install();
	if (driver->index == 0xFFFF) return false;

	Driver_Init(driver->index);

	memcpy(driver->extension, extension, 4);

	return true;
}

static uint8 Drivers_SoundMusic_Init(uint8 index)
{
	Driver *sound;
	Driver *music;
	uint32 size;
	uint8 i;

	if (index == 0) return 0;

	sound  = g_driverSound;
	music  = g_driverMusic;

	if (!Drivers_Init(sound, "C55")) return 0;
	memcpy(music, sound, sizeof(Driver));

	MPU_Init();
	Timer_Add(MPU_Interrupt, 1000000 / 120);

	size = MPU_GetDataSize();

	for (i = 0; i < 4; i++) {
		MSBuffer *buf = g_bufferSound[i];

		buf->buffer = calloc(1, size);
		buf->index  = 0xFFFF;
	}
	s_bufferSoundIndex = 0;

	g_bufferMusic->buffer = calloc(1, size);
	g_bufferMusic->index  = 0xFFFF;

	return index;
}

static uint8 Drivers_Voice_Init(uint8 index)
{
	Driver *voice;

	if (index == 0) return 0;

	voice  = g_driverVoice;

	if (!Drivers_Init(voice, "VOC")) return 0;

	if (!DSP_Init()) return 0;

	return index;
}

static void Drivers_Reset()
{
	memset(s_driverInstalled, 0, sizeof(s_driverInstalled));
	memset(s_driverLoaded, 0, sizeof(s_driverLoaded));
}

void Drivers_All_Init(uint8 sound, uint8 music, uint8 voice)
{
	Drivers_Reset();

	assert(music == sound);
	assert(Drivers_SoundMusic_Init(sound) == sound);
	g_config.voiceDrv = Drivers_Voice_Init(voice);
}

bool Driver_Music_IsPlaying()
{
	MSBuffer *buffer = g_bufferMusic;

	if (g_driverMusic->index == 0xFFFF) return false;
	if (buffer->index == 0xFFFF) return false;

	return MPU_IsPlaying(buffer->index) == 1;
}

bool Driver_Voice_IsPlaying()
{
	if (g_driverVoice->index == 0xFFFF) return false;
	return DSP_GetStatus() == 2;
}

void Driver_Sound_Play(int16 index, int16 volume)
{
	Driver *sound = g_driverSound;
	MSBuffer *soundBuffer = g_bufferSound[s_bufferSoundIndex];

	if (index < 0 || index >= 120) return;

	if (g_gameConfig.sounds == 0 && index > 1) return;

	if (sound->index == 0xFFFF) return;

	if (soundBuffer->index != 0xFFFF) {
		MPU_Stop(soundBuffer->index);
		MPU_ClearData(soundBuffer->index);
		soundBuffer->index = 0xFFFF;
	}

	soundBuffer->index = MPU_SetData(sound->content, index, soundBuffer->buffer);

	MPU_Play(soundBuffer->index);
	MPU_SetVolume(soundBuffer->index, ((volume & 0xFF) * 90) / 256, 0);

	s_bufferSoundIndex = (s_bufferSoundIndex + 1) % 4;
}

void Driver_Music_Stop()
{
	Driver *music = g_driverMusic;
	MSBuffer *musicBuffer = g_bufferMusic;

	if (music->index == 0xFFFF) return;
	if (musicBuffer->index == 0xFFFF) return;

	MPU_Stop(musicBuffer->index);
	MPU_ClearData(musicBuffer->index);
	musicBuffer->index = 0xFFFF;
}

void Driver_Sound_Stop()
{
	Driver *sound = g_driverSound;
	uint8 i;

	if (sound->index == 0xFFFF) return;

	for (i = 0; i < 4; i++) {
		MSBuffer *soundBuffer = g_bufferSound[i];
		if (soundBuffer->index == 0xFFFF) continue;

		MPU_Stop(soundBuffer->index);
		MPU_ClearData(soundBuffer->index);
		soundBuffer->index = 0xFFFF;
	}
}

void Driver_Voice_LoadFile(const char *filename, void *buffer, uint32 length)
{
	assert(buffer != NULL);

	if (filename == NULL) return;
	if (g_driverVoice->index == 0xFFFF) return;
	if (!File_Exists(filename)) return;

	File_ReadBlockFile(filename, buffer, length);
}

void Driver_Voice_Play(uint8 *arg06, int16 arg0A)
{
	static int16 l_var_639A = -1;

	Driver *voice = g_driverVoice;

	if (!g_gameConfig.sounds || voice->index == 0xFFFF) return;

	if (arg06 == NULL) {
		arg0A = 0x100;
	} else {
		arg0A = min(arg0A, 0xFF);
	}

	if (!Driver_Voice_IsPlaying()) l_var_639A = -1;

	if (arg0A < l_var_639A) return;

	Driver_Voice_Stop();

	if (arg06 == NULL) return;

	l_var_639A = arg0A;

	if (arg06 == NULL) return;

	DSP_Play(arg06);
}

void Driver_Voice_Stop()
{
	Driver *voice = g_driverVoice;

	if (Driver_Voice_IsPlaying()) DSP_Stop();

	if (voice->contentMalloced) {
		free(voice->content);
		voice->contentMalloced = false;
	}

	voice->content = NULL;
}

void Driver_Sound_LoadFile(const char *musicName)
{
	Driver *sound = g_driverSound;
	Driver *music = g_driverMusic;

	Driver_Sound_Stop();

	if (sound->index == 0xFFFF) return;

	if (sound->content == music->content) {
		sound->content         = NULL;
		sound->filename        = NULL;
		sound->contentMalloced = false;
	} else {
		Driver_UnloadFile(sound);
	}

	if (music->filename != NULL) {
		char *filename;

		filename = Drivers_GenerateFilename(musicName, sound);

		if (strcasecmp(filename, music->filename) == 0) {
			sound->content         = music->content;
			sound->filename        = music->filename;
			sound->contentMalloced = music->contentMalloced;
			return;
		}
	}

	Driver_LoadFile(musicName, sound);
}

char *Drivers_GenerateFilename(const char *name, Driver *driver)
{
	static char filename[14];

	if (name == NULL || driver == NULL || driver->index == 0xFFFF) return NULL;

	strcpy(filename, name);
	if (strrchr(filename, '.') != NULL) *strrchr(filename, '.') = '\0';
	strcat(filename, ".");
	strcat(filename, driver->extension);

	if (File_Exists(filename)) return filename;

	if (driver->index == 0xFFFF) return NULL;

	strcpy(filename, name);
	if (strrchr(filename, '.') != NULL) *strrchr(filename, '.') = '\0';
	strcat(filename, ".XMI");

	if (File_Exists(filename)) return filename;

	return NULL;
}

static void Drivers_SoundMusic_Uninit()
{
	Driver *sound = g_driverSound;
	Driver *music = g_driverMusic;

	if (music->index != 0xFFFF) {
		MSBuffer *buffer = g_bufferMusic;

		if (buffer->index != 0xFFFF) {
			MPU_Stop(buffer->index);
			MPU_ClearData(buffer->index);
			buffer->index = 0xFFFF;
		}

		free(buffer->buffer);
		buffer->buffer = NULL;
	}

	if (sound->index != 0xFFFF) {
		uint8 i;

		for (i = 0; i < 4; i++) {
			MSBuffer *buffer = g_bufferSound[i];

			if (buffer->index != 0xFFFF) {
				MPU_Stop(buffer->index);
				MPU_ClearData(buffer->index);
				buffer->index = 0xFFFF;
			}

			free(buffer->buffer);
			buffer->buffer = NULL;
		}
	}

	/* Only Uninit() sound, as music is a copy of sound. */
	Drivers_Uninit(sound);
	memcpy(music, sound, sizeof(Driver));

	Timer_Remove(MPU_Interrupt);
	MPU_Uninit();
}

static void Drivers_Voice_Uninit()
{
	Drivers_Uninit(g_driverVoice);

	DSP_Uninit();
}

void Drivers_All_Uninit()
{
	Drivers_SoundMusic_Uninit();
	Drivers_Voice_Uninit();
}

void Driver_LoadFile(const char *musicName, Driver *driver)
{
	char *filename;

	filename = Drivers_GenerateFilename(musicName, driver);

	if (filename == NULL) return;

	Driver_UnloadFile(driver);

	driver->filename = malloc(strlen(filename) + 1);
	strcpy(driver->filename, filename);

	driver->content = File_ReadWholeFile(filename);
	driver->contentMalloced = true;
}

void Driver_UnloadFile(Driver *driver)
{
	if (driver->contentMalloced) {
		free(driver->content);
	}

	free(driver->filename);

	driver->filename        = NULL;
	driver->content         = NULL;
	driver->contentMalloced = false;
}

void Driver_Music_FadeOut()
{
	Driver *music = g_driverMusic;
	MSBuffer *musicBuffer = g_bufferMusic;

	if (music->index == 0xFFFF) return;
	if (musicBuffer->index == 0xFFFF) return;

	MPU_SetVolume(musicBuffer->index, 0, 2000);
}
