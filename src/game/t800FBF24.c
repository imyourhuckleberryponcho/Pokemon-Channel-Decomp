/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_80350170;
extern M2C_UNK lbl_80350178;
s32 HSD_JObjMtxIsDirty(void *);
M2C_UNK HSD_JObjSetupMatrix(void *);
s32 hsdNew(M2C_UNK *);
extern M2C_UNK lbl_802A97A8;
extern M2C_UNK lbl_80350180;
extern M2C_UNK *lbl_80350C70;
extern void *lbl_80350C84;
M2C_UNK fn_800CC2C4();
M2C_UNK PSMTXMultVec(M2C_UNK *, f32 *, f32 *);
M2C_UNK PSVECAdd(f32 *, f32 *, f32 *);
M2C_UNK PSVECSubtract();
M2C_UNK PSVECScale(f32 *, f32 *, f32);
f32 PSVECDotProduct(f32 *, f32 *);
M2C_UNK PSVECCrossProduct();
M2C_UNK HSD_MtxGetTranslate(s32, f32 *);
void *HSD_RObjGetByType(u32, M2C_UNK, M2C_UNK);
s32 HSD_RObjGetGlobalPosition();
M2C_UNK HSD_RObjUpdateAll(void *, s32);
extern M2C_UNK lbl_801DA8B0;
extern M2C_UNK lbl_801DA8BC;
extern M2C_UNK lbl_80350194;
extern M2C_UNK lbl_80350198;
extern f32 lbl_80351F60;
extern f32 lbl_80351F70;
extern f64 lbl_80351F78;
extern f32 lbl_80351F88;
extern f32 lbl_80351F8C;
extern f64 lbl_80351F90;
extern f32 lbl_80351F98;
extern f32 lbl_80351F9C;
M2C_UNK PSVECNormalize(f32 *, f32 *, void *);
f64 ArcCos();
extern M2C_UNK lbl_801DA8C8;
extern f32 lbl_80351FA0;
extern f32 lbl_80351FA4;

void HSD_JObjSetFlags(void *arg0, s32 arg1);
void fn_800FBFC0(void *arg0, s32 arg1, M2C_UNK arg_sp0);
void HSD_JObjClearFlags(void *arg0, s32 arg1);
void fn_800FC334(void *arg0, s32 arg1, M2C_UNK arg_sp0);
s32 HSD_JObjAlloc(void);
void HSD_JObjSetCurrent(void *arg0);
s32 fn_800FC7FC(void);
void resolveIKJoint1(void *arg0);
void resolveIKJoint2(void *arg0);
void HSD_JObjSetupMatrixSub(void *arg0);
void fn_800FD7C8(void *arg0, M2C_UNK arg_sp0);
s32 JObjInit(void *arg0);

void HSD_JObjSetFlags(void *arg0, s32 arg1) {
    s32 var_r3;
    s32 temp_cr0_eq;
    s32 temp_r4;

    if (arg0 != NULL) {
        if ((M2C_FIELD(arg0, s32 *, 0x14) ^ arg1) & 8) {
            temp_cr0_eq = arg0 == NULL;
            if (temp_cr0_eq == 0) {
                if (temp_cr0_eq != 0) {
                    __assert(&lbl_80350170, 0x25D, &lbl_80350178);
                }
                temp_r4 = M2C_FIELD(arg0, s32 *, 0x14);
                var_r3 = 0;
                if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                    var_r3 = 1;
                }
                if (var_r3 == 0) {
                    fn_800FD7C8((void *)(arg0), (long)(0));
                }
            }
        }
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) | arg1);
    }
}

#pragma push
#pragma dont_inline on
void fn_800FBFC0(void *arg0, s32 arg1, M2C_UNK arg_sp0) {
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 temp_cr0_eq_4;
    s32 temp_cr0_eq_5;
    s32 temp_cr0_eq_6;
    s32 temp_cr0_eq_7;
    s32 temp_cr0_eq_8;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r3_3;
    void *var_r25;
    void *var_r26;
    void *var_r27;
    void *var_r29;
    void *var_r30;
    void *var_r31;

    temp_cr0_eq = arg0 == NULL;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_eq == 0) {
            if ((M2C_FIELD(arg0, s32 *, 0x14) ^ arg1) & 8) {
                temp_cr0_eq_2 = arg0 == NULL;
                if (temp_cr0_eq_2 == 0) {
                    if (temp_cr0_eq_2 != 0) {
                        __assert(&lbl_80350170, 0x25D, &lbl_80350178);
                    }
                    temp_r4 = M2C_FIELD(arg0, s32 *, 0x14);
                    var_r3 = 0;
                    if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                        var_r3 = 1;
                    }
                    if (var_r3 == 0) {
                        fn_800FD7C8((void *)(arg0), (long)(0));
                    }
                }
            }
            M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) | arg1);
        }
        if (!(M2C_FIELD(arg0, s32 *, 0x14) & 0x1000)) {
            var_r29 = M2C_FIELD(arg0, void **, 0x10);
loop_72:
            if (var_r29 != NULL) {
                temp_cr0_eq_3 = var_r29 == NULL;
                if (temp_cr0_eq_3 == 0) {
                    if (temp_cr0_eq_3 == 0) {
                        if ((M2C_FIELD(var_r29, s32 *, 0x14) ^ arg1) & 8) {
                            temp_cr0_eq_4 = var_r29 == NULL;
                            if (temp_cr0_eq_4 == 0) {
                                if (temp_cr0_eq_4 != 0) {
                                    __assert(&lbl_80350170, 0x25D, &lbl_80350178);
                                }
                                temp_r4_2 = M2C_FIELD(var_r29, s32 *, 0x14);
                                var_r3_2 = 0;
                                if (!(temp_r4_2 & 0x800000) && (temp_r4_2 & 0x40)) {
                                    var_r3_2 = 1;
                                }
                                if (var_r3_2 == 0) {
                                    fn_800FD7C8((void *)(var_r29), (long)(0));
                                }
                            }
                        }
                        M2C_FIELD(var_r29, s32 *, 0x14) = (s32) (M2C_FIELD(var_r29, s32 *, 0x14) | arg1);
                    }
                    if (!(M2C_FIELD(var_r29, s32 *, 0x14) & 0x1000)) {
                        var_r31 = M2C_FIELD(var_r29, void **, 0x10);
loop_70:
                        if (var_r31 != NULL) {
                            temp_cr0_eq_5 = var_r31 == NULL;
                            if (temp_cr0_eq_5 == 0) {
                                if (temp_cr0_eq_5 == 0) {
                                    if ((M2C_FIELD(var_r31, s32 *, 0x14) ^ arg1) & 8) {
                                        temp_cr0_eq_6 = var_r31 == NULL;
                                        if (temp_cr0_eq_6 == 0) {
                                            if (temp_cr0_eq_6 != 0) {
                                                __assert(&lbl_80350170, 0x25D, &lbl_80350178);
                                            }
                                            temp_r4_3 = M2C_FIELD(var_r31, s32 *, 0x14);
                                            var_r3_3 = 0;
                                            if (!(temp_r4_3 & 0x800000) && (temp_r4_3 & 0x40)) {
                                                var_r3_3 = 1;
                                            }
                                            if (var_r3_3 == 0) {
                                                fn_800FD7C8((void *)(var_r31), (long)(0));
                                            }
                                        }
                                    }
                                    M2C_FIELD(var_r31, s32 *, 0x14) = (s32) (M2C_FIELD(var_r31, s32 *, 0x14) | arg1);
                                }
                                if (!(M2C_FIELD(var_r31, s32 *, 0x14) & 0x1000)) {
                                    var_r30 = M2C_FIELD(var_r31, void **, 0x10);
loop_68:
                                    if (var_r30 != NULL) {
                                        temp_cr0_eq_7 = var_r30 == NULL;
                                        if (temp_cr0_eq_7 == 0) {
                                            if (temp_cr0_eq_7 == 0) {
                                                if (((M2C_FIELD(var_r30, s32 *, 0x14) ^ arg1) & 8) && (var_r30 != NULL) && (HSD_JObjMtxIsDirty(var_r30) == 0)) {
                                                    fn_800FD7C8((void *)(var_r30), (long)(0));
                                                }
                                                M2C_FIELD(var_r30, s32 *, 0x14) = (s32) (M2C_FIELD(var_r30, s32 *, 0x14) | arg1);
                                            }
                                            if (!(M2C_FIELD(var_r30, s32 *, 0x14) & 0x1000)) {
                                                var_r27 = M2C_FIELD(var_r30, void **, 0x10);
loop_66:
                                                if (var_r27 != NULL) {
                                                    temp_cr0_eq_8 = var_r27 == NULL;
                                                    if (temp_cr0_eq_8 == 0) {
                                                        if (temp_cr0_eq_8 == 0) {
                                                            if ((M2C_FIELD(var_r27, s32 *, 0x14) ^ arg1) & 8) {
                                                                HSD_JObjSetupMatrix(var_r27);
                                                            }
                                                            M2C_FIELD(var_r27, s32 *, 0x14) = (s32) (M2C_FIELD(var_r27, s32 *, 0x14) | arg1);
                                                        }
                                                        if (!(M2C_FIELD(var_r27, s32 *, 0x14) & 0x1000)) {
                                                            var_r26 = M2C_FIELD(var_r27, void **, 0x10);
loop_64:
                                                            if (var_r26 != NULL) {
                                                                if (var_r26 != NULL) {
                                                                    HSD_JObjSetFlags(var_r26, arg1);
                                                                    if (!(M2C_FIELD(var_r26, s32 *, 0x14) & 0x1000)) {
                                                                        var_r25 = M2C_FIELD(var_r26, void **, 0x10);
loop_62:
                                                                        if (var_r25 != NULL) {
                                                                            fn_800FBFC0((void *)(var_r25), (long)(arg1), (long)(0));
                                                                            var_r25 = M2C_FIELD(var_r25, void **, 8);
                                                                            goto loop_62;
                                                                        }
                                                                    }
                                                                }
                                                                var_r26 = M2C_FIELD(var_r26, void **, 8);
                                                                goto loop_64;
                                                            }
                                                        }
                                                    }
                                                    var_r27 = M2C_FIELD(var_r27, void **, 8);
                                                    goto loop_66;
                                                }
                                            }
                                        }
                                        var_r30 = M2C_FIELD(var_r30, void **, 8);
                                        goto loop_68;
                                    }
                                }
                            }
                            var_r31 = M2C_FIELD(var_r31, void **, 8);
                            goto loop_70;
                        }
                    }
                }
                var_r29 = M2C_FIELD(var_r29, void **, 8);
                goto loop_72;
            }
        }
    }
}
#pragma pop

