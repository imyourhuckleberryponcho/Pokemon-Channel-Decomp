/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_8008065C();
extern s8 lbl_80350510;
s32 HSD_Randi(M2C_UNK);
extern M2C_UNK lbl_801DA070;
extern M2C_UNK lbl_801DA0A0;
s32 fn_80080738();
s32 get_up_vector_for_viewing_mtx(M2C_UNK);
M2C_UNK fn_800146F0(s32, M2C_UNK);
s32 fn_80014798(s32, M2C_UNK *);
s32 fn_80080790();
extern s32 lbl_80350504;
M2C_UNK RequestTzmap(s32, s32, void *);
u8 IsTzmapLoaded(s32);
s32 fn_8007FC40();
M2C_UNK fn_80080698(void *);
f32 fn_80080764();
M2C_UNK fn_800A891C(s32, f32 *, f32, f32);
M2C_UNK fn_800A8984(s32, f32 *, s32, f32, f32);
s32 GetFloorRegionId(s32, f32 *, f32, f32);
s32 GetFloorAttr(s32, s32);
M2C_UNK fn_800A89EC();
extern s32 lbl_8035050C;
s32 HSD_Rand(f64);
extern f32 lbl_80350388;
extern f32 lbl_8035038C;
extern u32 lbl_803503F4;
extern f64 lbl_80351AD8;
extern f64 lbl_80351AE0;
extern f64 lbl_80351AE8;
extern f64 lbl_80351AF0;
s32 fn_80034370();
M2C_UNK fn_800806D4();
u8 fn_8007F61C();
u8 fn_8007F65C(s32);
M2C_UNK fn_8014F694(M2C_UNK *, M2C_UNK, s32, s32);
extern M2C_UNK lbl_802CE730;
s32 strlen();
extern M2C_UNK lbl_801DA0D0;
extern M2C_UNK lbl_802CEC30;
void *fn_8008082C(s32, s32);
M2C_UNK fn_8008085C(s32, s32);
s8 fn_800807CC(s32);
extern M2C_UNK lbl_802CF030;
M2C_UNK strcpy();
extern M2C_UNK lbl_802CF05C;
extern M2C_UNK lbl_8034FC94;
extern M2C_UNK lbl_8022A1A4;
extern M2C_UNK lbl_802CF088;
extern M2C_UNK lbl_802CF0B4;
extern M2C_UNK lbl_8034FC9C;
extern M2C_UNK lbl_802CF0E0;
M2C_UNK fn_8008088C(s32, s32);

