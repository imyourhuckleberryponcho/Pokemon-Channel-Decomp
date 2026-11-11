/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_8009F148();
s32 *get_up_vector_for_viewing_mtx();
M2C_UNK fn_8001FCC0(void **, s32);
s32 *fn_800782B0(s32);
M2C_UNK fn_8009EE68();
u32 fn_80014298(s32);
u32 fn_8009AA14(void *);
extern M2C_UNK lbl_8034FD20;
M2C_UNK fn_80005888(void *);
M2C_UNK fn_800721C4(s32, M2C_UNK);
extern M2C_UNK lbl_8022A5E4;
extern M2C_UNK lbl_8022A67C;
M2C_UNK fn_8009F350();
M2C_UNK fn_8009F484();
M2C_UNK fn_8009F56C();
u32 fn_80073810(s32 **);
s32 *fn_80078530(s32);
M2C_UNK fn_8009EF20();
M2C_UNK fn_8009F0B4();
u32 fn_8007215C(u32, f32);
extern f32 lbl_80351B38;
extern f32 lbl_80351B3C;
M2C_UNK fn_8001FAAC(void **, s32);
M2C_UNK fn_8009EFD8();
void *fn_800A1618(void *, s32);
s32 fn_8009A8A8(void *);
M2C_UNK fn_8009F27C();
M2C_UNK fn_8009F3B0();
M2C_UNK fn_8009F4E4();

void fn_8009D6F8(void *arg0);
void fn_8009D758(void *arg0);
void fn_8009D8CC(void *arg0, M2C_UNK arg_sp0);
s32 fn_8009DB20(void *arg0);
s32 fn_8009DC38(void *arg0);
s32 fn_8009DC60(void);
M2C_UNK *fn_8009DC68(void *arg0);
M2C_UNK *fn_8009DC80(void *arg0);
void *fn_8009DC98(void *arg0);
void fn_8009DD00(void *arg0);
void *fn_8009DD10(void *arg0, s16 arg1);
void fn_8009DD68(void *arg0, s32 arg1);
void *fn_8009DDC8(void *arg0, s16 arg1);
u32 fn_8009DEDC(s32 *arg0);
void fn_8009DFA0(s32 **arg0, void *arg1, s32 arg2);
void fn_8009E060(s32 **arg0);
void fn_8009E154(s32 **arg0, s32 **arg1);
s32 **fn_8009E178(void *arg0, s32 arg1);
s32 **fn_8009E1D0(void *arg0, s32 arg1);
u32 fn_8009E228(void *arg0, s32 arg1);
u32 fn_8009E28C(void *arg0, s32 arg1);
void fn_8009E2F0(void *arg0);
void fn_8009E350(void *arg0, M2C_UNK arg_sp0);
s32 fn_8009E540(void *arg0, M2C_UNK arg_sp0);
void fn_8009E828(void *arg0, M2C_UNK arg_sp0);
s32 fn_8009E988(void *arg0, M2C_UNK arg_sp0);
void fn_8009EB18(void *arg0);
s32 fn_8009EC20(void *arg0);
s16 fn_8009ED1C(void *arg0);
void fn_8009ED24(void *arg0);
s32 fn_8009EDF8(void);
M2C_UNK *fn_8009EE00(void *arg0);

void fn_8009D6F8(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0xC) == 0U) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x20)();
        do {

        } while (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 (**)(void *), 0x24)(arg0) == 0);
    }
}

void fn_8009D758(void *arg0) {
    void *sp8;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_2;

    if (((s32) M2C_FIELD(arg0, s32 *, 0) == 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U)) {
        temp_r4 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
            if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                temp_r3 = M2C_FIELD(arg0, void **, 0xC);
                if (temp_r3 != NULL) {
                    M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
        }
        M2C_FIELD(arg0, void **, 0xC) = NULL;
        sp8 = NULL;
        if (0 /* draft: did not compile */) {
            if (sp8 != NULL) {
                M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) + 1);
            }
            temp_r4_2 = M2C_FIELD(arg0, void **, 0xC);
            if (temp_r4_2 != NULL) {
                M2C_FIELD(temp_r4_2, s32 *, 0) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0) - 1);
                if ((s32) M2C_FIELD(temp_r4_2, s32 *, 0) == 0) {
                    temp_r3_2 = M2C_FIELD(arg0, void **, 0xC);
                    if (temp_r3_2 != NULL) {
                        M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            M2C_FIELD(arg0, void **, 0xC) = sp8;
        }
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp8, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp8 = NULL;
        /* draft: did not compile: fn_8009F148(arg0 + 0x10); */
        M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
    }
}

