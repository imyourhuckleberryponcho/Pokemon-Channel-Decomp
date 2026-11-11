/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK hwEnableIrq();
M2C_UNK hwDisableIrq();
extern M2C_UNK lbl_803300A8;
extern u16 lbl_80350DBC;
extern M2C_UNK lbl_80330CA8;
extern u16 lbl_80350DC0;
extern u32 lbl_80334CA8;
extern u16 lbl_80350DC2;
M2C_UNK fn_8012EC50();
M2C_UNK fn_8012ED04();
extern u16 lbl_803352A8;
extern u16 lbl_80350DB8;
extern M2C_UNK lbl_803356A8;
extern M2C_UNK lbl_80335EA8;
extern u16 lbl_80350DBA;
extern s32 *lbl_80350DA4;
extern M2C_UNK lbl_80350DA8;
extern s32 lbl_80350DB0;
extern s32 lbl_80350DB4;
extern s16 lbl_80339EA8;
extern void *lbl_80350D9C;
extern void *lbl_80350DA0;
extern s32 *lbl_80350D90;
extern M2C_UNK lbl_80350D94;
extern M2C_UNK lbl_8032F8A8;
extern s32 *lbl_80350D84;
extern M2C_UNK lbl_80350D88;
extern u16 lbl_80350DBE;
extern M2C_UNK lbl_80339EC8;
extern s32 *lbl_80350D80;
extern s16 lbl_80339ED4;
M2C_UNK fn_8012EC2C();
M2C_UNK TimeQueueAdd(void *);
M2C_UNK fn_80122FE0(void *, M2C_UNK);
s32 fn_8012DCEC();
M2C_UNK fn_8012DE38(u32 *);
M2C_UNK sndConvertTicks(u32 *, void *);
u32 fn_8012E0B4(u8);
extern s32 lbl_80350DD0;
extern s32 lbl_80350DD4;
M2C_UNK fn_8012365C(void *);
M2C_UNK fn_801241C0(void *);
M2C_UNK synthFXCloneMidiSetup(s32, void *);
u8 fn_801230DC(u32, u8, u32, u16, u8, u8, u8, u8);
extern s32 lbl_80350D60;
u32 fn_80124D8C(void *);
M2C_UNK fn_8012CD38(u8, u8, u8);

s32 fn_8011D124(u16 arg0);
s32 fn_8011D2E8(u16 arg0, s32 arg1);
s32 fn_8011D4EC(u16 arg0);
s32 fn_8011D668(u16 *arg0, s32 arg1);
s32 fn_8011D7F0(void *arg0);
s32 fn_8011DAB8(u16 arg0);
s32 fn_8011DB90(u16 arg0);
s32 fn_8011DC28(u16 arg0, void *arg1, u16 arg2);
s32 fn_8011DD44(u16 arg0);
s32 fn_8011DEA0(u16 arg0, s32 arg1);
s32 fn_8011E1A4(u16 arg0);
s32 fn_8011E428(void *arg0, void *arg1);
s32 fn_8011E438(u16 arg0);
s32 fn_8011E4C4(u16 *arg0, u16 *arg1);
s32 fn_8011E4D4(s16 arg0, void *arg1, M2C_UNK arg_sp0);
s32 fn_8011E5FC(void *arg0, void *arg1);
s32 fn_8011E60C(s16 arg0);
s32 fn_8011E668(s16 arg0);
s32 fn_8011E6C4(void *arg0, void *arg1);
s32 fn_8011E6D4(s16 arg0, u16 *arg1);
s32 fn_8011E750(u16 *arg0, u16 *arg1);
u32 fn_8011E760(s16 arg0);
void fn_8011E7FC(void);
s32 fn_8011E8E0(void *arg0, void *arg1);
s32 fn_8011EBD0(void *arg0, void *arg1);
void fn_8011ECA0(void *arg0, void *arg1);
void fn_8011EDF4(void *arg0, void *arg1);
void fn_8011EF80(void *arg0, u32 *arg1);

