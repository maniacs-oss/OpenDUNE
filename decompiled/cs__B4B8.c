/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4B8_0000_001F_3BC3()
 *
 * @name f__B4B8_0000_001F_3BC3
 * @implements B4B8:0000:001F:3BC3 ()
 * @implements B4B8:001F:000B:153A
 * @implements B4B8:002A:0005:517D
 * @implements B4B8:002F:002A:0E34
 * @implements B4B8:004D:000C:132E
 * @implements B4B8:004E:000B:175E
 * @implements B4B8:0059:0007:6578
 * @implements B4B8:0060:0005:517D
 * @implements B4B8:0065:000D:0E57
 * @implements B4B8:0072:001A:F649
 * @implements B4B8:008C:0012:07F6
 * @implements B4B8:008F:000F:E42E
 * @implements B4B8:009E:000B:411E
 * @implements B4B8:00A1:0008:30F2
 * @implements B4B8:00A9:002C:7BC6
 * @implements B4B8:00C5:0010:CDEF
 * @implements B4B8:00CC:0009:6E80
 * @implements B4B8:00D5:0007:4C78
 * @implements B4B8:00DC:0005:517D
 * @implements B4B8:00E1:000D:0557
 * @implements B4B8:00EE:001A:F649
 * @implements B4B8:0108:0012:07F6
 * @implements B4B8:010B:000F:E42E
 * @implements B4B8:011A:000B:411E
 * @implements B4B8:011D:0008:30F2
 * @implements B4B8:0125:0020:37E6
 * @implements B4B8:0133:0012:F921
 * @implements B4B8:013A:000B:81FA
 * @implements B4B8:0145:0007:CBF5
 * @implements B4B8:014C:0014:309A
 * @implements B4B8:0160:0031:B17A
 * @implements B4B8:0177:001A:22EE
 * @implements B4B8:0181:0010:B61D
 * @implements B4B8:0191:0008:7A2D
 * @implements B4B8:0199:0009:B615
 * @implements B4B8:01A2:0012:69D1
 * @implements B4B8:01A4:0010:C9DD
 * @implements B4B8:01B4:0021:1F5E
 * @implements B4B8:01D5:0026:1563
 * @implements B4B8:01FB:0031:C155
 * @implements B4B8:022C:0026:EC41
 * @implements B4B8:0252:004C:860B
 * @implements B4B8:0291:000D:BCC0
 * @implements B4B8:0292:000C:84C2
 * @implements B4B8:029E:000D:3338
 * @implements B4B8:02A2:0009:2E43
 * @implements B4B8:02AB:000D:3328
 * @implements B4B8:02AF:0009:EE52
 * @implements B4B8:02B8:0012:2C51
 * @implements B4B8:02CA:0018:139C
 * @implements B4B8:02E2:0015:4DA7
 * @implements B4B8:02F7:000A:E5C7
 * @implements B4B8:0301:002E:E825
 * @implements B4B8:0321:000E:5A5A
 * @implements B4B8:032F:0107:3FC4
 * @implements B4B8:03C8:006E:477E
 * @implements B4B8:03DA:005C:7497
 * @implements B4B8:03EC:004A:385B
 * @implements B4B8:03FE:0038:0D2C
 * @implements B4B8:042D:0009:EE46
 * @implements B4B8:0436:000C:5C34
 * @implements B4B8:0439:0009:AE4C
 * @implements B4B8:0442:0005:517D
 * @implements B4B8:0447:000F:3A31
 * @implements B4B8:0456:000E:062D
 * @implements B4B8:0458:000C:3407
 * @implements B4B8:0464:0009:D62D
 * @implements B4B8:046D:0018:31BE
 * @implements B4B8:0485:0017:626D
 * @implements B4B8:0488:0014:7CFA
 * @implements B4B8:049C:001F:3168
 * @implements B4B8:04BB:000C:6772
 * @implements B4B8:04C7:0026:950C
 * @implements B4B8:04D4:0019:D3E8
 * @implements B4B8:04E2:000B:8E57
 * @implements B4B8:04ED:0008:BC0F
 * @implements B4B8:04F5:0005:517D
 * @implements B4B8:04FA:0009:AE6E
 * @implements B4B8:0503:0009:FC28
 * @implements B4B8:050C:0028:CA07
 * @implements B4B8:0534:000D:1B27
 * @implements B4B8:0541:0009:1020
 * @implements B4B8:054A:000C:B6C6
 * @implements B4B8:0556:0008:CAD0
 * @implements B4B8:055E:000A:CB50
 * @implements B4B8:0568:001A:D0F6
 * @implements B4B8:0582:0014:3C98
 * @implements B4B8:0586:0010:4B6C
 * @implements B4B8:058F:0007:4902
 * @implements B4B8:0596:0014:9233
 * @implements B4B8:05AA:002E:A7A6
 * @implements B4B8:05CA:000E:61B9
 * @implements B4B8:05D8:0015:4DA7
 * @implements B4B8:05ED:000A:E477
 * @implements B4B8:05F7:002E:5FBC
 * @implements B4B8:0617:000E:99A3
 * @implements B4B8:0625:00CD:5050
 * @implements B4B8:0678:007A:730C
 * @implements B4B8:0684:006E:41F7
 * @implements B4B8:0690:0062:127F
 * @implements B4B8:069C:0056:9745
 * @implements B4B8:06B5:003D:9480
 * @implements B4B8:06B9:0039:C839
 * @implements B4B8:06C7:002B:CEAF
 * @implements B4B8:06CB:0027:BF4A
 * @implements B4B8:06D9:0019:9522
 * @implements B4B8:06DD:0015:4AB7
 * @implements B4B8:06EB:0007:A357
 * @implements B4B8:06EF:0003:1D00
 * @implements B4B8:06F2:0050:6E54
 * @implements B4B8:0706:003C:C12F
 * @implements B4B8:070A:0038:B396
 * @implements B4B8:0718:002A:E79B
 * @implements B4B8:071C:0026:2D78
 * @implements B4B8:072A:0018:1D2D
 * @implements B4B8:072E:0014:3692
 * @implements B4B8:073C:0006:7746
 * @implements B4B8:0740:0002:D83A
 * @implements B4B8:0742:0085:EEF7
 * @implements B4B8:074E:0079:C324
 * @implements B4B8:075A:006D:F1F1
 * @implements B4B8:0766:0061:E2DD
 * @implements B4B8:0772:0055:17EF
 * @implements B4B8:077D:004A:0B6B
 * @implements B4B8:0786:0041:6F70
 * @implements B4B8:0790:0037:3621
 * @implements B4B8:079A:002D:3384
 * @implements B4B8:07A4:0023:A413
 * @implements B4B8:07AE:0019:E64C
 * @implements B4B8:07BE:0009:2E6F
 * @implements B4B8:07C7:000C:1C1D
 * @implements B4B8:07CA:0009:EE65
 * @implements B4B8:07D3:001E:72A9
 * @implements B4B8:07F1:007A:9564
 * @implements B4B8:0861:000A:AA97
 * @implements B4B8:086B:002E:52FA
 * @implements B4B8:088D:000C:6279
 *
 * Called From: 34B8:003E:0005:0000
 */
