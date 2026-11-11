/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80048744();
M2C_UNK fn_800708D4(M2C_UNK);
extern u32 lbl_8034E9DC;
M2C_UNK fn_80045D44(s32);
M2C_UNK fn_80045D8C();
M2C_UNK fn_8004658C();
M2C_UNK fn_80048554(void *, u16);
M2C_UNK fn_80045A54(void *, u8);
M2C_UNK fn_800465BC();
M2C_UNK fn_80048598();
M2C_UNK fn_80039168(void *, void *, u8);
M2C_UNK fn_80039194(void *, void *, u8);

void fn_800488E4(void);
void fn_80048904(void *arg0);
void fn_80048924(void *arg0);
void fn_80048938(void *arg0);
void fn_800489A0(void *arg0);
void fn_800489B8(void *arg0, M2C_UNK arg_sp0);
void fn_80048CDC(void);
void fn_80048CFC(void *arg0);
void fn_80048D30(s32 arg0);
void fn_80048D6C(void);
void fn_80048D8C(s32 *arg0);
void fn_80048DD0(void);
void fn_80048DF0(void *arg0);
void fn_80048E28(void *arg0);
void fn_80048E70(void *arg0);
void fn_80048E94(void *arg0, u8 arg1);
void fn_80048EE8(void *arg0);
void fn_80048F2C(void);
void fn_80048F30(void *arg0, M2C_UNK arg_sp0);
void fn_80049118(void *arg0, M2C_UNK arg_sp0);
void fn_80049300(void *arg0, M2C_UNK arg_sp0);
void fn_800494E8(void *arg0, M2C_UNK arg_sp0);
void fn_800496D0(void *arg0, M2C_UNK arg_sp0);
void fn_800499F0(void *arg0, M2C_UNK arg_sp0);
void fn_80049D10(void *arg0, M2C_UNK arg_sp0);
void fn_8004A1BC(void *arg0, M2C_UNK arg_sp0);
void fn_8004A668(void *arg0, M2C_UNK arg_sp0);

void fn_800488E4(void) {
    fn_80048744();
}

void fn_80048904(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) ((M2C_FIELD(arg0, s16 *, 0x36) + M2C_FIELD(arg0, u16 *, 0x1E)) - 1);
}

void fn_80048924(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) M2C_FIELD(arg0, u16 *, 0x12);
}

void fn_80048938(void *arg0) {
    u8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xE) - 1;
    M2C_FIELD(arg0, u8 *, 0xE) = temp_r4;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
    }
    if (!(M2C_FIELD(arg0, u8 *, 0x2C) & 1)) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, u16 *, 0x1E)) - 1);
    }
}

void fn_800489A0(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0xF);
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) ((temp_r0 * 0x10) + ((s32) temp_r0 >> 4));
}

void fn_800489B8(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80048CDC(void) {
    fn_80048CFC((void *)(0));
}

void fn_80048CFC(void *arg0) {
    fn_80048D30((long)(0));
    M2C_FIELD(arg0, u8 *, 0x1C) = (u8) M2C_FIELD(arg0, u8 *, 0x21);
}

void fn_80048D30(s32 arg0) {
    fn_80045D44(arg0 + 0x1C);
    fn_80045D8C(arg0, arg0 + 0x21);
}

void fn_80048D6C(void) {
    fn_80048D8C((long *)(0));
}

void fn_80048D8C(s32 *arg0) {
    fn_80045D8C(arg0 + 0x2C);
    *arg0 |= 1;
    fn_80048CFC(arg0);
}

void fn_80048DD0(void) {
    fn_80048DF0((void *)(0));
}

void fn_80048DF0(void *arg0) {
    fn_80048CFC((void *)(0));
    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) + 2);
}

void fn_80048E28(void *arg0) {
    /* draft: did not compile: fn_8004658C(arg0 + 0x38); */
    M2C_FIELD(arg0, u8 *, 0x39) = (u8) M2C_FIELD(arg0, u8 *, 0x11);
    fn_80048554(arg0, (u16) M2C_FIELD(arg0, s32 *, 0x38));
}

void fn_80048E70(void *arg0) {
    /* draft: did not compile: fn_80048E94(M2C_FIELD(arg0, u8 *, 0x37)); */
}

void fn_80048E94(void *arg0, u8 arg1) {
    fn_80048598();
    fn_80045A54(arg0, M2C_FIELD(arg0, u8 *, 0x2C));
    /* draft: did not compile: fn_800465BC(arg0, arg1, arg0 + 0x1C); */
}

void fn_80048EE8(void *arg0) {
    /* draft: did not compile: fn_800465BC(M2C_FIELD(arg0, u8 *, 0x37), arg0 + 0x38); */
    M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) M2C_FIELD(arg0, u16 *, 0x3A);
}

void fn_80048F2C(void) {

}

void fn_80048F30(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80049118(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80049300(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_800494E8(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_800496D0(void *arg0, M2C_UNK arg_sp0) {
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
    fn_80039168(arg0, temp_r29, M2C_FIELD(arg0, u8 *, 0xF));
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

void fn_800499F0(void *arg0, M2C_UNK arg_sp0) {
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
    fn_80039168(arg0, temp_r29, M2C_FIELD(arg0, u8 *, 0x37));
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

void fn_80049D10(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8004A1BC(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8004A668(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */
