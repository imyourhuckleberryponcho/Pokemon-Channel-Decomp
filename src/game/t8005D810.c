/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_8003A700(u8);
M2C_UNK fn_800441A0(void *);
M2C_UNK fn_800708D4(M2C_UNK);
extern u32 lbl_8034E9DC;
M2C_UNK fn_8003D3B0(u8, u8);

void fn_8005D810(u8 *arg1);
void fn_8005D83C(s32 arg0);
void fn_8005D860(void *arg0, M2C_UNK arg_sp0);
void fn_8005DA40(void *arg0, M2C_UNK arg_sp0);
void fn_8005DD5C(void *arg0);
void fn_8005DD78(s32 *arg0);
void fn_8005DD88(void);
void fn_8005DD8C(void *arg0);
void fn_8005DDE8(void *arg0);
void fn_8005DE44(void *arg0);
void fn_8005DEA0(void *arg0);
void fn_8005DEFC(void *arg0);
void fn_8005DF58(void *arg0);
void fn_8005DFB4(void *arg0);
void fn_8005E010(void *arg0);
void fn_8005E06C(void *arg0);
void fn_8005E0C8(void *arg0);
void fn_8005E0F0(void *arg0);
void fn_8005E118(void *arg0);
void fn_8005E140(void *arg0);
void fn_8005E168(void *arg0);
void fn_8005E174(void *arg0);
void fn_8005E180(void *arg0);
void fn_8005E18C(void *arg0);
void fn_8005E1A4(void *arg0);
void fn_8005E1C8(void *arg0);
void fn_8005E1D4(void *arg0);
void fn_8005E1E0(void *arg0);
void fn_8005E1EC(void *arg0);
void fn_8005E1F8(void *arg0);
void fn_8005E204(void *arg0);
void fn_8005E210(void *arg0);

void fn_8005D810(u8 *arg1) {
    u8 temp_r5;

    temp_r5 = *arg1;
    *arg1 = 0;
    fn_8003A700(temp_r5);
}

void fn_8005D83C(s32 arg0) {
    /* draft: did not compile: fn_8005D810(arg0 + 0xE); */
}

void fn_8005D860(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

#pragma push
#pragma dont_inline on
void fn_8005DA40(void *arg0, M2C_UNK arg_sp0) {
    s32 temp_r4;
    s32 temp_r4_3;
    s32 temp_r4_8;
    u32 temp_r30;
    void *temp_r29;
    u8 temp_r31_2;
    u8 temp_r4_2;
    u8 temp_r4_4;
    u8 temp_r4_9;
    void **temp_r31;
    void **temp_r4_6;
    void **var_r27;
    void **var_r27_2;
    s32 temp_r30_2;
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
    fn_8005D810((unsigned char *)(arg0));
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
#pragma pop

void fn_8005DD5C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xE) = (s8) (0xFF & -(((u8) M2C_FIELD(arg0, u8 *, 0xF) >> 7U) & 1));
}

void fn_8005DD78(s32 *arg0) {
    *arg0 |= 2;
}

void fn_8005DD88(void) {

}

void fn_8005DD8C(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xE) & M2C_FIELD(arg0, u8 *, 0x37);
    M2C_FIELD(arg0, u8 *, 0xE) = temp_r4;
    if (temp_r4 & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if (temp_r4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005DDE8(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x13) & M2C_FIELD(arg0, u8 *, 0x37);
    M2C_FIELD(arg0, u8 *, 0x13) = temp_r4;
    if (temp_r4 & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if (temp_r4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005DE44(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x12) & M2C_FIELD(arg0, u8 *, 0x37);
    M2C_FIELD(arg0, u8 *, 0x12) = temp_r4;
    if (temp_r4 & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if (temp_r4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005DEA0(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xE) | M2C_FIELD(arg0, u8 *, 0x37);
    M2C_FIELD(arg0, u8 *, 0xE) = temp_r4;
    if (temp_r4 & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if (temp_r4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005DEFC(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x13) | M2C_FIELD(arg0, u8 *, 0x37);
    M2C_FIELD(arg0, u8 *, 0x13) = temp_r4;
    if (temp_r4 & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if (temp_r4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005DF58(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x12) | M2C_FIELD(arg0, u8 *, 0x37);
    M2C_FIELD(arg0, u8 *, 0x12) = temp_r4;
    if (temp_r4 & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if (temp_r4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005DFB4(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xE) ^ M2C_FIELD(arg0, u8 *, 0x37);
    M2C_FIELD(arg0, u8 *, 0xE) = temp_r4;
    if (temp_r4 & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if (temp_r4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005E010(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x13) ^ M2C_FIELD(arg0, u8 *, 0x37);
    M2C_FIELD(arg0, u8 *, 0x13) = temp_r4;
    if (temp_r4 & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if (temp_r4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005E06C(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x12) ^ M2C_FIELD(arg0, u8 *, 0x37);
    M2C_FIELD(arg0, u8 *, 0x12) = temp_r4;
    if (temp_r4 & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
    }
    if (temp_r4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8005E0C8(void *arg0) {
    u16 tmp1 = M2C_FIELD(arg0, u8 *, 0x37);

    fn_8003D3B0(M2C_FIELD(arg0, u8 *, 0xE), tmp1);}

void fn_8005E0F0(void *arg0) {
    u16 tmp1 = M2C_FIELD(arg0, u8 *, 0x37);

    fn_8003D3B0(M2C_FIELD(arg0, u8 *, 0x13), tmp1);}

void fn_8005E118(void *arg0) {
    u16 tmp1 = M2C_FIELD(arg0, u8 *, 0x37);

    fn_8003D3B0(M2C_FIELD(arg0, u8 *, 0x12), tmp1);}

void fn_8005E140(void *arg0) {
    u16 tmp1 = M2C_FIELD(arg0, u8 *, 0x37);

    fn_8003D3B0(M2C_FIELD(arg0, u8 *, 0x2A), tmp1);}

void fn_8005E168(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) M2C_FIELD(arg0, u8 *, 0x2A);
}

void fn_8005E174(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) M2C_FIELD(arg0, u8 *, 0x2C);
}

void fn_8005E180(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x2A) = (u8) M2C_FIELD(arg0, u8 *, 0xF);
}

void fn_8005E18C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 1);
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) M2C_FIELD(arg0, u8 *, 0xF);
}

void fn_8005E1A4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 1);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 4);
    M2C_FIELD(arg0, u8 *, 0x1C) = (u8) M2C_FIELD(arg0, u8 *, 0x37);
}

void fn_8005E1C8(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x11) = (u8) M2C_FIELD(arg0, u8 *, 0x37);
}

void fn_8005E1D4(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x15) = (u8) M2C_FIELD(arg0, u8 *, 0x37);
}

void fn_8005E1E0(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x19) = (u8) M2C_FIELD(arg0, u8 *, 0x37);
}

void fn_8005E1EC(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) M2C_FIELD(arg0, u8 *, 0x21);
}

void fn_8005E1F8(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) M2C_FIELD(arg0, u8 *, 0x11);
}

void fn_8005E204(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) M2C_FIELD(arg0, u8 *, 0x15);
}

void fn_8005E210(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) M2C_FIELD(arg0, u8 *, 0x19);
}
