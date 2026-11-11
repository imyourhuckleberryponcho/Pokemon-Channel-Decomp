/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 hsdNew(M2C_UNK *);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_802A8AA0;
extern M2C_UNK lbl_803500C0;
extern M2C_UNK lbl_803500C8;
extern M2C_UNK *lbl_80350C08;
void *hsdAllocMemPiece(M2C_UNK);
extern M2C_UNK lbl_803500D8;
extern f32 lbl_80351E54;
M2C_UNK HSD_TObjRemoveAll(s32);
M2C_UNK hsdFreeMemPiece(s32, M2C_UNK);
M2C_UNK HSD_TExpFreeList(M2C_UNK, M2C_UNK);
M2C_UNK HSD_TExpFreeTevDesc();
extern s32 lbl_80350C10;
extern s32 lbl_80350C14;
M2C_UNK hsdInitClassInfo(M2C_UNK *, M2C_UNK *, void *, void *, M2C_UNK, M2C_UNK);
extern M2C_UNK MObjUpdateFunc;
extern M2C_UNK MObjLoad;
extern M2C_UNK fn_800EB738;
extern M2C_UNK MObjSetupTev;
extern M2C_UNK HSD_MObjSetup;
extern M2C_UNK HSD_MObjUnset;
extern M2C_UNK lbl_802AA538;
M2C_UNK HSD_ObjAllocInit(M2C_UNK *, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_8031D238;
extern s32 lbl_80350C1C;
extern s32 lbl_80350C20;
extern void *lbl_80350C18;
M2C_UNK HSD_FObjReqAnimAll(s32);
M2C_UNK HSD_FObjStopAnimAll(s32, s32, s32, f32);
M2C_UNK HSD_FObjInterpretAnimAll(s32, s32, s32);
f64 fn_80156E70(f32, f32);
M2C_UNK HSD_AObjSetRewindFrame(void *, f32);
M2C_UNK HSD_AObjSetEndFrame(void *, f32);
M2C_UNK HSD_FObjRemoveAll();
u32 HSD_FObjLoadDesc(s32);
void *HSD_JObjLoadJoint(u32);
M2C_UNK HSD_JObjUnref();
void *HSD_IDGetDataFromTable(M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_802A8C10;
extern M2C_UNK lbl_802A8C1C;
extern f32 lbl_80351E60;
void *fn_80105930(M2C_UNK *);
extern M2C_UNK lbl_803500E0;
extern M2C_UNK lbl_803500E8;
extern f32 lbl_80351E64;
M2C_UNK HSD_ObjFree(M2C_UNK *, u32, M2C_UNK *);

s32 HSD_MObjGetTObj(void *arg0);
void HSD_DObjRemove(void **arg0);
s32 HSD_MObjAlloc(void);
void *HSD_MaterialAlloc(void);
void MObjRelease(void *arg0);
void fn_800EC5F4(u32 arg0);
void JObjInfoInit(void);
void HSD_AObjInitAllocData(void);
void HSD_AObjInitEndCallBack(void);
void HSD_AObjInvokeCallBacks(void);
void HSD_AObjReqAnim(void *arg0, f32 farg0);
void HSD_AObjInterpretAnim(void *arg0, s32 arg1, s32 arg2);
void *HSD_AObjLoadDesc(void *arg0);
void HSD_AObjRemove(void *arg0);
void *HSD_AObjAlloc(void);
void HSD_AObjFree(u32 arg0);
void CObjForeachAnim();
void LObjForeachAnim();
void DObjForeachAnim();
void JObjForeachAnim();

s32 HSD_MObjGetTObj(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 8);
}

void HSD_DObjRemove(void **arg0) {
    void *temp_r4;
    void *temp_r4_2;

    if (arg0 != NULL) {
        temp_r4 = *arg0;
        M2C_FIELD(temp_r4, M2C_UNK (**)(void *), 0x30)(temp_r4);
        temp_r4_2 = *arg0;
        M2C_FIELD(temp_r4_2, M2C_UNK (**)(void **, void *), 0x34)(arg0, temp_r4_2);
    }
}

s32 HSD_MObjAlloc(void) {
    M2C_UNK *var_r3;
    s32 temp_r3;

    var_r3 = lbl_80350C08;
    var_r3 = var_r3 != NULL ? var_r3 : &lbl_802A8AA0;
    temp_r3 = hsdNew(var_r3);
    if (temp_r3 == 0) {
        __assert(&lbl_803500C0, 0x44A, &lbl_803500C8);
    }
    return temp_r3;
}

void *HSD_MaterialAlloc(void) {
    void *temp_r3;

    temp_r3 = hsdAllocMemPiece(0x14);
    if (temp_r3 == NULL) {
        __assert(&lbl_803500C0, 0x466, &lbl_803500D8);
    }
    memset(temp_r3, 0, 0x14);
    M2C_FIELD(temp_r3, f32 *, 0xC) = (f32) lbl_80351E54;
    return temp_r3;
}

void MObjRelease(void *arg0) {
    /* draft: did not compile: HSD_AObjRemove(M2C_FIELD(arg0, s32 *, 0x14)); */
    hsdFreeMemPiece(M2C_FIELD(arg0, s32 *, 0xC), 0x14);
    HSD_TObjRemoveAll(M2C_FIELD(arg0, s32 *, 8));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x18) != 0U) {
        HSD_TExpFreeTevDesc();
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        HSD_TExpFreeList(7, 1);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x10) != 0U) {
        hsdFreeMemPiece((long)(0xC), (long)(0));
    }
    M2C_FIELD(M2C_FIELD(&lbl_802A8AA0, void **, 0x14), M2C_UNK (**)(void *, void *), 0x30)(arg0, M2C_FIELD(&lbl_802A8AA0, void **, 0x14));
}