s32 scr_CaptureSD(void);
s32 scr_IsCaptureDoneSD(void);
s32 SuouFishingSub(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 scr_SuouFishingSub(s32 arg0, M2C_UNK arg_sp0);
s32 scr_StartStage(s32 arg0);
s32 scr_RequestTzmap(void *arg0);
s32 scr_IsTzmapLoaded(void *arg0);
s32 scr_GetFloorHeight(void *arg0);
s32 scr_GetFloorRegionId(void *arg0);
s32 scr_GetFloorAttr(void *arg0);
s32 scr_GetFloorNormalX(void *arg0);
s32 scr_GetFloorNormalY(void *arg0);
s32 scr_GetFloorNormalZ(void *arg0);
s32 scr_SetDoNurieFlag(void);
s32 scr_IsPaintDone(void);
s32 scr_GetPicturePrice(s32 arg0);
s32 scr_CatGets(s32 arg0);
s32 scr_FormatNumber(s32 arg0);
void scr_Sprintf();
s32 scr_Strlen(s32 arg0);
s32 scr_AsciiToSjis(s32 arg0);
s32 fn_80097E1C(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0);
M2C_UNK *fn_80097EC8(s32 arg0, s32 arg1);
M2C_UNK *GetPlayerName(void);
M2C_UNK *GetPiktyName(void);
M2C_UNK *GetPaintName(void);
M2C_UNK *GetOldPaintName(void);
void scr_SetPlayerName(void);
s32 scr_GetPlayerName(s32 arg0);
void scr_SetPiktyName(void);
s32 scr_GetPiktyName(s32 arg0);
void scr_SetPaintName(s32 arg0);

s32 scr_CaptureSD(void) {
    lbl_80350510 = 1;
    fn_8008065C(0);
    return 0;
}

s32 scr_IsCaptureDoneSD(void) {
    fn_8008065C((u8) (lbl_80350510 == 0));
    return 0;
}

s32 SuouFishingSub(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) {
    s32 sp40;
    s32 sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 *var_r4;
    s32 *var_r4_2;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    s32 temp_r5;
    s32 temp_r7;
    s32 temp_r8_2;
    s32 temp_r9;
    s32 var_ctr;
    s32 var_ctr_2;
    s32 var_ctr_3;
    s32 var_r3;
    s32 var_r5;
    s32 var_r9;
    void *temp_r8;

    temp_r9 = arg3 + arg2 + arg4 + 3;
    temp_r8 = &lbl_801DA0A0 + 0x18;
    sp14 = M2C_FIELD(&lbl_801DA0A0, s32 *, 0);
    sp18 = M2C_FIELD(&lbl_801DA0A0, s32 *, 4);
    sp1C = M2C_FIELD(&lbl_801DA0A0, s32 *, 8);
    sp20 = M2C_FIELD(&lbl_801DA0A0, s32 *, 0xC);
    var_r4 = &sp14;
    sp24 = M2C_FIELD(&lbl_801DA0A0, s32 *, 0x10);
    sp28 = M2C_FIELD(&lbl_801DA0A0, s32 *, 0x14);
    var_r9 = 0;
    sp2C = M2C_FIELD(&lbl_801DA0A0, s32 *, 0x18);
    sp30 = M2C_FIELD(temp_r8, s32 *, 4);
    sp34 = M2C_FIELD(temp_r8, s32 *, 8);
    sp38 = M2C_FIELD(temp_r8, s32 *, 0xC);
    sp3C = M2C_FIELD(temp_r8, s32 *, 0x10);
    sp40 = M2C_FIELD(temp_r8, s32 *, 0x14);
    sp8 = 1;
    sp8 += ((s32) ((arg2 + 1) * 0x1C) / temp_r9);
    spC = ((s32) ((arg3 + 1) * 0x1C) / temp_r9) + 1;
    sp10 = ((s32) ((arg4 + 1) * 0x1C) / temp_r9) + 1;
    var_ctr = 3;
    do {
        temp_r8_2 = var_r9 + 1;
        temp_r7 = var_r9 + 2;
        temp_r5 = var_r9 % 3;
        var_r9 += 3;
        M2C_FIELD(var_r4, s32 *, 0) *= (&sp8)[temp_r5];
        M2C_FIELD(var_r4, s32 *, 4) = (s32) (M2C_FIELD(var_r4, s32 *, 4) * (&sp8)[temp_r8_2 % 3]);
        M2C_FIELD(var_r4, s32 *, 8) = (s32) (M2C_FIELD(var_r4, s32 *, 8) * (&sp8)[temp_r7 % 3]);
        var_r4 += 0xC;
        var_ctr -= 1;
    } while (var_ctr != 0);
    var_r3 = HSD_Randi(0x3E8);
    var_r4_2 = &sp14;
    var_r5 = 0;
    var_ctr_2 = 2;
loop_3:
    temp_r0 = M2C_FIELD(var_r4_2, s32 *, 0);
    if (var_r3 >= temp_r0) {
        temp_r3 = var_r3 - temp_r0;
        temp_r0_2 = M2C_FIELD(var_r4_2, s32 *, 4);
        var_r5 += 1;
        if (temp_r3 >= temp_r0_2) {
            temp_r3_2 = temp_r3 - temp_r0_2;
            temp_r0_3 = M2C_FIELD(var_r4_2, s32 *, 8);
            var_r5 += 1;
            if (temp_r3_2 >= temp_r0_3) {
                temp_r3_3 = temp_r3_2 - temp_r0_3;
                temp_r0_4 = M2C_FIELD(var_r4_2, s32 *, 0xC);
                var_r5 += 1;
                if (temp_r3_3 >= temp_r0_4) {
                    temp_r3_4 = temp_r3_3 - temp_r0_4;
                    temp_r0_5 = M2C_FIELD(var_r4_2, s32 *, 0x10);
                    var_r5 += 1;
                    if (temp_r3_4 >= temp_r0_5) {
                        temp_r3_5 = temp_r3_4 - temp_r0_5;
                        temp_r0_6 = M2C_FIELD(var_r4_2, s32 *, 0x14);
                        var_r5 += 1;
                        if (temp_r3_5 >= temp_r0_6) {
                            var_r3 = temp_r3_5 - temp_r0_6;
                            var_r4_2 += 0x18;
                            var_r5 += 1;
                            var_ctr_2 -= 1;
                            if (var_ctr_2 != 0) {
                                goto loop_3;
                            }
                        }
                    }
                }
            }
        }
    }
    var_ctr_3 = 0xB;
    do {
        var_ctr_3 -= 1;
    } while (var_ctr_3 != 0);
    if (var_r5 < 0xB) {
        return *(&lbl_801DA070 + (var_r5 * 4));
    }
    if (arg0 == 3) {
        return 2;
    }
    switch (arg1) {                                 /* irregular */
    case 2:
        return 0xA;
    case 1:
        return 6;
    default:
        return 8;
    }
}

s32 scr_SuouFishingSub(s32 arg0, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 scr_StartStage(s32 arg0) {
    M2C_UNK sp8;
    s32 temp_r31;
    s32 var_r0;

    temp_r31 = fn_80080790();
    fn_800146F0(lbl_80350504, 1);
    var_r0 = get_up_vector_for_viewing_mtx(4);
    if (var_r0 != 0) {
        var_r0 = fn_80014798(temp_r31, &sp8);
    }
    lbl_80350504 = var_r0;
    fn_8008065C((long)(arg0));
    return 0;
}

s32 scr_RequestTzmap(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x2E0);
    RequestTzmap(M2C_FIELD(temp_r5, s32 *, 0x38), fn_80080790(), temp_r5);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_IsTzmapLoaded(void *arg0) {
    fn_8008065C(arg0, IsTzmapLoaded(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), s32 *, 0x38)) != 0);
    return 0;
}

s32 scr_GetFloorHeight(void *arg0) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f31;
    f32 temp_f31_2;
    s32 temp_r31;
    s32 temp_r30;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x2E0);
    if (fn_8007FC40() == 4) {
        temp_r30 = fn_80080738(arg0);
        temp_f30 = fn_80080764(arg0);
        temp_f31 = fn_80080764(arg0);
        sp14 = fn_80080764(arg0);
        sp18 = temp_f30;
        sp1C = temp_f31;
        sp2C = sp14;
        sp30 = sp18;
        sp34 = sp1C;
        fn_800A8984(temp_r31, &sp2C, temp_r30, sp18, sp14);
        fn_80080698(arg0);
    } else {
        temp_f31_2 = fn_80080764(arg0);
        sp8 = fn_80080764(arg0);
        temp_f30_2 = fn_80080764(arg0);
        spC = temp_f31_2;
        sp10 = temp_f30_2;
        sp20 = sp8;
        sp24 = spC;
        sp28 = sp10;
        fn_800A891C(temp_r31, &sp20, spC, sp8);
        fn_80080698(arg0);
    }
    return 0;
}

s32 scr_GetFloorRegionId(void *arg0) {
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f30;
    f32 temp_f31;
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x2E0);
    temp_f30 = fn_80080764((void *)(0));
    temp_f31 = fn_80080764(arg0);
    sp8 = fn_80080764(arg0);
    spC = temp_f31;
    sp10 = temp_f30;
    sp14 = sp8;
    sp18 = spC;
    sp1C = sp10;
    fn_80080698((void *)(arg0));
    return 0;
}

s32 scr_GetFloorAttr(void *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x2E0);
    fn_8008065C(arg0, GetFloorAttr(temp_r31, fn_80080738()));
    return 0;
}

s32 scr_GetFloorNormalX(void *arg0) {
    f32 sp8;
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x2E0);
    fn_800A89EC(&sp8, temp_r31, fn_80080738());
    fn_80080698((void *)(arg0));
    return 0;
}

s32 scr_GetFloorNormalY(void *arg0) {
    s32 spC;
    M2C_UNK sp8;
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x2E0);
    fn_800A89EC(&sp8, temp_r31, fn_80080738());
    fn_80080698((void *)(arg0));
    return 0;
}

s32 scr_GetFloorNormalZ(void *arg0) {
    s32 sp10;
    M2C_UNK sp8;
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x2E0);
    fn_800A89EC(&sp8, temp_r31, fn_80080738());
    fn_80080698((void *)(arg0));
    return 0;
}

s32 scr_SetDoNurieFlag(void) {
    lbl_8035050C = 1;
    fn_8008065C(0);
    return 0;
}

s32 scr_IsPaintDone(void) {
    fn_8008065C((u8) (lbl_8035050C == 0));
    return 0;
}

#pragma push
#pragma peephole off
s32 scr_GetPicturePrice(s32 arg0) {
    f64 temp_f1;
    f64 temp_f1_2;
    f64 temp_f1_3;
    f64 temp_f1_4;
    f64 temp_f4;
    f64 var_f1;
    f64 var_f2;
    s16 var_r31;

    var_f1 = lbl_80351AF0;
    var_f2 = lbl_80351AD8;
    temp_f4 = (f64) lbl_803503F4;
    if (temp_f4 > (f32) var_f2) {
        temp_f1 = __frsqrte(temp_f4);
        temp_f1_2 = lbl_80351AE0 * temp_f1 * -((temp_f4 * (temp_f1 * temp_f1)) - lbl_80351AE8);
        temp_f1_3 = lbl_80351AE0 * temp_f1_2 * -((temp_f4 * (temp_f1_2 * temp_f1_2)) - lbl_80351AE8);
        temp_f1_4 = lbl_80351AE0 * temp_f1_3 * -((temp_f4 * (temp_f1_3 * temp_f1_3)) - lbl_80351AE8);
        var_f1 = lbl_80351AE0 * temp_f1_4;
        var_f2 = temp_f4 * (var_f1 * -((temp_f4 * (temp_f1_4 * temp_f1_4)) - lbl_80351AE8));
    } else if ((f32) var_f2 == temp_f4) {

    } else if ((f32) temp_f4 != (f32) var_f2) {
        var_f2 = (f64) lbl_80350388;
    } else {
        var_f2 = (f64) lbl_8035038C;
    }
    var_r31 = (HSD_Rand(var_f1) % 10) + (s32) var_f2 + 0x1E;
    if (var_r31 < 0x32) {
        var_r31 = 0x32;
    } else if (var_r31 > 0x96) {
        var_r31 = 0x96;
    }
    fn_8008065C(arg0, var_r31);
    return 0;
}
#pragma pop

s32 scr_CatGets(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080790();
    fn_80080738(arg0);
    fn_800806D4(arg0, fn_80034370(temp_r31));
    return 0;
}

s32 scr_FormatNumber(s32 arg0) {
    f32 temp_f31;
    s32 temp_r31;

    if (fn_8007F61C() != 0) {
        temp_r31 = fn_80080738(arg0);
        fn_8014F694(&lbl_802CE730, 0x100, fn_80080790(arg0), temp_r31);
    } else if (fn_8007F65C(arg0) != 0) {
        temp_f31 = fn_80080764(arg0);
        fn_8014F694(&lbl_802CE730, 0x100, fn_80080790(arg0), M2C_BITWISE(s32, temp_f31));
    }
    fn_800806D4(arg0, &lbl_802CE730);
    return 0;
}

void scr_Sprintf() { } /* draft: stub */

s32 scr_Strlen(s32 arg0) {
    fn_80080790();
    fn_8008065C(arg0, strlen());
    return 0;
}

s32 scr_AsciiToSjis(s32 arg0) {
    M2C_UNK *var_r6;
    u8 *var_r3;
    u8 var_r5;

    /* draft: did not compile: var_r3 = fn_80080790(); */
    var_r6 = &lbl_802CEC30;
loop_10:
    var_r5 = *var_r3;
    if ((s32) var_r5 != 0) {
        if ((s32) var_r5 >= 0x80) {
            var_r5 = 0x81AC;
        } else if (((s32) var_r5 >= 0x20) && ((s32) var_r5 < 0x7F)) {
            var_r5 = (u8) M2C_FIELD((&lbl_801DA0D0 + (var_r5 * 4)), s32 *, -0x80);
        }
        if ((s32) var_r5 < 0x100) {
            M2C_FIELD(var_r6, u8 *, 0) = var_r5;
            var_r6 += 1;
        } else {
            M2C_FIELD(var_r6, u8 *, 0) = (u8) ((s32) var_r5 >> 8);
            M2C_FIELD(var_r6, u8 *, 1) = var_r5;
            var_r6 += 2;
        }
        var_r3 += 1;
        goto loop_10;
    }
    M2C_FIELD(var_r6, u8 *, 0) = 0U;
    fn_800806D4(arg0, &lbl_802CEC30);
    return 0;
}

s32 fn_80097E1C(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0) {
    s32 temp_r30;
    s32 var_r29;
    u8 var_r4;
    void *temp_r31;

    var_r29 = 0;
    temp_r30 = fn_80080738();
loop_5:
    if (var_r29 < temp_r30) {
        temp_r31 = fn_8008082C(arg0, var_r29 + 0x1699);
        if (strlen() == 1) {
            var_r4 = M2C_FIELD(temp_r31, u8 *, 0);
        } else {
            var_r4 = (M2C_FIELD(temp_r31, u8 *, 1) & ~0xFF00) | ((M2C_FIELD(temp_r31, u8 *, 0) << 8) & 0xFF00);
        }
        fn_8008085C(arg1 + var_r29, (s32) var_r4);
        var_r29 += 1;
        goto loop_5;
    }
    fn_8008085C(arg2, temp_r30);
    fn_8008065C(arg0, 0);
    return 0;
}

M2C_UNK *fn_80097EC8(s32 arg0, s32 arg1) {
    M2C_UNK *var_r31;
    s32 var_r30;
    s8 temp_r3;

    var_r31 = &lbl_802CF030;
    var_r30 = 0;
loop_5:
    if (var_r30 < arg1) {
        temp_r3 = fn_800807CC(arg0 + var_r30);
        if (temp_r3 < 0x100) {
            M2C_FIELD(var_r31, s8 *, 0) = temp_r3;
            var_r31 += 1;
        } else {
            M2C_FIELD(var_r31, s8 *, 0) = (s8) (temp_r3 >> 8);
            M2C_FIELD(var_r31, s8 *, 1) = temp_r3;
            var_r31 += 2;
        }
        var_r30 += 1;
        goto loop_5;
    }
    M2C_FIELD(var_r31, s8 *, 0) = 0;
    return &lbl_802CF030;
}

M2C_UNK *GetPlayerName(void) {
    s32 temp_r3;

    temp_r3 = fn_800807CC(0x128);
    if (temp_r3 == 0) {
        return 0;
    }
    strcpy(&lbl_802CF05C, fn_80097EC8(0x129, temp_r3), &lbl_802CF05C);
    return &lbl_802CF05C;
}

M2C_UNK *GetPiktyName(void) {
    s32 temp_r3;

    temp_r3 = fn_800807CC(0x14E);
    if (temp_r3 == 0) {
        return 0;
    }
    strcpy(&lbl_802CF088, fn_80097EC8(0x14F, temp_r3), &lbl_802CF088);
    return &lbl_802CF088;
}

M2C_UNK *GetPaintName(void) {
    s32 temp_r3;

    temp_r3 = fn_800807CC(0xC75);
    if (temp_r3 == 0) {
        return 0;
    }
    strcpy(&lbl_802CF0B4, fn_80097EC8(0xC76, temp_r3), &lbl_802CF0B4);
    return &lbl_802CF0B4;
}

M2C_UNK *GetOldPaintName(void) {
    s32 temp_r3;

    temp_r3 = fn_800807CC(0xC8A);
    if (temp_r3 == 0) {
        return 0;
    }
    strcpy(&lbl_802CF0E0, fn_80097EC8(0xC8B, temp_r3), &lbl_802CF0E0);
    return &lbl_802CF0E0;
}

void scr_SetPlayerName(void) {
    fn_80097E1C((long)(0x129), (long)(0x128), (long)(0), (long)(0));
}

s32 scr_GetPlayerName(s32 arg0) {
    fn_800806D4(arg0, GetPlayerName());
    return 0;
}

void scr_SetPiktyName(void) {
    fn_80097E1C((long)(0x14F), (long)(0x14E), (long)(0), (long)(0));
}

s32 scr_GetPiktyName(s32 arg0) {
    fn_800806D4(arg0, GetPiktyName());
    return 0;
}

void scr_SetPaintName(s32 arg0) {
    s32 temp_r31;
    s32 var_r30;

    var_r30 = 0;
    temp_r31 = fn_800807CC(0xC75);
loop_2:
    if (var_r30 < temp_r31) {
        fn_8008088C(var_r30 + 0xC8B, var_r30 + 0xC76);
        var_r30 += 1;
        goto loop_2;
    }
    fn_8008085C(0xC8A, temp_r31);
    fn_80097E1C((long)(arg0), (long)(0xC76), (long)(0xC75), (long)(0));
}
