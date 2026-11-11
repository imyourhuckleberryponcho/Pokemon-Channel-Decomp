/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800708D4(M2C_UNK);
extern u32 lbl_8034E9DC;

void fn_800441A0(void *arg0);
void fn_80044338(void *arg0, M2C_UNK arg_sp0);
void fn_800444FC(void *arg0, M2C_UNK arg_sp0);
void fn_800446C0(void *arg0);
void fn_800446FC(void *arg0);
void fn_80044738(void *arg0);
void fn_80044774(void *arg0);
void fn_800447B0(void *arg0);
void fn_800447EC(void *arg0, M2C_UNK arg_sp0);
void fn_800449F8(void *arg0, M2C_UNK arg_sp0);
void fn_80044D40(void *arg0);
void fn_80044D94(void *arg0);
void fn_80044DD0(void *arg0);
void fn_80044E0C(void *arg0);
void fn_80044E48(void *arg0);
void fn_80044E84(void *arg0);
void fn_80044EC0(void *arg0, M2C_UNK arg_sp0);
void fn_800450CC(void *arg0, M2C_UNK arg_sp0);
void fn_80045414(void *arg0);
void fn_80045468(void *arg0);
void fn_800454A4(void *arg0);
void fn_800454E0(void *arg0);
void fn_8004551C(void *arg0);
void fn_80045558(void *arg0);
void fn_800455B4(void *arg0, M2C_UNK arg_sp0);
void fn_800457C8(void *arg0);
void fn_80045824(void *arg0);
void fn_80045880(void *arg0);
void fn_800458BC(void *arg0);
void fn_800458F8(void *arg0);
void fn_80045934(void *arg0);
void fn_80045970(void *arg0);

void fn_800441A0(void *arg0) {
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

    temp_r31 = M2C_FIELD(arg0, u8 *, 0x3B);
    M2C_FIELD(arg0, u8 *, 0x29) = (u8) M2C_FIELD(arg0, u8 *, 0x11);
    M2C_FIELD(arg0, u8 *, 0x2B) = (u8) M2C_FIELD(arg0, u8 *, 0x37);
    temp_r30 = M2C_FIELD(arg0, u32 *, 0x28);
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

void fn_80044338(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_800444FC(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_800446C0(void *arg0) {
    u8 temp_r4;

    temp_r4 = 1;
    temp_r4 += M2C_FIELD(arg0, u8 *, 0xF);
    M2C_FIELD(arg0, u8 *, 0xF) = temp_r4;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_800446FC(void *arg0) {
    u8 temp_r4;

    temp_r4 = 1;
    temp_r4 += M2C_FIELD(arg0, u8 *, 0xE);
    M2C_FIELD(arg0, u8 *, 0xE) = temp_r4;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_80044738(void *arg0) {
    u8 temp_r4;

    temp_r4 = 1;
    temp_r4 += M2C_FIELD(arg0, u8 *, 0x13);
    M2C_FIELD(arg0, u8 *, 0x13) = temp_r4;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_80044774(void *arg0) {
    u8 temp_r4;

    temp_r4 = 1;
    temp_r4 += M2C_FIELD(arg0, u8 *, 0x12);
    M2C_FIELD(arg0, u8 *, 0x12) = temp_r4;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_800447B0(void *arg0) {
    u8 temp_r4;

    temp_r4 = 1;
    temp_r4 += M2C_FIELD(arg0, u8 *, 0x2A);
    M2C_FIELD(arg0, u8 *, 0x2A) = temp_r4;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_800447EC(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_800449F8(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80044D40(void *arg0) {
    u16 temp_r0;
    s16 temp_r4;
    u16 var_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x26) + 1;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
    }
    M2C_FIELD(arg0, u16 *, 0x26) = temp_r4;
    var_r4 = temp_r4;
    temp_r0 = M2C_FIELD(arg0, u16 *, 0x2E);
    if ((s32) temp_r0 <= (s32) var_r4) {
        var_r4 = temp_r0;
    }
    M2C_FIELD(arg0, u16 *, 0x2E) = var_r4;
}

void fn_80044D94(void *arg0) {
    u8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xF);
    temp_r4 -= 1;
    M2C_FIELD(arg0, u8 *, 0xF) = temp_r4;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_80044DD0(void *arg0) {
    u8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xE);
    temp_r4 -= 1;
    M2C_FIELD(arg0, u8 *, 0xE) = temp_r4;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_80044E0C(void *arg0) {
    u8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x13);
    temp_r4 -= 1;
    M2C_FIELD(arg0, u8 *, 0x13) = temp_r4;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_80044E48(void *arg0) {
    u8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x12);
    temp_r4 -= 1;
    M2C_FIELD(arg0, u8 *, 0x12) = temp_r4;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_80044E84(void *arg0) {
    u8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x2A);
    temp_r4 -= 1;
    M2C_FIELD(arg0, u8 *, 0x2A) = temp_r4;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_80044EC0(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_800450CC(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80045414(void *arg0) {
    u16 temp_r0;
    s16 temp_r4;
    u16 var_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x26) - 1;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
    }
    M2C_FIELD(arg0, u16 *, 0x26) = temp_r4;
    var_r4 = temp_r4;
    temp_r0 = M2C_FIELD(arg0, u16 *, 0x2E);
    if ((s32) temp_r0 <= (s32) var_r4) {
        var_r4 = temp_r0;
    }
    M2C_FIELD(arg0, u16 *, 0x2E) = var_r4;
}

void fn_80045468(void *arg0) {
    u16 temp_r4;

    temp_r4 = 1;
    temp_r4 += M2C_FIELD(arg0, u16 *, 0xE);
    M2C_FIELD(arg0, u16 *, 0xE) = temp_r4;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_800454A4(void *arg0) {
    u16 temp_r4;

    temp_r4 = 1;
    temp_r4 += M2C_FIELD(arg0, u16 *, 0x12);
    M2C_FIELD(arg0, u16 *, 0x12) = temp_r4;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_800454E0(void *arg0) {
    u16 temp_r4;

    temp_r4 = 1;
    temp_r4 += M2C_FIELD(arg0, u16 *, 0x16);
    M2C_FIELD(arg0, u16 *, 0x16) = temp_r4;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_8004551C(void *arg0) {
    u16 temp_r4;

    temp_r4 = 1;
    temp_r4 += M2C_FIELD(arg0, u16 *, 0x1A);
    M2C_FIELD(arg0, u16 *, 0x1A) = temp_r4;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_80045558(void *arg0) {
    u8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xF) & M2C_FIELD(arg0, u8 *, 0xE);
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

void fn_800455B4(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_800457C8(void *arg0) {
    u8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xF) & M2C_FIELD(arg0, u8 *, 0x37);
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

void fn_80045824(void *arg0) {
    u8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0xE) & M2C_FIELD(arg0, u8 *, 0x37);
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

void fn_80045880(void *arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0xE);
    temp_r4 -= 1;
    M2C_FIELD(arg0, u16 *, 0xE) = temp_r4;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_800458BC(void *arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x12);
    temp_r4 -= 1;
    M2C_FIELD(arg0, u16 *, 0x12) = temp_r4;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_800458F8(void *arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x16);
    temp_r4 -= 1;
    M2C_FIELD(arg0, u16 *, 0x16) = temp_r4;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_80045934(void *arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x1A);
    temp_r4 -= 1;
    M2C_FIELD(arg0, u16 *, 0x1A) = temp_r4;
    if ((u8) (temp_r4 == 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_80045970(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 1);
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & M2C_FIELD(arg0, u8 *, 0x37));
}