void fn_8009D8CC(void *arg0, M2C_UNK arg_sp0) {
    s32 *spC;
    void *sp8;
    s32 **temp_r27;
    s32 *temp_r3_2;
    s32 *temp_r4;
    s32 *var_r4;
    s32 var_r28;
    u32 var_r30;
    s32 var_r31;
    void *temp_r3;
    void *temp_r3_3;
    void *temp_r4_2;

    if ((void *) M2C_FIELD(arg0, void **, 0xC) == NULL) {
        /* draft: did not compile: fn_8009EE68(arg0 + 0x10, M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x1C)); */
        var_r28 = 0;
        var_r30 = 0;
        var_r31 = 0;
loop_22:
        temp_r3 = M2C_FIELD(arg0, void **, 8);
        if (var_r30 < (s32) M2C_FIELD(temp_r3, s32 *, 0x1C)) {
            if (0 /* draft: did not compile */) {
                var_r4 = get_up_vector_for_viewing_mtx(0x18);
                if (var_r4 != NULL) {
                    var_r4 = fn_800782B0(M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x18) + var_r31);
                }
                spC = var_r4;
                if (var_r4 != NULL) {
                    *var_r4 += 1;
                }
                /* draft: did not compile: temp_r27 = M2C_FIELD(arg0, s32 *, 0x18) + var_r28; */
                if ((&spC != temp_r27) && (spC != (s32 *) *temp_r27)) {
                    if (spC != NULL) {
                        M2C_FIELD(spC, s32 *, 0) += 1;
                    }
                    temp_r4 = *temp_r27;
                    if (temp_r4 != NULL) {
                        M2C_FIELD(temp_r4, s32 *, 0) -= 1;
                        if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                            temp_r3_2 = *temp_r27;
                            if (temp_r3_2 != NULL) {
                                M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                            }
                        }
                    }
                    *temp_r27 = spC;
                }
                if (spC != NULL) {
                    M2C_FIELD(spC, s32 *, 0) -= 1;
                    if (((s32) M2C_FIELD(spC, s32 *, 0) == 0) && (spC != NULL)) {
                        M2C_FIELD(M2C_FIELD(spC, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
                spC = NULL;
            }
            var_r31 += 0x18;
            var_r30 += 1;
            var_r28 += 4;
            goto loop_22;
        }
        fn_8001FCC0(&sp8, M2C_FIELD(temp_r3, s32 *, 0xC));
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) + 1);
        }
        temp_r4_2 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_r4_2 != NULL) {
            M2C_FIELD(temp_r4_2, s32 *, 0) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0) - 1);
            if ((s32) M2C_FIELD(temp_r4_2, s32 *, 0) == 0) {
                temp_r3_3 = M2C_FIELD(arg0, void **, 0xC);
                if (temp_r3_3 != NULL) {
                    M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
        }
        M2C_FIELD(arg0, void **, 0xC) = sp8;
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp8, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp8 = NULL;
    }
}

s32 fn_8009DB20(void *arg0) {
    s32 temp_r4;
    u8 var_r29;
    s32 var_r30;
    s32 var_r31;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        return 1;
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0xC);
    if (M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), u8 (**)(void *), 0xC)(temp_r3) == 0) {
        return 0;
    }
    var_r31 = 0;
    var_r29 = 0;
    var_r30 = 0;
loop_9:
    temp_r3_2 = M2C_FIELD(arg0, void **, 8);
    if (var_r29 >= (s32) M2C_FIELD(temp_r3_2, s32 *, 0x1C)) {
        temp_r4 = M2C_FIELD(temp_r3_2, s32 *, 0x10);
        if (temp_r4 <= -2) {
            M2C_FIELD(arg0, u32 *, 0x1C) = fn_80014298(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0xC));
        } else if (temp_r4 >= 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = fn_8009AA14(M2C_FIELD(arg0, void **, 0xC));
        }
        return 1;
    }
    if (0 /* draft: did not compile */) {
        /* draft: did not compile: temp_r3_3 = *(M2C_FIELD(arg0, s32 *, 0x18) + var_r31); */
        if (M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 8), u8 (**)(void *), 0xC)(temp_r3_3) == 0) {
            return 0;
        }
    }
    var_r30 += 0x18;
    var_r29 += 1;
    var_r31 += 4;
    goto loop_9;
}

s32 fn_8009DC38(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        return 2;
    }
    return M2C_FIELD(arg0, s32 *, 0xC) != 0;
}

s32 fn_8009DC60(void) {
    return 1;
}

M2C_UNK *fn_8009DC68(void *arg0) {
    M2C_UNK *temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK **, 8);
    if (temp_r3 == NULL) {
        return &lbl_8034FD20;
    }
    return temp_r3;
}

M2C_UNK *fn_8009DC80(void *arg0) {
    M2C_UNK *temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK **, 8);
    if (temp_r3 == NULL) {
        return &lbl_8034FD20;
    }
    return temp_r3;
}

void *fn_8009DC98(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    /* draft: did not compile: memset(arg0 + 8, 0, 0x18); */
    /* draft: did not compile: memset(arg0 + 0x20, 0, 0x10); */
    /* draft: did not compile: memset(arg0 + 0x30, 0, 0x10); */
    return arg0;
}

void fn_8009DD00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void *fn_8009DD10(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_800721C4(M2C_FIELD(arg0, s32 *, 4), 1);
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_8009DD68(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_8022A67C;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_8022A5E4;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s16 *, 0x38) = 0;
    M2C_FIELD(arg0, s8 *, 0x3A) = 0;
    M2C_FIELD(arg0, s8 *, 0x3B) = 0;
}

