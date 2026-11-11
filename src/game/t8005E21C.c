/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800708D4(M2C_UNK);
extern u32 lbl_8034E9DC;
M2C_UNK fn_800484E4();

void fn_8005E21C(void *arg0);
void fn_8005E240(void *arg0);
void fn_8005E24C(void *arg0);
void fn_8005E258(void *arg0);
void fn_8005E264(void *arg0);
void fn_8005E434(void *arg0);
void fn_8005E604(void *arg0);
void fn_8005E7D4(void *arg0);
void fn_8005E9A4(void *arg0);
void fn_8005E9C8(void *arg0, u8 arg1);
void fn_8005EB64(void *arg0);
void fn_8005EB88(void *arg0);
void fn_8005EBAC(void *arg0);
void fn_8005EBD0(void *arg0);
void fn_8005EC40(void *arg0);
void fn_8005ED58(void *arg0);
void fn_8005EDA4(void *arg0);
void fn_8005EDF4(void *arg0);
void fn_8005EE44(void *arg0);
void fn_8005EE90(void *arg0);
void fn_8005EEC0(void *arg0);
void fn_8005EEF0(void *arg0);
void fn_8005EF20(void *arg0);
void fn_8005EF50(void *arg0);
void fn_8005EF80(void *arg0);
void fn_8005EFB0(void *arg0);
void fn_8005EFE0(void *arg0);
void fn_8005F010(void *arg0);
void fn_8005F040(void *arg0);
void fn_8005F070(void *arg0);
void fn_8005F0A0(void *arg0);
void fn_8005F0D0(void *arg0);

void fn_8005E21C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 1);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 4);
    M2C_FIELD(arg0, u8 *, 0x1C) = (u8) M2C_FIELD(arg0, u8 *, 0xF);
}

void fn_8005E240(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x11) = (u8) M2C_FIELD(arg0, u8 *, 0xF);
}

void fn_8005E24C(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x15) = (u8) M2C_FIELD(arg0, u8 *, 0xF);
}

void fn_8005E258(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x19) = (u8) M2C_FIELD(arg0, u8 *, 0xF);
}

void fn_8005E264(void *arg0) { } /* draft: stub */

void fn_8005E434(void *arg0) { } /* draft: stub */

void fn_8005E604(void *arg0) { } /* draft: stub */

void fn_8005E7D4(void *arg0) { } /* draft: stub */

void fn_8005E9A4(void *arg0) {
    /* draft: did not compile: fn_8005E9C8(M2C_FIELD(arg0, u8 *, 0xF)); */
}

void fn_8005E9C8(void *arg0, u8 arg1) {
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

    M2C_FIELD(arg0, u8 *, 0x35) = (u8) M2C_FIELD(arg0, u8 *, 0x11);
    temp_r31 = M2C_FIELD(arg0, u32 *, 0x34);
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

void fn_8005EB64(void *arg0) {
    /* draft: did not compile: fn_8005E9C8(M2C_FIELD(arg0, u8 *, 0xE)); */
}

void fn_8005EB88(void *arg0) {
    /* draft: did not compile: fn_8005E9C8(M2C_FIELD(arg0, u8 *, 0x13)); */
}

void fn_8005EBAC(void *arg0) {
    /* draft: did not compile: fn_8005E9C8(M2C_FIELD(arg0, u8 *, 0x12)); */
}

void fn_8005EBD0(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x12) = (u16) (M2C_FIELD(arg0, u8 *, 0x13) * M2C_FIELD(arg0, u8 *, 0xF));
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF9);
    if ((u16) M2C_FIELD(arg0, u16 *, 0x12) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
    }
    if (M2C_FIELD(arg0, u16 *, 0x12) & 0x8000) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
}

