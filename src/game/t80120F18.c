/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_8012C018(u8, u8, s32);
M2C_UNK fn_8012CB8C(void *, u8, s32, u8, s32, u8);
extern M2C_UNK lbl_802AADA0;
extern M2C_UNK lbl_802AADC0;
extern M2C_UNK lbl_8032DB24;
extern M2C_UNK lbl_802AADD0;
extern M2C_UNK lbl_802AADF0;
extern M2C_UNK lbl_8032D6A4;
M2C_UNK synthInitPortamento(void *);
M2C_UNK fn_8012C03C(M2C_UNK, u8, M2C_UNK);
u16 fn_8012C858(M2C_UNK, u8);
M2C_UNK fn_8012DE38(u32 *);
M2C_UNK sndConvertTicks(u32 *, void *);
u16 fn_8012DA0C(s32);
extern M2C_UNK lbl_8032D664;
M2C_UNK fn_8012DB08(s32, s16);
M2C_UNK fn_80122ED8();
u8 fn_80123AC4(s32);
extern M2C_UNK lbl_8032CC00;
extern s32 lbl_80350D60;
M2C_UNK fn_80124938(u32);
u32 fn_8012E0B4(u8);
extern s32 lbl_80350DD0;
extern s32 lbl_80350DD4;
extern void *lbl_80350DD8;
extern void *lbl_80350DDC;

void fn_80120F18(void *arg0, void *arg1);
void fn_80121094(void *arg0, void *arg1);
void fn_80121210(void *arg0, void *arg1);
s16 fn_80121374(s32 arg0, u32 arg1, s32 arg2);
void fn_801213DC(s32 arg0, void *arg1, u8 arg2, M2C_UNK arg_sp0);
void fn_801215FC(void *arg0, void *arg1, u8 arg2, M2C_UNK arg_sp0);
void fn_80121748(void *arg0, void *arg1);
void fn_8012198C(void *arg0, u32 *arg1);
void fn_80121A0C(void *arg0, u32 *arg1, M2C_UNK arg_sp0);
void fn_80121AE8();
void fn_80122A40(s32 arg0, M2C_UNK arg_sp0);
void fn_80122B90(void *arg0);
void fn_80122C3C(void *arg0);
void fn_80122D2C(void *arg0, u32 arg1);
void TimeQueueAdd(void *arg0);

void fn_80120F18(void *arg0, void *arg1) {
    u8 temp_r28;
    s32 temp_r29;
    s32 temp_r31;
    s32 temp_r7;
    u8 temp_r8_2;
    s32 var_r5;
    u32 temp_r0;
    u32 temp_r0_2;
    s8 temp_r5;
    u8 temp_r8_3;
    u8 var_r6;
    void *temp_r8;

    temp_r0 = M2C_FIELD(arg1, u32 *, 4);
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x114);
    temp_r8 = &lbl_802AADA0 + ((temp_r0 >> 0x15U) & 0x7F8);
    temp_r29 = M2C_FIELD(temp_r8, s32 *, 0);
    temp_r28 = M2C_FIELD(temp_r8, s32 *, 4);
    temp_r8_2 = M2C_FIELD(arg0, s32 *, 0x118);
    var_r6 = 0;
    temp_r31 = *(&lbl_802AADC0 + ((temp_r0 >> 0x16U) & 0x3FC));
    if ((((temp_r8_2 & temp_r28) ^ 0) | ((temp_r7 & temp_r29) ^ 0)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (temp_r8_2 | temp_r28);
        M2C_FIELD(arg0, s32 *, 0x114) = (s32) (temp_r7 | temp_r29);
    } else {
        var_r6 = (u8) temp_r0;
    }
    temp_r0_2 = M2C_FIELD(arg1, u32 *, 0);
    temp_r5 = (temp_r0_2 & 0xFFFF0000) / 100;
    if (temp_r5 < 0) {
        var_r5 = temp_r5 - (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    } else {
        var_r5 = temp_r5 + (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    }
    temp_r8_3 = (u8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U);
    fn_8012CB8C(&lbl_8032DB24 + (M2C_FIELD(arg0, u8 *, 0x11F) * 0x90) + ((temp_r0 >> 0x18U) * 0x24), (u8) (temp_r0_2 >> 8U), var_r5, var_r6, temp_r8_3 != 0, temp_r8_3);
    if (temp_r31 & 0x80000000) {
        fn_8012C018(M2C_FIELD(arg0, u8 *, 0x121), M2C_FIELD(arg0, u8 *, 0x122), temp_r31);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (M2C_FIELD(arg0, s32 *, 0x214) | temp_r31);
}

void fn_80121094(void *arg0, void *arg1) {
    u8 temp_r28;
    s32 temp_r29;
    s32 temp_r31;
    s32 temp_r7;
    u8 temp_r8_2;
    s32 var_r5;
    u32 temp_r0;
    u32 temp_r0_2;
    s8 temp_r5;
    u8 temp_r8_3;
    u8 var_r6;
    void *temp_r8;

    temp_r0 = M2C_FIELD(arg1, u32 *, 4);
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x114);
    temp_r8 = &lbl_802AADD0 + ((temp_r0 >> 0x15U) & 0x7F8);
    temp_r29 = M2C_FIELD(temp_r8, s32 *, 0);
    temp_r28 = M2C_FIELD(temp_r8, s32 *, 4);
    temp_r8_2 = M2C_FIELD(arg0, s32 *, 0x118);
    var_r6 = 0;
    temp_r31 = *(&lbl_802AADF0 + ((temp_r0 >> 0x16U) & 0x3FC));
    if ((((temp_r8_2 & temp_r28) ^ 0) | ((temp_r7 & temp_r29) ^ 0)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (temp_r8_2 | temp_r28);
        M2C_FIELD(arg0, s32 *, 0x114) = (s32) (temp_r7 | temp_r29);
    } else {
        var_r6 = (u8) temp_r0;
    }
    temp_r0_2 = M2C_FIELD(arg1, u32 *, 0);
    temp_r5 = (temp_r0_2 & 0xFFFF0000) / 100;
    if (temp_r5 < 0) {
        var_r5 = temp_r5 - (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    } else {
        var_r5 = temp_r5 + (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    }
    temp_r8_3 = (u8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U);
    fn_8012CB8C(&lbl_8032D6A4 + (M2C_FIELD(arg0, u8 *, 0x11F) * 0x90) + ((temp_r0 >> 0x18U) * 0x24), (u8) (temp_r0_2 >> 8U), var_r5, var_r6, temp_r8_3 != 0, temp_r8_3);
    if (temp_r31 & 0x80000000) {
        fn_8012C018(M2C_FIELD(arg0, u8 *, 0x121), M2C_FIELD(arg0, u8 *, 0x122), temp_r31);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (M2C_FIELD(arg0, s32 *, 0x214) | temp_r31);
}

void fn_80121210(void *arg0, void *arg1) {
    u32 sp8;
    u8 temp_r0;

    M2C_FIELD(arg0, u8 *, 0x131) = (u8) ((u32) M2C_FIELD(arg1, u32 *, 0) >> 0x10U);
    sp8 = (u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U;
    if (((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U) & 1) {
        fn_8012DE38(&sp8);
    } else {
        sndConvertTicks(&sp8, arg0);
    }
    M2C_FIELD(arg0, u32 *, 0x134) = sp8;
    temp_r0 = (u8) ((u32) M2C_FIELD(arg1, u32 *, 0) >> 8U);
    switch ((s32) temp_r0) {                        /* irregular */
    case 0:
        if ((u8) M2C_FIELD(arg0, u8 *, 0x121) != 0xFF) {
            fn_8012C03C(0x41, M2C_FIELD(arg0, u8 *, 0x122), 0);
        }
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (M2C_FIELD(arg0, s32 *, 0x118) & ~0x400);
        M2C_FIELD(arg0, s32 *, 0x114) = (s32) (M2C_FIELD(arg0, s32 *, 0x114) & ~0);
        return;
    case 1:
        if ((u8) M2C_FIELD(arg0, u8 *, 0x121) != 0xFF) {
            fn_8012C03C(0x41, M2C_FIELD(arg0, u8 *, 0x122), 0x7F);
        }
block_14:
        if ((((M2C_FIELD(arg0, s32 *, 0x118) & 0x400) ^ 0) | ((M2C_FIELD(arg0, s32 *, 0x114) & 0) ^ 0)) == 0) {
            synthInitPortamento(arg0);
        }
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (M2C_FIELD(arg0, s32 *, 0x118) | 0x400);
        return;
    case 2:
        if (((u8) M2C_FIELD(arg0, u8 *, 0x121) == 0xFF) || (fn_8012C858(0x41, M2C_FIELD(arg0, u8 *, 0x122)) <= 0x1F80U)) {
            return;
        }
        goto block_14;
    }
}

s16 fn_80121374(s32 arg0, u32 arg1, s32 arg2) {
    u32 var_r0;
    u32 temp_r0;

    if (arg1 != 0U) {
        var_r0 = fn_8012DA0C(arg2);
    } else {
        temp_r0 = arg2 & 0x1F;
        if (temp_r0 < 0x10U) {
            var_r0 = M2C_FIELD((arg0 + ((temp_r0 * 4) & 0x3FC)), s32 *, 0xAC);
        } else {
            var_r0 = M2C_FIELD((&lbl_8032D664 + ((temp_r0 * 4) & 0x3FC)), s32 *, -0x40);
        }
    }
    return (s16) var_r0;
}

void fn_801213DC(s32 arg0, void *arg1, u8 arg2, M2C_UNK arg_sp0) {
    s32 saved_reg_r30;
    s32 var_r3_2;
    s32 var_r0_2;
    u32 temp_r0_3;
    s32 var_r3_3;
    s32 var_r4;
    s32 var_r0;
    u16 var_r3;
    u32 temp_r0;
    u32 temp_r0_2;
    s32 var_r30;
    u32 temp_r3_2;

    var_r30 = saved_reg_r30;
    if (((u32) M2C_FIELD(arg1, u32 *, 0) >> 0x18U) != 0) {
        var_r3 = fn_8012DA0C((long)(0));
    } else {
        temp_r0 = (u8) M2C_FIELD(arg1, u32 *, 4) & 0x1F;
        if (temp_r0 < 0x10U) {
            var_r3 = (u16) M2C_FIELD((arg0 + ((temp_r0 * 4) & 0x3FC)), s32 *, 0xAC);
        } else {
            var_r3 = (u16) M2C_FIELD((&lbl_8032D664 + ((temp_r0 * 4) & 0x3FC)), s32 *, -0x40);
        }
    }
    if (arg2 == 4) {
        var_r3_2 = (s16) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U);
    } else {
        if ((u8) ((M2C_FIELD(arg1, u32 *, 4)) >> 8U) != 0) {
            var_r0 = fn_8012DA0C(arg0);
        } else {
            temp_r0_2 = (u8) ((M2C_FIELD(arg1, u32 *, 4)) >> 0x10U) & 0x1F;
            if (temp_r0_2 < 0x10U) {
                var_r0 = M2C_FIELD((arg0 + ((temp_r0_2 * 4) & 0x3FC)), s32 *, 0xAC);
            } else {
                var_r0 = M2C_FIELD((&lbl_8032D664 + ((temp_r0_2 * 4) & 0x3FC)), s32 *, -0x40);
            }
        }
        var_r3_2 = var_r0;
    }
    switch ((s32) arg2) {                           /* irregular */
    case 4:
    case 0:
        var_r30 = var_r3_2;
        var_r30 += (s16) var_r3;
        break;
    case 1:
        var_r30 = (s16) var_r3 - var_r3_2;
        break;
    case 2:
        var_r30 = (s16) var_r3 * var_r3_2;
        break;
    case 3:
        if (var_r3_2 != 0) {
            var_r30 = (s16) var_r3 / var_r3_2;
        } else {
            var_r30 = 0;
        }
        break;
    }
    temp_r3_2 = M2C_FIELD(arg1, u32 *, 0);
    if ((u8) (temp_r3_2 >> 8U) != 0) {
        if (var_r30 < -0x8000) {
            var_r0_2 = -0x8000;
        } else {
            var_r0_2 = 0x7FFF;
            var_r0_2 = var_r30 > 0x7FFF ? var_r0_2 : var_r30;
        }
        fn_8012DB08(arg0, (s16) var_r0_2);
        return;
    }
    temp_r0_3 = (u8) (temp_r3_2 >> 0x10U) & 0x1F;
    if (temp_r0_3 < 0x10U) {
        if (var_r30 < -0x8000) {
            var_r3_3 = -0x8000;
        } else {
            var_r3_3 = 0x7FFF;
            if (var_r30 <= 0x7FFF) {
                var_r3_3 = var_r30;
            }
        }
        M2C_FIELD((arg0 + ((temp_r0_3 * 4) & 0x3FC)), s32 *, 0xAC) = (s32) (s16) var_r3_3;
        return;
    }
    if (var_r30 < -0x8000) {
        var_r4 = -0x8000;
    } else {
        var_r4 = 0x7FFF;
        if (var_r30 <= 0x7FFF) {
            var_r4 = var_r30;
        }
    }
    M2C_FIELD((&lbl_8032D664 + ((temp_r0_3 * 4) & 0x3FC)), s32 *, -0x40) = (s32) (s16) var_r4;
}

void fn_801215FC(void *arg0, void *arg1, u8 arg2, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80121748(void *arg0, void *arg1) { } /* draft: stub */

void fn_8012198C(void *arg0, u32 *arg1) { } /* draft: stub */

void fn_80121A0C(void *arg0, u32 *arg1, M2C_UNK arg_sp0) {
    s32 var_r30;
    u32 temp_r0;
    u32 var_r29;
    u8 temp_r28;
    void *temp_r3;

    var_r30 = 0;
    M2C_FIELD(arg0, u8 *, 0x104) = 0U;
    temp_r0 = *arg1;
    temp_r28 = (u8) (temp_r0 >> 8U);
    if (temp_r28 != 0) {
        var_r29 = 0U;
loop_9:
        if (var_r29 < (u8) M2C_FIELD(&lbl_8032CC00, u8 *, 0x210)) {
            /* draft: did not compile: temp_r3 = lbl_80350D60 + var_r30; */
            if (((u32) M2C_FIELD(temp_r3, u32 *, 0x34) != 0U) && ((((M2C_FIELD(temp_r3, s32 *, 0x118) & 2) ^ 0) | ((M2C_FIELD(temp_r3, s32 *, 0x114) & 0) ^ 0)) == 0) && (temp_r28 == (u8) M2C_FIELD(temp_r3, u8 *, 0x104))) {
                if ((u32) ((u8) (temp_r0 >> 0x10U) != 0) == 0) {
                    fn_80122C3C((void *)(0));
                } else {
                    fn_80124938(var_r29);
                }
            }
            var_r30 += 0x404;
            var_r29 += 1;
            goto loop_9;
        }
        M2C_FIELD(arg0, u8 *, 0x104) = temp_r28;
    }
}

void fn_80121AE8() { } /* draft: stub */

void fn_80122A40(s32 arg0, M2C_UNK arg_sp0) {
    s32 saved_reg_r31;
    s32 temp_r28;
    s32 temp_r29;
    u32 temp_r4;
    u32 var_r0;
    void *temp_r26;
    void *var_r27;
    void *var_r31;

    var_r27 = lbl_80350DD8;
loop_2:
    if (var_r27 != NULL) {
        temp_r28 = M2C_FIELD(var_r27, s32 *, 0x9C);
        temp_r29 = M2C_FIELD(var_r27, s32 *, 0x98);
        if (-((saved_reg_r31 - saved_reg_r31) - !M2C_CARRY) == 0) {
            temp_r26 = M2C_FIELD(var_r27, void **, 0x44);
            fn_80122ED8(var_r27);
            M2C_FIELD(var_r27, s32 *, 0xA4) = temp_r28;
            M2C_FIELD(var_r27, s32 *, 0xA0) = temp_r29;
            var_r27 = temp_r26;
            goto loop_2;
        }
    }
    var_r31 = lbl_80350DDC;
loop_15:
    if (var_r31 != NULL) {
        if ((u8) M2C_FIELD(var_r31, u8 *, 0x68) != 0) {
            var_r0 = M2C_FIELD(var_r31, u32 *, 0x54) != 0U;
        } else {
            var_r0 = 0;
        }
        if ((var_r0 != 0) && ((((M2C_FIELD(var_r31, s32 *, 0x118) & 0x20) ^ 0) | ((M2C_FIELD(var_r31, s32 *, 0x114) & 0) ^ 0)) == 0) && (fn_8012E0B4((u8) M2C_FIELD(var_r31, s32 *, 0xF4)) == 0U) && ((u8) M2C_FIELD(var_r31, u8 *, 0x68) != 0) && ((u32) M2C_FIELD(var_r31, u32 *, 0x54) != 0U)) {
            M2C_FIELD(var_r31, s32 *, 0x38) = (s32) M2C_FIELD(var_r31, s32 *, 0x60);
            temp_r4 = M2C_FIELD(var_r31, u32 *, 0x54);
            M2C_FIELD(var_r31, u32 *, 0x34) = temp_r4;
            M2C_FIELD(var_r31, u32 *, 0x54) = 0U;
            fn_80122ED8(var_r31, temp_r4);
        }
        fn_80121AE8(var_r31);
        var_r31 = M2C_FIELD(var_r31, void **, 0x3C);
        goto loop_15;
    }
    lbl_80350DD4 += arg0;
    lbl_80350DD0 += M2C_CARRY;
}

void fn_80122B90(void *arg0) {
    u32 var_r0;
    void *temp_r4;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x4C) == 1) {
        if (((u8) M2C_FIELD(arg0, u8 *, 0x68) != 0) && ((void *) M2C_FIELD(arg0, void **, 0x54) != NULL)) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x60);
            temp_r4 = M2C_FIELD(arg0, void **, 0x54);
            M2C_FIELD(arg0, void **, 0x34) = temp_r4;
            M2C_FIELD(arg0, void **, 0x54) = NULL;
            fn_80122ED8(temp_r4);
            var_r0 = 1U;
        } else {
            var_r0 = 0U;
        }
        if ((var_r0 == 0U) && ((((M2C_FIELD(arg0, s32 *, 0x118) & 0x40000) ^ 0) | ((M2C_FIELD(arg0, s32 *, 0x114) & 0) ^ 0)) != 0)) {
            fn_80122ED8(arg0);
        }
    }
}

#pragma push
#pragma peephole off
void fn_80122C3C(void *arg0) {
    u16 temp_r6;
    u8 temp_r7;
    u32 var_r0;

    M2C_FIELD(arg0, s32 *, 0x118) = (s32) (M2C_FIELD(arg0, s32 *, 0x118) | 8);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        temp_r6 = M2C_FIELD(arg0, s32 *, 0x114);
        temp_r7 = M2C_FIELD(arg0, s32 *, 0x118);
        if ((((temp_r7 & 0) ^ 0) | ((temp_r6 & 0x100) ^ 0)) == 0) {
            if (((u8) M2C_FIELD(arg0, u8 *, 0x68) != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U)) {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x5C);
                M2C_FIELD(arg0, u32 *, 0x34) = (u32) M2C_FIELD(arg0, u32 *, 0x50);
                M2C_FIELD(arg0, u32 *, 0x50) = 0U;
                fn_80122ED8();
                var_r0 = 1U;
            } else {
                var_r0 = 0U;
            }
            if ((var_r0 == 0U) && ((((M2C_FIELD(arg0, s32 *, 0x118) & 4) ^ 0) | ((M2C_FIELD(arg0, s32 *, 0x114) & 0) ^ 0)) != 0)) {
                fn_80122ED8(arg0);
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x118) = temp_r7;
            M2C_FIELD(arg0, s32 *, 0x114) = (s32) (temp_r6 | 0x400);
        }
    }
}
#pragma pop

void fn_80122D2C(void *arg0, u32 arg1) {
    u32 var_r0;

    if (arg1 != 0U) {
        M2C_FIELD(arg0, s32 *, 0x114) = (s32) (M2C_FIELD(arg0, s32 *, 0x114) | 0x100);
        return;
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) && ((((M2C_FIELD(arg0, s32 *, 0x118) & 0) ^ 0) | ((M2C_FIELD(arg0, s32 *, 0x114) & 0x400) ^ 0)) != 0)) {
        if (((u8) M2C_FIELD(arg0, u8 *, 0x68) != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U)) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x5C);
            M2C_FIELD(arg0, u32 *, 0x34) = (u32) M2C_FIELD(arg0, u32 *, 0x50);
            M2C_FIELD(arg0, u32 *, 0x50) = 0U;
            fn_80122ED8();
            var_r0 = 1U;
        } else {
            var_r0 = 0U;
        }
        if ((var_r0 == 0U) && ((((M2C_FIELD(arg0, s32 *, 0x118) & 4) ^ 0) | ((M2C_FIELD(arg0, s32 *, 0x114) & 0) ^ 0)) != 0)) {
            fn_80122ED8(arg0);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x118) = (s32) (M2C_FIELD(arg0, s32 *, 0x118) & ~0);
    M2C_FIELD(arg0, s32 *, 0x114) = (s32) (M2C_FIELD(arg0, s32 *, 0x114) & ~0x500);
}

