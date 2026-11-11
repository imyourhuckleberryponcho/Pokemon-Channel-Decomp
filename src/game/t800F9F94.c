/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK HSD_DObjAnimAll(s32);
M2C_UNK HSD_AObjInterpretAnim(s32, void *, s32);
M2C_UNK HSD_RObjAnimAll(u32);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_80350170;
extern M2C_UNK lbl_80350178;
M2C_UNK HSD_JObjCheckDepend(void *);
s32 HSD_JObjMtxIsDirty();
M2C_UNK HSD_AObjInitEndCallBack();
M2C_UNK HSD_AObjInvokeCallBacks();
M2C_UNK PSMTXConcat();
M2C_UNK PSMTXInverse();
u32 HSD_CObjGetCurrent();
M2C_UNK HSD_JObjSetupMatrixSub(void *);
M2C_UNK HSD_JObjDisp(void *, M2C_UNK *, s32, s32);
M2C_UNK PSMTXIdentity();
void *HSD_DObjLoadDesc(void *);
void **HSD_JObjAlloc();
s32 HSD_MtxAlloc();
s32 HSD_RObjLoadDesc(s32);
M2C_UNK HSD_IDInsertToTable(M2C_UNK, void *, void *);
void **hsdNew();
u32 hsdSearchClassInfo();
extern M2C_UNK lbl_80350180;
M2C_UNK HSD_DObjResolveRefsAll(s32, s32);
M2C_UNK HSD_RObjResolveRefsAll(s32, s32);
void *HSD_IDGetDataFromTable();
extern M2C_UNK lbl_802A97A8;
extern M2C_UNK lbl_802A9988;
extern M2C_UNK lbl_802A9994;
extern M2C_UNK lbl_802A99BC;
M2C_UNK OSReport(void *);

void fn_800F9F94();
void HSD_JObjAnim(void *arg0);
void JObjAnimAll(void *arg0);
void HSD_JObjAnimAll(s32 arg0);
void fn_800FADC0(void *arg0, void *arg1, s32 arg2);
void fn_800FAEF0(void *arg0, M2C_UNK *arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
s32 HSD_CObjGetViewingMtxPtrDirect(s32 arg0);
void fn_800FB43C(void *arg0);
s32 fn_800FB4AC(void *arg0, void *arg1);
void **HSD_JObjLoadJoint(u32 *arg0);
void HSD_JObjResolveRefs(void *arg0, void *arg1);
void HSD_JObjResolveRefsAll(void *arg0, void *arg1, M2C_UNK arg_sp0);
void HSD_JObjRef(void *arg0);
void HSD_IDGetData(s32 arg0, s32 arg1);
void fn_800FBB9C(void *arg0);
void HSD_JObjUnref(void *arg0);
void HSD_JObjUnrefThis(void *arg0);
void HSD_JObjAddChild(void *arg0, void *arg1);

void fn_800F9F94() { } /* draft: stub */

void HSD_JObjAnim(void *arg0) {
    s32 var_r3;
    s32 var_r3_2;
    s32 temp_cr0_eq_2;
    s32 temp_r3_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_cr0_eq;
    u32 temp_r5;
    void *temp_r30;
    void *temp_r3;

    temp_cr0_eq = arg0 == NULL;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_eq == 0) {
            if (temp_cr0_eq != 0) {
                __assert(&lbl_80350170, 0x25D, &lbl_80350178);
            }
            temp_r4 = M2C_FIELD((s32)arg0, s32 *, 0x14);
            var_r3 = 0;
            temp_r5 = temp_r4 & 0x800000;
            if ((temp_r5 == 0) && (temp_r4 & 0x40)) {
                var_r3 = 1;
            }
            if (var_r3 == 0) {
                if (temp_r5 != 0) {
                    if (!(temp_r4 & 0x01000000)) {
                        temp_r30 = M2C_FIELD(arg0, void **, 0xC);
                        temp_cr0_eq_2 = temp_r30 == NULL;
                        if (temp_cr0_eq_2 == 0) {
                            if (temp_cr0_eq_2 != 0) {
                                __assert(&lbl_80350170, 0x25D, &lbl_80350178);
                            }
                            temp_r4_2 = M2C_FIELD(temp_r30, s32 *, 0x14);
                            var_r3_2 = 0;
                            if (!(temp_r4_2 & 0x800000) && (temp_r4_2 & 0x40)) {
                                var_r3_2 = 1;
                            }
                            if (var_r3_2 != 0) {
                                M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) | 0x40);
                            }
                        }
                    }
                } else {
                    temp_r3 = M2C_FIELD(arg0, void **, 0xC);
                    if (((temp_r3 != NULL) && (M2C_FIELD(temp_r3, s32 *, 0x14) & 0x40)) || (temp_r3_2 = temp_r4 & 0x600000, (((u32) (temp_r3_2 + 0xFFE00000) == 0U) != 0)) || ((u32) (temp_r3_2 + 0xFFC00000) == 0U) || ((u32) (temp_r3_2 + 0xFFA00000) == 0U) || ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U)) {
                        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) | 0x40);
                    }
                }
            }
        }
        HSD_AObjInterpretAnim(M2C_FIELD(arg0, s32 *, 0x7C), arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x50));
        HSD_RObjAnimAll(M2C_FIELD(arg0, u32 *, 0x80));
        if (!(M2C_FIELD(arg0, s32 *, 0x14) & 0x4020)) {
            HSD_DObjAnimAll(M2C_FIELD(arg0, s32 *, 0x18));
        }
    }
}

