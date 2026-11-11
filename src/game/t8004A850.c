/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80039194(void *, void *, u8);
M2C_UNK fn_800708D4(M2C_UNK);
extern u32 lbl_8034E9DC;
M2C_UNK fn_8003A700(void *, void *, u8);

void fn_8004A850(void *arg0, M2C_UNK arg_sp0);
void fn_8004AA38(void *arg0, M2C_UNK arg_sp0);
void fn_8004AC20(void *arg0, M2C_UNK arg_sp0);
void fn_8004AE08(void *arg0, M2C_UNK arg_sp0);
void fn_8004B128(void *arg0, M2C_UNK arg_sp0);
void fn_8004B448(void *arg0, M2C_UNK arg_sp0);
void fn_8004B8F4(void *arg0, M2C_UNK arg_sp0);
void fn_8004BDA0(void *arg0, M2C_UNK arg_sp0);
void fn_8004BF88(void *arg0, M2C_UNK arg_sp0);
void fn_8004C170(void *arg0, M2C_UNK arg_sp0);
void fn_8004C358(void *arg0, M2C_UNK arg_sp0);

void fn_8004A850(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8004AA38(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8004AC20(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8004AE08(void *arg0, M2C_UNK arg_sp0) {
    s32 temp_r4;
    s32 temp_r4_3;
    s32 temp_r4_8;
    u32 temp_r30;
    u32 temp_r30_2;
    u8 temp_r31_2;
    u8 temp_r4_2;
    u8 temp_r4_4;
    u8 temp_r4_9;
    void **temp_r31;
    void **temp_r4_6;
    void **var_r27;
    void **var_r27_2;
    void *temp_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r4_10;
    void *temp_r4_5;
    void *temp_r4_7;
    void *temp_r5;

    temp_r30 = M2C_FIELD(arg0, u32 *, 0x10);
    temp_r31 = M2C_FIELD(arg0, void ***, 8);
    /* draft: did not compile: temp_r29 = arg0 + 0x3B; */
    if (temp_r30 <= 0xFFFU) {
        M2C_FIELD(arg0, u8 *, 0x3B) = (u8) M2C_FIELD((temp_r31 + temp_r30), u8 *, 0x30);
    } else if (temp_r30 <= 0x1FFFU) {
        M2C_FIELD(arg0, u8 *, 0x3B) = (u8) M2C_FIELD((temp_r31 + temp_r30), u8 *, 0x30);
    } else if (temp_r30 <= 0x20FFU) {
        var_r27 = temp_r31 + ((M2C_FIELD((temp_r30 + (temp_r31 + 0x80000)), u8 *, -0x1CFC) * 0x24) + 0x80034);
        if ((void *) *var_r27 == NULL) {
            M2C_FIELD(arg0, u8 *, 0x3B) = 0xFFU;
        } else {
            M2C_FIELD(arg0, u8 *, 0x3B) = 0U;
loop_9:
            temp_r3 = *var_r27;
            if (temp_r3 != NULL) {
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(s32, void *), 0x18)(temp_r30 - 0x2000, temp_r29);
                var_r27 += 4;
                goto loop_9;
            }
        }
    } else if (temp_r30 < (u32) M2C_FIELD(temp_r31, u32 *, 0x80030)) {
        temp_r3_2 = M2C_FIELD(temp_r31, void **, 0);
        temp_r4 = M2C_FIELD(temp_r3_2, s32 *, 8);
        if (temp_r4 & 2) {
            M2C_FIELD(arg0, u8 *, 0x3B) = (u8) M2C_FIELD((temp_r31 + temp_r30), u8 *, 0x30);
        } else {
            if (!(temp_r4 & 0x200)) {
                temp_r4_2 = M2C_FIELD(temp_r3_2, u8 *, 0x2E);
                if (!(temp_r4_2 & 8)) {
                    M2C_FIELD(temp_r3_2, u8 *, 0x2E) = (u8) (temp_r4_2 | 8);
                    fn_800708D4(2);
                }
            }
            M2C_FIELD(arg0, u8 *, 0x3B) = (u8) M2C_FIELD((temp_r31 + temp_r30), u8 *, 0x30);
        }
    } else if (temp_r30 <= 0x1FFFFFU) {
        temp_r3_3 = M2C_FIELD(temp_r31, void **, 0);
        temp_r4_3 = M2C_FIELD(temp_r3_3, s32 *, 8);
        if (!(temp_r4_3 & 2) && !(temp_r4_3 & 0x200)) {
            temp_r4_4 = M2C_FIELD(temp_r3_3, u8 *, 0x2E);
            if (!(temp_r4_4 & 8)) {
                M2C_FIELD(temp_r3_3, u8 *, 0x2E) = (u8) (temp_r4_4 | 8);
                fn_800708D4(2);
            }
        }
        M2C_FIELD(arg0, u8 *, 0x3B) = (u8) M2C_FIELD((temp_r31 + (temp_r30 & 0x7FFFF)), u8 *, 0x30);
    } else {
        temp_r4_5 = M2C_FIELD(temp_r31, void **, 0);
        M2C_FIELD(temp_r4_5, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_5, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r4_5, u32 *, 0x14) = temp_r30;
        M2C_FIELD(temp_r4_5, s32 *, 0x18) = 0;
        M2C_FIELD(temp_r4_5, s32 *, 0x1C) = 0;
    }
    fn_80039194(arg0, temp_r29, M2C_FIELD(arg0, u8 *, 0xF));
    temp_r30_2 = M2C_FIELD(arg0, u32 *, 0x10);
    temp_r31_2 = M2C_FIELD(arg0, u8 *, 0x3B);
    temp_r4_6 = M2C_FIELD(arg0, void ***, 8);
    if (temp_r30_2 <= 0xFFFU) {
        if (temp_r30_2 >= (u32) lbl_8034E9DC) {
            M2C_FIELD((temp_r4_6 + temp_r30_2), u8 *, 0x30) = temp_r31_2;
            return;
        }
        temp_r4_7 = *temp_r4_6;
        M2C_FIELD(temp_r4_7, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_7, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r4_7, u32 *, 0x14) = temp_r30_2;
        M2C_FIELD(temp_r4_7, s32 *, 0x18) = (s32) temp_r31_2;
        M2C_FIELD(temp_r4_7, s32 *, 0x1C) = 1;
        return;
    }
    if (temp_r30_2 <= 0x1FFFU) {
        M2C_FIELD((temp_r4_6 + temp_r30_2), u8 *, 0x30) = temp_r31_2;
        return;
    }
    if (temp_r30_2 <= 0x20FFU) {
        var_r27_2 = temp_r4_6 + ((M2C_FIELD((temp_r30_2 + (temp_r4_6 + 0x80000)), u8 *, -0x1CFC) * 0x24) + 0x80034);
        if ((void *) *var_r27_2 == NULL) {
            temp_r5 = *temp_r4_6;
            M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) | 0x20);
            M2C_FIELD(temp_r5, u32 *, 0x14) = (u32) (temp_r30_2 - 0x2000);
            M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) temp_r31_2;
            M2C_FIELD(temp_r5, s32 *, 0x1C) = 1;
            return;
        }
loop_36:
        temp_r3_4 = *var_r27_2;
        if (temp_r3_4 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3_4, void **, 4), M2C_UNK (**)(s32, u8), 0x1C)(temp_r30_2 - 0x2000, temp_r31_2);
            var_r27_2 += 4;
            goto loop_36;
        }
        return;
    }
    if (temp_r30_2 <= 0x1FFFFFU) {
        temp_r3_5 = *temp_r4_6;
        temp_r4_8 = M2C_FIELD(temp_r3_5, s32 *, 8);
        if (!(temp_r4_8 & 0x200) && !(temp_r4_8 & 2)) {
            temp_r4_9 = M2C_FIELD(temp_r3_5, u8 *, 0x2E);
            if (!(temp_r4_9 & 8)) {
                M2C_FIELD(temp_r3_5, u8 *, 0x2E) = (u8) (temp_r4_9 | 8);
                fn_800708D4(2);
            }
        }
    } else {
        temp_r4_10 = *temp_r4_6;
        M2C_FIELD(temp_r4_10, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_10, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r4_10, u32 *, 0x14) = temp_r30_2;
        M2C_FIELD(temp_r4_10, s32 *, 0x18) = (s32) temp_r31_2;
        M2C_FIELD(temp_r4_10, s32 *, 0x1C) = 1;
    }
}