void fn_8005EC40(void *arg0) {
    u8 temp_r4;
    u8 temp_r5;
    void *temp_r3;
    s32 temp_r4_2;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0xF);
    if (temp_r5 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 0xC);
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFC);
        temp_r3 = M2C_FIELD(arg0, void **, 4);
        temp_r4 = M2C_FIELD(temp_r3, u8 *, 0x2D);
        if (!(temp_r4 & 8)) {
            M2C_FIELD(temp_r3, u8 *, 0x2D) = (u8) (temp_r4 | 8);
            fn_800708D4(1);
        }
    } else {
        temp_r4_2 = (s32) M2C_FIELD(arg0, u16 *, 0x12) / (s32) temp_r5;
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF9);
        if (temp_r4_2 < 0x100U) {
            M2C_FIELD(arg0, u16 *, 0x12) = (u8) (M2C_FIELD(arg0, u16 *, 0x12) % temp_r5);
            M2C_FIELD(arg0, u8 *, 0x13) = (u8) (u16) temp_r4_2;
            if ((u16) temp_r4_2 & 0x80) {
                M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
            } else {
                M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
            }
            if ((u16) temp_r4_2 == 0) {
                M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
                return;
            }
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
            return;
        }
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 0xC);
        if ((u8) M2C_FIELD(arg0, u8 *, 0x13) == 0) {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
            return;
        }
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
    }
}

void fn_8005ED58(void *arg0) {
    u8 temp_r4;
    u8 var_r0;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x2C);
    if (temp_r4 & 4) {
        var_r0 = (temp_r4 & 8) == 0;
    } else {
        var_r0 = (temp_r4 >> 3U) & 1;
    }
    if ((s32) var_r0 != 0) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, u16 *, 0x1E)) - 1);
    }
}

void fn_8005EDA4(void *arg0) {
    s32 temp_r5;
    u8 var_r4;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0x2C);
    if (temp_r5 & 4) {
        var_r4 = !(temp_r5 & 8);
    } else {
        var_r4 = (temp_r5 >> 3U) & 1;
    }
    if (((temp_r5 & 1) | var_r4) != 0) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, s16 *, 0x1E)) - 1);
    }
}

void fn_8005EDF4(void *arg0) {
    u8 temp_r5;
    u8 var_r4;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0x2C);
    if (temp_r5 & 4) {
        var_r4 = (temp_r5 & 8) == 0;
    } else {
        var_r4 = (temp_r5 >> 3U) & 1;
    }
    if (((temp_r5 & 1) | var_r4) == 0) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, u16 *, 0x1E)) - 1);
    }
}

void fn_8005EE44(void *arg0) {
    u8 temp_r4;
    u8 var_r0;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x2C);
    if (temp_r4 & 4) {
        var_r0 = (temp_r4 & 8) == 0;
    } else {
        var_r0 = (temp_r4 >> 3U) & 1;
    }
    if ((s32) var_r0 == 0) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, u16 *, 0x1E)) - 1);
    }
}

void fn_8005EE90(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) & 4) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, s16 *, 0x1E)) - 1);
    }
}

void fn_8005EEC0(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2C) & 4)) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, s16 *, 0x1E)) - 1);
    }
}

void fn_8005EEF0(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2C) & 8)) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, s16 *, 0x1E)) - 1);
    }
}

void fn_8005EF20(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) & 8) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, s16 *, 0x1E)) - 1);
    }
}

void fn_8005EF50(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2D) & 1) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, s16 *, 0x1E)) - 1);
    }
}

void fn_8005EF80(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2D) & 2) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, s16 *, 0x1E)) - 1);
    }
}

void fn_8005EFB0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2D) & 4) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, s16 *, 0x1E)) - 1);
    }
}

void fn_8005EFE0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2D) & 8) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, s16 *, 0x1E)) - 1);
    }
}

void fn_8005F010(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2D) & 1)) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, s16 *, 0x1E)) - 1);
    }
}

void fn_8005F040(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2D) & 2)) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, s16 *, 0x1E)) - 1);
    }
}

void fn_8005F070(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2D) & 4)) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, s16 *, 0x1E)) - 1);
    }
}

void fn_8005F0A0(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2D) & 8)) {
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (((s8) M2C_FIELD(arg0, u8 *, 0x37) + M2C_FIELD(arg0, s16 *, 0x1E)) - 1);
    }
}

void fn_8005F0D0(void *arg0) {
    u8 temp_r4;
    u8 var_r0;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x2C);
    if (temp_r4 & 4) {
        var_r0 = (temp_r4 & 8) == 0;
    } else {
        var_r0 = (temp_r4 >> 3U) & 1;
    }
    if ((s32) var_r0 != 0) {
        fn_800484E4();
    }
}