s32 fn_8011D124(u16 arg0) {
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
    var_r4 = &lbl_803300A8;
    var_r7 = 0;
loop_2:
    if ((var_r7 < (s32) lbl_80350DBC) && (arg0 != (u16) M2C_FIELD(var_r4, u16 *, 4))) {
        var_r4 += 0xC;
        var_r7 += 1;
        goto loop_2;
    }
    if (var_r7 != (s32) lbl_80350DBC) {
        temp_r4 = &lbl_803300A8 + (var_r7 * 0xC);
        temp_r3 = M2C_FIELD((s32)temp_r4, u16 *, 8) - 1;
        M2C_FIELD(temp_r4, u16 *, 8) = temp_r3;
        if (temp_r3 == 0) {
            temp_r3_2 = var_r7 + 1;
            var_r3 = lbl_80350DBC - temp_r3_2;
            var_r5 = &lbl_803300A8 + (temp_r3_2 * 0xC);
            if (temp_r3_2 < (s32) lbl_80350DBC) {
                temp_r0 = var_r3 >> 3U;
                var_ctr = temp_r0;
                if (temp_r0 != 0) {
                    do {
                        M2C_FIELD(var_r5, s32 *, -0xC) = (s32) M2C_FIELD(var_r5, s32 *, 0);
                        M2C_FIELD(var_r5, s32 *, -8) = (s32) M2C_FIELD(var_r5, s32 *, 4);
                        M2C_FIELD(var_r5, s32 *, -4) = (s32) M2C_FIELD(var_r5, s32 *, 8);
                        M2C_FIELD(var_r5, s32 *, 0) = (s32) M2C_FIELD(var_r5, s32 *, 0xC);
                        M2C_FIELD(var_r5, s32 *, 4) = (s32) M2C_FIELD(var_r5, s32 *, 0x10);
                        M2C_FIELD(var_r5, s32 *, 8) = (s32) M2C_FIELD(var_r5, s32 *, 0x14);
                        M2C_FIELD(var_r5, s32 *, 0xC) = (s32) M2C_FIELD(var_r5, s32 *, 0x18);
                        M2C_FIELD(var_r5, s32 *, 0x10) = (s32) M2C_FIELD(var_r5, s32 *, 0x1C);
                        M2C_FIELD(var_r5, s32 *, 0x14) = (s32) M2C_FIELD(var_r5, s32 *, 0x20);
                        M2C_FIELD(var_r5, s32 *, 0x18) = (s32) M2C_FIELD(var_r5, s32 *, 0x24);
                        M2C_FIELD(var_r5, s32 *, 0x1C) = (s32) M2C_FIELD(var_r5, s32 *, 0x28);
                        M2C_FIELD(var_r5, s32 *, 0x20) = (s32) M2C_FIELD(var_r5, s32 *, 0x2C);
                        M2C_FIELD(var_r5, s32 *, 0x24) = (s32) M2C_FIELD(var_r5, s32 *, 0x30);
                        M2C_FIELD(var_r5, s32 *, 0x28) = (s32) M2C_FIELD(var_r5, s32 *, 0x34);
                        M2C_FIELD(var_r5, s32 *, 0x2C) = (s32) M2C_FIELD(var_r5, s32 *, 0x38);
                        M2C_FIELD(var_r5, s32 *, 0x30) = (s32) M2C_FIELD(var_r5, s32 *, 0x3C);
                        M2C_FIELD(var_r5, s32 *, 0x34) = (s32) M2C_FIELD(var_r5, s32 *, 0x40);
                        M2C_FIELD(var_r5, s32 *, 0x38) = (s32) M2C_FIELD(var_r5, s32 *, 0x44);
                        M2C_FIELD(var_r5, s32 *, 0x3C) = (s32) M2C_FIELD(var_r5, s32 *, 0x48);
                        M2C_FIELD(var_r5, s32 *, 0x40) = (s32) M2C_FIELD(var_r5, s32 *, 0x4C);
                        M2C_FIELD(var_r5, s32 *, 0x44) = (s32) M2C_FIELD(var_r5, s32 *, 0x50);
                        M2C_FIELD(var_r5, s32 *, 0x48) = (s32) M2C_FIELD(var_r5, s32 *, 0x54);
                        M2C_FIELD(var_r5, s32 *, 0x4C) = (s32) M2C_FIELD(var_r5, s32 *, 0x58);
                        M2C_FIELD(var_r5, s32 *, 0x50) = (s32) M2C_FIELD(var_r5, s32 *, 0x5C);
                        /* draft: did not compile: var_r5 += 0x60; */
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
                        M2C_FIELD(var_r5, s32 *, -0xC) = (s32) M2C_FIELD(var_r5, s32 *, 0);
                        M2C_FIELD(var_r5, s32 *, -8) = (s32) M2C_FIELD(var_r5, s32 *, 4);
                        M2C_FIELD(var_r5, s32 *, -4) = (s32) M2C_FIELD(var_r5, s32 *, 8);
                        /* draft: did not compile: var_r5 += 0xC; */
                        var_ctr_2 -= 1;
                    } while (var_ctr_2 != 0);
                }
            }
            temp_r3_3 = lbl_80350DBC;
            lbl_80350DBC = temp_r3_3 - 1;
            hwEnableIrq(temp_r3_3);
            return 1;
        }
    }
    hwEnableIrq((unsigned short)(0));
    return 0;
}

s32 fn_8011D2E8(u16 arg0, s32 arg1) {
    M2C_UNK *var_r4;
    s32 temp_r29;
    s32 temp_r3;
    s32 temp_r5_2;
    s32 var_r7;
    u32 temp_r0;
    u32 var_ctr;
    u32 var_ctr_2;
    u32 var_r3;
    void *temp_r3_2;
    void *temp_r5;
    void *var_r5;

    hwDisableIrq();
    var_r4 = &lbl_80330CA8;
    var_r7 = 0;
loop_2:
    if ((var_r7 < (s32) lbl_80350DC0) && ((u16) M2C_FIELD(var_r4, u16 *, 4) < arg0)) {
        var_r4 += 8;
        var_r7 += 1;
        goto loop_2;
    }
    if (var_r7 < (s32) lbl_80350DC0) {
        temp_r29 = var_r7 * 8;
        if (arg0 != (u16) M2C_FIELD((&lbl_80330CA8 + temp_r29), u16 *, 4)) {
            if ((u16) lbl_80350DC0 < 0x800U) {
                temp_r3 = lbl_80350DC0 - 1;
                var_r5 = &lbl_80330CA8 + (temp_r3 * 8);
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
                lbl_80350DC0 += 1;
                goto block_19;
            }
            hwEnableIrq((unsigned short)(0));
            return 0;
        }
        hwEnableIrq((unsigned short)(0));
        temp_r5 = &lbl_80330CA8 + temp_r29;
        M2C_FIELD(temp_r5, u16 *, 6) = (u16) (M2C_FIELD(temp_r5, u16 *, 6) + 1);
        return 0;
    }
    if ((u16) lbl_80350DC0 < 0x800U) {
        lbl_80350DC0 += 1;
block_19:
        temp_r5_2 = var_r7 * 8;
        temp_r3_2 = &lbl_80330CA8 + temp_r5_2;
        M2C_FIELD(temp_r3_2, u16 *, 4) = arg0;
        *(&lbl_80330CA8 + temp_r5_2) = arg1;
        M2C_FIELD(temp_r3_2, s16 *, 6) = 1;
        hwEnableIrq(temp_r3_2, &lbl_80330CA8, temp_r5_2);
        return 1;
    }
    hwEnableIrq();
    return 0;
}

