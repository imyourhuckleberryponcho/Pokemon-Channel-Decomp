/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800708D4(M2C_UNK);
extern u32 lbl_8034E9DC;
M2C_UNK fn_800441A0(void *);

void fn_80042208(void *arg0, M2C_UNK arg_sp0);
void fn_80042518(void *arg0, M2C_UNK arg_sp0);
void fn_80042828(void *arg0, M2C_UNK arg_sp0);
void fn_80042B38(void *arg0);
void fn_80042CC0(void *arg0);
void fn_80042E48(void *arg0);
void fn_80042FD0(void *arg0);
void fn_80043158(void *arg0, M2C_UNK arg_sp0);
void fn_80043478(void *arg0, M2C_UNK arg_sp0);
void fn_80043788(void *arg0, M2C_UNK arg_sp0);
void fn_80043A98(void *arg0, M2C_UNK arg_sp0);
void fn_80043DA8(void *arg0);
void fn_80043DCC(void *arg0, u8 arg1);
void fn_80043F70(void *arg0);
void fn_80043F94(void *arg0);
void fn_80043FB8(void *arg0);
void fn_80043FDC(void *arg0, M2C_UNK arg_sp0);

void fn_80042208(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80042518(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80042828(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80042B38(void *arg0) {
    s32 temp_r4_3;
    u32 temp_r30;
    u8 temp_r31;
    u8 temp_r4_4;
    void **temp_r4;
    void **var_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4_2;
    void *temp_r4_5;
    void *temp_r5;

    temp_r30 = M2C_FIELD(arg0, u32 *, 0x18);
    temp_r31 = M2C_FIELD(arg0, u8 *, 0xF);
    temp_r4 = M2C_FIELD(arg0, void ***, 8);
    if (temp_r30 <= 0xFFFU) {
        if (temp_r30 >= (u32) lbl_8034E9DC) {
            M2C_FIELD((temp_r4 + temp_r30), u8 *, 0x30) = temp_r31;
            return;
        }
        temp_r4_2 = *temp_r4;
        M2C_FIELD(temp_r4_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r4_2, u32 *, 0x14) = temp_r30;
        M2C_FIELD(temp_r4_2, s32 *, 0x18) = (s32) temp_r31;
        M2C_FIELD(temp_r4_2, s32 *, 0x1C) = 1;
        return;
    }
    if (temp_r30 <= 0x1FFFU) {
        M2C_FIELD((temp_r4 + temp_r30), u8 *, 0x30) = temp_r31;
        return;
    }
    if (temp_r30 <= 0x20FFU) {
        var_r29 = temp_r4 + ((M2C_FIELD((temp_r30 + (temp_r4 + 0x80000)), u8 *, -0x1CFC) * 0x24) + 0x80034);
        if ((void *) *var_r29 == NULL) {
            temp_r5 = *temp_r4;
            M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) | 0x20);
            M2C_FIELD(temp_r5, u32 *, 0x14) = (u32) (temp_r30 - 0x2000);
            M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) temp_r31;
            M2C_FIELD(temp_r5, s32 *, 0x1C) = 1;
            return;
        }
loop_11:
        temp_r3 = *var_r29;
        if (temp_r3 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(s32, u8), 0x1C)(temp_r30 - 0x2000, temp_r31);
            var_r29 += 4;
            goto loop_11;
        }
        return;
    }
    if (temp_r30 <= 0x1FFFFFU) {
        temp_r3_2 = *temp_r4;
        temp_r4_3 = M2C_FIELD(temp_r3_2, s32 *, 8);
        if (!(temp_r4_3 & 0x200) && !(temp_r4_3 & 2)) {
            temp_r4_4 = M2C_FIELD(temp_r3_2, u8 *, 0x2E);
            if (!(temp_r4_4 & 8)) {
                M2C_FIELD(temp_r3_2, u8 *, 0x2E) = (u8) (temp_r4_4 | 8);
                fn_800708D4(2);
            }
        }
    } else {
        temp_r4_5 = *temp_r4;
        M2C_FIELD(temp_r4_5, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_5, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r4_5, u32 *, 0x14) = temp_r30;
        M2C_FIELD(temp_r4_5, s32 *, 0x18) = (s32) temp_r31;
        M2C_FIELD(temp_r4_5, s32 *, 0x1C) = 1;
    }
}