void HSD_JObjClearFlags(void *arg0, s32 arg1) {
    s32 var_r3;
    s32 temp_cr0_eq;
    s32 temp_r4;

    if (arg0 != NULL) {
        if ((M2C_FIELD(arg0, s32 *, 0x14) ^ arg1) & 8) {
            temp_cr0_eq = arg0 == NULL;
            if (temp_cr0_eq == 0) {
                if (temp_cr0_eq != 0) {
                    __assert(&lbl_80350170, 0x25D, &lbl_80350178);
                }
                temp_r4 = M2C_FIELD(arg0, s32 *, 0x14);
                var_r3 = 0;
                if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                    var_r3 = 1;
                }
                if (var_r3 == 0) {
                    fn_800FD7C8((void *)(arg0), (long)(0));
                }
            }
        }
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) & ~arg1);
    }
}

#pragma push
#pragma dont_inline on
void fn_800FC334(void *arg0, s32 arg1, M2C_UNK arg_sp0) {
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 temp_cr0_eq_4;
    s32 temp_cr0_eq_5;
    s32 temp_cr0_eq_6;
    s32 temp_cr0_eq_7;
    s32 temp_cr0_eq_8;
    s32 temp_r29;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r3_3;
    void *var_r24;
    void *var_r25;
    void *var_r26;
    void *var_r28;
    void *var_r30;
    void *var_r31;

    temp_cr0_eq = arg0 == NULL;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_eq == 0) {
            if ((M2C_FIELD(arg0, s32 *, 0x14) ^ arg1) & 8) {
                temp_cr0_eq_2 = arg0 == NULL;
                if (temp_cr0_eq_2 == 0) {
                    if (temp_cr0_eq_2 != 0) {
                        __assert(&lbl_80350170, 0x25D, &lbl_80350178);
                    }
                    temp_r4 = M2C_FIELD(arg0, s32 *, 0x14);
                    var_r3 = 0;
                    if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                        var_r3 = 1;
                    }
                    if (var_r3 == 0) {
                        fn_800FD7C8((void *)(arg0), (long)(0));
                    }
                }
            }
            M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) & ~arg1);
        }
        if (!(M2C_FIELD(arg0, s32 *, 0x14) & 0x1000)) {
            var_r28 = M2C_FIELD(arg0, void **, 0x10);
            temp_r29 = ~(arg1 | arg1);
loop_72:
            if (var_r28 != NULL) {
                temp_cr0_eq_3 = var_r28 == NULL;
                if (temp_cr0_eq_3 == 0) {
                    if (temp_cr0_eq_3 == 0) {
                        if ((M2C_FIELD(var_r28, s32 *, 0x14) ^ arg1) & 8) {
                            temp_cr0_eq_4 = var_r28 == NULL;
                            if (temp_cr0_eq_4 == 0) {
                                if (temp_cr0_eq_4 != 0) {
                                    __assert(&lbl_80350170, 0x25D, &lbl_80350178);
                                }
                                temp_r4_2 = M2C_FIELD(var_r28, s32 *, 0x14);
                                var_r3_2 = 0;
                                if (!(temp_r4_2 & 0x800000) && (temp_r4_2 & 0x40)) {
                                    var_r3_2 = 1;
                                }
                                if (var_r3_2 == 0) {
                                    fn_800FD7C8((void *)(var_r28), (long)(0));
                                }
                            }
                        }
                        M2C_FIELD(var_r28, s32 *, 0x14) = (s32) (M2C_FIELD(var_r28, s32 *, 0x14) & temp_r29);
                    }
                    if (!(M2C_FIELD(var_r28, s32 *, 0x14) & 0x1000)) {
                        var_r31 = M2C_FIELD(var_r28, void **, 0x10);
loop_70:
                        if (var_r31 != NULL) {
                            temp_cr0_eq_5 = var_r31 == NULL;
                            if (temp_cr0_eq_5 == 0) {
                                if (temp_cr0_eq_5 == 0) {
                                    if ((M2C_FIELD(var_r31, s32 *, 0x14) ^ arg1) & 8) {
                                        temp_cr0_eq_6 = var_r31 == NULL;
                                        if (temp_cr0_eq_6 == 0) {
                                            if (temp_cr0_eq_6 != 0) {
                                                __assert(&lbl_80350170, 0x25D, &lbl_80350178);
                                            }
                                            temp_r4_3 = M2C_FIELD(var_r31, s32 *, 0x14);
                                            var_r3_3 = 0;
                                            if (!(temp_r4_3 & 0x800000) && (temp_r4_3 & 0x40)) {
                                                var_r3_3 = 1;
                                            }
                                            if (var_r3_3 == 0) {
                                                fn_800FD7C8((void *)(var_r31), (long)(0));
                                            }
                                        }
                                    }
                                    M2C_FIELD(var_r31, s32 *, 0x14) = (s32) (M2C_FIELD(var_r31, s32 *, 0x14) & temp_r29);
                                }
                                if (!(M2C_FIELD(var_r31, s32 *, 0x14) & 0x1000)) {
                                    var_r30 = M2C_FIELD(var_r31, void **, 0x10);
loop_68:
                                    if (var_r30 != NULL) {
                                        temp_cr0_eq_7 = var_r30 == NULL;
                                        if (temp_cr0_eq_7 == 0) {
                                            if (temp_cr0_eq_7 == 0) {
                                                if (((M2C_FIELD(var_r30, s32 *, 0x14) ^ arg1) & 8) && (var_r30 != NULL) && (HSD_JObjMtxIsDirty(var_r30) == 0)) {
                                                    fn_800FD7C8((void *)(var_r30), (long)(0));
                                                }
                                                M2C_FIELD(var_r30, s32 *, 0x14) = (s32) (M2C_FIELD(var_r30, s32 *, 0x14) & temp_r29);
                                            }
                                            if (!(M2C_FIELD(var_r30, s32 *, 0x14) & 0x1000)) {
                                                var_r26 = M2C_FIELD(var_r30, void **, 0x10);
loop_66:
                                                if (var_r26 != NULL) {
                                                    temp_cr0_eq_8 = var_r26 == NULL;
                                                    if (temp_cr0_eq_8 == 0) {
                                                        if (temp_cr0_eq_8 == 0) {
                                                            if ((M2C_FIELD(var_r26, s32 *, 0x14) ^ arg1) & 8) {
                                                                HSD_JObjSetupMatrix(var_r26);
                                                            }
                                                            M2C_FIELD(var_r26, s32 *, 0x14) = (s32) (M2C_FIELD(var_r26, s32 *, 0x14) & temp_r29);
                                                        }
                                                        if (!(M2C_FIELD(var_r26, s32 *, 0x14) & 0x1000)) {
                                                            var_r25 = M2C_FIELD(var_r26, void **, 0x10);
loop_64:
                                                            if (var_r25 != NULL) {
                                                                if (var_r25 != NULL) {
                                                                    HSD_JObjClearFlags(var_r25, arg1);
                                                                    if (!(M2C_FIELD(var_r25, s32 *, 0x14) & 0x1000)) {
                                                                        var_r24 = M2C_FIELD(var_r25, void **, 0x10);
loop_62:
                                                                        if (var_r24 != NULL) {
                                                                            fn_800FC334((void *)(var_r24), (long)(arg1), (long)(0));
                                                                            var_r24 = M2C_FIELD(var_r24, void **, 8);
                                                                            goto loop_62;
                                                                        }
                                                                    }
                                                                }
                                                                var_r25 = M2C_FIELD(var_r25, void **, 8);
                                                                goto loop_64;
                                                            }
                                                        }
                                                    }
                                                    var_r26 = M2C_FIELD(var_r26, void **, 8);
                                                    goto loop_66;
                                                }
                                            }
                                        }
                                        var_r30 = M2C_FIELD(var_r30, void **, 8);
                                        goto loop_68;
                                    }
                                }
                            }
                            var_r31 = M2C_FIELD(var_r31, void **, 8);
                            goto loop_70;
                        }
                    }
                }
                var_r28 = M2C_FIELD(var_r28, void **, 8);
                goto loop_72;
            }
        }
    }
}
#pragma pop

s32 HSD_JObjAlloc(void) {
    M2C_UNK *var_r3;
    s32 temp_r3;

    var_r3 = lbl_80350C70;
    var_r3 = var_r3 != NULL ? var_r3 : &lbl_802A97A8;
    temp_r3 = hsdNew(var_r3);
    if (temp_r3 == 0) {
        __assert(&lbl_80350180, 0x7D6, &lbl_80350178);
    }
    return temp_r3;
}

void HSD_JObjSetCurrent(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    u16 temp_r3;
    u16 temp_r3_2;
    u16 temp_r4;
    void *temp_r30;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) + 1);
        if ((u16) M2C_FIELD(arg0, u16 *, 4) == -1U) {
            __assert(&lbl_802A97A8 + 0x1E0, 0x5D, &lbl_802A97A8 + 0x1EC);
        }
    }
    if ((temp_r30 = lbl_80350C84) != NULL) {
        temp_r4 = M2C_FIELD(temp_r30, u16 *, 4);
        var_r0 = temp_r4 == 0xFFFF;
        if (var_r0 != 0) {

        } else {
            M2C_FIELD(temp_r30, u16 *, 4) = (u16) (temp_r4 - 1);
            var_r0 = temp_r4 == 0;
        }
        if (var_r0 != 0) {
            temp_r3 = M2C_FIELD(temp_r30, u16 *, 6);
            if ((temp_r3 - 1) < 0) {
                if (temp_r30 != NULL) {
                    temp_r4_2 = M2C_FIELD(temp_r30, void **, 0);
                    M2C_FIELD(temp_r4_2, M2C_UNK (**)(void *, void *), 0x30)(temp_r30, temp_r4_2);
                    temp_r4_3 = M2C_FIELD(temp_r30, void **, 0);
                    M2C_FIELD(temp_r4_3, M2C_UNK (**)(void *, void *), 0x34)(temp_r30, temp_r4_3);
                }
            } else {
                M2C_FIELD(temp_r30, u16 *, 6) = (u16) (temp_r3 + 1);
                if ((u16) M2C_FIELD(temp_r30, u16 *, 6) == 0) {
                    __assert(&lbl_802A97A8 + 0x1E0, 0x9E, &lbl_802A97A8 + 0x214);
                }
                temp_r4_4 = M2C_FIELD(temp_r30, void **, 0);
                M2C_FIELD(temp_r4_4, M2C_UNK (**)(void *, void *), 0x4C)(temp_r30, temp_r4_4);
                temp_r3_2 = M2C_FIELD(temp_r30, u16 *, 6);
                var_r0_2 = temp_r3_2 == 0;
                if (var_r0_2 != 0) {

                } else {
                    M2C_FIELD(temp_r30, u16 *, 6) = (u16) (temp_r3_2 - 1);
                    var_r0_2 = M2C_FIELD(temp_r30, u16 *, 6) == 0;
                }
                if ((var_r0_2 != 0) && (temp_r30 != NULL)) {
                    temp_r4_5 = M2C_FIELD(temp_r30, void **, 0);
                    M2C_FIELD(temp_r4_5, M2C_UNK (**)(void *, void *), 0x30)(temp_r30, temp_r4_5);
                    temp_r4_6 = M2C_FIELD(temp_r30, void **, 0);
                    M2C_FIELD(temp_r4_6, M2C_UNK (**)(void *, void *), 0x34)(temp_r30, temp_r4_6);
                }
            }
        }
    }
    lbl_80350C84 = arg0;
}

s32 fn_800FC7FC(void) {
    return 0;
}