void fn_800EC5F4(u32 arg0) {
    if (arg0 == (u32) lbl_80350C08) {
        lbl_80350C08 = 0U;
    }
    if (0 /* draft: did not compile */) {
        lbl_80350C10 = 0;
        lbl_80350C14 = 0;
    }
    M2C_FIELD(M2C_FIELD(&lbl_802A8AA0, void **, 0x14), M2C_UNK (**)(void *), 0x38)(M2C_FIELD(&lbl_802A8AA0, void **, 0x14));
}

void JObjInfoInit(void) {
    hsdInitClassInfo(&lbl_802A8AA0, &lbl_802AA538, &lbl_802A8AA0 + 0x148, &lbl_802A8AA0 + 0x160, 0x54, 0x20);
    /* draft: did not compile: M2C_FIELD(&lbl_802A8AA0, M2C_UNK (**)(), 0x30) = MObjRelease; */
    /* draft: did not compile: M2C_FIELD(&lbl_802A8AA0, M2C_UNK (**)(), 0x38) = fn_800EC5F4; */
    M2C_FIELD(&lbl_802A8AA0, M2C_UNK **, 0x3C) = &HSD_MObjSetup;
    M2C_FIELD(&lbl_802A8AA0, M2C_UNK **, 0x50) = &HSD_MObjUnset;
    M2C_FIELD(&lbl_802A8AA0, M2C_UNK **, 0x40) = &MObjLoad;
    M2C_FIELD(&lbl_802A8AA0, M2C_UNK **, 0x44) = &fn_800EB738;
    M2C_FIELD(&lbl_802A8AA0, M2C_UNK **, 0x48) = &MObjSetupTev;
    M2C_FIELD(&lbl_802A8AA0, M2C_UNK **, 0x4C) = &MObjUpdateFunc;
}

void HSD_AObjInitAllocData(void) {
    HSD_ObjAllocInit(&lbl_8031D238, 0x1C, 4);
}

void HSD_AObjInitEndCallBack(void) {
    lbl_80350C20 = 0;
    lbl_80350C1C = 0;
}

void HSD_AObjInvokeCallBacks(void) {
    void *var_r31;

    if (((s32) lbl_80350C20 != 0) && ((s32) lbl_80350C1C == 0)) {
        var_r31 = lbl_80350C18;
loop_4:
        if (var_r31 != NULL) {
            M2C_FIELD(var_r31, M2C_UNK (**)(), 4)();
            var_r31 = M2C_FIELD(var_r31, void **, 0);
            goto loop_4;
        }
    }
}

void HSD_AObjReqAnim(void *arg0, f32 farg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 4) = farg0;
        M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & 0xBFFFFFFF) | 0x08000000);
        HSD_FObjReqAnimAll(M2C_FIELD(arg0, s32 *, 0x14));
    }
}

void HSD_AObjInterpretAnim(void *arg0, s32 arg1, s32 arg2) {
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_r3;
    u32 temp_r4;

    if (arg0 != NULL) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_r3 & 0x40000000) {
            return;
        }
        if (temp_r3 & 0x08000000) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_r3 & 0xF7FFFFFF);
        } else {
            M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + M2C_FIELD(arg0, f32 *, 0x10));
        }
        if ((M2C_FIELD(arg0, s32 *, 0) & 0x20000000) && (temp_f2 = M2C_FIELD(arg0, f32 *, 0xC), M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((temp_f2 == M2C_FIELD(arg0, f32 *, 4)) != 0))) {
            if (M2C_FIELD(arg0, f32 *, 8) < temp_f2) {
                HSD_FObjStopAnimAll((long)(M2C_FIELD(arg0, s32 *, 0x14)), (long)(arg1), (long)(arg2), (float)(0));
                temp_f2_2 = M2C_FIELD(arg0, f32 *, 8);
                M2C_FIELD(arg0, f32 *, 4) = (f32) ((f64) M2C_FIELD(arg0, f32 *, 8) + fn_80156E70(M2C_FIELD(arg0, f32 *, 4) - temp_f2_2, M2C_FIELD(arg0, f32 *, 0xC) - temp_f2_2));
                HSD_FObjReqAnimAll((long)(M2C_FIELD(arg0, s32 *, 0x14)));
            } else {
                M2C_FIELD(arg0, f32 *, 4) = temp_f2;
            }
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x04000000);
        } else {
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & 0xFBFFFFFF);
        }
        if (M2C_FIELD(arg0, s32 *, 0) & 0x10000000) {
            HSD_FObjInterpretAnimAll(M2C_FIELD(arg0, s32 *, 0x14), arg1, 0);
        } else {
            HSD_FObjInterpretAnimAll(M2C_FIELD(arg0, s32 *, 0x14), arg1, arg2);
        }
        if (!(M2C_FIELD(arg0, s32 *, 0) & 0x20000000)) {
            M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
            if ((M2C_FIELD(arg0, f32 *, 0xC) == M2C_FIELD(arg0, f32 *, 4)) && (arg0 != NULL)) {
                HSD_FObjStopAnimAll(M2C_FIELD(arg0, s32 *, 0x14), arg1, arg2, M2C_FIELD(arg0, f32 *, 0x10));
                M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x40000000);
            }
        }
        temp_r4 = M2C_FIELD(arg0, s32 *, 0) & 0x40000000;
        if (temp_r4 != 0) {
            lbl_80350C20 += 1;
        }
        if (temp_r4 == 0) {
            lbl_80350C1C += 1;
        }
    }
}

void *HSD_AObjLoadDesc(void *arg0) {
    s32 temp_cr0_eq;
    u32 temp_r30;
    void *temp_r3;
    void *var_r30;

    if (arg0 != NULL) {
        temp_r3 = HSD_AObjAlloc();
        if (temp_r3 != NULL) {
            M2C_FIELD(temp_r3, s32 *, 0) = (s32) (M2C_FIELD(temp_r3, s32 *, 0) | (M2C_FIELD(arg0, s32 *, 0) & 0x30000000));
        }
        HSD_AObjSetRewindFrame(temp_r3, lbl_80351E60);
        HSD_AObjSetEndFrame(temp_r3, M2C_FIELD(arg0, f32 *, 4));
        temp_r30 = HSD_FObjLoadDesc(M2C_FIELD(arg0, s32 *, 8));
        if (temp_r3 != NULL) {
            if ((u32) M2C_FIELD(temp_r3, u32 *, 0x14) != 0U) {
                HSD_FObjRemoveAll();
            }
            M2C_FIELD(temp_r3, u32 *, 0x14) = temp_r30;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xC) != 0U) {
            var_r30 = HSD_IDGetDataFromTable(0, 0);
            temp_cr0_eq = var_r30 == NULL;
            if (temp_cr0_eq == 0) {
                if (temp_cr0_eq == 0) {
                    M2C_FIELD(var_r30, u16 *, 4) = (u16) (M2C_FIELD(var_r30, u16 *, 4) + 1);
                    if ((u16) M2C_FIELD(var_r30, u16 *, 4) == -1U) {
                        __assert(&lbl_802A8C10, 0x5D, &lbl_802A8C1C);
                    }
                }
            } else {
                var_r30 = HSD_JObjLoadJoint(M2C_FIELD(arg0, u32 *, 0xC));
            }
            if (temp_r3 != NULL) {
                if ((void *) M2C_FIELD(temp_r3, void **, 0x18) != NULL) {
                    HSD_JObjUnref();
                }
                M2C_FIELD(temp_r3, void **, 0x18) = var_r30;
            }
        }
        return temp_r3;
    }
    return NULL;
}

void HSD_AObjRemove(void *arg0) {
    s32 temp_cr0_eq;

    temp_cr0_eq = arg0 == NULL;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_eq == 0) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x14) != 0U) {
                HSD_FObjRemoveAll();
            }
            M2C_FIELD(arg0, u32 *, 0x14) = 0U;
        }
        if (arg0 != NULL) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x18) != 0U) {
                HSD_JObjUnref();
            }
            M2C_FIELD(arg0, u32 *, 0x18) = 0U;
        }
        /* draft: did not compile: HSD_AObjFree(arg0); */
    }
}

void *HSD_AObjAlloc(void) {
    void *temp_r3;

    temp_r3 = fn_80105930(&lbl_8031D238);
    if (temp_r3 == NULL) {
        __assert(&lbl_803500E0, 0x1E9, &lbl_803500E8);
    }
    memset(temp_r3, 0, 0x1C);
    M2C_FIELD(temp_r3, f32 *, 0x10) = (f32) lbl_80351E64;
    M2C_FIELD(temp_r3, s32 *, 0) = 0x40000000;
    return temp_r3;
}

void HSD_AObjFree(u32 arg0) {
    if (arg0 != 0U) {
        HSD_ObjFree(&lbl_8031D238, arg0, &lbl_8031D238);
    }
}

void CObjForeachAnim() { } /* draft: stub */

void LObjForeachAnim() { } /* draft: stub */

void DObjForeachAnim() { } /* draft: stub */

void JObjForeachAnim() { } /* draft: stub */