#pragma push
#pragma peephole off
void *fn_8009DDC8(void *arg0, s16 arg1) {
    void *temp_r3;
    void *temp_r4;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_8022A5E4;
        if (0 /* draft: did not compile */) {
            /* draft: did not compile: fn_8009F56C(arg0 + 0x2C, 0); */
        }
        if (0 /* draft: did not compile */) {
            /* draft: did not compile: fn_8009F484(arg0 + 0x20, 0); */
        }
        if (0 /* draft: did not compile */) {
            /* draft: did not compile: fn_8009F350(arg0 + 0x14, 0); */
        }
        if (0 /* draft: did not compile */) {
            temp_r4 = M2C_FIELD(arg0, void **, 0xC);
            if (temp_r4 != NULL) {
                M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
                if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                    temp_r3 = M2C_FIELD(arg0, void **, 0xC);
                    if (temp_r3 != NULL) {
                        M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            M2C_FIELD(arg0, void **, 0xC) = NULL;
        }
        if (arg0 != NULL) {
            M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_8022A67C;
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}
#pragma pop

u32 fn_8009DEDC(s32 *arg0) {
    s32 *sp8;
    s8 var_r3;
    s8 var_r30;

    var_r30 = 0;
    /* draft: did not compile: var_r3 = get_up_vector_for_viewing_mtx(0x1B8); */
    if (var_r3 != 0U) {
        sp8 = arg0;
        if (arg0 != NULL) {
            *arg0 += 1;
        }
        var_r30 = 1;
        var_r3 = fn_80073810(&sp8);
    }
    if (var_r30 != 0) {
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) -= 1;
            if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp8, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp8 = NULL;
    }
    return var_r3;
}

void fn_8009DFA0(s32 **arg0, void *arg1, s32 arg2) {
    s32 *temp_r0;
    s32 *temp_r4;
    s32 *temp_r4_2;
    s32 *temp_r4_3;
    s32 *temp_r4_4;
    s32 temp_r5;

    if ((u32) (arg2 + 0xC8000000) == 0U) {
        *arg0 = NULL;
        temp_r4 = *arg0;
        if (temp_r4 != NULL) {
            *temp_r4 += 1;
        }
    } else {
        temp_r5 = arg2 & 0xFFF;
        if ((temp_r5 < 0) || ((u32) temp_r5 >= (u32) M2C_FIELD(arg1, u32 *, 0x18))) {
            *arg0 = NULL;
            temp_r4_2 = *arg0;
            if (temp_r4_2 != NULL) {
                *temp_r4_2 += 1;
            }
        } else {
            /* draft: did not compile: temp_r0 = *(M2C_FIELD(arg1, s32 *, 0x1C) + (temp_r5 * 4)); */
            if (temp_r0 == NULL) {
                *arg0 = NULL;
                temp_r4_3 = *arg0;
                if (temp_r4_3 != NULL) {
                    *temp_r4_3 += 1;
                }
            } else {
                *arg0 = temp_r0;
                temp_r4_4 = *arg0;
                if (temp_r4_4 != NULL) {
                    *temp_r4_4 += 1;
                }
            }
        }
    }
}

void fn_8009E060(s32 **arg0) {
    void *spC;
    s32 *sp8;

    /* draft: did not compile: fn_8009DFA0(&spC); */
    /* draft: did not compile: fn_8009E154(&sp8, &spC); */
    *arg0 = sp8;
    if ((*arg0) != NULL) {
        *(*arg0) += 1;
    }
    if (sp8 != NULL) {
        M2C_FIELD(sp8, s32 *, 0) -= 1;
        if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp8, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    sp8 = NULL;
    if (spC != NULL) {
        M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(spC, s32 *, 0) == 0) && (spC != NULL)) {
            M2C_FIELD(M2C_FIELD(spC, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    spC = NULL;
}

void fn_8009E154(s32 **arg0, s32 **arg1) {
    s32 *temp_r4;

    *arg0 = *arg1;
    temp_r4 = *arg0;
    if (temp_r4 != NULL) {
        *temp_r4 += 1;
    }
}

s32 **fn_8009E178(void *arg0, s32 arg1) {
    s32 **temp_r3;
    s32 temp_r4;

    if ((u32) (arg1 + 0xF0000000) == 0U) {
        return NULL;
    }
    temp_r4 = arg1 & 0xFFF;
    if ((temp_r4 < 0) || ((u32) temp_r4 >= (u32) M2C_FIELD(arg0, u32 *, 0x30))) {
        return NULL;
    }
    /* draft: did not compile: temp_r3 = M2C_FIELD(arg0, s32 *, 0x34) + (temp_r4 * 8); */
    if ((u32) (**temp_r3 + 0xF0000000) == 0U) {
        return NULL;
    }
    return temp_r3;
}

s32 **fn_8009E1D0(void *arg0, s32 arg1) {
    s32 **temp_r3;
    s32 temp_r4;

    if ((u32) (arg1 + 0xB8000000) == 0U) {
        return NULL;
    }
    temp_r4 = arg1 & 0xFFF;
    if ((temp_r4 < 0) || ((u32) temp_r4 >= (u32) M2C_FIELD(arg0, u32 *, 0x24))) {
        return NULL;
    }
    /* draft: did not compile: temp_r3 = M2C_FIELD(arg0, s32 *, 0x28) + (temp_r4 << 6); */
    if ((u32) (**temp_r3 + 0xB8000000) == 0U) {
        return NULL;
    }
    return temp_r3;
}

u32 fn_8009E228(void *arg0, s32 arg1) { return 0; } /* draft: stub */

u32 fn_8009E28C(void *arg0, s32 arg1) { return 0; } /* draft: stub */

void fn_8009E2F0(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0xC) == 0U) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x20)();
        do {

        } while (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 (**)(void *), 0x24)(arg0) == 0);
    }
}

void fn_8009E350(void *arg0, M2C_UNK arg_sp0) {
    s32 *sp8;
    s32 **temp_r27;
    s32 *temp_r3_3;
    s32 *temp_r4;
    s32 *temp_r6;
    s32 *var_r4;
    s32 var_r28;
    s32 var_r30;
    s32 var_r31;
    s32 var_r3;
    s32 var_r5;
    s32 var_r7;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4_2;

    temp_r3 = M2C_FIELD(arg0, void **, 8);
    if ((u32) M2C_FIELD(temp_r3, u32 *, 0x18) != 0U) {
        /* draft: did not compile: fn_8009EF20(arg0 + 0x14, M2C_FIELD(temp_r3, s32 *, 0x1C)); */
        var_r28 = 0;
        var_r30 = 0;
        var_r31 = 0;
loop_22:
        temp_r3_2 = M2C_FIELD(arg0, void **, 8);
        if (var_r30 < (s32) M2C_FIELD(temp_r3_2, s32 *, 0x1C)) {
            if (0 /* draft: did not compile */) {
                var_r4 = get_up_vector_for_viewing_mtx(0x78);
                if (var_r4 != NULL) {
                    var_r4 = fn_80078530(M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x18) + var_r31);
                }
                sp8 = var_r4;
                if (var_r4 != NULL) {
                    *var_r4 += 1;
                }
                /* draft: did not compile: temp_r27 = M2C_FIELD(arg0, s32 *, 0x1C) + var_r28; */
                if ((&sp8 != temp_r27) && (sp8 != (s32 *) *temp_r27)) {
                    if (sp8 != NULL) {
                        M2C_FIELD(sp8, s32 *, 0) += 1;
                    }
                    temp_r4 = *temp_r27;
                    if (temp_r4 != NULL) {
                        M2C_FIELD(temp_r4, s32 *, 0) -= 1;
                        if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                            temp_r3_3 = *temp_r27;
                            if (temp_r3_3 != NULL) {
                                M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                            }
                        }
                    }
                    *temp_r27 = sp8;
                }
                if (sp8 != NULL) {
                    M2C_FIELD(sp8, s32 *, 0) -= 1;
                    if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                        M2C_FIELD(M2C_FIELD(sp8, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
                sp8 = NULL;
            }
            var_r31 += 0x20;
            var_r30 += 1;
            var_r28 += 4;
            goto loop_22;
        }
        /* draft: did not compile: fn_8009F0B4(arg0 + 0x2C, M2C_FIELD(temp_r3_2, s32 *, 0x78)); */
        var_r7 = 0;
        var_r3 = 0;
        var_r5 = 0;
loop_27:
        temp_r4_2 = M2C_FIELD((s32)arg0, void **, 8);
        if (var_r7 < (s32) M2C_FIELD(temp_r4_2, s32 *, 0x78)) {
            /* draft: did not compile: temp_r6 = M2C_FIELD(temp_r4_2, s32 *, 0x74) + var_r5; */
            if ((u32) (*temp_r6 + 0xF0000000) != 0U) {
                /* draft: did not compile: *(M2C_FIELD(arg0, s32 *, 0x34) + var_r3) = temp_r6; */
            }
            var_r5 += 8;
            var_r7 += 1;
            var_r3 += 8;
            goto loop_27;
        }
    }
}

#pragma push
#pragma dont_inline on
s32 fn_8009E540(void *arg0, M2C_UNK arg_sp0) {
    void *spC;
    void *sp8;
    void *temp_r29;
    u32 var_r0;
    s32 var_r29;
    s32 var_r30;
    s32 var_r31;
    u32 temp_r26;
    s32 var_r27;
    u32 var_r0_2;
    s32 var_r26;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;

    if ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 8), u32 *, 0x18) == 0U) {
        return 1;
    }
    var_r29 = 0;
    var_r27 = 0;
    var_r26 = 0;
loop_7:
    temp_r3 = M2C_FIELD(arg0, void **, 8);
    if (var_r27 >= (s32) M2C_FIELD(temp_r3, s32 *, 0x1C)) {
        var_r30 = 0;
        var_r31 = 0;
loop_44:
        temp_r3_2 = M2C_FIELD(arg0, void **, 8);
        if (var_r30 < (s32) M2C_FIELD(temp_r3_2, s32 *, 0x70)) {
            /* draft: did not compile: temp_r29 = M2C_FIELD(temp_r3_2, s32 *, 0x6C) + var_r31; */
            /* draft: did not compile: fn_8009DFA0(&sp8, arg0, M2C_FIELD(temp_r29, s32 *, 0x10)); */
            spC = sp8;
            if (sp8 != NULL) {
                M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) + 1);
            }
            if (sp8 != NULL) {
                M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
                if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                    M2C_FIELD(M2C_FIELD(sp8, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
            sp8 = NULL;
            if (((u32) (M2C_FIELD(temp_r29, s32 *, 0) + 0xF8000000) == 0U) || (spC == NULL)) {
                if (spC != NULL) {
                    M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) - 1);
                    if (((s32) M2C_FIELD(spC, s32 *, 0) == 0) && (spC != NULL)) {
                        M2C_FIELD(M2C_FIELD(spC, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
                spC = NULL;
            } else {
                temp_r26 = M2C_FIELD(spC, u32 *, 0x14);
                if (temp_r26 == 0U) {
                    if (spC != NULL) {
                        M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) - 1);
                        if (((s32) M2C_FIELD(spC, s32 *, 0) == 0) && (spC != NULL)) {
                            M2C_FIELD(M2C_FIELD(spC, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                        }
                    }
                    spC = NULL;
                } else {
                    temp_r3_3 = fn_8009E178(arg0, M2C_FIELD(temp_r29, s32 *, 0x14));
                    if ((temp_r3_3 != NULL) && ((u32) M2C_FIELD(temp_r3_3, u32 *, 4) == 0U)) {
                        s32 * dc_ctor_for_viewing_mtx = get_up_vector_for_viewing_mtx(0x34);
                        /* draft: did not compile: var_r0 = dc_ctor_for_viewing_mtx; */
                        if (var_r0 != 0U) {
                            var_r0 = fn_8007215C(temp_r26, lbl_80351B38);
                        }
                        M2C_FIELD(temp_r3_3, u32 *, 4) = var_r0;
                    }
                    temp_r3_4 = fn_8009E178(arg0, M2C_FIELD(temp_r29, s32 *, 0x18));
                    if ((temp_r3_4 != NULL) && ((u32) M2C_FIELD(temp_r3_4, u32 *, 4) == 0U)) {
                        /* draft: did not compile: var_r0_2 = dc_ctor_for_viewing_mtx; */
                        if (var_r0_2 != 0U) {
                            var_r0_2 = fn_8007215C(temp_r26, lbl_80351B3C);
                        }
                        M2C_FIELD(temp_r3_4, u32 *, 4) = var_r0_2;
                    }
                    if (spC != NULL) {
                        M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) - 1);
                        if (((s32) M2C_FIELD(spC, s32 *, 0) == 0) && (spC != NULL)) {
                            M2C_FIELD(M2C_FIELD(spC, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                        }
                    }
                    spC = NULL;
                }
            }
            var_r31 += 0x38;
            var_r30 += 1;
            goto loop_44;
        }
        return 1;
    }
    if (0 /* draft: did not compile */) {
        /* draft: did not compile: temp_r3_5 = *(M2C_FIELD(arg0, s32 *, 0x1C) + var_r29); */
        if (M2C_FIELD(M2C_FIELD(temp_r3_5, void **, 8), u8 (**)(void *), 0xC)(temp_r3_5) == 0) {
            return 0;
        }
    }
    var_r26 += 0x20;
    var_r27 += 1;
    var_r29 += 4;
    goto loop_7;
}
#pragma pop

void fn_8009E828(void *arg0, M2C_UNK arg_sp0) {
    void *sp8;
    s32 var_r28;
    s32 var_r30;
    s32 var_r31;
    void *temp_r27;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_2;

    temp_r3 = M2C_FIELD(arg0, void **, 8);
    if ((u32) M2C_FIELD(temp_r3, u32 *, 0x44) != 0U) {
        /* draft: did not compile: fn_8009EFD8(arg0 + 0x20, M2C_FIELD(temp_r3, s32 *, 0x48)); */
        var_r28 = 0;
        var_r30 = 0;
        var_r31 = 0;
loop_15:
        if (var_r30 < (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x48)) {
            /* draft: did not compile: temp_r27 = M2C_FIELD(arg0, s32 *, 0x28) + var_r28; */
            M2C_FIELD(temp_r27, s32 *, 0) = 0;
            /* draft: did not compile: temp_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x44) + var_r31; */
            if ((u32) (M2C_FIELD(temp_r4, s32 *, 0) + 0xB8000000) != 0U) {
                fn_8001FAAC(&sp8, M2C_FIELD(temp_r4, s32 *, 8));
                if (sp8 != NULL) {
                    M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) + 1);
                }
                temp_r4_2 = M2C_FIELD(temp_r27, void **, 4);
                if (temp_r4_2 != NULL) {
                    M2C_FIELD(temp_r4_2, s32 *, 0) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0) - 1);
                    if ((s32) M2C_FIELD(temp_r4_2, s32 *, 0) == 0) {
                        temp_r3_2 = M2C_FIELD(temp_r27, void **, 4);
                        if (temp_r3_2 != NULL) {
                            M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                        }
                    }
                }
                M2C_FIELD(temp_r27, void **, 4) = sp8;
                if (sp8 != NULL) {
                    M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
                    if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                        M2C_FIELD(M2C_FIELD(sp8, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
                sp8 = NULL;
            }
            var_r31 += 0x14;
            var_r30 += 1;
            var_r28 += 0x40;
            goto loop_15;
        }
    }
}

s32 fn_8009E988(void *arg0, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

void fn_8009EB18(void *arg0) {
    void *sp8;
    void *temp_r3;
    void *temp_r4;

    if (M2C_FIELD(arg0, s16 *, 0x38) == 0) {
        M2C_FIELD(arg0, s16 *, 0x38) = 1;
        fn_8009E828((void *)(0), (long)(0));
        fn_8009E350((void *)(arg0), (long)(0));
        fn_8001FCC0(&sp8, M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0xC));
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) + 1);
        }
        temp_r4 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
            if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                temp_r3 = M2C_FIELD(arg0, void **, 0xC);
                if (temp_r3 != NULL) {
                    M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
        }
        M2C_FIELD(arg0, void **, 0xC) = sp8;
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp8, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp8 = NULL;
    }
}

#pragma push
#pragma dont_inline on
s32 fn_8009EC20(void *arg0) {
    s32 temp_r4;
    void *temp_r3;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x38) == 2) {
        return 1;
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0xC);
    if (M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), u8 (**)(void *), 0xC)(temp_r3) == 0) {
        return 0;
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0x3A) == 0) {
        u8 cmpv = fn_8009E540((void *)(arg0), (long)(0));
        if (cmpv == 0) {
            return 0;
        }
        M2C_FIELD(arg0, u8 *, 0x3A) = 1U;
        goto block_8;
    }
block_8:
    if ((u8) M2C_FIELD(arg0, u8 *, 0x3B) == 0) {
        u8 cmpv = fn_8009E988((void *)(arg0), (long)(0));
        if (cmpv == 0) {
            return 0;
        }
        M2C_FIELD(arg0, u8 *, 0x3B) = 1U;
        goto block_12;
    }
block_12:
    temp_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x10);
    if (temp_r4 <= -2) {
        M2C_FIELD(arg0, s32 *, 0x10) = fn_80014298(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0xC));
    } else if (temp_r4 >= 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = fn_8009A8A8(M2C_FIELD(arg0, void **, 0xC));
    }
    M2C_FIELD(arg0, s16 *, 0x38) = 2;
    return 1;
}
#pragma pop

s16 fn_8009ED1C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x38);
}

void fn_8009ED24(void *arg0) {
    void *temp_r3;
    void *temp_r4;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x38) == 1) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x24)();
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0) == 1) && (M2C_FIELD(arg0, s16 *, 0x38) != 0)) {
        temp_r4 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
            if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                temp_r3 = M2C_FIELD(arg0, void **, 0xC);
                if (temp_r3 != NULL) {
                    M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
        }
        M2C_FIELD(arg0, void **, 0xC) = NULL;
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        /* draft: did not compile: fn_8009F27C(arg0 + 0x14); */
        /* draft: did not compile: fn_8009F3B0(arg0 + 0x20); */
        /* draft: did not compile: fn_8009F4E4(arg0 + 0x2C); */
        M2C_FIELD(arg0, s8 *, 0x3A) = 0;
        M2C_FIELD(arg0, s8 *, 0x3B) = 0;
        M2C_FIELD(arg0, s16 *, 0x38) = 0;
    }
}

s32 fn_8009EDF8(void) {
    return 5;
}

M2C_UNK *fn_8009EE00(void *arg0) {
    M2C_UNK *temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK **, 8);
    if (temp_r3 == NULL) {
        return &lbl_8034FD20;
    }
    return temp_r3;
}
