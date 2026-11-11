/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

void **hsdNew();
u32 hsdSearchClassInfo();
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_80350148;
extern M2C_UNK lbl_80350150;
extern M2C_UNK lbl_802A9468;
extern M2C_UNK *lbl_80350C50;
M2C_UNK HSD_JObjUnrefThis(void *);
void *HSD_IDGetDataFromTable(M2C_UNK, u32, M2C_UNK);
M2C_UNK fn_800E0804();
extern s32 lbl_80350C64;
extern s32 lbl_80350C68;
M2C_UNK HSD_Panic(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_802A9558;
extern M2C_UNK lbl_802A9588;
extern M2C_UNK lbl_802A95A4;
extern M2C_UNK lbl_802A95D4;
s32 HSD_Alloc(M2C_UNK);
extern s32 lbl_80350C54;
extern s32 lbl_80350C58;
extern u32 lbl_80350C5C;
extern u32 lbl_80350C60;
extern f64 lbl_80351F40;
extern f64 lbl_80351F48;
extern M2C_UNK lbl_8031D2C0;
M2C_UNK PSMTXCopy();
M2C_UNK PSMTXConcat();
u32 PSMTXInvXpose();
M2C_UNK GXLoadPosMtxImm();
M2C_UNK GXLoadNrmMtxImm();
M2C_UNK GXSetCurrentMtx(M2C_UNK);
M2C_UNK GXLoadTexMtxImm();
u32 _HSD_TObjGetCurrentByType(M2C_UNK, M2C_UNK);
void *fn_800FC7FC();
M2C_UNK HSD_JObjSetupMatrixSub(void *);
extern M2C_UNK lbl_802AA340;
extern M2C_UNK lbl_80350158;
extern M2C_UNK lbl_80350160;
s32 HSD_Index2TexMtx(s32);
f32 *_HSD_mkEnvelopeModelNodeMtx(void *, M2C_UNK *);
M2C_UNK HSD_MtxScaledAdd(f32 *, f32 *, f32 *, f32);
s32 HSD_Index2PosNrmMtx(s32);
M2C_UNK HSD_PerfCountEnvelopeBlending(s32);
extern M2C_UNK lbl_80350168;
extern f32 lbl_80351F28;
extern f32 lbl_80351F50;

void **HSD_PObjLoadDesc(u32 *arg0);
void HSD_PObjRemoveAll(void *arg0);
s32 HSD_PObjAlloc(void);
void HSD_PObjResolveRefsAll(void *arg0, void *arg1, M2C_UNK arg_sp0);
void HSD_ClearVtxDesc_800F673C(void);
void get_shape_vertex_xyz(void *arg0, s32 arg1, s32 arg2, void *arg3);
void get_shape_normal_xyz(void *arg0, s32 arg1, s32 arg2, void *arg3);
void get_shape_nbt_xyz(void *arg0, s32 arg1, s32 arg2, void *arg3, M2C_UNK arg_sp0);
void interpretShapeAnimDisplayList();
void fn_800F75AC(void *arg0);
void HSD_PObjClearMtxMark(s32 arg0, s32 arg1);
void SetupSharedVtxModelMtx(void *arg0, s32 arg1, M2C_UNK *arg2, M2C_UNK arg_sp0);
void SetupEnvelopeModelMtx(void *arg0, f32 *arg1);

void **HSD_PObjLoadDesc(u32 *arg0) {
    void **var_r31;
    void *temp_r5;

    if (arg0 != NULL) {
        if (((u32) *arg0 == 0U) || (hsdSearchClassInfo() == 0U)) {
            /* draft: did not compile: var_r31 = HSD_PObjAlloc(); */
        } else {
            var_r31 = hsdNew();
            if (var_r31 == NULL) {
                __assert(&lbl_80350148, 0x247, &lbl_80350150);
            }
        }
        temp_r5 = *var_r31;
        M2C_FIELD(temp_r5, M2C_UNK (**)(void **, u32 *, void *), 0x44)(var_r31, arg0, temp_r5);
        return var_r31;
    }
    return NULL;
}

void HSD_PObjRemoveAll(void *arg0) {
    void *temp_r31;
    void *temp_r4;
    void *temp_r4_2;
    void *var_r30;

    var_r30 = arg0;
loop_4:
    if (var_r30 != NULL) {
        temp_r31 = M2C_FIELD(var_r30, void **, 4);
        if (var_r30 != NULL) {
            temp_r4 = M2C_FIELD(var_r30, void **, 0);
            M2C_FIELD(temp_r4, M2C_UNK (**)(void *, void *), 0x30)(var_r30, temp_r4);
            temp_r4_2 = M2C_FIELD(var_r30, void **, 0);
            M2C_FIELD(temp_r4_2, M2C_UNK (**)(void *, void *), 0x34)(var_r30, temp_r4_2);
        }
        var_r30 = temp_r31;
        goto loop_4;
    }
}

s32 HSD_PObjAlloc(void) {
    M2C_UNK *var_r3;
    s32 temp_r3;

    var_r3 = lbl_80350C50;
    if (var_r3 != NULL) {

    } else {
        var_r3 = &lbl_802A9468;
    }
    /* draft: did not compile: temp_r3 = hsdNew(var_r3); */
    if (temp_r3 == 0) {
        __assert(&lbl_80350148, 0x2A9, &lbl_80350150);
    }
    return temp_r3;
}

void HSD_PObjResolveRefsAll(void *arg0, void *arg1, M2C_UNK arg_sp0) {
    s32 temp_r0;
    u32 **var_r26;
    u32 *var_r25;
    void *temp_r4;
    void *temp_r4_2;
    void *var_r27;
    void *var_r28;
    void *var_r30;
    void *var_r31;

    var_r30 = arg0;
    var_r31 = arg1;
loop_31:
    if ((var_r30 != NULL) && (var_r31 != NULL)) {
        if ((var_r30 != NULL) && (var_r31 != NULL)) {
            temp_r0 = M2C_FIELD(var_r30, u16 *, 0xC) & 0x3000;
            switch (temp_r0) {                      /* irregular */
            case 0x2000:
                var_r27 = M2C_FIELD(var_r30, void **, 0x14);
                var_r26 = M2C_FIELD(var_r31, u32 ***, 0x14);
                if (var_r27 != NULL) {
                    if (var_r26 == NULL) {

                    } else {
loop_21:
                        if (var_r27 != NULL) {
                            var_r25 = *var_r26;
                            if (var_r25 == NULL) {

                            } else {
                                var_r28 = M2C_FIELD(var_r27, void **, 4);
loop_18:
                                if ((var_r28 != NULL) && ((u32) *var_r25 != 0U)) {
                                    HSD_JObjUnrefThis(M2C_FIELD(var_r28, void **, 4));
                                    M2C_FIELD(var_r28, void **, 4) = HSD_IDGetDataFromTable(0, *var_r25, 0);
                                    if ((void *) M2C_FIELD(var_r28, void **, 4) == NULL) {
                                        __assert(&lbl_80350148, 0x2CA, &lbl_802A9468 + 0xA0);
                                    }
                                    temp_r4 = M2C_FIELD(var_r28, void **, 4);
                                    if (temp_r4 != NULL) {
                                        M2C_FIELD(temp_r4, u16 *, 6) = (u16) (M2C_FIELD(temp_r4, u16 *, 6) + 1);
                                        if ((u16) M2C_FIELD(temp_r4, u16 *, 6) == 0) {
                                            __assert(&lbl_802A9468 + 0xAC, 0x9E, &lbl_802A9468 + 0xB8);
                                        }
                                    }
                                    var_r28 = M2C_FIELD(var_r28, void **, 0);
                                    var_r25 += 8;
                                    goto loop_18;
                                }
                                var_r27 = M2C_FIELD(var_r27, void **, 0);
                                var_r26 += 4;
                                goto loop_21;
                            }
                        }
                    }
                }
                break;
            case 0x0:
                HSD_JObjUnrefThis(M2C_FIELD(var_r30, void **, 0x14));
                M2C_FIELD(var_r30, void **, 0x14) = NULL;
                if ((u32 **) M2C_FIELD(var_r31, u32 ***, 0x14) != NULL) {
                    M2C_FIELD(var_r30, void **, 0x14) = HSD_IDGetDataFromTable((long)(0), (unsigned long)(0U), (long)(0));
                    if ((void *) M2C_FIELD(var_r30, void **, 0x14) == NULL) {
                        __assert(&lbl_80350148, 0x2E5, &lbl_802A9468 + 0xE0);
                    }
                    temp_r4_2 = M2C_FIELD(var_r30, void **, 0x14);
                    if (temp_r4_2 != NULL) {
                        M2C_FIELD(temp_r4_2, u16 *, 6) = (u16) (M2C_FIELD(temp_r4_2, u16 *, 6) + 1);
                        if ((u16) M2C_FIELD(temp_r4_2, u16 *, 6) == 0) {
                            __assert(&lbl_802A9468 + 0xAC, 0x9E, &lbl_802A9468 + 0xB8);
                        }
                    }
                }
                break;
            }
        }
        var_r30 = M2C_FIELD(var_r30, void **, 4);
        var_r31 = M2C_FIELD(var_r31, void **, 4);
        goto loop_31;
    }
}

void HSD_ClearVtxDesc_800F673C(void) {
    fn_800E0804();
    lbl_80350C64 = 0;
    lbl_80350C68 = 0;
}

void get_shape_vertex_xyz(void *arg0, s32 arg1, s32 arg2, void *arg3) { } /* draft: stub */

void get_shape_normal_xyz(void *arg0, s32 arg1, s32 arg2, void *arg3) { } /* draft: stub */

void get_shape_nbt_xyz(void *arg0, s32 arg1, s32 arg2, void *arg3, M2C_UNK arg_sp0) { } /* draft: stub */

void interpretShapeAnimDisplayList() { } /* draft: stub */

void fn_800F75AC(void *arg0) { } /* draft: stub */

void HSD_PObjClearMtxMark(s32 arg0, s32 arg1) {
    M2C_FIELD(&lbl_8031D2C0, s32 *, 0) = arg0;
    M2C_FIELD(&lbl_8031D2C0, s32 *, 4) = arg1;
    M2C_FIELD(&lbl_8031D2C0, s32 *, 8) = arg0;
    M2C_FIELD(&lbl_8031D2C0, s32 *, 0xC) = arg1;
}

void SetupSharedVtxModelMtx(void *arg0, s32 arg1, M2C_UNK *arg2, M2C_UNK arg_sp0) { } /* draft: stub */

void SetupEnvelopeModelMtx(void *arg0, f32 *arg1) {
    M2C_UNK sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp8;
    f32 *temp_r23;
    f32 *var_r19_2;
    f32 temp_f31;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_r21;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r19;
    s32 var_r20;
    s32 var_r26;
    s32 var_r3;
    s32 var_r3_2;
    void *temp_r19;
    void *temp_r19_2;
    void *temp_r3;
    void *temp_r3_2;
    void *var_r22;
    void *var_r24;

    temp_r3 = fn_800FC7FC(&lbl_802A9468);
    var_r19 = 0;
    M2C_FIELD(&lbl_8031D2C0, s32 *, 0) = 0;
    M2C_FIELD(&lbl_8031D2C0, s32 *, 4) = 2;
    M2C_FIELD(&lbl_8031D2C0, s32 *, 8) = 0;
    M2C_FIELD(&lbl_8031D2C0, s32 *, 0xC) = 2;
    if (M2C_FIELD(temp_r3, s32 *, 0x14) & 0x80) {
        var_r19 = 1;
    }
    if (_HSD_TObjGetCurrentByType(0, 1) != 0U) {
        var_r19 |= 3;
    }
    if (_HSD_TObjGetCurrentByType(0, 2) != 0U) {
        var_r19 |= 5;
    }
    temp_r23 = _HSD_mkEnvelopeModelNodeMtx(temp_r3, &sp68);
    var_r24 = M2C_FIELD(arg0, void **, 0x14);
    temp_f31 = lbl_80351F50;
    var_r26 = 0;
loop_49:
    if ((var_r26 < 0xA) && (var_r24 != NULL)) {
        var_r22 = M2C_FIELD(var_r24, void **, 4);
        temp_r21 = HSD_Index2PosNrmMtx(var_r26);
        var_r20 = 0;
        if (var_r22 == NULL) {
            __assert(&lbl_80350148, 0x719, &lbl_802A9468 + 0x4C);
        }
        M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
        if (M2C_FIELD(var_r22, f32 *, 8) == temp_f31) {
            temp_r19 = M2C_FIELD(var_r22, void **, 4);
            temp_cr0_eq = temp_r19 == NULL;
            if (temp_cr0_eq == 0) {
                if (temp_cr0_eq != 0) {
                    __assert(&lbl_80350158, 0x25D, &lbl_80350160);
                }
                temp_r4 = M2C_FIELD(temp_r19, s32 *, 0x14);
                var_r3 = 0;
                if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                    var_r3 = 1;
                }
                if (var_r3 != 0) {
                    HSD_JObjSetupMatrixSub(temp_r19);
                }
            }
            if (temp_r23 != NULL) {
                temp_r3_2 = M2C_FIELD(var_r22, void **, 4);
                /* draft: did not compile: PSMTXConcat(temp_r3_2 + 0x44, M2C_FIELD(temp_r3_2, f32 **, 0x78), &sp38); */
                var_r19_2 = &sp38;
            } else {
                /* draft: did not compile: var_r19_2 = M2C_FIELD(var_r22, void **, 4) + 0x44; */
            }
        } else {
            sp64 = lbl_80351F28;
            sp60 = lbl_80351F28;
            sp5C = lbl_80351F28;
            sp58 = lbl_80351F28;
            sp54 = lbl_80351F28;
            sp50 = lbl_80351F28;
            sp4C = lbl_80351F28;
            sp48 = lbl_80351F28;
            sp44 = lbl_80351F28;
            sp40 = lbl_80351F28;
            sp3C = lbl_80351F28;
            sp38 = lbl_80351F28;
loop_37:
            if (var_r22 != NULL) {
                if ((void *) M2C_FIELD(var_r22, void **, 4) == NULL) {
                    __assert(&lbl_80350148, 0x72D, &lbl_802A9468 + 0x2E4);
                }
                temp_r19_2 = M2C_FIELD(var_r22, void **, 4);
                temp_cr0_eq_2 = temp_r19_2 == NULL;
                if (temp_cr0_eq_2 == 0) {
                    if (temp_cr0_eq_2 != 0) {
                        __assert(&lbl_80350158, 0x25D, &lbl_80350160);
                    }
                    temp_r4_2 = M2C_FIELD(temp_r19_2, s32 *, 0x14);
                    var_r3_2 = 0;
                    if (!(temp_r4_2 & 0x800000) && (temp_r4_2 & 0x40)) {
                        var_r3_2 = 1;
                    }
                    if (var_r3_2 != 0) {
                        HSD_JObjSetupMatrixSub(temp_r19_2);
                    }
                }
                if (0 /* draft: did not compile */) {
                    __assert(&lbl_80350148, 0x730, &lbl_80350168);
                }
                if ((f32 *) M2C_FIELD(temp_r19_2, f32 **, 0x78) == NULL) {
                    __assert(&lbl_80350148, 0x731, &lbl_802A9468 + 0x2F4);
                }
                /* draft: did not compile: PSMTXConcat(temp_r19_2 + 0x44, M2C_FIELD(temp_r19_2, f32 **, 0x78), &sp8); */
                HSD_MtxScaledAdd(&sp8, &sp38, &sp38, M2C_FIELD(var_r22, f32 *, 8));
                var_r22 = M2C_FIELD(var_r22, void **, 0);
                var_r20 += 1;
                goto loop_37;
            }
            var_r19_2 = &sp38;
        }
        HSD_PerfCountEnvelopeBlending(var_r20);
        if (temp_r23 != NULL) {
            PSMTXConcat(var_r19_2, temp_r23, &sp38);
        }
        PSMTXConcat(arg1, var_r19_2, &sp8);
        GXLoadPosMtxImm(&sp8, temp_r21);
        M2C_FIELD(&lbl_802AA340, s32 *, 0xC) = (s32) (M2C_FIELD(&lbl_802AA340, s32 *, 0xC) + 1);
        if ((s32) (var_r19 & 1) != 0) {
            if (PSMTXInvXpose(&sp8, &sp38) == 0U) {
                PSMTXCopy(&sp8, &sp38);
            }
            if (M2C_FIELD(temp_r3, s32 *, 0x14) & 0x80) {
                GXLoadNrmMtxImm(&sp38, temp_r21);
                M2C_FIELD(&lbl_802AA340, s32 *, 0xC) = (s32) (M2C_FIELD(&lbl_802AA340, s32 *, 0xC) + 1);
            }
            if ((s32) (var_r19 & 6) != 0) {
                GXLoadTexMtxImm(&sp38, HSD_Index2TexMtx(var_r26), 0);
                M2C_FIELD(&lbl_802AA340, s32 *, 0xC) = (s32) (M2C_FIELD(&lbl_802AA340, s32 *, 0xC) + 1);
            }
        }
        var_r24 = M2C_FIELD(var_r24, void **, 0);
        var_r26 += 1;
        goto loop_49;
    }
}
