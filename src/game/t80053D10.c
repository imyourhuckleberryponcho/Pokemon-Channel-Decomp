/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800708D4(M2C_UNK);
extern u32 lbl_8034E9DC;

void fn_80053D10(void *arg0, M2C_UNK arg_sp0);
void fn_80054078(void *arg0, M2C_UNK arg_sp0);
void fn_8005456C(void *arg0, M2C_UNK arg_sp0);
void fn_80054A60(void *arg0);
void fn_80054C44(void *arg0);
void fn_80054E28(void *arg0);
void fn_8005500C(void *arg0);
void fn_800551F0(void *arg0);
void fn_80055214(void *arg0, u8 arg1);
void fn_800553C4(void *arg0);
void fn_800553E8(void *arg0, u8 arg1);
void fn_80055598(void *arg0);
void fn_800555BC(void *arg0, u8 arg1);
void fn_8005576C(void *arg0);
void fn_80055790(void *arg0, u8 arg1);
void fn_80055940(void *arg0);
void fn_80055B24(void *arg0);

void fn_80053D10(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80054078(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8005456C(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80054A60(void *arg0) { } /* draft: stub */

void fn_80054C44(void *arg0) { } /* draft: stub */

void fn_80054E28(void *arg0) { } /* draft: stub */

void fn_8005500C(void *arg0) { } /* draft: stub */

void fn_800551F0(void *arg0) {
    /* draft: did not compile: fn_80055214(M2C_FIELD(arg0, u8 *, 0xF)); */
}

void fn_80055214(void *arg0, u8 arg1) {
    s32 temp_r4_2;
    s32 temp_r31;
    u8 temp_r4_3;
    void **temp_r4;
    void **var_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r6;

    temp_r4 = M2C_FIELD(arg0, void ***, 8);
    temp_r31 = (M2C_FIELD(arg0, u8 *, 0x15) << 0x10) + (u16) ((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, u16 *, 0x16));
    if (temp_r31 <= 0xFFFU) {
        if (temp_r31 >= (u32) lbl_8034E9DC) {
            M2C_FIELD((temp_r4 + temp_r31), u8 *, 0x30) = arg1;
            return;
        }
        temp_r5 = *temp_r4;
        M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r5, u32 *, 0x14) = temp_r31;
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) arg1;
        M2C_FIELD(temp_r5, s32 *, 0x1C) = 1;
        return;
    }
    if (temp_r31 <= 0x1FFFU) {
        M2C_FIELD((temp_r4 + temp_r31), u8 *, 0x30) = arg1;
        return;
    }
    if (temp_r31 <= 0x20FFU) {
        var_r29 = temp_r4 + ((M2C_FIELD((temp_r31 + (temp_r4 + 0x80000)), u8 *, -0x1CFC) * 0x24) + 0x80034);
        if ((void *) *var_r29 == NULL) {
            temp_r6 = *temp_r4;
            M2C_FIELD(temp_r6, s32 *, 8) = (s32) (M2C_FIELD(temp_r6, s32 *, 8) | 0x20);
            M2C_FIELD(temp_r6, u32 *, 0x14) = (u32) (temp_r31 - 0x2000);
            M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) arg1;
            M2C_FIELD(temp_r6, s32 *, 0x1C) = 1;
            return;
        }
loop_11:
        temp_r3 = *var_r29;
        if (temp_r3 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(s32, u8), 0x1C)(temp_r31 - 0x2000, arg1);
            var_r29 += 4;
            goto loop_11;
        }
        return;
    }
    if (temp_r31 <= 0x1FFFFFU) {
        temp_r3_2 = *temp_r4;
        temp_r4_2 = M2C_FIELD(temp_r3_2, s32 *, 8);
        if (!(temp_r4_2 & 0x200) && !(temp_r4_2 & 2)) {
            temp_r4_3 = M2C_FIELD(temp_r3_2, u8 *, 0x2E);
            if (!(temp_r4_3 & 8)) {
                M2C_FIELD(temp_r3_2, u8 *, 0x2E) = (u8) (temp_r4_3 | 8);
                fn_800708D4(2);
            }
        }
    } else {
        temp_r5_2 = *temp_r4;
        M2C_FIELD(temp_r5_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r5_2, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r5_2, u32 *, 0x14) = temp_r31;
        M2C_FIELD(temp_r5_2, s32 *, 0x18) = (s32) arg1;
        M2C_FIELD(temp_r5_2, s32 *, 0x1C) = 1;
    }
}

void fn_800553C4(void *arg0) {
    /* draft: did not compile: fn_800553E8(M2C_FIELD(arg0, u8 *, 0xF)); */
}

