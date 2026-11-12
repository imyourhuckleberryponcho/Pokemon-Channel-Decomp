/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

u16 sndPitchUpOne(u32);
s32 sndGetPitch(u8, s32);
u32 fn_80125868();
u16 fn_8012C858(M2C_UNK, u8);
u16 fn_8012D328(void *);
u16 fn_8012D370(void *, s32);
u16 fn_8012D3B8(void *);
s16 sndSin(u16, u32, u32);
u32 fn_8012E0B4(s32);
M2C_UNK fn_8012E574(s32, u16);
extern s32 lbl_80350D60;
extern s32 lbl_80350D70;
extern s32 lbl_80350D74;
u16 fn_8012D250(void *);
u16 fn_8012D298(void *, M2C_UNK, s32);
s32 fn_8012D2E0(void *);
u16 fn_8012D448(void *, f32, f32, f32);
u16 fn_8012D490(void *, f32, f32);
u16 fn_8012D4D8(void *, f32);
u16 fn_8012D520(void *, f32, f32, f32);
s16 fn_8012D568(void *);
u8 fn_8012E0AC();
M2C_UNK fn_8012E0DC(s32, s32, u8);
M2C_UNK fn_8012E6A0(s32, u8, s32, u32, f32, f32, f32, f32);
extern M2C_UNK lbl_8032CE14;
extern M2C_UNK lbl_8032D414;
extern s32 lbl_80350D5C;
extern f32 lbl_803521E0;
extern f32 lbl_803521E4;
extern f32 lbl_803521E8;
extern f32 lbl_803521EC;
extern f32 lbl_803521F0;
extern f32 lbl_803521F4;
extern f32 lbl_803521F8;
extern f32 lbl_803521FC;
extern f32 lbl_80352200;
extern M2C_UNK lbl_8032D454;
extern u8 lbl_80350D31;
M2C_UNK fn_801131F8(s32);
M2C_UNK fn_80113474(s32);
M2C_UNK fn_801139A0(s32, M2C_UNK, M2C_UNK);
M2C_UNK fn_80122A40();
M2C_UNK fn_80122D2C(void *, u32);
u32 fn_80125568();
u16 fn_8012D400(void *);
s16 fn_8012D5B0(u8, u8, u8, u8);
s16 fn_8012D664(u8, u8, u8, u8);
M2C_UNK fn_8012E510(u8, u8);
M2C_UNK fn_8012E54C(u8, M2C_UNK);
M2C_UNK fn_8012EDA8();
extern M2C_UNK lbl_8032C9C0;
extern u8 lbl_80350D34;
extern u8 lbl_80350D3C;
extern u8 lbl_80350D44;
extern u8 lbl_80350D4C;
extern u32 lbl_80350D54;
extern u32 lbl_80350D58;
extern f32 lbl_80352218;
s32 fn_80116F84(u16, u8, u8, u8, u8, u8, M2C_UNK, M2C_UNK);
void *fn_8011E760();
u8 fn_80123AC4();
M2C_UNK fn_8012C03C(s32, u8, s32);
M2C_UNK fn_8012C644(s32, u8, s32);
M2C_UNK fn_8012CC24(M2C_UNK, s32, s32);
M2C_UNK fn_80122C3C(void *);
extern u8 lbl_80350D30;
M2C_UNK fn_8012DE38(u32 *);
extern f32 lbl_8035221C;
M2C_UNK fn_80122B90();
M2C_UNK fn_80124938(u8);
s32 fn_801259A8(u8);
M2C_UNK fn_80125BF0();
M2C_UNK fn_8012EDCC(u8);