void f__B4B8_0000_001F_3BC3()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x126);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ds, 0x00, 0x76A4) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x76A2) = emu_dx;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x001F); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__001F:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_xorw(&emu_di, emu_di);
	goto l__004E;
l__002A:
	emu_push(emu_cs); emu_push(0x002F); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__002F:
	emu_andb(&emu_al, 0xF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx, emu_di);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx, emu_di);
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xA);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) > 0xA) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
		emu_addw(&emu_bx, emu_di);
		emu_get_memory8(emu_es, emu_bx, 0x0) = 0xA;
	}
l__004D:
	emu_incw(&emu_di);
l__004E:
	emu_cmpw(&emu_di, 0x110);
	if ((int16)emu_di < (int16)0x110) goto l__002A;
	emu_push(emu_cs); emu_push(0x0059); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0059:
	emu_andw(&emu_ax, 0xF);
	emu_di = emu_ax;
	goto l__00CC;
l__0060:
	emu_push(emu_cs); emu_push(0x0065); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0065:
	emu_andw(&emu_ax, 0xFF);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__00C5;
l__0072:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x2006);
	emu_ax = (int8)emu_al;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) >= (int16)0x0) goto l__008C;
	emu_xorw(&emu_ax, emu_ax);
	goto l__008F;
l__008C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
l__008F:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x110);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) <= (int16)0x110) goto l__009E;
	emu_ax = 0x110;
	goto l__00A1;
l__009E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
l__00A1:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_cs); emu_push(0x00A9); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__00A9:
	emu_andb(&emu_al, 0xF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_dl = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_addb(&emu_dl, emu_al);
	emu_andb(&emu_dl, 0xF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_dl;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__00C5:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x15);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) < (int16)0x15) goto l__0072;
	emu_decw(&emu_di);
l__00CC:
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) goto l__0060;
	emu_push(emu_cs); emu_push(0x00D5); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__00D5:
	emu_andw(&emu_ax, 0x3);
	emu_di = emu_ax;
	goto l__013A;
l__00DC:
	emu_push(emu_cs); emu_push(0x00E1); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__00E1:
	emu_andw(&emu_ax, 0xFF);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__0133;
l__00EE:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x2006);
	emu_ax = (int8)emu_al;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) >= (int16)0x0) goto l__0108;
	emu_xorw(&emu_ax, emu_ax);
	goto l__010B;
l__0108:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
l__010B:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x110);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) <= (int16)0x110) goto l__011A;
	emu_ax = 0x110;
	goto l__011D;
