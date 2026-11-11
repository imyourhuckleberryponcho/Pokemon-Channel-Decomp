/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK HSD_DObjRemoveAll();
M2C_UNK HSD_AObjRemove();
M2C_UNK HSD_RObjRemoveAll();
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
M2C_UNK HSD_Panic(M2C_UNK *, M2C_UNK, void *);
extern M2C_UNK lbl_802A97A8;
extern M2C_UNK lbl_80350180;
extern M2C_UNK lbl_8035018C;
M2C_UNK HSD_VecFree();
M2C_UNK HSD_MtxFree();
M2C_UNK HSD_IDRemoveByIDFromTable(M2C_UNK, s32);
u32 HSD_IDGetDataFromTable();
extern u32 lbl_80350C70;
extern s32 lbl_80350C74;
extern s32 lbl_80350C84;
M2C_UNK hsdInitClassInfo(M2C_UNK *, M2C_UNK *, void *, void *, M2C_UNK, M2C_UNK);
extern M2C_UNK HSD_JObjMakeMatrix;
extern M2C_UNK fn_800F9F94;
extern M2C_UNK fn_800FB4AC;
extern M2C_UNK JObjInit;
extern M2C_UNK lbl_802AA3D0;
M2C_UNK HSD_ObjAllocInit(M2C_UNK *, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_8031D2D0;
M2C_UNK GXSetVtxDesc(M2C_UNK, M2C_UNK);
M2C_UNK GXSetVtxAttrFmt(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetCurrentMtx(M2C_UNK);
M2C_UNK HSD_SetupRenderMode(s32);
M2C_UNK HSD_StateInitTev();
M2C_UNK HSD_ClearVtxDesc_800F673C();
M2C_UNK PSMTXCopy(void *, void *);
M2C_UNK PSVECScale(f32 *, f32 *, f32, f32);
f32 PSVECMag(f32 *);
M2C_UNK PSVECCrossProduct();
extern M2C_UNK lbl_801DA8D8;
extern f32 lbl_80351FA8;
extern f32 lbl_80351FAC;
extern f32 lbl_80351FB0;
extern f64 lbl_80351FB8;
extern f64 lbl_80351FC0;
extern f32 lbl_80351FC8;
M2C_UNK PSVECNormalize(f32 *, f32 *, f32, f32);
M2C_UNK PSMTXConcat();
M2C_UNK MTXRotRad(M2C_UNK *, M2C_UNK, f32);
M2C_UNK PSMTXScale(M2C_UNK *, f32, f32, f32);
extern M2C_UNK lbl_802A9B80;
extern M2C_UNK lbl_802A9B90;
M2C_UNK PSMTXInverse(s32, s32);
M2C_UNK HSD_MtxInverseConcat();
extern M2C_UNK lbl_803501B0;
extern M2C_UNK lbl_803501B8;
M2C_UNK HSD_DObjSetCurrent(void *);
M2C_UNK HSD_LObjSetupSpecularInit(s32);
M2C_UNK HSD_PObjClearMtxMark(M2C_UNK, M2C_UNK);
M2C_UNK HSD_JObjSetCurrent(M2C_UNK);
s32 HSD_CObjGetCurrent();
M2C_UNK HSD_JObjSetupMatrixSub(void *);
void *HSD_MtxAlloc();
void *fn_80105930(M2C_UNK *);
extern void **lbl_803501A4;
extern void **lbl_803501A8;
extern void **lbl_803501AC;
extern M2C_UNK lbl_803501BC;
extern s32 lbl_80350C8C;
extern s32 lbl_80350C9C;
extern s32 lbl_80350CA4;
extern s32 lbl_80350C90;
extern s32 lbl_80350C98;
extern s32 lbl_80350CA0;
M2C_UNK HSD_ObjFree(M2C_UNK *, void *);
extern void *lbl_80350C94;
extern M2C_UNK lbl_803501A0;
M2C_UNK fn_800E0804();
M2C_UNK GXSetTexCoordGen2(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E1314(M2C_UNK);
M2C_UNK GXBegin(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E1D1C(M2C_UNK);
M2C_UNK fn_800E2CA4(M2C_UNK);
M2C_UNK GXSetChanCtrl(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXInitTexObj(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXLoadTexObj(M2C_UNK *, M2C_UNK);
M2C_UNK GXSetTevOp(M2C_UNK, M2C_UNK);
M2C_UNK fn_800E48A0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E48F4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, u8, u8, u8, u8);
M2C_UNK GXSetTevOrder(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E4B50(M2C_UNK);
M2C_UNK GXSetBlendMode(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetColorUpdate(s32);
M2C_UNK GXSetAlphaUpdate(s32);
M2C_UNK GXSetZMode(M2C_UNK, M2C_UNK, s32);
M2C_UNK fn_800E5144(M2C_UNK);
M2C_UNK GXLoadPosMtxImm(M2C_UNK *, M2C_UNK);
M2C_UNK HSD_StateInvalidate(M2C_UNK);
extern M2C_UNK lbl_802A9BC0;
extern M2C_UNK lbl_802A9F68;
extern s32 lbl_80350C88;

void JObjReleaseChild(void *arg0);
void JObjRelease(void *arg0);
void fn_800FE0CC(u32 arg0);
void fn_800FE130(void);
void HSD_ZListInitAllocData(void);
void HSD_StateInitDirect(s32 arg0, s32 arg1);
void mkVBillBoardMtx(void *arg0, void *arg1, void *arg2);
void mkHBillBoardMtx(void *arg0, void *arg1, void *arg2);
void mkBillBoardMtx(void *arg0, void *arg1, void *arg2);
void mkRBillBoardMtx(void *arg0, void *arg1, s32 arg2);
void HSD_JObjMakePositionMtx(void *arg0, s32 arg1, s32 arg2);
s32 _HSD_mkEnvelopeModelNodeMtx(void *arg0, s32 arg1);
void HSD_JObjDispSub(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
void HSD_JObjDispDObj(void *arg0, M2C_UNK *arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
void *fn_800FF334(void *arg0, s32 arg1, s32 arg2);
void fn_800FF4A0(void);
void _HSD_ZListDisp(void);
void _HSD_ZListClear(void);
void fn_800FF658(s32 arg0, s32 arg1);
void fn_800FF664(s32 *arg0, s32 *arg1);
void HSD_JObjDisp(void *arg0);
void fn_800FF734(s8 arg0, s8 arg1, s8 arg2, s8 arg3);
void fn_800FF74C(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, M2C_UNK arg_sp0);

void JObjReleaseChild(void *arg0) {
    s32 temp_r3_6;
    s32 temp_r7;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r5;
    u16 temp_r3;
    u16 temp_r3_2;
    u16 temp_r3_3;
    u16 temp_r3_4;
    u16 temp_r4;
    u16 temp_r4_8;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r30;
    void *temp_r3_5;
    void *temp_r4_10;
    void *temp_r4_11;
    void *temp_r4_12;
    void *temp_r4_13;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_9;
    void *var_r29;
    void *var_r30;
    void *var_r3;
    void *var_r3_2;
    void *var_r4;
    void *var_r6;

    temp_r29 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_r29 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0x14) & 0x1000) {
            if (temp_r29 != NULL) {
                temp_r4 = M2C_FIELD(temp_r29, u16 *, 4);
                var_r0 = temp_r4 == 0xFFFF;
                if (var_r0 != 0) {

                } else {
                    M2C_FIELD(temp_r29, u16 *, 4) = (u16) (temp_r4 - 1);
                    var_r0 = temp_r4 == 0;
                }
                if (var_r0 != 0) {
                    temp_r3 = M2C_FIELD(temp_r29, u16 *, 6);
                    if ((temp_r3 - 1) < 0) {
                        if (temp_r29 != NULL) {
                            temp_r4_2 = M2C_FIELD(temp_r29, void **, 0);
                            M2C_FIELD(temp_r4_2, M2C_UNK (**)(void *, void *), 0x30)(temp_r29, temp_r4_2);
                            temp_r4_3 = M2C_FIELD(temp_r29, void **, 0);
                            M2C_FIELD(temp_r4_3, M2C_UNK (**)(void *, void *), 0x34)(temp_r29, temp_r4_3);
                        }
                    } else {
                        M2C_FIELD(temp_r29, u16 *, 6) = (u16) (temp_r3 + 1);
                        if ((u16) M2C_FIELD(temp_r29, u16 *, 6) == 0) {
                            __assert(&lbl_802A97A8 + 0x1E0, 0x9E, &lbl_802A97A8 + 0x214);
                        }
                        temp_r4_4 = M2C_FIELD(temp_r29, void **, 0);
                        M2C_FIELD(temp_r4_4, M2C_UNK (**)(void *, void *), 0x4C)(temp_r29, temp_r4_4);
                        temp_r3_2 = M2C_FIELD(temp_r29, u16 *, 6);
                        var_r0_2 = temp_r3_2 == 0;
                        if (var_r0_2 != 0) {

                        } else {
                            M2C_FIELD(temp_r29, u16 *, 6) = (u16) (temp_r3_2 - 1);
                            var_r0_2 = M2C_FIELD(temp_r29, u16 *, 6) == 0;
                        }
                        if ((var_r0_2 != 0) && (temp_r29 != NULL)) {
                            temp_r4_5 = M2C_FIELD(temp_r29, void **, 0);
                            M2C_FIELD(temp_r4_5, M2C_UNK (**)(void *, void *), 0x30)(temp_r29, temp_r4_5);
                            temp_r4_6 = M2C_FIELD(temp_r29, void **, 0);
                            M2C_FIELD(temp_r4_6, M2C_UNK (**)(void *, void *), 0x34)(temp_r29, temp_r4_6);
                        }
                    }
                }
            }
        } else {
            var_r3 = NULL;
            M2C_FIELD(temp_r29, void **, 0xC) = NULL;
            var_r29 = M2C_FIELD(arg0, void **, 0x10);
            if (var_r29 != NULL) {
                temp_r4_7 = M2C_FIELD(var_r29, void **, 0xC);
                if (temp_r4_7 != NULL) {
                    if ((var_r29 == NULL) || (temp_r4_7 == NULL)) {
                        var_r3 = NULL;
                    } else {
                        var_r4 = M2C_FIELD(temp_r4_7, void **, 0x10);
                        if (var_r29 == var_r4) {

                        } else {
loop_29:
                            if (var_r4 == NULL) {
                                HSD_Panic(&lbl_80350180, 0x5EF, &lbl_802A97A8 + 0x2D4);
                                var_r3 = NULL;
                            } else {
                                temp_r0 = M2C_FIELD(var_r4, void **, 8);
                                if (temp_r0 == var_r29) {
                                    var_r3 = var_r4;
                                } else {
                                    var_r4 = temp_r0;
                                    goto loop_29;
                                }
                            }
                        }
                    }
                    if (var_r3 != NULL) {
                        M2C_FIELD(var_r3, s32 *, 8) = 0;
                    } else {
                        M2C_FIELD(M2C_FIELD(var_r29, void **, 0xC), void **, 0x10) = NULL;
                    }
                }
loop_51:
                if (var_r29 != NULL) {
                    temp_r30 = M2C_FIELD(var_r29, void **, 8);
                    M2C_FIELD(var_r29, s32 *, 0xC) = 0;
                    M2C_FIELD(var_r29, void **, 8) = NULL;
                    if (var_r29 != NULL) {
                        temp_r4_8 = M2C_FIELD(var_r29, u16 *, 4);
                        var_r0_3 = temp_r4_8 == 0xFFFF;
                        if (var_r0_3 != 0) {

                        } else {
                            M2C_FIELD(var_r29, u16 *, 4) = (u16) (temp_r4_8 - 1);
                            var_r0_3 = temp_r4_8 == 0;
                        }
                        if (var_r0_3 != 0) {
                            temp_r3_3 = M2C_FIELD(var_r29, u16 *, 6);
                            if ((temp_r3_3 - 1) < 0) {
                                if (var_r29 != NULL) {
                                    temp_r4_9 = M2C_FIELD(var_r29, void **, 0);
                                    M2C_FIELD(temp_r4_9, M2C_UNK (**)(void *, void *), 0x30)(var_r29, temp_r4_9);
                                    temp_r4_10 = M2C_FIELD(var_r29, void **, 0);
                                    M2C_FIELD(temp_r4_10, M2C_UNK (**)(void *, void *), 0x34)(var_r29, temp_r4_10);
                                }
                            } else {
                                M2C_FIELD(var_r29, u16 *, 6) = (u16) (temp_r3_3 + 1);
                                if ((u16) M2C_FIELD(var_r29, u16 *, 6) == 0) {
                                    __assert(&lbl_802A97A8 + 0x1E0, 0x9E, &lbl_802A97A8 + 0x214);
                                }
                                temp_r4_11 = M2C_FIELD(var_r29, void **, 0);
                                M2C_FIELD(temp_r4_11, M2C_UNK (**)(void *, void *), 0x4C)(var_r29, temp_r4_11);
                                temp_r3_4 = M2C_FIELD(var_r29, u16 *, 6);
                                var_r0_4 = temp_r3_4 == 0;
                                if (var_r0_4 != 0) {

                                } else {
                                    M2C_FIELD(var_r29, u16 *, 6) = (u16) (temp_r3_4 - 1);
                                    var_r0_4 = M2C_FIELD(var_r29, u16 *, 6) == 0;
                                }
                                if ((var_r0_4 != 0) && (var_r29 != NULL)) {
                                    temp_r4_12 = M2C_FIELD(var_r29, void **, 0);
                                    M2C_FIELD(temp_r4_12, M2C_UNK (**)(void *, void *), 0x30)(var_r29, temp_r4_12);
                                    temp_r4_13 = M2C_FIELD(var_r29, void **, 0);
                                    M2C_FIELD(temp_r4_13, M2C_UNK (**)(void *, void *), 0x34)(var_r29, temp_r4_13);
                                }
                            }
                        }
                    }
                    var_r29 = temp_r30;
                    goto loop_51;
                }
            }
        }
        M2C_FIELD(arg0, void **, 0x10) = NULL;
    }
    temp_r3_5 = M2C_FIELD(arg0, void **, 0xC);
    if ((temp_r3_5 != NULL) && (arg0 != NULL)) {
        temp_r29_2 = M2C_FIELD(arg0, void **, 8);
        if (temp_r3_5 != NULL) {
            var_r30 = M2C_FIELD(temp_r3_5, void **, 0x10);
            if (var_r30 == arg0) {
                M2C_FIELD(temp_r3_5, void **, 0x10) = temp_r29_2;
            } else {
                if ((arg0 == NULL) || (temp_r3_5 == NULL)) {
                    var_r30 = NULL;
                } else if (arg0 == var_r30) {
                    var_r30 = NULL;
                } else {
loop_67:
                    if (var_r30 == NULL) {
                        HSD_Panic(&lbl_80350180, 0x5EF, &lbl_802A97A8 + 0x2D4);
                        var_r30 = NULL;
                    } else {
                        temp_r0_2 = M2C_FIELD(var_r30, void **, 8);
                        if (temp_r0_2 == arg0) {

                        } else {
                            var_r30 = temp_r0_2;
                            goto loop_67;
                        }
                    }
                }
                if (var_r30 == NULL) {
                    __assert(&lbl_80350180, 0x572, &lbl_8035018C);
                }
                M2C_FIELD(var_r30, void **, 8) = temp_r29_2;
            }
            var_r6 = M2C_FIELD(arg0, void **, 0xC);
loop_78:
            if (var_r6 != NULL) {
                var_r3_2 = M2C_FIELD(var_r6, void **, 0x10);
                var_r5 = 0x8FFFFFFF;
loop_75:
                if (var_r3_2 != NULL) {
                    temp_r7 = M2C_FIELD(var_r3_2, s32 *, 0x14);
                    var_r3_2 = M2C_FIELD(var_r3_2, void **, 8);
                    var_r5 |= (temp_r7 | (temp_r7 << 0xA)) & 0x70000000;
                    goto loop_75;
                }
                temp_r3_6 = M2C_FIELD(var_r6, s32 *, 0x14);
                if (temp_r3_6 & ~var_r5) {
                    M2C_FIELD(var_r6, s32 *, 0x14) = (s32) (temp_r3_6 & var_r5);
                    var_r6 = M2C_FIELD(var_r6, void **, 8);
                    goto loop_78;
                }
            }
            M2C_FIELD(arg0, void **, 0xC) = NULL;
        }
        M2C_FIELD(arg0, void **, 8) = NULL;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x14) & 0x4020) && ((u32) M2C_FIELD(arg0, u32 *, 0x18) != 0U)) {
        HSD_DObjRemoveAll();
        M2C_FIELD(arg0, u32 *, 0x18) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        HSD_RObjRemoveAll();
        M2C_FIELD(arg0, u32 *, 0x80) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        HSD_AObjRemove();
        M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
    }
}

void JObjRelease(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r4, M2C_UNK (**)(void *), 0x4C)(temp_r4);
    if (0 /* draft: did not compile */) {
        HSD_IDRemoveByIDFromTable(0, M2C_FIELD(arg0, s32 *, 0x84));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
        HSD_VecFree();
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
        HSD_MtxFree();
    }
    M2C_FIELD(M2C_FIELD(&lbl_802A97A8, void **, 0x14), M2C_UNK (**)(void *, void *), 0x30)(arg0, M2C_FIELD(&lbl_802A97A8, void **, 0x14));
}

void fn_800FE0CC(u32 arg0) {
    if (arg0 == (u32) lbl_80350C70) {
        lbl_80350C70 = 0U;
    }
    if (0 /* draft: did not compile */) {
        lbl_80350C74 = 0;
        lbl_80350C84 = 0;
    }
    M2C_FIELD(M2C_FIELD(&lbl_802A97A8, void **, 0x14), M2C_UNK (**)(void *), 0x38)(M2C_FIELD(&lbl_802A97A8, void **, 0x14));
}

void fn_800FE130(void) {
    M2C_FIELD(&lbl_802A97A8, M2C_UNK **, 0x2C) = &JObjInit;
    hsdInitClassInfo(&lbl_802A97A8, &lbl_802AA3D0, &lbl_802A97A8 + 0x39C, &lbl_802A97A8 + 0x3B4, 0x54, 0x88);
    /* draft: did not compile: M2C_FIELD(&lbl_802A97A8, M2C_UNK (**)(), 0x30) = JObjRelease; */
    /* draft: did not compile: M2C_FIELD(&lbl_802A97A8, M2C_UNK (**)(), 0x38) = fn_800FE0CC; */
    M2C_FIELD(&lbl_802A97A8, M2C_UNK **, 0x40) = &HSD_JObjMakeMatrix;
    /* draft: did not compile: M2C_FIELD(&lbl_802A97A8, M2C_UNK (**)(), 0x44) = HSD_JObjMakePositionMtx; */
    /* draft: did not compile: M2C_FIELD(&lbl_802A97A8, M2C_UNK (**)(), 0x48) = HSD_JObjDispSub; */
    M2C_FIELD(&lbl_802A97A8, M2C_UNK **, 0x3C) = &fn_800FB4AC;
    /* draft: did not compile: M2C_FIELD(&lbl_802A97A8, M2C_UNK (**)(), 0x4C) = JObjReleaseChild; */
    M2C_FIELD(&lbl_802A97A8, M2C_UNK **, 0x50) = &fn_800F9F94;
}

void HSD_ZListInitAllocData(void) {
    HSD_ObjAllocInit(&lbl_8031D2D0, 0x48, 4);
}

void HSD_StateInitDirect(s32 arg0, s32 arg1) {
    HSD_ClearVtxDesc_800F673C();
    GXSetVtxAttrFmt(arg0, 9, 1, 4, 0);
    GXSetVtxAttrFmt(arg0, 0xB, 1, 5, 0);
    HSD_StateInitTev();
    HSD_SetupRenderMode(arg1 | 0x28000000);
    GXSetVtxDesc(9, 1);
    GXSetVtxDesc(0xB, 1);
    GXSetCurrentMtx(0);
}

void mkVBillBoardMtx(void *arg0, void *arg1, void *arg2) {
    s32 sp30;
    s32 sp2C;
    s32 sp48;
    s32 sp44;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp28;
    f32 sp1C;
    s32 sp18;
    s32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_10;
    f32 temp_f1_11;
    f32 temp_f1_5;
    f32 temp_f1_9;
    f32 temp_f31;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 var_f30;
    f32 var_f31;
    f64 temp_f1_2;
    f64 temp_f1_3;
    f64 temp_f1_4;
    f64 temp_f1_6;
    f64 temp_f1_7;
    f64 temp_f1_8;

    sp4C = M2C_FIELD(arg1, f32 *, 0xC);
    sp50 = M2C_FIELD(arg1, f32 *, 0x1C);
    sp54 = M2C_FIELD(arg1, f32 *, 0x2C);
    sp34 = M2C_FIELD(arg1, f32 *, 4);
    sp38 = M2C_FIELD(arg1, f32 *, 0x14);
    sp3C = M2C_FIELD(arg1, f32 *, 0x24);
    PSVECScale(&sp34, &sp1C, lbl_80351FA8 / (lbl_80351FAC + PSVECMag(&sp34)), (s32)lbl_80351FAC);
    temp_f1 = M2C_FIELD(arg1, f32 *, 0x10);
    temp_f0 = M2C_FIELD(arg1, f32 *, 0);
    temp_f3 = M2C_FIELD(arg1, f32 *, 0x20);
    var_f31 = (temp_f3 * temp_f3) + ((temp_f1 * temp_f1) + (temp_f0 * temp_f0));
    if (var_f31 > lbl_80351FB0) {
        temp_f1_2 = __frsqrte(var_f31);
        temp_f1_3 = lbl_80351FB8 * temp_f1_2 * -(((f64) var_f31 * (temp_f1_2 * temp_f1_2)) - lbl_80351FC0);
        temp_f1_4 = lbl_80351FB8 * temp_f1_3 * -(((f64) var_f31 * (temp_f1_3 * temp_f1_3)) - lbl_80351FC0);
        spC = (f32) ((f64) var_f31 * (lbl_80351FB8 * temp_f1_4 * -(((f64) var_f31 * (temp_f1_4 * temp_f1_4)) - lbl_80351FC0)));
        var_f31 = spC;
    }
    temp_f1_5 = M2C_FIELD(arg1, f32 *, 0x18);
    temp_f0_2 = M2C_FIELD(arg1, f32 *, 8);
    temp_f3_2 = M2C_FIELD(arg1, f32 *, 0x28);
    var_f30 = (temp_f3_2 * temp_f3_2) + ((temp_f1_5 * temp_f1_5) + (temp_f0_2 * temp_f0_2));
    if (var_f30 > lbl_80351FB0) {
        temp_f1_6 = __frsqrte(var_f30);
        temp_f1_7 = lbl_80351FB8 * temp_f1_6 * -(((f64) var_f30 * (temp_f1_6 * temp_f1_6)) - lbl_80351FC0);
        temp_f1_8 = lbl_80351FB8 * temp_f1_7 * -(((f64) var_f30 * (temp_f1_7 * temp_f1_7)) - lbl_80351FC0);
        sp8 = (f32) ((f64) var_f30 * (lbl_80351FB8 * temp_f1_8 * -(((f64) var_f30 * (temp_f1_8 * temp_f1_8)) - lbl_80351FC0)));
        var_f30 = sp8;
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) & 0x2000) {
        PSVECScale(&sp4C, &sp28, lbl_80351FC8 / (lbl_80351FAC + PSVECMag(&sp4C)), lbl_80351FAC);
        PSVECCrossProduct((float *)(&sp1C), (float *)(&sp28), (float *)(&sp40), (long)(0), (float)(0), (long *)(0));
    } else {
        sp10 = M2C_FIELD(&lbl_801DA8D8, f32 *, 0);
        sp14 = M2C_FIELD(&lbl_801DA8D8, s32 *, 4);
        sp18 = M2C_FIELD(&lbl_801DA8D8, s32 *, 8);
        PSVECCrossProduct(&sp1C, &sp10, &sp40, M2C_FIELD(&lbl_801DA8D8, s32 *, 4), M2C_FIELD(&lbl_801DA8D8, f32 *, 0), &lbl_801DA8D8);
    }
    temp_f1_9 = PSVECMag(&sp40);
    if (!(temp_f1_9 < lbl_80351FAC)) {
        temp_f31 = var_f31 / temp_f1_9;
        PSVECCrossProduct((float *)(&sp40), (float *)(&sp1C), (float *)(&sp28), (long)(0), (float)(0), (long *)(0));
        temp_f1_10 = lbl_80351FAC + PSVECMag(&sp28);
        M2C_FIELD(arg2, f32 *, 4) = sp34;
        M2C_FIELD(arg2, f32 *, 0) = (f32) (temp_f31 * sp40);
        temp_f1_11 = var_f30 / temp_f1_10;
        M2C_FIELD(arg2, f32 *, 0x10) = (f32) (temp_f31 * sp44);
        M2C_FIELD(arg2, f32 *, 0x20) = (f32) (temp_f31 * sp48);
        M2C_FIELD(arg2, f32 *, 0x14) = sp38;
        M2C_FIELD(arg2, f32 *, 0x24) = sp3C;
        M2C_FIELD(arg2, f32 *, 8) = (f32) (temp_f1_11 * sp28);
        M2C_FIELD(arg2, f32 *, 0x18) = (f32) (temp_f1_11 * sp2C);
        M2C_FIELD(arg2, f32 *, 0x28) = (f32) (temp_f1_11 * sp30);
        M2C_FIELD(arg2, f32 *, 0xC) = sp4C;
        M2C_FIELD(arg2, f32 *, 0x1C) = sp50;
        M2C_FIELD(arg2, f32 *, 0x2C) = sp54;
        return;
    }
    PSMTXCopy(arg1, arg2);
}

void mkHBillBoardMtx(void *arg0, void *arg1, void *arg2) {
    s32 sp28;
    s32 sp24;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp20;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f1_12;
    f32 temp_f1_13;
    f32 temp_f1_14;
    f32 temp_f1_15;
    f32 temp_f1_16;
    f32 temp_f1_5;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 var_f30;
    f32 var_f31;
    f32 var_f4;
    f64 temp_f1_10;
    f64 temp_f1_11;
    f64 temp_f1_2;
    f64 temp_f1_3;
    f64 temp_f1_4;
    f64 temp_f1_6;
    f64 temp_f1_7;
    f64 temp_f1_8;
    f64 temp_f1_9;

    temp_f29 = M2C_FIELD(arg1, f32 *, 0xC);
    temp_f28 = M2C_FIELD(arg1, f32 *, 0x1C);
    temp_f27 = M2C_FIELD(arg1, f32 *, 0x2C);
    sp38 = M2C_FIELD(arg1, f32 *, 0);
    sp3C = M2C_FIELD(arg1, f32 *, 0x10);
    sp40 = M2C_FIELD(arg1, f32 *, 0x20);
    PSVECScale(&sp38, &sp14, lbl_80351FA8 / (lbl_80351FAC + PSVECMag(&sp38)), lbl_80351FAC);
    temp_f1 = M2C_FIELD(arg1, f32 *, 0x14);
    temp_f0 = M2C_FIELD(arg1, f32 *, 4);
    temp_f3 = M2C_FIELD(arg1, f32 *, 0x24);
    var_f31 = (temp_f3 * temp_f3) + ((temp_f1 * temp_f1) + (temp_f0 * temp_f0));
    if (var_f31 > lbl_80351FB0) {
        temp_f1_2 = __frsqrte(var_f31);
        temp_f1_3 = lbl_80351FB8 * temp_f1_2 * -(((f64) var_f31 * (temp_f1_2 * temp_f1_2)) - lbl_80351FC0);
        temp_f1_4 = lbl_80351FB8 * temp_f1_3 * -(((f64) var_f31 * (temp_f1_3 * temp_f1_3)) - lbl_80351FC0);
        spC = (f32) ((f64) var_f31 * (lbl_80351FB8 * temp_f1_4 * -(((f64) var_f31 * (temp_f1_4 * temp_f1_4)) - lbl_80351FC0)));
        var_f31 = spC;
    }
    temp_f1_5 = M2C_FIELD(arg1, f32 *, 0x18);
    temp_f0_2 = M2C_FIELD(arg1, f32 *, 8);
    temp_f3_2 = M2C_FIELD(arg1, f32 *, 0x28);
    var_f30 = (temp_f3_2 * temp_f3_2) + ((temp_f1_5 * temp_f1_5) + (temp_f0_2 * temp_f0_2));
    if (var_f30 > lbl_80351FB0) {
        temp_f1_6 = __frsqrte(var_f30);
        temp_f1_7 = lbl_80351FB8 * temp_f1_6 * -(((f64) var_f30 * (temp_f1_6 * temp_f1_6)) - lbl_80351FC0);
        temp_f1_8 = lbl_80351FB8 * temp_f1_7 * -(((f64) var_f30 * (temp_f1_7 * temp_f1_7)) - lbl_80351FC0);
        sp8 = (f32) ((f64) var_f30 * (lbl_80351FB8 * temp_f1_8 * -(((f64) var_f30 * (temp_f1_8 * temp_f1_8)) - lbl_80351FC0)));
        var_f30 = sp8;
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) & 0x2000) {
        var_f4 = (temp_f29 * temp_f29) + (temp_f27 * temp_f27);
        if (var_f4 > lbl_80351FB0) {
            temp_f1_9 = __frsqrte(var_f4);
            temp_f1_10 = lbl_80351FB8 * temp_f1_9 * -(((f64) var_f4 * (temp_f1_9 * temp_f1_9)) - lbl_80351FC0);
            temp_f1_11 = lbl_80351FB8 * temp_f1_10 * -(((f64) var_f4 * (temp_f1_10 * temp_f1_10)) - lbl_80351FC0);
            sp10 = (f32) ((f64) var_f4 * (lbl_80351FB8 * temp_f1_11 * -(((f64) var_f4 * (temp_f1_11 * temp_f1_11)) - lbl_80351FC0)));
            var_f4 = sp10;
        }
        temp_f2 = -temp_f28;
        temp_f1_12 = lbl_80351FAC + var_f4;
        temp_f0_3 = temp_f2 / temp_f1_12;
        sp30 = temp_f1_12;
        temp_f1_13 = temp_f29 * temp_f0_3;
        sp2C = temp_f1_13;
        sp34 = temp_f27 * temp_f0_3;
        PSVECNormalize(&sp2C, &sp2C, temp_f1_13, temp_f2);
    } else {
        sp2C = lbl_80351FB0;
        sp30 = lbl_80351FA8;
        sp34 = lbl_80351FB0;
    }
    PSVECCrossProduct((float *)(&sp14), (float *)(&sp2C), (float *)(&sp20), (long)(0), (float)(0), (long *)(0));
    temp_f1_14 = PSVECMag(&sp20);
    if (!(temp_f1_14 < lbl_80351FAC)) {
        temp_f30 = var_f30 / temp_f1_14;
        PSVECCrossProduct((float *)(&sp20), (float *)(&sp14), (float *)(&sp2C), (long)(0), (float)(0), (long *)(0));
        temp_f1_15 = lbl_80351FAC + PSVECMag(&sp2C);
        M2C_FIELD(arg2, f32 *, 0) = sp38;
        temp_f1_16 = var_f31 / temp_f1_15;
        M2C_FIELD(arg2, f32 *, 0x10) = sp3C;
        M2C_FIELD(arg2, f32 *, 4) = (f32) (temp_f1_16 * sp2C);
        M2C_FIELD(arg2, f32 *, 0x14) = (f32) (temp_f1_16 * sp30);
        M2C_FIELD(arg2, f32 *, 0x20) = sp40;
        M2C_FIELD(arg2, f32 *, 0x24) = (f32) (temp_f1_16 * sp34);
        M2C_FIELD(arg2, f32 *, 8) = (f32) (temp_f30 * sp20);
        M2C_FIELD(arg2, f32 *, 0x18) = (f32) (temp_f30 * sp24);
        M2C_FIELD(arg2, f32 *, 0x28) = (f32) (temp_f30 * sp28);
        M2C_FIELD(arg2, f32 *, 0xC) = temp_f29;
        M2C_FIELD(arg2, f32 *, 0x1C) = temp_f28;
        M2C_FIELD(arg2, f32 *, 0x2C) = temp_f27;
        return;
    }
    PSMTXCopy(arg1, arg2);
}

void mkBillBoardMtx(void *arg0, void *arg1, void *arg2) {
    s32 sp40;
    s32 sp3C;
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
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_13;
    f32 temp_f1_5;
    f32 temp_f1_9;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 var_f29;
    f32 var_f30;
    f32 var_f31;
    f32 var_f31_2;
    f32 var_f4;
    f64 temp_f1_10;
    f64 temp_f1_11;
    f64 temp_f1_12;
    f64 temp_f1_2;
    f64 temp_f1_3;
    f64 temp_f1_4;
    f64 temp_f1_6;
    f64 temp_f1_7;
    f64 temp_f1_8;

    temp_f2 = M2C_FIELD(arg1, f32 *, 0x10);
    temp_f1 = M2C_FIELD(arg1, f32 *, 0);
    temp_f3 = M2C_FIELD(arg1, f32 *, 0x20);
    var_f31 = (temp_f3 * temp_f3) + ((temp_f2 * temp_f2) + (temp_f1 * temp_f1));
    if (var_f31 > lbl_80351FB0) {
        temp_f1_2 = __frsqrte(var_f31);
        temp_f1_3 = lbl_80351FB8 * temp_f1_2 * -(((f64) var_f31 * (temp_f1_2 * temp_f1_2)) - lbl_80351FC0);
        temp_f1_4 = lbl_80351FB8 * temp_f1_3 * -(((f64) var_f31 * (temp_f1_3 * temp_f1_3)) - lbl_80351FC0);
        spC = (f32) ((f64) var_f31 * (lbl_80351FB8 * temp_f1_4 * -(((f64) var_f31 * (temp_f1_4 * temp_f1_4)) - lbl_80351FC0)));
        var_f31 = spC;
    }
    temp_f1_5 = M2C_FIELD(arg1, f32 *, 0x18);
    temp_f0 = M2C_FIELD(arg1, f32 *, 8);
    temp_f3_2 = M2C_FIELD(arg1, f32 *, 0x28);
    var_f30 = (temp_f3_2 * temp_f3_2) + ((temp_f1_5 * temp_f1_5) + (temp_f0 * temp_f0));
    if (var_f30 > lbl_80351FB0) {
        temp_f1_6 = __frsqrte(var_f30);
        temp_f1_7 = lbl_80351FB8 * temp_f1_6 * -(((f64) var_f30 * (temp_f1_6 * temp_f1_6)) - lbl_80351FC0);
        temp_f1_8 = lbl_80351FB8 * temp_f1_7 * -(((f64) var_f30 * (temp_f1_7 * temp_f1_7)) - lbl_80351FC0);
        sp8 = (f32) ((f64) var_f30 * (lbl_80351FB8 * temp_f1_8 * -(((f64) var_f30 * (temp_f1_8 * temp_f1_8)) - lbl_80351FC0)));
        var_f30 = sp8;
    }
    sp2C = M2C_FIELD(arg1, f32 *, 4);
    sp30 = M2C_FIELD(arg1, f32 *, 0x14);
    sp34 = M2C_FIELD(arg1, f32 *, 0x24);
    var_f29 = PSVECMag(&sp2C);
    sp18 = M2C_FIELD(arg1, f32 *, 0x1C);
    sp1C = M2C_FIELD(arg1, f32 *, 0x2C);
    sp14 = M2C_FIELD(arg1, f32 *, 0xC);
    if (M2C_FIELD(arg0, s32 *, 0x14) & 0x2000) {
        PSVECScale(&sp14, &sp20, lbl_80351FC8 / (lbl_80351FAC + PSVECMag(&sp14)), lbl_80351FAC);
    } else {
        sp20 = lbl_80351FB0;
        sp24 = lbl_80351FB0;
        sp28 = lbl_80351FA8;
    }
    PSVECScale((float *)(&sp2C), (float *)(&sp2C), (float)(lbl_80351FA8 / (lbl_80351FAC + var_f29)), (float)(0));
    PSVECCrossProduct((float *)(&sp2C), (float *)(&sp20), (float *)(&sp38), (long)(0), (float)(0), (long *)(0));
    temp_f1_9 = PSVECMag(&sp38);
    M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
    if (temp_f1_9 == lbl_80351FAC) {
        var_f31_2 = var_f31 / temp_f1_9;
        PSVECCrossProduct((float *)(&sp20), (float *)(&sp38), (float *)(&sp2C), (long)(0), (float)(0), (long *)(0));
        var_f29 /= lbl_80351FAC + PSVECMag(&sp2C);
    } else {
        var_f4 = (sp20 * sp20) + (sp28 * sp28);
        if (var_f4 > lbl_80351FB0) {
            temp_f1_10 = __frsqrte(var_f4);
            temp_f1_11 = lbl_80351FB8 * temp_f1_10 * -(((f64) var_f4 * (temp_f1_10 * temp_f1_10)) - lbl_80351FC0);
            temp_f1_12 = lbl_80351FB8 * temp_f1_11 * -(((f64) var_f4 * (temp_f1_11 * temp_f1_11)) - lbl_80351FC0);
            sp10 = (f32) ((f64) var_f4 * (lbl_80351FB8 * temp_f1_12 * -(((f64) var_f4 * (temp_f1_12 * temp_f1_12)) - lbl_80351FC0)));
            var_f4 = sp10;
        }
        temp_f2_2 = lbl_80351FAC + var_f4;
        temp_f3_3 = -sp24;
        temp_f2_3 = temp_f3_3 / temp_f2_2;
        temp_f1_13 = sp20 * temp_f2_3;
        sp2C = temp_f1_13;
        sp34 = sp28 * temp_f2_3;
        PSVECCrossProduct(&sp2C, &sp20, &sp38, temp_f1_13, temp_f2_3, temp_f3_3);
        sp30 = temp_f2_2;
        var_f31_2 = var_f31 / (lbl_80351FAC + PSVECMag(&sp38));
    }
    M2C_FIELD(arg2, f32 *, 0) = (f32) (var_f31_2 * sp38);
    M2C_FIELD(arg2, f32 *, 0x10) = (f32) (var_f31_2 * sp3C);
    M2C_FIELD(arg2, f32 *, 0x20) = (f32) (var_f31_2 * sp40);
    M2C_FIELD(arg2, f32 *, 4) = (f32) (var_f29 * sp2C);
    M2C_FIELD(arg2, f32 *, 0x14) = (f32) (var_f29 * sp30);
    M2C_FIELD(arg2, f32 *, 0x24) = (f32) (var_f29 * sp34);
    M2C_FIELD(arg2, f32 *, 8) = (f32) (var_f30 * sp20);
    M2C_FIELD(arg2, f32 *, 0x18) = (f32) (var_f30 * sp24);
    M2C_FIELD(arg2, f32 *, 0x28) = (f32) (var_f30 * sp28);
    M2C_FIELD(arg2, f32 *, 0xC) = sp14;
    M2C_FIELD(arg2, f32 *, 0x1C) = sp18;
    M2C_FIELD(arg2, f32 *, 0x2C) = sp1C;
}

void mkRBillBoardMtx(void *arg0, void *arg1, s32 arg2) {
    f32 sp70;
    f32 sp60;
    f32 sp50;
    M2C_UNK sp44;
    M2C_UNK sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_5;
    f32 temp_f3;
    f32 temp_f3_5;
    f32 temp_f4;
    f32 temp_f5;
    f32 var_f1;
    f32 var_f2;
    f32 var_f3;
    f64 temp_f2_2;
    f64 temp_f2_3;
    f64 temp_f2_4;
    f64 temp_f3_2;
    f64 temp_f3_3;
    f64 temp_f3_4;
    f64 temp_f4_2;
    f64 temp_f4_3;
    f64 temp_f4_4;

    temp_f2 = M2C_FIELD(arg1, f32 *, 0x10);
    temp_f1 = M2C_FIELD(arg1, f32 *, 0);
    temp_f3 = M2C_FIELD(arg1, f32 *, 0x20);
    var_f1 = (temp_f3 * temp_f3) + ((temp_f2 * temp_f2) + (temp_f1 * temp_f1));
    if (var_f1 > lbl_80351FB0) {
        temp_f2_2 = __frsqrte(var_f1);
        temp_f2_3 = lbl_80351FB8 * temp_f2_2 * -(((f64) var_f1 * (temp_f2_2 * temp_f2_2)) - lbl_80351FC0);
        temp_f2_4 = lbl_80351FB8 * temp_f2_3 * -(((f64) var_f1 * (temp_f2_3 * temp_f2_3)) - lbl_80351FC0);
        sp10 = (f32) ((f64) var_f1 * (lbl_80351FB8 * temp_f2_4 * -(((f64) var_f1 * (temp_f2_4 * temp_f2_4)) - lbl_80351FC0)));
        var_f1 = sp10;
    }
    temp_f2_5 = M2C_FIELD(arg1, f32 *, 0x14);
    temp_f0 = M2C_FIELD(arg1, f32 *, 4);
    temp_f4 = M2C_FIELD(arg1, f32 *, 0x24);
    var_f2 = (temp_f4 * temp_f4);
    var_f2 += ((temp_f2_5 * temp_f2_5) + (temp_f0 * temp_f0));
    if (var_f2 > lbl_80351FB0) {
        temp_f3_2 = __frsqrte(var_f2);
        temp_f3_3 = lbl_80351FB8 * temp_f3_2 * -(((f64) var_f2 * (temp_f3_2 * temp_f3_2)) - lbl_80351FC0);
        temp_f3_4 = lbl_80351FB8 * temp_f3_3 * -(((f64) var_f2 * (temp_f3_3 * temp_f3_3)) - lbl_80351FC0);
        spC = (f32) ((f64) var_f2 * (lbl_80351FB8 * temp_f3_4 * -(((f64) var_f2 * (temp_f3_4 * temp_f3_4)) - lbl_80351FC0)));
        var_f2 = spC;
    }
    temp_f3_5 = M2C_FIELD(arg1, f32 *, 0x18);
    temp_f0_2 = M2C_FIELD(arg1, f32 *, 8);
    temp_f5 = M2C_FIELD(arg1, f32 *, 0x28);
    var_f3 = (temp_f5 * temp_f5);
    var_f3 += ((temp_f3_5 * temp_f3_5) + (temp_f0_2 * temp_f0_2));
    if (var_f3 > lbl_80351FB0) {
        temp_f4_2 = __frsqrte(var_f3);
        temp_f4_3 = lbl_80351FB8 * temp_f4_2 * -(((f64) var_f3 * (temp_f4_2 * temp_f4_2)) - lbl_80351FC0);
        temp_f4_4 = lbl_80351FB8 * temp_f4_3 * -(((f64) var_f3 * (temp_f4_3 * temp_f4_3)) - lbl_80351FC0);
        sp8 = (f32) ((f64) var_f3 * (lbl_80351FB8 * temp_f4_4 * -(((f64) var_f3 * (temp_f4_4 * temp_f4_4)) - lbl_80351FC0)));
        var_f3 = sp8;
    }
    PSMTXScale(&sp14, var_f1, var_f2, var_f3);
    MTXRotRad(&sp44, 0x7A, M2C_FIELD(arg0, f32 *, 0x24));
    sp50 = M2C_FIELD(arg1, f32 *, 0xC);
    sp60 = M2C_FIELD(arg1, f32 *, 0x1C);
    sp70 = M2C_FIELD(arg1, f32 *, 0x2C);
    PSMTXConcat(&sp44, &sp14, arg2);
}

void HSD_JObjMakePositionMtx(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK sp8;
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x14) & 0xE00) {
        /* draft: did not compile: PSMTXConcat(arg1, arg0 + 0x44, &sp8); */
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x14) & 0xE00;
        switch (temp_r0) {                          /* irregular */
        case 0x200:
            /* draft: did not compile: mkBillBoardMtx(arg0, &sp8, arg2); */
            return;
        case 0x400:
            /* draft: did not compile: mkVBillBoardMtx(arg0, &sp8, arg2); */
            return;
        case 0x600:
            /* draft: did not compile: mkHBillBoardMtx(arg0, &sp8, arg2); */
            return;
        case 0x800:
            mkRBillBoardMtx(arg0, &sp8, arg2);
            return;
        default:
            HSD_Panic(&lbl_802A9B80, 0x170, &lbl_802A9B90);
            return;
        }
    } else {
        /* draft: did not compile: PSMTXConcat(arg1, arg0 + 0x44); */
    }
}

