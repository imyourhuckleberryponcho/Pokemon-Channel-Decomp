/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern s32 lbl_8035064C;
M2C_UNK fn_80005888();
extern f32 lbl_803518A0;
f64 Cos(f32);
f64 Sin(f32);
extern f32 lbl_803518A4;
M2C_UNK PSVECMag();
M2C_UNK PSMTXMultVecSR(s32, s32, M2C_UNK *);
extern f32 lbl_803518A8;
extern f32 lbl_803518C0;
extern f32 lbl_803518C4;
extern f32 lbl_803518C8;
extern f32 lbl_803518CC;
extern f32 lbl_803518D0;
extern f32 lbl_803518D4;
extern f32 lbl_803518D8;
extern f32 lbl_803518DC;
extern M2C_UNK lbl_803518F0;
M2C_UNK PSVECNormalize(void *, f32 *);
f64 ArcCos(f32);
f64 ArcSin(f32);
extern f64 lbl_803518B0;
extern f64 lbl_803518B8;
extern f32 lbl_803518F8;
f64 fn_80156E70(f64, f64);
extern f64 lbl_80351900;
extern f32 lbl_80351908;
M2C_UNK fn_80071748();
extern f32 lbl_80351910;
extern f32 lbl_80351914;

void fn_800704AC(s32 arg0, s32 arg1);
void *fn_800704E4(void *arg0);
s32 fn_80070554(s32 arg0, s16 arg1);
void fn_80070590(void *arg0);
s32 fn_8007061C(s32 arg0, s16 arg1);
void fn_80070680(void *arg0);
void fn_800706B0(void *arg0);
void fn_80070870(void *arg0);
void fn_800708D4(void *arg0, s32 arg1);
void fn_80070984(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80070A98(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80070B40(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80070BEC(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80070CC0(s32 arg0, s32 arg1);
u8 fn_80070CFC(void *arg0);
void fn_80070D60(void *arg0, f32 farg0, f32 farg1, f32 farg2);
void fn_80070EA8(void *arg0, f32 farg0, f32 farg1, f32 farg2);
void fn_80070FF0(void *arg0, void *arg1, void *arg2);
void fn_80071054(void *arg0);
f32 fn_800710E4(s32 arg0, s32 arg1);
s8 fn_80071138(u8 *arg0);
f32 fn_80071174(f32 farg0);
f32 fn_8007119C(f32 farg0);
f32 fn_800711C0(f32 farg0, f32 farg1);
M2C_UNK *fn_80071234(f32 farg0);
s32 fn_80071314(void *arg0, void *arg1, u8 arg2);
s32 RanzakI(u32 arg0, u32 arg1);
f32 fn_8007154C(f32 farg0);
s32 fn_800715D4(u8 arg0, f32 farg0, f32 farg1, f32 farg2);
s32 fn_800716AC(s32 arg0);
s32 fn_800716DC(s32 arg0);
void fn_8007170C(void *arg0);

void fn_800704AC(s32 arg0, s32 arg1) {
    u8 temp_r5;
    void *temp_r6;

    /* draft: did not compile: temp_r6 = arg1 + arg0; */
    temp_r5 = M2C_FIELD(temp_r6, u8 *, 0x2C);
    if (!(temp_r5 & 8)) {
        M2C_FIELD(temp_r6, u8 *, 0x2C) = (u8) (temp_r5 | 8);
        fn_800708D4((void *)(0), (long)(0));
    }
}

void *fn_800704E4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    /* draft: did not compile: fn_8014AD98(arg0 + 0x58, fn_80070590, fn_80070554, 0x58, 8); */
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) lbl_8035064C;
    M2C_FIELD(arg0, s32 *, 0x50) = 1;
    fn_80070680((void *)(arg0));
    return arg0;
}

s32 fn_80070554(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        fn_80005888();
    }
    return arg0;
}

void fn_80070590(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, u8 *, 6) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, u8 *, 7) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, u8 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, u8 *, 9) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, u8 *, 0xA) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, u8 *, 0xB) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, u8 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, u8 *, 0xD) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, u8 *, 0) = 0;
    M2C_FIELD(arg0, u8 *, 1) = 0;
    M2C_FIELD(arg0, u8 *, 2) = 0;
    M2C_FIELD(arg0, u8 *, 3) = 0xFF;
    M2C_FIELD(arg0, u8 *, 5) = 0;
    M2C_FIELD(arg0, u8 *, 4) = 0;
}

s32 fn_8007061C(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        fn_8014AD20(arg0 + 0x58, fn_80070554, 0x58, 8);
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_80070680(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    fn_800706B0((void *)(0));
}

void fn_800706B0(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0x2100;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFF80);
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C) = 0;
    M2C_FIELD(arg0, s8 *, 0x2D) = 0;
    M2C_FIELD(arg0, s8 *, 0x2E) = 0;
    M2C_FIELD(arg0, s8 *, 0x2F) = 0;
    M2C_FIELD(arg0, s8 *, 0x30) = 0;
    M2C_FIELD(arg0, s8 *, 0x31) = 0;
    M2C_FIELD(arg0, s8 *, 0x32) = 0;
    M2C_FIELD(arg0, s8 *, 0x33) = 0;
    M2C_FIELD(arg0, s8 *, 0x34) = 0;
    M2C_FIELD(arg0, s8 *, 0x35) = 0;
    M2C_FIELD(arg0, s8 *, 0x36) = 0;
    M2C_FIELD(arg0, s8 *, 0x37) = 0;
    M2C_FIELD(arg0, s8 *, 0x38) = 0;
    M2C_FIELD(arg0, s8 *, 0x39) = 0;
    M2C_FIELD(arg0, s8 *, 0x3A) = 0;
    M2C_FIELD(arg0, s8 *, 0x3B) = 0;
    M2C_FIELD(arg0, s8 *, 0x3C) = 0;
    M2C_FIELD(arg0, s8 *, 0x3D) = 0;
    M2C_FIELD(arg0, s8 *, 0x3E) = 0;
    M2C_FIELD(arg0, s8 *, 0x3F) = 0;
    M2C_FIELD(arg0, s8 *, 0x40) = 0;
    M2C_FIELD(arg0, s8 *, 0x41) = 0;
    M2C_FIELD(arg0, s8 *, 0x42) = 0;
    M2C_FIELD(arg0, s8 *, 0x43) = 0;
    M2C_FIELD(arg0, s8 *, 0x44) = 0;
    M2C_FIELD(arg0, s8 *, 0x45) = 0;
    M2C_FIELD(arg0, s8 *, 0x46) = 0;
    M2C_FIELD(arg0, s8 *, 0x47) = 0;
    M2C_FIELD(arg0, s8 *, 0x48) = 0;
    M2C_FIELD(arg0, s8 *, 0x49) = 0;
    M2C_FIELD(arg0, s8 *, 0x4A) = 0;
    M2C_FIELD(arg0, s8 *, 0x4B) = 0;
    do {
        /* draft: did not compile: fn_80070CC0(arg0, var_r31); */
        var_r31 += 1;
    } while (var_r31 < 8);
    M2C_FIELD(arg0, s8 *, 0x58) = 0;
    M2C_FIELD(arg0, s8 *, 0x59) = 0;
    M2C_FIELD(arg0, s8 *, 0x5A) = 0;
    M2C_FIELD(arg0, s8 *, 0x5B) = 0xFF;
    M2C_FIELD(arg0, s8 *, 0x5D) = 0;
    M2C_FIELD(arg0, s8 *, 0x5C) = 0;
    M2C_FIELD(arg0, s8 *, 0xB0) = 0;
    M2C_FIELD(arg0, s8 *, 0xB1) = 0;
    M2C_FIELD(arg0, s8 *, 0xB2) = 0;
    M2C_FIELD(arg0, s8 *, 0xB3) = 0xFF;
    M2C_FIELD(arg0, s8 *, 0xB5) = 0;
    M2C_FIELD(arg0, s8 *, 0xB4) = 0;
    M2C_FIELD(arg0, s8 *, 0x108) = 0;
    M2C_FIELD(arg0, s8 *, 0x109) = 0;
    M2C_FIELD(arg0, s8 *, 0x10A) = 0;
    M2C_FIELD(arg0, s8 *, 0x10B) = 0xFF;
    M2C_FIELD(arg0, s8 *, 0x10D) = 0;
    M2C_FIELD(arg0, s8 *, 0x10C) = 0;
    M2C_FIELD(arg0, s8 *, 0x160) = 0;
    M2C_FIELD(arg0, s8 *, 0x161) = 0;
    M2C_FIELD(arg0, s8 *, 0x162) = 0;
    M2C_FIELD(arg0, s8 *, 0x163) = 0xFF;
    M2C_FIELD(arg0, s8 *, 0x165) = 0;
    M2C_FIELD(arg0, s8 *, 0x164) = 0;
    M2C_FIELD(arg0, s8 *, 0x1B8) = 0;
    M2C_FIELD(arg0, s8 *, 0x1B9) = 0;
    M2C_FIELD(arg0, s8 *, 0x1BA) = 0;
    M2C_FIELD(arg0, s8 *, 0x1BB) = 0xFF;
    M2C_FIELD(arg0, s8 *, 0x1BD) = 0;
    M2C_FIELD(arg0, s8 *, 0x1BC) = 0;
    M2C_FIELD(arg0, s8 *, 0x210) = 0;
    M2C_FIELD(arg0, s8 *, 0x211) = 0;
    M2C_FIELD(arg0, s8 *, 0x212) = 0;
    M2C_FIELD(arg0, s8 *, 0x213) = 0xFF;
    M2C_FIELD(arg0, s8 *, 0x215) = 0;
    M2C_FIELD(arg0, s8 *, 0x214) = 0;
    M2C_FIELD(arg0, s8 *, 0x268) = 0;
    M2C_FIELD(arg0, s8 *, 0x269) = 0;
    M2C_FIELD(arg0, s8 *, 0x26A) = 0;
    M2C_FIELD(arg0, s8 *, 0x26B) = 0xFF;
    M2C_FIELD(arg0, s8 *, 0x26D) = 0;
    M2C_FIELD(arg0, s8 *, 0x26C) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C0) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C1) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C2) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C3) = 0xFF;
    M2C_FIELD(arg0, s8 *, 0x2C5) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
}