void fn_80042CC0(void *arg0) {
    s32 temp_r4_3;
    u32 temp_r30;
    u8 temp_r31;
    u8 temp_r4_4;
    void **temp_r4;
    void **var_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4_2;
    void *temp_r4_5;
    void *temp_r5;

    temp_r30 = M2C_FIELD(arg0, u32 *, 0x18);
    temp_r31 = M2C_FIELD(arg0, u8 *, 0xE);
    temp_r4 = M2C_FIELD(arg0, void ***, 8);
    if (temp_r30 <= 0xFFFU) {
        if (temp_r30 >= (u32) lbl_8034E9DC) {
            M2C_FIELD((temp_r4 + temp_r30), u8 *, 0x30) = temp_r31;
            return;
        }
        temp_r4_2 = *temp_r4;
        M2C_FIELD(temp_r4_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r4_2, u32 *, 0x14) = temp_r30;
        M2C_FIELD(temp_r4_2, s32 *, 0x18) = (s32) temp_r31;
        M2C_FIELD(temp_r4_2, s32 *, 0x1C) = 1;
        return;
    }
    if (temp_r30 <= 0x1FFFU) {
        M2C_FIELD((temp_r4 + temp_r30), u8 *, 0x30) = temp_r31;
        return;
    }
    if (temp_r30 <= 0x20FFU) {
        var_r29 = temp_r4 + ((M2C_FIELD((temp_r30 + (temp_r4 + 0x80000)), u8 *, -0x1CFC) * 0x24) + 0x80034);
        if ((void *) *var_r29 == NULL) {
            temp_r5 = *temp_r4;
            M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) | 0x20);
            M2C_FIELD(temp_r5, u32 *, 0x14) = (u32) (temp_r30 - 0x2000);
            M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) temp_r31;
            M2C_FIELD(temp_r5, s32 *, 0x1C) = 1;
            return;
        }
loop_11:
        temp_r3 = *var_r29;
        if (temp_r3 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(s32, u8), 0x1C)(temp_r30 - 0x2000, temp_r31);
            var_r29 += 4;
            goto loop_11;
        }
        return;
    }
    if (temp_r30 <= 0x1FFFFFU) {
        temp_r3_2 = *temp_r4;
        temp_r4_3 = M2C_FIELD(temp_r3_2, s32 *, 8);
        if (!(temp_r4_3 & 0x200) && !(temp_r4_3 & 2)) {
            temp_r4_4 = M2C_FIELD(temp_r3_2, u8 *, 0x2E);
            if (!(temp_r4_4 & 8)) {
                M2C_FIELD(temp_r3_2, u8 *, 0x2E) = (u8) (temp_r4_4 | 8);
                fn_800708D4(2);
            }
        }
    } else {
        temp_r4_5 = *temp_r4;
        M2C_FIELD(temp_r4_5, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_5, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r4_5, u32 *, 0x14) = temp_r30;
        M2C_FIELD(temp_r4_5, s32 *, 0x18) = (s32) temp_r31;
        M2C_FIELD(temp_r4_5, s32 *, 0x1C) = 1;
    }
}

void fn_80042E48(void *arg0) {
    s32 temp_r4_3;
    u32 temp_r30;
    u8 temp_r31;
    u8 temp_r4_4;
    void **temp_r4;
    void **var_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4_2;
    void *temp_r4_5;
    void *temp_r5;

    temp_r30 = M2C_FIELD(arg0, u32 *, 0x18);
    temp_r31 = M2C_FIELD(arg0, u8 *, 0x13);
    temp_r4 = M2C_FIELD(arg0, void ***, 8);
    if (temp_r30 <= 0xFFFU) {
        if (temp_r30 >= (u32) lbl_8034E9DC) {
            M2C_FIELD((temp_r4 + temp_r30), u8 *, 0x30) = temp_r31;
            return;
        }
        temp_r4_2 = *temp_r4;
        M2C_FIELD(temp_r4_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r4_2, u32 *, 0x14) = temp_r30;
        M2C_FIELD(temp_r4_2, s32 *, 0x18) = (s32) temp_r31;
        M2C_FIELD(temp_r4_2, s32 *, 0x1C) = 1;
        return;
    }
    if (temp_r30 <= 0x1FFFU) {
        M2C_FIELD((temp_r4 + temp_r30), u8 *, 0x30) = temp_r31;
        return;
    }
    if (temp_r30 <= 0x20FFU) {
        var_r29 = temp_r4 + ((M2C_FIELD((temp_r30 + (temp_r4 + 0x80000)), u8 *, -0x1CFC) * 0x24) + 0x80034);
        if ((void *) *var_r29 == NULL) {
            temp_r5 = *temp_r4;
            M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) | 0x20);
            M2C_FIELD(temp_r5, u32 *, 0x14) = (u32) (temp_r30 - 0x2000);
            M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) temp_r31;
            M2C_FIELD(temp_r5, s32 *, 0x1C) = 1;
            return;
        }
