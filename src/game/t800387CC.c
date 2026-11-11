/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80005888();
extern M2C_UNK lbl_801CC130;
extern M2C_UNK lbl_8034E9D8;
extern M2C_UNK lbl_80351830;
M2C_UNK fn_800708D4(M2C_UNK);
M2C_UNK fn_8003A72C();

s32 fn_800387CC(s32 arg0, s16 arg1);
void fn_80038808(void *arg0, s32 arg1);
void fn_80038B14(void *arg0, u32 arg1);
void fn_80038DFC(void);
void fn_80038E00(void *arg0);
void fn_80038E34(void *arg0, s32 arg1, u32 arg2, s32 arg3, M2C_UNK arg_sp0);
void fn_80038F80(void *arg0);
void fn_80038FE8(void *arg0);
void fn_800390FC(void *arg0);
void fn_80039140(void *arg0);
void fn_80039168(void *arg0);
void fn_80039194(void *arg0, u8 *arg1, u8 arg2);
void fn_800393E8(void *arg0);
void fn_80039410(void *arg0);
void fn_80039438(void *arg0, M2C_UNK arg_sp0);
void fn_80039604(void *arg0, M2C_UNK arg_sp0);
void fn_800397E0(void *arg0, M2C_UNK arg_sp0);
void fn_800399B4(void *arg0, M2C_UNK arg_sp0);
void fn_80039B80(void *arg0, M2C_UNK arg_sp0);
void fn_80039D4C(void *arg0);
void fn_80039D74(void *arg0);
void fn_80039D9C(void *arg0);
void fn_80039DC4(void *arg0, M2C_UNK arg_sp0);
void fn_80039F90(void *arg0, M2C_UNK arg_sp0);
void fn_8003A16C(void *arg0, M2C_UNK arg_sp0);
void fn_8003A340(void *arg0, M2C_UNK arg_sp0);
void fn_8003A50C(void *arg0, M2C_UNK arg_sp0);
void fn_8003A6D8(void *arg0);
void fn_8003A700(void *arg0);

s32 fn_800387CC(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        fn_80005888();
    }
    return arg0;
}

void fn_80038808(void *arg0, s32 arg1) { } /* draft: stub */

