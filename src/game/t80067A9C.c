/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800708D4(M2C_UNK);
extern M2C_UNK lbl_802236C8;
extern s32 lbl_80350600;
extern f64 lbl_80350618;
extern u8 lbl_80350620;
extern s32 lbl_80350624;
extern f64 lbl_80350628;
extern f64 lbl_80350630;
extern f64 lbl_80351838;
extern f64 lbl_80351840;
extern f64 lbl_80351848;
extern f64 lbl_80351850;
extern f64 lbl_80351858;
extern f64 lbl_80351860;
extern f64 lbl_80351868;
s32 fn_80038264();
s32 fn_8011AD38(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 sndStreamAllocLength(M2C_UNK, M2C_UNK);
extern s32 lbl_8034E9E0;
extern s32 lbl_80350608;
M2C_UNK FreePictureSD(s32);
M2C_UNK fn_8011B730(s32);
M2C_UNK fn_8011C45C(s32);
u8 fn_8007C844();
M2C_UNK fn_80102F7C(M2C_UNK);
M2C_UNK PadRumbleOffN(M2C_UNK);
extern M2C_UNK lbl_8031EA64;
extern u8 lbl_8035060D;
extern u8 lbl_80350638;
extern u8 lbl_80350639;
extern u8 lbl_8035063A;
extern u8 lbl_8035063B;
extern s8 lbl_8035063C;
M2C_UNK fn_800278E0(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800279B8(void *);
extern u8 lbl_802C26A0;
extern M2C_UNK lbl_802C2CA8;
extern void *lbl_80350554;
s32 OSGetTick(void *, M2C_UNK, void *);
M2C_UNK fn_80038E34(void *, s32, M2C_UNK, u32);
M2C_UNK fn_8006AB80(void *);
M2C_UNK VIWaitForRetrace(M2C_UNK *, M2C_UNK);
M2C_UNK memmove(s32, s32, s32);
extern u8 lbl_8035060C;
extern void *lbl_80350640;
extern u8 lbl_80350644;
M2C_UNK fn_8006988C(void *, s32);
s32 fn_8006A550();

s32 fn_80067A9C(void *arg0, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
void fn_800684D4(void *arg0, void *arg1, s32 arg2);
void fn_80068630(void *arg0, s32 arg1);
void fn_80068678(void *arg0);
u32 fn_800687A0(s16 *arg0, u32 arg1);
void fn_80068B20(void);
void fn_80068BB8(void);
void fn_80068BF4(M2C_UNK arg_sp0);
void ClsPokemonMini(void);
s32 fn_80068F78(M2C_UNK arg_sp0);
s32 fn_80069508(void);
s32 fn_8006977C(void *arg0);

s32 fn_80067A9C(void *arg0, s32 arg2, s32 arg3, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

void fn_800684D4(void *arg0, void *arg1, s32 arg2) {
    u8 temp_r5;
    s32 temp_r5_2;
    s8 temp_r6_2;
    u8 temp_r7;
    s32 temp_r7_2;
    s32 temp_r8_3;
    s32 var_r5;
    u8 temp_r8;
    u8 temp_r8_2;
    u8 var_r7;
    void *var_r3;

    var_r3 = arg0;
    var_r5 = arg2;
    if ((void *) M2C_FIELD(var_r3, void **, 0) == NULL) {
        M2C_FIELD(arg1, s32 *, 0) = 0x3E80;
        M2C_FIELD(arg1, s32 *, 4) = 0;
        M2C_FIELD(arg1, s32 *, 0x10) = 0;
        return;
    }
    M2C_FIELD(arg1, s32 *, 0x10) = 2;
    temp_r8 = M2C_FIELD((M2C_FIELD(var_r3, void **, 0)), u8 *, 0x10A);
    temp_r7 = (M2C_FIELD((M2C_FIELD(var_r3, void **, 0)), u8 *, 0x108) & ~temp_r8) | (M2C_FIELD((M2C_FIELD(var_r3, void **, 0)), u8 *, 0x109) & temp_r8);
    if (!(temp_r7 & 1)) {
        M2C_FIELD(arg1, s32 *, 0x10) = (s32) (M2C_FIELD(arg1, s32 *, 0x10) - 1);
    }
    if (!(temp_r7 & 3 & 2)) {
        M2C_FIELD(arg1, s32 *, 0x10) = (s32) (M2C_FIELD(arg1, s32 *, 0x10) - 1);
    }
    M2C_FIELD(arg1, s32 *, 4) = 1;
    var_r7 = M2C_FIELD(var_r3, u8 *, 0x8C) & M2C_FIELD(var_r3, u8 *, 0x8D);
    if (var_r7 != 0) {
        temp_r8_2 = M2C_FIELD(var_r3, u8 *, 0xB);
        if (!(temp_r8_2 & 0x10)) {
            var_r7 &= ~M2C_FIELD(var_r3, u8 *, 0x8E);
        }
        if (!(temp_r8_2 & 0x20) || !(M2C_FIELD(M2C_FIELD(var_r3, void **, 0), s32 *, 8) & 8)) {
            var_r7 &= M2C_FIELD(var_r3, u8 *, 0x8E);
        }
    }
    if (!(M2C_FIELD(var_r3, u8 *, 0x12) & 0x80)) {
        if (!(var_r7 & 0x20)) {
            M2C_FIELD(arg1, s32 *, 4) = 0;
        } else {
            temp_r5 = M2C_FIELD(var_r3, s32 *, 0x28);
            var_r3 = M2C_FIELD(var_r3, void **, 0x88);
            var_r5 = temp_r5 + 1;
        }
    } else if (!(var_r7 & 0x10)) {
        M2C_FIELD(arg1, s32 *, 4) = 0;
    } else {
        temp_r8_3 = M2C_FIELD(var_r3, s32 *, 0x58) << 8;
        temp_r7_2 = M2C_FIELD(var_r3, s32 *, 0x54);
        temp_r6_2 = M2C_FIELD(var_r3, s32 *, 0x28) << 8;
        temp_r5_2 = 1;
        temp_r5_2 += M2C_FIELD(var_r3, s32 *, 0x24);
        var_r3 = M2C_FIELD(var_r3, void **, 0x84);
        var_r5 = temp_r6_2 + temp_r5_2;
    }
    if ((s32) M2C_FIELD(arg1, s32 *, 4) != 0) {
        M2C_FIELD(arg1, s32 *, 0) = (s32) ((s32) var_r3 * var_r5);
        M2C_FIELD(arg1, s32 *, 4) = (s32) ((s32) var_r3 * (var_r5 - M2C_ERROR(/* Read from unset register $r0 */)));
    }
}

void fn_80068630(void *arg0, s32 arg1) {
    s32 temp_r5;
    s32 temp_r6;
    u8 temp_r7;

    temp_r7 = M2C_FIELD(arg0, u8 *, 2);
    temp_r6 = M2C_FIELD(arg0, u8 *, 0) & ~temp_r7;
    temp_r5 = temp_r6 | (M2C_FIELD(arg0, u8 *, 1) & temp_r7);
    M2C_FIELD(arg0, u8 *, 5) = (u8) ((M2C_FIELD(arg0, u8 *, 5) & ~3) | (temp_r5 & 3));
    /* draft: did not compile: fn_80068678(arg1, temp_r5, temp_r6, temp_r7); */
}

void fn_80068678(void *arg0) {
    int sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    M2C_UNK (*temp_r12)(void *, s32);
    M2C_UNK (*temp_r12_2)(void *, s32);
    s8 temp_r4;
    u8 var_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x9C);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s32 *, 0x9C) = 0x7F000000;
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(void *, s32), 0xA4);
        if (temp_r12 != NULL) {
            /* draft: did not compile: temp_r12(arg0 + 0x90, M2C_FIELD(arg0, s32 *, 0xA8)); */
        }
        M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (M2C_FIELD(arg0, s32 *, 0x9C) + ((temp_r4 ^ 0x80000000) + 0x01000000));
        return;
    }
    sp18 = 0;
    sp14 = 0;
    sp10 = 0;
    spC = 0;
    sp8 = 0;
    fn_800684D4((void *)(&sp8), (void *)(0), (long)(0));
    var_r4 = 0;
    if ((sp8 == (s32) M2C_FIELD(arg0, s32 *, 0x90)) && (spC == (s32) M2C_FIELD(arg0, s32 *, 0x94)) && (sp18 == (s32) M2C_FIELD(arg0, s32 *, 0xA0))) {
        var_r4 = 1;
    }
    switch (var_r4) {
    case 0:
            temp_r12_2 = M2C_FIELD(arg0, M2C_UNK (**)(void *, s32), 0xA4);
            if (temp_r12_2 != NULL) {
                /* draft: did not compile: temp_r12_2(arg0 + 0x90, M2C_FIELD(arg0, s32 *, 0xA8)); */
            }
            M2C_FIELD(arg0, s32 *, 0x94) = spC;
            M2C_FIELD(arg0, s32 *, 0x90) = sp8;
            M2C_FIELD(arg0, s32 *, 0x98) = sp10;
            M2C_FIELD(arg0, s32 *, 0x9C) = sp14;
            M2C_FIELD(arg0, s32 *, 0xA0) = sp18;
            M2C_FIELD(arg0, s32 *, 0x98) = 0;
            M2C_FIELD(arg0, s32 *, 0x9C) = 0;
        break;
    }
}

u32 fn_800687A0(s16 *arg0, u32 arg1) {
    s32 sp18;
    u8 sp14;
    s32 sp10;
    u8 spC;
    s8 sp8;
    f32 var_f9_2;
    f64 temp_f4;
    f64 temp_f4_2;
    f64 temp_f5;
    f64 temp_f7;
    f64 var_f9;
    s16 *var_r5;
    s32 var_r6;
    s16 *var_r4;
    u8 var_ctr;
    u32 var_ctr_2;

    if ((s8) lbl_80350620 == 0) {
        lbl_80350620 = 1;
        lbl_80350618 = lbl_80351838;
    }
    sp8 = spC = sp10 = sp14 = sp18 = 0;
    /* draft: did not compile: fn_800684D4(lbl_80350600 + 0x86830, &sp8); */
    if ((sp8 == 0) || (sp18 == 0) || (spC == 0)) {
        if (lbl_80350618 != lbl_80351838) {
            var_r4 = arg0;
            var_r6 = 0;
            var_ctr = arg1;
            if (arg1 > 0U) {
loop_7:
                var_f9 = (f64) (f32) lbl_80350624 * (lbl_80351840 - (lbl_80350618 / lbl_80350628));
                if ((s32) lbl_80350624 < 0) {
                    if ((f32) (lbl_80351848 + lbl_80350618) > lbl_80350628) {
                        var_r6 += 1;
                        lbl_80350618 = lbl_80351838;
                    } else {
                        goto block_12;
                    }
                } else {
                    if ((lbl_80351848 + lbl_80350618) > (f32) (temp_f5 = lbl_80350628 * lbl_80350630)) {
                        lbl_80350624 = -lbl_80350624;
                        var_f9 = (lbl_80351850 * (lbl_80351858 * (temp_f5 - lbl_80350618))) - lbl_80351840;
                    }
block_12:
                    var_r6 += 1;
                    *var_r4 = (s16) (lbl_80351858 * var_f9 * (f64) sp18 * lbl_80351860);
                    var_r4 += 2;
                    lbl_80350618 += lbl_80351848;
                    var_ctr -= 1;
                    if (var_ctr != 0) {
                        goto loop_7;
                    }
                }
            }
            memset(arg0 + (var_r6 * 2), 0, (arg1 - var_r6) * 2);
        } else {
            memset(arg0, 0, arg1 * 2);
            lbl_80350624 = 1;
            lbl_80350618 = lbl_80351838;
        }
    } else {
        var_r5 = arg0;
        lbl_80350628 = (f64) sp8 / lbl_80351868;
        lbl_80350630 = (f64) spC / (f64) sp8;
        var_ctr_2 = arg1;
        if (arg1 > 0U) {
            do {
                var_f9_2 = (f32) lbl_80350624;
                if ((s32) lbl_80350624 < 0) {
                    temp_f4 = lbl_80351848 + lbl_80350618;
                    if (temp_f4 > lbl_80350628) {
                        temp_f7 = lbl_80350628 * lbl_80350630;
                        if ((temp_f4 - lbl_80350628) > temp_f7) {
                            var_f9_2 = (f32) ((lbl_80351850 * (lbl_80351858 * temp_f7)) - lbl_80351840);
                        } else {
                            lbl_80350624 = -lbl_80350624;
                            var_f9_2 = (f32) -((lbl_80351850 * (lbl_80351858 * (lbl_80350628 - lbl_80350618))) - lbl_80351840);
                        }
                        lbl_80350618 -= lbl_80350628;
                    }
                } else {
                    temp_f4_2 = lbl_80350628 * lbl_80350630;
                    if ((f32) (lbl_80351848 + lbl_80350618) > (f32) temp_f4_2) {
                        lbl_80350624 = -lbl_80350624;
                        var_f9_2 = (f32) ((lbl_80351850 * (lbl_80351858 * (temp_f4_2 - lbl_80350618))) - lbl_80351840);
                    }
                }
                *var_r5 = (s16) (lbl_80351858 * (f64) var_f9_2 * (f64) sp18 * lbl_80351860);
                var_r5 += 2;
                lbl_80350618 += lbl_80351848;
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
    return arg1;
}

void fn_80068B20(void) {
    s32 sp1C;
    s32 sp18;
    M2C_UNK (*sp14)();
    s32 sp10;
    s32 spC;
    s32 sp8;
    u8 temp_r31;

    temp_r31 = sndStreamAllocLength(0xA00, 0);
    lbl_80350608 = fn_80038264();
    memset((void *)(0), (int)(temp_r31), (unsigned long)(0));
    sp8 = 0;
    spC = 0;
    sp10 = 0;
    /* draft: did not compile: sp14 = fn_800687A0; */
    sp18 = 0;
    sp1C = 0;
    lbl_8034E9E0 = fn_8011AD38(0xFF, lbl_80350608, 0xA00, 0x7D0F, 0x32, 0x40, 0, 0);
}

void fn_80068BB8(void) {
    fn_8011C45C(lbl_8034E9E0);
    fn_8011B730(lbl_8034E9E0);
    lbl_8034E9E0 = -1;
    FreePictureSD(lbl_80350608);
}

void fn_80068BF4(M2C_UNK arg_sp0) { } /* draft: stub */

void ClsPokemonMini(void) {
    lbl_8035063C = 1;
}

s32 fn_80068F78(M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 fn_80069508(void) { return 0; } /* draft: stub */

#pragma push
#pragma peephole off
s32 fn_8006977C(void *arg0) {
    int temp_cr0_lt;
    s32 temp_r0;
    s32 temp_r31;
    s32 temp_r3;

    /* draft: did not compile: temp_r31 = fn_8006A550(arg0 + 0x86790); */
    temp_cr0_lt = temp_r31 < 0;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + (s8) M2C_FIELD(arg0, u8 *, 0x867D0));
    if (temp_cr0_lt != 0) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 8) + temp_r31;
    M2C_FIELD(arg0, s32 *, 8) = temp_r3;
    if (temp_r3 >= 0x1E848000) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 0xE17B8000);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14) + temp_r31;
    M2C_FIELD(arg0, s32 *, 0x14) = temp_r0;
    if (temp_r0 >= 0x1E848000) {
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + (M2C_FIELD(arg0, s32 *, 0x14) / 512000000));
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) % 512000000);
    }
    fn_8006988C(arg0, temp_r31);
    return temp_r31;
}
#pragma pop