l__011A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
l__011D:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_cs); emu_push(0x0125); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0125:
	emu_andb(&emu_al, 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__0133:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x15);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) < (int16)0x15) goto l__00EE;
	emu_decw(&emu_di);
l__013A:
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) goto l__00DC;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	goto l__0181;
l__0145:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	goto l__0177;
l__014C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0160); emu_cs = 0x0F3F; emu_Tile_PackXY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0160:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x4);
l__0177:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x8) < (int16)0x40) goto l__014C;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x4);
l__0181:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xA) < (int16)0x40) goto l__0145;
	emu_xorw(&emu_si, emu_si);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	goto l__02AF;
l__0191:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	goto l__02A2;
l__0199:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__01A2;
	emu_ax = 0x1;
	goto l__01A4;
l__01A2:
	emu_xorw(&emu_ax, emu_ax);
l__01A4:
	emu_si = emu_ax;
	emu_dx = 0x15;
	emu_ax = emu_si;
	emu_imuluw(&emu_ax, emu_dx);
	emu_si = emu_ax;
	emu_di = emu_si;
	goto l__0292;
l__01B4:
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x201D));
	emu_push(emu_ax);
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x201B));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01D5); emu_cs = 0x0F3F; emu_Tile_PackXY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__01D5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2021));
	emu_push(emu_ax);
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x201F));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01FB); emu_cs = 0x0F3F; emu_Tile_PackXY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__01FB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_shrw(&emu_ax, 0x1);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x201D));
	emu_push(emu_ax);
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x201B));
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x022C); f__B4B8_09B6_0013_F1B4();
l__022C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2021));
	emu_push(emu_ax);
	emu_bx = emu_di;
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x201F));
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0252); f__B4B8_09B6_0013_F1B4();
l__0252:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0xF000);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x14) & 0xF000) == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
		emu_cl = 0x2;
		emu_shlw(&emu_ax, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_ax);
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x12);
		emu_cl = 0x2;
		emu_shlw(&emu_dx, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_dx);
		emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
		emu_incw(&emu_ax);
		emu_shrw(&emu_ax, 0x1);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x14);
		emu_cl = 0x2;
		emu_shlw(&emu_dx, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_dx);
		emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	}
l__0291:
	emu_incw(&emu_di);
l__0292:
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x15);
	emu_cmpw(&emu_ax, emu_di);
	if ((int16)emu_ax <= (int16)emu_di) goto l__029E;
	goto l__01B4;
l__029E:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x4);
l__02A2:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x8) >= (int16)0x40) goto l__02AB;
	goto l__0199;
l__02AB:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x4);
l__02AF:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xA) >= (int16)0x40) goto l__02B8;
	goto l__0191;
l__02B8:
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02CA); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__02CA:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39EC);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x39EA);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	goto l__0439;
l__02E2:
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02F7); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__02F7:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x26) = 0x0;
	goto l__0321;
l__0301:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x26);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x26);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_si, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x0);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x26));
l__0321:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x26) < (int16)0x40) goto l__0301;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	goto l__042D;
l__032F:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0xA6);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0xA4);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x124);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x104);
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x100);
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xFC);
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x128);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0xA8);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) == 0x0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
		emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	}
l__03C8:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0x0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
		emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ax;
	}
l__03DA:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x3F);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) == 0x3F) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
		emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	}
l__03EC:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x3F);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0x3F) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
		emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	}
l__03FE:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_bx = 0x9;
	emu_xorw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_bx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
l__042D:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x8) >= (int16)0x40) goto l__0436;
	goto l__032F;
l__0436:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xA));
l__0439:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xA) >= (int16)0x40) goto l__0442;
	goto l__02E2;
l__0442:
	emu_push(emu_cs); emu_push(0x0447); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0447:
	emu_andw(&emu_ax, 0xF);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0x8);
	if (emu_si >= 0x8) goto l__0456;
	emu_ax = 0x8;
	goto l__0458;
l__0456:
	emu_ax = emu_si;
l__0458:
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xC);
	if (emu_si <= 0xC) goto l__0464;
	emu_ax = 0xC;
	/* Unresolved jump */ emu_ip = 0x0466; emu_last_cs = 0xB4B8; emu_last_ip = 0x0462; emu_last_length = 0x000C; emu_last_crc = 0x3407; emu_call();
l__0464:
	emu_ax = emu_si;
	emu_si = emu_ax;
	emu_push(emu_cs); emu_push(0x046D); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__046D:
	emu_andw(&emu_ax, 0x3);
	emu_decw(&emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = emu_si;
	emu_subw(&emu_ax, 0x3);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_ax >= emu_get_memory16(emu_ss, emu_bp, -0x10)) goto l__0485;
	emu_ax = emu_si;
	emu_subw(&emu_ax, 0x3);
	goto l__0488;