void fn_800553E8(void *arg0, u8 arg1) {
    s32 temp_r4_2;
    s32 temp_r31;
    u8 temp_r4_3;
    void **temp_r4;
    void **var_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r6;

    temp_r4 = M2C_FIELD(arg0, void ***, 8);
    temp_r31 = (M2C_FIELD(arg0, u8 *, 0x19) << 0x10) + (u16) ((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, u16 *, 0x1A));
    if (temp_r31 <= 0xFFFU) {
        if (temp_r31 >= (u32) lbl_8034E9DC) {
            M2C_FIELD((temp_r4 + temp_r31), u8 *, 0x30) = arg1;
            return;
        }
        temp_r5 = *temp_r4;
        M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r5, u32 *, 0x14) = temp_r31;
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) arg1;
        M2C_FIELD(temp_r5, s32 *, 0x1C) = 1;
        return;
    }
    if (temp_r31 <= 0x1FFFU) {
        M2C_FIELD((temp_r4 + temp_r31), u8 *, 0x30) = arg1;
        return;
    }
    if (temp_r31 <= 0x20FFU) {
        var_r29 = temp_r4 + ((M2C_FIELD((temp_r31 + (temp_r4 + 0x80000)), u8 *, -0x1CFC) * 0x24) + 0x80034);
        if ((void *) *var_r29 == NULL) {
            temp_r6 = *temp_r4;
            M2C_FIELD(temp_r6, s32 *, 8) = (s32) (M2C_FIELD(temp_r6, s32 *, 8) | 0x20);
            M2C_FIELD(temp_r6, u32 *, 0x14) = (u32) (temp_r31 - 0x2000);
            M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) arg1;
            M2C_FIELD(temp_r6, s32 *, 0x1C) = 1;
            return;
        }
loop_11:
        temp_r3 = *var_r29;
        if (temp_r3 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(s32, u8), 0x1C)(temp_r31 - 0x2000, arg1);
            var_r29 += 4;
            goto loop_11;
        }
        return;
    }
    if (temp_r31 <= 0x1FFFFFU) {
        temp_r3_2 = *temp_r4;
        temp_r4_2 = M2C_FIELD(temp_r3_2, s32 *, 8);
        if (!(temp_r4_2 & 0x200) && !(temp_r4_2 & 2)) {
            temp_r4_3 = M2C_FIELD(temp_r3_2, u8 *, 0x2E);
            if (!(temp_r4_3 & 8)) {
                M2C_FIELD(temp_r3_2, u8 *, 0x2E) = (u8) (temp_r4_3 | 8);
                fn_800708D4(2);
            }
        }
    } else {
        temp_r5_2 = *temp_r4;
        M2C_FIELD(temp_r5_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r5_2, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r5_2, u32 *, 0x14) = temp_r31;
        M2C_FIELD(temp_r5_2, s32 *, 0x18) = (s32) arg1;
        M2C_FIELD(temp_r5_2, s32 *, 0x1C) = 1;
    }
}

void fn_80055598(void *arg0) {
    /* draft: did not compile: fn_800555BC(M2C_FIELD(arg0, u8 *, 0xF)); */
}

void fn_800555BC(void *arg0, u8 arg1) {
    s32 temp_r4_2;
    s32 temp_r31;
    u8 temp_r4_3;
    void **temp_r4;
    void **var_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r6;

    temp_r4 = M2C_FIELD(arg0, void ***, 8);
    temp_r31 = (M2C_FIELD(arg0, u8 *, 0x15) << 0x10) + (u16) ((s8) M2C_FIELD(arg0, u8 *, 0x13) + M2C_FIELD(arg0, u16 *, 0x16));
    if (temp_r31 <= 0xFFFU) {
        if (temp_r31 >= (u32) lbl_8034E9DC) {
            M2C_FIELD((temp_r4 + temp_r31), u8 *, 0x30) = arg1;
            return;
        }
        temp_r5 = *temp_r4;
        M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r5, u32 *, 0x14) = temp_r31;
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) arg1;
        M2C_FIELD(temp_r5, s32 *, 0x1C) = 1;
        return;
    }
    if (temp_r31 <= 0x1FFFU) {
        M2C_FIELD((temp_r4 + temp_r31), u8 *, 0x30) = arg1;
        return;
    }
    if (temp_r31 <= 0x20FFU) {
        var_r29 = temp_r4 + ((M2C_FIELD((temp_r31 + (temp_r4 + 0x80000)), u8 *, -0x1CFC) * 0x24) + 0x80034);
        if ((void *) *var_r29 == NULL) {
            temp_r6 = *temp_r4;
            M2C_FIELD(temp_r6, s32 *, 8) = (s32) (M2C_FIELD(temp_r6, s32 *, 8) | 0x20);
            M2C_FIELD(temp_r6, u32 *, 0x14) = (u32) (temp_r31 - 0x2000);
            M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) arg1;
            M2C_FIELD(temp_r6, s32 *, 0x1C) = 1;
            return;
        }