void fn_80070870(void *arg0) {
    s32 temp_r5;
    s32 var_r7;
    u32 var_r6;

    var_r6 = M2C_FIELD(arg0, u32 *, 0x28);
    var_r7 = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
loop_7:
    if (var_r6 != 0) {
loop_3:
        if (!(var_r6 & 1)) {
            var_r6 = var_r6 >> 1U;
            var_r7 += 1;
            goto loop_3;
        }
        temp_r5 = var_r7 + 0x2C;
        if (0 /* draft: did not compile */) {
            M2C_FIELD(arg0, s32 *, 0x24) = var_r7;
            /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0x20) = (s32) (*(arg0 + temp_r5) & 7); */
        }
        var_r6 -= 1;
        goto loop_7;
    }
}

void fn_800708D4(void *arg0, s32 arg1) { } /* draft: stub */

#pragma push
#pragma dont_inline on
void fn_80070984(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r4;
    s32 temp_r9_3;
    s32 var_ctr;
    s32 var_r0;
    s32 var_r5;
    s32 var_r6;
    u8 *var_r7;
    s32 var_r8;
    u8 temp_r9;
    u8 temp_r9_2;

    var_r5 = arg2;
    var_r6 = arg3;
    /* draft: did not compile: var_r7 = arg0 + (var_r5 + 0x2C); */
    var_r0 = 1 << var_r5;
    var_r8 = 0;
    var_ctr = (var_r5 + 1) - arg1;
    if (var_r5 >= arg1) {
        do {
            if (!(var_r6 & 1)) {
                temp_r9 = *var_r7;
                if ((temp_r9 >> 4U) & 1) {
                    *var_r7 = temp_r9 & ~0x10;
                    if (((u8) *var_r7 >> 3U) & 1) {
                        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) & ~var_r0);
                        if (var_r5 == (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
                            var_r8 = 1;
                        }
                    }
                }
            } else {
                temp_r9_2 = *var_r7;
                if (!((temp_r9_2 >> 4U) & 1)) {
                    *var_r7 = temp_r9_2 | 0x10;
                    if (((u8) *var_r7 >> 3U) & 1) {
                        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) | var_r0);
                        temp_r9_3 = M2C_FIELD(arg0, s32 *, 0x20);
                        temp_r4 = *var_r7 & 7;
                        if ((temp_r4 >= temp_r9_3) && ((temp_r4 > temp_r9_3) || (var_r5 < (s32) M2C_FIELD(arg0, s32 *, 0x24)))) {
                            M2C_FIELD(arg0, s32 *, 0x24) = var_r5;
                            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (*var_r7 & 7);
                        }
                    }
                }
            }
            var_r6 = var_r6 >> 1;
            var_r7 -= 1;
            var_r0 = var_r0 >> 1;
            var_r5 -= 1;
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    if (var_r8 != 0) {
        fn_80070870((void *)(0));
    }
}
#pragma pop