s32 fn_8011D4EC(u16 arg0) {
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
    var_r4 = &lbl_80330CA8;
    var_r7 = 0;
loop_2:
    if ((var_r7 < (s32) lbl_80350DC0) && (arg0 != (u16) M2C_FIELD(var_r4, u16 *, 4))) {
        var_r4 += 8;
        var_r7 += 1;
        goto loop_2;
    }
    if (var_r7 != (s32) lbl_80350DC0) {
        temp_r4 = &lbl_80330CA8 + (var_r7 * 8);
        temp_r3 = M2C_FIELD(temp_r4, u16 *, 6) - 1;
        M2C_FIELD(temp_r4, u16 *, 6) = temp_r3;
        if (temp_r3 == 0) {
            temp_r3_2 = var_r7 + 1;
            var_r3 = lbl_80350DC0 - temp_r3_2;
            var_r5 = &lbl_80330CA8 + (temp_r3_2 * 8);
            if (temp_r3_2 < (s32) lbl_80350DC0) {
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
            temp_r3_3 = lbl_80350DC0;
            lbl_80350DC0 = temp_r3_3 - 1;
            hwEnableIrq(temp_r3_3);
            return 1;
        }
    }
    hwEnableIrq();
    return 0;
}

s32 fn_8011D668(u16 *arg0, s32 arg1) { return 0; } /* draft: stub */

s32 fn_8011D7F0(void *arg0) { return 0; } /* draft: stub */

s32 fn_8011DAB8(u16 arg0) {
    void *sp8;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r5;
    u16 temp_r0;
    u16 var_ctr;
    void **var_r4;
    void *var_r31;
    void *var_r6;

    /* draft: did not compile: var_r4 = &lbl_80334CA8; */
    var_r5 = 0;
    var_r31 = NULL;
    var_ctr = lbl_80350DC2;
    if ((u16) lbl_80350DC2 > 0U) {
loop_1:
        var_r6 = *var_r4;
loop_6:
        temp_r0 = M2C_FIELD(var_r6, u16 *, 0);
        if (temp_r0 == -1U) {
            var_r4 += 0xC;
            var_r5 += 1;
            var_ctr -= 1;
            if (var_ctr != 0) {
                goto loop_1;
            }
        } else if ((temp_r0 == arg0) && ((u16) M2C_FIELD(var_r6, u16 *, 2) != -1U)) {
            var_r31 = var_r6;
        } else {
            /* draft: did not compile: var_r6 += 0x20; */
            goto loop_6;
        }
    }
    if ((u16) M2C_FIELD(var_r31, u16 *, 2) == 0) {
        temp_r6 = M2C_FIELD(var_r31, s32 *, 4);
        temp_r5 = temp_r6 + M2C_FIELD((&lbl_80334CA8 + (var_r5 * 0xC)), s32 *, 4);
        M2C_FIELD(var_r31, s32 *, 8) = temp_r5;
        /* draft: did not compile: sp8 = var_r31 + 0xC; */
        /* draft: did not compile: fn_8012EC50(&sp8, var_r31 + 8, temp_r5, temp_r6); */
    }
    M2C_FIELD(var_r31, u16 *, 2) = (u16) (M2C_FIELD(var_r31, u16 *, 2) + 1);
    return 1;
}

s32 fn_8011DB90(u16 arg0) {
    u16 temp_r3;
    u16 temp_r3_2;
    u16 var_ctr;
    void **var_r4;
    void *var_r5;

    /* draft: did not compile: var_r4 = &lbl_80334CA8; */
    var_ctr = lbl_80350DC2;
    if ((u16) lbl_80350DC2 > 0U) {
loop_1:
        var_r5 = *var_r4;
loop_8:
        temp_r3 = M2C_FIELD(var_r5, u16 *, 0);
        if (temp_r3 == -1U) {
            var_r4 += 0xC;
            var_ctr -= 1;
            if (var_ctr == 0) {
                goto block_10;
            }
            goto loop_1;
        }
        if (temp_r3 == arg0) {
            temp_r3_2 = M2C_FIELD(var_r5, u16 *, 2);
            if (temp_r3_2 != -1U) {
                M2C_FIELD(var_r5, u16 *, 2) = (u16) (temp_r3_2 - 1);
                if ((u16) M2C_FIELD(var_r5, u16 *, 2) == 0) {
                    /* draft: did not compile: fn_8012ED04(var_r5 + 0xC, M2C_FIELD(var_r5, s32 *, 8)); */
                }
                return 1;
            }
        }
        /* draft: did not compile: var_r5 += 0x20; */
        goto loop_8;
    }
block_10:
    return 0;
}

s32 fn_8011DC28(u16 arg0, void *arg1, u16 arg2) {
    s32 temp_r0;
    s32 var_r4;
    u16 *var_r6;
    u16 temp_r3;
    u16 var_ctr_2;
    u16 var_r5;
    u32 temp_r0_2;
    u32 var_ctr;
    void *temp_r4;
    void *var_r30;

    var_r6 = &lbl_803352A8;
    var_r30 = arg1;
    var_r4 = 0;
loop_2:
    if ((var_r4 < (s32) lbl_80350DB8) && (arg0 != (u16) *var_r6)) {
        var_r6 += 8;
        var_r4 += 1;
        goto loop_2;
    }
    if ((var_r4 == (s32) lbl_80350DB8) && ((u16) lbl_80350DB8 < 0x80U)) {
        hwDisableIrq();
        var_r5 = arg2;
        temp_r0 = lbl_80350DB8 * 8;
        *(&lbl_803352A8 + temp_r0) = arg0;
        temp_r4 = &lbl_803352A8 + temp_r0;
        M2C_FIELD(temp_r4, u16 *, 2) = arg2;
        M2C_FIELD(temp_r4, void **, 4) = var_r30;
        if (var_r5 > 0) {
            temp_r0_2 = var_r5 >> 3U;
            var_ctr = temp_r0_2;
            if (temp_r0_2 != 0) {
                do {
                    M2C_FIELD(var_r30, s8 *, 9) = 0x1F;
                    M2C_FIELD(var_r30, s8 *, 0x13) = 0x1F;
                    M2C_FIELD(var_r30, s8 *, 0x1D) = 0x1F;
                    M2C_FIELD(var_r30, s8 *, 0x27) = 0x1F;
                    M2C_FIELD(var_r30, s8 *, 0x31) = 0x1F;
                    M2C_FIELD(var_r30, s8 *, 0x3B) = 0x1F;
                    M2C_FIELD(var_r30, s8 *, 0x45) = 0x1F;
                    M2C_FIELD(var_r30, s8 *, 0x4F) = 0x1F;
                    /* draft: did not compile: var_r30 += 0x50; */
                    var_ctr -= 1;
                } while (var_ctr != 0);
                var_r5 &= 7;
                if (var_r5 != 0) {
                    goto block_10;
                }
            } else {
block_10:
                var_ctr_2 = var_r5;
                do {
                    M2C_FIELD(var_r30, s8 *, 9) = 0x1F;
                    /* draft: did not compile: var_r30 += 0xA; */
                    var_ctr_2 -= 1;
                } while (var_ctr_2 != 0);
            }
        }
        temp_r3 = lbl_80350DB8;
        lbl_80350DB8 = temp_r3 + 1;
        hwEnableIrq(temp_r3);
        return 1;
    }
    return 0;
}

s32 fn_8011DD44(u16 arg0) {
    s32 temp_r6;
    s32 var_r31;
    u16 *var_r4;
    u16 temp_r3;
    u32 temp_r0;
    u32 var_ctr;
    u32 var_ctr_2;
    u32 var_r3;
    void *var_r5;

    var_r4 = &lbl_803352A8;
    var_r31 = 0;
loop_2:
    if ((var_r31 < (s32) lbl_80350DB8) && (arg0 != (u16) *var_r4)) {
        var_r4 += 8;
        var_r31 += 1;
        goto loop_2;
    }
    if (var_r31 != (s32) lbl_80350DB8) {
        hwDisableIrq();
        temp_r6 = var_r31 + 1;
        var_r3 = lbl_80350DB8 - temp_r6;
        var_r5 = &lbl_803352A8 + (temp_r6 * 8);
        if (temp_r6 < (s32) lbl_80350DB8) {
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
                    goto block_9;
                }
            } else {
block_9:
                var_ctr_2 = var_r3;
                do {
                    M2C_FIELD(var_r5, s32 *, -8) = (s32) M2C_FIELD(var_r5, s32 *, 0);
                    M2C_FIELD(var_r5, s32 *, -4) = (s32) M2C_FIELD(var_r5, s32 *, 4);
                    /* draft: did not compile: var_r5 += 8; */
                    var_ctr_2 -= 1;
                } while (var_ctr_2 != 0);
            }
        }
        temp_r3 = lbl_80350DB8;
        lbl_80350DB8 = temp_r3 - 1;
        hwEnableIrq(temp_r3);
        return 1;
    }
    return 0;
}

s32 fn_8011DEA0(u16 arg0, s32 arg1) { return 0; } /* draft: stub */

s32 fn_8011E1A4(u16 arg0) { return 0; } /* draft: stub */

s32 fn_8011E428(void *arg0, void *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

s32 fn_8011E438(u16 arg0) { return 0; } /* draft: stub */

s32 fn_8011E4C4(u16 *arg0, u16 *arg1) {
    return *arg0 - *arg1;
}

s32 fn_8011E4D4(s16 arg0, void *arg1, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 fn_8011E5FC(void *arg0, void *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

s32 fn_8011E60C(s16 arg0) { return 0; } /* draft: stub */

s32 fn_8011E668(s16 arg0) { return 0; } /* draft: stub */

s32 fn_8011E6C4(void *arg0, void *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

s32 fn_8011E6D4(s16 arg0, u16 *arg1) { return 0; } /* draft: stub */

s32 fn_8011E750(u16 *arg0, u16 *arg1) {
    return *arg0 - *arg1;
}

u32 fn_8011E760(s16 arg0) {
    M2C_UNK *var_r29;
    s32 var_r28;
    u32 temp_r3;

    /* draft: did not compile: var_r29 = &lbl_803352A8; */
    var_r28 = 0;
    lbl_80339ED4 = arg0;
loop_4:
    if (var_r28 >= (s32) lbl_80350DB8) {
        return 0U;
    }
    temp_r3 = sndBSearch(&lbl_80339ED4, M2C_FIELD(var_r29, s32 *, 4), M2C_FIELD(var_r29, u16 *, 2), 0xA, fn_8011E750);
    if (temp_r3 != 0U) {
        return temp_r3;
    }
    var_r29 += 8;
    var_r28 += 1;
    goto loop_4;
}

void fn_8011E7FC(void) {
    M2C_UNK *var_r5;
    s32 var_ctr;

    lbl_80350DC2 = 0;
    lbl_80350DC0 = 0;
    lbl_80350DBE = 0;
    lbl_80350DBC = 0;
    lbl_80350DB8 = 0;
    lbl_80350DBA = 0;
    if (0 < 0x200) {
        var_r5 = &lbl_803356A8;
        var_ctr = 0x20;
        do {
            M2C_FIELD(var_r5, s16 *, 0) = 0;
            M2C_FIELD(var_r5, s16 *, 2) = 0;
            M2C_FIELD(var_r5, s16 *, 4) = 0;
            M2C_FIELD(var_r5, s16 *, 6) = 0;
            M2C_FIELD(var_r5, s16 *, 8) = 0;
            M2C_FIELD(var_r5, s16 *, 0xA) = 0;
            M2C_FIELD(var_r5, s16 *, 0xC) = 0;
            M2C_FIELD(var_r5, s16 *, 0xE) = 0;
            M2C_FIELD(var_r5, s16 *, 0x10) = 0;
            M2C_FIELD(var_r5, s16 *, 0x12) = 0;
            M2C_FIELD(var_r5, s16 *, 0x14) = 0;
            M2C_FIELD(var_r5, s16 *, 0x16) = 0;
            M2C_FIELD(var_r5, s16 *, 0x18) = 0;
            M2C_FIELD(var_r5, s16 *, 0x1A) = 0;
            M2C_FIELD(var_r5, s16 *, 0x1C) = 0;
            M2C_FIELD(var_r5, s16 *, 0x1E) = 0;
            M2C_FIELD(var_r5, s16 *, 0x20) = 0;
            M2C_FIELD(var_r5, s16 *, 0x22) = 0;
            M2C_FIELD(var_r5, s16 *, 0x24) = 0;
            M2C_FIELD(var_r5, s16 *, 0x26) = 0;
            M2C_FIELD(var_r5, s16 *, 0x28) = 0;
            M2C_FIELD(var_r5, s16 *, 0x2A) = 0;
            M2C_FIELD(var_r5, s16 *, 0x2C) = 0;
            M2C_FIELD(var_r5, s16 *, 0x2E) = 0;
            M2C_FIELD(var_r5, s16 *, 0x30) = 0;
            M2C_FIELD(var_r5, s16 *, 0x32) = 0;
            M2C_FIELD(var_r5, s16 *, 0x34) = 0;
            M2C_FIELD(var_r5, s16 *, 0x36) = 0;
            M2C_FIELD(var_r5, s16 *, 0x38) = 0;
            M2C_FIELD(var_r5, s16 *, 0x3A) = 0;
            M2C_FIELD(var_r5, s16 *, 0x3C) = 0;
            M2C_FIELD(var_r5, s16 *, 0x3E) = 0;
            var_r5 += 0x40;
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    fn_8012EC2C();
}

s32 fn_8011E8E0(void *arg0, void *arg1) {
    s32 saved_reg_r29;
    u32 sp8;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    u32 temp_r0;
    u32 temp_r28;
    u32 temp_r5_2;

    temp_r0 = (u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U;
    sp8 = temp_r0;
    if (temp_r0 != 0) {
        if (((u32) M2C_FIELD(arg1, u32 *, 0) >> 8U) & 1) {
            temp_r5 = M2C_FIELD(arg0, s32 *, 0x114);
            temp_r6 = M2C_FIELD(arg0, s32 *, 0x118);
            if ((((temp_r6 & 8) ^ 0) | ((temp_r5 & 0) ^ 0)) != 0) {
                if ((((temp_r6 & 0) ^ 0) | ((temp_r5 & 0x100) ^ 0)) == 0) {
                    return 0;
                }
                M2C_FIELD(arg0, s32 *, 0x118) = temp_r6;
                M2C_FIELD(arg0, s32 *, 0x114) = (s32) (temp_r5 | 0x400);
                goto block_6;
            }
block_6:
            M2C_FIELD(arg0, s32 *, 0x118) = (s32) (M2C_FIELD(arg0, s32 *, 0x118) | 4);
            goto block_8;
        }
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (M2C_FIELD(arg0, s32 *, 0x118) & ~4);
        M2C_FIELD(arg0, s32 *, 0x114) = (s32) (M2C_FIELD(arg0, s32 *, 0x114) & ~0);
block_8:
        if (((u32) M2C_FIELD(arg1, u32 *, 0) >> 0x18U) & 1) {
            if (((((M2C_FIELD(arg0, s32 *, 0x118) & 0x20) ^ 0) | ((M2C_FIELD(arg0, s32 *, 0x114) & 0) ^ 0)) == 0) && (fn_8012E0B4((u8) M2C_FIELD(arg0, s32 *, 0xF4)) == 0U)) {
                return 0;
            }
            M2C_FIELD(arg0, s32 *, 0x118) = (s32) (M2C_FIELD(arg0, s32 *, 0x118) | 0x40000);
            goto block_14;
        }
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (M2C_FIELD(arg0, s32 *, 0x118) & 0xFFFBFFFF);
        M2C_FIELD(arg0, s32 *, 0x114) = (s32) (M2C_FIELD(arg0, s32 *, 0x114) & ~0);
block_14:
        if (((u32) M2C_FIELD(arg1, u32 *, 0) >> 0x10U) & 1) {
            sp8 = fn_8012DCEC() % sp8;
        }
        if (sp8 != -1U) {
            temp_r28 = ((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U) & 1;
            if (temp_r28 != 0) {
                fn_8012DE38(&sp8);
            } else {
                sndConvertTicks(&sp8, arg0);
            }
            if (temp_r28 != 0) {
                if (M2C_FIELD(arg1, u32 *, 4) & 1) {
                    M2C_FIELD(arg0, u32 *, 0x9C) = (u32) (M2C_FIELD(arg0, s32 *, 0x94) + sp8);
                    M2C_FIELD(arg0, s32 *, 0x98) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) + M2C_CARRY);
                } else {
                    M2C_FIELD(arg0, u32 *, 0x9C) = (u32) (lbl_80350DD4 + sp8);
                    M2C_FIELD(arg0, s32 *, 0x98) = (s32) (lbl_80350DD0 + M2C_CARRY);
                }
            } else if (M2C_FIELD(arg1, u32 *, 4) & 1) {
                M2C_FIELD(arg0, u32 *, 0x9C) = sp8;
                M2C_FIELD(arg0, s32 *, 0x98) = 0;
            } else {
                M2C_FIELD(arg0, u32 *, 0x9C) = (u32) (M2C_FIELD(arg0, u32 *, 0xA4) + sp8);
                M2C_FIELD(arg0, s32 *, 0x98) = (s32) (M2C_FIELD(arg0, s32 *, 0xA0) + M2C_CARRY);
            }
            if (-((saved_reg_r29 - saved_reg_r29) - !M2C_CARRY) == 0) {
                M2C_FIELD(arg0, u32 *, 0xA4) = (u32) M2C_FIELD(arg0, u32 *, 0x9C);
                M2C_FIELD(arg0, s32 *, 0xA0) = (s32) M2C_FIELD(arg0, s32 *, 0x98);
                M2C_FIELD(arg0, u32 *, 0x9C) = 0U;
                M2C_FIELD(arg0, s32 *, 0x98) = 0;
            }
        } else {
            M2C_FIELD(arg0, u32 *, 0x9C) = -1U;
            M2C_FIELD(arg0, s32 *, 0x98) = -1;
        }
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x98);
        temp_r5_2 = M2C_FIELD(arg0, u32 *, 0x9C);
        if (((temp_r5_2 ^ 0) | (temp_r4 ^ 0)) != 0) {
            if (((temp_r5_2 ^ -1) | (temp_r4 ^ -1)) != 0) {
                TimeQueueAdd(arg0);
            }
            fn_80122FE0(arg0, 1);
            return 1;
        }
        goto block_34;
    }
block_34:
    return 0;
}

s32 fn_8011EBD0(void *arg0, void *arg1) { return 0; } /* draft: stub */

void fn_8011ECA0(void *arg0, void *arg1) {
    u16 temp_r0;
    u16 temp_r3;
    u16 temp_r3_2;
    u32 temp_r7;

    temp_r0 = M2C_FIELD(arg0, u16 *, 0xAA);
    if (temp_r0 == 0) {
        if (((u32) M2C_FIELD(arg1, u32 *, 0) >> 0x10U) & 1) {
            M2C_FIELD(arg0, u16 *, 0xAA) = (u16) (fn_8012DCEC() % ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U));
        } else {
            M2C_FIELD(arg0, u16 *, 0xAA) = (u16) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U);
        }
        temp_r3 = M2C_FIELD(arg0, u16 *, 0xAA);
        if (temp_r3 != -1U) {
            M2C_FIELD(arg0, u16 *, 0xAA) = (u16) (temp_r3 + 1);
            goto block_7;
        }
        goto block_8;
    }
    if (temp_r0 != -1U) {
block_7:
        temp_r3_2 = M2C_FIELD(arg0, u16 *, 0xAA);
        temp_r3_2 -= 1;
        M2C_FIELD(arg0, u16 *, 0xAA) = temp_r3_2;
        if (temp_r3_2 != 0) {
            goto block_8;
        }
    } else {
block_8:
        temp_r7 = M2C_FIELD(arg1, u32 *, 0);
        if (((temp_r7 >> 8U) & 1) && ((((M2C_FIELD(arg0, s32 *, 0x118) & 8) ^ 8) | ((M2C_FIELD(arg0, s32 *, 0x114) & 0x100) ^ 0)) == 0)) {
            M2C_FIELD(arg0, u16 *, 0xAA) = 0U;
            return;
        }
        if (((temp_r7 >> 0x18U) & 1) && ((((M2C_FIELD(arg0, s32 *, 0x118) & 0x20) ^ 0) | ((M2C_FIELD(arg0, s32 *, 0x114) & 0) ^ 0)) == 0) && (fn_8012E0B4((u8) M2C_FIELD(arg0, s32 *, 0xF4)) == 0U)) {
            M2C_FIELD(arg0, u16 *, 0xAA) = 0U;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + ((M2C_FIELD(arg1, u32 *, 4) * 8) & 0x7FFF8));
    }
}

void fn_8011EDF4(void *arg0, void *arg1) {
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_cr0_eq;
    s32 temp_r0;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r5;
    u32 temp_r8;
    u8 temp_r3;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x12F) + (s8) (u8) ((u32) M2C_FIELD(arg1, u32 *, 0) >> 8U);
    if (temp_r0 < 0) {
        var_r5 = 0;
    } else {
        var_r5 = 0x7F;
        if (temp_r0 <= 0x7F) {
            var_r5 = temp_r0;
        }
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0x11D) != 0) {
        var_r5 |= 0x80;
    }
    M2C_FIELD(arg0, s8 *, 0x11C) = 1;
    temp_r8 = M2C_FIELD(arg1, u32 *, 4);
    sp8 = (s32) M2C_FIELD(arg0, u8 *, 0x122);
    spC = (s32) M2C_FIELD(arg0, u8 *, 0x123);
    sp10 = (s32) (u16) temp_r8;
    sp14 = (s32) M2C_FIELD(arg0, u8 *, 0x120);
    sp18 = 0;
    sp1C = (s32) M2C_FIELD(arg0, u8 *, 0x11E);
    sp20 = (s32) M2C_FIELD(arg0, u8 *, 0x11F);
    sp24 = M2C_FIELD(arg0, u8 *, 0x193) == 0;
    temp_r3 = fn_801230DC((u32) M2C_FIELD(arg1, u32 *, 0) >> 0x10U, (u8) (temp_r8 >> 0x10U), temp_r8 >> 0x18U, M2C_FIELD(arg0, u16 *, 0x100), (u8) var_r5, (u8) ((u32) M2C_FIELD(arg0, u32 *, 0x154) >> 0x10U), (u8) ((u32) M2C_FIELD(arg0, u32 *, 0x170) >> 0x10U), M2C_FIELD(arg0, u8 *, 0x121));
    temp_cr0_eq = (u32) (temp_r3 + 0x10000) == -1U;
    M2C_FIELD(arg0, s8 *, 0x11C) = 0;
    if (temp_cr0_eq == 0) {
        temp_r6 = 0x404;
        temp_r6 *= temp_r3;
        M2C_FIELD(arg0, s32 *, 0x108) = (s32) M2C_FIELD(M2C_FIELD((lbl_80350D60 + temp_r6), void **, 0xF8), s32 *, 8);
        M2C_FIELD((lbl_80350D60 + temp_r6), s32 *, 0xF0) = (s32) M2C_FIELD(arg0, s32 *, 0xF4);
        temp_r5 = M2C_FIELD(arg0, s32 *, 0xEC);
        if ((u32) (temp_r5 + 0x10000) != -1U) {
            M2C_FIELD((lbl_80350D60 + temp_r6), s32 *, 0xEC) = temp_r5;
            M2C_FIELD((lbl_80350D60 + ((u8) M2C_FIELD(arg0, s32 *, 0xEC) * 0x404)), s32 *, 0xF0) = (s32) temp_r3;
        }
        M2C_FIELD(arg0, s32 *, 0xEC) = (s32) temp_r3;
        if ((u8) M2C_FIELD(arg0, u8 *, 0x11D) != 0) {
            synthFXCloneMidiSetup(lbl_80350D60 + temp_r6, arg0);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x108) = -1;
    }
}

void fn_8011EF80(void *arg0, u32 *arg1) {
    u16 temp_r3_2;
    u16 var_r0;
    u32 temp_r3;

    temp_r3 = *arg1;
    if ((temp_r3 >> 0x18U) == 0) {
        M2C_FIELD(arg0, u16 *, 0x12C) = (u16) (M2C_FIELD(arg0, u16 *, 0x12C) + (s8) (u8) (temp_r3 >> 8U));
    } else {
        M2C_FIELD(arg0, u16 *, 0x12C) = (u16) (M2C_FIELD(arg0, u8 *, 0x12F) + (s8) (u8) (temp_r3 >> 8U));
    }
    temp_r3_2 = M2C_FIELD(arg0, u16 *, 0x12C);
    if ((s16) temp_r3_2 < 0) {
        var_r0 = 0;
    } else {
        var_r0 = 0x7F;
        if (temp_r3_2 <= 0x7FU) {
            var_r0 = temp_r3_2;
        }
    }
    M2C_FIELD(arg0, u16 *, 0x12C) = var_r0;
    M2C_FIELD(arg0, s8 *, 0x12E) = (s8) ((u32) *arg1 >> 0x10U);
    if (fn_80124D8C(arg0) != 0U) {
        fn_8012CD38(M2C_FIELD(arg0, u8 *, 0x121), M2C_FIELD(arg0, u8 *, 0x122), (u8) M2C_FIELD(arg0, u16 *, 0x12C));
    }
    *arg1 = 4;
    fn_8011E8E0(arg0, arg1);
}