void fn_8004B128(void *arg0, M2C_UNK arg_sp0) {
    s32 temp_r4;
    s32 temp_r4_3;
    s32 temp_r4_8;
    u32 temp_r30;
    u32 temp_r30_2;
    u8 temp_r31_2;
    u8 temp_r4_2;
    u8 temp_r4_4;
    u8 temp_r4_9;
    void **temp_r31;
    void **temp_r4_6;
    void **var_r27;
    void **var_r27_2;
    void *temp_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r4_10;
    void *temp_r4_5;
    void *temp_r4_7;
    void *temp_r5;

    temp_r30 = M2C_FIELD(arg0, u32 *, 0x10);
    temp_r31 = M2C_FIELD(arg0, void ***, 8);
    /* draft: did not compile: temp_r29 = arg0 + 0x3B; */
    if (temp_r30 <= 0xFFFU) {
        M2C_FIELD(arg0, u8 *, 0x3B) = (u8) M2C_FIELD((temp_r31 + temp_r30), u8 *, 0x30);
    } else if (temp_r30 <= 0x1FFFU) {
        M2C_FIELD(arg0, u8 *, 0x3B) = (u8) M2C_FIELD((temp_r31 + temp_r30), u8 *, 0x30);
    } else if (temp_r30 <= 0x20FFU) {
        var_r27 = temp_r31 + ((M2C_FIELD((temp_r30 + (temp_r31 + 0x80000)), u8 *, -0x1CFC) * 0x24) + 0x80034);
        if ((void *) *var_r27 == NULL) {
            M2C_FIELD(arg0, u8 *, 0x3B) = 0xFFU;
        } else {
            M2C_FIELD(arg0, u8 *, 0x3B) = 0U;
loop_9:
            temp_r3 = *var_r27;
            if (temp_r3 != NULL) {
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(s32, void *), 0x18)(temp_r30 - 0x2000, temp_r29);
                var_r27 += 4;
                goto loop_9;
            }
        }
    } else if (temp_r30 < (u32) M2C_FIELD(temp_r31, u32 *, 0x80030)) {
        temp_r3_2 = M2C_FIELD(temp_r31, void **, 0);
        temp_r4 = M2C_FIELD(temp_r3_2, s32 *, 8);
        if (temp_r4 & 2) {
            M2C_FIELD(arg0, u8 *, 0x3B) = (u8) M2C_FIELD((temp_r31 + temp_r30), u8 *, 0x30);
        } else {
            if (!(temp_r4 & 0x200)) {
                temp_r4_2 = M2C_FIELD(temp_r3_2, u8 *, 0x2E);
                if (!(temp_r4_2 & 8)) {
                    M2C_FIELD(temp_r3_2, u8 *, 0x2E) = (u8) (temp_r4_2 | 8);
                    fn_800708D4(2);
                }
            }
            M2C_FIELD(arg0, u8 *, 0x3B) = (u8) M2C_FIELD((temp_r31 + temp_r30), u8 *, 0x30);
        }
    } else if (temp_r30 <= 0x1FFFFFU) {
        temp_r3_3 = M2C_FIELD(temp_r31, void **, 0);
        temp_r4_3 = M2C_FIELD(temp_r3_3, s32 *, 8);
        if (!(temp_r4_3 & 2) && !(temp_r4_3 & 0x200)) {
            temp_r4_4 = M2C_FIELD(temp_r3_3, u8 *, 0x2E);
            if (!(temp_r4_4 & 8)) {
                M2C_FIELD(temp_r3_3, u8 *, 0x2E) = (u8) (temp_r4_4 | 8);
                fn_800708D4(2);
            }
        }
        M2C_FIELD(arg0, u8 *, 0x3B) = (u8) M2C_FIELD((temp_r31 + (temp_r30 & 0x7FFFF)), u8 *, 0x30);
    } else {
        temp_r4_5 = M2C_FIELD(temp_r31, void **, 0);
        M2C_FIELD(temp_r4_5, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_5, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r4_5, u32 *, 0x14) = temp_r30;
        M2C_FIELD(temp_r4_5, s32 *, 0x18) = 0;
        M2C_FIELD(temp_r4_5, s32 *, 0x1C) = 0;
    }
    fn_80039194(arg0, temp_r29, M2C_FIELD(arg0, u8 *, 0x37));
    temp_r30_2 = M2C_FIELD(arg0, u32 *, 0x10);
    temp_r31_2 = M2C_FIELD(arg0, u8 *, 0x3B);
    temp_r4_6 = M2C_FIELD(arg0, void ***, 8);
    if (temp_r30_2 <= 0xFFFU) {
        if (temp_r30_2 >= (u32) lbl_8034E9DC) {
            M2C_FIELD((temp_r4_6 + temp_r30_2), u8 *, 0x30) = temp_r31_2;
            return;
        }
        temp_r4_7 = *temp_r4_6;
        M2C_FIELD(temp_r4_7, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_7, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r4_7, u32 *, 0x14) = temp_r30_2;
        M2C_FIELD(temp_r4_7, s32 *, 0x18) = (s32) temp_r31_2;
        M2C_FIELD(temp_r4_7, s32 *, 0x1C) = 1;
        return;
    }
    if (temp_r30_2 <= 0x1FFFU) {
        M2C_FIELD((temp_r4_6 + temp_r30_2), u8 *, 0x30) = temp_r31_2;
        return;
    }
    if (temp_r30_2 <= 0x20FFU) {
        var_r27_2 = temp_r4_6 + ((M2C_FIELD((temp_r30_2 + (temp_r4_6 + 0x80000)), u8 *, -0x1CFC) * 0x24) + 0x80034);
        if ((void *) *var_r27_2 == NULL) {
            temp_r5 = *temp_r4_6;
            M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) | 0x20);
            M2C_FIELD(temp_r5, u32 *, 0x14) = (u32) (temp_r30_2 - 0x2000);
            M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) temp_r31_2;
            M2C_FIELD(temp_r5, s32 *, 0x1C) = 1;
            return;
        }