void fn_80070A98(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r4_2;
    s32 var_ctr;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    u8 *var_r8;
    u8 temp_r4;

    var_r5 = arg2;
    var_r6 = arg3;
    var_r7 = 1 << var_r5;
    /* draft: did not compile: var_r8 = arg0 + (var_r5 + 0x2C); */
    var_ctr = (var_r5 + 1) - arg1;
    if (var_r5 >= arg1) {
        do {
            if (var_r6 & 1) {
                temp_r4 = *var_r8;
                if (!((temp_r4 >> 3U) & 1)) {
                    *var_r8 = temp_r4 | 8;
                    if (((u8) *var_r8 >> 4U) & 1) {
                        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) | var_r7);
                        temp_r4_2 = M2C_FIELD(arg0, s32 *, 0x20);
                        temp_r0 = *var_r8 & 7;
                        if ((temp_r0 >= temp_r4_2) && ((temp_r0 > temp_r4_2) || (var_r5 < (s32) M2C_FIELD(arg0, s32 *, 0x24)))) {
                            M2C_FIELD(arg0, s32 *, 0x24) = var_r5;
                            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (*var_r8 & 7);
                        }
                    }
                }
            }
            var_r6 = var_r6 >> 1;
            var_r8 -= 1;
            var_r7 = var_r7 >> 1;
            var_r5 -= 1;
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
}

void fn_80070B40(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_ctr;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    s32 var_r9;
    u8 *var_r8;
    u8 temp_r4;

    var_r5 = arg2;
    var_r6 = arg3;
    var_r7 = 1 << var_r5;
    /* draft: did not compile: var_r8 = arg0 + (var_r5 + 0x2C); */
    var_r9 = 0;
    var_ctr = (var_r5 + 1) - arg1;
    if (var_r5 >= arg1) {
        do {
            if (var_r6 & 1) {
                temp_r4 = *var_r8;
                if ((temp_r4 >> 3U) & 1) {
                    *var_r8 = temp_r4 & ~8;
                    if (((u8) *var_r8 >> 4U) & 1) {
                        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) & ~var_r7);
                        if (var_r5 == (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
                            var_r9 = 1;
                        }
                    }
                }
            }
            var_r6 = var_r6 >> 1;
            var_r8 -= 1;
            var_r7 = var_r7 >> 1;
            var_r5 -= 1;
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    if (var_r9 != 0) {
        fn_80070870((void *)(0));
    }
}

#pragma push
#pragma dont_inline on
void fn_80070BEC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r7;
    u8 *var_r8;
    s32 var_r5;
    s32 var_r9;
    s32 var_ctr;
    u16 temp_r4;

    var_r5 = arg2;
    var_r9 = 0;
    /* draft: did not compile: var_r8 = arg0 + (var_r5 + 0x2C); */
    var_ctr = (var_r5 + 1) - arg1;
    if (var_r5 >= arg1) {
        do {
            *var_r8 = (*var_r8 & ~7) | (arg3 & 3 & 7);
            temp_r4 = *var_r8;
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
            temp_r7 = temp_r4 & 7;
            if (temp_r7 > temp_r0) {
                if (((temp_r4 >> 4U) & 1) && ((temp_r4 >> 3U) & 1)) {
                    M2C_FIELD(arg0, s32 *, 0x24) = var_r5;
                    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (*var_r8 & 7);
                }
            } else if (temp_r7 == temp_r0) {
                if ((var_r5 < (s32) M2C_FIELD(arg0, s32 *, 0x24)) && ((temp_r4 >> 4U) & 1) && ((temp_r4 >> 3U) & 1)) {
                    M2C_FIELD(arg0, s32 *, 0x24) = var_r5;
                }
            } else if (var_r5 == (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
                var_r9 = 1;
            }
            var_r5 -= 1;
            var_r8 -= 1;
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    if (var_r9 != 0) {
        fn_80070870((void *)(0));
    }
}
#pragma pop

void fn_80070CC0(s32 arg0, s32 arg1) {
    void *temp_r5;

    /* draft: did not compile: temp_r5 = arg0 + ((arg1 * 0xC0C) + 0x318); */
    M2C_FIELD(temp_r5, void **, 0xC00) = temp_r5;
    M2C_FIELD(temp_r5, s32 *, 0xC04) = 0;
    M2C_FIELD(temp_r5, s8 *, 0xC08) = 1;
    M2C_FIELD(M2C_FIELD(temp_r5, void **, 0xC00), s32 *, 8) = 0;
    M2C_FIELD(M2C_FIELD(temp_r5, void **, 0xC00), s32 *, 4) = 0;
    M2C_FIELD(M2C_FIELD(temp_r5, void **, 0xC00), s32 *, 0) = 0;
}

u8 fn_80070CFC(void *arg0) {
    u8 var_r0;
    u8 var_r4;

    var_r4 = 0;
    var_r0 = 0;
    if (((f32) fabs(M2C_FIELD(arg0, f32 *, 0)) < lbl_803518A0) && ((f32) fabs(M2C_FIELD(arg0, f32 *, 4)) < lbl_803518A0)) {
        var_r0 = 1;
    }
    if ((var_r0 != 0) && ((f32) fabs(M2C_FIELD(arg0, f32 *, 8)) < lbl_803518A0)) {
        var_r4 = 1;
    }
    return var_r4;
}

#pragma push
#pragma peephole off
void fn_80070D60(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    f32 temp_f31;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f27;
    f32 temp_f4;
    f32 temp_f7;
    f32 temp_f8;

    temp_f31 = (f32) Sin((float)(0));
    temp_f30 = (f32) Cos(farg0);
    temp_f29 = (f32) Sin(farg1);
    temp_f28 = (f32) Cos(farg1);
    temp_f27 = (f32) Sin(farg2);
    temp_f4 = (f32) Cos(farg2);
    temp_f7 = temp_f31 * temp_f29;
    temp_f8 = temp_f30 * temp_f29;
    M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_f28 * temp_f4);
    M2C_FIELD(arg0, f32 *, 4) = (f32) ((temp_f4 * temp_f7) - (temp_f30 * temp_f27));
    M2C_FIELD(arg0, f32 *, 8) = (f32) ((temp_f4 * temp_f8) + (temp_f31 * temp_f27));
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_803518A4;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (temp_f28 * temp_f27);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) ((temp_f27 * temp_f7) + (temp_f30 * temp_f4));
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) ((temp_f27 * temp_f8) - (temp_f31 * temp_f4));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_803518A4;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) -temp_f29;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (temp_f31 * temp_f28);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (temp_f30 * temp_f28);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_803518A4;
}
#pragma pop

void fn_80070EA8(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f8_2;

    temp_f31 = (f32) Sin((float)(0));
    temp_f30 = (f32) Cos(farg0);
    temp_f29 = (f32) Sin(farg1);
    temp_f28 = (f32) Cos(farg1);
    temp_f27 = (f32) Sin(farg2);
    temp_f7 = (f32) Cos(farg2);
    temp_f8 = temp_f31 * temp_f29;
    M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_f28 * temp_f7);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (temp_f28 * temp_f27);
    M2C_FIELD(arg0, f32 *, 8) = (f32) -temp_f29;
    temp_f8_2 = temp_f30 * temp_f29;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_803518A4;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) ((temp_f7 * temp_f8) - (temp_f30 * temp_f27));
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) ((temp_f27 * temp_f8) + (temp_f30 * temp_f7));
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (temp_f31 * temp_f28);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_803518A4;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) ((temp_f7 * temp_f8_2) + (temp_f31 * temp_f27));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) ((temp_f27 * temp_f8_2) - (temp_f31 * temp_f7));
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (temp_f30 * temp_f28);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_803518A4;
}

void fn_80070FF0(void *arg0, void *arg1, void *arg2) {
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;

    temp_f4 = M2C_FIELD(arg1, f32 *, 4);
    temp_f3 = M2C_FIELD(arg1, f32 *, 0);
    temp_f5 = M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((M2C_FIELD(arg0, f32 *, 0x20) * temp_f5) + ((M2C_FIELD(arg0, f32 *, 0) * temp_f3) + (M2C_FIELD(arg0, f32 *, 0x10) * temp_f4)));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((M2C_FIELD(arg0, f32 *, 0x24) * temp_f5) + ((M2C_FIELD(arg0, f32 *, 4) * temp_f3) + (M2C_FIELD(arg0, f32 *, 0x14) * temp_f4)));
    M2C_FIELD(arg2, f32 *, 8) = (f32) ((M2C_FIELD(arg0, f32 *, 0x28) * temp_f5) + ((M2C_FIELD(arg0, f32 *, 8) * temp_f3) + (M2C_FIELD(arg0, f32 *, 0x18) * temp_f4)));
}

void fn_80071054(void *arg0) {
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f2;

    sp8 = fabs(M2C_FIELD(arg0, f32 *, 8)) + (fabs(M2C_FIELD(arg0, f32 *, 0)) + fabs(M2C_FIELD(arg0, f32 *, 4)));
    spC = fabs(M2C_FIELD(arg0, f32 *, 0x18)) + (fabs(M2C_FIELD(arg0, f32 *, 0x10)) + fabs(M2C_FIELD(arg0, f32 *, 0x14)));
    temp_f1 = fabs(M2C_FIELD(arg0, f32 *, 0x20));
    temp_f2 = fabs(M2C_FIELD(arg0, f32 *, 0x28));
    sp10 = temp_f2 + (temp_f1 + fabs(M2C_FIELD(arg0, f32 *, 0x24)));
    PSVECMag(&sp8, temp_f1, temp_f2);
}

f32 fn_800710E4(s32 arg0, s32 arg1) {
    M2C_UNK sp8;
    f32 temp_f1;

    PSMTXMultVecSR(arg1, arg0, &sp8);
    temp_f1 = PSVECMag(&sp8);
    if (temp_f1 < lbl_803518A0) {
        return lbl_803518A4;
    }
    return lbl_803518A8 / temp_f1;
}

s8 fn_80071138(u8 *arg0) {
    s8 var_r5;
    u8 *var_r4;
    u8 temp_r3;

    var_r5 = (s8) *arg0;
    if (var_r5 != 0) {
        var_r4 = arg0 + 1;
loop_3:
        temp_r3 = *var_r4;
        if ((s8) temp_r3 != 0) {
            var_r4 += 1;
            var_r5 = (s8) temp_r3 + ((var_r5 << 5) - var_r5);
            goto loop_3;
        }
    }
    return var_r5;
}

f32 fn_80071174(f32 farg0) {
    f32 temp_f4;

    temp_f4 = (f32) __frsqrte(farg0);
    return temp_f4 * (lbl_803518C0 * farg0) * ((farg0 * (temp_f4 * temp_f4)) + lbl_803518C4);
}

f32 fn_8007119C(f32 farg0) {
    f32 temp_f4;

    temp_f4 = (f32) __frsqrte(farg0);
    return lbl_803518C0 * temp_f4 * ((farg0 * (temp_f4 * temp_f4)) + lbl_803518C4);
}

f32 fn_800711C0(f32 farg0, f32 farg1) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;

    temp_f1 = fabs(farg0);
    temp_f2_2 = fabs(farg1);
    temp_f1_2 = __fres(temp_f2_2 + temp_f1) * (temp_f2_2 - temp_f1);
    temp_f2_3 = temp_f1_2 * temp_f1_2;
    temp_f2 = (temp_f1_2 * ((temp_f2_3 * ((lbl_803518D4 * temp_f2_3) + lbl_803518D0)) + lbl_803518CC)) + lbl_803518C8;
    M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
    if (farg0 == lbl_803518A4) {
        return (farg1 >= 0.0f) ? temp_f2 : (lbl_803518D8 - temp_f2);
    }
    return (farg1 >= 0.0f) ? -temp_f2 : (lbl_803518DC + temp_f2);
}

M2C_UNK *fn_80071234(f32 farg0) {
    M2C_ERROR(/* unknown instruction: ps_merge00 $f5, $f0, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_cmpu0 $cr0, $f5, $f2 */);
    if (M2C_ERROR(/* Read from unset register $cr0_gt */)) {
        M2C_ERROR(/* unknown instruction: ps_cmpu1 $cr1, $f5, $f2 */);
        if (M2C_ERROR(/* Read from unset register $cr0_gt */)) {
            M2C_ERROR(/* unknown instruction: ps_mul $f0, $f5, $f5 */);
            M2C_ERROR(/* unknown instruction: ps_msub $f1, $f1, $f0, $f4 */);
            M2C_ERROR(/* unknown instruction: ps_madd $f2, $f1, $f0, $f3 */);
            M2C_ERROR(/* unknown instruction: ps_mul $f1, $f2, $f5 */);
            M2C_ERROR(/* unknown instruction: ps_merge01 $f1, $f1, $f2 */);
            return &lbl_803518F0;
        }
        M2C_ERROR(/* unknown instruction: ps_sub $f0, $f5, $f2 */);
        M2C_ERROR(/* unknown instruction: ps_sub $f5, $f2, $f0 */);
        M2C_ERROR(/* unknown instruction: ps_mul $f0, $f5, $f5 */);
        M2C_ERROR(/* unknown instruction: ps_msub $f1, $f1, $f0, $f4 */);
        M2C_ERROR(/* unknown instruction: ps_madd $f2, $f1, $f0, $f3 */);
        M2C_ERROR(/* unknown instruction: ps_mul $f1, $f2, $f5 */);
        M2C_ERROR(/* unknown instruction: ps_merge01 $f1, $f1, $f2 */);
        M2C_ERROR(/* unknown instruction: ps_mul $f1, $f1, $f4 */);
        return &lbl_803518F0;
    }
    M2C_ERROR(/* unknown instruction: ps_cmpu0 $cr0, $f5, $f2 */);
    if (M2C_ERROR(/* Read from unset register $cr0_gt */)) {
        M2C_ERROR(/* unknown instruction: ps_sub $f5, $f5, $f2 */);
        M2C_ERROR(/* unknown instruction: ps_mul $f0, $f5, $f5 */);
        M2C_ERROR(/* unknown instruction: ps_msub $f1, $f1, $f0, $f4 */);
        M2C_ERROR(/* unknown instruction: ps_madd $f2, $f1, $f0, $f3 */);
        M2C_ERROR(/* unknown instruction: ps_mul $f1, $f2, $f5 */);
        M2C_ERROR(/* unknown instruction: ps_merge01 $f1, $f1, $f2 */);
        M2C_ERROR(/* unknown instruction: ps_mul $f1, $f1, $f4 */);
        return &lbl_803518F0;
    }
    M2C_ERROR(/* unknown instruction: ps_sub $f0, $f5, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_sub $f5, $f2, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f0, $f5, $f5 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f1, $f1, $f0, $f4 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f2, $f1, $f0, $f3 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f1, $f2, $f5 */);
    M2C_ERROR(/* unknown instruction: ps_merge01 $f1, $f1, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f1, $f1, $f4 */);
    return &lbl_803518F0;
}

#pragma push
#pragma dont_inline on
s32 fn_80071314(void *arg0, void *arg1, u8 arg2) {
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f1;
    f32 var_f31;
    f32 var_f4;
    f64 temp_f1;
    f64 temp_f1_2;
    f64 temp_f1_3;

    if (fn_80070CFC((void *)(0)) != 0) {
        M2C_FIELD(arg1, f32 *, 8) = (f32) lbl_803518A4;
        M2C_FIELD(arg1, f32 *, 4) = (f32) lbl_803518A4;
        M2C_FIELD(arg1, f32 *, 0) = (f32) lbl_803518A4;
        return 0;
    }
    if (arg2 != 0) {
        sp10 = M2C_FIELD(arg0, f32 *, 4);
        sp14 = M2C_FIELD(arg0, f32 *, 8);
        spC = M2C_FIELD(arg0, f32 *, 0);
    } else {
        PSVECNormalize(arg0, &spC);
    }
    M2C_FIELD(arg1, f32 *, 8) = (f32) lbl_803518A4;
    var_f31 = lbl_803518A8;
    temp_f0 = -sp10;
    if (var_f31 < temp_f0) {

    } else {
        var_f31 = lbl_803518F8;
        var_f31 = temp_f0 < var_f31 ? var_f31 : temp_f0;
    }
    M2C_FIELD(arg1, f32 *, 0) = (f32) ArcSin(var_f31);
    var_f4 = -((var_f31 * var_f31) - lbl_803518A8);
    if (var_f4 > lbl_803518A4) {
        temp_f1 = __frsqrte(var_f4);
        temp_f1_2 = lbl_803518B0 * temp_f1 * -(((f64) var_f4 * (temp_f1 * temp_f1)) - lbl_803518B8);
        temp_f1_3 = lbl_803518B0 * temp_f1_2 * -(((f64) var_f4 * (temp_f1_2 * temp_f1_2)) - lbl_803518B8);
        sp8 = (f32) ((f64) var_f4 * (lbl_803518B0 * temp_f1_3 * -(((f64) var_f4 * (temp_f1_3 * temp_f1_3)) - lbl_803518B8)));
        var_f4 = sp8;
    }
    if (var_f4 < lbl_803518A0) {
        M2C_FIELD(arg1, f32 *, 4) = (f32) lbl_803518A4;
        return 1;
    }
    var_f1 = lbl_803518A8;
    temp_f0_2 = sp14 / var_f4;
    if (var_f1 < temp_f0_2) {

    } else {
        var_f1 = lbl_803518F8;
        var_f1 = temp_f0_2 < var_f1 ? var_f1 : temp_f0_2;
    }
    M2C_FIELD(arg1, f32 *, 4) = (f32) ArcCos(var_f1);
    if (spC < lbl_803518A4) {
        M2C_FIELD(arg1, f32 *, 4) = (f32) -M2C_FIELD(arg1, f32 *, 4);
    }
    return 1;
}
#pragma pop

s32 RanzakI(u32 arg0, u32 arg1) {
    s32 var_r8;
    s32 var_r9;
    u32 var_r3;

    var_r3 = arg0;
    var_r8 = 0x100F;
    var_r9 = 1;
loop_1:
    if (var_r3 & 1) {
        var_r9 = (var_r9 * var_r8) % 65521;
    }
    var_r3 = var_r3 >> 1U;
    if (var_r3 != 0) {
        var_r8 = (var_r8 * var_r8) % 65521;
        goto loop_1;
    }
    return ((arg1 * (var_r9 * arg1)) / 65521) % arg1;
}

f32 fn_8007154C(f32 farg0) {
    f32 var_f1;

    var_f1 = farg0;
    if (lbl_803518D8 <= var_f1) {
        var_f1 = (f32) fn_80156E70((double)(lbl_80351900), (double)(0));
        if (lbl_803518D8 <= var_f1) {
            return var_f1 - lbl_80351908;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_f1;
    }
    if (var_f1 < lbl_803518DC) {
        var_f1 = (f32) -fn_80156E70(-var_f1, lbl_80351900);
        if (var_f1 < lbl_803518DC) {
            var_f1 += lbl_80351908;
        }
    }
    return var_f1;
}

s32 fn_800715D4(u8 arg0, f32 farg0, f32 farg1, f32 farg2) {
    f32 temp_f29;
    f32 temp_f31;
    f32 var_f29;
    f32 var_f30;
    f32 var_f31;
    s32 var_r3;

    var_f29 = farg0;
    var_f30 = farg1;
    var_f31 = farg2;
    if (arg0 == 0) {
        var_f29 = fn_8007154C((float)(0));
        var_f30 = fn_8007154C(var_f30);
        var_f31 = fn_8007154C(var_f31);
    }
    temp_f31 = ((var_f31 - var_f30) >= 0.0f) ? var_f31 : (var_f31 + lbl_80351908);
    M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
    if ((var_f30 == var_f29) && (var_f29 < temp_f31)) {
        return 1;
    }
    var_r3 = 0;
    temp_f29 = var_f29 + lbl_80351908;
    M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
    if ((var_f30 == temp_f29) && (temp_f29 < temp_f31)) {
        var_r3 = 1;
    }
    return var_r3;
}

s32 fn_800716AC(s32 arg0) {
    fn_8007170C((void *)(0));
    return arg0;
}

s32 fn_800716DC(s32 arg0) {
    fn_80071748();
    return arg0;
}

void fn_8007170C(void *arg0) {
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_80351910;
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_80351910;
    M2C_FIELD(arg0, f32 *, 0) = (f32) lbl_80351910;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_80351914;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_80351914;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_80351914;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_80351914;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_80351914;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_80351914;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_80351914;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
}
