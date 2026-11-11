/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 InitializeUART(M2C_UNK);
s32 fn_800CA148(s32, s32);
M2C_UNK fn_8015DAC8(s32, s32, s32 *, s32);
extern s32 lbl_80350F50;
extern f32 lbl_80350388;
extern f32 lbl_8035038C;
extern f64 lbl_80352498;
extern f64 lbl_803524A0;
extern f64 lbl_803524A8;
extern f64 lbl_803524B0;
extern f64 lbl_803524B8;
extern f64 lbl_803524C0;
extern f64 lbl_803524C8;
extern f64 lbl_803524D0;
extern f64 lbl_803524D8;
extern f64 lbl_803524E0;
extern f64 lbl_803524E8;
extern f64 lbl_803524F0;
extern f64 lbl_803524F8;
extern f64 lbl_80352500;
extern f64 lbl_80352508;
extern f64 lbl_80352510;
extern f64 lbl_80352518;
extern f64 lbl_80352520;
extern f64 lbl_80352528;
extern f64 lbl_80352530;
extern f64 lbl_80352538;
extern f64 lbl_80352540;
extern f64 lbl_80352548;
extern f64 lbl_80352550;
extern f64 lbl_80352558;
extern f64 lbl_80352560;
extern f64 lbl_80352568;
extern f64 lbl_80352570;
extern f64 lbl_80352578;
extern f64 lbl_80352580;
extern f64 lbl_80352588;
extern f64 lbl_80352590;
extern f64 lbl_80352598;
extern f64 lbl_803525A0;
extern f64 lbl_803525A8;
extern f64 lbl_803525B0;
extern f64 lbl_803525B8;
f64 ArcTan(f32);
extern f64 lbl_803525C0;
extern f64 lbl_803525C8;
extern f64 lbl_803525D0;
extern f64 lbl_803525D8;
extern f64 lbl_803525E0;
extern f64 lbl_803525E8;
extern f64 lbl_803525F0;
extern f64 lbl_803525F8;
extern f64 lbl_80352600;
extern f64 lbl_80352608;
extern f64 lbl_80352610;
extern M2C_UNK lbl_801DAEF0;
extern f64 lbl_80352618;
extern f64 lbl_80352620;
extern f64 lbl_80352628;
extern f64 lbl_80352630;
extern f64 lbl_80352638;
extern f64 lbl_80352640;
extern f64 lbl_80352648;
extern f64 lbl_80352650;
extern f64 lbl_80352658;
extern f64 lbl_80352660;
extern f64 lbl_80352668;
extern f64 lbl_80352670;
extern f64 lbl_80352678;
extern f64 lbl_80352680;
extern M2C_UNK lbl_801DAF20;
extern s32 lbl_80350F48;
extern f64 lbl_80350F58;
extern f64 lbl_80352690;
extern f64 lbl_80352698;
extern f64 lbl_803526A0;
extern f64 lbl_803526A8;
extern f64 lbl_803526B0;
extern f64 lbl_803526B8;
extern f64 lbl_803526C0;
extern f64 lbl_803526C8;
extern f64 lbl_803526D0;
extern f64 lbl_803526D8;
extern f64 lbl_803526E0;
extern f64 lbl_803526E8;
extern f64 lbl_803526F0;
extern f64 lbl_803526F8;
extern f64 lbl_80352700;
extern f64 lbl_80350F60;
extern f64 lbl_80352710;
extern f64 lbl_80352718;
extern f64 lbl_80352720;
extern f64 lbl_80352728;
extern f64 lbl_80352730;
f64 fn_8015685C();
extern M2C_UNK lbl_801DAF30;
extern f64 lbl_80352740;
extern f64 lbl_80352748;
extern f64 lbl_80352750;
extern f64 lbl_80352758;
extern f64 lbl_80352760;
extern f64 lbl_80352768;
extern f64 lbl_80352770;
extern f64 lbl_80352778;
extern f64 lbl_80352780;
extern f64 lbl_80352788;
extern f64 lbl_80352790;
extern f64 lbl_80352798;
extern f64 lbl_803527A0;
extern f64 lbl_803527A8;
extern f64 lbl_803527B0;
extern f64 lbl_803527B8;
extern f64 lbl_803527C0;
extern f64 lbl_803527C8;
extern f64 lbl_803527D0;
extern f64 lbl_803527D8;
extern f64 lbl_803527E0;
extern f64 lbl_803527E8;
extern f64 lbl_803527F0;
extern f64 lbl_803527F8;
extern f64 lbl_80352800;
extern f64 lbl_80352808;
extern f64 lbl_80352810;
extern f64 lbl_80352818;
extern f64 lbl_80352820;
extern f64 lbl_80352828;
extern f64 lbl_80352830;
extern f64 lbl_80352838;
extern f64 lbl_80352840;
s32 __kernel_rem_pio2(f64 *, void *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_801DAF60;
extern M2C_UNK lbl_801DB068;
extern f64 lbl_80352850;
extern f64 lbl_80352858;
extern f64 lbl_80352860;
extern f64 lbl_80352868;
extern f64 lbl_80352870;
extern f64 lbl_80352878;
extern f64 lbl_80352880;
extern f64 lbl_80352888;
extern f64 lbl_80352890;
extern f64 lbl_80352898;
extern f64 lbl_803528A8;
extern f64 lbl_803528B0;
extern f64 lbl_803528B8;
extern f64 lbl_803528C0;
extern f64 lbl_803528C8;
extern f64 lbl_803528D0;
extern f64 lbl_803528D8;
extern f64 lbl_803528E0;
extern f64 lbl_803528E8;

s32 fn_801531EC(s32 arg0, s32 arg1, s32 *arg2, s32 arg3);
void *fwide(void *arg0, s32 arg1);
f64 fn_80153338(f64 farg0);
f64 fn_80153648(f64 farg0, f64 farg1);
f64 __ieee754_atan2(f64 farg0, f64 farg1);
f64 fn_80153B3C(s32 arg3, f64 farg0, f64 farg6, f64 farg7);
M2C_UNK *__ieee754_fmod(f64 farg0, f64 farg1);
f64 __ieee754_log(f64 farg0);
f64 fn_80154310(f64 farg0);
f64 fn_80154420(f64 farg0, f64 farg1);
s32 __ieee754_rem_pio2(void *arg0, f64 farg0);
f64 __kernel_cos(f64 farg0, f64 farg1);

s32 fn_801531EC(s32 arg0, s32 arg1, s32 *arg2, s32 arg3) {
    s32 var_r3;

    var_r3 = 0;
    if ((s32) lbl_80350F50 == 0) {
        var_r3 = InitializeUART(0xE100);
        if (var_r3 == 0) {
            lbl_80350F50 = 1;
        }
    }
    if (var_r3 != 0) {
        return 1;
    }
    if (fn_800CA148(arg1, *arg2) != 0) {
        *arg2 = 0;
        return 1;
    }
    fn_8015DAC8(arg0, arg1, arg2, arg3);
    return 0;
}

void *fwide(void *arg0, s32 arg1) {
    s32 temp_r0;
    u8 temp_r5;

    if ((arg0 == NULL) || !(((u16) M2C_FIELD(arg0, u16 *, 4) >> 6U) & 7)) {
        return NULL;
    }
    temp_r5 = M2C_FIELD(arg0, u8 *, 5);
    temp_r0 = (temp_r5 >> 4U) & 3;
    if (temp_r0 != 1) {
        if (temp_r0 < 1) {
            if (temp_r0 < 0) {
                return arg0;
            }
            if (arg1 > 0) {
                M2C_FIELD(arg0, u8 *, 5) = (u8) ((temp_r5 & ~0x30) | 0x20);
            } else if (arg1 < 0) {
                M2C_FIELD(arg0, u8 *, 5) = (u8) ((temp_r5 & ~0x30) | 0x10);
            }
            return (void *) arg1;
        }
        if (temp_r0 < 3) {
            return (void *)1U;
        }
        return arg0;
    }
    return (void *)-1U;
}

f64 fn_80153338(f64 farg0) {
    s32 unksp14;
    f64 sp10;
    f64 sp8;
    f64 temp_f0;
    f64 temp_f10;
    f64 temp_f1;
    f64 temp_f2;
    f64 temp_f2_2;
    f64 temp_f2_3;
    f64 temp_f2_4;
    f64 temp_f3;
    f64 temp_f3_2;
    f64 temp_f3_3;
    f64 temp_f3_4;
    f64 var_f11;
    f64 var_f9;
    s32 temp_r3;
    s32 temp_r4;
    s32 unkspC;

    sp8 = farg0;
    temp_r4 = M2C_BITWISE(s32, sp8);
    temp_r3 = temp_r4 & 0x7FFFFFFF;
    if (temp_r3 >= 0x3FF00000) {
        if ((unkspC | (temp_r3 + 0xC0100000)) == 0) {
            if (temp_r4 > 0) {
                return lbl_80352498;
            }
            return lbl_803524A0;
        }
        return (f64) lbl_80350388;
    }
    if (temp_r3 < 0x3FE00000) {
        if (temp_r3 <= 0x3C600000) {
            return lbl_803524A8;
        }
        temp_f10 = farg0 * farg0;
        return lbl_803524A8 - (farg0 - -((farg0 * ((temp_f10 * ((temp_f10 * ((temp_f10 * ((temp_f10 * ((temp_f10 * ((lbl_803524E0 * temp_f10) + lbl_803524D8)) + lbl_803524D0)) + lbl_803524C8)) + lbl_803524C0)) + lbl_803524B8)) / ((temp_f10 * ((temp_f10 * ((temp_f10 * ((lbl_80352508 * temp_f10) + lbl_80352500)) + lbl_803524F8)) + lbl_803524F0)) + lbl_803524E8))) - lbl_803524B0));
    }
    if (temp_r4 < 0) {
        temp_f1 = (lbl_803524E8 + farg0);
        temp_f1 *= lbl_80352510;
        var_f11 = lbl_80352498;
        if ((f32) temp_f1 > (f32) var_f11) {
            temp_f3 = __frsqrte(temp_f1);
            temp_f3_2 = lbl_80352510 * temp_f3 * -((temp_f1 * (temp_f3 * temp_f3)) - lbl_80352518);
            temp_f3_3 = lbl_80352510 * temp_f3_2 * -((temp_f1 * (temp_f3_2 * temp_f3_2)) - lbl_80352518);
            temp_f3_4 = lbl_80352510 * temp_f3_3 * -((temp_f1 * (temp_f3_3 * temp_f3_3)) - lbl_80352518);
            var_f11 = (lbl_80352510 * temp_f3_4 * -((temp_f1 * (temp_f3_4 * temp_f3_4)) - lbl_80352518));
            var_f11 *= temp_f1;
        } else if ((f32) var_f11 == (f32) temp_f1) {

        } else if ((f32) temp_f1 != (f32) var_f11) {
            var_f11 = (f64) lbl_80350388;
        } else {
            var_f11 = (f64) lbl_8035038C;
        }
        return -((lbl_80352520 * (var_f11 + ((((temp_f1 * ((temp_f1 * ((temp_f1 * ((temp_f1 * ((temp_f1 * ((lbl_803524E0 * temp_f1) + lbl_803524D8)) + lbl_803524D0)) + lbl_803524C8)) + lbl_803524C0)) + lbl_803524B8)) / ((temp_f1 * ((temp_f1 * ((temp_f1 * ((lbl_80352508 * temp_f1) + lbl_80352500)) + lbl_803524F8)) + lbl_803524F0)) + lbl_803524E8)) * var_f11) - lbl_803524B0))) - lbl_803524A0);
    }
    var_f9 = lbl_80352498;
    temp_f0 = lbl_80352510 * (lbl_803524E8 - farg0);
    if (temp_f0 > (f32) var_f9) {
        temp_f2 = __frsqrte(temp_f0);
        temp_f2_2 = lbl_80352510 * temp_f2 * -((temp_f0 * (temp_f2 * temp_f2)) - lbl_80352518);
        temp_f2_3 = lbl_80352510 * temp_f2_2 * -((temp_f0 * (temp_f2_2 * temp_f2_2)) - lbl_80352518);
        temp_f2_4 = lbl_80352510 * temp_f2_3 * -((temp_f0 * (temp_f2_3 * temp_f2_3)) - lbl_80352518);
        var_f9 = temp_f0 * (lbl_80352510 * temp_f2_4 * -((temp_f0 * (temp_f2_4 * temp_f2_4)) - lbl_80352518));
    } else if ((f32) var_f9 == temp_f0) {

    } else if ((f32) temp_f0 != (f32) var_f9) {
        var_f9 = (f64) lbl_80350388;
    } else {
        var_f9 = (f64) lbl_8035038C;
    }
    sp10 = var_f9;
    unksp14 = 0;
    return lbl_80352520 * (sp10 + ((((temp_f0 * ((temp_f0 * ((temp_f0 * ((temp_f0 * ((temp_f0 * ((lbl_803524E0 * temp_f0) + lbl_803524D8)) + lbl_803524D0)) + lbl_803524C8)) + lbl_803524C0)) + lbl_803524B8)) / ((temp_f0 * ((temp_f0 * ((temp_f0 * ((temp_f0 * lbl_80352508) + lbl_80352500)) + lbl_803524F8)) + lbl_803524F0)) + lbl_803524E8)) * var_f9) + (-((sp10 * sp10) - temp_f0) / (var_f9 + sp10))));
}

f64 fn_80153648(f64 farg0, f64 farg1) {
    f64 temp_f5;
    f64 temp_f8;
    f64 var_f1_2;
    u8 unkspC;
    f64 sp10;
    f64 sp8;
    f64 temp_f0;
    f64 temp_f11;
    f64 temp_f2;
    f64 temp_f3;
    f64 temp_f3_2;
    f64 temp_f3_3;
    f64 temp_f3_4;
    f64 temp_f4;
    f64 var_f1;
    s32 unksp14;
    f64 var_f2;
    s32 temp_r4;
    s32 temp_r5;

    var_f2 = farg1;
    sp8 = farg0;
    temp_r4 = M2C_BITWISE(s32, sp8);
    temp_r5 = temp_r4 & 0x7FFFFFFF;
    if (temp_r5 >= 0x3FF00000) {
        if ((unkspC | (temp_r5 + 0xC0100000)) == 0) {
            return (lbl_80352528 * farg0) + (lbl_80352530 * farg0);
        }
        return (f64) lbl_80350388;
    }
    if (temp_r5 < 0x3FE00000) {
        if (temp_r5 < 0x3E400000) {
            if ((lbl_80352538 + farg0) > lbl_80352540) {
                return farg0;
            }
            goto block_9;
        }
        var_f2 = farg0 * farg0;
block_9:
        temp_f0 = (var_f2 * ((var_f2 * ((var_f2 * ((var_f2 * ((var_f2 * ((lbl_80352570 * var_f2) + lbl_80352568)) + lbl_80352560)) + lbl_80352558)) + lbl_80352550)) + lbl_80352548)) / ((var_f2 * ((var_f2 * ((var_f2 * ((lbl_80352590 * var_f2) + lbl_80352588)) + lbl_80352580)) + lbl_80352578)) + lbl_80352540);
        sp10 = temp_f0;
        return (sp8 * temp_f0) + sp8;
    }
    temp_f11 = lbl_80352540 - fabs(farg0);
    temp_f2 = lbl_80352598 * temp_f11;
    var_f1_2 = lbl_803525A0;
    sp10 = temp_f11;
    temp_f8 = (temp_f2 * ((temp_f2 * ((temp_f2 * ((lbl_80352590 * temp_f2) + lbl_80352588)) + lbl_80352580)) + lbl_80352578)) + lbl_80352540;
    temp_f5 = temp_f2 * ((temp_f2 * ((temp_f2 * ((temp_f2 * ((temp_f2 * ((lbl_80352570 * temp_f2) + lbl_80352568)) + lbl_80352560)) + lbl_80352558)) + lbl_80352550)) + lbl_80352548);
    if ((f32) temp_f2 > (f32) var_f1_2) {
        temp_f3 = __frsqrte(temp_f2);
        temp_f3_2 = lbl_80352598 * temp_f3 * -((temp_f2 * (temp_f3 * temp_f3)) - lbl_803525A8);
        temp_f3_3 = lbl_80352598 * temp_f3_2 * -((temp_f2 * (temp_f3_2 * temp_f3_2)) - lbl_803525A8);
        temp_f3_4 = lbl_80352598 * temp_f3_3 * -((temp_f2 * (temp_f3_3 * temp_f3_3)) - lbl_803525A8);
        var_f1_2 = temp_f2 * (lbl_80352598 * temp_f3_4 * -((temp_f2 * (temp_f3_4 * temp_f3_4)) - lbl_803525A8));
    } else if ((f32) var_f1_2 == temp_f2) {

    } else if (temp_f2 != (f32) var_f1_2) {
        var_f1_2 = (f64) lbl_80350388;
    } else {
        var_f1_2 = (f64) lbl_8035038C;
    }
    if (temp_r5 >= 0x3FEF3333) {
        temp_f4 = temp_f5 / temp_f8;
        sp10 = temp_f4;
        var_f1 = lbl_80352528 - ((lbl_803525B0 * ((var_f1_2 * temp_f4) + var_f1_2)) - lbl_80352530);
    } else {
        sp10 = var_f1_2;
        unksp14 = 0;
        var_f1 = lbl_803525B8 - (((lbl_803525B0 * var_f1_2 * (temp_f5 / temp_f8)) - -((lbl_803525B0 * (-((sp10 * sp10) - temp_f2) / (var_f1_2 + sp10))) - lbl_80352530)) - -((lbl_803525B0 * sp10) - lbl_803525B8));
    }
    if (temp_r4 > 0) {
        return var_f1;
    }
    return -var_f1;
}

f64 __ieee754_atan2(f64 farg0, f64 farg1) { return 0; } /* draft: stub */

f64 fn_80153B3C(s32 arg3, f64 farg0, f64 farg6, f64 farg7) {
    s32 unkspC;
    f64 sp10;                                       /* compiler-managed */
    f64 sp8;
    f64 temp_f2;
    f64 temp_f3;
    f64 temp_f6;
    f64 var_f7;
    f64 var_f8;
    s32 var_r6;
    u32 temp_r5;
    u32 temp_r7;
    u32 temp_r8;
    void *temp_r3;

    var_r6 = arg3;
    var_f7 = farg6;
    var_f8 = farg7;
    sp8 = farg0;
    temp_r8 = M2C_BITWISE(u32, sp8);
    temp_r5 = temp_r8 & 0x7FFFFFFF;
    temp_r7 = temp_r8 >> 0x1FU;
    if (temp_r5 >= 0x40862E42U) {
        if (temp_r5 >= 0x7FF00000U) {
            if (((temp_r8 & 0xFFFFF) | unkspC) != 0) {
                return 2.0 * farg0;
            }
            if ((s32) temp_r7 == 0) {
                return farg0;
            }
            return lbl_80352618;
        }
        if ((f32) farg0 > (f32) lbl_80352620) {
            return lbl_80352628;
        }
        if ((f32) farg0 < (f32) lbl_80352630) {
            return lbl_80352618;
        }
        goto block_11;
    }
block_11:
    if (temp_r5 > 0x3FD62E42U) {
        if (temp_r5 < 0x3FF0A2B2U) {
            temp_r3 = &lbl_801DAEF0 + (temp_r7 * 8);
            var_r6 = (1 - temp_r7) - temp_r7;
            var_f8 = M2C_FIELD(temp_r3, f64 *, 0x20);
            var_f7 = sp8 - M2C_FIELD(temp_r3, f64 *, 0x10);
        } else {
            var_r6 = (s32) ((lbl_80352638 * sp8) + *(&lbl_801DAEF0 + (temp_r7 * 8)));
            temp_f2 = (f64) var_r6;
            var_f7 = -((temp_f2 * M2C_FIELD(&lbl_801DAEF0, f64 *, 0x10)) - sp8);
            var_f8 = temp_f2 * M2C_FIELD(&lbl_801DAEF0, f64 *, 0x20);
        }
        sp8 = var_f7 - var_f8;
        goto block_20;
    }
    if (temp_r5 < 0x3E300000U) {
        if ((f32) (lbl_80352640 + sp8) > (f32) lbl_80352648) {
            return lbl_80352648 + sp8;
        }
        goto block_20;
    }
    var_r6 = 0;
block_20:
    temp_f6 = sp8 * sp8;
    temp_f3 = -((temp_f6 * ((temp_f6 * ((temp_f6 * ((temp_f6 * ((lbl_80352670 * temp_f6) + lbl_80352668)) + lbl_80352660)) + lbl_80352658)) + lbl_80352650)) - sp8);
    if (var_r6 == 0) {
        return lbl_80352648 - (((sp8 * temp_f3) / (temp_f3 - lbl_80352678)) - sp8);
    }
    sp10 = lbl_80352648 - ((var_f8 - ((sp8 * temp_f3) / (lbl_80352678 - temp_f3))) - var_f7);
    if (var_r6 >= -0x3FD) {
        sp10 = M2C_BITWISE(s32, sp10) + (var_r6 << 0x14);
        return M2C_BITWISE(f64, sp10);
    }
    sp10 += (var_r6 + 0x3E8) << 0x14;
    return lbl_80352680 * M2C_BITWISE(f64, sp10);
}

M2C_UNK *__ieee754_fmod(f64 farg0, f64 farg1) {
    s32 unkspC;
    int unksp14;
    f64 sp10;
    f64 sp8;                                        /* compiler-managed */
    s32 temp_r10;
    s32 temp_r10_2;
    s32 temp_r6;
    s32 temp_r6_4;
    s32 temp_r6_7;
    s32 temp_r7;
    s32 temp_r8;
    s32 temp_r9;
    s32 var_ctr;
    s32 var_r11;
    s32 var_r3;
    s32 var_r3_4;
    s32 var_r3_5;
    s32 var_r5;
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r6_3;
    s32 var_r7;
    s32 var_r8;
    s32 var_r9;
    s32 var_r9_2;
    u32 temp_r0;
    u32 temp_r10_3;
    u32 temp_r6_2;
    u32 temp_r6_3;
    u32 temp_r6_5;
    u32 temp_r6_6;
    u32 var_r3_2;
    u32 var_r3_3;
    u32 var_r4;

    sp10 = farg1;
    sp8 = farg0;
    temp_r10 = M2C_BITWISE(s32, sp10);
    temp_r6 = M2C_BITWISE(s32, sp8);
    var_r5 = unksp14;
    temp_r8 = temp_r10 & 0x7FFFFFFF;
    temp_r0 = temp_r6 & 0x80000000;
    var_r4 = unkspC;
    var_r3_2 = temp_r8 | var_r5;
    temp_r7 = temp_r6 ^ temp_r0;
    if ((var_r3_2 == 0) || (temp_r7 >= 0x7FF00000) || (var_r3_2 = temp_r8 | ((u32) (var_r5 | -var_r5) >> 0x1FU), ((var_r3_2 > 0x7FF00000U) != 0))) {
        return (M2C_UNK *) var_r3_2;
    }
    if (temp_r7 <= temp_r8) {
        if ((temp_r7 < temp_r8) || (var_r4 < (u32) var_r5)) {
            return (M2C_UNK *) var_r3_2;
        }
        if (var_r4 == (u32) var_r5) {
            return &lbl_801DAF20;
        }
        goto block_10;
    }
block_10:
    if (temp_r7 < 0x100000) {
        if (temp_r7 == 0) {
            var_r3_3 = var_r4;
            var_r11 = -0x413;
loop_14:
            if ((s32) var_r3_3 > 0) {
                var_r3_3 *= 2;
                var_r11 -= 1;
                goto loop_14;
            }
        } else {
            var_r3_4 = temp_r7 << 0xB;
            var_r11 = -0x3FE;
loop_18:
            if (var_r3_4 > 0) {
                var_r3_4 *= 2;
                var_r11 -= 1;
                goto loop_18;
            }
        }
    } else {
        var_r11 = (temp_r7 >> 0x14) - 0x3FF;
    }
    if (temp_r8 < 0x100000) {
        if (temp_r8 == 0) {
            var_r6 = var_r5;
            var_r3_5 = -0x413;
loop_25:
            if (var_r6 > 0) {
                var_r6 *= 2;
                var_r3_5 -= 1;
                goto loop_25;
            }
        } else {
            var_r6_2 = temp_r8 << 0xB;
            var_r3_5 = -0x3FE;
loop_29:
            if (var_r6_2 > 0) {
                var_r6_2 *= 2;
                var_r3_5 -= 1;
                goto loop_29;
            }
        }
    } else {
        var_r3_5 = (temp_r8 >> 0x14) - 0x3FF;
    }
    if (var_r11 >= -0x3FE) {
        var_r9 = (temp_r7 & 0xFFFFF) | 0x100000;
    } else {
        temp_r9 = -0x3FE - var_r11;
        if (temp_r9 <= 0x1F) {
            temp_r6_2 = var_r4 >> (0x20 - temp_r9);
            var_r4 <<= temp_r9;
            var_r9 = (temp_r7 << temp_r9) | temp_r6_2;
        } else {
            var_r9 = var_r4 << (temp_r9 - 0x20);
            var_r4 = 0;
        }
    }
    if (var_r3_5 >= -0x3FE) {
        var_r7 = (temp_r10 & 0xFFFFF) | 0x100000;
    } else {
        temp_r10_2 = -0x3FE - var_r3_5;
        if (temp_r10_2 <= 0x1F) {
            temp_r6_3 = (u32) var_r5 >> (0x20 - temp_r10_2);
            var_r5 <<= temp_r10_2;
            var_r7 = (temp_r8 << temp_r10_2) | temp_r6_3;
        } else {
            var_r7 = var_r5 << (temp_r10_2 - 0x20);
            var_r5 = 0;
        }
    }
    temp_r6_4 = var_r11 - var_r3_5;
    var_ctr = temp_r6_4;
    if (temp_r6_4 != 0) {
loop_43:
        var_r8 = var_r9 - var_r7;
        temp_r10_3 = var_r4 - var_r5;
        if (var_r4 < (u32) var_r5) {
            var_r8 -= 1;
        }
        if (var_r8 < 0) {
            temp_r6_5 = var_r4 >> 0x1FU;
            var_r4 *= 2;
            var_r9 += var_r9 + temp_r6_5;
            goto block_50;
        }
        if ((var_r8 | temp_r10_3) == 0) {
            return &lbl_801DAF20;
        }
        var_r4 = temp_r10_3 * 2;
        var_r9 = var_r8 + (var_r8 + (temp_r10_3 >> 0x1FU));
block_50:
        var_ctr -= 1;
        if (var_ctr == 0) {
            goto block_51;
        }
        goto loop_43;
    }
block_51:
    var_r6_3 = var_r9 - var_r7;
    if (var_r4 < (u32) var_r5) {
        var_r6_3 -= 1;
    }
    if (var_r6_3 >= 0) {
        var_r9 = var_r6_3;
        var_r4 -= var_r5;
    }
    if ((var_r9 | var_r4) == 0) {
        return &lbl_801DAF20;
    }
loop_59:
    if (var_r9 < 0x100000) {
        temp_r6_6 = var_r4 >> 0x1FU;
        var_r4 *= 2;
        var_r3_5 -= 1;
        var_r9 += temp_r6_6 + var_r9;
        goto loop_59;
    }
    if (var_r3_5 >= -0x3FE) {
        unkspC = var_r4;
        var_r3 = (var_r9 + 0xFFF00000) | ((var_r3_5 + 0x3FF) << 0x14);
        sp8 = var_r3 | temp_r0;
    } else {
        temp_r6_7 = -0x3FE - var_r3_5;
        if (temp_r6_7 <= 0x14) {
            var_r9_2 = var_r9 >> temp_r6_7;
            var_r3 = (var_r4 >> temp_r6_7) | (var_r9 << (0x20 - temp_r6_7));
        } else if (temp_r6_7 <= 0x1F) {
            var_r9_2 = (s32) temp_r0;
            var_r3 = (var_r9 << (0x20 - temp_r6_7)) | (var_r4 >> temp_r6_7);
        } else {
            var_r3 = var_r9 >> (temp_r6_7 - 0x20);
            var_r9_2 = (s32) temp_r0;
        }
        unkspC = var_r3;
        sp8 = var_r9_2 | temp_r0;
    }
    return (M2C_UNK *) var_r3;
}

f64 __ieee754_log(f64 farg0) {
    s32 unkspC;
    f64 sp8;                                        /* compiler-managed */
    f64 temp_f1;
    f64 temp_f11;
    f64 temp_f12;
    f64 temp_f0;
    f64 temp_f2;
    f64 temp_f3;
    f64 temp_f3_2;
    f64 temp_f5;
    f64 temp_f5_2;
    f64 temp_f6;
    s32 temp_r3;
    s32 temp_r6;
    s32 temp_r8;
    s32 var_r8;
    s32 temp_r5;

    var_r8 = 0;
    sp8 = farg0;
    temp_r3 = M2C_BITWISE(s32, sp8);
    if (temp_r3 < 0x100000) {
        if (((temp_r3 & 0x7FFFFFFF) | unkspC) == 0) {
            return lbl_80352690 / lbl_80350F58;
        }
        if (temp_r3 < 0) {
            lbl_80350F48 = 0x21;
            return (farg0 - farg0) / lbl_80350F58;
        }
        var_r8 = -0x36;
        sp8 = farg0 * lbl_80352698;
        goto block_6;
    }
block_6:
    if (M2C_BITWISE(s32, sp8) >= 0x7FF00000) {
        return 2.0 * sp8;
    }
    temp_r6 = M2C_BITWISE(s32, sp8) & 0xFFFFF;
    temp_r5 = 0x95F64;
    temp_r5 += temp_r6;
    sp8 = temp_r6 | ((temp_r5 & 0x100000) ^ 0x3FF00000);
    temp_r8 = ((M2C_BITWISE(s32, sp8) >> 0x14) + var_r8) - 0x3FF + ((temp_r5 >> 0x14U) & 1);
    temp_f0 = M2C_BITWISE(f64, sp8) - lbl_803526A0;
    if ((s32) ((temp_r6 + 2) & 0xFFFFF) < 3) {
        if (temp_f0 == (f32) lbl_80350F58) {
            if (temp_r8 == 0) {
                return lbl_80350F58;
            }
            temp_f2 = (f64) temp_r8;
            return (lbl_803526A8 * temp_f2) + (lbl_803526B0 * temp_f2);
        }
        temp_f5_2 = -((lbl_803526C0 * temp_f0) - lbl_803526B8) * (temp_f0 * temp_f0);
        if (temp_r8 == 0) {
            return temp_f0 - temp_f5_2;
        }
        temp_f3_2 = (f64) temp_r8;
        return (lbl_803526A8 * temp_f3_2) - (-((lbl_803526B0 * temp_f3_2) - temp_f5_2) - temp_f0);
    }
    temp_f1 = temp_f0 / (lbl_803526C8 + temp_f0);
    temp_f11 = temp_f1 * temp_f1;
    temp_f12 = temp_f11 * temp_f11;
    temp_f5 = (f64) temp_r8;
    temp_f3 = (temp_f11 * ((temp_f12 * ((temp_f12 * ((lbl_803526E8 * temp_f12) + lbl_803526E0)) + lbl_803526D8)) + lbl_803526D0)) + (temp_f12 * ((temp_f12 * ((lbl_80352700 * temp_f12) + lbl_803526F8)) + lbl_803526F0));
    if (((temp_r6 + 0xFFF9EB86) | (0x6B851 - temp_r6)) > 0) {
        temp_f6 = lbl_803526B8 * temp_f0 * temp_f0;
        if (temp_r8 == 0) {
            return temp_f0 - -((temp_f1 * (temp_f6 + temp_f3)) - temp_f6);
        }
        return (lbl_803526A8 * temp_f5) - ((temp_f6 - ((temp_f1 * (temp_f6 + temp_f3)) + (lbl_803526B0 * temp_f5))) - temp_f0);
    }
    if (temp_r8 == 0) {
        return -((temp_f1 * (temp_f0 - temp_f3)) - temp_f0);
    }
    return (lbl_803526A8 * temp_f5) - (((temp_f1 * (temp_f0 - temp_f3)) - (lbl_803526B0 * temp_f5)) - temp_f0);
}

f64 fn_80154310(f64 farg0) { return 0; } /* draft: stub */

f64 fn_80154420(f64 farg0, f64 farg1) {
    s32 unksp2C;
    s32 unksp54;
    s32 unksp3C;
    s32 unksp44;
    s32 unksp1C;
    s32 unksp24;
    s32 unksp34;
    s32 unkspC;
    s32 unksp14;
    f64 sp50;                                       /* compiler-managed */
    f64 sp48;                                       /* compiler-managed */
    f64 sp40;
    f64 sp38;
    f64 sp30;
    f64 sp28;                                       /* compiler-managed */
    f64 sp20;
    f64 sp18;                                       /* compiler-managed */
    f64 sp10;
    f64 sp8;
    f64 temp_f0;
    f64 temp_f0_2;
    f64 temp_f0_3;
    f64 temp_f0_4;
    f64 temp_f0_5;
    f64 temp_f10;
    f64 temp_f10_2;
    f64 temp_f11;
    f64 temp_f11_2;
    f64 temp_f11_3;
    f64 temp_f12;
    f64 temp_f12_2;
    f64 temp_f1;
    f64 temp_f1_2;
    f64 temp_f1_3;
    f64 temp_f1_4;
    f64 temp_f1_5;
    f64 temp_f1_6;
    f64 temp_f1_7;
    f64 temp_f29;
    f64 temp_f2;
    f64 temp_f2_2;
    f64 temp_f2_3;
    f64 temp_f30;
    f64 temp_f31;
    f64 temp_f3;
    f64 temp_f4;
    f64 temp_f6;
    f64 temp_f6_2;
    f64 temp_f6_3;
    f64 temp_f7;
    f64 temp_f7_2;
    f64 temp_f7_3;
    f64 temp_f8;
    f64 temp_f9;
    f64 temp_f9_2;
    f64 var_f0;
    f64 var_f31;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r7;
    int temp_r7_2;
    s32 temp_r8;
    s32 temp_r8_2;
    s32 temp_r8_3;
    s32 temp_r8_4;
    s32 temp_r9_2;
    s32 var_r10;
    s32 var_r10_2;
    s32 var_r3;
    s32 var_r4;
    s32 var_r6;
    s32 var_r7;
    s32 var_r9;
    u32 temp_r9;
    void *temp_r8_5;

    sp10 = farg1;
    temp_r5 = M2C_BITWISE(s32, sp10);
    sp8 = farg0;
    temp_r7 = temp_r5 & 0x7FFFFFFF;
    temp_r3 = M2C_BITWISE(s32, sp8);
    var_r6 = temp_r3 & 0x7FFFFFFF;
    if ((temp_r7 | unksp14) == 0) {
        return lbl_80352740;
    }
    if ((var_r6 > 0x7FF00000) || (((u32) (var_r6 + 0x80100000) == 0U) && (unkspC != 0)) || (temp_r7 > 0x7FF00000) || (((u32) (temp_r7 + 0x80100000) == 0U) && (unksp14 != 0))) {
        return sp8 + sp10;
    }
    var_r4 = 0;
    if (temp_r3 < 0) {
        if (temp_r7 >= 0x43400000) {
            var_r4 = 2;
        } else if (temp_r7 >= 0x3FF00000) {
            temp_r8 = (temp_r7 >> 0x14) - 0x3FF;
            if (temp_r8 > 0x14) {
                temp_r8_2 = 0x34 - temp_r8;
                temp_r9 = unksp14 >> temp_r8_2;
                if (unksp14 == (u32) (temp_r9 << temp_r8_2)) {
                    var_r4 = 2 - (temp_r9 & 1);
                }
            } else if (unksp14 == 0) {
                temp_r8_3 = 0x14 - temp_r8;
                temp_r9_2 = temp_r7 >> temp_r8_3;
                if (temp_r7 == (s32) (temp_r9_2 << temp_r8_3)) {
                    var_r4 = 2 - (temp_r9_2 & 1);
                }
            }
        }
    }
    if (unksp14 == 0) {
        if ((u32) (temp_r7 + 0x80100000) == 0U) {
            if (((var_r6 + 0xC0100000) | unkspC) == 0) {
                return sp10 - sp10;
            }
            if (var_r6 >= 0x3FF00000) {
                if (temp_r5 >= 0) {
                    return sp10;
                }
                return lbl_80352748;
            }
            if (temp_r5 < 0) {
                return -sp10;
            }
            return lbl_80352748;
        }
        if ((u32) (temp_r7 + 0xC0100000) == 0U) {
            if (temp_r5 < 0) {
                return lbl_80352740 / sp8;
            }
            return sp8;
        }
        if ((u32) (temp_r5 + 0xC0000000) == 0U) {
            return sp8 * sp8;
        }
        if (((u32) (temp_r5 + 0xC0200000) == 0U) && (temp_r3 >= 0)) {
            if ((f32) sp8 > (f32) lbl_80352748) {
                temp_f1_2 = __frsqrte(sp8);
                temp_f1_3 = lbl_80352750 * temp_f1_2 * -((sp8 * (temp_f1_2 * temp_f1_2)) - lbl_80352758);
                temp_f1_4 = lbl_80352750 * temp_f1_3 * -((sp8 * (temp_f1_3 * temp_f1_3)) - lbl_80352758);
                temp_f1 = lbl_80352750 * temp_f1_4 * -((sp8 * (temp_f1_4 * temp_f1_4)) - lbl_80352758);
                return sp8 * (lbl_80352750 * temp_f1 * -((sp8 * (temp_f1 * temp_f1)) - lbl_80352758));
            }
            if ((f32) lbl_80352748 == (f32) sp8) {
                return lbl_80352748;
            }
            if ((f32) sp8 != (f32) lbl_80352748) {
                return (f64) lbl_80350388;
            }
            return (f64) lbl_8035038C;
        }
        goto block_45;
    }
block_45:
    temp_f1_5 = fabs(sp8);
    sp48 = temp_f1_5;
    if ((unkspC == 0) && (((u32) (var_r6 + 0x80100000) == 0U) || (var_r6 == 0) || ((u32) (var_r6 + 0xC0100000) == 0U))) {
        sp50 = temp_f1_5;
        if (temp_r5 < 0) {
            sp50 = lbl_80352740 / temp_f1_5;
        }
        if (temp_r3 < 0) {
            if (((var_r6 + 0xC0100000) | var_r4) == 0) {
                temp_f0 = sp50 - sp50;
                sp50 = temp_f0 / temp_f0;
            } else if (var_r4 == 1) {
                sp50 = -sp50;
            }
        }
        return sp50;
    }
    temp_r3_2 = (temp_r3 >> 0x1F) + 1;
    if ((temp_r3_2 | var_r4) == 0) {
        lbl_80350F48 = 0x21;
        return (f64) lbl_80350388;
    }
    if (temp_r7 > 0x41E00000) {
        if (temp_r7 > 0x43F00000) {
            if (var_r6 <= 0x3FEFFFFF) {
                if (temp_r5 < 0) {
                    return lbl_80352760;
                }
                return lbl_80352748;
            }
            if (var_r6 >= 0x3FF00000) {
                if (temp_r5 > 0) {
                    return lbl_80352760;
                }
                return lbl_80352748;
            }
            goto block_69;
        }
block_69:
        if (var_r6 < 0x3FEFFFFF) {
            if (temp_r5 < 0) {
                return lbl_80352760;
            }
            return lbl_80352748;
        }
        if (var_r6 > 0x3FF00000) {
            if (temp_r5 > 0) {
                return lbl_80352760;
            }
            return lbl_80352748;
        }
        temp_f6 = sp8 - lbl_80352740;
        sp28 = temp_f6;
        temp_f2 = lbl_80352778 * temp_f6;
        temp_f1_6 = (lbl_80352780 * temp_f6) - (lbl_80352788 * (temp_f6 * temp_f6 * -((temp_f6 * -((lbl_80352770 * temp_f6) - lbl_80352768)) - lbl_80352750)));
        temp_f0_2 = temp_f2 + temp_f1_6;
        sp30 = temp_f0_2;
        unksp34 = 0;
        var_f0 = temp_f1_6 - (temp_f0_2 - temp_f2);
        goto block_86;
    }
    var_r10 = 0;
    if (var_r6 < 0x100000) {
        var_r10 = -0x35;
        sp48 *= lbl_80352790;
        var_r6 = M2C_BITWISE(s32, sp48);
    }
    temp_r8_4 = var_r6 & 0xFFFFF;
    var_r7 = temp_r8_4 | 0x3FF00000;
    var_r10_2 = ((var_r6 >> 0x14) + var_r10) - 0x3FF;
    if (temp_r8_4 <= 0x3988E) {
        var_r9 = 0;
    } else if (temp_r8_4 < 0xBB67A) {
        var_r9 = 1;
    } else {
        var_r7 += 0xFFF00000;
        var_r9 = 0;
        var_r10_2 += 1;
    }
    sp48 = var_r7;
    temp_r8_5 = &lbl_801DAF30 + (var_r9 * 8);
    temp_f7 = M2C_BITWISE(f64, sp48);
    temp_f6_2 = M2C_FIELD(temp_r8_5, f64 *, 0);
    temp_f11 = temp_f7 - temp_f6_2;
    temp_f31 = lbl_80352740 / (temp_f7 + temp_f6_2);
    sp18 = lbl_80352748;
    temp_f0_3 = temp_f11 * temp_f31;
    sp18 = ((var_r7 >> 1) | 0x20000000) + 0x80000 + (var_r9 << 0x12);
    temp_f10 = M2C_BITWISE(f64, sp18);
    temp_f29 = temp_f0_3 * temp_f0_3;
    sp20 = temp_f0_3;
    unksp24 = 0;
    temp_f30 = sp20 * sp20;
    temp_f1_7 = M2C_FIELD(temp_r8_5, f64 *, 0x10);
    temp_f12 = temp_f31 * -((sp20 * (temp_f7 - (temp_f10 - temp_f6_2))) - -((sp20 * temp_f10) - temp_f11));
    temp_f2_2 = (f64) var_r10_2;
    temp_f11_2 = (temp_f12 * (sp20 + temp_f0_3)) + (temp_f29 * temp_f29 * ((temp_f29 * ((temp_f29 * ((temp_f29 * ((temp_f29 * ((lbl_803527C0 * temp_f29) + lbl_803527B8)) + lbl_803527B0)) + lbl_803527A8)) + lbl_803527A0)) + lbl_80352798));
    sp28 = temp_f2_2;
    sp18 = lbl_80352758 + temp_f30 + temp_f11_2;
    unksp1C = 0;
    temp_f9 = sp20 * sp18;
    temp_f8 = (temp_f12 * sp18) + ((temp_f11_2 - ((sp18 - lbl_80352758) - temp_f30)) * temp_f0_3);
    sp40 = temp_f9 + temp_f8;
    unksp44 = 0;
    temp_f7_2 = lbl_803527C8 * sp40;
    temp_f3 = M2C_FIELD(temp_r8_5, f64 *, 0x20) + ((lbl_803527D0 * sp40) + (lbl_803527D8 * (temp_f8 - (sp40 - temp_f9))));
    temp_f0_4 = temp_f2_2 + (temp_f7_2 + temp_f3 + temp_f1_7);
    sp30 = temp_f0_4;
    unksp34 = 0;
    var_f0 = temp_f3 - (((temp_f0_4 - temp_f2_2) - temp_f1_7) - temp_f7_2);
block_86:
    var_f31 = lbl_80352740;
    if ((temp_r3_2 | (var_r4 - 1)) == 0) {
        var_f31 = lbl_803527E0;
    }
    sp38 = sp10;
    unksp3C = 0;
    temp_f2_3 = sp38 * sp30;
    temp_f12_2 = (sp30 * (sp10 - sp38)) + (sp10 * var_f0);
    sp40 = temp_f2_3;
    temp_f0_5 = temp_f12_2 + temp_f2_3;
    sp50 = temp_f0_5;
    temp_r6 = M2C_BITWISE(s32, sp50);
    if (temp_r6 >= 0x40900000) {
        if (((temp_r6 + 0xBF700000) | unksp54) != 0) {
            return lbl_803527E8 * (lbl_803527E8 * var_f31);
        }
        if ((f32) (lbl_803527F0 + temp_f12_2) > (f32) (temp_f0_5 - temp_f2_3)) {
            return lbl_803527E8 * (lbl_803527E8 * var_f31);
        }
        goto block_98;
    }
    if ((s32) (temp_r6 & 0x7FFFFFFF) >= 0x4090CC00) {
        if (((temp_r6 + 0x3F6F3400) | unksp54) != 0) {
            return lbl_803527F8 * (lbl_803527F8 * var_f31);
        }
        M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
        if ((f32) temp_f12_2 == (f32) (temp_f0_5 - temp_f2_3)) {
            return lbl_803527F8 * (lbl_803527F8 * var_f31);
        }
        goto block_98;
    }
block_98:
    var_r3 = 0;
    if ((s32) (temp_r6 & 0x7FFFFFFF) > 0x3FE00000) {
        temp_r7_2 = temp_r6 + (0x100000 >> ((((u32) temp_r6 >> 0x14U) & 0x7FF) - 0x3FE));
        sp28 = lbl_80352748;
        temp_r5_2 = ((s32) (temp_r7_2 & 0x7FFFFFFF) >> 0x14) - 0x3FF;
        sp28 = temp_r7_2 & ~(0xFFFFF >> temp_r5_2);
        var_r3 = (s32) ((temp_r7_2 & 0xFFFFF) | 0x100000) >> (0x14 - temp_r5_2);
        if (temp_r6 < 0) {
            var_r3 = -var_r3;
        }
        sp40 -= M2C_BITWISE(f64, sp28);
    }
    temp_r4 = var_r3 << 0x14;
    sp28 = temp_f12_2 + sp40;
    unksp2C = 0;
    temp_f10_2 = lbl_80352800 * sp28;
    temp_f11_3 = (lbl_80352808 * (temp_f12_2 - (sp28 - sp40)));
    temp_f11_3 += (lbl_80352810 * sp28);
    temp_f9_2 = temp_f10_2 + temp_f11_3;
    temp_f7_3 = temp_f9_2 * temp_f9_2;
    sp50 = temp_f9_2;
    sp28 = temp_f7_3;
    temp_f6_3 = temp_f11_3 - (temp_f9_2 - temp_f10_2);
    temp_f4 = temp_f9_2 - (temp_f7_3 * ((temp_f7_3 * ((temp_f7_3 * ((temp_f7_3 * ((lbl_80352838 * temp_f7_3) + lbl_80352830)) + lbl_80352828)) + lbl_80352820)) + lbl_80352818));
    sp30 = temp_f4;
    sp50 = lbl_80352740 - ((((temp_f9_2 * temp_f4) / (temp_f4 - lbl_80352840)) - ((temp_f9_2 * temp_f6_3) + temp_f6_3)) - temp_f9_2);
    if (((s32) (M2C_BITWISE(s32, sp50) + temp_r4) >> 0x14) <= 0) {
        sp50 = fn_8015685C();
    } else {
        sp50 = M2C_BITWISE(s32, sp50) + temp_r4;
    }
    return var_f31 * M2C_BITWISE(f64, sp50);
}

s32 __ieee754_rem_pio2(void *arg0, f64 farg0) {
    s32 unkspC;
    s32 unksp14;
    M2C_UNK sp30;
    f64 sp28;
    f64 sp20;
    f64 sp18;
    f64 sp10;                                       /* compiler-managed */
    f64 sp8;
    M2C_UNK *var_r4;
    f64 temp_f0;
    f64 temp_f0_2;
    f64 temp_f2;
    f64 temp_f2_2;
    f64 temp_f2_3;
    f64 temp_f2_4;
    f64 temp_f2_5;
    f64 temp_f2_6;
    f64 temp_f2_7;
    f64 temp_f2_8;
    f64 temp_f3;
    f64 temp_f3_2;
    f64 temp_f3_3;
    f64 temp_f3_4;
    f64 temp_f4;
    f64 temp_f5;
    f64 var_f1;
    f64 var_f4;
    s32 temp_r31;
    s32 temp_r4;
    s32 temp_r6;
    s32 var_r3;

    sp8 = farg0;
    temp_r31 = M2C_BITWISE(s32, sp8);
    temp_r6 = temp_r31 & 0x7FFFFFFF;
    if (temp_r6 <= 0x3FE921FB) {
        M2C_FIELD(arg0, f64 *, 0) = farg0;
        M2C_FIELD(arg0, f64 *, 8) = (f64) lbl_80352850;
        return 0;
    }
    if (temp_r6 < 0x4002D97C) {
        if (temp_r31 > 0) {
            temp_f2 = farg0 - lbl_80352858;
            sp10 = temp_f2;
            if ((u32) (temp_r6 + 0xC0070000) != 0x21FBU) {
                M2C_FIELD(arg0, f64 *, 0) = (f64) (temp_f2 - lbl_80352860);
                M2C_FIELD(arg0, f64 *, 8) = (f64) ((temp_f2 - M2C_FIELD(arg0, f64 *, 0)) - lbl_80352860);
            } else {
                temp_f2_2 = temp_f2 - lbl_80352868;
                sp10 = temp_f2_2;
                M2C_FIELD(arg0, f64 *, 0) = (f64) (temp_f2_2 - lbl_80352870);
                M2C_FIELD(arg0, f64 *, 8) = (f64) ((temp_f2_2 - M2C_FIELD(arg0, f64 *, 0)) - lbl_80352870);
            }
            return 1;
        }
        temp_f2_3 = lbl_80352858 + farg0;
        sp10 = temp_f2_3;
        if ((u32) (temp_r6 + 0xC0070000) != 0x21FBU) {
            M2C_FIELD(arg0, f64 *, 0) = (f64) (lbl_80352860 + temp_f2_3);
            M2C_FIELD(arg0, f64 *, 8) = (f64) (lbl_80352860 + (temp_f2_3 - M2C_FIELD(arg0, f64 *, 0)));
        } else {
            temp_f2_4 = temp_f2_3 + lbl_80352868;
            sp10 = temp_f2_4;
            M2C_FIELD(arg0, f64 *, 0) = (f64) (lbl_80352870 + temp_f2_4);
            M2C_FIELD(arg0, f64 *, 8) = (f64) (lbl_80352870 + (temp_f2_4 - M2C_FIELD(arg0, f64 *, 0)));
        }
        return -1;
    }
    if (temp_r6 <= 0x413921FB) {
        temp_f4 = fabs(farg0);
        var_r3 = (s32) ((lbl_80352880 * temp_f4) + lbl_80352878);
        temp_f5 = (f64) var_r3;
        var_f4 = -((lbl_80352858 * temp_f5) - temp_f4);
        var_f1 = lbl_80352860 * temp_f5;
        if ((var_r3 < 0x20) && (temp_r6 != (s32) M2C_FIELD((&lbl_801DB068 + (var_r3 * 4)), s32 *, -4))) {
            M2C_FIELD(arg0, f64 *, 0) = (f64) (var_f4 - var_f1);
        } else {
            temp_r4 = temp_r6 >> 0x14;
            M2C_FIELD(arg0, f64 *, 0) = (f64) (var_f4 - var_f1);
            if ((s32) (temp_r4 - ((M2C_BITWISE(u32, M2C_FIELD(arg0, f64 *, 0)) >> 0x14U) & 0x7FF)) > 0x10) {
                temp_f3 = var_f4;
                temp_f2_5 = lbl_80352868 * temp_f5;
                var_f4 -= temp_f2_5;
                var_f1 = (lbl_80352870 * temp_f5) - ((temp_f3 - var_f4) - temp_f2_5);
                M2C_FIELD(arg0, f64 *, 0) = (f64) (var_f4 - var_f1);
                if ((s32) (temp_r4 - ((M2C_BITWISE(u32, M2C_FIELD(arg0, f64 *, 0)) >> 0x14U) & 0x7FF)) > 0x31) {
                    temp_f2_6 = var_f4;
                    temp_f3_2 = lbl_80352888 * temp_f5;
                    var_f4 -= temp_f3_2;
                    var_f1 = (lbl_80352890 * temp_f5) - ((temp_f2_6 - var_f4) - temp_f3_2);
                    M2C_FIELD(arg0, f64 *, 0) = (f64) (var_f4 - var_f1);
                }
            }
        }
        M2C_FIELD(arg0, f64 *, 8) = (f64) ((var_f4 - M2C_FIELD(arg0, f64 *, 0)) - var_f1);
        if (temp_r31 < 0) {
            M2C_FIELD(arg0, f64 *, 0) = (f64) -M2C_FIELD(arg0, f64 *, 0);
            M2C_FIELD(arg0, f64 *, 8) = (f64) -M2C_FIELD(arg0, f64 *, 8);
            return -var_r3;
        }
        /* Duplicate return node #29. Try simplifying control flow for better match */
        return var_r3;
    }
    if (temp_r6 >= 0x7FF00000) {
        temp_f0 = farg0 - farg0;
        M2C_FIELD(arg0, f64 *, 8) = temp_f0;
        M2C_FIELD(arg0, f64 *, 0) = temp_f0;
        return 0;
    }
    unksp14 = unkspC;
    var_r4 = &sp30;
    sp10 = temp_r6 - (((temp_r6 >> 0x14) - 0x416) << 0x14);
    temp_f3_3 = M2C_BITWISE(f64, sp10);
    temp_f2_7 = (f64) (s32) temp_f3_3;
    sp18 = temp_f2_7;
    temp_f3_4 = lbl_80352898 * (temp_f3_3 - temp_f2_7);
    sp10 = temp_f3_4;
    temp_f2_8 = (f64) (s32) temp_f3_4;
    sp20 = temp_f2_8;
    temp_f0_2 = lbl_80352898 * (temp_f3_4 - temp_f2_8);
    sp10 = temp_f0_2;
    sp28 = temp_f0_2;
loop_26:
    if ((f32) lbl_80352850 == (f32) M2C_FIELD(var_r4, f64 *, -8)) {
        var_r4 -= 8;
        goto loop_26;
    }
    var_r3 = __kernel_rem_pio2(&sp18, arg0, 2, &lbl_801DAF60);
    if (temp_r31 < 0) {
        var_r3 = -var_r3;
        M2C_FIELD(arg0, f64 *, 0) = (f64) -M2C_FIELD(arg0, f64 *, 0);
        M2C_FIELD(arg0, f64 *, 8) = (f64) -M2C_FIELD(arg0, f64 *, 8);
    }
    return var_r3;
}

f64 __kernel_cos(f64 farg0, f64 farg1) {
    s32 unksp14;
    f64 sp10;                                       /* compiler-managed */
    f64 sp8;
    f64 temp_f3;
    f64 temp_f4;
    f64 temp_f7;
    s32 temp_r4;

    sp8 = farg0;
    temp_r4 = M2C_BITWISE(s32, sp8) & 0x7FFFFFFF;
    if ((temp_r4 < 0x3E400000) && ((s32) farg0 == 0)) {
        return lbl_803528A8;
    }
    temp_f7 = sp8 * sp8;
    temp_f4 = temp_f7 * ((temp_f7 * ((temp_f7 * ((temp_f7 * ((temp_f7 * ((lbl_803528D8 * temp_f7) + lbl_803528D0)) + lbl_803528C8)) + lbl_803528C0)) + lbl_803528B8)) + lbl_803528B0);
    if (temp_r4 < 0x3FD33333) {
        return lbl_803528A8 - ((lbl_803528E0 * temp_f7) - ((temp_f7 * temp_f4) - (sp8 * farg1)));
    }
    if (temp_r4 > 0x3FE90000) {
        sp10 = lbl_803528E8;
    } else {
        sp10 = temp_r4 + 0xFFE00000;
        unksp14 = 0;
    }
    temp_f3 = M2C_BITWISE(f64, sp10);
    return (lbl_803528A8 - temp_f3) - (((lbl_803528E0 * temp_f7) - temp_f3) - ((temp_f7 * temp_f4) - (sp8 * farg1)));
}
