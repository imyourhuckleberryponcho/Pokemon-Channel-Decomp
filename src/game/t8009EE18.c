/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80034370(s32);
M2C_UNK fn_8009DC98(M2C_UNK *);
M2C_UNK fn_8009DD00(M2C_UNK *);
M2C_UNK fn_8009DD10();
M2C_UNK fn_800A0D48(s32, s32);
M2C_UNK fn_800A0ECC(void *, s32, s32, M2C_UNK *);
M2C_UNK fn_80005888();
s32 **get_up_vector_for_viewing_mtx(s32);
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_8022A6B4;
extern M2C_UNK lbl_8022A6D4;

void fn_8009EE18(void *arg0);
s32 fn_8009EE60(void *arg0);
void fn_8009EE68(void *arg0, u32 arg1);
void fn_8009EF20(void *arg0, u32 arg1);
void fn_8009EFD8(void *arg0, u32 arg1);
void fn_8009F0B4(void *arg0, u32 arg1);
void fn_8009F148(void *arg0);
void *fn_8009F21C(void *arg0, s16 arg1);
void fn_8009F27C(void *arg0);
void *fn_8009F350(void *arg0, s16 arg1);
void fn_8009F3B0(void *arg0);
void *fn_8009F484(void *arg0, s16 arg1);
void fn_8009F4E4(void *arg0);
void *fn_8009F56C(void *arg0, s16 arg1);
s32 **fn_8009F5CC(void *arg0, s32 **arg1, s32 **arg2, M2C_UNK arg_sp0);
void fn_8009F74C(void *arg0, s32 **arg1, u32 arg2, s32 **arg3, M2C_UNK arg_sp0);
s32 **fn_8009FC30(void *arg0, s32 **arg1, s32 **arg2, M2C_UNK arg_sp0);
void fn_8009FDB0(void *arg0, s32 **arg1, u32 arg2, s32 **arg3, M2C_UNK arg_sp0);
void *fn_800A0294(void *arg0, void *arg1, void *arg2, M2C_UNK arg_sp0);
void fn_800A049C(void *arg0, void *arg1, u32 arg2, void *arg3, M2C_UNK arg_sp0);

void fn_8009EE18(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 8);
    if ((u32) M2C_FIELD(temp_r5, u32 *, 0x28) != 0U) {
        fn_80034370(M2C_FIELD(temp_r5, s32 *, 0x24));
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x30)();
}

s32 fn_8009EE60(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

void fn_8009EE68(void *arg0, u32 arg1) {
    void *sp8;
    s32 temp_r5_2;
    s32 temp_r7;
    u32 temp_r0;
    u32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, u32 *, 4);
    if (arg1 > temp_r0) {
        sp8 = NULL;
        temp_r5 = M2C_FIELD(arg0, u32 *, 4);
        temp_r7 = M2C_FIELD(arg0, s32 *, 8);
        /* draft: did not compile: fn_8009F74C(temp_r7 + (temp_r5 * 4), arg1 - temp_r5, &sp8, temp_r7); */
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp8, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp8 = NULL;
        return;
    }
    if (arg1 < temp_r0) {
        temp_r5_2 = M2C_FIELD(arg0, s32 *, 8);
        /* draft: did not compile: fn_8009F5CC(temp_r5_2 + (arg1 * 4), temp_r5_2 + (temp_r0 * 4)); */
    }
}

void fn_8009EF20(void *arg0, u32 arg1) {
    void *sp8;
    s32 temp_r5_2;
    s32 temp_r7;
    u32 temp_r0;
    u32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, u32 *, 4);
    if (arg1 > temp_r0) {
        sp8 = NULL;
        temp_r5 = M2C_FIELD(arg0, u32 *, 4);
        temp_r7 = M2C_FIELD(arg0, s32 *, 8);
        /* draft: did not compile: fn_8009FDB0(temp_r7 + (temp_r5 * 4), arg1 - temp_r5, &sp8, temp_r7); */
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp8, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp8 = NULL;
        return;
    }
    if (arg1 < temp_r0) {
        temp_r5_2 = M2C_FIELD(arg0, s32 *, 8);
        /* draft: did not compile: fn_8009FC30(temp_r5_2 + (arg1 * 4), temp_r5_2 + (temp_r0 * 4)); */
    }
}

void fn_8009EFD8(void *arg0, u32 arg1) { } /* draft: stub */

void fn_8009F0B4(void *arg0, u32 arg1) {
    M2C_UNK sp8;
    s32 temp_r5_2;
    u32 temp_r0;
    u32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, u32 *, 4);
    if (arg1 > temp_r0) {
        fn_8009DD00(&sp8);
        temp_r5 = M2C_FIELD(arg0, u32 *, 4);
        fn_800A0ECC(arg0, M2C_FIELD(arg0, s32 *, 8) + (temp_r5 * 8), arg1 - temp_r5, &sp8);
        fn_8009DD10(&sp8, -1);
        return;
    }
    if (arg1 < temp_r0) {
        temp_r5_2 = M2C_FIELD(arg0, s32 *, 8);
        fn_800A0D48(temp_r5_2 + (arg1 * 8), temp_r5_2 + (temp_r0 * 8));
    }
}

void fn_8009F148(void *arg0) {
    u32 temp_r30;
    void **var_r29;
    void *temp_r3;
    void *temp_r4;

    temp_r30 = M2C_FIELD(arg0, u32 *, 8);
    /* draft: did not compile: var_r29 = temp_r30 + (M2C_FIELD(arg0, s32 *, 4) * 4); */
loop_7:
    if (0 /* draft: did not compile */) {
        var_r29 -= 4;
        if (var_r29 != NULL) {
            temp_r4 = *var_r29;
            if (temp_r4 != NULL) {
                M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
                if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                    temp_r3 = *var_r29;
                    if (temp_r3 != NULL) {
                        M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            *var_r29 = NULL;
        }
        goto loop_7;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 8) != 0U) {
        fn_80005888();
    }
    M2C_FIELD(arg0, u32 *, 8) = 0U;
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

void *fn_8009F21C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_8009F148((void *)(0));
        if ((u32) M2C_FIELD(arg0, u32 *, 8) != 0U) {
            fn_80005888();
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_8009F27C(void *arg0) {
    u32 temp_r30;
    void **var_r29;
    void *temp_r3;
    void *temp_r4;

    temp_r30 = M2C_FIELD(arg0, u32 *, 8);
    /* draft: did not compile: var_r29 = temp_r30 + (M2C_FIELD(arg0, s32 *, 4) * 4); */
loop_7:
    if (0 /* draft: did not compile */) {
        var_r29 -= 4;
        if (var_r29 != NULL) {
            temp_r4 = *var_r29;
            if (temp_r4 != NULL) {
                M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
                if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                    temp_r3 = *var_r29;
                    if (temp_r3 != NULL) {
                        M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            *var_r29 = NULL;
        }
        goto loop_7;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 8) != 0U) {
        fn_80005888();
    }
    M2C_FIELD(arg0, u32 *, 8) = 0U;
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

void *fn_8009F350(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_8009F27C((void *)(0));
        if ((u32) M2C_FIELD(arg0, u32 *, 8) != 0U) {
            fn_80005888();
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_8009F3B0(void *arg0) {
    u32 temp_r31;
    void *temp_r3;
    void *temp_r4;
    void *var_r30;

    temp_r31 = M2C_FIELD(arg0, u32 *, 8);
    /* draft: did not compile: var_r30 = temp_r31 + (M2C_FIELD(arg0, s32 *, 4) << 6); */
loop_8:
    if (0 /* draft: did not compile */) {
        /* draft: did not compile: var_r30 -= 0x40; */
        if (0 /* draft: did not compile */) {
            temp_r4 = M2C_FIELD(var_r30, void **, 4);
            if (temp_r4 != NULL) {
                M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
                if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                    temp_r3 = M2C_FIELD(var_r30, void **, 4);
                    if (temp_r3 != NULL) {
                        M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            M2C_FIELD(var_r30, void **, 4) = NULL;
        }
        goto loop_8;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 8) != 0U) {
        fn_80005888();
    }
    M2C_FIELD(arg0, u32 *, 8) = 0U;
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

void *fn_8009F484(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_8009F3B0((void *)(0));
        if ((u32) M2C_FIELD(arg0, u32 *, 8) != 0U) {
            fn_80005888();
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_8009F4E4(void *arg0) {
    u32 temp_r31;
    u32 var_r30;

    temp_r31 = M2C_FIELD(arg0, u32 *, 8);
    var_r30 = temp_r31 + (M2C_FIELD(arg0, s32 *, 4) * 8);
loop_2:
    if (var_r30 > temp_r31) {
        var_r30 -= 8;
        fn_8009DD10(var_r30, -1);
        goto loop_2;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 8) != 0U) {
        fn_80005888();
    }
    M2C_FIELD(arg0, u32 *, 8) = 0U;
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

void *fn_8009F56C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_8009F4E4((void *)(0));
        if ((u32) M2C_FIELD(arg0, u32 *, 8) != 0U) {
            fn_80005888();
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

s32 **fn_8009F5CC(void *arg0, s32 **arg1, s32 **arg2, M2C_UNK arg_sp0) {
    s32 **var_r26;
    s32 **var_r27;
    s32 *temp_r25;
    s32 *temp_r3;
    s32 *temp_r4;
    s32 temp_r24;
    u32 temp_r31;
    void **var_r24;
    void *temp_r3_2;
    void *temp_r4_2;

    if (arg1 == arg2) {
        return arg1;
    }
    temp_r31 = M2C_FIELD(arg0, s32 *, 8) + (M2C_FIELD(arg0, s32 *, 4) * 4);
    /* draft: did not compile: temp_r24 = (s32) (temp_r31 - arg2) / 4; */
    if (temp_r24 != 0) {
        var_r26 = arg1;
        var_r27 = arg2;
loop_14:
        if (0 /* draft: did not compile */) {
            if (var_r27 != var_r26) {
                temp_r25 = *var_r27;
                if (temp_r25 != (s32 *) *var_r26) {
                    if (temp_r25 != NULL) {
                        *temp_r25 += 1;
                    }
                    temp_r4 = *var_r26;
                    if (temp_r4 != NULL) {
                        M2C_FIELD(temp_r4, s32 *, 0) -= 1;
                        if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                            temp_r3 = *var_r26;
                            if (temp_r3 != NULL) {
                                M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                            }
                        }
                    }
                    *var_r26 = temp_r25;
                }
            }
            var_r27 += 4;
            var_r26 += 4;
            goto loop_14;
        }
    }
    /* draft: did not compile: var_r24 = arg1 + (temp_r24 * 4); */
loop_23:
    if (0 /* draft: did not compile */) {
        if (var_r24 != NULL) {
            temp_r4_2 = *var_r24;
            if (temp_r4_2 != NULL) {
                M2C_FIELD(temp_r4_2, s32 *, 0) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0) - 1);
                if ((s32) M2C_FIELD(temp_r4_2, s32 *, 0) == 0) {
                    temp_r3_2 = *var_r24;
                    if (temp_r3_2 != NULL) {
                        M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            *var_r24 = NULL;
        }
        var_r24 += 4;
        goto loop_23;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) - ((s32) (arg2 - arg1) / 4));
    return arg1;
}

void fn_8009F74C(void *arg0, s32 **arg1, u32 arg2, s32 **arg3, M2C_UNK arg_sp0) {
    s32 **sp10;
    u32 spC;
    u32 sp8;
    s32 **temp_r3_5;
    s32 **temp_r3_7;
    s32 **var_r27;
    s32 **var_r27_2;
    s32 **var_r30;
    s32 **var_r31;
    s32 **var_r3;
    s32 **var_r4;
    s32 **var_r5;
    s32 **var_r6;
    s32 **var_r7;
    s32 **var_r8;
    s32 *temp_r26;
    s32 *temp_r26_2;
    s32 *temp_r3_2;
    s32 *temp_r3_3;
    s32 *temp_r4_2;
    s32 *temp_r4_3;
    s32 *temp_r4_4;
    s32 *temp_r4_5;
    s32 *temp_r4_6;
    s32 *temp_r6_3;
    s32 *temp_r7;
    s32 *temp_r7_2;
    s32 temp_cr0_gt;
    s32 temp_r3;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 var_ctr;
    u32 temp_r3_4;
    u32 temp_r3_6;
    u32 temp_r3_8;
    u32 temp_r4;
    u32 temp_r5;
    u32 temp_r6_2;
    u32 var_ctr_2;
    u32 var_ctr_3;
    u32 var_ctr_4;
    u32 var_ctr_5;
    u32 var_ctr_6;
    u32 var_r0;
    u32 var_r26;
    u32 var_r29;

    var_r29 = arg2;
    var_r30 = arg3;
    if (var_r29 != 0) {
        if ((var_r29 > 0x3FFFFFFFU) || ((u32) M2C_FIELD(arg0, u32 *, 4) > (u32) (0x3FFFFFFF - var_r29))) {
            fn_8014F858(&__files + 0xA0, &lbl_8022A6B4, &__files);
            fn_8014BB10();
        }
        temp_r5 = M2C_FIELD(arg0, u32 *, 4);
        temp_r4 = temp_r5 + var_r29;
        if (temp_r4 <= (u32) M2C_FIELD(arg0, u32 *, 0)) {
            var_r31 = M2C_FIELD(arg0, s32 ***, 8) + (temp_r5 * 4);
            temp_r6 = (s32) (var_r31 - arg1) / 4;
            temp_cr0_gt = var_r29 > (u32) temp_r6;
            if (temp_cr0_gt != 0) {
                var_r5 = var_r31;
                var_ctr = var_r29 - temp_r6;
                if (temp_cr0_gt != 0) {
                    do {
                        if (var_r5 != NULL) {
                            *var_r5 = *var_r30;
                            temp_r4_2 = *var_r5;
                            if (temp_r4_2 != NULL) {
                                *temp_r4_2 += 1;
                            }
                        }
                        var_r5 += 4;
                        var_r29 -= 1;
                        M2C_FIELD(arg0, u32 *, 4) = (u32) (M2C_FIELD(arg0, u32 *, 4) + 1);
                        var_ctr -= 1;
                    } while (var_ctr != 0);
                }
                var_r6 = arg1;
                var_ctr_2 = (u32) ((var_r31 + 3) - arg1) >> 2U;
                if (arg1 < var_r31) {
                    do {
                        if (var_r5 != NULL) {
                            *var_r5 = *var_r6;
                            temp_r4_3 = *var_r5;
                            if (temp_r4_3 != NULL) {
                                *temp_r4_3 += 1;
                            }
                        }
                        var_r6 += 4;
                        var_r5 += 4;
                        M2C_FIELD(arg0, u32 *, 4) = (u32) (M2C_FIELD(arg0, u32 *, 4) + 1);
                        var_ctr_2 -= 1;
                    } while (var_ctr_2 != 0);
                }
            } else {
                temp_r5_2 = var_r29 * 4;
                var_r7 = var_r31 - temp_r5_2;
                var_r8 = var_r31;
                var_ctr_3 = (u32) ((var_r31 + 3) - var_r7) >> 2U;
                if (var_r7 < var_r31) {
                    do {
                        if (var_r8 != NULL) {
                            *var_r8 = *var_r7;
                            temp_r4_4 = *var_r8;
                            if (temp_r4_4 != NULL) {
                                *temp_r4_4 += 1;
                            }
                        }
                        var_r7 += 4;
                        var_r8 += 4;
                        M2C_FIELD(arg0, u32 *, 4) = (u32) (M2C_FIELD(arg0, u32 *, 4) + 1);
                        var_ctr_3 -= 1;
                    } while (var_ctr_3 != 0);
                }
                temp_r3 = (temp_r6 - var_r29) * 4;
                if (0 /* draft: did not compile */) {
                    var_r30 += temp_r5_2;
                }
                var_r27 = arg1 + temp_r3;
loop_35:
                if (var_r27 > arg1) {
                    var_r27 -= 4;
                    var_r31 -= 4;
                    if (var_r27 != var_r31) {
                        temp_r26 = *var_r27;
                        if (temp_r26 != (s32 *) *var_r31) {
                            if (temp_r26 != NULL) {
                                *temp_r26 += 1;
                            }
                            temp_r4_5 = *var_r31;
                            if (temp_r4_5 != NULL) {
                                M2C_FIELD(temp_r4_5, s32 *, 0) -= 1;
                                if ((s32) M2C_FIELD(temp_r4_5, s32 *, 0) == 0) {
                                    temp_r3_2 = *var_r31;
                                    if (temp_r3_2 != NULL) {
                                        M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                                    }
                                }
                            }
                            *var_r31 = temp_r26;
                        }
                    }
                    goto loop_35;
                }
            }
            var_r27_2 = arg1;
loop_47:
            if (var_r29 != 0) {
                if (var_r30 != var_r27_2) {
                    temp_r26_2 = *var_r30;
                    if (temp_r26_2 != (s32 *) *var_r27_2) {
                        if (temp_r26_2 != NULL) {
                            *temp_r26_2 += 1;
                        }
                        temp_r4_6 = *var_r27_2;
                        if (temp_r4_6 != NULL) {
                            M2C_FIELD(temp_r4_6, s32 *, 0) -= 1;
                            if ((s32) M2C_FIELD(temp_r4_6, s32 *, 0) == 0) {
                                temp_r3_3 = *var_r27_2;
                                if (temp_r3_3 != NULL) {
                                    M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                                }
                            }
                        }
                        *var_r27_2 = temp_r26_2;
                    }
                }
                var_r27_2 += 4;
                var_r29 -= 1;
                goto loop_47;
            }
            return;
        }
        var_r0 = 1;
        sp8 = 0;
        spC = 0;
        sp10 = NULL;
        temp_r3_4 = M2C_FIELD(arg0, u32 *, 0);
        if (temp_r3_4 != 0) {
            var_r0 = temp_r3_4;
        }
        var_r26 = var_r0;
loop_55:
        if (temp_r4 > var_r26) {
            if (var_r26 < 0x1FFFFFFFU) {
                var_r26 *= 2;
            } else {
                var_r26 = 0x3FFFFFFF;
            }
            goto loop_55;
        }
        temp_r3_5 = get_up_vector_for_viewing_mtx(var_r26 * 4);
        if (temp_r3_5 == NULL) {
            fn_8014F858(&__files + 0xA0, &lbl_8022A6D4, &__files);
            fn_8014BB10();
        }
        sp10 = temp_r3_5;
        var_r3 = temp_r3_5;
        sp8 = var_r26;
        var_r4 = M2C_FIELD(arg0, s32 ***, 8);
        /* draft: did not compile: temp_r6_2 = var_r4 + (M2C_FIELD(arg0, u32 *, 4) * 4); */
        var_ctr_4 = (u32) ((arg1 + 3) - var_r4) >> 2U;
        if (var_r4 < arg1) {
            do {
                if (var_r3 != NULL) {
                    *var_r3 = *var_r4;
                    temp_r7 = *var_r3;
                    if (temp_r7 != NULL) {
                        *temp_r7 += 1;
                    }
                }
                var_r4 += 4;
                var_r3 += 4;
                spC += 1;
                var_ctr_4 -= 1;
            } while (var_ctr_4 != 0);
        }
        var_ctr_5 = var_r29;
        if (var_r29 != 0) {
            do {
                if (var_r3 != NULL) {
                    *var_r3 = *var_r30;
                    temp_r7_2 = *var_r3;
                    if (temp_r7_2 != NULL) {
                        *temp_r7_2 += 1;
                    }
                }
                var_r3 += 4;
                spC += 1;
                var_ctr_5 -= 1;
            } while (var_ctr_5 != 0);
        }
        /* draft: did not compile: var_ctr_6 = (u32) ((temp_r6_2 + 3) - var_r4) >> 2U; */
        if (0 /* draft: did not compile */) {
            do {
                if (var_r3 != NULL) {
                    *var_r3 = *var_r4;
                    temp_r6_3 = *var_r3;
                    if (temp_r6_3 != NULL) {
                        *temp_r6_3 += 1;
                    }
                }
                var_r4 += 4;
                var_r3 += 4;
                spC += 1;
                var_ctr_6 -= 1;
            } while (var_ctr_6 != 0);
        }
        if (&sp8 != arg0) {
            temp_r3_6 = sp8;
            sp8 = M2C_FIELD(arg0, u32 *, 0);
            M2C_FIELD(arg0, u32 *, 0) = temp_r3_6;
            temp_r3_7 = sp10;
            sp10 = M2C_FIELD(arg0, s32 ***, 8);
            M2C_FIELD(arg0, s32 ***, 8) = temp_r3_7;
            temp_r3_8 = spC;
            spC = M2C_FIELD(arg0, u32 *, 4);
            M2C_FIELD(arg0, u32 *, 4) = temp_r3_8;
        }
        fn_8009F21C(&sp8, -1);
    }
}

s32 **fn_8009FC30(void *arg0, s32 **arg1, s32 **arg2, M2C_UNK arg_sp0) {
    s32 **var_r26;
    s32 **var_r27;
    s32 *temp_r25;
    s32 *temp_r3;
    s32 *temp_r4;
    s32 temp_r24;
    u32 temp_r31;
    void **var_r24;
    void *temp_r3_2;
    void *temp_r4_2;

    if (arg1 == arg2) {
        return arg1;
    }
    temp_r31 = M2C_FIELD(arg0, s32 *, 8) + (M2C_FIELD(arg0, s32 *, 4) * 4);
    /* draft: did not compile: temp_r24 = (s32) (temp_r31 - arg2) / 4; */
    if (temp_r24 != 0) {
        var_r26 = arg1;
        var_r27 = arg2;
loop_14:
        if (0 /* draft: did not compile */) {
            if (var_r27 != var_r26) {
                temp_r25 = *var_r27;
                if (temp_r25 != (s32 *) *var_r26) {
                    if (temp_r25 != NULL) {
                        *temp_r25 += 1;
                    }
                    temp_r4 = *var_r26;
                    if (temp_r4 != NULL) {
                        M2C_FIELD(temp_r4, s32 *, 0) -= 1;
                        if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                            temp_r3 = *var_r26;
                            if (temp_r3 != NULL) {
                                M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                            }
                        }
                    }
                    *var_r26 = temp_r25;
                }
            }
            var_r27 += 4;
            var_r26 += 4;
            goto loop_14;
        }
    }
    /* draft: did not compile: var_r24 = arg1 + (temp_r24 * 4); */
loop_23:
    if (0 /* draft: did not compile */) {
        if (var_r24 != NULL) {
            temp_r4_2 = *var_r24;
            if (temp_r4_2 != NULL) {
                M2C_FIELD(temp_r4_2, s32 *, 0) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0) - 1);
                if ((s32) M2C_FIELD(temp_r4_2, s32 *, 0) == 0) {
                    temp_r3_2 = *var_r24;
                    if (temp_r3_2 != NULL) {
                        M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            *var_r24 = NULL;
        }
        var_r24 += 4;
        goto loop_23;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) - ((s32) (arg2 - arg1) / 4));
    return arg1;
}

void fn_8009FDB0(void *arg0, s32 **arg1, u32 arg2, s32 **arg3, M2C_UNK arg_sp0) {
    s32 **sp10;
    u32 spC;
    u32 sp8;
    s32 **temp_r3_5;
    s32 **temp_r3_7;
    s32 **var_r27;
    s32 **var_r27_2;
    s32 **var_r30;
    s32 **var_r31;
    s32 **var_r3;
    s32 **var_r4;
    s32 **var_r5;
    s32 **var_r6;
    s32 **var_r7;
    s32 **var_r8;
    s32 *temp_r26;
    s32 *temp_r26_2;
    s32 *temp_r3_2;
    s32 *temp_r3_3;
    s32 *temp_r4_2;
    s32 *temp_r4_3;
    s32 *temp_r4_4;
    s32 *temp_r4_5;
    s32 *temp_r4_6;
    s32 *temp_r6_3;
    s32 *temp_r7;
    s32 *temp_r7_2;
    s32 temp_cr0_gt;
    s32 temp_r3;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 var_ctr;
    u32 temp_r3_4;
    u32 temp_r3_6;
    u32 temp_r3_8;
    u32 temp_r4;
    u32 temp_r5;
    u32 temp_r6_2;
    u32 var_ctr_2;
    u32 var_ctr_3;
    u32 var_ctr_4;
    u32 var_ctr_5;
    u32 var_ctr_6;
    u32 var_r0;
    u32 var_r26;
    u32 var_r29;

    var_r29 = arg2;
    var_r30 = arg3;
    if (var_r29 != 0) {
        if ((var_r29 > 0x3FFFFFFFU) || ((u32) M2C_FIELD(arg0, u32 *, 4) > (u32) (0x3FFFFFFF - var_r29))) {
            fn_8014F858(&__files + 0xA0, &lbl_8022A6B4, &__files);
            fn_8014BB10();
        }
        temp_r5 = M2C_FIELD(arg0, u32 *, 4);
        temp_r4 = temp_r5 + var_r29;
        if (temp_r4 <= (u32) M2C_FIELD(arg0, u32 *, 0)) {
            var_r31 = M2C_FIELD(arg0, s32 ***, 8) + (temp_r5 * 4);
            temp_r6 = (s32) (var_r31 - arg1) / 4;
            temp_cr0_gt = var_r29 > (u32) temp_r6;
            if (temp_cr0_gt != 0) {
                var_r5 = var_r31;
                var_ctr = var_r29 - temp_r6;
                if (temp_cr0_gt != 0) {
                    do {
                        if (var_r5 != NULL) {
                            *var_r5 = *var_r30;
                            temp_r4_2 = *var_r5;
                            if (temp_r4_2 != NULL) {
                                *temp_r4_2 += 1;
                            }
                        }
                        var_r5 += 4;
                        var_r29 -= 1;
                        M2C_FIELD(arg0, u32 *, 4) = (u32) (M2C_FIELD(arg0, u32 *, 4) + 1);
                        var_ctr -= 1;
                    } while (var_ctr != 0);
                }
                var_r6 = arg1;
                var_ctr_2 = (u32) ((var_r31 + 3) - arg1) >> 2U;
                if (arg1 < var_r31) {
                    do {
                        if (var_r5 != NULL) {
                            *var_r5 = *var_r6;
                            temp_r4_3 = *var_r5;
                            if (temp_r4_3 != NULL) {
                                *temp_r4_3 += 1;
                            }
                        }
                        var_r6 += 4;
                        var_r5 += 4;
                        M2C_FIELD(arg0, u32 *, 4) = (u32) (M2C_FIELD(arg0, u32 *, 4) + 1);
                        var_ctr_2 -= 1;
                    } while (var_ctr_2 != 0);
                }
            } else {
                temp_r5_2 = var_r29 * 4;
                var_r7 = var_r31 - temp_r5_2;
                var_r8 = var_r31;
                var_ctr_3 = (u32) ((var_r31 + 3) - var_r7) >> 2U;
                if (var_r7 < var_r31) {
                    do {
                        if (var_r8 != NULL) {
                            *var_r8 = *var_r7;
                            temp_r4_4 = *var_r8;
                            if (temp_r4_4 != NULL) {
                                *temp_r4_4 += 1;
                            }
                        }
                        var_r7 += 4;
                        var_r8 += 4;
                        M2C_FIELD(arg0, u32 *, 4) = (u32) (M2C_FIELD(arg0, u32 *, 4) + 1);
                        var_ctr_3 -= 1;
                    } while (var_ctr_3 != 0);
                }
                temp_r3 = (temp_r6 - var_r29) * 4;
                if (0 /* draft: did not compile */) {
                    var_r30 += temp_r5_2;
                }
                var_r27 = arg1 + temp_r3;
loop_35:
                if (var_r27 > arg1) {
                    var_r27 -= 4;
                    var_r31 -= 4;
                    if (var_r27 != var_r31) {
                        temp_r26 = *var_r27;
                        if (temp_r26 != (s32 *) *var_r31) {
                            if (temp_r26 != NULL) {
                                *temp_r26 += 1;
                            }
                            temp_r4_5 = *var_r31;
                            if (temp_r4_5 != NULL) {
                                M2C_FIELD(temp_r4_5, s32 *, 0) -= 1;
                                if ((s32) M2C_FIELD(temp_r4_5, s32 *, 0) == 0) {
                                    temp_r3_2 = *var_r31;
                                    if (temp_r3_2 != NULL) {
                                        M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                                    }
                                }
                            }
                            *var_r31 = temp_r26;
                        }
                    }
                    goto loop_35;
                }
            }
            var_r27_2 = arg1;
loop_47:
            if (var_r29 != 0) {
                if (var_r30 != var_r27_2) {
                    temp_r26_2 = *var_r30;
                    if (temp_r26_2 != (s32 *) *var_r27_2) {
                        if (temp_r26_2 != NULL) {
                            *temp_r26_2 += 1;
                        }
                        temp_r4_6 = *var_r27_2;
                        if (temp_r4_6 != NULL) {
                            M2C_FIELD(temp_r4_6, s32 *, 0) -= 1;
                            if ((s32) M2C_FIELD(temp_r4_6, s32 *, 0) == 0) {
                                temp_r3_3 = *var_r27_2;
                                if (temp_r3_3 != NULL) {
                                    M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                                }
                            }
                        }
                        *var_r27_2 = temp_r26_2;
                    }
                }
                var_r27_2 += 4;
                var_r29 -= 1;
                goto loop_47;
            }
            return;
        }
        var_r0 = 1;
        sp8 = 0;
        spC = 0;
        sp10 = NULL;
        temp_r3_4 = M2C_FIELD(arg0, u32 *, 0);
        if (temp_r3_4 != 0) {
            var_r0 = temp_r3_4;
        }
        var_r26 = var_r0;
loop_55:
        if (temp_r4 > var_r26) {
            if (var_r26 < 0x1FFFFFFFU) {
                var_r26 *= 2;
            } else {
                var_r26 = 0x3FFFFFFF;
            }
            goto loop_55;
        }
        temp_r3_5 = get_up_vector_for_viewing_mtx(var_r26 * 4);
        if (temp_r3_5 == NULL) {
            fn_8014F858(&__files + 0xA0, &lbl_8022A6D4, &__files);
            fn_8014BB10();
        }
        sp10 = temp_r3_5;
        var_r3 = temp_r3_5;
        sp8 = var_r26;
        var_r4 = M2C_FIELD(arg0, s32 ***, 8);
        /* draft: did not compile: temp_r6_2 = var_r4 + (M2C_FIELD(arg0, u32 *, 4) * 4); */
        var_ctr_4 = (u32) ((arg1 + 3) - var_r4) >> 2U;
        if (var_r4 < arg1) {
            do {
                if (var_r3 != NULL) {
                    *var_r3 = *var_r4;
                    temp_r7 = *var_r3;
                    if (temp_r7 != NULL) {
                        *temp_r7 += 1;
                    }
                }
                var_r4 += 4;
                var_r3 += 4;
                spC += 1;
                var_ctr_4 -= 1;
            } while (var_ctr_4 != 0);
        }
        var_ctr_5 = var_r29;
        if (var_r29 != 0) {
            do {
                if (var_r3 != NULL) {
                    *var_r3 = *var_r30;
                    temp_r7_2 = *var_r3;
                    if (temp_r7_2 != NULL) {
                        *temp_r7_2 += 1;
                    }
                }
                var_r3 += 4;
                spC += 1;
                var_ctr_5 -= 1;
            } while (var_ctr_5 != 0);
        }
        /* draft: did not compile: var_ctr_6 = (u32) ((temp_r6_2 + 3) - var_r4) >> 2U; */
        if (0 /* draft: did not compile */) {
            do {
                if (var_r3 != NULL) {
                    *var_r3 = *var_r4;
                    temp_r6_3 = *var_r3;
                    if (temp_r6_3 != NULL) {
                        *temp_r6_3 += 1;
                    }
                }
                var_r4 += 4;
                var_r3 += 4;
                spC += 1;
                var_ctr_6 -= 1;
            } while (var_ctr_6 != 0);
        }
        if (&sp8 != arg0) {
            temp_r3_6 = sp8;
            sp8 = M2C_FIELD(arg0, u32 *, 0);
            M2C_FIELD(arg0, u32 *, 0) = temp_r3_6;
            temp_r3_7 = sp10;
            sp10 = M2C_FIELD(arg0, s32 ***, 8);
            M2C_FIELD(arg0, s32 ***, 8) = temp_r3_7;
            temp_r3_8 = spC;
            spC = M2C_FIELD(arg0, u32 *, 4);
            M2C_FIELD(arg0, u32 *, 4) = temp_r3_8;
        }
        fn_8009F350(&sp8, -1);
    }
}

void *fn_800A0294(void *arg0, void *arg1, void *arg2, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_800A049C(void *arg0, void *arg1, u32 arg2, void *arg3, M2C_UNK arg_sp0) { } /* draft: stub */