l__0485:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
l__0488:
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39EC);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x39EA);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_dx;
	emu_xorw(&emu_di, emu_di);
	goto l__04E2;
l__049C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x0;
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (emu_ax >= emu_get_memory16(emu_ss, emu_bp, -0x12)) goto l__04BB;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x6;
	goto l__04D4;
l__04BB:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_si);
	if (emu_get_memory16(emu_ss, emu_bp, -0x12) < emu_si) goto l__04C7;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x4;
	goto l__04D4;
l__04C7:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_ax <= emu_get_memory16(emu_ss, emu_bp, -0x10)) {
		emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x2;
	}
l__04D4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	emu_incw(&emu_di);
l__04E2:
	emu_cmpw(&emu_di, 0x1000);
	if ((int16)emu_di < (int16)0x1000) goto l__049C;
	emu_push(emu_cs); emu_push(0x04ED); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__04ED:
	emu_andw(&emu_ax, 0x2F);
	emu_si = emu_ax;
	goto l__058F;
l__04F5:
	emu_push(emu_cs); emu_push(0x04FA); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__04FA:
	emu_andw(&emu_ax, 0x3F);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0503); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0503:
	emu_andw(&emu_ax, 0x3F);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x050C); emu_cs = 0x0F3F; emu_Tile_PackXY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__050C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3A50), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx, 0x3A50) == 0x0) goto l__058F;
	emu_push(emu_cs); emu_push(0x0534); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0534:
	emu_andw(&emu_ax, 0x1F);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x0;
	goto l__0586;
l__0541:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x054A); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__054A:
	emu_andw(&emu_ax, 0x3F);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0556); emu_cs = 0x0F3F; emu_Tile_Unpack();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0556:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x055E); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__055E:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0568); emu_cs = 0x0F3F; emu_Tile_PackTile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0568:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1000);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x16) >= (int16)0x1000) goto l__0541;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x16) < (int16)0x0) goto l__0541;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs);
	emu_push(0x0582); f__B4B8_0899_002D_EBA1();
l__0582:
	emu_pop(&emu_cx);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x10));
l__0586:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ss, emu_bp, -0x14)) goto l__0541;
	emu_decw(&emu_si);
l__058F:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__0596;
	goto l__04F5;
l__0596:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39EC);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x39EA);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x0;
	goto l__05CA;
l__05AA:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_si, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x0);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x14));
l__05CA:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x14) < (int16)0x40) goto l__05AA;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	goto l__07CA;
l__05D8:
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05ED); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__05ED:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x0;
	goto l__0617;
l__05F7:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_si, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x0);
	emu_get_memory16(emu_ss, emu_bx, 0x0) = emu_ax;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x14));
l__0617:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x14) < (int16)0x40) goto l__05F7;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	goto l__07BE;
l__0625:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0xA6);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x124);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x100);
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x128);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0x0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
		emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
	}
l__0678:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) == 0x0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
		emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	}
l__0684:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x3F);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0x3F) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
		emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	}
l__0690:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x3F);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) == 0x3F) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
		emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
	}
l__069C:
	emu_get_memory16(emu_ss, emu_bp, -0x16) = 0x0;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) != 0x4) goto l__06F2;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x6);
		if (emu_get_memory16(emu_ss, emu_bp, -0x1A) != 0x6) goto l__06B9;
	}
l__06B5:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1);
l__06B9:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x6);
		if (emu_get_memory16(emu_ss, emu_bp, -0x1C) != 0x6) goto l__06CB;
	}
l__06C7:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
l__06CB:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x6);
		if (emu_get_memory16(emu_ss, emu_bp, -0x1E) != 0x6) goto l__06DD;
	}
l__06D9:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
l__06DD:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x6);
		if (emu_get_memory16(emu_ss, emu_bp, -0x20) != 0x6) goto l__06EF;
	}
l__06EB:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
l__06EF:
	goto l__0772;
l__06F2:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) != 0x8) goto l__0742;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x9);
		if (emu_get_memory16(emu_ss, emu_bp, -0x1A) != 0x9) goto l__070A;
	}
l__0706:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1);
l__070A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x9);
		if (emu_get_memory16(emu_ss, emu_bp, -0x1C) != 0x9) goto l__071C;
	}
l__0718:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
l__071C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x9);
		if (emu_get_memory16(emu_ss, emu_bp, -0x1E) != 0x9) goto l__072E;
	}
l__072A:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
l__072E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x9);
		if (emu_get_memory16(emu_ss, emu_bp, -0x20) != 0x9) goto l__0740;
	}
l__073C:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
l__0740:
	goto l__0772;
l__0742:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1);
	}
l__074E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
	}
l__075A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	}
l__0766:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x18)) {
		emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	}
l__0772:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) == 0x0) {
		emu_get_memory16(emu_ss, emu_bp, -0x16) = 0x0;
	}
l__077D:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) == 0x4) {
		emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	}