s32 _HSD_mkEnvelopeModelNodeMtx(void *arg0, s32 arg1) {
    M2C_UNK sp8;
    void *var_r31;

    if (M2C_FIELD(arg0, s32 *, 0x14) & 2) {
        return 0;
    }
    var_r31 = arg0;
    if (arg0 == NULL) {
        __assert(&lbl_802A9B80, 0x184, &lbl_803501B0);
    }
loop_7:
    if (var_r31 == NULL) {
        var_r31 = NULL;
    } else if (M2C_FIELD(var_r31, s32 *, 0x14) & 3) {

    } else {
        var_r31 = M2C_FIELD(var_r31, void **, 0xC);
        goto loop_7;
    }
    if (var_r31 == NULL) {
        __assert(&lbl_802A9B80, 0x1D4, &lbl_803501B8);
    }
    if (var_r31 == arg0) {
        PSMTXInverse(M2C_FIELD(var_r31, s32 *, 0x78), arg1);
    } else if (M2C_FIELD(var_r31, s32 *, 0x14) & 2) {
        /* draft: did not compile: HSD_MtxInverseConcat(var_r31 + 0x44, arg0 + 0x44, arg1); */
    } else {
        /* draft: did not compile: PSMTXConcat(var_r31 + 0x44, M2C_FIELD(var_r31, s32 *, 0x78), &sp8); */
        /* draft: did not compile: HSD_MtxInverseConcat(&sp8, arg0 + 0x44, arg1); */
    }
    return arg1;
}

void HSD_JObjDispSub(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) {
    s32 temp_r3;
    void *var_r31;

    HSD_JObjSetCurrent((long)(0));
    if (!(arg4 & 0x04000000) && (M2C_FIELD(arg0, s32 *, 0x14) & 0x10000)) {
        HSD_LObjSetupSpecularInit(arg2);
    }
    HSD_PObjClearMtxMark(0, 0);
    var_r31 = M2C_FIELD(arg0, void **, 0x18);
loop_8:
    if (var_r31 != NULL) {
        temp_r3 = M2C_FIELD(var_r31, s32 *, 0x14);
        if (!(temp_r3 & 1) && (temp_r3 & (arg3 * 2))) {
            HSD_DObjSetCurrent(var_r31);
            M2C_FIELD(M2C_FIELD(var_r31, void **, 0), M2C_UNK (**)(void *, s32, s32, s32), 0x3C)(var_r31, arg1, arg2, arg4);
        }
        var_r31 = M2C_FIELD(var_r31, void **, 4);
        goto loop_8;
    }
    HSD_DObjSetCurrent(NULL);
    HSD_JObjSetCurrent(0);
}

void HSD_JObjDispDObj(void *arg0, M2C_UNK *arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) {
    s32 var_r3;
    M2C_UNK *var_r29;
    s32 temp_cr0_eq;
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r4;
    M2C_UNK sp8;
    void *temp_r3_2;
    void *temp_r6;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x14);
    var_r29 = arg1;
    if (!(temp_r3 & 0x10) && (temp_r31 = temp_r3 & (arg2 << 0x12), ((temp_r31 == 0) == 0))) {
        temp_cr0_eq = arg0 == NULL;
        if (temp_cr0_eq == 0) {
            if (temp_cr0_eq != 0) {
                __assert(&lbl_803501BC, 0x25D, &lbl_803501B0);
            }
            temp_r4 = M2C_FIELD(arg0, s32 *, 0x14);
            var_r3 = 0;
            if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                var_r3 = 1;
            }
            if (var_r3 != 0) {
                HSD_JObjSetupMatrixSub(arg0);
            }
        }
        if (var_r29 == NULL) {
            /* draft: did not compile: var_r29 = HSD_CObjGetCurrent() + 0x54; */
        }
        temp_r6 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_r6, M2C_UNK (**)(void *, M2C_UNK *, M2C_UNK *, void *), 0x44)(arg0, var_r29, &sp8, temp_r6);
        if (temp_r31 & 0x40000) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, M2C_UNK *, M2C_UNK *, M2C_UNK, s32), 0x48)(arg0, var_r29, &sp8, 1, arg3);
        }
        if ((s32) lbl_80350C8C == 0) {
            if (temp_r31 & 0x100000) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, M2C_UNK *, M2C_UNK *, M2C_UNK, s32), 0x48)(arg0, var_r29, &sp8, 4, arg3);
            }
            if (temp_r31 & 0x80000) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, M2C_UNK *, M2C_UNK *, M2C_UNK, s32), 0x48)(arg0, var_r29, &sp8, 2, arg3);
            }
        } else if (temp_r31 & 0x180000) {
            temp_r3_2 = fn_80105930(&lbl_8031D2D0);
            /* draft: did not compile: memset(temp_r3_2 + 0x30, 0, 0x18); */
            PSMTXCopy(&sp8, temp_r3_2);
            if (var_r29 != NULL) {
                M2C_FIELD(temp_r3_2, void **, 0x30) = HSD_MtxAlloc();
                PSMTXCopy(var_r29, M2C_FIELD(temp_r3_2, void **, 0x30));
            }
            M2C_FIELD(temp_r3_2, void **, 0x34) = arg0;
            M2C_FIELD(temp_r3_2, s32 *, 0x38) = arg3;
            *lbl_803501A4 = temp_r3_2;
            /* draft: did not compile: lbl_803501A4 = temp_r3_2 + 0x44; */
            if (temp_r31 & 0x100000) {
                *lbl_803501A8 = temp_r3_2;
                /* draft: did not compile: lbl_803501A8 = temp_r3_2 + 0x3C; */
                lbl_80350C9C += 1;
            }
            if (temp_r31 & 0x80000) {
                *lbl_803501AC = temp_r3_2;
                /* draft: did not compile: lbl_803501AC = temp_r3_2 + 0x40; */
                lbl_80350CA4 += 1;
            }
        }
    }
}

void *fn_800FF334(void *arg0, s32 arg1, s32 arg2) {
    void *sp8;
    s32 temp_r4;
    s32 temp_r5;
    s32 var_ctr_2;
    s32 var_r6;
    u32 var_ctr;
    void **var_r4;
    void *var_r30;
    void *var_r30_2;
    void *var_r3;

    sp8 = arg0;
    if (arg1 <= 1) {
        if (arg0 != NULL) {
            /* draft: did not compile: *(arg0 + arg2) = 0; */
        }
        return sp8;
    }
    var_r6 = 0;
    var_r30 = arg0;
    temp_r5 = (s32) (((u32) arg1 >> 0x1FU) + arg1) >> 1;
    if (temp_r5 > 0) {
        temp_r4 = temp_r5 - 8;
        if (temp_r5 > 8) {
            var_ctr = (u32) (temp_r4 + 7) >> 3U;
            if (temp_r4 > 0) {
                do {
                    var_r6 += 8;
                    /* draft: did not compile: var_r30 = *(*(*(*(*(*(*(*(var_r30 + arg2) + arg2) + arg2) + arg2) + arg2) + arg2) + arg2) + arg2); */
                    var_ctr -= 1;
                } while (var_ctr != 0);
            }
        }
        var_ctr_2 = temp_r5 - var_r6;
        if (var_r6 < temp_r5) {
            do {
                /* draft: did not compile: var_r30 = *(var_r30 + arg2); */
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
    /* draft: did not compile: var_r30_2 = fn_800FF334(temp_r5, arg2); */
    /* draft: did not compile: var_r3 = fn_800FF334((s32) var_r30, arg1 - temp_r5, arg2); */
    var_r4 = &sp8;
    sp8 = NULL;
loop_15:
    if ((var_r30_2 != NULL) && (var_r3 != NULL)) {
        M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
        if (M2C_FIELD(var_r30_2, f32 *, 0x2C) == M2C_FIELD(var_r3, f32 *, 0x2C)) {
            *var_r4 = var_r30_2;
            /* draft: did not compile: var_r30_2 = *(var_r30_2 + arg2); */
        } else {
            *var_r4 = var_r3;
            /* draft: did not compile: var_r3 = *(var_r3 + arg2); */
        }
        /* draft: did not compile: var_r4 = *var_r4 + arg2; */
        goto loop_15;
    }
    if (var_r30_2 != NULL) {
        *var_r4 = var_r30_2;
    } else if (var_r3 != NULL) {
        *var_r4 = var_r3;
    }
    return sp8;
}

void fn_800FF4A0(void) {
    if ((s32) lbl_80350C90 != 0) {
        /* draft: did not compile: lbl_80350C98 = fn_800FF334(lbl_80350C98, lbl_80350C9C, 0x3C); */
        /* draft: did not compile: lbl_80350CA0 = fn_800FF334(lbl_80350CA0, lbl_80350CA4, 0x40); */
    }
}

void _HSD_ZListDisp(void) {
    u32 temp_r31;
    u32 var_r4;
    u32 var_r4_2;
    void **temp_r3;
    void **temp_r3_2;
    void *temp_r8;
    void *temp_r8_2;
    void *var_r30;
    void *var_r30_2;

    /* draft: did not compile: var_r30 = lbl_80350C98; */
    temp_r31 = HSD_CObjGetCurrent() + 0x54;
loop_5:
    if (var_r30 != NULL) {
        var_r4 = M2C_FIELD(var_r30, u32 *, 0x30);
        if (var_r4 != 0U) {

        } else {
            var_r4 = temp_r31;
        }
        temp_r3 = M2C_FIELD(var_r30, void ***, 0x34);
        temp_r8 = *temp_r3;
        M2C_FIELD(temp_r8, M2C_UNK (**)(void **, u32, void *, M2C_UNK, s32, void *), 0x48)(temp_r3, var_r4, var_r30, 4, M2C_FIELD(var_r30, s32 *, 0x38), temp_r8);
        var_r30 = M2C_FIELD(var_r30, void **, 0x3C);
        goto loop_5;
    }
    /* draft: did not compile: var_r30_2 = lbl_80350CA0; */
loop_11:
    if (var_r30_2 != NULL) {
        var_r4_2 = M2C_FIELD(var_r30_2, u32 *, 0x30);
        if (var_r4_2 != 0U) {

        } else {
            var_r4_2 = temp_r31;
        }
        temp_r3_2 = M2C_FIELD(var_r30_2, void ***, 0x34);
        temp_r8_2 = *temp_r3_2;
        M2C_FIELD(temp_r8_2, M2C_UNK (**)(void **, u32, void *, M2C_UNK, s32, void *), 0x48)(temp_r3_2, var_r4_2, var_r30_2, 2, M2C_FIELD(var_r30_2, s32 *, 0x38), temp_r8_2);
        var_r30_2 = M2C_FIELD(var_r30_2, void **, 0x40);
        goto loop_11;
    }
    _HSD_ZListClear();
}

void _HSD_ZListClear(void) {
    void *temp_r29;
    void *var_r30;

    var_r30 = lbl_80350C94;
loop_4:
    if (var_r30 != NULL) {
        temp_r29 = M2C_FIELD(var_r30, void **, 0x44);
        if ((u32) M2C_FIELD(var_r30, u32 *, 0x30) != 0U) {
            HSD_MtxFree();
        }
        HSD_ObjFree(&lbl_8031D2D0, var_r30);
        var_r30 = temp_r29;
        goto loop_4;
    }
    lbl_80350C94 = NULL;
    lbl_803501A4 = &lbl_80350C94;
    lbl_80350C98 = 0;
    /* draft: did not compile: lbl_803501A8 = &lbl_80350C98; */
    lbl_80350C9C = 0;
    lbl_80350CA0 = 0;
    /* draft: did not compile: lbl_803501AC = &lbl_80350CA0; */
    lbl_80350CA4 = 0;
}

void fn_800FF658(s32 arg0, s32 arg1) {
    lbl_80350C8C = arg0;
    lbl_80350C90 = arg1;
}

void fn_800FF664(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = lbl_80350C8C;
    }
    if (arg1 != NULL) {
        *arg1 = lbl_80350C90;
    }
}

void HSD_JObjDisp(void *arg0) {
    s32 temp_r7;
    u32 temp_r3;
    void *var_r31;

    if (arg0 != NULL) {
        temp_r7 = M2C_FIELD(arg0, s32 *, 0x14);
        if (!(temp_r7 & 0x4020)) {
            HSD_JObjDispDObj((void *)(0), (long *)(0), (long)(0), (long)(0), (long)(0));
            return;
        }
        if ((temp_r7 & 0x20) && (((M2C_UNK (*)(M2C_UNK, s32, s32, void *)) lbl_80350C88) != NULL)) {
            var_r31 = M2C_FIELD(arg0, void **, 0x18);
loop_9:
            if (var_r31 != NULL) {
                temp_r3 = M2C_FIELD(var_r31, u32 *, 4);
                if (temp_r3 & 0x80000000) {
                    /* draft: did not compile: lbl_80350C88(0, temp_r3 & 0x3F, (temp_r3 >> 6U) & 0xFFFFFF, arg0); */
                }
                M2C_FIELD(var_r31, u32 *, 4) = (u32) (M2C_FIELD(var_r31, u32 *, 4) & 0x7FFFFFFF);
                var_r31 = M2C_FIELD(var_r31, void **, 0);
                goto loop_9;
            }
        }
    }
}

void fn_800FF734(s8 arg0, s8 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(&lbl_803501A0, s8 *, 1) = arg1;
    M2C_FIELD(&lbl_803501A0, s8 *, 0) = arg0;
    M2C_FIELD(&lbl_803501A0, s8 *, 2) = arg2;
    M2C_FIELD(&lbl_803501A0, s8 *, 3) = arg3;
}

void fn_800FF74C(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, M2C_UNK arg_sp0) {
    s32 unkspB;
    s32 unkspA;
    s32 unksp9;
    M2C_UNK spC;
    s32 sp8;

    if ((arg0 != 0) || (arg1 != 0) || (arg2 != 0)) {
        if (arg2 != 0) {
            GXInitTexObj(&spC, &lbl_802A9BC0, 4, 4, 0x11, 1, 1, 0);
            GXLoadTexObj(&spC, 0);
            fn_800E1314(1);
            GXSetTexCoordGen2(0, 1, 4, 0x3C, 0, 0x7D);
            fn_800E4B50(1);
            GXSetTevOrder(0, 0, 0, 4);
            GXSetTevOp(0, 4);
            fn_800E48F4((long)(2), (long)(0x11), (long)(0), (long)(0), (unsigned char)(0), (unsigned char)(0), (unsigned char)(0), (unsigned char)(0));
        } else {
            fn_800E1314(0);
            fn_800E4B50(1);
            GXSetTevOrder(0, 0xFF, 0xFF, 4);
            GXSetTevOp(0, 4);
        }
        fn_800E1D1C(0);
        fn_800E48A0(7, 0, 1, 7, 0);
        fn_800E5144(1);
        GXSetZMode(1, 7, arg2 != 0);
        GXSetBlendMode(2, 1, 0, 3);
        GXSetColorUpdate(arg0 != 0);
        GXSetAlphaUpdate(arg1 != 0);
        fn_800E2CA4(1);
        GXSetChanCtrl(4, 0, 0, 1, 0, 0, 2);
        fn_800E0804();
        GXSetVtxAttrFmt(0, 9, 1, 4, 0);
        GXSetVtxAttrFmt(0, 0xB, 1, 5, 0);
        GXSetVtxAttrFmt(0, 0xD, 1, 0, 0);
        GXLoadPosMtxImm(&lbl_802A9F68, 0);
        GXSetCurrentMtx(0);
        GXSetVtxDesc(9, 1);
        GXSetVtxDesc(0xB, 1);
        GXSetVtxDesc(0xD, 1);
        sp8 = lbl_803501A0;
        GXBegin(0x80, 0, 4);
        *(f32 *)0xCC008000 = farg2;
        *(f32 *)0xCC008000 = farg0;
        *(f32 *)0xCC008000 = farg4;
        *(f32 *)0xCC008000 = (u8) sp8;
        *(f32 *)0xCC008000 = unksp9;
        *(f32 *)0xCC008000 = unkspA;
        *(f32 *)0xCC008000 = unkspB;
        *(f32 *)0xCC008000 = 0;
        *(f32 *)0xCC008000 = 0;
        *(f32 *)0xCC008000 = farg3;
        *(f32 *)0xCC008000 = farg0;
        *(f32 *)0xCC008000 = farg4;
        *(f32 *)0xCC008000 = (u8) sp8;
        *(f32 *)0xCC008000 = unksp9;
        *(f32 *)0xCC008000 = unkspA;
        *(f32 *)0xCC008000 = unkspB;
        *(f32 *)0xCC008000 = 1;
        *(f32 *)0xCC008000 = 0;
        *(f32 *)0xCC008000 = farg3;
        *(f32 *)0xCC008000 = farg1;
        *(f32 *)0xCC008000 = farg4;
        *(f32 *)0xCC008000 = (u8) sp8;
        *(f32 *)0xCC008000 = unksp9;
        *(f32 *)0xCC008000 = unkspA;
        *(f32 *)0xCC008000 = unkspB;
        *(f32 *)0xCC008000 = 1;
        *(f32 *)0xCC008000 = 1;
        *(f32 *)0xCC008000 = farg2;
        *(f32 *)0xCC008000 = farg1;
        *(f32 *)0xCC008000 = farg4;
        *(f32 *)0xCC008000 = (u8) sp8;
        *(f32 *)0xCC008000 = unksp9;
        *(f32 *)0xCC008000 = unkspA;
        *(f32 *)0xCC008000 = unkspB;
        *(f32 *)0xCC008000 = 0;
        *(f32 *)0xCC008000 = 1;
        fn_800E48F4(0, 0x11, 0, 0, unkspB, unkspA, unksp9, (u8) sp8);
        HSD_StateInvalidate(-1);
    }
}