void JObjAnimAll(void *arg0) {
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 temp_cr0_eq_4;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r3;
    s32 var_r3_2;
    u32 temp_r5;
    void *temp_r28;
    void *temp_r3;
    void *temp_r4_3;
    void *var_r28;
    void *var_r29;
    void *var_r30;
    void *var_r31;

    temp_cr0_eq = arg0 == NULL;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_eq == 0) {
            if (temp_cr0_eq == 0) {
                if (temp_cr0_eq != 0) {
                    __assert(&lbl_80350170, 0x25D, &lbl_80350178);
                }
                temp_r4 = M2C_FIELD(arg0, s32 *, 0x14);
                var_r3 = 0;
                temp_r5 = temp_r4 & 0x800000;
                if ((temp_r5 == 0) && (temp_r4 & 0x40)) {
                    var_r3 = 1;
                }
                if (var_r3 == 0) {
                    if (temp_r5 != 0) {
                        if (!(temp_r4 & 0x01000000)) {
                            temp_r28 = M2C_FIELD(arg0, void **, 0xC);
                            temp_cr0_eq_2 = temp_r28 == NULL;
                            if (temp_cr0_eq_2 == 0) {
                                if (temp_cr0_eq_2 != 0) {
                                    __assert(&lbl_80350170, 0x25D, &lbl_80350178);
                                }
                                temp_r4_2 = M2C_FIELD(temp_r28, s32 *, 0x14);
                                var_r3_2 = 0;
                                if (!(temp_r4_2 & 0x800000) && (temp_r4_2 & 0x40)) {
                                    var_r3_2 = 1;
                                }
                                if (var_r3_2 != 0) {
                                    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) | 0x40);
                                }
                            }
                        }
                    } else {
                        temp_r3 = M2C_FIELD(arg0, void **, 0xC);
                        if (((temp_r3 != NULL) && (M2C_FIELD(temp_r3, s32 *, 0x14) & 0x40)) || (temp_r3_2 = temp_r4 & 0x600000, (((u32) (temp_r3_2 + 0xFFE00000) == 0U) != 0)) || ((u32) (temp_r3_2 + 0xFFC00000) == 0U) || ((u32) (temp_r3_2 + 0xFFA00000) == 0U) || ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U)) {
                            M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) | 0x40);
                        }
                    }
                }
            }
            HSD_AObjInterpretAnim(M2C_FIELD(arg0, s32 *, 0x7C), arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x50));
            HSD_RObjAnimAll(M2C_FIELD(arg0, u32 *, 0x80));
            if (!(M2C_FIELD(arg0, s32 *, 0x14) & 0x4020)) {
                HSD_DObjAnimAll(M2C_FIELD(arg0, s32 *, 0x18));
            }
        }
        if (!(M2C_FIELD(arg0, s32 *, 0x14) & 0x1000)) {
            var_r31 = M2C_FIELD(arg0, void **, 0x10);
loop_66:
            if (var_r31 != NULL) {
                temp_cr0_eq_3 = var_r31 == NULL;
                if (temp_cr0_eq_3 == 0) {
                    if (temp_cr0_eq_3 == 0) {
                        if ((temp_cr0_eq_3 == 0) && (HSD_JObjMtxIsDirty(var_r31) == 0)) {
                            temp_r3_3 = M2C_FIELD(var_r31, s32 *, 0x14);
                            if (temp_r3_3 & 0x800000) {
                                if (!(temp_r3_3 & 0x01000000) && ((void *) M2C_FIELD(var_r31, void **, 0xC) != NULL) && (HSD_JObjMtxIsDirty() != 0)) {
                                    M2C_FIELD(var_r31, s32 *, 0x14) = (s32) (M2C_FIELD(var_r31, s32 *, 0x14) | 0x40);
                                }
                            } else {
                                temp_r4_3 = M2C_FIELD(var_r31, void **, 0xC);
                                if (((temp_r4_3 != NULL) && (M2C_FIELD(temp_r4_3, s32 *, 0x14) & 0x40)) || (temp_r3_4 = temp_r3_3 & 0x600000, (((u32) (temp_r3_4 + 0xFFE00000) == 0U) != 0)) || ((u32) (temp_r3_4 + 0xFFC00000) == 0U) || ((u32) (temp_r3_4 + 0xFFA00000) == 0U) || ((u32) M2C_FIELD(var_r31, u32 *, 0x80) != 0U)) {
                                    M2C_FIELD(var_r31, s32 *, 0x14) = (s32) (M2C_FIELD(var_r31, s32 *, 0x14) | 0x40);
                                }
                            }
                        }
                        HSD_AObjInterpretAnim(M2C_FIELD(var_r31, s32 *, 0x7C), var_r31, M2C_FIELD(M2C_FIELD(var_r31, void **, 0), s32 *, 0x50));
                        HSD_RObjAnimAll(M2C_FIELD(var_r31, u32 *, 0x80));
                        if (!(M2C_FIELD(var_r31, s32 *, 0x14) & 0x4020)) {
                            HSD_DObjAnimAll(M2C_FIELD(var_r31, s32 *, 0x18));
                        }
                    }
                    if (!(M2C_FIELD(var_r31, s32 *, 0x14) & 0x1000)) {
                        var_r30 = M2C_FIELD(var_r31, void **, 0x10);
loop_64:
                        if (var_r30 != NULL) {
                            temp_cr0_eq_4 = var_r30 == NULL;
                            if (temp_cr0_eq_4 == 0) {
                                if (temp_cr0_eq_4 == 0) {
                                    HSD_JObjCheckDepend(var_r30);
                                    HSD_AObjInterpretAnim(M2C_FIELD(var_r30, s32 *, 0x7C), var_r30, M2C_FIELD(M2C_FIELD(var_r30, void **, 0), s32 *, 0x50));
                                    HSD_RObjAnimAll(M2C_FIELD(var_r30, u32 *, 0x80));
                                    if (!(M2C_FIELD(var_r30, s32 *, 0x14) & 0x4020)) {
                                        HSD_DObjAnimAll(M2C_FIELD(var_r30, s32 *, 0x18));
                                    }
                                }
                                if (!(M2C_FIELD(var_r30, s32 *, 0x14) & 0x1000)) {
                                    var_r29 = M2C_FIELD(var_r30, void **, 0x10);
loop_62:
                                    if (var_r29 != NULL) {
                                        if (var_r29 != NULL) {
                                            HSD_JObjAnim(var_r29);
                                            if (!(M2C_FIELD(var_r29, s32 *, 0x14) & 0x1000)) {
                                                var_r28 = M2C_FIELD(var_r29, void **, 0x10);
loop_60:
                                                if (var_r28 != NULL) {
                                                    JObjAnimAll(var_r28);
                                                    var_r28 = M2C_FIELD(var_r28, void **, 8);
                                                    goto loop_60;
                                                }
                                            }
                                        }
                                        var_r29 = M2C_FIELD(var_r29, void **, 8);
                                        goto loop_62;
                                    }
                                }
                            }
                            var_r30 = M2C_FIELD(var_r30, void **, 8);
                            goto loop_64;
                        }
                    }
                }
                var_r31 = M2C_FIELD(var_r31, void **, 8);
                goto loop_66;
            }
        }
    }
}

#pragma push
#pragma peephole off
void HSD_JObjAnimAll(s32 arg0) {
    if (arg0 != 0) {
        HSD_AObjInitEndCallBack();
        /* draft: did not compile: JObjAnimAll(arg0); */
        HSD_AObjInvokeCallBacks();
    }
}
#pragma pop

void fn_800FADC0(void *arg0, void *arg1, s32 arg2) {
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 var_r3_2;
    s32 temp_r4_2;
    s32 var_r3;
    s32 temp_r4;
    u32 temp_r3;
    void *temp_r31;

    temp_cr0_eq = arg1 == NULL;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_eq != 0) {
            __assert(&lbl_80350170, 0x25D, &lbl_80350178);
        }
        temp_r4 = M2C_FIELD(arg1, s32 *, 0x14);
        var_r3 = 0;
        if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
            var_r3 = 1;
        }
        if (var_r3 != 0) {
            HSD_JObjSetupMatrixSub(arg1);
        }
    }
    temp_r31 = M2C_FIELD(arg1, void **, 0x10);
    temp_cr0_eq_2 = temp_r31 == NULL;
    if (temp_cr0_eq_2 == 0) {
        if (temp_cr0_eq_2 != 0) {
            __assert(&lbl_80350170, 0x25D, &lbl_80350178);
        }
        temp_r4_2 = M2C_FIELD(temp_r31, s32 *, 0x14);
        var_r3_2 = 0;
        if (!(temp_r4_2 & 0x800000) && (temp_r4_2 & 0x40)) {
            var_r3_2 = 1;
        }
        if (var_r3_2 != 0) {
            HSD_JObjSetupMatrixSub(temp_r31);
        }
    }
    /* draft: did not compile: PSMTXInverse(M2C_FIELD(arg1, void **, 0x10) + 0x44, arg2); */
    /* draft: did not compile: PSMTXConcat(arg1 + 0x44, arg2, arg2); */
    if (arg0 != NULL) {
        PSMTXConcat(arg0, arg2, arg2);
        return;
    }
    temp_r3 = HSD_CObjGetCurrent();
    if (temp_r3 != 0U) {
        PSMTXConcat(temp_r3 + 0x54, arg2, arg2);
    }
}

void fn_800FAEF0(void *arg0, M2C_UNK *arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) { } /* draft: stub */

s32 HSD_CObjGetViewingMtxPtrDirect(s32 arg0) {
    return arg0 + 0x54;
}

void fn_800FB43C(void *arg0) {
    s32 temp_cr0_eq;
    s32 var_r3;
    s32 temp_r4;

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
            return;
        }
        HSD_JObjSetupMatrixSub(arg0);
    }
}

s32 fn_800FB4AC(void *arg0, void *arg1) {
    s32 temp_r4;
    u32 temp_r3;
    void **var_r31;
    void *temp_r6;
    void *var_r29;
    void *var_r3;

    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, u32 *, 0x14) = (u32) (M2C_FIELD(arg0, u32 *, 0x14) | M2C_FIELD(arg1, s32 *, 4));
    temp_r3 = M2C_FIELD(arg0, u32 *, 0x14);
    if ((temp_r3 >> 0xEU) & 1) {
        M2C_FIELD(arg0, void **, 0x18) = (void *) M2C_FIELD(arg1, void **, 0x10);
    } else if (temp_r3 & 0x20) {
        M2C_FIELD(arg0, void **, 0x18) = (void *) M2C_FIELD(arg1, void **, 0x10);
        var_r3 = M2C_FIELD(arg1, void **, 0x10);
loop_5:
        if (var_r3 != NULL) {
            M2C_FIELD(var_r3, s32 *, 4) = (s32) (M2C_FIELD(var_r3, s32 *, 4) | 0x80000000);
            var_r3 = M2C_FIELD(var_r3, void **, 0);
            goto loop_5;
        }
    } else {
        M2C_FIELD(arg0, void **, 0x18) = HSD_DObjLoadDesc(M2C_FIELD(arg1, void **, 0x10));
    }
    M2C_FIELD(arg0, s32 *, 0x80) = HSD_RObjLoadDesc(M2C_FIELD(arg1, s32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
    temp_r4 = M2C_FIELD(arg1, s32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x38) = temp_r4;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg1, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(arg1, s32 *, 0x34);
    /* draft: did not compile: PSMTXIdentity(arg0 + 0x44, temp_r4); */
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    if ((u32) M2C_FIELD(arg1, u32 *, 0x38) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x78) = HSD_MtxAlloc();
        /* draft: did not compile: memcpy(M2C_FIELD(arg0, s32 *, 0x78), M2C_FIELD(arg1, u32 *, 0x38), 0x30); */
    }
    HSD_IDInsertToTable(0, arg1, arg0);
    M2C_FIELD(arg0, void **, 0x84) = arg1;
    if (!(M2C_FIELD(arg1, s32 *, 4) & 0x1000)) {
        var_r29 = M2C_FIELD(arg1, void **, 8);
loop_23:
        if (var_r29 == NULL) {
            goto block_24;
        }
        if (var_r29 == NULL) {
            var_r31 = NULL;
        } else {
            if (((u32) M2C_FIELD(var_r29, u32 *, 0) == 0U) || (hsdSearchClassInfo() == 0U)) {
                var_r31 = HSD_JObjAlloc();
            } else {
                var_r31 = hsdNew();
                if (var_r31 == NULL) {
                    __assert(&lbl_80350180, 0x3D5, &lbl_80350178);
                }
            }
            temp_r6 = *var_r31;
            M2C_FIELD(temp_r6, M2C_UNK (**)(void **, void *, void *, void *), 0x3C)(var_r31, var_r29, arg0, temp_r6);
        }
        if (var_r31 == NULL) {
            return -1;
        }
        HSD_JObjAddChild(arg0, var_r31);
        var_r29 = M2C_FIELD(var_r29, void **, 0xC);
        goto loop_23;
    }
block_24:
    return 0;
}

void **HSD_JObjLoadJoint(u32 *arg0) {
    void **var_r31;
    void *temp_r6;

    if (arg0 == NULL) {
        var_r31 = NULL;
    } else {
        if (((u32) *arg0 == 0U) || (hsdSearchClassInfo() == 0U)) {
            var_r31 = HSD_JObjAlloc();
        } else {
            var_r31 = hsdNew();
            if (var_r31 == NULL) {
                __assert(&lbl_80350180, 0x3D5, &lbl_80350178);
            }
        }
        temp_r6 = *var_r31;
        M2C_FIELD(temp_r6, M2C_UNK (**)(void **, u32 *, M2C_UNK, void *), 0x3C)(var_r31, arg0, 0, temp_r6);
    }
    HSD_JObjResolveRefsAll((void *)(var_r31), (void *)(arg0), (long)(0));
    return var_r31;
}

void HSD_JObjResolveRefs(void *arg0, void *arg1) {
    void *temp_r4;

    if (arg0 != NULL) {
        if (arg1 == NULL) {
            return;
        }
        HSD_RObjResolveRefsAll(M2C_FIELD(arg0, s32 *, 0x80), M2C_FIELD(arg1, s32 *, 0x3C));
        if (M2C_FIELD(arg0, s32 *, 0x14) & 0x1000) {
            HSD_JObjUnref(M2C_FIELD(arg0, void **, 0x10));
            M2C_FIELD(arg0, void **, 0x10) = HSD_IDGetDataFromTable(0, M2C_FIELD(arg1, s32 *, 8), 0);
            if ((void *) M2C_FIELD(arg0, void **, 0x10) == NULL) {
                __assert(&lbl_80350180, 0x45F, &lbl_802A97A8 + 0x1D4);
            }
            temp_r4 = M2C_FIELD(arg0, void **, 0x10);
            if (temp_r4 != NULL) {
                M2C_FIELD(temp_r4, u16 *, 4) = (u16) (M2C_FIELD(temp_r4, u16 *, 4) + 1);
                if ((u16) M2C_FIELD(temp_r4, u16 *, 4) == -1U) {
                    __assert(&lbl_802A97A8 + 0x1E0, 0x5D, &lbl_802A97A8 + 0x1EC);
                }
            }
        }
        if (!(M2C_FIELD(arg0, s32 *, 0x14) & 0x4020)) {
            HSD_DObjResolveRefsAll(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg1, s32 *, 0x10));
        }
    }
}

void HSD_JObjResolveRefsAll(void *arg0, void *arg1, M2C_UNK arg_sp0) { } /* draft: stub */

void HSD_JObjRef(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) + 1);
        if ((u16) M2C_FIELD(arg0, u16 *, 4) == -1U) {
            __assert(&lbl_802A9988, 0x5D, &lbl_802A9994);
        }
    }
}

void HSD_IDGetData(s32 arg0, s32 arg1) {
    HSD_IDGetDataFromTable(0, arg0, arg1);
}

void fn_800FBB9C(void *arg0) {
    M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) + 1);
    if ((u16) M2C_FIELD(arg0, u16 *, 4) == -1U) {
        __assert(&lbl_802A9988, 0x5D, &lbl_802A9994);
    }
}

void HSD_JObjUnref(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    u16 temp_r3;
    u16 temp_r3_2;
    u16 temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;

    if (arg0 != NULL) {
        temp_r4 = M2C_FIELD(arg0, u16 *, 4);
        var_r0 = temp_r4 == 0xFFFF;
        if (var_r0 != 0) {

        } else {
            M2C_FIELD(arg0, u16 *, 4) = (u16) (temp_r4 - 1);
            var_r0 = temp_r4 == 0;
        }
        if (var_r0 != 0) {
            temp_r3 = M2C_FIELD(arg0, u16 *, 6);
            if ((temp_r3 - 1) < 0) {
                if (arg0 != NULL) {
                    temp_r4_2 = M2C_FIELD(arg0, void **, 0);
                    M2C_FIELD(temp_r4_2, M2C_UNK (**)(void *, void *), 0x30)(arg0, temp_r4_2);
                    temp_r4_3 = M2C_FIELD(arg0, void **, 0);
                    M2C_FIELD(temp_r4_3, M2C_UNK (**)(void *, void *), 0x34)(arg0, temp_r4_3);
                }
            } else {
                M2C_FIELD(arg0, u16 *, 6) = (u16) (temp_r3 + 1);
                if ((u16) M2C_FIELD(arg0, u16 *, 6) == 0) {
                    __assert(&lbl_802A9988, 0x9E, &lbl_802A99BC);
                }
                temp_r4_4 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_r4_4, M2C_UNK (**)(void *, void *), 0x4C)(arg0, temp_r4_4);
                temp_r3_2 = M2C_FIELD(arg0, u16 *, 6);
                var_r0_2 = temp_r3_2 == 0;
                if (var_r0_2 != 0) {

                } else {
                    M2C_FIELD(arg0, u16 *, 6) = (u16) (temp_r3_2 - 1);
                    var_r0_2 = M2C_FIELD(arg0, u16 *, 6) == 0;
                }
                if ((var_r0_2 != 0) && (arg0 != NULL)) {
                    temp_r4_5 = M2C_FIELD(arg0, void **, 0);
                    M2C_FIELD(temp_r4_5, M2C_UNK (**)(void *, void *), 0x30)(arg0, temp_r4_5);
                    temp_r4_6 = M2C_FIELD(arg0, void **, 0);
                    M2C_FIELD(temp_r4_6, M2C_UNK (**)(void *, void *), 0x34)(arg0, temp_r4_6);
                }
            }
        }
    }
}

void HSD_JObjUnrefThis(void *arg0) {
    s32 var_r0;
    u16 temp_r3;
    u16 temp_r3_2;
    u32 var_r0_2;
    void *temp_r4;
    void *temp_r4_2;

    if (arg0 != NULL) {
        temp_r3 = M2C_FIELD(arg0, u16 *, 6);
        var_r0 = temp_r3 == 0;
        if (var_r0 != 0) {

        } else {
            M2C_FIELD(arg0, u16 *, 6) = (u16) (temp_r3 - 1);
            var_r0 = M2C_FIELD(arg0, u16 *, 6) == 0;
        }
        if (var_r0 != 0) {
            temp_r3_2 = M2C_FIELD(arg0, u16 *, 4);
            var_r0_2 = -1U;
            if (temp_r3_2 != -1U) {
                var_r0_2 = temp_r3_2;
            }
            if (((s32) var_r0_2 < 0) && (arg0 != NULL)) {
                temp_r4 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_r4, M2C_UNK (**)(void *, void *), 0x30)(arg0, temp_r4);
                temp_r4_2 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_r4_2, M2C_UNK (**)(void *, void *), 0x34)(arg0, temp_r4_2);
            }
        }
    }
}

void HSD_JObjAddChild(void *arg0, void *arg1) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4;
    void *var_r30;
    void *var_r5;

    if (arg0 != NULL) {
        if (arg1 == NULL) {
            return;
        }
        if ((void *) M2C_FIELD(arg1, void **, 0xC) != NULL) {
            OSReport(&lbl_802A97A8 + 0x250);
            __assert(&lbl_80350180, 0x549, &lbl_802A97A8 + 0x26C);
        }
        if ((u32) M2C_FIELD(arg1, u32 *, 8) != 0U) {
            OSReport(&lbl_802A97A8 + 0x284);
            __assert(&lbl_80350180, 0x54A, &lbl_802A97A8 + 0x23C);
        }
        if ((void *) M2C_FIELD(arg0, void **, 0x10) == NULL) {
            M2C_FIELD(arg0, void **, 0x10) = arg1;
        } else {
            if (M2C_FIELD(arg0, s32 *, 0x14) & 0x1000) {
                __assert(&lbl_80350180, 0x550, &lbl_802A97A8 + 0x2A4);
            }
            var_r30 = M2C_FIELD(arg0, void **, 0x10);
loop_15:
            if ((void *) M2C_FIELD(var_r30, void **, 8) != NULL) {
                if (var_r30 == arg1) {
                    __assert(&lbl_80350180, 0x553, &lbl_802A97A8 + 0x2C4);
                }
                var_r30 = M2C_FIELD(var_r30, void **, 8);
                goto loop_15;
            }
            M2C_FIELD(var_r30, void **, 8) = arg1;
        }
        M2C_FIELD(arg1, void **, 0xC) = arg0;
        var_r5 = arg0;
        temp_r3 = M2C_FIELD(arg1, s32 *, 0x14);
        temp_r4 = (temp_r3 | (temp_r3 << 0xA)) & 0x70000000;
loop_20:
        if (var_r5 != NULL) {
            temp_r3_2 = M2C_FIELD(var_r5, s32 *, 0x14);
            if (temp_r4 & ~temp_r3_2) {
                M2C_FIELD(var_r5, s32 *, 0x14) = (s32) (temp_r3_2 | temp_r4);
                var_r5 = M2C_FIELD(var_r5, void **, 0xC);
                goto loop_20;
            }
        }
    }
}
