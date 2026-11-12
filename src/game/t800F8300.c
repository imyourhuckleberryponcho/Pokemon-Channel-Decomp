/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK PSMTXCopy(s32, M2C_UNK *);
u32 PSMTXInvXpose(s32, M2C_UNK *);
M2C_UNK GXLoadPosMtxImm(s32, M2C_UNK);
M2C_UNK GXLoadNrmMtxImm(M2C_UNK *, M2C_UNK);
M2C_UNK GXSetCurrentMtx(M2C_UNK);
M2C_UNK GXLoadTexMtxImm(M2C_UNK *, M2C_UNK, M2C_UNK);
u32 _HSD_TObjGetCurrentByType(M2C_UNK, M2C_UNK);
M2C_UNK SetupSharedVtxModelMtx();
M2C_UNK SetupEnvelopeModelMtx();
void *fn_800FC7FC();
extern M2C_UNK lbl_802AA340;
extern M2C_UNK lbl_8031D2C0;
M2C_UNK GXSetVtxDesc(s32, s32);
M2C_UNK fn_800E0804();
M2C_UNK GXSetVtxAttrFmt(M2C_UNK, s32, s32, s32, u8);
M2C_UNK fn_800E0FA8(s32, s32, u8);
M2C_UNK GXCallDisplayList(s32, s32);
M2C_UNK HSD_StateSetCullMode(M2C_UNK);
M2C_UNK fn_800F75AC(void *);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_802A976C;
extern M2C_UNK lbl_80350148;
extern void *lbl_80350C64;
extern void *lbl_80350C68;
M2C_UNK HSD_AObjRemove();
M2C_UNK HSD_JObjUnrefThis(void *);
void *HSD_SListRemove(void *);
M2C_UNK HSD_Free_801095FC(s32);
M2C_UNK hsdFreeMemPiece(void *, M2C_UNK);
extern M2C_UNK lbl_802A9468;
s32 fn_801095CC(s32);
extern u32 lbl_80350C50;
extern s32 lbl_80350C54;
extern s32 lbl_80350C58;
extern s32 lbl_80350C5C;
extern s32 lbl_80350C60;
M2C_UNK hsdInitClassInfo(M2C_UNK *, M2C_UNK *, void *, void *, M2C_UNK, M2C_UNK);
extern M2C_UNK PObjUpdateFunc;
extern M2C_UNK fn_800F61C4;
extern M2C_UNK lbl_802AA538;
extern M2C_UNK lbl_80350170;
extern M2C_UNK lbl_80350178;
M2C_UNK fn_800FD7C8(void *);
M2C_UNK PSMTXConcat();
M2C_UNK PSMTXMultVec();
M2C_UNK HSD_JObjSetupMatrixSub(void *);
M2C_UNK HSD_MtxSRT();
M2C_UNK HSD_MtxSRTQuat();
void *HSD_FogAlloc();
M2C_UNK HSD_VecFree();
M2C_UNK HSD_DObjRemoveAnimAllByFlags(s32, s32);
M2C_UNK HSD_RObjRemoveAnimAllByFlags(s32, s32);
M2C_UNK HSD_DObjReqAnimAllByFlags(s32, s32, f32);
M2C_UNK HSD_AObjReqAnim(s32);
M2C_UNK HSD_RObjReqAnimAllByFlags(s32, s32, f32);
M2C_UNK HSD_DObjAddAnimAll(s32, s32, s32);
void *HSD_AObjLoadDesc(s32);
M2C_UNK HSD_JObjSetFlags(void *, M2C_UNK);
M2C_UNK HSD_JObjClearFlags(void *, M2C_UNK);
M2C_UNK HSD_RObjAddAnimAll(s32, s32);

void PObjSetupMtx(void *arg0, s32 arg2);
void HSD_PObjDisp(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void PObjRelease(void *arg0);
void PObjAmnesia(u32 arg0);
void fn_800F8A54(void);
void HSD_JObjCheckDepend(void *arg0);
s32 HSD_JObjMtxIsDirty(void *arg0);
void JObjResetRST(void *arg0, void *arg1);
void HSD_JObjResetRST(void *arg0, void *arg1, M2C_UNK arg_sp0);
void HSD_JObjSetupMatrix(void *arg0);
void HSD_JObjMakeMatrix(void *arg0);
void HSD_JObjRemoveAnimByFlags(void *arg0, s32 arg1);
void HSD_JObjRemoveAnimAllByFlags(void *arg0, s32 arg1, M2C_UNK arg_sp0);
void HSD_JObjReqAnimByFlags(void *arg0, s32 arg1, f32 farg0);
void HSD_FogReqAnimByFlags(void *arg0, s32 arg1, f32 farg0);
void HSD_FogReqAnim(void);
void JObjSortAnim(void *arg0);
void HSD_JObjAddAnim(void *arg0, void *arg1, void *arg2, void *arg3);
void HSD_JObjAddAnimAll(void *arg0, void *arg1, void *arg2, void *arg3, M2C_UNK arg_sp0);

void PObjSetupMtx(void *arg0, s32 arg2) {
    M2C_UNK sp38;
    M2C_UNK sp8;
    s32 temp_r0;
    s32 var_r28;
    s32 var_r28_2;
    void *temp_r3;
    void *temp_r3_2;

    temp_r0 = M2C_FIELD(arg0, u16 *, 0xC) & 0x3000;
    switch (temp_r0) {                              /* irregular */
    case 0x0:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x14) == 0U) {
            temp_r3 = fn_800FC7FC();
            if (0 /* draft: did not compile */) {
                GXSetCurrentMtx(0);
                GXLoadPosMtxImm(arg2, 0);
                var_r28 = 0;
                M2C_FIELD(&lbl_802AA340, s32 *, 0xC) = (s32) (M2C_FIELD(&lbl_802AA340, s32 *, 0xC) + 1);
                if (M2C_FIELD(temp_r3, s32 *, 0x14) & 0x80) {
                    var_r28 = 1;
                }
                if (_HSD_TObjGetCurrentByType(0, 1) != 0U) {
                    var_r28 |= 3;
                }
                if (_HSD_TObjGetCurrentByType(0, 2) != 0U) {
                    var_r28 |= 5;
                }
                if (var_r28 & 1) {
                    if (PSMTXInvXpose(arg2, &sp38) == 0U) {
                        PSMTXCopy(arg2, &sp38);
                    }
                    if (M2C_FIELD(temp_r3, s32 *, 0x14) & 0x80) {
                        GXLoadNrmMtxImm(&sp38, 0);
                        M2C_FIELD(&lbl_802AA340, s32 *, 0xC) = (s32) (M2C_FIELD(&lbl_802AA340, s32 *, 0xC) + 1);
                    }
                    if (var_r28 & 6) {
                        GXLoadTexMtxImm(&sp38, 0x1E, 0);
                        M2C_FIELD(&lbl_802AA340, s32 *, 0xC) = (s32) (M2C_FIELD(&lbl_802AA340, s32 *, 0xC) + 1);
                        return;
                    }
                }
            } else {
                return;
            }
        } else {
            SetupSharedVtxModelMtx();
            return;
        }
        break;
    case 0x1000:
        temp_r3_2 = fn_800FC7FC();
        if (0 /* draft: did not compile */) {
            GXSetCurrentMtx(0);
            GXLoadPosMtxImm(arg2, 0);
            var_r28_2 = 0;
            M2C_FIELD(&lbl_802AA340, s32 *, 0xC) = (s32) (M2C_FIELD(&lbl_802AA340, s32 *, 0xC) + 1);
            if (M2C_FIELD(temp_r3_2, s32 *, 0x14) & 0x80) {
                var_r28_2 = 1;
            }
            if (_HSD_TObjGetCurrentByType(0, 1) != 0U) {
                var_r28_2 |= 3;
            }
            if (_HSD_TObjGetCurrentByType(0, 2) != 0U) {
                var_r28_2 |= 5;
            }
            if (var_r28_2 & 1) {
                if (PSMTXInvXpose(arg2, &sp8) == 0U) {
                    PSMTXCopy(arg2, &sp8);
                }
                if (M2C_FIELD(temp_r3_2, s32 *, 0x14) & 0x80) {
                    GXLoadNrmMtxImm(&sp8, 0);
                    M2C_FIELD(&lbl_802AA340, s32 *, 0xC) = (s32) (M2C_FIELD(&lbl_802AA340, s32 *, 0xC) + 1);
                }
                if (var_r28_2 & 6) {
                    GXLoadTexMtxImm(&sp8, 0x1E, 0);
                    M2C_FIELD(&lbl_802AA340, s32 *, 0xC) = (s32) (M2C_FIELD(&lbl_802AA340, s32 *, 0xC) + 1);
                    return;
                }
            }
        }
        break;
    case 0x2000:
        SetupEnvelopeModelMtx();
        break;
    }
}

void HSD_PObjDisp(void *arg0, s32 arg1, s32 arg2, s32 arg3) { } /* draft: stub */

void PObjRelease(void *arg0) {
    s32 temp_r0;
    void *temp_r31;
    void *temp_r31_2;
    void *var_r29;
    void *var_r30;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x18) != 0U) {
        HSD_AObjRemove();
    }
    temp_r0 = M2C_FIELD(arg0, u16 *, 0xC) & 0x3000;
    switch (temp_r0) {                              /* irregular */
    case 0x1000:
        temp_r31 = M2C_FIELD(arg0, void **, 0x14);
        if (temp_r31 != NULL) {
            if (M2C_FIELD(temp_r31, u16 *, 0) & 2) {
                HSD_Free_801095FC(M2C_FIELD(temp_r31, s32 *, 0x1C));
            }
            if (temp_r31 != NULL) {
                hsdFreeMemPiece(temp_r31, 0x20);
            }
        }
        break;
    case 0x2000:
        var_r29 = M2C_FIELD(arg0, void **, 0x14);
loop_20:
        if (var_r29 != NULL) {
            var_r30 = M2C_FIELD(var_r29, void **, 4);
loop_18:
            if (var_r30 != NULL) {
                temp_r31_2 = M2C_FIELD(var_r30, void **, 0);
                HSD_JObjUnrefThis(M2C_FIELD(var_r30, void **, 4));
                if (var_r30 != NULL) {
                    hsdFreeMemPiece(var_r30, 0xC);
                }
                var_r30 = temp_r31_2;
                goto loop_18;
            }
            var_r29 = HSD_SListRemove(var_r29);
            goto loop_20;
        }
        break;
    case 0x0:
        HSD_JObjUnrefThis(M2C_FIELD(arg0, void **, 0x14));
        break;
    }
    M2C_FIELD(M2C_FIELD(&lbl_802A9468, void **, 0x14), M2C_UNK (**)(void *, void *), 0x30)(arg0, M2C_FIELD(&lbl_802A9468, void **, 0x14));
}

void PObjAmnesia(u32 arg0) {
    if (arg0 == (u32) lbl_80350C50) {
        lbl_80350C50 = 0U;
    }
    if (0 /* draft: did not compile */) {
        if (fn_801095CC(lbl_80350C54) != 0) {
            lbl_80350C54 = 0;
            lbl_80350C5C = 0;
        }
        if (fn_801095CC(lbl_80350C58) != 0) {
            lbl_80350C58 = 0;
            lbl_80350C60 = 0;
        }
        lbl_80350C64 = 0;
        lbl_80350C68 = 0;
    }
    M2C_FIELD(M2C_FIELD(&lbl_802A9468, void **, 0x14), M2C_UNK (**)(u32, void *), 0x38)(arg0, M2C_FIELD(&lbl_802A9468, void **, 0x14));
}

#pragma push
#pragma peephole off
void fn_800F8A54(void) {
    hsdInitClassInfo(&lbl_802A9468, &lbl_802AA538, &lbl_802A9468 + 0x318, &lbl_802A9468 + 0x330, 0x4C, 0x1C);
    /* draft: did not compile: M2C_FIELD(&lbl_802A9468, M2C_UNK (**)(), 0x30) = PObjRelease; */
    /* draft: did not compile: M2C_FIELD(&lbl_802A9468, M2C_UNK (**)(), 0x38) = PObjAmnesia; */
    /* draft: did not compile: M2C_FIELD(&lbl_802A9468, M2C_UNK (**)(), 0x3C) = HSD_PObjDisp; */
    /* draft: did not compile: M2C_FIELD(&lbl_802A9468, M2C_UNK (**)(), 0x40) = PObjSetupMtx; */
    M2C_FIELD(&lbl_802A9468, M2C_UNK **, 0x44) = &fn_800F61C4;
    M2C_FIELD(&lbl_802A9468, M2C_UNK **, 0x48) = &PObjUpdateFunc;
}
#pragma pop

void HSD_JObjCheckDepend(void *arg0) {
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
        if (temp_cr0_eq != 0) {
            __assert(&lbl_80350170, 0x25D, &lbl_80350178);
        }
        temp_r4 = M2C_FIELD((s32)arg0, s32 *, 0x14);
        var_r3 = 0;
        temp_r5 = temp_r4 & 0x800000;
        if ((temp_r5 == 0) && (temp_r4 & 0x40)) {
            var_r3 = 1;
        }
        if (var_r3 != 0) {
            return;
        }
        if (temp_r5 != 0) {
            if (!(temp_r4 & 0x01000000) && (temp_r30 = M2C_FIELD(arg0, void **, 0xC), temp_cr0_eq_2 = temp_r30 == NULL, (temp_cr0_eq_2 == 0))) {
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
        } else {
            temp_r3 = M2C_FIELD(arg0, void **, 0xC);
            if (((temp_r3 != NULL) && (M2C_FIELD(temp_r3, s32 *, 0x14) & 0x40)) || (temp_r3_2 = temp_r4 & 0x600000, (((u32) (temp_r3_2 + 0xFFE00000) == 0U) != 0)) || ((u32) (temp_r3_2 + 0xFFC00000) == 0U) || ((u32) (temp_r3_2 + 0xFFA00000) == 0U) || ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U)) {
                M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) | 0x40);
            }
        }
    }
}

s32 HSD_JObjMtxIsDirty(void *arg0) {
    s32 temp_r4;
    s32 var_r3;

    if (arg0 == NULL) {
        __assert(&lbl_80350170, 0x25D, &lbl_80350178);
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x14);
    var_r3 = 0;
    if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
        var_r3 = 1;
    }
    return var_r3;
}

void JObjResetRST(void *arg0, void *arg1) {
    s32 temp_cr0_eq;
    s32 var_r3;
    s32 temp_r4;

    if (arg0 != NULL) {
        if (arg1 == NULL) {
            return;
        }
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg1, s32 *, 0x2C);
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
        M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg1, s32 *, 0x30);
        M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(arg1, s32 *, 0x34);
        if (!(M2C_FIELD(arg0, s32 *, 0x14) & 0x02000000)) {
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
                    fn_800FD7C8(arg0);
                }
            }
        }
    }
}

#pragma push
#pragma dont_inline on
void HSD_JObjResetRST(void *arg0, void *arg1, M2C_UNK arg_sp0) {
    s32 temp_cr0_eq;
    s32 temp_r4;
    s32 var_r3;
    void *var_r31;
    void *var_r25;
    void *var_r26;
    void *var_r27;
    void *var_r28;
    void *var_r29;
    void *var_r30;
    void *var_r24;

    if (arg0 != NULL) {
        if (arg1 == NULL) {
            return;
        }
        if ((arg0 != NULL) && (arg1 != NULL)) {
            M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
            M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
            M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
            M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg1, s32 *, 0x2C);
            M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg1, s32 *, 0x30);
            M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(arg1, s32 *, 0x34);
            if (!(M2C_FIELD(arg0, s32 *, 0x14) & 0x02000000)) {
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
                        fn_800FD7C8(arg0);
                    }
                }
            }
        }
        if (!(M2C_FIELD(arg0, s32 *, 0x14) & 0x1000)) {
            var_r31 = M2C_FIELD(arg0, void **, 0x10);
            var_r30 = M2C_FIELD(arg1, void **, 8);
loop_53:
            if (var_r31 != NULL) {
                if ((var_r31 != NULL) && (var_r30 != NULL)) {
                    if ((var_r31 != NULL) && (var_r30 != NULL)) {
                        M2C_FIELD(var_r31, f32 *, 0x1C) = (f32) M2C_FIELD(var_r30, f32 *, 0x14);
                        M2C_FIELD(var_r31, f32 *, 0x20) = (f32) M2C_FIELD(var_r30, f32 *, 0x18);
                        M2C_FIELD(var_r31, f32 *, 0x24) = (f32) M2C_FIELD(var_r30, f32 *, 0x1C);
                        M2C_FIELD(var_r31, s32 *, 0x2C) = (s32) M2C_FIELD(var_r30, s32 *, 0x20);
                        M2C_FIELD(var_r31, s32 *, 0x30) = (s32) M2C_FIELD(var_r30, s32 *, 0x24);
                        M2C_FIELD(var_r31, s32 *, 0x34) = (s32) M2C_FIELD(var_r30, s32 *, 0x28);
                        M2C_FIELD(var_r31, s32 *, 0x38) = (s32) M2C_FIELD(var_r30, s32 *, 0x2C);
                        M2C_FIELD(var_r31, s32 *, 0x3C) = (s32) M2C_FIELD(var_r30, s32 *, 0x30);
                        M2C_FIELD(var_r31, s32 *, 0x40) = (s32) M2C_FIELD(var_r30, s32 *, 0x34);
                        if (!(M2C_FIELD(var_r31, s32 *, 0x14) & 0x02000000) && (var_r31 != NULL) && (HSD_JObjMtxIsDirty(var_r31) == 0)) {
                            fn_800FD7C8(var_r31);
                        }
                    }
                    if (!(M2C_FIELD(var_r31, s32 *, 0x14) & 0x1000)) {
                        var_r28 = M2C_FIELD(var_r31, void **, 0x10);
                        var_r29 = M2C_FIELD(var_r30, void **, 8);
loop_49:
                        if (var_r28 != NULL) {
                            if ((var_r28 != NULL) && (var_r29 != NULL)) {
                                if ((var_r28 != NULL) && (var_r29 != NULL)) {
                                    M2C_FIELD(var_r28, f32 *, 0x1C) = (f32) M2C_FIELD(var_r29, f32 *, 0x14);
                                    M2C_FIELD(var_r28, f32 *, 0x20) = (f32) M2C_FIELD(var_r29, f32 *, 0x18);
                                    M2C_FIELD(var_r28, f32 *, 0x24) = (f32) M2C_FIELD(var_r29, f32 *, 0x1C);
                                    M2C_FIELD(var_r28, s32 *, 0x2C) = (s32) M2C_FIELD(var_r29, s32 *, 0x20);
                                    M2C_FIELD(var_r28, s32 *, 0x30) = (s32) M2C_FIELD(var_r29, s32 *, 0x24);
                                    M2C_FIELD(var_r28, s32 *, 0x34) = (s32) M2C_FIELD(var_r29, s32 *, 0x28);
                                    M2C_FIELD(var_r28, s32 *, 0x38) = (s32) M2C_FIELD(var_r29, s32 *, 0x2C);
                                    M2C_FIELD(var_r28, s32 *, 0x3C) = (s32) M2C_FIELD(var_r29, s32 *, 0x30);
                                    M2C_FIELD(var_r28, s32 *, 0x40) = (s32) M2C_FIELD(var_r29, s32 *, 0x34);
                                    if (!(M2C_FIELD(var_r28, s32 *, 0x14) & 0x02000000)) {
                                        HSD_JObjSetupMatrix(var_r28);
                                    }
                                }
                                if (!(M2C_FIELD(var_r28, s32 *, 0x14) & 0x1000)) {
                                    var_r26 = M2C_FIELD(var_r28, void **, 0x10);
                                    var_r27 = M2C_FIELD(var_r29, void **, 8);
loop_45:
                                    if (var_r26 != NULL) {
                                        if ((var_r26 != NULL) && (var_r27 != NULL)) {
                                            JObjResetRST(var_r26, var_r27);
                                            if (!(M2C_FIELD(var_r26, s32 *, 0x14) & 0x1000)) {
                                                var_r24 = M2C_FIELD(var_r26, void **, 0x10);
                                                var_r25 = M2C_FIELD(var_r27, void **, 8);
loop_41:
                                                if (var_r24 != NULL) {
                                                    HSD_JObjResetRST((void *)(var_r24), (void *)(var_r25), (long)(0));
                                                    var_r24 = M2C_FIELD(var_r24, void **, 8);
                                                    if (var_r25 != NULL) {
                                                        var_r25 = M2C_FIELD(var_r25, void **, 0xC);
                                                    } else {
                                                        var_r25 = NULL;
                                                    }
                                                    goto loop_41;
                                                }
                                            }
                                        }
                                        var_r26 = M2C_FIELD(var_r26, void **, 8);
                                        if (var_r27 != NULL) {
                                            var_r27 = M2C_FIELD(var_r27, void **, 0xC);
                                        } else {
                                            var_r27 = NULL;
                                        }
                                        goto loop_45;
                                    }
                                }
                            }
                            var_r28 = M2C_FIELD(var_r28, void **, 8);
                            if (var_r29 != NULL) {
                                var_r29 = M2C_FIELD(var_r29, void **, 0xC);
                            } else {
                                var_r29 = NULL;
                            }
                            goto loop_49;
                        }
                    }
                }
                var_r31 = M2C_FIELD(var_r31, void **, 8);
                if (var_r30 != NULL) {
                    var_r30 = M2C_FIELD(var_r30, void **, 0xC);
                } else {
                    var_r30 = NULL;
                }
                goto loop_53;
            }
        }
    }
}
#pragma pop

void HSD_JObjSetupMatrix(void *arg0) {
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
        if (var_r3 != 0) {
            return;
        }
        fn_800FD7C8(arg0);
    }
}

void HSD_JObjMakeMatrix(void *arg0) {
    s32 sp10;
    s32 spC;
    f32 sp8;
    f32 *temp_r3_3;
    f32 *var_r7;
    f32 *var_r7_2;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 var_r3_4;
    s32 temp_r4_6;
    u32 var_r3;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 temp_r4;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;

    temp_r30 = M2C_FIELD(arg0, void **, 0xC);
    temp_cr0_eq = temp_r30 == NULL;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_eq != 0) {
            __assert(&lbl_80350170, 0x25D, &lbl_80350178);
        }
        temp_r4 = M2C_FIELD(temp_r30, s32 *, 0x14);
        var_r3 = 0;
        if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
            var_r3 = 1;
        }
        if (var_r3 != 0) {
            HSD_JObjSetupMatrixSub(temp_r30);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) & 8) {
        temp_r3 = M2C_FIELD(arg0, void **, 0xC);
        if ((temp_r3 != NULL) && ((f32 *) M2C_FIELD(temp_r3, f32 **, 0x74) != NULL)) {
            if ((void *) M2C_FIELD(arg0, void **, 0x74) == NULL) {
                M2C_FIELD(arg0, void **, 0x74) = HSD_FogAlloc();
            }
            M2C_STRUCT_COPY(M2C_FIELD(arg0, void **, 0x74), M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), f32 **, 0x74), 0xC);
        } else if ((void *) M2C_FIELD(arg0, void **, 0x74) != NULL) {
            HSD_VecFree();
            M2C_FIELD(arg0, void **, 0x74) = NULL;
        }
    } else {
        if ((void *) M2C_FIELD(arg0, void **, 0x74) == NULL) {
            M2C_FIELD(arg0, void **, 0x74) = HSD_FogAlloc();
        }
        temp_r3_2 = M2C_FIELD(arg0, void **, 0xC);
        if ((temp_r3_2 != NULL) && (temp_r3_3 = M2C_FIELD(temp_r3_2, f32 **, 0x74), ((temp_r3_3 == NULL) == 0))) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x74), f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) * *temp_r3_3);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x74), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) * M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), f32 **, 0x74), f32 *, 4));
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x74), f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) * M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), f32 **, 0x74), f32 *, 8));
        } else {
            temp_r4_2 = M2C_FIELD(arg0, void **, 0x74);
            M2C_FIELD(temp_r4_2, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0x2C);
            M2C_FIELD(temp_r4_2, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
            M2C_FIELD(temp_r4_2, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) & 0x20000) {
        temp_r4_3 = M2C_FIELD(arg0, void **, 0xC);
        var_r3_2 = 0;
        if ((temp_r4_3 != NULL) && ((f32 *) M2C_FIELD(temp_r4_3, f32 **, 0x74) != NULL)) {
            var_r3_2 = 1;
        }
        if (var_r3_2 != 0) {
            var_r7 = M2C_FIELD(temp_r4_3, f32 **, 0x74);
        } else {
            var_r7 = NULL;
        }
        /* draft: did not compile: HSD_MtxSRTQuat(arg0 + 0x44, arg0 + 0x2C, arg0 + 0x1C, arg0 + 0x38, var_r7); */
    } else {
        temp_r4_4 = M2C_FIELD(arg0, void **, 0xC);
        var_r3_3 = 0;
        if ((temp_r4_4 != NULL) && ((f32 *) M2C_FIELD(temp_r4_4, f32 **, 0x74) != NULL)) {
            var_r3_3 = 1;
        }
        if (var_r3_3 != 0) {
            var_r7_2 = M2C_FIELD(temp_r4_4, f32 **, 0x74);
        } else {
            var_r7_2 = NULL;
        }
        /* draft: did not compile: HSD_MtxSRT(arg0 + 0x44, arg0 + 0x2C, arg0 + 0x1C, arg0 + 0x38, var_r7_2); */
    }
    temp_r3_4 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r3_4 != NULL) {
        /* draft: did not compile: temp_r4_5 = arg0 + 0x44; */
        /* draft: did not compile: PSMTXConcat(temp_r3_4 + 0x44, temp_r4_5, temp_r4_5); */
    }
    temp_r3_5 = M2C_FIELD(arg0, void **, 0x7C);
    if (temp_r3_5 != NULL) {
        temp_r30_2 = M2C_FIELD(temp_r3_5, void **, 0x18);
        temp_cr0_eq_2 = temp_r30_2 == NULL;
        if (temp_cr0_eq_2 == 0) {
            if (temp_cr0_eq_2 == 0) {
                if (temp_cr0_eq_2 != 0) {
                    __assert(&lbl_80350170, 0x25D, &lbl_80350178);
                }
                temp_r4_6 = M2C_FIELD(temp_r30_2, s32 *, 0x14);
                var_r3_4 = 0;
                if (!(temp_r4_6 & 0x800000) && (temp_r4_6 & 0x40)) {
                    var_r3_4 = 1;
                }
                if (var_r3_4 != 0) {
                    HSD_JObjSetupMatrixSub(temp_r30_2);
                }
            }
            /* draft: did not compile: PSMTXMultVec(temp_r30_2 + 0x44, arg0 + 0x38, &sp8); */
            M2C_FIELD(arg0, f32 *, 0x50) = sp8;
            M2C_FIELD(arg0, f32 *, 0x60) = spC;
            M2C_FIELD(arg0, f32 *, 0x70) = sp10;
        }
    }
}

void HSD_JObjRemoveAnimByFlags(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        if (arg1 & 1) {
            HSD_AObjRemove(M2C_FIELD(arg0, s32 *, 0x7C));
            M2C_FIELD(arg0, s32 *, 0x7C) = 0;
        }
        if (!(M2C_FIELD(arg0, s32 *, 0x14) & 0x4020)) {
            HSD_DObjRemoveAnimAllByFlags(M2C_FIELD(arg0, s32 *, 0x18), arg1);
        }
        HSD_RObjRemoveAnimAllByFlags(M2C_FIELD(arg0, s32 *, 0x80), arg1);
    }
}

#pragma push
#pragma dont_inline on
void HSD_JObjRemoveAnimAllByFlags(void *arg0, s32 arg1, M2C_UNK arg_sp0) {
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 temp_cr0_eq_4;
    s32 temp_cr0_eq_5;
    u32 temp_r29;
    void *var_r24;
    void *var_r25;
    void *var_r26;
    void *var_r28;
    void *var_r30;
    void *var_r31;

    temp_cr0_eq = arg0 == NULL;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_eq == 0) {
            if (arg1 & 1) {
                HSD_AObjRemove(M2C_FIELD(arg0, s32 *, 0x7C));
                M2C_FIELD(arg0, s32 *, 0x7C) = 0;
            }
            if (!(M2C_FIELD(arg0, s32 *, 0x14) & 0x4020)) {
                HSD_DObjRemoveAnimAllByFlags(M2C_FIELD(arg0, s32 *, 0x18), arg1);
            }
            HSD_RObjRemoveAnimAllByFlags(M2C_FIELD(arg0, s32 *, 0x80), arg1);
        }
        if (!(M2C_FIELD(arg0, s32 *, 0x14) & 0x1000)) {
            var_r28 = M2C_FIELD(arg0, void **, 0x10);
            temp_r29 = arg1 & 1;
loop_59:
            if (var_r28 != NULL) {
                temp_cr0_eq_2 = var_r28 == NULL;
                if (temp_cr0_eq_2 == 0) {
                    if (temp_cr0_eq_2 == 0) {
                        if (temp_r29 != 0) {
                            HSD_AObjRemove(M2C_FIELD(var_r28, s32 *, 0x7C));
                            M2C_FIELD(var_r28, s32 *, 0x7C) = 0;
                        }
                        if (!(M2C_FIELD(var_r28, s32 *, 0x14) & 0x4020)) {
                            HSD_DObjRemoveAnimAllByFlags(M2C_FIELD(var_r28, s32 *, 0x18), arg1);
                        }
                        HSD_RObjRemoveAnimAllByFlags(M2C_FIELD(var_r28, s32 *, 0x80), arg1);
                    }
                    if (!(M2C_FIELD(var_r28, s32 *, 0x14) & 0x1000)) {
                        var_r31 = M2C_FIELD(var_r28, void **, 0x10);
loop_57:
                        if (var_r31 != NULL) {
                            temp_cr0_eq_3 = var_r31 == NULL;
                            if (temp_cr0_eq_3 == 0) {
                                if (temp_cr0_eq_3 == 0) {
                                    if (temp_r29 != 0) {
                                        HSD_AObjRemove(M2C_FIELD(var_r31, s32 *, 0x7C));
                                        M2C_FIELD(var_r31, s32 *, 0x7C) = 0;
                                    }
                                    if (!(M2C_FIELD(var_r31, s32 *, 0x14) & 0x4020)) {
                                        HSD_DObjRemoveAnimAllByFlags(M2C_FIELD(var_r31, s32 *, 0x18), arg1);
                                    }
                                    HSD_RObjRemoveAnimAllByFlags(M2C_FIELD(var_r31, s32 *, 0x80), arg1);
                                }
                                if (!(M2C_FIELD(var_r31, s32 *, 0x14) & 0x1000)) {
                                    var_r30 = M2C_FIELD(var_r31, void **, 0x10);
loop_55:
                                    if (var_r30 != NULL) {
                                        temp_cr0_eq_4 = var_r30 == NULL;
                                        if (temp_cr0_eq_4 == 0) {
                                            if (temp_cr0_eq_4 == 0) {
                                                if (temp_r29 != 0) {
                                                    HSD_AObjRemove(M2C_FIELD(var_r30, s32 *, 0x7C));
                                                    M2C_FIELD(var_r30, s32 *, 0x7C) = 0;
                                                }
                                                if (!(M2C_FIELD(var_r30, s32 *, 0x14) & 0x4020)) {
                                                    HSD_DObjRemoveAnimAllByFlags(M2C_FIELD(var_r30, s32 *, 0x18), arg1);
                                                }
                                                HSD_RObjRemoveAnimAllByFlags(M2C_FIELD(var_r30, s32 *, 0x80), arg1);
                                            }
                                            if (!(M2C_FIELD(var_r30, s32 *, 0x14) & 0x1000)) {
                                                var_r26 = M2C_FIELD(var_r30, void **, 0x10);
loop_53:
                                                if (var_r26 != NULL) {
                                                    temp_cr0_eq_5 = var_r26 == NULL;
                                                    if (temp_cr0_eq_5 == 0) {
                                                        if (temp_cr0_eq_5 == 0) {
                                                            if (temp_r29 != 0) {
                                                                HSD_AObjRemove(M2C_FIELD(var_r26, s32 *, 0x7C));
                                                                M2C_FIELD(var_r26, s32 *, 0x7C) = 0;
                                                            }
                                                            if (!(M2C_FIELD(var_r26, s32 *, 0x14) & 0x4020)) {
                                                                HSD_DObjRemoveAnimAllByFlags(M2C_FIELD(var_r26, s32 *, 0x18), arg1);
                                                            }
                                                            HSD_RObjRemoveAnimAllByFlags(M2C_FIELD(var_r26, s32 *, 0x80), arg1);
                                                        }
                                                        if (!(M2C_FIELD(var_r26, s32 *, 0x14) & 0x1000)) {
                                                            var_r25 = M2C_FIELD(var_r26, void **, 0x10);
loop_51:
                                                            if (var_r25 != NULL) {
                                                                if (var_r25 != NULL) {
                                                                    HSD_JObjRemoveAnimByFlags(var_r25, arg1);
                                                                    if (!(M2C_FIELD(var_r25, s32 *, 0x14) & 0x1000)) {
                                                                        var_r24 = M2C_FIELD(var_r25, void **, 0x10);
loop_49:
                                                                        if (var_r24 != NULL) {
                                                                            HSD_JObjRemoveAnimAllByFlags((void *)(var_r24), (long)(arg1), (long)(0));
                                                                            var_r24 = M2C_FIELD(var_r24, void **, 8);
                                                                            goto loop_49;
                                                                        }
                                                                    }
                                                                }
                                                                var_r25 = M2C_FIELD(var_r25, void **, 8);
                                                                goto loop_51;
                                                            }
                                                        }
                                                    }
                                                    var_r26 = M2C_FIELD(var_r26, void **, 8);
                                                    goto loop_53;
                                                }
                                            }
                                        }
                                        var_r30 = M2C_FIELD(var_r30, void **, 8);
                                        goto loop_55;
                                    }
                                }
                            }
                            var_r31 = M2C_FIELD(var_r31, void **, 8);
                            goto loop_57;
                        }
                    }
                }
                var_r28 = M2C_FIELD(var_r28, void **, 8);
                goto loop_59;
            }
        }
    }
}
#pragma pop

void HSD_JObjReqAnimByFlags(void *arg0, s32 arg1, f32 farg0) {
    if (arg0 != NULL) {
        if (arg1 & 1) {
            HSD_AObjReqAnim(M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (!(M2C_FIELD(arg0, s32 *, 0x14) & 0x4020)) {
            HSD_DObjReqAnimAllByFlags(M2C_FIELD(arg0, s32 *, 0x18), arg1, farg0);
        }
        HSD_RObjReqAnimAllByFlags(M2C_FIELD(arg0, s32 *, 0x80), arg1, farg0);
    }
}

void HSD_FogReqAnimByFlags(void *arg0, s32 arg1, f32 farg0) {
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 temp_cr0_eq_4;
    s32 temp_cr0_eq_5;
    u32 temp_r29;
    void *var_r24;
    void *var_r25;
    void *var_r26;
    void *var_r28;
    void *var_r30;
    void *var_r31;

    temp_cr0_eq = arg0 == NULL;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_eq == 0) {
            if (arg1 & 1) {
                HSD_AObjReqAnim(M2C_FIELD(arg0, s32 *, 0x7C));
            }
            if (!(M2C_FIELD(arg0, s32 *, 0x14) & 0x4020)) {
                HSD_DObjReqAnimAllByFlags(M2C_FIELD(arg0, s32 *, 0x18), arg1, farg0);
            }
            HSD_RObjReqAnimAllByFlags(M2C_FIELD(arg0, s32 *, 0x80), arg1, farg0);
        }
        if (!(M2C_FIELD(arg0, s32 *, 0x14) & 0x1000)) {
            var_r28 = M2C_FIELD(arg0, void **, 0x10);
            temp_r29 = arg1 & 1;
loop_59:
            if (var_r28 != NULL) {
                temp_cr0_eq_2 = var_r28 == NULL;
                if (temp_cr0_eq_2 == 0) {
                    if (temp_cr0_eq_2 == 0) {
                        if (temp_r29 != 0) {
                            HSD_AObjReqAnim((long)(M2C_FIELD(var_r28, s32 *, 0x7C)));
                        }
                        if (!(M2C_FIELD(var_r28, s32 *, 0x14) & 0x4020)) {
                            HSD_DObjReqAnimAllByFlags(M2C_FIELD(var_r28, s32 *, 0x18), arg1, farg0);
                        }
                        HSD_RObjReqAnimAllByFlags(M2C_FIELD(var_r28, s32 *, 0x80), arg1, farg0);
                    }
                    if (!(M2C_FIELD(var_r28, s32 *, 0x14) & 0x1000)) {
                        var_r31 = M2C_FIELD(var_r28, void **, 0x10);
loop_57:
                        if (var_r31 != NULL) {
                            temp_cr0_eq_3 = var_r31 == NULL;
                            if (temp_cr0_eq_3 == 0) {
                                if (temp_cr0_eq_3 == 0) {
                                    if (temp_r29 != 0) {
                                        HSD_AObjReqAnim((long)(M2C_FIELD(var_r31, s32 *, 0x7C)));
                                    }
                                    if (!(M2C_FIELD(var_r31, s32 *, 0x14) & 0x4020)) {
                                        HSD_DObjReqAnimAllByFlags(M2C_FIELD(var_r31, s32 *, 0x18), arg1, farg0);
                                    }
                                    HSD_RObjReqAnimAllByFlags(M2C_FIELD(var_r31, s32 *, 0x80), arg1, farg0);
                                }
                                if (!(M2C_FIELD(var_r31, s32 *, 0x14) & 0x1000)) {
                                    var_r30 = M2C_FIELD(var_r31, void **, 0x10);
loop_55:
                                    if (var_r30 != NULL) {
                                        temp_cr0_eq_4 = var_r30 == NULL;
                                        if (temp_cr0_eq_4 == 0) {
                                            if (temp_cr0_eq_4 == 0) {
                                                if (temp_r29 != 0) {
                                                    HSD_AObjReqAnim((long)(M2C_FIELD(var_r30, s32 *, 0x7C)));
                                                }
                                                if (!(M2C_FIELD(var_r30, s32 *, 0x14) & 0x4020)) {
                                                    HSD_DObjReqAnimAllByFlags(M2C_FIELD(var_r30, s32 *, 0x18), arg1, farg0);
                                                }
                                                HSD_RObjReqAnimAllByFlags(M2C_FIELD(var_r30, s32 *, 0x80), arg1, farg0);
                                            }
                                            if (!(M2C_FIELD(var_r30, s32 *, 0x14) & 0x1000)) {
                                                var_r26 = M2C_FIELD(var_r30, void **, 0x10);
loop_53:
                                                if (var_r26 != NULL) {
                                                    temp_cr0_eq_5 = var_r26 == NULL;
                                                    if (temp_cr0_eq_5 == 0) {
                                                        if (temp_cr0_eq_5 == 0) {
                                                            if (temp_r29 != 0) {
                                                                HSD_AObjReqAnim((long)(M2C_FIELD(var_r26, s32 *, 0x7C)));
                                                            }
                                                            if (!(M2C_FIELD(var_r26, s32 *, 0x14) & 0x4020)) {
                                                                HSD_DObjReqAnimAllByFlags(M2C_FIELD(var_r26, s32 *, 0x18), arg1, farg0);
                                                            }
                                                            HSD_RObjReqAnimAllByFlags(M2C_FIELD(var_r26, s32 *, 0x80), arg1, farg0);
                                                        }
                                                        if (!(M2C_FIELD(var_r26, s32 *, 0x14) & 0x1000)) {
                                                            var_r25 = M2C_FIELD(var_r26, void **, 0x10);
loop_51:
                                                            if (var_r25 != NULL) {
                                                                if (var_r25 != NULL) {
                                                                    HSD_JObjReqAnimByFlags(var_r25, arg1, farg0);
                                                                    if (!(M2C_FIELD(var_r25, s32 *, 0x14) & 0x1000)) {
                                                                        var_r24 = M2C_FIELD(var_r25, void **, 0x10);
loop_49:
                                                                        if (var_r24 != NULL) {
                                                                            HSD_FogReqAnimByFlags(var_r24, arg1, farg0);
                                                                            var_r24 = M2C_FIELD(var_r24, void **, 8);
                                                                            goto loop_49;
                                                                        }
                                                                    }
                                                                }
                                                                var_r25 = M2C_FIELD(var_r25, void **, 8);
                                                                goto loop_51;
                                                            }
                                                        }
                                                    }
                                                    var_r26 = M2C_FIELD(var_r26, void **, 8);
                                                    goto loop_53;
                                                }
                                            }
                                        }
                                        var_r30 = M2C_FIELD(var_r30, void **, 8);
                                        goto loop_55;
                                    }
                                }
                            }
                            var_r31 = M2C_FIELD(var_r31, void **, 8);
                            goto loop_57;
                        }
                    }
                }
                var_r28 = M2C_FIELD(var_r28, void **, 8);
                goto loop_59;
            }
        }
    }
}

void HSD_FogReqAnim(void) {
    /* draft: did not compile: HSD_FogReqAnimByFlags(0x7FF); */
}

void JObjSortAnim(void *arg0) {
    M2C_UNK *temp_r4;
    M2C_UNK *var_r5;

    if (arg0 != NULL) {
        if ((M2C_UNK *) M2C_FIELD(arg0, M2C_UNK **, 0x14) == NULL) {
            return;
        }
        /* draft: did not compile: var_r5 = arg0 + 0x14; */
loop_7:
        /* draft: did not compile: temp_r4 = *var_r5; */
        if (temp_r4 == NULL) {
            return;
        }
        if ((u8) M2C_FIELD(temp_r4, u8 *, 0x13) == 0xC) {
            /* draft: did not compile: *var_r5 = M2C_FIELD(temp_r4, M2C_UNK **, 0); */
            M2C_FIELD(temp_r4, M2C_UNK **, 0) = M2C_FIELD(arg0, M2C_UNK **, 0x14);
            M2C_FIELD(arg0, M2C_UNK **, 0x14) = temp_r4;
            return;
        }
        var_r5 = temp_r4;
        goto loop_7;
    }
}

void HSD_JObjAddAnim(void *arg0, void *arg1, void *arg2, void *arg3) {
    M2C_UNK *temp_r5;
    M2C_UNK *var_r3;
    s32 var_r4;
    s32 var_r5;

    if (arg0 != NULL) {
        if (arg1 != NULL) {
            if ((void *) M2C_FIELD(arg0, void **, 0x7C) != NULL) {
                HSD_AObjRemove();
            }
            M2C_FIELD(arg0, void **, 0x7C) = HSD_AObjLoadDesc(M2C_FIELD(arg1, s32 *, 8));
            if (((M2C_FIELD(arg0, void **, 0x7C)) != NULL) && ((M2C_UNK *) M2C_FIELD((s32)(M2C_FIELD(arg0, void **, 0x7C)), M2C_UNK **, 0x14) != NULL)) {
                /* draft: did not compile: var_r3 = (M2C_FIELD(arg0, void **, 0x7C)) + 0x14; */
loop_10:
                /* draft: did not compile: temp_r5 = *var_r3; */
                if (temp_r5 != NULL) {
                    if ((u8) M2C_FIELD(temp_r5, u8 *, 0x13) == 0xC) {
                        /* draft: did not compile: *var_r3 = M2C_FIELD(temp_r5, M2C_UNK **, 0); */
                        M2C_FIELD(temp_r5, M2C_UNK **, 0) = M2C_FIELD((M2C_FIELD((s32)arg0, void **, 0x7C)), M2C_UNK **, 0x14);
                        M2C_FIELD((M2C_FIELD(arg0, void **, 0x7C)), M2C_UNK **, 0x14) = temp_r5;
                    } else {
                        var_r3 = temp_r5;
                        goto loop_10;
                    }
                }
            }
            HSD_RObjAddAnimAll(M2C_FIELD(arg0, s32 *, 0x80), M2C_FIELD(arg1, s32 *, 0xC));
            if (M2C_FIELD(arg1, s32 *, 0x10) & 1) {
                HSD_JObjSetFlags(arg0, 8);
            } else {
                HSD_JObjClearFlags(arg0, 8);
            }
        }
        if (!(M2C_FIELD(arg0, s32 *, 0x14) & 0x4020)) {
            if (arg3 != NULL) {
                var_r5 = M2C_FIELD(arg3, s32 *, 8);
            } else {
                var_r5 = 0;
            }
            if (arg2 != NULL) {
                var_r4 = M2C_FIELD(arg2, s32 *, 8);
            } else {
                var_r4 = 0;
            }
            HSD_DObjAddAnimAll(M2C_FIELD(arg0, s32 *, 0x18), var_r4, var_r5);
        }
    }
}

void HSD_JObjAddAnimAll(void *arg0, void *arg1, void *arg2, void *arg3, M2C_UNK arg_sp0) {
    M2C_UNK *temp_r5;
    M2C_UNK *var_r3;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r5;
    s32 var_r5_2;
    void *temp_r4;
    void *var_r20;
    void *var_r21;
    void *var_r22;
    void *var_r23;
    void *var_r24;
    void *var_r25;
    void *var_r26;
    void *var_r27;
    void *var_r28;
    void *var_r29;
    void *var_r30;
    void *var_r31;

    temp_cr0_eq = arg0 == NULL;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_eq == 0) {
            if (arg1 != NULL) {
                if ((void *) M2C_FIELD(arg0, void **, 0x7C) != NULL) {
                    HSD_AObjRemove();
                }
                M2C_FIELD(arg0, void **, 0x7C) = HSD_AObjLoadDesc(M2C_FIELD(arg1, s32 *, 8));
                temp_r4 = M2C_FIELD(arg0, void **, 0x7C);
                if ((temp_r4 != NULL) && ((M2C_UNK *) M2C_FIELD(temp_r4, M2C_UNK **, 0x14) != NULL)) {
                    /* draft: did not compile: var_r3 = temp_r4 + 0x14; */
loop_11:
                    /* draft: did not compile: temp_r5 = *var_r3; */
                    if (temp_r5 != NULL) {
                        if ((u8) M2C_FIELD(temp_r5, u8 *, 0x13) == 0xC) {
                            /* draft: did not compile: *var_r3 = M2C_FIELD(temp_r5, M2C_UNK **, 0); */
                            M2C_FIELD(temp_r5, M2C_UNK **, 0) = M2C_FIELD(temp_r4, M2C_UNK **, 0x14);
                            M2C_FIELD(temp_r4, M2C_UNK **, 0x14) = temp_r5;
                        } else {
                            var_r3 = temp_r5;
                            goto loop_11;
                        }
                    }
                }
                HSD_RObjAddAnimAll(M2C_FIELD(arg0, s32 *, 0x80), M2C_FIELD(arg1, s32 *, 0xC));
                if (M2C_FIELD(arg1, s32 *, 0x10) & 1) {
                    HSD_JObjSetFlags(arg0, 8);
                } else {
                    HSD_JObjClearFlags(arg0, 8);
                }
            }
            if (!(M2C_FIELD(arg0, s32 *, 0x14) & 0x4020)) {
                if (arg3 != NULL) {
                    var_r5 = M2C_FIELD(arg3, s32 *, 8);
                } else {
                    var_r5 = 0;
                }
                if (arg2 != NULL) {
                    var_r4 = M2C_FIELD(arg2, s32 *, 8);
                } else {
                    var_r4 = 0;
                }
                HSD_DObjAddAnimAll(M2C_FIELD(arg0, s32 *, 0x18), var_r4, var_r5);
            }
        }
        if (!(M2C_FIELD(arg0, s32 *, 0x14) & 0x1000)) {
            var_r31 = M2C_FIELD(arg0, void **, 0x10);
            if (arg1 != NULL) {
                var_r30 = M2C_FIELD(arg1, void **, 0);
            } else {
                var_r30 = NULL;
            }
            if (arg2 != NULL) {
                var_r29 = M2C_FIELD(arg2, void **, 0);
            } else {
                var_r29 = NULL;
            }
            if (arg3 != NULL) {
                var_r28 = M2C_FIELD(arg3, void **, 0);
            } else {
                var_r28 = NULL;
            }
loop_99:
            if (var_r31 != NULL) {
                temp_cr0_eq_2 = var_r31 == NULL;
                if (temp_cr0_eq_2 == 0) {
                    if (temp_cr0_eq_2 == 0) {
                        if (var_r30 != NULL) {
                            if ((void *) M2C_FIELD(var_r31, void **, 0x7C) != NULL) {
                                HSD_AObjRemove();
                            }
                            M2C_FIELD(var_r31, void **, 0x7C) = HSD_AObjLoadDesc(M2C_FIELD(var_r30, s32 *, 8));
                            JObjSortAnim(M2C_FIELD(var_r31, void **, 0x7C));
                            HSD_RObjAddAnimAll(M2C_FIELD(var_r31, s32 *, 0x80), M2C_FIELD(var_r30, s32 *, 0xC));
                            if (M2C_FIELD(var_r30, s32 *, 0x10) & 1) {
                                HSD_JObjSetFlags(var_r31, 8);
                            } else {
                                HSD_JObjClearFlags(var_r31, 8);
                            }
                        }
                        if (!(M2C_FIELD(var_r31, s32 *, 0x14) & 0x4020)) {
                            if (var_r28 != NULL) {
                                var_r5_2 = M2C_FIELD(var_r28, s32 *, 8);
                            } else {
                                var_r5_2 = 0;
                            }
                            if (var_r29 != NULL) {
                                var_r4_2 = M2C_FIELD(var_r29, s32 *, 8);
                            } else {
                                var_r4_2 = 0;
                            }
                            HSD_DObjAddAnimAll(M2C_FIELD(var_r31, s32 *, 0x18), var_r4_2, var_r5_2);
                        }
                    }
                    if (!(M2C_FIELD(var_r31, s32 *, 0x14) & 0x1000)) {
                        var_r24 = M2C_FIELD(var_r31, void **, 0x10);
                        if (var_r30 != NULL) {
                            var_r25 = M2C_FIELD(var_r30, void **, 0);
                        } else {
                            var_r25 = NULL;
                        }
                        if (var_r29 != NULL) {
                            var_r26 = M2C_FIELD(var_r29, void **, 0);
                        } else {
                            var_r26 = NULL;
                        }
                        if (var_r28 != NULL) {
                            var_r27 = M2C_FIELD(var_r28, void **, 0);
                        } else {
                            var_r27 = NULL;
                        }
loop_89:
                        if (var_r24 != NULL) {
                            if (var_r24 != NULL) {
                                HSD_JObjAddAnim(var_r24, var_r25, var_r26, var_r27);
                                if (!(M2C_FIELD(var_r24, s32 *, 0x14) & 0x1000)) {
                                    var_r20 = M2C_FIELD(var_r24, void **, 0x10);
                                    if (var_r25 != NULL) {
                                        var_r21 = M2C_FIELD(var_r25, void **, 0);
                                    } else {
                                        var_r21 = NULL;
                                    }
                                    if (var_r26 != NULL) {
                                        var_r22 = M2C_FIELD(var_r26, void **, 0);
                                    } else {
                                        var_r22 = NULL;
                                    }
                                    if (var_r27 != NULL) {
                                        var_r23 = M2C_FIELD(var_r27, void **, 0);
                                    } else {
                                        var_r23 = NULL;
                                    }
loop_79:
                                    if (var_r20 != NULL) {
                                        HSD_JObjAddAnimAll((void *)(var_r20), (void *)(var_r21), (void *)(var_r22), (void *)(var_r23), (long)(0));
                                        var_r20 = M2C_FIELD(var_r20, void **, 8);
                                        if (var_r21 != NULL) {
                                            var_r21 = M2C_FIELD(var_r21, void **, 4);
                                        } else {
                                            var_r21 = NULL;
                                        }
                                        if (var_r22 != NULL) {
                                            var_r22 = M2C_FIELD(var_r22, void **, 4);
                                        } else {
                                            var_r22 = NULL;
                                        }
                                        if (var_r23 != NULL) {
                                            var_r23 = M2C_FIELD(var_r23, void **, 4);
                                        } else {
                                            var_r23 = NULL;
                                        }
                                        goto loop_79;
                                    }
                                }
                            }
                            var_r24 = M2C_FIELD(var_r24, void **, 8);
                            if (var_r25 != NULL) {
                                var_r25 = M2C_FIELD(var_r25, void **, 4);
                            } else {
                                var_r25 = NULL;
                            }
                            if (var_r26 != NULL) {
                                var_r26 = M2C_FIELD(var_r26, void **, 4);
                            } else {
                                var_r26 = NULL;
                            }
                            if (var_r27 != NULL) {
                                var_r27 = M2C_FIELD(var_r27, void **, 4);
                            } else {
                                var_r27 = NULL;
                            }
                            goto loop_89;
                        }
                    }
                }
                var_r31 = M2C_FIELD(var_r31, void **, 8);
                if (var_r30 != NULL) {
                    var_r30 = M2C_FIELD(var_r30, void **, 4);
                } else {
                    var_r30 = NULL;
                }
                if (var_r29 != NULL) {
                    var_r29 = M2C_FIELD(var_r29, void **, 4);
                } else {
                    var_r29 = NULL;
                }
                if (var_r28 != NULL) {
                    var_r28 = M2C_FIELD(var_r28, void **, 4);
                } else {
                    var_r28 = NULL;
                }
                goto loop_99;
            }
        }
    }
}