loop_36:
        temp_r3_4 = *var_r27_2;
        if (temp_r3_4 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3_4, void **, 4), M2C_UNK (**)(s32, u8), 0x1C)(temp_r30_2 - 0x2000, temp_r31_2);
            var_r27_2 += 4;
            goto loop_36;
        }
        return;
    }
    if (temp_r30_2 <= 0x1FFFFFU) {
        temp_r3_5 = *temp_r4_6;
        temp_r4_8 = M2C_FIELD(temp_r3_5, s32 *, 8);
        if (!(temp_r4_8 & 0x200) && !(temp_r4_8 & 2)) {
            temp_r4_9 = M2C_FIELD(temp_r3_5, u8 *, 0x2E);
            if (!(temp_r4_9 & 8)) {
                M2C_FIELD(temp_r3_5, u8 *, 0x2E) = (u8) (temp_r4_9 | 8);
                fn_800708D4(2);
            }
        }
    } else {
        temp_r4_10 = *temp_r4_6;
        M2C_FIELD(temp_r4_10, s32 *, 8) = (s32) (M2C_FIELD(temp_r4_10, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r4_10, u32 *, 0x14) = temp_r30_2;
        M2C_FIELD(temp_r4_10, s32 *, 0x18) = (s32) temp_r31_2;
        M2C_FIELD(temp_r4_10, s32 *, 0x1C) = 1;
    }
}

void fn_8004B448(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8004B8F4(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8004BDA0(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8004BF88(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8004C170(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8004C358(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */
