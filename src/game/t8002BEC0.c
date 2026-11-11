/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80015570(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_8001BADC(void **, void *);
M2C_UNK fn_80028D80(void *);
u32 fn_8002B3F4(s32, M2C_UNK);
s32 fn_8002B410(s32, M2C_UNK);
M2C_UNK fn_8002BE60();
M2C_UNK method_setAnishape(void *, s32);
s32 method_requestMotionUrgently(void *, u32, f32);
M2C_UNK fn_800A1720(s32, M2C_UNK);
extern f32 lbl_80351618;
f64 Floor();
extern f64 lbl_80351680;
extern f64 lbl_80351688;
extern f64 lbl_80351690;
extern f64 lbl_80351698;
extern f64 lbl_803516A0;
extern f64 lbl_803516A8;
extern f64 lbl_803516B0;
extern f64 lbl_803516B8;
extern f64 lbl_803516C0;
void *get_up_vector_for_viewing_mtx(M2C_UNK);
M2C_UNK fn_80012CF8(void *, M2C_UNK *, s32);
M2C_UNK fn_8001FFF4(void **, s32);
M2C_UNK fn_8002B390(s32, M2C_UNK);
M2C_UNK fn_8002B42C(s32);
M2C_UNK fn_8002F4CC(M2C_UNK *, void *, void **, void **);
M2C_UNK fn_8002F57C(M2C_UNK *, void *, void **, s32 *);
M2C_UNK *fn_80034370(s32, M2C_UNK *, void *, u8, void *, f32);
u8 method_isMotionCompleted();
s32 fn_800807CC(M2C_UNK, void *, u8, u8, void *, f32);
u8 GetGlobalFlag();
s32 GetPiktyName();
void *fn_800A163C(M2C_UNK, s32);
M2C_UNK method_setTTColSpacing(void *, M2C_UNK, u8, void *, f32);
M2C_UNK fn_800A17A8(void *);
M2C_UNK fn_8014F5B4(M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, M2C_UNK *);
M2C_UNK fn_8014F694(M2C_UNK *, M2C_UNK, M2C_UNK *, s32);
s32 fn_80152DAC();
s32 strlen(M2C_UNK *);
extern M2C_UNK lbl_801CB330;
extern s32 lbl_801CB89C;
extern M2C_UNK lbl_80222D28;
extern M2C_UNK lbl_80222D38;
extern M2C_UNK lbl_802C0248;
extern M2C_UNK lbl_802C0270;
extern M2C_UNK lbl_8034E85C;
extern M2C_UNK lbl_8034E860;
extern M2C_UNK lbl_8034E868;
extern M2C_UNK lbl_8034E870;
extern M2C_UNK lbl_8034E874;
extern M2C_UNK lbl_8034E87C;
extern f32 lbl_8035161C;
extern f32 lbl_80351650;
extern f32 lbl_80351660;
extern f32 lbl_80351674;
extern f32 lbl_80351678;
extern f32 lbl_803516C8;
extern f32 lbl_803516CC;
extern f32 lbl_803516D0;
extern f32 lbl_803516D4;
extern f32 lbl_803516D8;
extern f32 lbl_803516DC;
extern f32 lbl_803516E0;
extern f32 lbl_803516E4;
extern f32 lbl_803516E8;
extern f32 lbl_803516EC;
extern f32 lbl_803516F0;
extern f32 lbl_803516F4;
extern f32 lbl_803516F8;
extern f32 lbl_803516FC;
M2C_UNK GetMotionEndFrame(void **, s32);
M2C_UNK fn_8001E6D0(s32);
M2C_UNK fn_800202C0();
M2C_UNK ShowModoru(void *);
u8 fn_8002B934(void *);
M2C_UNK fn_8002F67C();
extern s32 lbl_803504F8;

void CloseSystemMenu(void *arg0);
s32 fn_8002C0D8(void *arg0);
s32 fn_8002C2D8(void *arg0, s32 arg1);
void fn_8002C40C(void *arg0);
void fn_8002D70C(void *arg0, u32 arg1);
s32 fn_8002D7EC(s32 arg0);
void fn_8002D8EC(void *arg0);

void CloseSystemMenu(void *arg0) {
    void *sp8;
    s32 temp_r29;
    u32 var_r28;
    void *temp_r31;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r4;

    temp_r31 = M2C_FIELD(arg0, void **, 0xC);
    if ((s32) M2C_FIELD(temp_r31, s32 *, 0xE4) == 2) {
        fn_8002BE60();
        temp_r3 = M2C_FIELD(arg0, void **, 0xD0);
        if (temp_r3 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
        temp_r3_2 = M2C_FIELD(arg0, void **, 0xD4);
        if (temp_r3_2 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x20), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
        temp_r3_3 = M2C_FIELD(arg0, void **, 0xD8);
        if (temp_r3_3 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 0x20), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
        temp_r3_4 = M2C_FIELD(arg0, void **, 0xDC);
        if (temp_r3_4 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3_4, void **, 0x20), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
        fn_800A1720(M2C_FIELD(arg0, s32 *, 0x84), 1);
        fn_800A1720(M2C_FIELD(arg0, s32 *, 0x88), 1);
        fn_800A1720(M2C_FIELD(arg0, s32 *, 0x8C), 1);
        M2C_FIELD(arg0, void **, 0xD0) = NULL;
        M2C_FIELD(arg0, void **, 0xD4) = NULL;
        M2C_FIELD(arg0, void **, 0xD8) = NULL;
        M2C_FIELD(arg0, void **, 0xDC) = NULL;
        M2C_FIELD(arg0, s32 *, 0x84) = 0;
        M2C_FIELD(arg0, s32 *, 0x88) = 0;
        M2C_FIELD(arg0, s32 *, 0x8C) = 0;
        var_r28 = fn_8002B3F4(M2C_FIELD(arg0, s32 *, 0xE4), 6);
        temp_r4 = M2C_FIELD(temp_r31, void **, 0xC8);
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, s32 *, 8) = (s32) (M2C_FIELD(temp_r4, s32 *, 8) & 0xFFDFFFFF);
            if (!((var_r28 >> 0x1BU) & 0xF)) {
                fn_8001BADC(&sp8, M2C_FIELD(temp_r31, void **, 0xC8));
                temp_r29 = M2C_FIELD(M2C_FIELD(sp8, void **, 8), s32 *, 4);
                if (sp8 != NULL) {
                    M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
                    if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                        M2C_FIELD(M2C_FIELD(sp8, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
                sp8 = NULL;
                var_r28 = ((temp_r29 << 0xC) & 0x07FFF000) | 0x38000000 | (var_r28 & 0xFFF);
            }
            M2C_FIELD(temp_r31, s32 *, 0xE0) = method_requestMotionUrgently(M2C_FIELD(temp_r31, void **, 0xC8), var_r28, lbl_80351618);
        }
        method_setAnishape(M2C_FIELD(temp_r31, void **, 0xC8), fn_8002B410(M2C_FIELD(arg0, s32 *, 0xE4), 2));
        M2C_FIELD(temp_r31, s32 *, 0xE4) = 3;
        method_requestMotionUrgently(M2C_FIELD(arg0, void **, 0xE0), 0x3A7AB001U, lbl_80351618);
        fn_80028D80(arg0);
        fn_80015570(0x3F0, 0x60, 0x40);
    }
}

s32 fn_8002C0D8(void *arg0) { return 0; } /* draft: stub */

s32 fn_8002C2D8(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xEC);
    if (temp_r0 != 9) {
        if (temp_r0 < 9) {
            if (temp_r0 != 7) {
                if (temp_r0 < 7) {
                    return 0;
                }
                if (arg1 < 0x156F) {
                    if (arg1 != 0x1560) {
                        if (arg1 < 0x1560) {
                            if (arg1 < 0x13A8) {
                                if (arg1 < 0x139F) {
                                    if (arg1 < 0x138C) {
                                        /* Duplicate return node #45. Try simplifying control flow for better match */
                                        return 4;
                                    }
                                    /* Duplicate return node #44. Try simplifying control flow for better match */
                                    return 3;
                                }
                                if (arg1 < 0x13A2) {
                                    /* Duplicate return node #45. Try simplifying control flow for better match */
                                    return 4;
                                }
                                /* Duplicate return node #44. Try simplifying control flow for better match */
                                return 3;
                            }
                            if (arg1 != 0x155C) {
                                /* Duplicate return node #45. Try simplifying control flow for better match */
                                return 4;
                            }
                            /* Duplicate return node #44. Try simplifying control flow for better match */
                            return 3;
                        }
                        if (arg1 != 0x1566) {
                            if (arg1 < 0x1566) {
                                if (arg1 != 0x1563) {
                                    /* Duplicate return node #45. Try simplifying control flow for better match */
                                    return 4;
                                }
                                /* Duplicate return node #44. Try simplifying control flow for better match */
                                return 3;
                            }
                            if (arg1 < 0x156C) {
                                if (arg1 < 0x156A) {
                                    /* Duplicate return node #45. Try simplifying control flow for better match */
                                    return 4;
                                }
                                /* Duplicate return node #44. Try simplifying control flow for better match */
                                return 3;
                            }
                            /* Duplicate return node #45. Try simplifying control flow for better match */
                            return 4;
                        }
                        /* Duplicate return node #44. Try simplifying control flow for better match */
                        return 3;
                    }
                    /* Duplicate return node #44. Try simplifying control flow for better match */
                    return 3;
                }
                if (arg1 != 0x157D) {
                    if (arg1 < 0x157D) {
                        if (arg1 != 0x1574) {
                            if (arg1 < 0x1574) {
                                if (arg1 < 0x1571) {
                                    /* Duplicate return node #44. Try simplifying control flow for better match */
                                    return 3;
                                }
                                /* Duplicate return node #45. Try simplifying control flow for better match */
                                return 4;
                            }
                            if (arg1 != 0x1578) {
                                /* Duplicate return node #45. Try simplifying control flow for better match */
                                return 4;
                            }
                            /* Duplicate return node #44. Try simplifying control flow for better match */
                            return 3;
                        }
                        /* Duplicate return node #44. Try simplifying control flow for better match */
                        return 3;
                    }
                    if (arg1 < 0x158D) {
                        if (arg1 < 0x1587) {
                            if (arg1 < 0x1582) {
                                /* Duplicate return node #45. Try simplifying control flow for better match */
                                return 4;
                            }
                            /* Duplicate return node #44. Try simplifying control flow for better match */
                            return 3;
                        }
                        if (arg1 < 0x158A) {
                            /* Duplicate return node #45. Try simplifying control flow for better match */
                            return 4;
                        }
                        /* Duplicate return node #44. Try simplifying control flow for better match */
                        return 3;
                    }
                    if (arg1 < 0x1594) {
                        if (arg1 < 0x158F) {
                            /* Duplicate return node #45. Try simplifying control flow for better match */
                            return 4;
                        }
                        /* Duplicate return node #44. Try simplifying control flow for better match */
                        return 3;
                    }
                    return 4;
                }
                return 3;
            }
            return 0;
        }
        if (temp_r0 < 0xB) {
            return 2;
        }
        return 0;
    }
    return 1;
}

void fn_8002C40C(void *arg0) { } /* draft: stub */

void fn_8002D70C(void *arg0, u32 arg1) {
    void *sp8;
    unsigned int var_r30;
    s32 temp_r31;
    void *temp_r4;

    var_r30 = arg1;
    temp_r4 = M2C_FIELD(arg0, void **, 0);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, s32 *, 8) = (s32) (M2C_FIELD(temp_r4, s32 *, 8) & 0xFFDFFFFF);
        if (!((var_r30 >> 0x1BU) & 0xF)) {
            fn_8001BADC(&sp8, M2C_FIELD(arg0, void **, 0));
            temp_r31 = M2C_FIELD(M2C_FIELD(sp8, void **, 8), s32 *, 4);
            if (sp8 != NULL) {
                M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
                if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                    M2C_FIELD(M2C_FIELD(sp8, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
            sp8 = NULL;
            var_r30 = ((temp_r31 << 0xC) & 0x07FFF000) | 0x38000000 | (var_r30 & 0xFFF);
        }
        M2C_FIELD(arg0, s32 *, 0x18) = method_requestMotionUrgently(M2C_FIELD(arg0, void **, 0), var_r30, lbl_80351618);
    }
}

s32 fn_8002D7EC(s32 arg0) {
    void *sp8;
    s32 temp_r31;
    void *spC;

    GetMotionEndFrame(&sp8, arg0);
    spC = sp8;
    if (sp8 != NULL) {
        M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) + 1);
    }
    if (sp8 != NULL) {
        M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp8, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    sp8 = NULL;
    temp_r31 = M2C_FIELD(M2C_FIELD(spC, void **, 4), s32 (**)(void *), 0xC)(spC);
    if (spC != NULL) {
        M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(spC, s32 *, 0) == 0) && (spC != NULL)) {
            M2C_FIELD(M2C_FIELD(spC, void **, 4), M2C_UNK (**)(void *, M2C_UNK), 8)(spC, 1);
        }
    }
    spC = NULL;
    return temp_r31;
}

void fn_8002D8EC(void *arg0) {
    void *sp10;
    s32 spC;
    M2C_UNK sp8;
    s32 temp_r0;
    u8 var_r3;
    u8 var_r3_2;
    void *temp_r31;
    void *temp_r7;

    temp_r31 = M2C_FIELD(arg0, void **, 0xC);
    temp_r0 = M2C_FIELD(temp_r31, s32 *, 0xE4);
    switch (temp_r0) {                              /* irregular */
    case 1:
        if ((u32) M2C_FIELD(temp_r31, u32 *, 0xC8) != 0U) {
            var_r3 = method_isMotionCompleted(M2C_FIELD(temp_r31, s32 *, 0xE0), 0);
        } else {
            var_r3 = 1;
        }
        if ((var_r3 != 0) && (fn_8002B934(arg0) != 0)) {
            M2C_FIELD(temp_r31, s32 *, 0xE4) = 2;
            M2C_FIELD(arg0, s32 *, 0x64) = 0;
            ShowModoru(arg0);
            return;
        }
    case 0:
        return;
    case 2:
        fn_8002C40C((void *)(0));
        return;
    case 3:
        if ((u32) M2C_FIELD(temp_r31, u32 *, 0xC8) != 0U) {
            var_r3_2 = method_isMotionCompleted(M2C_FIELD(temp_r31, s32 *, 0xE0), 0);
        } else {
            var_r3_2 = 1;
        }
        if (var_r3_2 != 0) {
            M2C_FIELD(temp_r31, s32 *, 0xE4) = 0;
            if ((u8) M2C_FIELD(arg0, u8 *, 0x109) != 0) {
                ShowModoru(arg0);
            }
            /* draft: did not compile: temp_r7 = arg0 + 0xC8; */
            sp10 = temp_r7;
            spC = M2C_FIELD(arg0, s32 *, 0xCC);
            /* draft: did not compile: fn_8002F67C(&sp8, arg0 + 0xC4, &spC, &sp10, temp_r7); */
            fn_800202C0();
            fn_8001E6D0(lbl_803504F8);
        }
        break;
    }
}