l__0786:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x2);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) == 0x2) {
		emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x11);
	}
l__0790:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x6);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) == 0x6) {
		emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x21);
	}
l__079A:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) == 0x8) {
		emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x31);
	}
l__07A4:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x9);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) == 0x9) {
		emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x41);
	}
l__07AE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
l__07BE:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x8) >= (int16)0x40) goto l__07C7;
	goto l__0625;
l__07C7:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xA));
l__07CA:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xA) >= (int16)0x40) goto l__07D3;
	goto l__05D8;
l__07D3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
	emu_shlw(&emu_ax, 0x1);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x39F0);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x39EE);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_bx;
	emu_xorw(&emu_di, emu_di);
	goto l__0861;
l__07F1:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_andw(&emu_ax, 0x1FF);
	emu_dx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39F2);
	emu_andw(&emu_ax, 0x7F);
	emu_dx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x1), 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x1), emu_al);
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory8(emu_es, emu_bx, 0x2) = 0x0;
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0x0;
	emu_incw(&emu_di);
l__0861:
	emu_cmpw(&emu_di, 0x1000);
	if ((int16)emu_di < (int16)0x1000) goto l__07F1;
	emu_xorw(&emu_di, emu_di);
	goto l__088D;
l__086B:
	emu_bx = emu_di;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = 0x2E9C;
	emu_dx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_si, emu_dx);
	emu_dx = emu_get_memory16(emu_es, emu_si, 0x0);
	emu_andw(&emu_dx, 0x1FF);
	emu_es = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x323F) = emu_dx;
	emu_incw(&emu_di);
l__088D:
	emu_cmpw(&emu_di, 0x1000);
	if ((int16)emu_di < (int16)0x1000) goto l__086B;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_0899_002D_EBA1()
 *
 * @name f__B4B8_0899_002D_EBA1
 * @implements B4B8:0899:002D:EBA1 ()
 * @implements B4B8:08C6:0016:33E5
 * @implements B4B8:08DC:0004:8D11
 * @implements B4B8:08E0:0008:857E
 * @implements B4B8:08E8:0008:9D79
 * @implements B4B8:08F0:0006:CB3D
 * @implements B4B8:08F6:000B:6174
 * @implements B4B8:0901:000A:9283
 * @implements B4B8:090B:0044:05FB
 * @implements B4B8:094F:002F:B048
 * @implements B4B8:0972:000C:DA05
 * @implements B4B8:0975:0009:2AFD
 * @implements B4B8:097E:000C:DB82
 * @implements B4B8:0981:0009:2AFA
 * @implements B4B8:098A:0002:D23A
 * @implements B4B8:098C:0024:DA74
 * @implements B4B8:09AE:0002:C03A
 * @implements B4B8:09B0:0006:F7CE
 *
 * Called From: B4B8:057F:001A:D0F6
 * Called From: B4B8:08D9:0016:33E5
 */
void f__B4B8_0899_002D_EBA1()
{
l__0899:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cmpw(&emu_ax, 0x8);
	if (emu_ax == 0x8) goto l__08C6;
	emu_cmpw(&emu_ax, 0x9);
	if (emu_ax == 0x9) goto l__08E0;
	goto l__098C;
l__08C6:
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x0) = 0x9;
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x08DC); f__B4B8_0899_002D_EBA1();
l__08DC:
	emu_pop(&emu_cx);
	goto l__09B0;
l__08E0:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0xFFFF;
	goto l__0981;
l__08E8:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0xFFFF;
	goto l__0975;
l__08F0:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x08F6); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__08F6:
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0901); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0901:
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x090B); emu_cs = 0x0F3F; emu_Tile_PackXY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__090B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_cmpw(&emu_di, 0x1000);
		if ((int16)emu_di < (int16)0x1000) {
			emu_ax = emu_di;
			emu_cl = 0x2;
			emu_shlw(&emu_ax, emu_cl);
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
			emu_addw(&emu_bx, emu_ax);
			emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
			emu_dx = 0x1C;
			emu_imuluw(&emu_ax, emu_dx);
			emu_bx = emu_ax;
			emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3A50);
			emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
			emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
			if (emu_get_memory16(emu_ss, emu_bp, -0x8) != 0x0) goto l__094F;
			emu_ax = emu_si;
			emu_cl = 0x2;
			emu_shlw(&emu_ax, emu_cl);
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
			emu_addw(&emu_bx, emu_ax);
			emu_get_memory16(emu_es, emu_bx, 0x0) = 0x8;
		}
	}
	goto l__0972;
l__094F:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x9);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) != 0x9) {
		emu_ax = emu_di;
		emu_cl = 0x2;
		emu_shlw(&emu_ax, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_ax);
		emu_get_memory16(emu_es, emu_bx, 0x0) = 0x8;
	}
l__0972:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__0975:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x4) > (int16)0x1) goto l__097E;
	goto l__08F0;
