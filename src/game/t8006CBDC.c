/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK fn_80068630;
extern M2C_UNK lbl_801CDA40;
M2C_UNK fn_80068678(u8, u8);
M2C_UNK fn_800704AC(u32);

void fn_8006CBDC(void *arg0, s32 arg1, u8 arg2);
void fn_8006CC48(void *arg0);
void fn_8006CD5C(void);
void fn_8006CD60(void);
void fn_8006CD64(s32 arg0, u32 arg1, u8 *arg2);
void fn_8006CEBC(void *arg0, u32 arg1, u8 arg2);
void fn_8006D3D4(void *arg0);
void fn_8006D3E8(void);
void fn_8006D3EC(void);
void fn_8006D3F0(void *arg0, s32 arg1, u8 *arg2);
void fn_8006D41C(void *arg0, s32 arg1, u8 arg2);
void fn_8006D460(void *arg0);
void fn_8006D474(void);
void fn_8006D478(void);
void fn_8006D47C(void *arg0, u32 arg1, u8 *arg2);
void fn_8006D4B8(void *arg0, u32 arg1, u8 arg2);
void fn_8006D510(void *arg0);
void fn_8006D544(void *arg0, M2C_UNK arg_sp0);
void fn_8006DE48(void);
void fn_8006DE4C(void);
void fn_8006DE50(void *arg0, s32 arg1, u8 *arg2);
void fn_8006DEC4(void *arg0, s32 arg1, u8 arg2, M2C_UNK arg_sp0);
void fn_8006E298(void *arg0);
void fn_8006E360(void **arg0, M2C_UNK arg_sp0);
void fn_8006E6E8(void);
void fn_8006E6EC(void);
void fn_8006E6F0(void **arg0, s32 arg1, u8 *arg2);
void fn_8006E72C(void **arg0, s32 arg1, u8 arg2, M2C_UNK arg_sp0);
void fn_8006EA18(void *arg0);

void fn_8006CBDC(void *arg0, s32 arg1, u8 arg2) {
    u8 temp_r4;
    u8 var_r6;

    if ((s32) (arg1 - 0x10) != 1) {
        temp_r4 = M2C_FIELD(arg0, u8 *, 8);
        var_r6 = arg2 & 0x1F;
        if (!(temp_r4 & 0x10) || (var_r6 & 0x10)) {
            var_r6 |= temp_r4 & 0x20;
        } else if ((s32) M2C_FIELD(arg0, s32 *, 0xC) < (s32) (((temp_r4 & 0xF) * 0x32) + 0x2EE)) {
            var_r6 |= 0x20;
        }
        M2C_FIELD(arg0, u8 *, 8) = var_r6;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (arg2 * 0xA);
}

void fn_8006CC48(void *arg0) {
    u8 temp_r6;
    s32 var_ctr;
    s32 var_r0_2;
    s32 var_r10;
    s32 temp_r6_2;
    s32 var_r0;
    void *temp_r11;
    void *temp_r5;
    void *var_r4;
    u8 temp_r6_3;

    var_r10 = 0;
    M2C_FIELD(arg0, s8 *, 0x8E) = 0;
    var_r4 = arg0;
    M2C_FIELD(arg0, s8 *, 0x8D) = 0;
    M2C_FIELD(arg0, s8 *, 0x8C) = 0;
    var_ctr = 6;
    do {
        /* draft: did not compile: temp_r11 = arg0 + (var_r10 >> 1); */
        M2C_FIELD(temp_r11, u8 *, 0xB) = 0U;
        temp_r6 = (var_r10 & 1) == 0;
        M2C_FIELD(temp_r11, u8 *, 8) = 0U;
        M2C_FIELD(var_r4, s32 *, 0x44) = 0;
        /* draft: did not compile: *(arg0 + (var_r10 + 0xE)) = 0; */
        M2C_FIELD(var_r4, s32 *, 0x2C) = 0xFF;
        var_r0 = 2;
        M2C_FIELD(var_r4, s32 *, 0x14) = 0xFF;
        M2C_FIELD(var_r4, s32 *, 0x5C) = 0;
        temp_r6_2 = ((s32) M2C_FIELD(temp_r11, u8 *, 8) >> (4 & ~((s32) (-(s32) temp_r6 | temp_r6) >> 0x1F))) & 7;
        if (temp_r6 != 0) {
            var_r0 = 1;
        }
        if (M2C_FIELD(temp_r11, u8 *, 0xB) & var_r0) {
            var_r0_2 = 0x3D09 << temp_r6_2;
        } else {
            var_r0_2 = *(&lbl_801CDA40 + (temp_r6_2 * 4));
        }
        M2C_FIELD(var_r4, s32 *, 0x74) = var_r0_2;
        var_r10 += 1;
        M2C_FIELD(var_r4, s32 *, 0x5C) = 0;
        /* draft: did not compile: var_r4 += 4; */
        var_ctr -= 1;
    } while (var_ctr != 0);
    temp_r5 = M2C_FIELD(arg0, void **, 0);
    if (temp_r5 != NULL) {
        temp_r6_3 = M2C_FIELD(temp_r5, u8 *, 0x10A);
        M2C_FIELD(temp_r5, M2C_UNK **, 0x118) = &fn_80068630;
        M2C_FIELD(temp_r5, void **, 0x138) = arg0;
        M2C_FIELD(temp_r5, M2C_UNK **, 0x11C) = &fn_80068630;
        M2C_FIELD(temp_r5, void **, 0x13C) = arg0;
        M2C_FIELD(temp_r5, u8 *, 0x10D) = (u8) ((M2C_FIELD(temp_r5, u8 *, 0x10D) & ~3) | (((M2C_FIELD(temp_r5, u8 *, 0x108) & ~temp_r6_3) | (M2C_FIELD(temp_r5, u8 *, 0x109) & temp_r6_3)) & 3));
    }
}

void fn_8006CD5C(void) {

}

void fn_8006CD60(void) {

}

void fn_8006CD64(s32 arg0, u32 arg1, u8 *arg2) {
    s32 temp_r0_2;
    s32 temp_r4_2;
    s32 var_r0;
    s32 var_r6;
    s32 var_r6_2;
    u32 temp_r0;
    u32 temp_r4;
    u32 temp_r7;

    if (arg1 < 0x20U) {
        temp_r4 = arg1 - 0x18;
        if (temp_r4 & 1) {
            temp_r0 = temp_r4 >> 1U;
            var_r6 = 0x33;
            if (temp_r0 != 0) {
                var_r6 = 3;
            }
            *arg2 |= M2C_FIELD((arg0 + temp_r0), u8 *, 0xB) & var_r6;
            return;
        }
        *arg2 |= M2C_FIELD((arg0 + (temp_r4 >> 1U)), u8 *, 8);
        return;
    }
    if ((arg1 >= 0x30U) && (arg1 <= 0x4FU)) {
        var_r6_2 = 4;
        temp_r0_2 = ((u32) (arg1 - 0x30) >> 2U) & 0x3FFFFFFE;
        if (temp_r0_2 <= 4) {
            var_r6_2 = temp_r0_2;
        }
        temp_r7 = arg1 & 7;
        temp_r4_2 = (arg1 & 1) | var_r6_2;
        if (temp_r7 < 2U) {
            if (M2C_FIELD((arg0 + (temp_r4_2 & 0xFFFFFFFE)), u8 *, 0xE) & 0x80) {
                var_r0 = 0x85;
                if (temp_r7 != 0) {
                    var_r0 = 0xC;
                }
            } else {
                var_r0 = 0x8D;
                if (temp_r7 != 0) {
                    var_r0 = 0xD;
                }
            }
            *arg2 |= M2C_FIELD((arg0 + temp_r4_2), u8 *, 0xE) & var_r0;
            return;
        }
        if (temp_r7 < 4U) {
            *arg2 |= M2C_FIELD((arg0 + (temp_r4_2 * 4)), s32 *, 0x14);
            return;
        }
        if (temp_r7 < 6U) {
            *arg2 |= M2C_FIELD((arg0 + (temp_r4_2 * 4)), s32 *, 0x44);
            return;
        }
        if (temp_r7 < 8U) {
            *arg2 |= M2C_FIELD((arg0 + (temp_r4_2 * 4)), s32 *, 0x2C);
        }
    }
}

void fn_8006CEBC(void *arg0, u32 arg1, u8 arg2) { } /* draft: stub */

void fn_8006D3D4(void *arg0) {
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

void fn_8006D3E8(void) {

}

void fn_8006D3EC(void) {

}

void fn_8006D3F0(void *arg0, s32 arg1, u8 *arg2) { } /* draft: stub */

void fn_8006D41C(void *arg0, s32 arg1, u8 arg2) {
    if ((arg1 - 8) == 0) {
        if (arg2 & 2) {
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
        }
        if (arg2 & 1) {
            M2C_FIELD(arg0, u8 *, 8) = (u8) (M2C_FIELD(arg0, u8 *, 8) | 1);
            return;
        }
        M2C_FIELD(arg0, u8 *, 8) = (u8) (M2C_FIELD(arg0, u8 *, 8) & 0xFE);
    }
}

void fn_8006D460(void *arg0) {
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 9) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

void fn_8006D474(void) {

}

void fn_8006D478(void) {

}

void fn_8006D47C(void *arg0, u32 arg1, u8 *arg2) {
    switch (arg1) {                                 /* irregular */
    case 0x40:
        *arg2 |= M2C_FIELD(arg0, u8 *, 8) & 3;
        return;
    case 0x41:
        *arg2 |= M2C_FIELD(arg0, u8 *, 9);
        return;
    }
}

void fn_8006D4B8(void *arg0, u32 arg1, u8 arg2) {
    u8 temp_r4;

    if (arg1 == 0x40U) {
        if (arg2 & 2) {
            M2C_FIELD(arg0, s8 *, 9) = 0;
        }
        if (arg2 & 1) {
            M2C_FIELD(arg0, u8 *, 8) = (u8) (M2C_FIELD(arg0, u8 *, 8) | 1);
            M2C_FIELD(arg0, u8 *, 8) = (u8) (M2C_FIELD(arg0, u8 *, 8) & 0xFFFFFFFB);
            return;
        }
        temp_r4 = M2C_FIELD(arg0, u8 *, 8);
        if (temp_r4 & 1) {
            M2C_FIELD(arg0, u8 *, 8) = (u8) (temp_r4 | 4);
        }
    }
}

void fn_8006D510(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0xC)();
}

void fn_8006D544(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8006DE48(void) {

}

void fn_8006DE4C(void) {

}

void fn_8006DE50(void *arg0, s32 arg1, u8 *arg2) {
    u8 temp_r7_2;
    u8 temp_r8;

    if ((arg1 - 0x60) == 0) {
        *arg2 = M2C_FIELD(arg0, u8 *, 8);
        return;
    }
    if ((u32) (arg1 - 0x60) == 1U) {
        temp_r8 = M2C_FIELD((M2C_FIELD(arg0, void **, 0xC)), u8 *, 2);
        temp_r7_2 = M2C_FIELD(arg0, u8 *, 8);
        *arg2 = ((u8) ((M2C_FIELD((M2C_FIELD(arg0, void **, 0xC)), u8 *, 0) & ~temp_r8) | (M2C_FIELD((M2C_FIELD(arg0, void **, 0xC)), u8 *, 1) & temp_r8)) & ~temp_r7_2) | (temp_r7_2 & *M2C_FIELD(arg0, u8 **, 0x10));
        return;
    }
    *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u8 *, 4) & 0xF0;
}

void fn_8006DEC4(void *arg0, s32 arg1, u8 arg2, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8006E298(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0);
    if (temp_r5 != NULL) {
        M2C_FIELD(temp_r5, s32 *, 0x158) = 0;
        M2C_FIELD(temp_r5, s32 *, 0x15C) = 0;
        M2C_FIELD(temp_r5, u8 *, 0x10E) = 0;
        M2C_FIELD(temp_r5, s32 *, 0x118) = 0;
        M2C_FIELD(temp_r5, s32 *, 0x138) = 0;
        M2C_FIELD(temp_r5, u8 *, 0x10F) = 0;
        M2C_FIELD(temp_r5, s32 *, 0x11C) = 0;
        M2C_FIELD(temp_r5, s32 *, 0x13C) = 0;
        M2C_FIELD(temp_r5, u8 *, 0x110) = 0;
        M2C_FIELD(temp_r5, s32 *, 0x120) = 0;
        M2C_FIELD(temp_r5, s32 *, 0x140) = 0;
        M2C_FIELD(temp_r5, u8 *, 0x111) = 0;
        M2C_FIELD(temp_r5, s32 *, 0x124) = 0;
        M2C_FIELD(temp_r5, s32 *, 0x144) = 0;
        M2C_FIELD(temp_r5, u8 *, 0x112) = 0;
        M2C_FIELD(temp_r5, s32 *, 0x128) = 0;
        M2C_FIELD(temp_r5, s32 *, 0x148) = 0;
        M2C_FIELD(temp_r5, u8 *, 0x113) = 0;
        M2C_FIELD(temp_r5, s32 *, 0x12C) = 0;
        M2C_FIELD(temp_r5, s32 *, 0x14C) = 0;
        M2C_FIELD(temp_r5, u8 *, 0x114) = 0;
        M2C_FIELD(temp_r5, s32 *, 0x130) = 0;
        M2C_FIELD(temp_r5, s32 *, 0x150) = 0;
        M2C_FIELD(temp_r5, u8 *, 0x115) = 0;
        M2C_FIELD(temp_r5, s32 *, 0x134) = 0;
        M2C_FIELD(temp_r5, s32 *, 0x154) = 0;
        M2C_FIELD(temp_r5, u8 *, 0x108) = 0;
        M2C_FIELD(temp_r5, u8 *, 0x109) = 0;
        M2C_FIELD(temp_r5, u8 *, 0x10A) = 0;
        M2C_FIELD(temp_r5, u8 *, 0x10B) = 0xFF;
        M2C_FIELD(temp_r5, u8 *, 0x10D) = 0;
        M2C_FIELD(temp_r5, u8 *, 0x10C) = 0;
    }
    M2C_FIELD(arg0, void **, 0) = NULL;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0xC)();
}

void fn_8006E360(void **arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8006E6E8(void) {

}

void fn_8006E6EC(void) {

}

void fn_8006E6F0(void **arg0, s32 arg1, u8 *arg2) {
    u8 temp_r6;

    if (arg1 != 0x71) {
        *arg2 = M2C_FIELD(*arg0, u8 *, 0x10A);
        return;
    }
    temp_r6 = M2C_FIELD((*arg0), u8 *, 0x10A);
    *arg2 = (M2C_FIELD((*arg0), u8 *, 0x108) & ~temp_r6) | (M2C_FIELD((*arg0), u8 *, 0x109) & temp_r6);
}

void fn_8006E72C(void **arg0, s32 arg1, u8 arg2, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8006EA18(void *arg0) {
    void *temp_r4;
    void *temp_r4_2;

    temp_r4 = M2C_FIELD(arg0, void **, 0);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, s32 *, 0xA8) = 0;
        M2C_FIELD(temp_r4, s32 *, 0xAC) = 0;
        M2C_FIELD(temp_r4, u8 *, 0x5E) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x68) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x88) = 0;
        M2C_FIELD(temp_r4, u8 *, 0x5F) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x6C) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x8C) = 0;
        M2C_FIELD(temp_r4, u8 *, 0x60) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x70) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x90) = 0;
        M2C_FIELD(temp_r4, u8 *, 0x61) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x74) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x94) = 0;
        M2C_FIELD(temp_r4, u8 *, 0x62) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x78) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x98) = 0;
        M2C_FIELD(temp_r4, u8 *, 0x63) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x7C) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x9C) = 0;
        M2C_FIELD(temp_r4, u8 *, 0x64) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x80) = 0;
        M2C_FIELD(temp_r4, s32 *, 0xA0) = 0;
        M2C_FIELD(temp_r4, u8 *, 0x65) = 0;
        M2C_FIELD(temp_r4, s32 *, 0x84) = 0;
        M2C_FIELD(temp_r4, s32 *, 0xA4) = 0;
        M2C_FIELD(temp_r4, u8 *, 0x58) = 0;
        M2C_FIELD(temp_r4, u8 *, 0x59) = 0;
        M2C_FIELD(temp_r4, u8 *, 0x5A) = 0;
        M2C_FIELD(temp_r4, u8 *, 0x5B) = 0xFF;
        M2C_FIELD(temp_r4, u8 *, 0x5D) = 0;
        M2C_FIELD(temp_r4, u8 *, 0x5C) = 0;
        temp_r4_2 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_r4_2, s32 *, 0x100) = 0;
        M2C_FIELD(temp_r4_2, s32 *, 0x104) = 0;
        M2C_FIELD(temp_r4_2, u8 *, 0xB6) = 0;
        M2C_FIELD(temp_r4_2, s32 *, 0xC0) = 0;
        M2C_FIELD(temp_r4_2, s32 *, 0xE0) = 0;
        M2C_FIELD(temp_r4_2, u8 *, 0xB7) = 0;
        M2C_FIELD(temp_r4_2, s32 *, 0xC4) = 0;
        M2C_FIELD(temp_r4_2, s32 *, 0xE4) = 0;
        M2C_FIELD(temp_r4_2, u8 *, 0xB8) = 0;
        M2C_FIELD(temp_r4_2, s32 *, 0xC8) = 0;
        M2C_FIELD(temp_r4_2, s32 *, 0xE8) = 0;
        M2C_FIELD(temp_r4_2, u8 *, 0xB9) = 0;
        M2C_FIELD(temp_r4_2, s32 *, 0xCC) = 0;
        M2C_FIELD(temp_r4_2, s32 *, 0xEC) = 0;
        M2C_FIELD(temp_r4_2, u8 *, 0xBA) = 0;
        M2C_FIELD(temp_r4_2, s32 *, 0xD0) = 0;
        M2C_FIELD(temp_r4_2, s32 *, 0xF0) = 0;
        M2C_FIELD(temp_r4_2, u8 *, 0xBB) = 0;
        M2C_FIELD(temp_r4_2, s32 *, 0xD4) = 0;
        M2C_FIELD(temp_r4_2, s32 *, 0xF4) = 0;
        M2C_FIELD(temp_r4_2, u8 *, 0xBC) = 0;
        M2C_FIELD(temp_r4_2, s32 *, 0xD8) = 0;
        M2C_FIELD(temp_r4_2, s32 *, 0xF8) = 0;
        M2C_FIELD(temp_r4_2, u8 *, 0xBD) = 0;
        M2C_FIELD(temp_r4_2, s32 *, 0xDC) = 0;
        M2C_FIELD(temp_r4_2, s32 *, 0xFC) = 0;
        M2C_FIELD(temp_r4_2, u8 *, 0xB0) = 0;
        M2C_FIELD(temp_r4_2, u8 *, 0xB1) = 0;
        M2C_FIELD(temp_r4_2, u8 *, 0xB2) = 0;
        M2C_FIELD(temp_r4_2, u8 *, 0xB3) = 0xFF;
        M2C_FIELD(temp_r4_2, u8 *, 0xB5) = 0;
        M2C_FIELD(temp_r4_2, u8 *, 0xB4) = 0;
    }
    M2C_FIELD(arg0, void **, 0) = NULL;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0xC)();
}
