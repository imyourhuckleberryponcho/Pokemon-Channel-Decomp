/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK SetHWMix(s32 *);
s32 GetPrivateIndex(s32);
M2C_UNK CheckOutputMode(u8 *, u8 *);
M2C_UNK fn_8011ABC4(s32 *, u8, u8, u8, u8, u8);
M2C_UNK fn_8012E6A0(s32, M2C_UNK, s32, s32, void *, f32, f32, f32, f32);
M2C_UNK hwEnableIrq();
M2C_UNK hwDisableIrq();
extern M2C_UNK lbl_8032DFA8;
extern s32 lbl_80350D5C;
extern f32 lbl_80352220;
M2C_UNK fn_8012EB88();
s32 fn_80124624(u8);
M2C_UNK fn_80124720(s32);
extern M2C_UNK lbl_8032F8A8;
extern u16 lbl_80350DBE;
extern M2C_UNK lbl_803300A8;
extern u16 lbl_80350DBC;

void fn_8011B1D4(u8 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, M2C_UNK arg_sp0);
void fn_8011B730(u32 arg0, M2C_UNK arg_sp0);
s32 fn_8011BE04(u32 arg0);
void fn_8011C45C(u32 arg0);
s32 fn_8011CB70(u16 arg0, s32 arg1);
s32 fn_8011CD60(u16 arg0);
s32 fn_8011CEDC(u16 arg0, s32 arg1, s16 arg2);

void fn_8011B1D4(u8 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8011B730(u32 arg0, M2C_UNK arg_sp0) { } /* draft: stub */

s32 fn_8011BE04(u32 arg0) { return 0; } /* draft: stub */

void fn_8011C45C(u32 arg0) { } /* draft: stub */

s32 fn_8011CB70(u16 arg0, s32 arg1) {
    M2C_UNK *var_r4;
    s32 temp_r3;
    s32 temp_r5;
    s32 var_r7;
    u16 temp_r3_2;
    u32 temp_r0;
    u32 var_ctr;
    u32 var_ctr_2;
    u32 var_r3;
    void *temp_r3_3;
    void *temp_r4;
    void *var_r5;

    hwDisableIrq();
    var_r4 = &lbl_8032F8A8;
    var_r7 = 0;
loop_2:
    if ((var_r7 < (s32) lbl_80350DBE) && ((u16) M2C_FIELD(var_r4, u16 *, 4) < arg0)) {
        var_r4 += 8;
        var_r7 += 1;
        goto loop_2;
    }
    if (var_r7 < (s32) lbl_80350DBE) {
        temp_r4 = &lbl_8032F8A8 + (var_r7 * 8);
        if (arg0 != (u16) M2C_FIELD(temp_r4, u16 *, 4)) {
            if ((u16) lbl_80350DBE < 0x100U) {
                temp_r3 = lbl_80350DBE - 1;
                var_r5 = &lbl_8032F8A8 + (temp_r3 * 8);
                var_r3 = (temp_r3 + 1) - var_r7;
                if (temp_r3 >= var_r7) {
                    temp_r0 = var_r3 >> 3U;
                    var_ctr = temp_r0;
                    if (temp_r0 != 0) {
                        do {
                            M2C_FIELD(var_r5, s32 *, 8) = (s32) M2C_FIELD(var_r5, s32 *, 0);
                            M2C_FIELD(var_r5, s32 *, 0xC) = (s32) M2C_FIELD(var_r5, s32 *, 4);
                            M2C_FIELD(var_r5, s32 *, 0) = (s32) M2C_FIELD(var_r5, s32 *, -8);
                            M2C_FIELD(var_r5, s32 *, 4) = (s32) M2C_FIELD(var_r5, s32 *, -4);
                            M2C_FIELD(var_r5, s32 *, -8) = (s32) M2C_FIELD(var_r5, s32 *, -0x10);
                            M2C_FIELD(var_r5, s32 *, -4) = (s32) M2C_FIELD(var_r5, s32 *, -0xC);
                            M2C_FIELD(var_r5, s32 *, -0x10) = (s32) M2C_FIELD(var_r5, s32 *, -0x18);
                            M2C_FIELD(var_r5, s32 *, -0xC) = (s32) M2C_FIELD(var_r5, s32 *, -0x14);
                            M2C_FIELD(var_r5, s32 *, -0x18) = (s32) M2C_FIELD(var_r5, s32 *, -0x20);
                            M2C_FIELD(var_r5, s32 *, -0x14) = (s32) M2C_FIELD(var_r5, s32 *, -0x1C);
                            M2C_FIELD(var_r5, s32 *, -0x20) = (s32) M2C_FIELD(var_r5, s32 *, -0x28);
                            M2C_FIELD(var_r5, s32 *, -0x1C) = (s32) M2C_FIELD(var_r5, s32 *, -0x24);
                            M2C_FIELD(var_r5, s32 *, -0x28) = (s32) M2C_FIELD(var_r5, s32 *, -0x30);
                            M2C_FIELD(var_r5, s32 *, -0x24) = (s32) M2C_FIELD(var_r5, s32 *, -0x2C);
                            M2C_FIELD(var_r5, s32 *, -0x30) = (s32) M2C_FIELD(var_r5, s32 *, -0x38);
                            M2C_FIELD(var_r5, s32 *, -0x2C) = (s32) M2C_FIELD(var_r5, s32 *, -0x34);
                            /* draft: did not compile: var_r5 -= 0x40; */
                            var_ctr -= 1;
                        } while (var_ctr != 0);
                        var_r3 &= 7;
                        if (var_r3 != 0) {
                            goto block_11;
                        }
                    } else {
block_11:
                        var_ctr_2 = var_r3;
                        do {
                            M2C_FIELD(var_r5, s32 *, 8) = (s32) M2C_FIELD(var_r5, s32 *, 0);
                            M2C_FIELD(var_r5, s32 *, 0xC) = (s32) M2C_FIELD(var_r5, s32 *, 4);
                            /* draft: did not compile: var_r5 -= 8; */
                            var_ctr_2 -= 1;
                        } while (var_ctr_2 != 0);
                    }
                }
                lbl_80350DBE += 1;
                goto block_19;
            }
            hwEnableIrq();
            return 0;
        }
        temp_r3_2 = M2C_FIELD(temp_r4, u16 *, 6);
        M2C_FIELD(temp_r4, u16 *, 6) = (u16) (temp_r3_2 + 1);
        hwEnableIrq(temp_r3_2);
        return 0;
    }
    if ((u16) lbl_80350DBE < 0x100U) {
        lbl_80350DBE += 1;
block_19:
        temp_r5 = var_r7 * 8;
        temp_r3_3 = &lbl_8032F8A8 + temp_r5;
        M2C_FIELD(temp_r3_3, u16 *, 4) = arg0;
        *(&lbl_8032F8A8 + temp_r5) = arg1;
        M2C_FIELD(temp_r3_3, s16 *, 6) = 1;
        hwEnableIrq((u16) temp_r3_3, &lbl_8032F8A8, temp_r5);
        return 1;
    }
    hwEnableIrq();
    return 0;
}

s32 fn_8011CD60(u16 arg0) {
    M2C_UNK *var_r4;
    s32 temp_r3_2;
    s32 var_r7;
    u16 temp_r3;
    u16 temp_r3_3;
    u32 temp_r0;
    u32 var_ctr;
    u32 var_ctr_2;
    u32 var_r3;
    void *temp_r4;
    void *var_r5;

    hwDisableIrq();
    var_r4 = &lbl_8032F8A8;
    var_r7 = 0;
loop_2:
    if ((var_r7 < (s32) lbl_80350DBE) && (arg0 != (u16) M2C_FIELD(var_r4, u16 *, 4))) {
        var_r4 += 8;
        var_r7 += 1;
        goto loop_2;
    }
    if (var_r7 != (s32) lbl_80350DBE) {
        temp_r4 = &lbl_8032F8A8 + (var_r7 * 8);
        temp_r3 = M2C_FIELD(temp_r4, u16 *, 6) - 1;
        M2C_FIELD(temp_r4, u16 *, 6) = temp_r3;
        if (temp_r3 == 0) {
            temp_r3_2 = var_r7 + 1;
            var_r3 = lbl_80350DBE - temp_r3_2;
            var_r5 = &lbl_8032F8A8 + (temp_r3_2 * 8);
            if (temp_r3_2 < (s32) lbl_80350DBE) {
                temp_r0 = var_r3 >> 3U;
                var_ctr = temp_r0;
                if (temp_r0 != 0) {
                    do {
                        M2C_FIELD(var_r5, s32 *, -8) = (s32) M2C_FIELD(var_r5, s32 *, 0);
                        M2C_FIELD(var_r5, s32 *, -4) = (s32) M2C_FIELD(var_r5, s32 *, 4);
                        M2C_FIELD(var_r5, s32 *, 0) = (s32) M2C_FIELD(var_r5, s32 *, 8);
                        M2C_FIELD(var_r5, s32 *, 4) = (s32) M2C_FIELD(var_r5, s32 *, 0xC);
                        M2C_FIELD(var_r5, s32 *, 8) = (s32) M2C_FIELD(var_r5, s32 *, 0x10);
                        M2C_FIELD(var_r5, s32 *, 0xC) = (s32) M2C_FIELD(var_r5, s32 *, 0x14);
                        M2C_FIELD(var_r5, s32 *, 0x10) = (s32) M2C_FIELD(var_r5, s32 *, 0x18);
                        M2C_FIELD(var_r5, s32 *, 0x14) = (s32) M2C_FIELD(var_r5, s32 *, 0x1C);
                        M2C_FIELD(var_r5, s32 *, 0x18) = (s32) M2C_FIELD(var_r5, s32 *, 0x20);
                        M2C_FIELD(var_r5, s32 *, 0x1C) = (s32) M2C_FIELD(var_r5, s32 *, 0x24);
                        M2C_FIELD(var_r5, s32 *, 0x20) = (s32) M2C_FIELD(var_r5, s32 *, 0x28);
                        M2C_FIELD(var_r5, s32 *, 0x24) = (s32) M2C_FIELD(var_r5, s32 *, 0x2C);
                        M2C_FIELD(var_r5, s32 *, 0x28) = (s32) M2C_FIELD(var_r5, s32 *, 0x30);
                        M2C_FIELD(var_r5, s32 *, 0x2C) = (s32) M2C_FIELD(var_r5, s32 *, 0x34);
                        M2C_FIELD(var_r5, s32 *, 0x30) = (s32) M2C_FIELD(var_r5, s32 *, 0x38);
                        M2C_FIELD(var_r5, s32 *, 0x34) = (s32) M2C_FIELD(var_r5, s32 *, 0x3C);
                        /* draft: did not compile: var_r5 += 0x40; */
                        var_ctr -= 1;
                    } while (var_ctr != 0);
                    var_r3 &= 7;
                    if (var_r3 != 0) {
                        goto block_10;
                    }
                } else {
block_10:
                    var_ctr_2 = var_r3;
                    do {
                        M2C_FIELD(var_r5, s32 *, -8) = (s32) M2C_FIELD(var_r5, s32 *, 0);
                        M2C_FIELD(var_r5, s32 *, -4) = (s32) M2C_FIELD(var_r5, s32 *, 4);
                        /* draft: did not compile: var_r5 += 8; */
                        var_ctr_2 -= 1;
                    } while (var_ctr_2 != 0);
                }
            }
            temp_r3_3 = lbl_80350DBE;
            lbl_80350DBE = temp_r3_3 - 1;
            hwEnableIrq(temp_r3_3);
            return 1;
        }
    }
    hwEnableIrq();
    return 0;
}

s32 fn_8011CEDC(u16 arg0, s32 arg1, s16 arg2) {
    M2C_UNK *var_r4;
    s32 temp_r3;
    s32 temp_r5;
    s32 var_r8;
    u16 temp_r3_2;
    u32 temp_r0;
    u32 var_ctr;
    u32 var_ctr_2;
    u32 var_r3;
    void *temp_r3_3;
    void *temp_r4;
    void *var_r5;

    hwDisableIrq();
    var_r4 = &lbl_803300A8;
    var_r8 = 0;
loop_2:
    if ((var_r8 < (s32) lbl_80350DBC) && ((u16) M2C_FIELD(var_r4, u16 *, 4) < arg0)) {
        var_r4 += 0xC;
        var_r8 += 1;
        goto loop_2;
    }
    if (var_r8 < (s32) lbl_80350DBC) {
        temp_r4 = &lbl_803300A8 + (var_r8 * 0xC);
        if (arg0 != (u16) M2C_FIELD(temp_r4, u16 *, 4)) {
            if ((u16) lbl_80350DBC < 0x100U) {
                temp_r3 = lbl_80350DBC - 1;
                var_r5 = &lbl_803300A8 + (temp_r3 * 0xC);
                var_r3 = (temp_r3 + 1) - var_r8;
                if (temp_r3 >= var_r8) {
                    temp_r0 = var_r3 >> 3U;
                    var_ctr = temp_r0;
                    if (temp_r0 != 0) {
                        do {
                            M2C_FIELD(var_r5, s32 *, 0xC) = (s32) M2C_FIELD(var_r5, s32 *, 0);
                            M2C_FIELD(var_r5, s32 *, 0x10) = (s32) M2C_FIELD(var_r5, s32 *, 4);
                            M2C_FIELD(var_r5, s32 *, 0x14) = (s32) M2C_FIELD(var_r5, s32 *, 8);
                            M2C_FIELD(var_r5, s32 *, 0) = (s32) M2C_FIELD(var_r5, s32 *, -0xC);
                            M2C_FIELD(var_r5, s32 *, 4) = (s32) M2C_FIELD(var_r5, s32 *, -8);
                            M2C_FIELD(var_r5, s32 *, 8) = (s32) M2C_FIELD(var_r5, s32 *, -4);
                            M2C_FIELD(var_r5, s32 *, -0xC) = (s32) M2C_FIELD(var_r5, s32 *, -0x18);
                            M2C_FIELD(var_r5, s32 *, -8) = (s32) M2C_FIELD(var_r5, s32 *, -0x14);
                            M2C_FIELD(var_r5, s32 *, -4) = (s32) M2C_FIELD(var_r5, s32 *, -0x10);
                            M2C_FIELD(var_r5, s32 *, -0x18) = (s32) M2C_FIELD(var_r5, s32 *, -0x24);
                            M2C_FIELD(var_r5, s32 *, -0x14) = (s32) M2C_FIELD(var_r5, s32 *, -0x20);
                            M2C_FIELD(var_r5, s32 *, -0x10) = (s32) M2C_FIELD(var_r5, s32 *, -0x1C);
                            M2C_FIELD(var_r5, s32 *, -0x24) = (s32) M2C_FIELD(var_r5, s32 *, -0x30);
                            M2C_FIELD(var_r5, s32 *, -0x20) = (s32) M2C_FIELD(var_r5, s32 *, -0x2C);
                            M2C_FIELD(var_r5, s32 *, -0x1C) = (s32) M2C_FIELD(var_r5, s32 *, -0x28);
                            M2C_FIELD(var_r5, s32 *, -0x30) = (s32) M2C_FIELD(var_r5, s32 *, -0x3C);
                            M2C_FIELD(var_r5, s32 *, -0x2C) = (s32) M2C_FIELD(var_r5, s32 *, -0x38);
                            M2C_FIELD(var_r5, s32 *, -0x28) = (s32) M2C_FIELD(var_r5, s32 *, -0x34);
                            M2C_FIELD(var_r5, s32 *, -0x3C) = (s32) M2C_FIELD(var_r5, s32 *, -0x48);
                            M2C_FIELD(var_r5, s32 *, -0x38) = (s32) M2C_FIELD(var_r5, s32 *, -0x44);
                            M2C_FIELD(var_r5, s32 *, -0x34) = (s32) M2C_FIELD(var_r5, s32 *, -0x40);
                            M2C_FIELD(var_r5, s32 *, -0x48) = (s32) M2C_FIELD(var_r5, s32 *, -0x54);
                            M2C_FIELD(var_r5, s32 *, -0x44) = (s32) M2C_FIELD(var_r5, s32 *, -0x50);
                            M2C_FIELD(var_r5, s32 *, -0x40) = (s32) M2C_FIELD(var_r5, s32 *, -0x4C);
                            /* draft: did not compile: var_r5 -= 0x60; */
                            var_ctr -= 1;
                        } while (var_ctr != 0);
                        var_r3 &= 7;
                        if (var_r3 != 0) {
                            goto block_11;
                        }
                    } else {
block_11:
                        var_ctr_2 = var_r3;
                        do {
                            M2C_FIELD(var_r5, s32 *, 0xC) = (s32) M2C_FIELD(var_r5, s32 *, 0);
                            M2C_FIELD(var_r5, s32 *, 0x10) = (s32) M2C_FIELD(var_r5, s32 *, 4);
                            M2C_FIELD(var_r5, s32 *, 0x14) = (s32) M2C_FIELD(var_r5, s32 *, 8);
                            /* draft: did not compile: var_r5 -= 0xC; */
                            var_ctr_2 -= 1;
                        } while (var_ctr_2 != 0);
                    }
                }
                lbl_80350DBC += 1;
                goto block_19;
            }
            hwEnableIrq();
            return 0;
        }
        temp_r3_2 = M2C_FIELD(temp_r4, u16 *, 8);
        M2C_FIELD(temp_r4, u16 *, 8) = (u16) (temp_r3_2 + 1);
        hwEnableIrq(temp_r3_2);
        return 0;
    }
    if ((u16) lbl_80350DBC < 0x100U) {
        lbl_80350DBC += 1;
block_19:
        temp_r5 = var_r8 * 0xC;
        temp_r3_3 = &lbl_803300A8 + temp_r5;
        M2C_FIELD(temp_r3_3, u16 *, 4) = arg0;
        *(&lbl_803300A8 + temp_r5) = arg1;
        M2C_FIELD(temp_r3_3, s16 *, 6) = arg2;
        M2C_FIELD(temp_r3_3, s16 *, 8) = 1;
        hwEnableIrq((u16) temp_r3_3, &lbl_803300A8, temp_r5);
        return 1;
    }
    hwEnableIrq();
    return 0;
}