l__097E:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
l__0981:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) > (int16)0x1) goto l__098A;
	goto l__08E8;
l__098A:
	goto l__09B0;
l__098C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3A50), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx, 0x3A50) != 0x0) {
		emu_ax = emu_si;
		emu_cl = 0x2;
		emu_shlw(&emu_ax, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_ax);
		emu_get_memory16(emu_es, emu_bx, 0x0) = 0x8;
	}
l__09AE:
	goto l__09B0;
l__09B0:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_09B6_0013_F1B4()
 *
 * @name f__B4B8_09B6_0013_F1B4
 * @implements B4B8:09B6:0013:F1B4 ()
 * @implements B4B8:09C9:0004:5B1F
 * @implements B4B8:09CD:0003:2E57
 *
 * Called From: B4B8:0229:0031:C155
 * Called From: B4B8:024F:0026:EC41
 */
void f__B4B8_09B6_0013_F1B4()
{
l__09B6:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_andw(&emu_si, 0x3F);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x09C9); emu_cs = 0x0F3F; emu_Tile_PackXY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__09C9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__09CD;
l__09CD:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_09D0_0012_0D7D()
 *
 * @name f__B4B8_09D0_0012_0D7D
 * @implements B4B8:09D0:0012:0D7D ()
 * @implements B4B8:09E2:003C:C270
 * @implements B4B8:0A14:000A:5F41
 *
 * Called From: B4B8:0E89:0034:00A7
 */
void f__B4B8_09D0_0012_0D7D()
{
l__09D0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0A1A; emu_last_cs = 0xB4B8; emu_last_ip = 0x09DC; emu_last_length = 0x0012; emu_last_crc = 0x0D7D; emu_call(); return; }
	emu_xorw(&emu_dx, emu_dx);
	goto l__0A14;
l__09E2:
	emu_ax = emu_dx;
	emu_addw(&emu_ax, 0x10);
	emu_andw(&emu_ax, 0xE0);
	emu_cl = 0x5;
	emu_sarw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_dx;
	emu_addw(&emu_ax, 0x8);
	emu_andw(&emu_ax, 0xF0);
	emu_cl = 0x4;
	emu_sarw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x4);
	emu_cl = 0x4;
	emu_shlb(&emu_al, emu_cl);
	emu_orb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_dx);
l__0A14:
	emu_cmpw(&emu_dx, 0x100);
	if ((int16)emu_dx < (int16)0x100) goto l__09E2;
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Window_WidgetClick_Create()
 *
 * @name emu_Window_WidgetClick_Create
 * @implements B4B8:0BC1:000C:1630 ()
 * @implements B4B8:0BCD:008A:FDF3
 * @implements B4B8:0C57:00A3:B72D
 * @implements B4B8:0CAA:0050:EFB0
 * @implements B4B8:0CFA:0024:2C86
 * @implements B4B8:0D05:0019:9B88
 * @implements B4B8:0D1E:0005:8BCF
 *
 * Called From: B4B8:1A37:000B:A1A7
 */
void emu_Window_WidgetClick_Create()
{
l__0BC1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	goto l__0D05;
l__0BCD:
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs);
	emu_push(0x0C57); emu_GUI_Widget_Allocate();
l__0C57:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0x0);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0xA) < (int16)0x0) {
		emu_ax = emu_si;
		emu_dx = 0x18;
		emu_imuluw(&emu_ax, emu_dx);
		emu_dx = 0x2E6B;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory16(emu_es, emu_bx, 0x22) = emu_ax;
		emu_ax = emu_si;
		emu_dx = 0x18;
		emu_imuluw(&emu_ax, emu_dx);
		emu_dx = 0x2E6B;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory16(emu_es, emu_bx, 0x24) = emu_ax;
	}
l__0CAA:
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x32) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x30) = emu_dx;
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x0CFA); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0242_0017_581D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0CFA:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x3C28) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x3C26) = emu_ax;
	emu_incw(&emu_si);
l__0D05:
	emu_ax = emu_si;
	emu_dx = 0x18;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E6B;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) == 0xFFFF) goto l__0D1E;
	goto l__0BCD;
l__0D1E:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_0D23_0010_BA99()
 *
 * @name f__B4B8_0D23_0010_BA99
 * @implements B4B8:0D23:0010:BA99 ()
 * @implements B4B8:0D33:000F:D70C
 * @implements B4B8:0D42:0025:9D20
 * @implements B4B8:0D67:0056:DC5A
 * @implements B4B8:0DBD:009B:1454
 * @implements B4B8:0E58:0034:00A7
 * @implements B4B8:0E8C:001E:3931
 * @implements B4B8:0EAA:0024:9D41
 * @implements B4B8:0ECA:0004:893F
 *
 * Called From: 34B8:0039:0005:0000
 * Called From: B4B8:21DF:0004:C890
 */