loop_11:
        temp_r3 = *var_r29;
        if (temp_r3 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(s32, u8), 0x1C)(temp_r31 - 0x2000, arg1);
            var_r29 += 4;
            goto loop_11;
        }
        return;
    }
    if (temp_r31 <= 0x1FFFFFU) {
        temp_r3_2 = *temp_r4;
        temp_r4_2 = M2C_FIELD(temp_r3_2, s32 *, 8);
        if (!(temp_r4_2 & 0x200) && !(temp_r4_2 & 2)) {
            temp_r4_3 = M2C_FIELD(temp_r3_2, u8 *, 0x2E);
            if (!(temp_r4_3 & 8)) {
                M2C_FIELD(temp_r3_2, u8 *, 0x2E) = (u8) (temp_r4_3 | 8);
                fn_800708D4(2);
            }
        }
    } else {
        temp_r5_2 = *temp_r4;
        M2C_FIELD(temp_r5_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r5_2, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r5_2, u32 *, 0x14) = temp_r31;
        M2C_FIELD(temp_r5_2, s32 *, 0x18) = (s32) arg1;
        M2C_FIELD(temp_r5_2, s32 *, 0x1C) = 1;
    }
}

void fn_8005576C(void *arg0) {
    /* draft: did not compile: fn_80055790(M2C_FIELD(arg0, u8 *, 0xF)); */
}

void fn_80055790(void *arg0, u8 arg1) {
    s32 temp_r4_2;
    s32 temp_r31;
    u8 temp_r4_3;
    void **temp_r4;
    void **var_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r6;

    temp_r4 = M2C_FIELD(arg0, void ***, 8);
    temp_r31 = (M2C_FIELD(arg0, u8 *, 0x19) << 0x10) + (u16) ((s8) M2C_FIELD(arg0, u8 *, 0x13) + M2C_FIELD(arg0, u16 *, 0x1A));
    if (temp_r31 <= 0xFFFU) {
        if (temp_r31 >= (u32) lbl_8034E9DC) {
            M2C_FIELD((temp_r4 + temp_r31), u8 *, 0x30) = arg1;
            return;
        }
        temp_r5 = *temp_r4;
        M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r5, u32 *, 0x14) = temp_r31;
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) arg1;
        M2C_FIELD(temp_r5, s32 *, 0x1C) = 1;
        return;
    }
    if (temp_r31 <= 0x1FFFU) {
        M2C_FIELD((temp_r4 + temp_r31), u8 *, 0x30) = arg1;
        return;
    }
    if (temp_r31 <= 0x20FFU) {
        var_r29 = temp_r4 + ((M2C_FIELD((temp_r31 + (temp_r4 + 0x80000)), u8 *, -0x1CFC) * 0x24) + 0x80034);
        if ((void *) *var_r29 == NULL) {
            temp_r6 = *temp_r4;
            M2C_FIELD(temp_r6, s32 *, 8) = (s32) (M2C_FIELD(temp_r6, s32 *, 8) | 0x20);
            M2C_FIELD(temp_r6, u32 *, 0x14) = (u32) (temp_r31 - 0x2000);
            M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) arg1;
            M2C_FIELD(temp_r6, s32 *, 0x1C) = 1;
            return;
        }
loop_11:
        temp_r3 = *var_r29;
        if (temp_r3 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(s32, u8), 0x1C)(temp_r31 - 0x2000, arg1);
            var_r29 += 4;
            goto loop_11;
        }
        return;
    }
    if (temp_r31 <= 0x1FFFFFU) {
        temp_r3_2 = *temp_r4;
        temp_r4_2 = M2C_FIELD(temp_r3_2, s32 *, 8);
        if (!(temp_r4_2 & 0x200) && !(temp_r4_2 & 2)) {
            temp_r4_3 = M2C_FIELD(temp_r3_2, u8 *, 0x2E);
            if (!(temp_r4_3 & 8)) {
                M2C_FIELD(temp_r3_2, u8 *, 0x2E) = (u8) (temp_r4_3 | 8);
                fn_800708D4(2);
            }
        }
    } else {
        temp_r5_2 = *temp_r4;
        M2C_FIELD(temp_r5_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r5_2, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r5_2, u32 *, 0x14) = temp_r31;
        M2C_FIELD(temp_r5_2, s32 *, 0x18) = (s32) arg1;
        M2C_FIELD(temp_r5_2, s32 *, 0x1C) = 1;
    }
}

void fn_80055940(void *arg0) { } /* draft: stub */

void fn_80055B24(void *arg0) { } /* draft: stub */