void fn_801173E0(s32 arg0, M2C_UNK arg_sp0);
void fn_80117B24(s32 arg0);
void synthAddJob(void *arg0, void *arg1, u32 arg2, void **arg4);
void synthStartSynthJobHandling(void *arg0);
void synthForceLowPrecisionUpdate(s32 arg0);
void fn_80118418(void);
void fn_80118440(s32 arg0, M2C_UNK arg_sp0);
s32 fn_80118950(u8 arg1, u8 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_80118A18(s32 arg1, s32 arg2);
s32 fn_80118AFC(s32 arg1, s32 arg2);
void synthFXCloneMidiSetup(s32 arg0, s32 arg1);
s32 fn_80118C64(void);
void synthVolume(u8 arg0, u16 arg1, u8 arg2, u8 arg3, s32 arg4);
s32 synthIsFadeOutActive(u8 arg0);
void synthSetMusicVolumeType(u8 arg0, s8 arg1);
s32 fn_80119298(s32 arg0, u8 arg1);

void fn_801173E0(s32 arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80117B24(s32 arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f29_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f31;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f4;
    f32 temp_f7;
    f32 var_f30;
    f32 var_f31;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    u16 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r7_2;
    u8 temp_r8_2;
    s32 var_r0_2;
    u16 temp_r28;
    int temp_r0;
    u32 temp_r31;
    u32 temp_r3_4;
    u32 temp_r3_5;
    u32 var_r0;
    u8 temp_r5_3;
    u8 temp_r8;
    void *temp_r30;

    /* draft: did not compile: temp_r30 = lbl_80350D60 + (arg0 * 0x404); */
    if ((fn_8012E0B4(lbl_80350D60) != 0U) || ((u32) M2C_FIELD(temp_r30, u32 *, 0x34) != 0U)) {
        M2C_FIELD(temp_r30, s32 *, 0x30) = (s32) lbl_80350D74;
        M2C_FIELD(temp_r30, s32 *, 0x2C) = (s32) lbl_80350D70;
        temp_r31 = lbl_80350D74 - M2C_FIELD(temp_r30, s32 *, 0x30);
        temp_r5 = M2C_FIELD(temp_r30, s32 *, 0x114);
        temp_r6 = M2C_FIELD(temp_r30, s32 *, 0x118);
        if ((((temp_r6 & 0x8000) ^ 0) | ((temp_r5 & 0) ^ 0)) != 0) {
            M2C_FIELD(temp_r30, s32 *, 0x19C) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x19C) + (M2C_FIELD(temp_r30, s32 *, 0x194) * (temp_r31 >> 8U)));
            if ((s32) M2C_FIELD(temp_r30, s32 *, 0x194) < 0) {
                temp_r3 = M2C_FIELD(temp_r30, s32 *, 0x198);
                if (temp_r3 >= (s32) M2C_FIELD(temp_r30, s32 *, 0x19C)) {
                    M2C_FIELD(temp_r30, s32 *, 0x19C) = temp_r3;
                    M2C_FIELD(temp_r30, s32 *, 0x118) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x118) & 0xFFFF7FFF);
                    M2C_FIELD(temp_r30, s32 *, 0x114) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x114) & ~0);
                }
            } else {
                temp_r3_2 = M2C_FIELD(temp_r30, s32 *, 0x198);
                if (temp_r3_2 <= (s32) M2C_FIELD(temp_r30, s32 *, 0x19C)) {
                    M2C_FIELD(temp_r30, s32 *, 0x19C) = temp_r3_2;
                    M2C_FIELD(temp_r30, s32 *, 0x118) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x118) & 0xFFFF7FFF);
                    M2C_FIELD(temp_r30, s32 *, 0x114) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x114) & ~0);
                }
            }
            var_r0 = 1;
            M2C_FIELD(temp_r30, s32 *, 0x154) = (s32) M2C_FIELD(temp_r30, s32 *, 0x19C);
        } else {
            var_r0 = (((temp_r6 & 0) ^ 0) | ((temp_r5 & 0x1000) ^ 0)) != 0;
        }
        M2C_FIELD(temp_r30, s32 *, 0x118) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x118) & ~0);
        temp_r8 = M2C_FIELD(temp_r30, u8 *, 0x120);
        temp_r7 = M2C_FIELD(temp_r30, u8 *, 0x11E) * 0x30;
        M2C_FIELD(temp_r30, s32 *, 0x114) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x114) & ~0x1000);
        temp_f3 = M2C_FIELD((&lbl_8032CE14 + temp_r7), f32 *, 0x14) * *(&lbl_8032CE14 + temp_r7) * *(&lbl_8032CE14 + (((M2C_FIELD(temp_r30, u8 *, 0x11D) != 0) + 0x15) * 0x30));
        if (temp_r8 != 0xFF) {
            var_f31 = lbl_803521E0 * (temp_f3 * (f32) *(&lbl_8032D414 + temp_r8));
        } else {
            var_f31 = temp_f3;
        }
        if (var_f31 != M2C_FIELD(temp_r30, f32 *, 0x15C)) {
            M2C_FIELD(temp_r30, f32 *, 0x15C) = var_f31;
            var_r0 = 1;
        }
        var_f30 = lbl_803521E4 * (f32) M2C_FIELD(temp_r30, s32 *, 0x154);
        if ((M2C_FIELD(temp_r30, u16 *, 0x16C) | M2C_FIELD(temp_r30, u16 *, 0x16E)) != 0) {
            temp_r28 = fn_8012D3B8(temp_r30);
            temp_f2 = lbl_803521E8 * (f32) (0x2000 - ((s32) (0x2000 - (fn_8012D568(temp_r30) - 0x2000)) >> 1));
            temp_f7 = M2C_FIELD(temp_r30, f32 *, 0x168);
            temp_f1 = lbl_803521EC * ((f32) M2C_FIELD(temp_r30, u16 *, 0x16C) * (lbl_803521F0 - (lbl_803521F4 * ((f32) temp_r28 * (f32) (0x1000 - M2C_FIELD(temp_r30, u16 *, 0x16E))))));
            if (temp_f7 < temp_f1) {
                temp_f0 = temp_f7 + lbl_803521F8;
                M2C_FIELD(temp_r30, f32 *, 0x168) = temp_f0;
                if (temp_f0 > temp_f1) {
                    M2C_FIELD(temp_r30, f32 *, 0x168) = temp_f1;
                }
            } else if (temp_f7 > temp_f1) {
                temp_f0_2 = temp_f7 - lbl_803521F8;
                M2C_FIELD(temp_r30, f32 *, 0x168) = temp_f0_2;
                if (temp_f0_2 < temp_f1) {
                    M2C_FIELD(temp_r30, f32 *, 0x168) = temp_f1;
                }
            }
            var_r0 = 1;
            var_f30 *= lbl_803521F0 - (temp_f2 * (lbl_803521F0 - M2C_FIELD(temp_r30, f32 *, 0x168)));
        }
        if (!(lbl_80350D5C & 1)) {
            if (((((M2C_FIELD(temp_r30, s32 *, 0x118) & 0) ^ 0) | ((M2C_FIELD(temp_r30, s32 *, 0x114) & 0x2000) ^ 0)) != 0) || (M2C_FIELD(temp_r30, s32 *, 0x214) & 6)) {
                temp_r5_2 = M2C_FIELD(temp_r30, s32 *, 0x114);
                M2C_FIELD(temp_r30, s32 *, 0x118) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x118) & ~0);
                M2C_FIELD(temp_r30, s32 *, 0x114) = (s32) (temp_r5_2 & ~0x2000);
                temp_r3_3 = M2C_FIELD(temp_r30, s32 *, 0x170) + ((fn_8012D298(temp_r30, -0x2001, temp_r5_2) - 0x2000) << 9);
                if (temp_r3_3 < 0) {
                    var_r0_2 = 0;
                } else {
                    var_r0_2 = 0x7F0000;
                    if (temp_r3_3 <= 0x7F0000) {
                        var_r0_2 = temp_r3_3;
                    }
                }
                M2C_FIELD(temp_r30, s32 *, 0x160) = var_r0_2;
                if (lbl_80350D5C & 2) {
                    temp_r3_4 = M2C_FIELD(temp_r30, s32 *, 0x174) + ((fn_8012D2E0(temp_r30) << 9) & 0x01FFFE00);
                    M2C_FIELD(temp_r30, u32 *, 0x164) = temp_r3_4;
                    if (temp_r3_4 > 0x7F0000U) {
                        M2C_FIELD(temp_r30, u32 *, 0x164) = 0x7F0000U;
                    }
                } else {
                    M2C_FIELD(temp_r30, u32 *, 0x164) = 0U;
                }
                var_r0 = 1;
            } else if (!(lbl_80350D5C & 2)) {
                M2C_FIELD(temp_r30, u32 *, 0x164) = 0U;
            }
        } else {
            M2C_FIELD(temp_r30, s32 *, 0x160) = 0x400000;
            M2C_FIELD(temp_r30, u32 *, 0x164) = 0U;
            temp_r7_2 = M2C_FIELD(temp_r30, s32 *, 0x114);
            temp_r8_2 = M2C_FIELD(temp_r30, s32 *, 0x118);
            M2C_FIELD(temp_r30, s32 *, 0x118) = (s32) (temp_r8_2 & ~0);
            M2C_FIELD(temp_r30, s32 *, 0x114) = (s32) (temp_r7_2 & ~0x2000);
            var_r0 |= (((temp_r8_2 & 0) ^ 0) | ((temp_r7_2 & 0x2000) ^ 0)) != 0;
        }
        if ((var_r0 != 0) || (M2C_FIELD(temp_r30, s32 *, 0x214) & 0xF01)) {
            temp_f2_2 = (f32) fn_8012D250(temp_r30);
            temp_f1_2 = var_f30 * var_f31 * temp_f2_2;
            temp_f31 = lbl_803521FC * temp_f1_2;
            temp_f3_2 = temp_f31 * (f32) fn_8012D490(temp_r30, temp_f1_2, temp_f2_2);
            temp_f2_3 = lbl_803521FC * temp_f3_2;
            temp_f1_3 = (f32) M2C_FIELD(temp_r30, u8 *, 0x190) * temp_f2_3;
            temp_f29 = lbl_803521E0 * temp_f1_3;
            temp_f3_3 = var_f30 * (f32) fn_8012D448(temp_r30, temp_f1_3, temp_f2_3, temp_f3_2);
            temp_f2_4 = lbl_803521FC * temp_f3_3;
            temp_f1_4 = temp_f2_4 + temp_f29;
            temp_f28 = (lbl_803521E0 * (f32) M2C_FIELD(temp_r30, u8 *, 0x191));
            temp_f28 += temp_f1_4;
            temp_f1_5 = temp_f31 * (f32) fn_8012D520(temp_r30, temp_f1_4, temp_f2_4, temp_f3_3);
            temp_f29_2 = lbl_803521FC * temp_f1_5;
            temp_f4 = var_f30 * (f32) fn_8012D4D8(temp_r30, temp_f1_5);
            M2C_FIELD(temp_r30, s16 *, 0x400) = (s16) (lbl_80352200 * temp_f31);
            fn_8012E6A0(arg0, M2C_FIELD(temp_r30, u8 *, 0x192), M2C_FIELD(temp_r30, s32 *, 0x160), M2C_FIELD(temp_r30, u32 *, 0x164), temp_f31, temp_f28, (lbl_803521FC * temp_f4) + temp_f29_2, temp_f4);
        }
        temp_r3_5 = M2C_FIELD(temp_r30, u32 *, 0x110);
        if (temp_r3_5 != 0) {
            temp_r0 = temp_r3_5 - (M2C_FIELD(temp_r30, u16 *, 0x10E) * temp_r31);
            M2C_FIELD(temp_r30, u32 *, 0x110) = temp_r0;
            if (temp_r0 < 0) {
                M2C_FIELD(temp_r30, u32 *, 0x110) = 0U;
            }
            temp_r5_3 = M2C_FIELD(temp_r30, u8 *, 0x10C);
            fn_8012E0DC(arg0, (((u32) M2C_FIELD(temp_r30, u32 *, 0x110) >> 0xFU) & ~0xFF000000) | (temp_r5_3 << 0x18), temp_r5_3);
        }
        /* draft: did not compile: synthAddJob(temp_r30, 1, (5 - fn_8012E0AC()) << 8); */
    }
    if ((u8) M2C_FIELD(temp_r30, u8 *, 0xA8) != 0) {
        M2C_FIELD(temp_r30, u8 *, 0xA8) = 0U;
        M2C_FIELD(temp_r30, s32 *, 0x214) = 0x1FFF;
    }
}

void synthAddJob(void *arg0, void *arg1, u32 arg2, void **arg4) { } /* draft: stub */

#pragma push
#pragma dont_inline on
void synthStartSynthJobHandling(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) lbl_80350D74;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) lbl_80350D70;
    synthAddJob((void *)(NULL), (void *)(0), (unsigned long)(lbl_80350D74), (void **)(0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) lbl_80350D74;
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) lbl_80350D70;
    /* draft: did not compile: synthAddJob(arg0, 1, 0); */
}
#pragma pop

void synthForceLowPrecisionUpdate(s32 arg0) {
    synthAddJob((void *)(0), (void *)(0), (unsigned long)(0), (void **)(0));
    /* draft: did not compile: synthAddJob(arg0, 1, 0); */
}

void fn_80118418(void) {
    /* draft: did not compile: synthAddJob(2, 0); */
}

void fn_80118440(s32 arg0, M2C_UNK arg_sp0) { } /* draft: stub */

s32 fn_80118950(u8 arg1, u8 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) {
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 var_r31;
    u8 var_r27;
    u8 var_r28;
    void *temp_r3;

    var_r27 = arg1;
    var_r28 = arg2;
    var_r31 = -1;
    temp_r3 = fn_8011E760();
    if (temp_r3 != NULL) {
        if (var_r27 == 0xFF) {
            var_r27 = M2C_FIELD(temp_r3, u8 *, 6);
        }
        if (var_r28 == 0xFF) {
            var_r28 = M2C_FIELD(temp_r3, u8 *, 7);
        }
        sp8 = 0;
        spC = 0;
        sp10 = 0xFF;
        sp14 = (s32) M2C_FIELD(temp_r3, u8 *, 9);
        sp18 = 0;
        sp1C = arg3;
        sp20 = arg4;
        var_r31 = fn_80116F84(M2C_FIELD(temp_r3, u16 *, 2), M2C_FIELD(temp_r3, u8 *, 5), M2C_FIELD(temp_r3, u8 *, 4), (u8) (M2C_FIELD(temp_r3, u8 *, 8) | 0x80), var_r27, var_r28, 0xFF, 0xFF);
    }
    return var_r31;
}

s32 fn_80118A18(s32 arg1, s32 arg2) {
    s32 temp_r29;
    s32 var_r28;
    u8 var_r3;
    void *temp_r7;

    var_r28 = 0;
    var_r3 = fn_80123AC4();
loop_7:
    if ((u32) (var_r3 + 0x10000) == -1U) {
        return var_r28;
    }
    temp_r29 = var_r3 * 0x404;
    /* draft: did not compile: temp_r7 = lbl_80350D60 + temp_r29; */
    if (var_r3 == (u32) M2C_FIELD(temp_r7, u32 *, 0xF4)) {
        if ((((M2C_FIELD(temp_r7, s32 *, 0x118) & 2) ^ 0) | ((M2C_FIELD(temp_r7, s32 *, 0x114) & 0) ^ 0)) != 0) {
            fn_8012C03C((s32)arg1, M2C_FIELD(temp_r7, u8 *, 0x20B), arg2);
        } else {
            fn_8012C03C(arg1, M2C_FIELD(temp_r7, u8 *, 0x122), arg2);
        }
        var_r28 = 1;
        /* draft: did not compile: var_r3 = (u8) *(lbl_80350D60 + (temp_r29 + 0xEC)); */
        goto loop_7;
    }
    return var_r28;
}

s32 fn_80118AFC(s32 arg1, s32 arg2) {
    s32 temp_r29;
    s32 var_r28;
    u8 var_r3;
    void *temp_r7;

    var_r28 = 0;
    var_r3 = fn_80123AC4();
loop_7:
    if ((u32) (var_r3 + 0x10000) == -1U) {
        return var_r28;
    }
    temp_r29 = var_r3 * 0x404;
    /* draft: did not compile: temp_r7 = lbl_80350D60 + temp_r29; */
    if (var_r3 == (u32) M2C_FIELD(temp_r7, u32 *, 0xF4)) {
        if ((((M2C_FIELD(temp_r7, s32 *, 0x118) & 2) ^ 0) | ((M2C_FIELD(temp_r7, s32 *, 0x114) & 0) ^ 0)) != 0) {
            fn_8012C644((s32)arg1, M2C_FIELD(temp_r7, u8 *, 0x20B), arg2);
        } else {
            fn_8012C644(arg1, M2C_FIELD(temp_r7, u8 *, 0x122), arg2);
        }
        var_r28 = 1;
        /* draft: did not compile: var_r3 = (u8) *(lbl_80350D60 + (temp_r29 + 0xEC)); */
        goto loop_7;
    }
    return var_r28;
}

void synthFXCloneMidiSetup(s32 arg0, s32 arg1) {
    fn_8012CC24(7, arg0, arg1);
    fn_8012CC24(0xA, arg0, arg1);
    fn_8012CC24(0x5B, arg0, arg1);
    fn_8012CC24(0x80, arg0, arg1);
    fn_8012CC24(0x84, arg0, arg1);
}

s32 fn_80118C64(void) {
    s32 temp_r31;
    s32 var_r30;
    u8 var_r3;
    void *temp_r4;

    var_r30 = 0;
    if ((u8) lbl_80350D30 != 0) {
        var_r3 = fn_80123AC4();
loop_5:
        if ((u32) (var_r3 + 0x10000) != -1U) {
            temp_r31 = var_r3 * 0x404;
            /* draft: did not compile: temp_r4 = lbl_80350D60 + temp_r31; */
            if (var_r3 == (u32) M2C_FIELD(temp_r4, u32 *, 0xF4)) {
                fn_80122C3C(temp_r4);
                var_r30 = 1;
            }
            /* draft: did not compile: var_r3 = (u8) *(lbl_80350D60 + (temp_r31 + 0xEC)); */
            goto loop_5;
        }
    }
    return var_r30;
}

void synthVolume(u8 arg0, u16 arg1, u8 arg2, u8 arg3, s32 arg4) {
    M2C_UNK *var_r29_3;
    M2C_UNK *var_r29;
    M2C_UNK *var_r29_2;
    u32 sp8;
    f32 temp_f0;
    f32 temp_f31;
    f32 temp_f31_2;
    f32 temp_f31_3;
    s32 temp_r6;
    u32 var_r28;
    u32 var_r28_2;
    u32 var_r28_3;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_4;
    u8 temp_r0_5;
    u8 temp_r0_6;
    u8 var_r4;
    void *temp_r4;
    void *temp_r8;

    sp8 = (u32) arg1;
    if (arg1 != 0) {
        fn_8012DE38(&sp8);
    }
    switch (arg2) {                           /* switch 1; irregular */
    case 0xFF:                                      /* switch 1 */
        var_r29 = &lbl_8032CE14;
        var_r28 = 0;
        temp_f31 = lbl_803521E0 * (f32) arg0;
        do {
            temp_r0 = M2C_FIELD(var_r29, u8 *, 0x2D);
            if ((temp_r0 == 0) || (temp_r0 == 1)) {
                M2C_FIELD(var_r29, u8 *, 0x2C) = arg3;
                M2C_FIELD(var_r29, s32 *, 0x28) = -1;
                if (sp8 != 0) {
                    M2C_FIELD(var_r29, f32 *, 0x10) = (f32) (lbl_8035221C / (f32) sp8);
                    M2C_FIELD(var_r29, f32 *, 0xC) = (f32) lbl_803521F0;
                    M2C_FIELD(var_r29, f32 *, 8) = (f32) M2C_FIELD(var_r29, f32 *, 0);
                    M2C_FIELD(var_r29, f32 *, 4) = temp_f31;
                } else {
                    M2C_FIELD(var_r29, f32 *, 4) = temp_f31;
                    M2C_FIELD(var_r29, f32 *, 0) = temp_f31;
                    if ((u32) (M2C_FIELD(var_r29, s32 *, 0x28) + 0x10000) != -1U) {
                        temp_r0_2 = M2C_FIELD(var_r29, u8 *, 0x2C);
                        switch ((s32) temp_r0_2) {  /* switch 2; irregular */
                        case 1:                     /* switch 2 */
                            fn_80113474((long)(0));
                            break;
                        case 2:                     /* switch 2 */
                            fn_801131F8((long)(0));
                            break;
                        case 3:                     /* switch 2 */
                            fn_801139A0((long)(0), (long)(0), (long)(0));
                            break;
                        }
                    }
                }
                lbl_80350D58 |= 1 << var_r28;
            }
            var_r28 += 1;
            var_r29 += 0x30;
        } while (var_r28 < 0x20U);
        return;
    case 0xFC:                                      /* switch 1 */
        var_r29_2 = &lbl_8032CE14;
        var_r28_2 = 0;
        temp_f31_2 = lbl_803521E0 * (f32) arg0;
        do {
            temp_r0_3 = M2C_FIELD(var_r29_2, u8 *, 0x2D);
            if ((temp_r0_3 == 2) || (temp_r0_3 == 3)) {
                M2C_FIELD(var_r29_2, u8 *, 0x2C) = arg3;
                M2C_FIELD(var_r29_2, s32 *, 0x28) = -1;
                if (sp8 != 0) {
                    M2C_FIELD(var_r29_2, f32 *, 0x10) = (f32) (lbl_8035221C / (f32) sp8);
                    M2C_FIELD(var_r29_2, f32 *, 8) = (f32) M2C_FIELD(var_r29_2, f32 *, 0);
                    M2C_FIELD(var_r29_2, f32 *, 4) = temp_f31_2;
                    M2C_FIELD(var_r29_2, f32 *, 0xC) = (f32) lbl_803521F0;
                } else {
                    M2C_FIELD(var_r29_2, f32 *, 4) = temp_f31_2;
                    M2C_FIELD(var_r29_2, f32 *, 0) = temp_f31_2;
                    if ((u32) (M2C_FIELD(var_r29_2, s32 *, 0x28) + 0x10000) != -1U) {
                        temp_r0_4 = M2C_FIELD(var_r29_2, u8 *, 0x2C);
                        switch ((s32) temp_r0_4) {  /* switch 3; irregular */
                        case 1:                     /* switch 3 */
                            fn_80113474((long)(0));
                            break;
                        case 2:                     /* switch 3 */
                            fn_801131F8((long)(0));
                            break;
                        case 3:                     /* switch 3 */
                            fn_801139A0((long)(0), (long)(0), (long)(0));
                            break;
                        }
                    }
                }
                lbl_80350D58 |= 1 << var_r28_2;
            }
            var_r28_2 += 1;
            var_r29_2 += 0x30;
        } while (var_r28_2 < 0x20U);
        return;
    case 0xFA:                                      /* switch 1 */
        var_r4 = 2;
block_51:
        var_r29_3 = &lbl_8032CE14;
        var_r28_3 = 0;
        temp_f31_3 = lbl_803521E0 * (f32) arg0;
        do {
            if ((u8) M2C_FIELD(var_r29_3, u8 *, 0x2D) == var_r4) {
                M2C_FIELD(var_r29_3, u8 *, 0x2C) = arg3;
                M2C_FIELD(var_r29_3, s32 *, 0x28) = -1;
                if (sp8 != 0) {
                    M2C_FIELD(var_r29_3, f32 *, 0x10) = (f32) (lbl_8035221C / (f32) sp8);
                    M2C_FIELD(var_r29_3, f32 *, 8) = (f32) M2C_FIELD(var_r29_3, f32 *, 0);
                    M2C_FIELD(var_r29_3, f32 *, 4) = temp_f31_3;
                    M2C_FIELD(var_r29_3, f32 *, 0xC) = (f32) lbl_803521F0;
                } else {
                    M2C_FIELD(var_r29_3, f32 *, 4) = temp_f31_3;
                    M2C_FIELD(var_r29_3, f32 *, 0) = temp_f31_3;
                    if ((u32) (M2C_FIELD(var_r29_3, s32 *, 0x28) + 0x10000) != -1U) {
                        temp_r0_5 = M2C_FIELD(var_r29_3, u8 *, 0x2C);
                        switch ((s32) temp_r0_5) {  /* switch 4; irregular */
                        case 1:                     /* switch 4 */
                            fn_80113474((long)(0));
                            break;
                        case 2:                     /* switch 4 */
                            fn_801131F8((long)(0));
                            break;
                        case 3:                     /* switch 4 */
                            fn_801139A0((long)(0), (long)(0), (long)(0));
                            break;
                        }
                    }
                }
                lbl_80350D58 |= 1 << var_r28_3;
            }
            var_r28_3 += 1;
            var_r29_3 += 0x30;
        } while (var_r28_3 < 0x20U);
        return;
    case 0xFB:                                      /* switch 1 */
        var_r4 = 3;
        goto block_51;
    case 0xFD:                                      /* switch 1 */
        var_r4 = 0;
        goto block_51;
    case 0xFE:                                      /* switch 1 */
        var_r4 = 1;
        goto block_51;
    default:                                        /* switch 1 */
        temp_r6 = arg2 * 0x30;
        temp_r8 = &lbl_8032CE14 + temp_r6;
        M2C_FIELD(temp_r8, u8 *, 0x2C) = arg3;
        M2C_FIELD(temp_r8, s32 *, 0x28) = arg4;
        if (sp8 != 0) {
            temp_r4 = &lbl_8032CE14 + temp_r6;
            M2C_FIELD(temp_r4, f32 *, 8) = (f32) *(&lbl_8032CE14 + temp_r6);
            M2C_FIELD(temp_r4, f32 *, 0xC) = (f32) lbl_803521F0;
            M2C_FIELD(temp_r4, f32 *, 0x10) = (f32) (lbl_8035221C / (f32) sp8);
            M2C_FIELD(temp_r4, f32 *, 4) = (f32) (lbl_803521E0 * (f32) arg0);
        } else {
            temp_f0 = lbl_803521E0 * (f32) arg0;
            M2C_FIELD((&lbl_8032CE14 + temp_r6), f32 *, 4) = temp_f0;
            *(&lbl_8032CE14 + temp_r6) = temp_f0;
            if ((u32) (M2C_FIELD(temp_r8, s32 *, 0x28) + 0x10000) != -1U) {
                temp_r0_6 = M2C_FIELD(temp_r8, u8 *, 0x2C);
                switch ((s32) temp_r0_6) {          /* switch 5; irregular */
                case 1:                             /* switch 5 */
                    fn_80113474((long)(0));
                    break;
                case 2:                             /* switch 5 */
                    fn_801131F8((long)(0));
                    break;
                case 3:                             /* switch 5 */
                    fn_801139A0((long)(0), (long)(0), (long)(0));
                    break;
                }
            }
        }
        lbl_80350D58 |= 1 << arg2;
        return;
    }
}