void f__B4B8_0D23_0010_BA99()
{
l__0D23:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x2177), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x2177) == 0x0) goto l__0D33;
	goto l__0ECA;
l__0D33:
	emu_get_memory16(emu_ds, 0x00, 0x2177) = 0x1;
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D42); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0D42:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6116) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x6114) = 0x0;
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x223E;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D67); emu_cs = 0x1587; f__1587_0008_0012_30AE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0D67:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6114));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6116));
	emu_get_memory16(emu_ds, 0x00, 0x38D0) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x38CE) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6CE9);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6CE7);
	emu_subw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6114));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6116));
	emu_get_memory16(emu_ds, 0x00, 0x38D4) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x38D2) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38D0);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x38CE);
	emu_get_memory16(emu_ds, 0x00, 0x39F0) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x39EE) = emu_dx;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38D4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38D2));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39F0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_push(emu_ds);
	emu_ax = 0x2247;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DBD); emu_cs = 0x253D; emu_File_ReadBlockFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0DBD:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x20);
	emu_get_memory16(emu_ds, 0x00, 0x39F2) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x14);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x39F4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_get_memory16(emu_ds, 0x00, 0x39F8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x39F6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x39FA) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x38D2), emu_dx);
	emu_sbbw(&emu_get_memory16(emu_ds, 0x00, 0x38D4), emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x38CE), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38D0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38CE));
	emu_push(emu_cs); emu_push(0x0E58); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__0E58:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x38D0) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x38CE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38D0);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x38CE);
	emu_get_memory16(emu_ds, 0x00, 0x3954) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3952) = emu_dx;
	emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x38D2), 0x100);
	emu_sbbw(&emu_get_memory16(emu_ds, 0x00, 0x38D4), 0x0);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x38CE), 0x100);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3954));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3952));
	emu_push(emu_cs);
	emu_push(0x0E8C); f__B4B8_09D0_0012_0D7D();
l__0E8C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38D0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38CE));
	emu_push(emu_ds);
	emu_ax = 0x6168;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x3902;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2250;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0EAA); f__B4B8_2295_0018_A862();
l__0EAA:
	emu_addw(&emu_sp, 0x10);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x38D2), emu_dx);
	emu_sbbw(&emu_get_memory16(emu_ds, 0x00, 0x38D4), emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x38CE), emu_ax);
l__0ECA:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_0ECE_000B_BD2E()
 *
 * @name f__B4B8_0ECE_000B_BD2E
 * @implements B4B8:0ECE:000B:BD2E ()
 *
 * Called From: 34B8:0025:0005:0000
 */
void f__B4B8_0ECE_000B_BD2E()
{
l__0ECE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ds, 0x00, 0x2177) = 0x0;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_110D_000D_FD5C()
 *
 * @name f__B4B8_110D_000D_FD5C
 * @implements B4B8:110D:000D:FD5C ()
 * @implements B4B8:111A:0055:2891
 * @implements B4B8:1161:000E:7FB5
 * @implements B4B8:1164:000B:43AB
 *
 * Called From: 34B8:002F:0005:0000
 * Called From: B4B8:21E7:0008:5434
 */
void f__B4B8_110D_000D_FD5C()
{
l__110D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__1164;
l__111A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3C42));
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_bx = 0x10;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_bx = 0x10;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x9);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x9) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x6);
		if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x4) <= (int16)0x6) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3C42));
			emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
			emu_al = emu_get_memory8(emu_ss, emu_bp,  0x6);
			emu_cl = 0x4;
			emu_shlb(&emu_al, emu_cl);
			emu_addb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x4));
			emu_addb(&emu_al, 0x90);
			emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
		}
	}
l__1161:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__1164:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x100);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) < (int16)0x100) goto l__111A;
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_116F_0013_15F7()
 *
 * @name f__B4B8_116F_0013_15F7
 * @implements B4B8:116F:0013:15F7 ()
 * @implements B4B8:1182:000B:03A1
 * @implements B4B8:118D:0009:F53F
 * @implements B4B8:1196:0009:C506
 * @implements B4B8:119F:0019:6C90
 * @implements B4B8:11B8:001C:8274
 * @implements B4B8:11D4:000E:4382
 * @implements B4B8:11E2:004D:9641
 * @implements B4B8:122F:0006:778E
 * @implements B4B8:1369:000C:2396
 * @implements B4B8:1375:000A:92AE
 * @implements B4B8:14DB:0039:83D0
 * @implements B4B8:1514:0006:F780
 * @implements B4B8:151A:0026:AD40
 * @implements B4B8:1540:000E:6379
 * @implements B4B8:154E:0026:6A7F
 * @implements B4B8:1574:000B:42FA
 * @implements B4B8:157F:000F:726A
 * @implements B4B8:158E:0023:DD60
 * @implements B4B8:15B1:005D:ED2E
 * @implements B4B8:160E:0009:7F8A
 * @implements B4B8:160F:0008:7FA9
 * @implements B4B8:1617:000B:714A
 * @implements B4B8:1622:0012:0C56
 * @implements B4B8:1628:000C:A39F
 * @implements B4B8:1634:000A:921D
 * @implements B4B8:16CE:0005:8BCF
 *
 * Called From: B4B8:17DE:0013:8AC6
 */
void f__B4B8_116F_0013_15F7()
{
l__116F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA4);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__1182;
	goto l__16CE;
l__1182:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x118D); emu_cs = 0x1FB5; emu_File_Exists();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__118D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1196;
	goto l__16CE;
l__1196:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x119F); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__119F:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = 0x7D00;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x11B8); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__11B8:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x11D4); emu_cs = 0x253D; emu_File_ReadBlockFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__11D4:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x11E2); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__11E2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_bx, emu_ax);
	emu_addw(&emu_bx, 0x1388);
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x26) = emu_bx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x24);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x26);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x7D0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x2255;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x122F); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__122F:
	emu_addw(&emu_sp, 0x16);
	goto l__1369;
l__1369:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__1375;
	/* Unresolved jump */ emu_ip = 0x1235; emu_last_cs = 0xB4B8; emu_last_ip = 0x1372; emu_last_length = 0x000C; emu_last_crc = 0x2396; emu_call();
l__1375:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x379C) != 0x0) { /* Unresolved jump */ emu_ip = 0x137F; emu_last_cs = 0xB4B8; emu_last_ip = 0x137A; emu_last_length = 0x000A; emu_last_crc = 0x92AE; emu_call(); return; }
	goto l__14DB;
l__14DB:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x24);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x26);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x7D0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x229A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1514); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1514:
	emu_addw(&emu_sp, 0x16);
	goto l__1628;
l__151A:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x78;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA4);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA4);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ds);
	emu_ax = 0x229A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1540); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1540:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x154E); emu_cs = 0x34FC; overlay(0x34FC, 0); f__B4FC_07E2_0012_911F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__154E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x10);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x1C);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x226B;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1574); emu_cs = 0x01F7; emu_String_sscanf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1574:
	emu_addw(&emu_sp, 0x18);
	emu_cmpw(&emu_ax, 0x4);
	if ((int16)emu_ax >= (int16)0x4) goto l__157F;
	goto l__1617;
l__157F:
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x20) = 0x0;
	emu_xorw(&emu_si, emu_si);
	goto l__160F;
l__158E:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_si;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_cs); emu_push(0x15B1); emu_cs = 0x01F7; emu_String_strcasecmp();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__15B1:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__160E;
	emu_ax = emu_si;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_es = emu_dx;
	emu_xchgw(&emu_ax, &emu_bx);
	emu_get_memory16(emu_es, emu_bx, 0x52) = emu_ax;
	emu_ax = emu_si;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_es = emu_dx;
	emu_xchgw(&emu_ax, &emu_bx);
	emu_get_memory16(emu_es, emu_bx, 0x40) = emu_ax;
	emu_ax = emu_si;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_es = emu_dx;
	emu_xchgw(&emu_ax, &emu_bx);
	emu_get_memory16(emu_es, emu_bx, 0x4E) = emu_ax;
	emu_ax = emu_si;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_es = emu_dx;
	emu_xchgw(&emu_ax, &emu_bx);
	emu_get_memory16(emu_es, emu_bx, 0x50) = emu_ax;
	goto l__1617;
l__160E:
	emu_incw(&emu_si);
l__160F:
	emu_cmpw(&emu_si, 0x1B);
	if ((int16)emu_si >= (int16)0x1B) goto l__1617;
	goto l__158E;
l__1617:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1622); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__1622:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
l__1628:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__1634;
	goto l__151A;
l__1634:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x379C) != 0x0) { /* Unresolved jump */ emu_ip = 0x163E; emu_last_cs = 0xB4B8; emu_last_ip = 0x1639; emu_last_length = 0x000A; emu_last_crc = 0x921D; emu_call(); return; }
	goto l__16CE;
l__16CE:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_2295_0018_A862()
 *
 * @name f__B4B8_2295_0018_A862
 * @implements B4B8:2295:0018:A862 ()
 * @implements B4B8:22AD:001F:5CD7
 * @implements B4B8:22CC:0005:862E
 * @implements B4B8:22D1:0002:2597
 *
 * Called From: B4B8:0EA7:001E:3931
 * Called From: B4B8:19BC:0031:26DF
 * Called From: B4B8:19D9:001D:EB62
 */
void f__B4B8_2295_0018_A862()
{
l__2295:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_ax = 0x2330;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x22AD); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__22AD:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x22CC); emu_cs = 0x15C2; emu_Script_LoadFromFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { overlay(0x34B8, 1); }
l__22CC:
	emu_addw(&emu_sp, 0x10);
	goto l__22D1;
l__22D1:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