loop_11:
        temp_r3 = *var_r29;
        if (temp_r3 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(s32, u8), 0x1C)(temp_r30 - 0x2000, temp_r31);
            var_r29 += 4;
            goto loop_11;
        }
        return;
    }
    if (temp_r30 <= 0x1FFFFFU) {
        temp_r3_2 = *temp_r4;
        temp_r4_3 = M2C_FIELD(temp_r3_2, s32 *, 8);
        if (!(temp_r4_3 & 0x200) && !(temp_r4_3 & 2)) {
            temp_r4_4 = M2C_FIELD(temp_r3_2, u8 *, 0x2E);
            if (!(temp_r4_4 & 8)) {
                M2C_FIELD(temp_r3_2, u8 *, 0x2E) = (u8) (temp_r4_4 | 8);
                fn_800708D4(2);
            }
        }
    } else {
        temp_r4_5 = *temp_r4;
        M2C_FIELD(temp_r4_5, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_5, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r4_5, u32 *, 0x14) = temp_r30;
        M2C_FIELD(temp_r4_5, s32 *, 0x18) = (s32) temp_r31;
        M2C_FIELD(temp_r4_5, s32 *, 0x1C) = 1;
    }
}

void fn_80042FD0(void *arg0) {
    s32 temp_r4_3;
    u32 temp_r30;
    u8 temp_r31;
    u8 temp_r4_4;
    void **temp_r4;
    void **var_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4_2;
    void *temp_r4_5;
    void *temp_r5;

    temp_r30 = M2C_FIELD(arg0, u32 *, 0x18);
    temp_r31 = M2C_FIELD(arg0, u8 *, 0x12);
    temp_r4 = M2C_FIELD(arg0, void ***, 8);
    if (temp_r30 <= 0xFFFU) {
        if (temp_r30 >= (u32) lbl_8034E9DC) {
            M2C_FIELD((temp_r4 + temp_r30), u8 *, 0x30) = temp_r31;
            return;
        }
        temp_r4_2 = *temp_r4;
        M2C_FIELD(temp_r4_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r4_2, u32 *, 0x14) = temp_r30;
        M2C_FIELD(temp_r4_2, s32 *, 0x18) = (s32) temp_r31;
        M2C_FIELD(temp_r4_2, s32 *, 0x1C) = 1;
        return;
    }
    if (temp_r30 <= 0x1FFFU) {
        M2C_FIELD((temp_r4 + temp_r30), u8 *, 0x30) = temp_r31;
        return;
    }
    if (temp_r30 <= 0x20FFU) {
        var_r29 = temp_r4 + ((M2C_FIELD((temp_r30 + (temp_r4 + 0x80000)), u8 *, -0x1CFC) * 0x24) + 0x80034);
        if ((void *) *var_r29 == NULL) {
            temp_r5 = *temp_r4;
            M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) | 0x20);
            M2C_FIELD(temp_r5, u32 *, 0x14) = (u32) (temp_r30 - 0x2000);
            M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) temp_r31;
            M2C_FIELD(temp_r5, s32 *, 0x1C) = 1;
            return;
        }
loop_11:
        temp_r3 = *var_r29;
        if (temp_r3 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(s32, u8), 0x1C)(temp_r30 - 0x2000, temp_r31);
            var_r29 += 4;
            goto loop_11;
        }
        return;
    }
    if (temp_r30 <= 0x1FFFFFU) {
        temp_r3_2 = *temp_r4;
        temp_r4_3 = M2C_FIELD(temp_r3_2, s32 *, 8);
        if (!(temp_r4_3 & 0x200) && !(temp_r4_3 & 2)) {
            temp_r4_4 = M2C_FIELD(temp_r3_2, u8 *, 0x2E);
            if (!(temp_r4_4 & 8)) {
                M2C_FIELD(temp_r3_2, u8 *, 0x2E) = (u8) (temp_r4_4 | 8);
                fn_800708D4(2);
            }
        }
    } else {
        temp_r4_5 = *temp_r4;
        M2C_FIELD(temp_r4_5, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_5, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r4_5, u32 *, 0x14) = temp_r30;
        M2C_FIELD(temp_r4_5, s32 *, 0x18) = (s32) temp_r31;
        M2C_FIELD(temp_r4_5, s32 *, 0x1C) = 1;
    }
}

void fn_80043158(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80043478(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80043788(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80043A98(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80043DA8(void *arg0) {
    /* draft: did not compile: fn_80043DCC(M2C_FIELD(arg0, u8 *, 0xF)); */
}

void fn_80043DCC(void *arg0, u8 arg1) {
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

    M2C_FIELD(arg0, u8 *, 0x29) = (u8) M2C_FIELD(arg0, u8 *, 0x11);
    M2C_FIELD(arg0, u8 *, 0x2B) = (u8) M2C_FIELD(arg0, u8 *, 0x37);
    temp_r31 = M2C_FIELD(arg0, u32 *, 0x28);
    temp_r4 = M2C_FIELD(arg0, void ***, 8);
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

void fn_80043F70(void *arg0) {
    /* draft: did not compile: fn_80043DCC(M2C_FIELD(arg0, u8 *, 0xE)); */
}

void fn_80043F94(void *arg0) {
    /* draft: did not compile: fn_80043DCC(M2C_FIELD(arg0, u8 *, 0x13)); */
}

void fn_80043FB8(void *arg0) {
    /* draft: did not compile: fn_80043DCC(M2C_FIELD(arg0, u8 *, 0x12)); */
}

void fn_80043FDC(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */
