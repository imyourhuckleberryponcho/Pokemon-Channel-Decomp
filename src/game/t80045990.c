/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800708D4(M2C_UNK);
extern u32 lbl_8034E9DC;
M2C_UNK fn_8004658C(s32);

void fn_80045990(void *arg0);
void fn_800459B0(void *arg0);
void fn_800459D0(void *arg0);
void fn_800459E8(s32 arg0);
void fn_80045A0C(u8 arg0, void *arg1);
void fn_80045A54(void *arg0, u8 arg1);
void fn_80045C0C(s32 arg0);
void fn_80045C30(s32 arg0);
void fn_80045C54(s32 arg0);
void fn_80045C78(void *arg0);
void fn_80045C9C(void *arg0);
void fn_80045CC0(void *arg0);
void fn_80045CFC(void *arg0);
void fn_80045D20(s32 arg0);
void fn_80045D44(s32 arg0, s32 arg1);
void fn_80045D8C(void *arg0, u8 *arg1, M2C_UNK arg_sp0);
void fn_80045F68(s32 arg0);
void fn_80045F8C(s32 arg0);
void fn_80045FB0(s32 arg0);
void fn_80045FD4(s32 arg0);
void fn_80045FF8(s32 arg0);
void fn_8004601C(s32 arg0);
void fn_80046058(s32 *arg0);
void fn_80046094(void *arg0);
void fn_800460A0(void *arg0);
void fn_800460AC(void *arg0);
void fn_800460B8(void *arg0);
void fn_800460C4(void *arg0);
void fn_800460D0(void *arg0);
void fn_80046258(void *arg0);
void fn_800463E0(void *arg0);
void fn_80046568(s32 arg0);

void fn_80045990(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 1);
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | M2C_FIELD(arg0, u8 *, 0x37));
}

void fn_800459B0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 1);
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) ^ M2C_FIELD(arg0, u8 *, 0x37));
}

void fn_800459D0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 1);
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) M2C_FIELD(arg0, u8 *, 0x37);
}

void fn_800459E8(s32 arg0) {
    fn_80045A0C((unsigned char)(arg0 + 0xC), (void *)(0));
}

void fn_80045A0C(u8 arg0, void *arg1) {
    /* draft: did not compile: fn_80045A54(M2C_FIELD(arg1, u8 *, 2)); */
    /* draft: did not compile: fn_80045A54(arg0, M2C_FIELD(arg1, u8 *, 3)); */
}

void fn_80045A54(void *arg0, u8 arg1) {
    s32 temp_r4_3;
    u16 temp_r0;
    s32 temp_r31;
    u16 temp_r4;
    u16 var_r0;
    u8 temp_r4_4;
    void **temp_r4_2;
    void **var_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r6;

    temp_r0 = M2C_FIELD(arg0, u16 *, 0x26) - 1;
    M2C_FIELD(arg0, u16 *, 0x26) = temp_r0;
    var_r0 = temp_r0;
    temp_r4 = M2C_FIELD(arg0, u16 *, 0x2E);
    if ((s32) temp_r4 <= (s32) var_r0) {
        var_r0 = temp_r4;
    }
    M2C_FIELD(arg0, u16 *, 0x2E) = var_r0;
    temp_r31 = M2C_FIELD(arg0, u16 *, 0x26);
    temp_r4_2 = M2C_FIELD(arg0, void ***, 8);
    if (temp_r31 <= 0xFFFU) {
        if (temp_r31 >= (u32) lbl_8034E9DC) {
            M2C_FIELD((temp_r4_2 + temp_r31), u8 *, 0x30) = arg1;
            return;
        }
        temp_r5 = *temp_r4_2;
        M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r5, s32 *, 0x14) = (s32) temp_r31;
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) arg1;
        M2C_FIELD(temp_r5, s32 *, 0x1C) = 1;
        return;
    }
    if (temp_r31 <= 0x1FFFU) {
        M2C_FIELD((temp_r4_2 + temp_r31), u8 *, 0x30) = arg1;
        return;
    }
    if (temp_r31 <= 0x20FFU) {
        var_r29 = temp_r4_2 + ((M2C_FIELD((temp_r31 + (temp_r4_2 + 0x80000)), u8 *, -0x1CFC) * 0x24) + 0x80034);
        if ((void *) *var_r29 == NULL) {
            temp_r6 = *temp_r4_2;
            M2C_FIELD(temp_r6, s32 *, 8) = (s32) (M2C_FIELD(temp_r6, s32 *, 8) | 0x20);
            M2C_FIELD(temp_r6, s32 *, 0x14) = (s32) (temp_r31 - 0x2000);
            M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) arg1;
            M2C_FIELD(temp_r6, s32 *, 0x1C) = 1;
            return;
        }
loop_13:
        temp_r3 = *var_r29;
        if (temp_r3 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(s32, u8), 0x1C)(temp_r31 - 0x2000, arg1);
            var_r29 += 4;
            goto loop_13;
        }
        return;
    }
    if (temp_r31 <= 0x1FFFFFU) {
        temp_r3_2 = *temp_r4_2;
        temp_r4_3 = M2C_FIELD(temp_r3_2, s32 *, 8);
        if (!(temp_r4_3 & 0x200) && !(temp_r4_3 & 2)) {
            temp_r4_4 = M2C_FIELD(temp_r3_2, u8 *, 0x2E);
            if (!(temp_r4_4 & 8)) {
                M2C_FIELD(temp_r3_2, u8 *, 0x2E) = (u8) (temp_r4_4 | 8);
                fn_800708D4(2);
            }
        }
    } else {
        temp_r5_2 = *temp_r4_2;
        M2C_FIELD(temp_r5_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r5_2, s32 *, 8) | 0x20);
        M2C_FIELD(temp_r5_2, s32 *, 0x14) = (s32) temp_r31;
        M2C_FIELD(temp_r5_2, s32 *, 0x18) = (s32) arg1;
        M2C_FIELD(temp_r5_2, s32 *, 0x1C) = 1;
    }
}

void fn_80045C0C(s32 arg0) {
    fn_80045A0C((unsigned char)(arg0 + 0x10), (void *)(0));
}

void fn_80045C30(s32 arg0) {
    fn_80045A0C((unsigned char)(arg0 + 0x14), (void *)(0));
}

void fn_80045C54(s32 arg0) {
    fn_80045A0C((unsigned char)(arg0 + 0x18), (void *)(0));
}

void fn_80045C78(void *arg0) {
    /* draft: did not compile: fn_80045A54(M2C_FIELD(arg0, u8 *, 0x2A)); */
}

void fn_80045C9C(void *arg0) {
    /* draft: did not compile: fn_80045A54(M2C_FIELD(arg0, u8 *, 0x11)); */
}

void fn_80045CC0(void *arg0) {
    /* draft: did not compile: fn_80045A54(M2C_FIELD(arg0, u8 *, 0x15)); */
    /* draft: did not compile: fn_80045A54((u8) arg0, M2C_FIELD(arg0, u8 *, 0x19)); */
}

void fn_80045CFC(void *arg0) {
    /* draft: did not compile: fn_80045A54(M2C_FIELD(arg0, u8 *, 0x2C)); */
}

void fn_80045D20(s32 arg0) {
    fn_80045D44((long)(arg0 + 0xC), (long)(0));
}

void fn_80045D44(s32 arg0, s32 arg1) {
    /* draft: did not compile: fn_80045D8C(arg1 + 3); */
    /* draft: did not compile: fn_80045D8C(arg0, arg1 + 2); */
}

void fn_80045D8C(void *arg0, u8 *arg1, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80045F68(s32 arg0) {
    fn_80045D44((long)(arg0 + 0x10), (long)(0));
}

void fn_80045F8C(s32 arg0) {
    fn_80045D44((long)(arg0 + 0x14), (long)(0));
}

void fn_80045FB0(s32 arg0) {
    fn_80045D44((long)(arg0 + 0x18), (long)(0));
}

void fn_80045FD4(s32 arg0) {
    /* draft: did not compile: fn_80045D8C(arg0 + 0x2A); */
}

void fn_80045FF8(s32 arg0) {
    /* draft: did not compile: fn_80045D8C(arg0 + 0x11); */
}

void fn_8004601C(s32 arg0) {
    /* draft: did not compile: fn_80045D8C(arg0 + 0x19); */
    /* draft: did not compile: fn_80045D8C(arg0, arg0 + 0x15); */
}

void fn_80046058(s32 *arg0) {
    fn_80045D8C((void *)(arg0 + 0x2C), (unsigned char *)(0), (long)(0));
    *arg0 |= 1;
}

void fn_80046094(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) M2C_FIELD(arg0, u8 *, 0x37);
}

void fn_800460A0(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) M2C_FIELD(arg0, u8 *, 0x37);
}

void fn_800460AC(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x13) = (u8) M2C_FIELD(arg0, u8 *, 0x37);
}

void fn_800460B8(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x12) = (u8) M2C_FIELD(arg0, u8 *, 0x37);
}

void fn_800460C4(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x2A) = (u8) M2C_FIELD(arg0, u8 *, 0x37);
}

void fn_800460D0(void *arg0) {
    s32 temp_r4_3;
    u8 temp_r31;
    u8 temp_r4_4;
    void **temp_r4;
    void **var_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4_2;
    void *temp_r4_5;
    void *temp_r5;
    s32 temp_r30;

    temp_r30 = M2C_FIELD(arg0, u32 *, 0x10);
    temp_r31 = M2C_FIELD(arg0, u8 *, 0x37);
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

void fn_80046258(void *arg0) {
    s32 temp_r4_3;
    u8 temp_r31;
    u8 temp_r4_4;
    void **temp_r4;
    void **var_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4_2;
    void *temp_r4_5;
    void *temp_r5;
    s32 temp_r30;

    temp_r30 = M2C_FIELD(arg0, u32 *, 0x14);
    temp_r31 = M2C_FIELD(arg0, u8 *, 0x37);
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

void fn_800463E0(void *arg0) {
    s32 temp_r4_3;
    u8 temp_r31;
    u8 temp_r4_4;
    void **temp_r4;
    void **var_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4_2;
    void *temp_r4_5;
    void *temp_r5;
    s32 temp_r30;

    temp_r30 = M2C_FIELD(arg0, u32 *, 0x18);
    temp_r31 = M2C_FIELD(arg0, u8 *, 0x37);
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

void fn_80046568(s32 arg0) {
    fn_8004658C(arg0 + 0xC);
}