void TimeQueueAdd(void *arg0) {
    void *temp_r0;
    void *var_r7;
    void *var_r8;

    var_r7 = lbl_80350DD8;
    var_r8 = NULL;
loop_2:
    if (0 /* draft: did not compile */) {
        var_r8 = var_r7;
        var_r7 = M2C_FIELD(var_r7, void **, 0x44);
        goto loop_2;
    }
    if (var_r7 == NULL) {
        if (var_r8 == NULL) {
            M2C_FIELD(arg0, void **, 0x48) = NULL;
            lbl_80350DD8 = arg0;
            M2C_FIELD(arg0, void **, 0x44) = NULL;
            return;
        }
        M2C_FIELD(var_r8, void **, 0x44) = arg0;
        M2C_FIELD(arg0, void **, 0x48) = var_r8;
        M2C_FIELD(arg0, void **, 0x44) = NULL;
        return;
    }
    M2C_FIELD(arg0, void **, 0x44) = var_r7;
    temp_r0 = M2C_FIELD(var_r7, void **, 0x48);
    M2C_FIELD(arg0, void **, 0x48) = temp_r0;
    if (temp_r0 != NULL) {
        M2C_FIELD(M2C_FIELD(var_r7, void **, 0x48), void **, 0x44) = arg0;
    } else {
        lbl_80350DD8 = arg0;
    }
    M2C_FIELD(var_r7, void **, 0x48) = arg0;
}