void resolveIKJoint1(void *arg0) {
    s32 sp54;
    s32 sp50;
    s32 sp30;
    s32 sp2C;
    s32 sp6C;
    s32 sp68;
    s32 sp60;
    s32 sp5C;
    s8 saved_reg_f28;
    s32 saved_reg_f27;
    M2C_UNK sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp64;
    f32 sp58;
    f32 sp4C;
    f32 sp40;
    s32 sp3C;
    s32 sp38;
    f32 sp34;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f26;
    f32 temp_f30;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    f32 var_f27;
    f32 var_f28;
    f32 var_f29;
    f32 var_f29_2;
    f32 var_f4;
    f32 var_f5;
    f64 temp_f1_3;
    f64 temp_f1_4;
    f64 temp_f1_5;
    f64 temp_f2;
    f64 temp_f2_10;
    f64 temp_f2_11;
    f64 temp_f2_12;
    f64 temp_f2_2;
    f64 temp_f2_3;
    f64 temp_f2_4;
    f64 temp_f2_5;
    f64 temp_f2_6;
    f64 temp_f2_7;
    f64 temp_f2_8;
    f64 temp_f2_9;
    s32 temp_r4;
    s32 var_r30;
    s32 var_r3;
    u32 temp_r3_3;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4_2;
    void *temp_r5;
    void *var_r28;
    void *var_r31;

    var_f27 = saved_reg_f27;
    var_f28 = saved_reg_f28;
    var_f29 = lbl_80351F60;
    var_r30 = 0;
    sp7C = M2C_FIELD(&lbl_801DA8B0, f32 *, 0);
    var_r31 = M2C_FIELD(arg0, void **, 0x10);
    sp80 = M2C_FIELD(&lbl_801DA8B0, f32 *, 4);
    sp84 = M2C_FIELD(&lbl_801DA8B0, f32 *, 8);
loop_4:
    if (var_r31 == NULL) {
        var_r31 = NULL;
    } else if ((u32) ((M2C_FIELD(var_r31, s32 *, 0x14) & 0x600000) + 0xFFC00000) == 0U) {

    } else {
        var_r31 = M2C_FIELD(var_r31, void **, 8);
        goto loop_4;
    }
    sp70 = M2C_FIELD(&lbl_801DA8BC, f32 *, 0);
    sp74 = M2C_FIELD(&lbl_801DA8BC, f32 *, 4);
    sp78 = M2C_FIELD(&lbl_801DA8BC, f32 *, 8);
    temp_r5 = M2C_FIELD(arg0, void **, 0x74);
    if (temp_r5 != NULL) {
        sp7C = M2C_FIELD(temp_r5, f32 *, 0);
        sp80 = M2C_FIELD(temp_r5, f32 *, 4);
        sp84 = M2C_FIELD(temp_r5, f32 *, 8);
    }
    temp_r3 = HSD_RObjGetByType(M2C_FIELD(arg0, u32 *, 0x80), 0x40000000, 0);
    if (temp_r3 == NULL) {
        __assert(&lbl_80350180, 0x853, &lbl_80350198);
    }
    temp_f26 = M2C_FIELD(temp_r3, f32 *, 0xC);
    temp_f30 = M2C_FIELD(temp_r3, f32 *, 8) * sp7C;
    if (var_r31 != NULL) {
        temp_r3_2 = HSD_RObjGetByType(M2C_FIELD(var_r31, u32 *, 0x80), 0x40000000, 0);
        if (temp_r3_2 == NULL) {
            __assert(&lbl_80350180, 0x85E, &lbl_80350198);
        }
        var_r28 = M2C_FIELD(var_r31, void **, 0x10);
        var_r30 = ((u32) M2C_FIELD(temp_r3_2, u32 *, 4) >> 2U) & 1;
        var_f29 = sp7C * (M2C_FIELD(temp_r3_2, f32 *, 8) * M2C_FIELD(var_r31, f32 *, 0x2C));
loop_17:
        if (var_r28 == NULL) {
            var_r28 = NULL;
        } else if ((u32) ((M2C_FIELD(var_r28, s32 *, 0x14) & 0x600000) + 0xFFA00000) == 0U) {

        } else {
            var_r28 = M2C_FIELD(var_r28, void **, 8);
            goto loop_17;
        }
        if (var_r28 == NULL) {
            __assert(&lbl_80350180, 0x824, &lbl_80350194);
        }
        if (HSD_RObjGetByType(M2C_FIELD(var_r28, u32 *, 0x80), 0x10000000, 1) != NULL) {

        } else {
            var_r28 = NULL;
        }
    } else {
        var_r28 = M2C_FIELD(arg0, void **, 0x10);
loop_28:
        if (var_r28 == NULL) {
            var_r28 = NULL;
        } else if ((u32) ((M2C_FIELD(var_r28, s32 *, 0x14) & 0x600000) + 0xFFA00000) == 0U) {

        } else {
            var_r28 = M2C_FIELD(var_r28, void **, 8);
            goto loop_28;
        }
        if (var_r28 == NULL) {
            __assert(&lbl_80350180, 0x824, &lbl_80350194);
        }
        if (HSD_RObjGetByType(M2C_FIELD(var_r28, u32 *, 0x80), 0x10000000, 1) != NULL) {

        } else {
            var_r28 = NULL;
        }
    }
    if (var_r28 != NULL) {
        if ((HSD_RObjGetByType(M2C_FIELD(arg0, u32 *, 0x80), 0x10000000, 3) == NULL) && (arg0 != NULL) && ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U)) {
            HSD_RObjUpdateAll(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x50));
            if (arg0 == NULL) {
                __assert(&lbl_80350170, 0x25D, &lbl_80350178);
            }
            temp_r4 = M2C_FIELD(arg0, s32 *, 0x14);
            var_r3 = 0;
            if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                var_r3 = 1;
            }
            if (var_r3 != 0) {
                temp_r4_2 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_r4_2, M2C_UNK (**)(void *, void *), 0x40)(arg0, temp_r4_2);
                M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) & 0xFFFFFFBF);
            }
        }
        temp_r3_3 = M2C_FIELD(arg0, u32 *, 0xC);
        if (temp_r3_3 != 0U) {
            HSD_MtxGetTranslate(temp_r3_3 + 0x44, &sp70);
        }
        /* draft: did not compile: HSD_RObjGetGlobalPosition(M2C_FIELD(var_r28, u32 *, 0x80), 1, var_r28 + 0x38); */
        /* draft: did not compile: PSVECSubtract(var_r28 + 0x38, &sp70, &sp58); */
        temp_f1 = PSVECDotProduct(&sp58, &sp58);
        if (temp_f1 > lbl_80351F88) {
            sp34 = sp58;
            sp38 = sp5C;
            sp3C = sp60;
            if (HSD_RObjGetGlobalPosition(M2C_FIELD(arg0, u32 *, 0x80), 3, &sp28, sp58) != 0) {
                PSVECSubtract(&sp28, &sp70, &sp28);
                if (lbl_80351F60 != temp_f26) {
                    fn_800CC2C4(&sp88, &sp34, temp_f26);
                    PSMTXMultVec(&sp88, &sp28, &sp28);
                }
                PSVECCrossProduct((float *)(&sp34), (float *)(&sp28), (float *)(&sp1C), (float)(0));
                PSVECCrossProduct((float *)(&sp1C), (float *)(&sp34), (float *)(&sp28), (float)(0));
            } else {
                sp1C = M2C_FIELD(arg0, f32 *, 0x4C);
                sp20 = M2C_FIELD(arg0, f32 *, 0x5C);
                sp24 = M2C_FIELD(arg0, f32 *, 0x6C);
                PSVECCrossProduct((float *)(&sp1C), (float *)(&sp34), (float *)(&sp28), (float)(0));
                PSVECCrossProduct((float *)(&sp34), (float *)(&sp28), (float *)(&sp1C), (float)(0));
            }
            var_f1 = lbl_80351F70 / (lbl_80351F8C + PSVECDotProduct(&sp1C, &sp1C));
            if (var_f1 > lbl_80351F60) {
                temp_f2 = __frsqrte(var_f1);
                temp_f2_2 = lbl_80351F78 * temp_f2 * -(((f64) var_f1 * (temp_f2 * temp_f2)) - lbl_80351F90);
                temp_f2_3 = lbl_80351F78 * temp_f2_2 * -(((f64) var_f1 * (temp_f2_2 * temp_f2_2)) - lbl_80351F90);
                sp18 = (f32) ((f64) var_f1 * (lbl_80351F78 * temp_f2_3 * -(((f64) var_f1 * (temp_f2_3 * temp_f2_3)) - lbl_80351F90)));
                var_f1 = sp18;
            }
            PSVECScale(&sp1C, &sp4C, var_f1);
            var_f1_2 = lbl_80351F70 / (lbl_80351F8C + PSVECDotProduct(&sp28, &sp28));
            if (var_f1_2 > lbl_80351F60) {
                temp_f2_4 = __frsqrte(var_f1_2);
                temp_f2_5 = lbl_80351F78 * temp_f2_4 * -(((f64) var_f1_2 * (temp_f2_4 * temp_f2_4)) - lbl_80351F90);
                temp_f2_6 = lbl_80351F78 * temp_f2_5 * -(((f64) var_f1_2 * (temp_f2_5 * temp_f2_5)) - lbl_80351F90);
                sp14 = (f32) ((f64) var_f1_2 * (lbl_80351F78 * temp_f2_6 * -(((f64) var_f1_2 * (temp_f2_6 * temp_f2_6)) - lbl_80351F90)));
                var_f1_2 = sp14;
            }
            PSVECScale(&sp28, &sp40, var_f1_2);
            temp_f5 = temp_f30 * temp_f30;
            var_f28 = var_f29 * var_f29;
            temp_f1_2 = temp_f5 - var_f28;
            var_f27 = lbl_80351F98 * (((lbl_80351F9C * (temp_f5 + var_f28)) - temp_f1) - ((temp_f1_2 * temp_f1_2) / temp_f1));
            if (var_f27 < lbl_80351F60) {
                var_f27 = lbl_80351F60;
            }
            temp_f5_2 = (temp_f5 - var_f27) / temp_f1;
            var_f4 = lbl_80351F70 / (lbl_80351F8C + temp_f5_2);
            if (var_f4 > lbl_80351F60) {
                temp_f1_3 = __frsqrte(var_f4);
                temp_f1_4 = lbl_80351F78 * temp_f1_3 * -(((f64) var_f4 * (temp_f1_3 * temp_f1_3)) - lbl_80351F90);
                temp_f1_5 = lbl_80351F78 * temp_f1_4 * -(((f64) var_f4 * (temp_f1_4 * temp_f1_4)) - lbl_80351F90);
                sp10 = (f32) ((f64) var_f4 * (lbl_80351F78 * temp_f1_5 * -(((f64) var_f4 * (temp_f1_5 * temp_f1_5)) - lbl_80351F90)));
                var_f4 = sp10;
            }
            var_f1_3 = temp_f5_2 * var_f4;
            var_f5 = lbl_80351F70 / (lbl_80351F8C + var_f27);
            if (var_f5 > lbl_80351F60) {
                temp_f2_7 = __frsqrte(var_f5);
                temp_f2_8 = lbl_80351F78 * temp_f2_7 * -(((f64) var_f5 * (temp_f2_7 * temp_f2_7)) - lbl_80351F90);
                temp_f2_9 = lbl_80351F78 * temp_f2_8 * -(((f64) var_f5 * (temp_f2_8 * temp_f2_8)) - lbl_80351F90);
                spC = (f32) ((f64) var_f5 * (lbl_80351F78 * temp_f2_9 * -(((f64) var_f5 * (temp_f2_9 * temp_f2_9)) - lbl_80351F90)));
                var_f5 = spC;
            }
            var_f29_2 = var_f27 * var_f5;
        } else {
            var_f1_3 = lbl_80351F60;
            var_f29_2 = temp_f30;
        }
        if (var_r30 != 0) {
            var_f29_2 = -var_f29_2;
        }
        if ((var_f28 - var_f27) < temp_f1) {
            PSVECScale((float *)(&sp58), (float *)(&sp64), (float)(0));
        } else {
            PSVECScale(&sp58, &sp64, -var_f1_3);
        }
        PSVECScale(&sp40, &sp28, var_f29_2);
        PSVECAdd(&sp64, &sp28, &sp64);
        var_f1_4 = lbl_80351F70 / (lbl_80351F8C + PSVECDotProduct(&sp64, &sp64));
        if (var_f1_4 > lbl_80351F60) {
            temp_f2_10 = __frsqrte(var_f1_4);
            temp_f2_11 = lbl_80351F78 * temp_f2_10 * -(((f64) var_f1_4 * (temp_f2_10 * temp_f2_10)) - lbl_80351F90);
            temp_f2_12 = lbl_80351F78 * temp_f2_11 * -(((f64) var_f1_4 * (temp_f2_11 * temp_f2_11)) - lbl_80351F90);
            sp8 = (f32) ((f64) var_f1_4 * (lbl_80351F78 * temp_f2_12 * -(((f64) var_f1_4 * (temp_f2_12 * temp_f2_12)) - lbl_80351F90)));
            var_f1_4 = sp8;
        }
        PSVECScale(&sp64, &sp64, var_f1_4);
        M2C_FIELD(arg0, f32 *, 0x44) = (f32) (sp64 * sp7C);
        M2C_FIELD(arg0, f32 *, 0x54) = (f32) (sp68 * sp7C);
        M2C_FIELD(arg0, f32 *, 0x64) = (f32) (sp6C * sp7C);
        M2C_FIELD(arg0, f32 *, 0x48) = (f32) (sp28 * sp80);
        PSVECCrossProduct(&sp4C, &sp64, &sp28, sp7C);
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) (sp2C * sp80);
        M2C_FIELD(arg0, f32 *, 0x68) = (f32) (sp30 * sp80);
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (sp4C * sp84);
        M2C_FIELD(arg0, f32 *, 0x5C) = (f32) (sp50 * sp84);
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (sp54 * sp84);
        M2C_FIELD(arg0, f32 *, 0x50) = sp70;
        M2C_FIELD(arg0, f32 *, 0x60) = sp74;
        M2C_FIELD(arg0, f32 *, 0x70) = sp78;
    }
}

void resolveIKJoint2(void *arg0) {
    s32 sp64;
    s32 sp60;
    s32 sp40;
    s32 sp3C;
    M2C_UNK sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 *temp_r3;
    f32 temp_f1;
    f32 var_f0;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    f32 var_f31;
    f64 temp_f2;
    f64 temp_f2_2;
    f64 temp_f2_3;
    f64 temp_f2_4;
    f64 temp_f2_5;
    f64 temp_f2_6;
    f64 temp_f2_7;
    f64 temp_f2_8;
    f64 temp_f2_9;
    s32 temp_r30;
    u32 var_r27;
    void *temp_r28;
    void *temp_r29;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r4;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_4;
    void *temp_r6;
    void *temp_r6_2;
    void *var_r29;

    var_f31 = lbl_80351F70;
    sp68 = M2C_FIELD(&lbl_801DA8C8, f32 *, 0);
    var_r29 = M2C_FIELD(arg0, void **, 0x10);
    sp6C = M2C_FIELD(&lbl_801DA8C8, f32 *, 4);
    sp70 = M2C_FIELD(&lbl_801DA8C8, f32 *, 8);
loop_4:
    if (var_r29 == NULL) {
        var_r29 = NULL;
    } else if ((u32) ((M2C_FIELD(var_r29, s32 *, 0x14) & 0x600000) + 0xFFA00000) == 0U) {

    } else {
        var_r29 = M2C_FIELD(var_r29, void **, 8);
        goto loop_4;
    }
    if (var_r29 == NULL) {
        __assert(&lbl_80350180, 0x824, &lbl_80350194);
    }
    if (HSD_RObjGetByType(M2C_FIELD(var_r29, s32 *, 0x80), 0x10000000, 1) != NULL) {

    } else {
        var_r29 = NULL;
    }
    if (var_r29 != NULL) {
        temp_r6 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_r6 == NULL) {
            return;
        }
        temp_r5 = M2C_FIELD(arg0, void **, 0x74);
        if (temp_r5 != NULL) {
            sp68 = M2C_FIELD(temp_r5, f32 *, 0);
            sp6C = M2C_FIELD(temp_r5, f32 *, 4);
            sp70 = M2C_FIELD(temp_r5, f32 *, 8);
        }
        sp50 = M2C_FIELD(temp_r6, f32 *, 0x50);
        sp54 = M2C_FIELD(temp_r6, f32 *, 0x60);
        sp58 = M2C_FIELD(temp_r6, f32 *, 0x70);
        temp_r5_2 = M2C_FIELD(arg0, void **, 0xC);
        sp44 = M2C_FIELD(temp_r5_2, f32 *, 0x44);
        sp48 = M2C_FIELD(temp_r5_2, f32 *, 0x54);
        sp4C = M2C_FIELD(temp_r5_2, f32 *, 0x64);
        var_f1 = lbl_80351F70 / (lbl_80351F8C + PSVECDotProduct((float *)(&sp44), (float *)(&sp44)));
        if (var_f1 > lbl_80351F60) {
            temp_f2 = __frsqrte(var_f1);
            temp_f2_2 = lbl_80351F78 * temp_f2 * -(((f64) var_f1 * (temp_f2 * temp_f2)) - lbl_80351F90);
            temp_f2_3 = lbl_80351F78 * temp_f2_2 * -(((f64) var_f1 * (temp_f2_2 * temp_f2_2)) - lbl_80351F90);
            sp10 = (f32) ((f64) var_f1 * (lbl_80351F78 * temp_f2_3 * -(((f64) var_f1 * (temp_f2_3 * temp_f2_3)) - lbl_80351F90)));
            var_f1 = sp10;
        }
        PSVECScale(&sp44, &sp44, var_f1);
        temp_r4 = M2C_FIELD(arg0, void **, 0xC);
        temp_r3 = M2C_FIELD(temp_r4, f32 **, 0x74);
        if (temp_r3 != NULL) {
            var_f31 = *temp_r3;
        }
        temp_r3_2 = HSD_RObjGetByType(M2C_FIELD(temp_r4, s32 *, 0x80), 0x40000000, 0);
        if (temp_r3_2 == NULL) {
            __assert(&lbl_80350180, 0x8FC, &lbl_80350198);
        }
        PSVECScale(&sp44, &sp44, M2C_FIELD(temp_r3_2, f32 *, 8) * var_f31);
        PSVECAdd(&sp50, &sp44, &sp5C);
        /* draft: did not compile: PSVECSubtract(var_r29 + 0x38, &sp5C, &sp44); */
        var_f1_2 = lbl_80351F70 / (lbl_80351F8C + PSVECDotProduct(&sp44, &sp44));
        if (var_f1_2 > lbl_80351F60) {
            temp_f2_4 = __frsqrte(var_f1_2);
            temp_f2_5 = lbl_80351F78 * temp_f2_4 * -(((f64) var_f1_2 * (temp_f2_4 * temp_f2_4)) - lbl_80351F90);
            temp_f2_6 = lbl_80351F78 * temp_f2_5 * -(((f64) var_f1_2 * (temp_f2_5 * temp_f2_5)) - lbl_80351F90);
            spC = (f32) ((f64) var_f1_2 * (lbl_80351F78 * temp_f2_6 * -(((f64) var_f1_2 * (temp_f2_6 * temp_f2_6)) - lbl_80351F90)));
            var_f1_2 = spC;
        }
        PSVECScale(&sp44, &sp44, var_f1_2);
        temp_r28 = HSD_RObjGetByType(M2C_FIELD(arg0, s32 *, 0x80), 0x20000000, 5);
        temp_r29 = HSD_RObjGetByType(M2C_FIELD(arg0, s32 *, 0x80), 0x20000000, 6);
        if ((temp_r28 != NULL) || (temp_r29 != NULL)) {
            var_r27 = 0;
            temp_r3_3 = HSD_RObjGetByType(M2C_FIELD(arg0, s32 *, 0x80), 0x40000000, 0);
            if (temp_r3_3 == NULL) {
                __assert(&lbl_80350180, 0x91E, &lbl_80350198);
            }
            temp_r5_3 = M2C_FIELD(arg0, void **, 0xC);
            temp_r30 = ((u32) M2C_FIELD(temp_r3_3, u32 *, 4) >> 2U) & 1;
            sp20 = M2C_FIELD(temp_r5_3, f32 *, 0x44);
            sp24 = M2C_FIELD(temp_r5_3, f32 *, 0x54);
            sp28 = M2C_FIELD(temp_r5_3, f32 *, 0x64);
            PSVECNormalize(&sp20, &sp20, temp_r5_3);
            temp_f1 = PSVECDotProduct(&sp20, &sp44);
            if (temp_f1 >= lbl_80351F70) {
                var_f0 = lbl_80351F60;
            } else {
                if (temp_f1 <= lbl_80351FA0) {
                    var_f0 = lbl_80351FA4;
                } else {
                    var_f0 = (f32) ArcCos();
                }
            }
            var_f1_3 = var_f0;
            if (temp_r30 == 0) {
                var_f1_3 = -var_f0;
            }
            if ((temp_r28 != NULL) && (var_f1_3 < M2C_FIELD(temp_r28, f32 *, 8))) {
                var_r27 = 1;
            } else if ((temp_r29 != NULL) && (M2C_FIELD(temp_r29, f32 *, 8) < var_f1_3)) {
                var_r27 = 1;
            }
            if (var_r27 != 0) {
                temp_r5_4 = M2C_FIELD(arg0, void **, 0xC);
                sp14 = M2C_FIELD(temp_r5_4, f32 *, 0x4C);
                sp18 = M2C_FIELD(temp_r5_4, f32 *, 0x5C);
                sp1C = M2C_FIELD(temp_r5_4, f32 *, 0x6C);
                fn_800CC2C4(&sp74, &sp14, temp_r5_4);
                PSMTXMultVec(&sp74, &sp20, &sp44);
            }
        }
        temp_r6_2 = M2C_FIELD(arg0, void **, 0xC);
        sp2C = M2C_FIELD(temp_r6_2, f32 *, 0x4C);
        sp30 = M2C_FIELD(temp_r6_2, f32 *, 0x5C);
        sp34 = M2C_FIELD(temp_r6_2, f32 *, 0x6C);
        PSVECCrossProduct(&sp2C, &sp44, &sp38, temp_r6_2);
        var_f1_4 = lbl_80351F70 / (lbl_80351F8C + PSVECDotProduct(&sp38, &sp38));
        if (var_f1_4 > lbl_80351F60) {
            temp_f2_7 = __frsqrte(var_f1_4);
            temp_f2_8 = lbl_80351F78 * temp_f2_7 * -(((f64) var_f1_4 * (temp_f2_7 * temp_f2_7)) - lbl_80351F90);
            temp_f2_9 = lbl_80351F78 * temp_f2_8 * -(((f64) var_f1_4 * (temp_f2_8 * temp_f2_8)) - lbl_80351F90);
            sp8 = (f32) ((f64) var_f1_4 * (lbl_80351F78 * temp_f2_9 * -(((f64) var_f1_4 * (temp_f2_9 * temp_f2_9)) - lbl_80351F90)));
            var_f1_4 = sp8;
        }
        PSVECScale(&sp38, &sp38, var_f1_4);
        PSVECCrossProduct(&sp44, &sp38, &sp2C);
        M2C_FIELD(arg0, f32 *, 0x44) = (f32) (sp44 * sp68);
        M2C_FIELD(arg0, f32 *, 0x54) = (f32) (sp48 * sp68);
        M2C_FIELD(arg0, f32 *, 0x64) = (f32) (sp4C * sp68);
        M2C_FIELD(arg0, f32 *, 0x48) = (f32) (sp38 * sp6C);
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) (sp3C * sp6C);
        M2C_FIELD(arg0, f32 *, 0x68) = (f32) (sp40 * sp6C);
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (sp2C * sp70);
        M2C_FIELD(arg0, f32 *, 0x5C) = (f32) (sp30 * sp70);
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (sp34 * sp70);
        M2C_FIELD(arg0, f32 *, 0x50) = sp5C;
        M2C_FIELD(arg0, f32 *, 0x60) = sp60;
        M2C_FIELD(arg0, f32 *, 0x70) = sp64;
    }
}

void HSD_JObjSetupMatrixSub(void *arg0) {
    s32 sp2C;
    s32 sp28;
    s32 var_r3;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 *temp_r3_4;
    f32 var_f1;
    f32 var_f31;
    f64 temp_f2;
    f64 temp_f2_2;
    f64 temp_f2_3;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4_2;
    f32 sp24;
    u32 temp_r3_5;
    void *temp_r3_3;
    void *temp_r4;
    void *temp_r4_3;

    temp_r4 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r4, M2C_UNK (**)(void *), 0x40)(temp_r4);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) & 0xFFFFFFBF);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x14);
    if (!(temp_r3 & 0x800000)) {
        temp_r3_2 = temp_r3 & 0x600000;
        switch (temp_r3_2) {                        /* irregular */
        case 0x200000:
            resolveIKJoint1(arg0);
            break;
        case 0x400000:
            resolveIKJoint2(arg0);
            break;
        case 0x600000:
            var_f31 = lbl_80351F70;
            if ((M2C_FIELD(arg0, void **, 0xC)) != NULL) {
                temp_r3_3 = HSD_RObjGetByType(M2C_FIELD((M2C_FIELD(arg0, void **, 0xC)), s32 *, 0x80), 0x40000000, 0);
                if (temp_r3_3 != NULL) {
                    sp18 = M2C_FIELD((M2C_FIELD(arg0, void **, 0xC)), f32 *, 0x50);
                    sp1C = M2C_FIELD((M2C_FIELD(arg0, void **, 0xC)), f32 *, 0x60);
                    sp20 = M2C_FIELD((M2C_FIELD(arg0, void **, 0xC)), f32 *, 0x70);
                    spC = M2C_FIELD((M2C_FIELD(arg0, void **, 0xC)), f32 *, 0x44);
                    sp10 = M2C_FIELD((M2C_FIELD(arg0, void **, 0xC)), f32 *, 0x54);
                    sp14 = M2C_FIELD((M2C_FIELD(arg0, void **, 0xC)), f32 *, 0x64);
                    var_f1 = lbl_80351F70 / (lbl_80351F8C + PSVECDotProduct(&spC, &spC));
                    if (var_f1 > lbl_80351F60) {
                        temp_f2 = __frsqrte(var_f1);
                        temp_f2_2 = lbl_80351F78 * temp_f2 * -(((f64) var_f1 * (temp_f2 * temp_f2)) - lbl_80351F90);
                        temp_f2_3 = lbl_80351F78 * temp_f2_2 * -(((f64) var_f1 * (temp_f2_2 * temp_f2_2)) - lbl_80351F90);
                        sp8 = (f32) ((f64) var_f1 * (lbl_80351F78 * temp_f2_3 * -(((f64) var_f1 * (temp_f2_3 * temp_f2_3)) - lbl_80351F90)));
                        var_f1 = sp8;
                    }
                    PSVECScale(&spC, &spC, var_f1);
                    temp_r3_4 = M2C_FIELD((M2C_FIELD(arg0, void **, 0xC)), f32 **, 0x74);
                    if (temp_r3_4 != NULL) {
                        var_f31 = *temp_r3_4;
                    }
                    PSVECScale(&spC, &spC, M2C_FIELD(temp_r3_3, f32 *, 8) * var_f31);
                    PSVECAdd(&sp18, &spC, &sp24);
                    M2C_FIELD(arg0, f32 *, 0x70) = sp2C;
                    M2C_FIELD(arg0, f32 *, 0x60) = sp28;
                    M2C_FIELD(arg0, f32 *, 0x50) = sp24;
                }
            }
            break;
        default:
            temp_r3_5 = M2C_FIELD(arg0, u32 *, 0x80);
            if ((temp_r3_5 != 0U) && (arg0 != NULL) && (temp_r3_5 != 0U)) {
                HSD_RObjUpdateAll(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x50));
                if (arg0 == NULL) {
                    __assert(&lbl_80350170, 0x25D, &lbl_80350178);
                }
                temp_r4_2 = M2C_FIELD(arg0, s32 *, 0x14);
                var_r3 = 0;
                if (!(temp_r4_2 & 0x800000) && (temp_r4_2 & 0x40)) {
                    var_r3 = 1;
                }
                if (var_r3 != 0) {
                    temp_r4_3 = M2C_FIELD(arg0, void **, 0);
                    M2C_FIELD(temp_r4_3, M2C_UNK (**)(void *, void *), 0x40)(arg0, temp_r4_3);
                    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) & 0xFFFFFFBF);
                }
            }
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) & 0xFFFFFFBF);
    }
}

void fn_800FD7C8(void *arg0, M2C_UNK arg_sp0) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r3_4;
    s32 var_r3_5;
    s32 var_r3_6;
    void *var_r25;
    void *var_r26;
    void *var_r27;
    void *var_r28;
    void *var_r29;
    void *var_r30;
    void *var_r31;

    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) | 0x40);
    if (!(M2C_FIELD(arg0, s32 *, 0x14) & 0x1000)) {
        var_r27 = M2C_FIELD(arg0, void **, 0x10);
loop_72:
        if (var_r27 != NULL) {
            if (!(M2C_FIELD(var_r27, s32 *, 0x14) & 0x01000000)) {
                if (var_r27 == NULL) {
                    __assert(&lbl_80350170, 0x25D, &lbl_80350178);
                }
                temp_r4 = M2C_FIELD(var_r27, s32 *, 0x14);
                var_r3 = 0;
                if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                    var_r3 = 1;
                }
                if (var_r3 == 0) {
                    M2C_FIELD(var_r27, s32 *, 0x14) = (s32) (M2C_FIELD(var_r27, s32 *, 0x14) | 0x40);
                    if (!(M2C_FIELD(var_r27, s32 *, 0x14) & 0x1000)) {
                        var_r31 = M2C_FIELD(var_r27, void **, 0x10);
loop_70:
                        if (var_r31 != NULL) {
                            if (!(M2C_FIELD(var_r31, s32 *, 0x14) & 0x01000000)) {
                                if (var_r31 == NULL) {
                                    __assert(&lbl_80350170, 0x25D, &lbl_80350178);
                                }
                                temp_r4_2 = M2C_FIELD(var_r31, s32 *, 0x14);
                                var_r3_2 = 0;
                                if (!(temp_r4_2 & 0x800000) && (temp_r4_2 & 0x40)) {
                                    var_r3_2 = 1;
                                }
                                if (var_r3_2 == 0) {
                                    M2C_FIELD(var_r31, s32 *, 0x14) = (s32) (M2C_FIELD(var_r31, s32 *, 0x14) | 0x40);
                                    if (!(M2C_FIELD(var_r31, s32 *, 0x14) & 0x1000)) {
                                        var_r30 = M2C_FIELD(var_r31, void **, 0x10);
loop_68:
                                        if (var_r30 != NULL) {
                                            if (!(M2C_FIELD(var_r30, s32 *, 0x14) & 0x01000000)) {
                                                if (var_r30 == NULL) {
                                                    __assert(&lbl_80350170, 0x25D, &lbl_80350178);
                                                }
                                                temp_r4_3 = M2C_FIELD(var_r30, s32 *, 0x14);
                                                var_r3_3 = 0;
                                                if (!(temp_r4_3 & 0x800000) && (temp_r4_3 & 0x40)) {
                                                    var_r3_3 = 1;
                                                }
                                                if (var_r3_3 == 0) {
                                                    M2C_FIELD(var_r30, s32 *, 0x14) = (s32) (M2C_FIELD(var_r30, s32 *, 0x14) | 0x40);
                                                    if (!(M2C_FIELD(var_r30, s32 *, 0x14) & 0x1000)) {
                                                        var_r29 = M2C_FIELD(var_r30, void **, 0x10);
loop_66:
                                                        if (var_r29 != NULL) {
                                                            if (!(M2C_FIELD(var_r29, s32 *, 0x14) & 0x01000000)) {
                                                                if (var_r29 == NULL) {
                                                                    __assert(&lbl_80350170, 0x25D, &lbl_80350178);
                                                                }
                                                                temp_r4_4 = M2C_FIELD(var_r29, s32 *, 0x14);
                                                                var_r3_4 = 0;
                                                                if (!(temp_r4_4 & 0x800000) && (temp_r4_4 & 0x40)) {
                                                                    var_r3_4 = 1;
                                                                }
                                                                if (var_r3_4 == 0) {
                                                                    M2C_FIELD(var_r29, s32 *, 0x14) = (s32) (M2C_FIELD(var_r29, s32 *, 0x14) | 0x40);
                                                                    if (!(M2C_FIELD(var_r29, s32 *, 0x14) & 0x1000)) {
                                                                        var_r28 = M2C_FIELD(var_r29, void **, 0x10);
loop_64:
                                                                        if (var_r28 != NULL) {
                                                                            if (!(M2C_FIELD(var_r28, s32 *, 0x14) & 0x01000000)) {
                                                                                if (var_r28 == NULL) {
                                                                                    __assert(&lbl_80350170, 0x25D, &lbl_80350178);
                                                                                }
                                                                                temp_r4_5 = M2C_FIELD(var_r28, s32 *, 0x14);
                                                                                var_r3_5 = 0;
                                                                                if (!(temp_r4_5 & 0x800000) && (temp_r4_5 & 0x40)) {
                                                                                    var_r3_5 = 1;
                                                                                }
                                                                                if (var_r3_5 == 0) {
                                                                                    M2C_FIELD(var_r28, s32 *, 0x14) = (s32) (M2C_FIELD(var_r28, s32 *, 0x14) | 0x40);
                                                                                    if (!(M2C_FIELD(var_r28, s32 *, 0x14) & 0x1000)) {
                                                                                        var_r26 = M2C_FIELD(var_r28, void **, 0x10);
loop_62:
                                                                                        if (var_r26 != NULL) {
                                                                                            if (!(M2C_FIELD(var_r26, s32 *, 0x14) & 0x01000000)) {
                                                                                                if (var_r26 == NULL) {
                                                                                                    __assert(&lbl_80350170, 0x25D, &lbl_80350178);
                                                                                                }
                                                                                                temp_r4_6 = M2C_FIELD(var_r26, s32 *, 0x14);
                                                                                                var_r3_6 = 0;
                                                                                                if (!(temp_r4_6 & 0x800000) && (temp_r4_6 & 0x40)) {
                                                                                                    var_r3_6 = 1;
                                                                                                }
                                                                                                if (var_r3_6 == 0) {
                                                                                                    M2C_FIELD(var_r26, s32 *, 0x14) = (s32) (M2C_FIELD(var_r26, s32 *, 0x14) | 0x40);
                                                                                                    if (!(M2C_FIELD(var_r26, s32 *, 0x14) & 0x1000)) {
                                                                                                        var_r25 = M2C_FIELD(var_r26, void **, 0x10);
loop_60:
                                                                                                        if (var_r25 != NULL) {
                                                                                                            if (!(M2C_FIELD(var_r25, s32 *, 0x14) & 0x01000000) && (HSD_JObjMtxIsDirty(var_r25) == 0)) {
                                                                                                                fn_800FD7C8((void *)(var_r25), (long)(0));
                                                                                                            }
                                                                                                            var_r25 = M2C_FIELD(var_r25, void **, 8);
                                                                                                            goto loop_60;
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                            var_r26 = M2C_FIELD(var_r26, void **, 8);
                                                                                            goto loop_62;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                            var_r28 = M2C_FIELD(var_r28, void **, 8);
                                                                            goto loop_64;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            var_r29 = M2C_FIELD(var_r29, void **, 8);
                                                            goto loop_66;
                                                        }
                                                    }
                                                }
                                            }
                                            var_r30 = M2C_FIELD(var_r30, void **, 8);
                                            goto loop_68;
                                        }
                                    }
                                }
                            }
                            var_r31 = M2C_FIELD(var_r31, void **, 8);
                            goto loop_70;
                        }
                    }
                }
            }
            var_r27 = M2C_FIELD(var_r27, void **, 8);
            goto loop_72;
        }
    }
}

#pragma push
#pragma peephole off
s32 JObjInit(void *arg0) {
    s32 var_r3;

    var_r3 = M2C_FIELD(M2C_FIELD(&lbl_802A97A8, void **, 0x14), s32 (**)(void *), 0x2C)(M2C_FIELD(&lbl_802A97A8, void **, 0x14));
    if (var_r3 >= 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = 0x40;
        var_r3 = 0;
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_80351F70;
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_80351F70;
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_80351F70;
    }
    return var_r3;
}
#pragma pop