s32 synthIsFadeOutActive(u8 arg0) {
    void *temp_r4;

    temp_r4 = &lbl_8032CE14 + (arg0 * 0x30);
    if (((u8) M2C_FIELD(temp_r4, u8 *, 0x2D) != 4) && (lbl_80350D58 & (1 << arg0)) && (M2C_FIELD(temp_r4, f32 *, 8) > M2C_FIELD(temp_r4, f32 *, 4))) {
        return 1;
    }
    return 0;
}

void synthSetMusicVolumeType(u8 arg0, s8 arg1) {
    if ((u8) lbl_80350D30 != 0) {
        M2C_FIELD((&lbl_8032CE14 + (arg0 * 0x30)), s8 *, 0x2D) = arg1;
    }
}

s32 fn_80119298(s32 arg0, u8 arg1) {
    s32 temp_r31;
    s32 var_r30;

    var_r30 = 0;
    switch (arg0) {                                 /* irregular */
    case 0:
        temp_r31 = arg1;
        temp_r31 *= 0x404;
        if ((u8) M2C_FIELD((lbl_80350D60 + temp_r31), u8 *, 0x11C) == 0) {
            fn_8012EDCC((unsigned char)(0));
            fn_80125BF0();
            if (arg1 == (u32) M2C_FIELD((lbl_80350D60 + temp_r31), u32 *, 0xF4)) {
                fn_80122B90();
            }
        }
        break;
    case 1:
        fn_80124938((s32)arg1);
        break;
    case 2:
        var_r30 = fn_801259A8((s32)arg1);
        break;
    case 3:
        fn_8012EDCC((s32)arg1);
        fn_80125BF0();
        break;
    }
    return var_r30;
}
