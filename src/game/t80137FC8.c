/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(M2C_UNK *);
s32 fn_8013A1B8(M2C_UNK);
extern M2C_UNK lbl_803477C0;
extern s32 lbl_80350EEC;
extern s32 lbl_80350EF0;
extern s32 lbl_80350EF4;
extern s32 lbl_80350ED8;

void CardScheduleExec();
s32 fn_80139730(s32 arg0, s32 arg1);
s32 fn_8013983C(s32 arg0);
void fn_8013992C(void);
void fn_80139938(void);
void fn_8013998C(void);
s32 fn_80139998(u8 *arg0);
void method_setRegion(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_80139A50(s32 arg0, void *arg1, s32 arg2);
void fn_80139BAC(s32 arg0, void *arg1);
u32 fn_80139C00(void *arg0, s32 arg1);
s32 fn_80139C84(void *arg0, s32 arg1);

void CardScheduleExec() { } /* draft: stub */

s32 fn_80139730(s32 arg0, s32 arg1) {
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 spC;
    s32 sp8;
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r31;
    u32 temp_r6;
    u32 temp_r7;
    u32 temp_r7_2;
    void *temp_r3;

    sp8 = 0xD;
    spC = arg0;
    sp18 = arg1;
    sp1C = 0;
    sp20 = 0;
    sp28 = 0;
    sp24 = fn_8013A1B8(0xD);
    OSDisableInterrupts();
    temp_r29 = lbl_80350EF0;
    temp_r31 = lbl_80350EF4;
    temp_r30 = *(&lbl_803477C0 + (lbl_80350EF0 * 0x24));
    OSRestoreInterrupts(&lbl_803477C0);
    if ((temp_r31 != 2) && ((s32) lbl_80350EEC == temp_r29) && ((temp_r31 != 0) || ((s32) lbl_80350EEC != temp_r29) || (temp_r30 != 0))) {
        return -0x109;
    }
    temp_r7 = lbl_80350EEC + 1;
    temp_r7_2 = temp_r7 >> 0x1FU;
    temp_r6 = (temp_r7 << 0x19) - temp_r7_2;
    temp_r3 = &lbl_803477C0 + (lbl_80350EEC * 0x24);
    lbl_80350EEC = ((temp_r6 << 7) | (temp_r6 >> 0x19U)) + temp_r7_2;
    memcpy((void *)(temp_r3), (const void *)(&sp8), (unsigned long)(0x24));
    if (temp_r31 == 2) {
        lbl_80350EF4 = 0;
    }
    return 0;
}

s32 fn_8013983C(s32 arg0) {
    s32 spC;
    s32 sp8;
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r31;
    u32 temp_r6;
    u32 temp_r7;
    u32 temp_r7_2;
    void *temp_r3;

    spC = arg0;
    sp8 = 0xE;
    OSDisableInterrupts();
    temp_r29 = lbl_80350EF0;
    temp_r31 = lbl_80350EF4;
    temp_r30 = *(&lbl_803477C0 + (lbl_80350EF0 * 0x24));
    OSRestoreInterrupts(&lbl_803477C0);
    if ((temp_r31 != 2) && ((s32) lbl_80350EEC == temp_r29) && ((temp_r31 != 0) || ((s32) lbl_80350EEC != temp_r29) || (temp_r30 != 0))) {
        return -0x109;
    }
    temp_r7 = lbl_80350EEC + 1;
    temp_r7_2 = temp_r7 >> 0x1FU;
    temp_r6 = (temp_r7 << 0x19) - temp_r7_2;
    temp_r3 = &lbl_803477C0 + (lbl_80350EEC * 0x24);
    lbl_80350EEC = ((temp_r6 << 7) | (temp_r6 >> 0x19U)) + temp_r7_2;
    memcpy((void *)(temp_r3), (const void *)(&sp8), (unsigned long)(0x24));
    if (temp_r31 == 2) {
        lbl_80350EF4 = 0;
    }
    return 0;
}

void fn_8013992C(void) {
    lbl_80350ED8 = lbl_80350EEC;
}

void fn_80139938(void) {
    s32 var_r5;
    u32 temp_r0;
    u32 temp_r3;
    u32 temp_r3_2;

    if ((s32) lbl_80350ED8 >= 0) {
        var_r5 = lbl_80350ED8;
loop_3:
        if (var_r5 != (s32) lbl_80350EEC) {
            temp_r3 = var_r5 + 1;
            temp_r3_2 = temp_r3 >> 0x1FU;
            temp_r0 = (temp_r3 << 0x19) - temp_r3_2;
            *(&lbl_803477C0 + (var_r5 * 0x24)) = 0;
            var_r5 = ((temp_r0 << 7) | (temp_r0 >> 0x19U)) + temp_r3_2;
            goto loop_3;
        }
        lbl_80350EEC = lbl_80350ED8;
    }
}

void fn_8013998C(void) {
    lbl_80350ED8 = -1;
}

s32 fn_80139998(u8 *arg0) {
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    s32 var_r8;
    u8 temp_r0;
    u8 temp_r0_2;
    void *temp_r4;

    temp_r0 = *arg0;
    switch ((s32) temp_r0) {                        /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        var_r5 = 0x1800;
        break;
    case 1:                                         /* switch 1 */
        var_r5 = 0xE00;
        break;
    default:                                        /* switch 1 */
        var_r5 = 0;
        break;
    }
    var_r7 = 0;
    var_r6 = 0;
    var_r8 = 0;
loop_15:
    if (var_r8 < 8) {
        temp_r4 = arg0 + var_r8;
        if ((u8) M2C_FIELD(temp_r4, u8 *, 0xA) != 0) {
            temp_r0_2 = M2C_FIELD(temp_r4, u8 *, 2);
            switch ((s32) temp_r0_2) {              /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                var_r6 += 0x800;
                break;
            case 1:                                 /* switch 2 */
                var_r7 = 1;
                var_r6 += 0x400;
                break;
            }
            var_r8 += 1;
            goto loop_15;
        }
    }
    if (var_r7 != 0) {
        var_r6 += 0x200;
    }
    return var_r5 + var_r6 + 0x40;
}

void method_setRegion(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_r3;

    /* draft: did not compile: temp_r3 = arg0 + (arg1 * 4); */
    M2C_FIELD(temp_r3, s32 *, 0x28) = arg3;
    M2C_FIELD(temp_r3, s32 *, 0x68) = arg2;
    M2C_FIELD(temp_r3, s32 *, 0xA8) = arg4;
}

void fn_80139A50(s32 arg0, void *arg1, s32 arg2) {
    s32 var_r7;
    s32 var_r8;
    s8 temp_r5;
    u32 temp_r0;
    u32 var_ctr;
    u32 var_ctr_2;
    u32 var_r3;
    void *temp_r6;
    void *var_r4;

    var_r4 = arg1;
    if (((s32) (arg2 + 1) >= 0x10) || ((s32) M2C_FIELD((arg0 + (arg2 * 4)), s32 *, 0x6C) == 0)) {
        var_r7 = arg2 - 2;
    } else {
        var_r7 = arg2 - 1;
    }
    if (var_r7 < 0) {
        var_r7 = 0;
    }
    var_r8 = 0;
loop_8:
    if ((var_r8 < 3) && (var_r8 < 0x10)) {
        temp_r5 = var_r7 + var_r8;
        var_r8 += 1;
        M2C_FIELD(var_r4, s8 *, 0) = temp_r5;
        /* draft: did not compile: temp_r6 = arg0 + (temp_r5 * 4); */
        M2C_FIELD(var_r4, s8 *, 1) = (s8) ((((u32) M2C_FIELD(temp_r6, u32 *, 0x68) >> 0x10U) & 0x3F & ~0xC0) | ((M2C_FIELD(temp_r6, s32 *, 0x28) << 6) & 0xC0));
        M2C_FIELD(var_r4, u8 *, 2) = (u8) ((u32) M2C_FIELD(temp_r6, u32 *, 0x68) >> 8U);
        M2C_FIELD(var_r4, s8 *, 3) = (s8) M2C_FIELD(temp_r6, u32 *, 0x68);
        /* draft: did not compile: var_r4 += 4; */
        goto loop_8;
    }
    var_r3 = 3 - var_r8;
    if (var_r8 < 3) {
        temp_r0 = var_r3 >> 3U;
        var_ctr = temp_r0;
        if (temp_r0 != 0) {
            do {
                M2C_FIELD(var_r4, s8 *, 0) = 0;
                M2C_FIELD(var_r4, s8 *, 1) = 0;
                M2C_FIELD(var_r4, s8 *, 2) = 0;
                M2C_FIELD(var_r4, s8 *, 3) = 0;
                M2C_FIELD(var_r4, s8 *, 4) = 0;
                M2C_FIELD(var_r4, s8 *, 5) = 0;
                M2C_FIELD(var_r4, s8 *, 6) = 0;
                M2C_FIELD(var_r4, s8 *, 7) = 0;
                M2C_FIELD(var_r4, s8 *, 8) = 0;
                M2C_FIELD(var_r4, s8 *, 9) = 0;
                M2C_FIELD(var_r4, s8 *, 0xA) = 0;
                M2C_FIELD(var_r4, s8 *, 0xB) = 0;
                M2C_FIELD(var_r4, s8 *, 0xC) = 0;
                M2C_FIELD(var_r4, s8 *, 0xD) = 0;
                M2C_FIELD(var_r4, s8 *, 0xE) = 0;
                M2C_FIELD(var_r4, s8 *, 0xF) = 0;
                M2C_FIELD(var_r4, s8 *, 0x10) = 0;
                M2C_FIELD(var_r4, s8 *, 0x11) = 0;
                M2C_FIELD(var_r4, s8 *, 0x12) = 0;
                M2C_FIELD(var_r4, s8 *, 0x13) = 0;
                M2C_FIELD(var_r4, s8 *, 0x14) = 0;
                M2C_FIELD(var_r4, s8 *, 0x15) = 0;
                M2C_FIELD(var_r4, s8 *, 0x16) = 0;
                M2C_FIELD(var_r4, s8 *, 0x17) = 0;
                M2C_FIELD(var_r4, s8 *, 0x18) = 0;
                M2C_FIELD(var_r4, s8 *, 0x19) = 0;
                M2C_FIELD(var_r4, s8 *, 0x1A) = 0;
                M2C_FIELD(var_r4, s8 *, 0x1B) = 0;
                M2C_FIELD(var_r4, s8 *, 0x1C) = 0;
                M2C_FIELD(var_r4, s8 *, 0x1D) = 0;
                M2C_FIELD(var_r4, s8 *, 0x1E) = 0;
                M2C_FIELD(var_r4, s8 *, 0x1F) = 0;
                /* draft: did not compile: var_r4 += 0x20; */
                var_ctr -= 1;
            } while (var_ctr != 0);
            var_r3 &= 7;
            if (var_r3 != 0) {
                goto block_14;
            }
        } else {
block_14:
            var_ctr_2 = var_r3;
            do {
                M2C_FIELD(var_r4, s8 *, 0) = 0;
                M2C_FIELD(var_r4, s8 *, 1) = 0;
                M2C_FIELD(var_r4, s8 *, 2) = 0;
                M2C_FIELD(var_r4, s8 *, 3) = 0;
                /* draft: did not compile: var_r4 += 4; */
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
}

void fn_80139BAC(s32 arg0, void *arg1) {
    s32 temp_r5_2;
    s32 temp_r7;
    s32 temp_r8;
    s32 var_ctr;
    u8 temp_r0;
    u8 temp_r5;
    u8 temp_r6;
    void *temp_r5_3;
    void *var_r4;

    var_r4 = arg1;
    var_ctr = 3;
    do {
        temp_r5 = M2C_FIELD(var_r4, u8 *, 1);
        temp_r0 = M2C_FIELD(var_r4, u8 *, 3);
        temp_r8 = (temp_r5 >> 6U) & 3;
        temp_r6 = M2C_FIELD(var_r4, u8 *, 0);
        temp_r5_2 = ((M2C_FIELD(var_r4, u8 *, 2) & ~0x3F00) | ((temp_r5 << 8) & 0x3F00)) << 8;
        /* draft: did not compile: var_r4 += 4; */
        temp_r7 = temp_r5_2 | temp_r0;
        if (temp_r7 != 0) {
            /* draft: did not compile: temp_r5_3 = arg0 + (temp_r6 * 4); */
            if ((s32) M2C_FIELD(temp_r5_3, s32 *, 0x68) == 0) {
                M2C_FIELD(temp_r5_3, s32 *, 0x28) = temp_r8;
                M2C_FIELD(temp_r5_3, s32 *, 0x68) = temp_r7;
            }
        }
        var_ctr -= 1;
    } while (var_ctr != 0);
}

u32 fn_80139C00(void *arg0, s32 arg1) { return 0; } /* draft: stub */

s32 fn_80139C84(void *arg0, s32 arg1) {
    s32 temp_cr0_gt;
    u32 temp_r7_3;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7_2;
    s32 var_ctr;
    s32 var_r10;
    s32 var_r5;
    s32 var_r9;
    u32 temp_r4;
    u32 temp_r7;
    s32 temp_r0;
    u32 temp_r8;
    u32 temp_r8_2;
    u32 var_r4;
    void *var_r6;

    if (arg1 >= 0x10) {
        return 0;
    }
    if (arg1 == 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x68);
    var_r9 = 1;
    temp_cr0_gt = temp_r0 > 0;
    if (temp_cr0_gt != 0) {
        if (temp_cr0_gt == 0) {
            var_r5 = 0;
        } else {
            temp_r7 = M2C_FIELD(arg0, u32 *, 8);
            temp_r8 = temp_r7 - 0x20;
            temp_r6 = temp_r0 - (temp_r8 - ((M2C_FIELD(arg0, s32 *, 0x24) + 0x30) % temp_r7));
            if (temp_r6 <= 0) {
                var_r5 = 1;
            } else {
                var_r5 = ((u32) (temp_r6 + (temp_r7 - 0x21)) / temp_r8);
            }
        }
        var_r9 = (var_r5 + 1);
    }
    /* draft: did not compile: var_r6 = arg0 + 4; */
    var_r10 = 1;
    var_ctr = arg1 - 1;
    if (arg1 > 1) {
        do {
            temp_r7_2 = M2C_FIELD(var_r6, s32 *, 0x68);
            if (temp_r7_2 <= 0) {
                var_r4 = 0;
            } else if (var_r10 == 0) {
                temp_r7_3 = M2C_FIELD(arg0, u32 *, 8);
                temp_r8_2 = temp_r7_3 - 0x20;
                temp_r5 = temp_r0 - (temp_r8_2 - ((M2C_FIELD(arg0, s32 *, 0x24) + 0x30) % temp_r7_3));
                if (temp_r5 <= 0) {
                    var_r4 = 1;
                } else {
                    var_r4 = ((u32) (temp_r5 + (temp_r7_3 - 0x21)) / temp_r8_2) + 1;
                }
            } else {
                temp_r4 = M2C_FIELD(arg0, u32 *, 8);
                var_r4 = (u32) (temp_r7_2 + (temp_r4 - 0x21)) / (u32) (temp_r4 - 0x20);
            }
            var_r9 += var_r4;
            /* draft: did not compile: var_r6 += 4; */
            var_r10 += 1;
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    return var_r9;
}