void fn_80038B14(void *arg0, u32 arg1) {
    void *temp_r29;
    void *temp_r29_10;
    void *temp_r29_2;
    void *temp_r29_3;
    void *temp_r29_4;
    void *temp_r29_5;
    void *temp_r29_6;
    void *temp_r29_7;
    void *temp_r29_8;
    void *temp_r29_9;

    M2C_FIELD(arg0, u32 *, 0) = arg1;
    temp_r29 = M2C_FIELD(arg0, void **, 4);
    if (temp_r29 != NULL) {
        if ((u32) M2C_FIELD(temp_r29, u32 *, 0) != 0U) {
            M2C_FIELD(M2C_FIELD(temp_r29, void **, 4), M2C_UNK (**)(void *), 8)(temp_r29);
        }
        M2C_FIELD(temp_r29, u32 *, 0) = arg1;
        M2C_FIELD(M2C_FIELD(temp_r29, void **, 4), M2C_UNK (**)(void *), 0xC)(temp_r29);
    }
    temp_r29_2 = M2C_FIELD(arg0, void **, 8);
    if (temp_r29_2 != NULL) {
        if ((u32) M2C_FIELD(temp_r29_2, u32 *, 0) != 0U) {
            M2C_FIELD(M2C_FIELD(temp_r29_2, void **, 4), M2C_UNK (**)(void *), 8)(temp_r29_2);
        }
        M2C_FIELD(temp_r29_2, u32 *, 0) = arg1;
        M2C_FIELD(M2C_FIELD(temp_r29_2, void **, 4), M2C_UNK (**)(void *), 0xC)(temp_r29_2);
    }
    temp_r29_3 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r29_3 != NULL) {
        if ((u32) M2C_FIELD(temp_r29_3, u32 *, 0) != 0U) {
            M2C_FIELD(M2C_FIELD(temp_r29_3, void **, 4), M2C_UNK (**)(void *), 8)(temp_r29_3);
        }
        M2C_FIELD(temp_r29_3, u32 *, 0) = arg1;
        M2C_FIELD(M2C_FIELD(temp_r29_3, void **, 4), M2C_UNK (**)(void *), 0xC)(temp_r29_3);
    }
    temp_r29_4 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r29_4 != NULL) {
        if ((u32) M2C_FIELD(temp_r29_4, u32 *, 0) != 0U) {
            M2C_FIELD(M2C_FIELD(temp_r29_4, void **, 4), M2C_UNK (**)(void *), 8)(temp_r29_4);
        }
        M2C_FIELD(temp_r29_4, u32 *, 0) = arg1;
        M2C_FIELD(M2C_FIELD(temp_r29_4, void **, 4), M2C_UNK (**)(void *), 0xC)(temp_r29_4);
    }
    temp_r29_5 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_r29_5 != NULL) {
        if ((u32) M2C_FIELD(temp_r29_5, u32 *, 0) != 0U) {
            M2C_FIELD(M2C_FIELD(temp_r29_5, void **, 4), M2C_UNK (**)(void *), 8)(temp_r29_5);
        }
        M2C_FIELD(temp_r29_5, u32 *, 0) = arg1;
        M2C_FIELD(M2C_FIELD(temp_r29_5, void **, 4), M2C_UNK (**)(void *), 0xC)(temp_r29_5);
    }
    temp_r29_6 = M2C_FIELD(arg0, void **, 0x1C);
    if (temp_r29_6 != NULL) {
        if ((u32) M2C_FIELD(temp_r29_6, u32 *, 0) != 0U) {
            M2C_FIELD(M2C_FIELD(temp_r29_6, void **, 4), M2C_UNK (**)(void *), 8)(temp_r29_6);
        }
        M2C_FIELD(temp_r29_6, u32 *, 0) = arg1;
        M2C_FIELD(M2C_FIELD(temp_r29_6, void **, 4), M2C_UNK (**)(void *), 0xC)(temp_r29_6);
    }
    temp_r29_7 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_r29_7 != NULL) {
        if ((u32) M2C_FIELD(temp_r29_7, u32 *, 0) != 0U) {
            M2C_FIELD(M2C_FIELD(temp_r29_7, void **, 4), M2C_UNK (**)(void *), 8)(temp_r29_7);
        }
        M2C_FIELD(temp_r29_7, u32 *, 0) = arg1;
        M2C_FIELD(M2C_FIELD(temp_r29_7, void **, 4), M2C_UNK (**)(void *), 0xC)(temp_r29_7);
    }
    temp_r29_8 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_r29_8 != NULL) {
        if ((u32) M2C_FIELD(temp_r29_8, u32 *, 0) != 0U) {
            M2C_FIELD(M2C_FIELD(temp_r29_8, void **, 4), M2C_UNK (**)(void *), 8)(temp_r29_8);
        }
        M2C_FIELD(temp_r29_8, u32 *, 0) = arg1;
        M2C_FIELD(M2C_FIELD(temp_r29_8, void **, 4), M2C_UNK (**)(void *), 0xC)(temp_r29_8);
    }
    temp_r29_9 = M2C_FIELD(arg0, void **, 0x28);
    if (temp_r29_9 != NULL) {
        if ((u32) M2C_FIELD(temp_r29_9, u32 *, 0) != 0U) {
            M2C_FIELD(M2C_FIELD(temp_r29_9, void **, 4), M2C_UNK (**)(void *), 8)(temp_r29_9);
        }
        M2C_FIELD(temp_r29_9, u32 *, 0) = arg1;
        M2C_FIELD(M2C_FIELD(temp_r29_9, void **, 4), M2C_UNK (**)(void *), 0xC)(temp_r29_9);
    }
    temp_r29_10 = M2C_FIELD(arg0, void **, 0x2C);
    if (temp_r29_10 != NULL) {
        if ((u32) M2C_FIELD(temp_r29_10, u32 *, 0) != 0U) {
            M2C_FIELD(M2C_FIELD(temp_r29_10, void **, 4), M2C_UNK (**)(void *), 8)(temp_r29_10);
        }
        M2C_FIELD(temp_r29_10, u32 *, 0) = arg1;
        M2C_FIELD(M2C_FIELD(temp_r29_10, void **, 4), M2C_UNK (**)(void *), 0xC)(temp_r29_10);
    }
}

void fn_80038DFC(void) {

}

void fn_80038E00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0xC)();
}

void fn_80038E34(void *arg0, s32 arg1, u32 arg2, s32 arg3, M2C_UNK arg_sp0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r27;
    s32 var_r27_2;
    s32 var_r29;
    s32 var_r31;
    s32 var_r4;
    u32 temp_r5;
    u32 var_r0;
    u32 var_r30;

    var_r31 = arg3;
    var_r29 = arg1;
    var_r30 = arg2;
    if (var_r31 != 0) {
        temp_r5 = var_r30 + var_r31;
        if (temp_r5 >= 0x2100U) {
            var_r0 = 0x80000U;
            var_r4 = M2C_FIELD(arg0, s32 *, 0x80030);
            if ((s32) temp_r5 <= 0x80000) {
                var_r0 = temp_r5;
            }
            if ((s32) var_r0 >= var_r4) {
                var_r4 = (s32) var_r0;
            }
            M2C_FIELD(arg0, s32 *, 0x80030) = var_r4;
        }
        if (var_r30 <= 0xFFFU) {
            temp_r0 = 0x1000 - var_r30;
            var_r27 = var_r31;
            if (temp_r0 <= var_r31) {
                var_r27 = temp_r0;
            }
            /* draft: did not compile: memcpy(arg0 + (var_r30 + 0x30), var_r29, var_r27); */
            var_r31 -= var_r27;
            var_r29 += var_r27;
            var_r30 += var_r27;
            if (var_r31 != 0) {
                goto block_11;
            }
        } else {
block_11:
            if (var_r30 <= 0x1FFFU) {
                temp_r3 = 0x2000 - var_r30;
                var_r0_2 = var_r31;
                if (temp_r3 <= var_r31) {
                    var_r0_2 = temp_r3;
                }
                var_r31 -= var_r0_2;
                var_r29 += var_r0_2;
                var_r30 += var_r0_2;
                if (var_r31 != 0) {
                    goto block_15;
                }
            } else {
block_15:
                if (var_r30 <= 0x20FFU) {
                    temp_r3_2 = 0x2100 - var_r30;
                    var_r0_3 = var_r31;
                    if (temp_r3_2 <= var_r31) {
                        var_r0_3 = temp_r3_2;
                    }
                    var_r31 -= var_r0_3;
                    var_r29 += var_r0_3;
                    var_r30 += var_r0_3;
                    if (var_r31 != 0) {
                        goto block_19;
                    }
                } else {
block_19:
                    if (var_r30 <= 0x1FFFFFU) {
                        temp_r0_2 = 0x200000 - var_r30;
                        var_r27_2 = var_r31;
                        if (temp_r0_2 <= var_r31) {
                            var_r27_2 = temp_r0_2;
                        }
                        /* draft: did not compile: memcpy(arg0 + (var_r30 + 0x30), var_r29, var_r27_2); */
                    }
                }
            }
        }
    }
}

void fn_80038F80(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s8 *, 0x2D) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s16 *, 0x2E) = 0xFFFF;
    M2C_FIELD(arg0, s16 *, 0x30) = 0x1000;
    /* draft: did not compile: fn_80038FE8(0xFFFF, 0); */
}

void fn_80038FE8(void *arg0) {
    u8 temp_r4;
    u8 temp_r4_2;
    u8 temp_r4_3;
    u8 temp_r4_4;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;

    M2C_FIELD(arg0, u8 *, 0x1C) = 1;
    M2C_FIELD(arg0, u8 *, 0x21) = 1;
    M2C_FIELD(arg0, u8 *, 0x19) = 0;
    M2C_FIELD(arg0, u8 *, 0x15) = 0;
    M2C_FIELD(arg0, u8 *, 0x11) = 0;
    M2C_FIELD(arg0, u8 *, 0x2C) = 0xC0;
    M2C_FIELD(arg0, u8 *, 0x37) = 0;
    M2C_FIELD(arg0, s16 *, 0x3E) = 0x300;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_r3 = M2C_FIELD(arg0, void **, 4);
    if (temp_r3 != NULL) {
        temp_r4 = M2C_FIELD(temp_r3, u8 *, 0x2D);
        if ((s32) (temp_r4 & 7) != 4) {
            M2C_FIELD(temp_r3, u8 *, 0x2D) = (u8) ((temp_r4 & ~7) | 4);
            fn_800708D4(1);
        }
        temp_r3_2 = M2C_FIELD(arg0, void **, 4);
        temp_r4_2 = M2C_FIELD(temp_r3_2, u8 *, 0x2D);
        if (!(temp_r4_2 & 0x10)) {
            M2C_FIELD(temp_r3_2, u8 *, 0x2D) = (u8) (temp_r4_2 | 0x10);
            fn_800708D4(1);
        }
        temp_r3_3 = M2C_FIELD(arg0, void **, 4);
        temp_r4_3 = M2C_FIELD(temp_r3_3, u8 *, 0x2E);
        if ((s32) (temp_r4_3 & 7) != 4) {
            M2C_FIELD(temp_r3_3, u8 *, 0x2E) = (u8) ((temp_r4_3 & ~7) | 4);
            fn_800708D4(2);
        }
        temp_r3_4 = M2C_FIELD(arg0, void **, 4);
        temp_r4_4 = M2C_FIELD(temp_r3_4, u8 *, 0x2E);
        if (!(temp_r4_4 & 0x10)) {
            M2C_FIELD(temp_r3_4, u8 *, 0x2E) = (u8) (temp_r4_4 | 0x10);
            fn_800708D4(2);
        }
    }
    temp_r3_5 = M2C_FIELD(arg0, void **, 8);
    if (temp_r3_5 != NULL) {
        M2C_FIELD(arg0, u8 *, 0x1F) = (u8) M2C_FIELD(temp_r3_5, u8 *, 0x30);
        M2C_FIELD(arg0, u8 *, 0x1E) = (u8) M2C_FIELD(M2C_FIELD(arg0, void **, 8), u8 *, 0x31);
    }
}

void fn_800390FC(void *arg0) {
    u16 var_r4;
    void *temp_r3;

    var_r4 = M2C_FIELD(arg0, u16 *, 0x1E);
    if (var_r4 & 0x8000) {
        var_r4 = (var_r4 & 0x7FFF) + ((u32) M2C_FIELD(arg0, u32 *, 0x20) >> 1U);
    }
    temp_r3 = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_r3, s32 *, 8) = (s32) (M2C_FIELD(temp_r3, s32 *, 8) | 0x20);
    M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) var_r4;
    M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x34);
    M2C_FIELD(temp_r3, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x3C);
}

void fn_80039140(void *arg0) {
    /* draft: did not compile: fn_80039168(arg0 + 0xF, M2C_FIELD(arg0, u8 *, 0xF)); */
}

void fn_80039168(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    fn_80039194((void *)(0), (unsigned char *)(0), (unsigned char)(0));
}

void fn_80039194(void *arg0, u8 *arg1, u8 arg2) {
    s32 temp_r0;
    s32 temp_r8;
    s32 temp_r9;
    u16 temp_r0_2;
    u16 temp_r5;
    u16 var_r5_2;
    u16 var_r6;
    u8 temp_r6;
    u8 temp_r6_2;
    u8 var_r10;
    u8 temp_r6_3;
    u8 var_r5;
    u8 var_r5_3;
    u8 var_r8;

    var_r5 = arg2;
    temp_r6 = M2C_FIELD(arg0, u8 *, 0x2C);
    temp_r6_2 = (temp_r6 >> 1U) & 1;
    var_r10 = temp_r6_2;
    if (temp_r6 & 0x20) {
        var_r5 = (var_r5 * 0x10) & 0xF0;
        var_r10 = (temp_r6_2 * 0x10) & 0xF0;
        *arg1 = (*arg1 * 0x10) & 0xF0;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x2C) & 0x10) && (temp_r6_3 = *arg1, temp_r8 = temp_r6_3 & 0xF, ((temp_r8 < 0xA) != 0)) && ((s32) (temp_r6_3 & 0xF0) < 0xA0) && (temp_r9 = var_r5 & 0xF, ((temp_r9 < 0xA) != 0)) && ((s32) (var_r5 & 0xF0) < 0xA0)) {
        temp_r0 = (((s32) var_r5 >> 4) * 0xA) + var_r10 + (u16) (temp_r8 + (((s32) temp_r6_3 >> 4) * 0xA));
        var_r6 = temp_r9 + temp_r0;
        if ((s16) var_r6 < 0) {
            var_r6 += 0x64;
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
        } else if (var_r6 >= 0x64U) {
            var_r6 = (temp_r9 + temp_r0) % 100;
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
        } else {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
        }
        var_r5_2 = ((var_r6 / 10) * 0x10) + (var_r6 % 10);
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
    } else {
        var_r8 = 0;
        temp_r0_2 = (s8) *arg1 + ((s8) var_r5 + var_r10);
        if (((s16) temp_r0_2 > 0x7F) || ((s16) temp_r0_2 < -0x80)) {
            var_r8 = 1;
        }
        if (var_r8 != 0) {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 4);
        } else {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFB);
        }
        temp_r5 = *arg1 + (var_r5 + var_r10);
        var_r5_2 = temp_r5;
        if (temp_r5 & 0x80) {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 8);
        } else {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFF7);
        }
        if (var_r5_2 >= 0x100U) {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
        } else {
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
        }
    }
    var_r5_3 = (u8) var_r5_2;
    if (M2C_FIELD(arg0, u8 *, 0x2C) & 0x20) {
        var_r5_3 = (var_r5_3 >> 4U) & 0xFFF;
    }
    *arg1 = var_r5_3;
    if ((u8) *arg1 == 0) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFE);
}

void fn_800393E8(void *arg0) {
    /* draft: did not compile: fn_80039168(arg0 + 0xF, M2C_FIELD(arg0, u8 *, 0xE)); */
}

void fn_80039410(void *arg0) {
    /* draft: did not compile: fn_80039168(arg0 + 0xF, M2C_FIELD(arg0, u8 *, 0x37)); */
}

void fn_80039438(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80039604(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_800397E0(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_800399B4(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80039B80(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80039D4C(void *arg0) {
    /* draft: did not compile: fn_80039194(arg0 + 0xF, M2C_FIELD(arg0, u8 *, 0xF)); */
}

void fn_80039D74(void *arg0) {
    /* draft: did not compile: fn_80039194(arg0 + 0xF, M2C_FIELD(arg0, u8 *, 0xE)); */
}

void fn_80039D9C(void *arg0) {
    /* draft: did not compile: fn_80039194(arg0 + 0xF, M2C_FIELD(arg0, u8 *, 0x37)); */
}

void fn_80039DC4(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80039F90(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003A16C(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003A340(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003A50C(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8003A6D8(void *arg0) {
    /* draft: did not compile: fn_8003A700(arg0 + 0xF, M2C_FIELD(arg0, u8 *, 0xF)); */
}

void fn_8003A700(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) & 0xFFFFFFFD);
    fn_8003A72C();
}
