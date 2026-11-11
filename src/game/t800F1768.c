/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

u32 HSD_AObjLoadDesc(s32);
M2C_UNK HSD_AObjRemove();
M2C_UNK HSD_WObjAddAnim(s32, s32);
extern M2C_UNK lbl_802A9168;
extern u32 lbl_80350C28;
extern s32 lbl_80350C2C;
M2C_UNK hsdInitClassInfo(M2C_UNK *, M2C_UNK *, void *, void *, M2C_UNK, M2C_UNK);
extern M2C_UNK LObjUpdateFunc;
extern M2C_UNK LObjLoad;
extern M2C_UNK lbl_802AA3D0;
f32 fn_800F39E8(void *);
f32 fn_800F3A10(void *);
s32 HSD_CObjGetProjectionType(void *, f32);
M2C_UNK fn_800FF74C(s32, s32, s32, f32, f32, f32, f32, f32);
f64 Tan(f32, f32);
extern f64 lbl_80351E98;
extern f32 lbl_80351EA0;
extern f32 lbl_80351EA4;
M2C_UNK HSD_WObjRemoveAnim();
M2C_UNK HSD_AObjInterpretAnim(s32, void *, s32);
M2C_UNK HSD_WObjInterpretAnim(s32);
M2C_UNK HSD_AObjReqAnim(s32);
M2C_UNK HSD_WObjReqAnim(s32, f32);
M2C_UNK C_MTXFrustum(M2C_UNK *, f32, f32, f32, f32, f32, f32);
M2C_UNK C_MTXOrtho(M2C_UNK *, f32, f32, f32, f32, f32, f32);
M2C_UNK GXSetProjection(M2C_UNK *, M2C_UNK);
M2C_UNK fn_800E5858(f32, f32, f32, f32);
M2C_UNK fn_800E58B4(s32, s32, s32);
s32 __cvt_fp2unsigned();
extern M2C_UNK lbl_8031D320;
extern f32 lbl_80351EA8;
extern f32 lbl_80351EAC;
extern f64 lbl_80351EC0;
extern f32 lbl_80351EC8;
extern f32 lbl_80351ECC;
M2C_UNK C_MTXLookAt();
M2C_UNK HSD_CObjSetFlags(void *, M2C_UNK);
M2C_UNK HSD_CObjClearFlags(void *, M2C_UNK, void *);
M2C_UNK C_MTXPerspective(M2C_UNK *, f32, f32, f32, f32);
M2C_UNK fn_800D2A98();
M2C_UNK fn_800E5754(f32, f32, f32, f32, f32, f32);
M2C_UNK _HSD_ZListClear();
s32 fn_801000E8();
M2C_UNK HSD_Panic(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_802A9360;
extern s32 lbl_80350118;
extern s32 lbl_8035011C;
extern M2C_UNK lbl_80350120;
extern void *lbl_80350C4C;
M2C_UNK fn_800FF4A0();
M2C_UNK _HSD_ZListDisp();
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_80350128;
M2C_UNK HSD_WObjGetPosition();
M2C_UNK HSD_WObjSetPosition(s32, s32);
M2C_UNK PSMTXMultVecSR();
M2C_UNK PSVECSubtract(M2C_UNK *, M2C_UNK *, f32 *);
M2C_UNK PSVECNormalize(f32 *, f32 *);
f32 PSVECDotProduct();
f64 ArcTan2();
extern M2C_UNK lbl_802A93A0;
extern M2C_UNK lbl_802A93AC;
extern f64 lbl_80351ED0;
extern f32 lbl_80351ED8;
extern f32 lbl_80351EDC;
extern f32 lbl_80351EE0;
M2C_UNK fn_800CC2C4(M2C_UNK *, f32 *, f32);
extern f64 lbl_80351EE8;
extern f64 lbl_80351EF0;
extern f64 lbl_80351EF8;
M2C_UNK OSReport(void *);
M2C_UNK HSD_CObjSetRoll(void *, f32);
extern M2C_UNK lbl_802A92C8;
extern M2C_UNK lbl_80350130;
M2C_UNK PSMTXCopy(s32);
M2C_UNK PSMTXInverse();
u32 HSD_MtxAlloc();

void HSD_LObjAddAnim(void *arg0, void *arg1);
void LObjRelease(void *arg0);
void fn_800F1960(u32 arg0);
void fn_800F19C0(void);
void HSD_CObjEraseScreen(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void HSD_CObjRemoveAnim(void *arg0);
void HSD_CObjAddAnim(void *arg0, void *arg1);
void CObjUpdateFunc();
void HSD_CObjAnim(void *arg0);
void HSD_CObjReqAnim(void *arg0, f32 farg0);
s32 setupTopHalfCamera(void *arg0);
s32 setupBottomHalfCamera(void *arg0);
void fn_800F23D8(void *arg0);
s32 fn_800F24A4(void *arg0);
void fn_800F29A8(void);
s32 HSD_CObjGetEyePositionWObj(void *arg0);
s32 HSD_CObjGetEyePositionWObj_800F2A0C(void *arg0);
void HSD_CObjGetEyePosition(void *arg0, s32 arg1);
void HSD_CObjSetInterest(void *arg0, s32 arg1);
void HSD_CObjGetEyePosition_800F2B24(void *arg0, s32 arg1);
void HSD_CObjSetEyePosition(void *arg0, s32 arg1);
f32 fn_800F2BFC(void *arg0, s32 arg1);
s32 fn_800F2DE4(void *arg0, f32 *arg1, f32 farg0);
s32 HSD_CObjGetUpVector(void *arg0, void *arg1);
void fn_800F3130(void *arg0, f32 *arg1);
void HSD_CObjSetMtxDirty(void *arg0);
s32 HSD_CObjMtxIsDirty(void *arg0);
void HSD_CObjGetViewingMtx(s32 arg1);
u32 HSD_CObjGetInvViewingMtxPtrDirect(void *arg0);
s32 HSD_CObjGetViewingMtxPtr(s32 arg0);

void HSD_LObjAddAnim(void *arg0, void *arg1) {
    s32 var_r3;
    s32 var_r3_2;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
            HSD_AObjRemove();
        }
        M2C_FIELD(arg0, u32 *, 0x48) = HSD_AObjLoadDesc(M2C_FIELD(arg1, s32 *, 4));
        if (arg0 != NULL) {
            var_r3 = M2C_FIELD(arg0, s32 *, 0x18);
        } else {
            var_r3 = 0;
        }
        HSD_WObjAddAnim(var_r3, M2C_FIELD(arg1, s32 *, 8));
        if (arg0 != NULL) {
            var_r3_2 = M2C_FIELD(arg0, s32 *, 0x1C);
        } else {
            var_r3_2 = 0;
        }
        HSD_WObjAddAnim(var_r3_2, M2C_FIELD(arg1, s32 *, 0xC));
    }
}

void LObjRelease(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    u16 temp_r4;
    u16 temp_r4_4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_5;
    void *temp_r4_6;
    void *var_r30;
    void *var_r30_2;

    HSD_AObjRemove(M2C_FIELD(arg0, s32 *, 0x48));
    if (arg0 != NULL) {
        var_r30 = M2C_FIELD(arg0, void **, 0x18);
    } else {
        var_r30 = NULL;
    }
    if (var_r30 != NULL) {
        temp_r4 = M2C_FIELD(var_r30, u16 *, 4);
        var_r0 = temp_r4 == 0xFFFF;
        if (var_r0 != 0) {

        } else {
            M2C_FIELD(var_r30, u16 *, 4) = (u16) (temp_r4 - 1);
            var_r0 = temp_r4 == 0;
        }
        if ((var_r0 != 0) && (var_r30 != NULL)) {
            temp_r4_2 = M2C_FIELD(var_r30, void **, 0);
            M2C_FIELD(temp_r4_2, M2C_UNK (**)(void *, void *), 0x30)(var_r30, temp_r4_2);
            temp_r4_3 = M2C_FIELD(var_r30, void **, 0);
            M2C_FIELD(temp_r4_3, M2C_UNK (**)(void *, void *), 0x34)(var_r30, temp_r4_3);
        }
    }
    if (arg0 != NULL) {
        var_r30_2 = M2C_FIELD(arg0, void **, 0x1C);
    } else {
        var_r30_2 = NULL;
    }
    if (var_r30_2 != NULL) {
        temp_r4_4 = M2C_FIELD(var_r30_2, u16 *, 4);
        var_r0_2 = temp_r4_4 == 0xFFFF;
        if (var_r0_2 != 0) {

        } else {
            M2C_FIELD(var_r30_2, u16 *, 4) = (u16) (temp_r4_4 - 1);
            var_r0_2 = temp_r4_4 == 0;
        }
        if ((var_r0_2 != 0) && (var_r30_2 != NULL)) {
            temp_r4_5 = M2C_FIELD(var_r30_2, void **, 0);
            M2C_FIELD(temp_r4_5, M2C_UNK (**)(void *, void *), 0x30)(var_r30_2, temp_r4_5);
            temp_r4_6 = M2C_FIELD(var_r30_2, void **, 0);
            M2C_FIELD(temp_r4_6, M2C_UNK (**)(void *, void *), 0x34)(var_r30_2, temp_r4_6);
        }
    }
    M2C_FIELD(M2C_FIELD(&lbl_802A9168, void **, 0x14), M2C_UNK (**)(void *, void *), 0x30)(arg0, M2C_FIELD(&lbl_802A9168, void **, 0x14));
}

void fn_800F1960(u32 arg0) {
    if (arg0 == (u32) lbl_80350C28) {
        lbl_80350C28 = 0U;
    }
    if (0 /* draft: did not compile */) {
        lbl_80350C2C = 0;
    }
    M2C_FIELD(M2C_FIELD(&lbl_802A9168, void **, 0x14), M2C_UNK (**)(void *), 0x38)(M2C_FIELD(&lbl_802A9168, void **, 0x14));
}

#pragma push
#pragma peephole off
void fn_800F19C0(void) {
    hsdInitClassInfo(&lbl_802A9168, &lbl_802AA3D0, &lbl_802A9168 + 0x13C, &lbl_802A9168 + 0x154, 0x44, 0xD4);
    /* draft: did not compile: M2C_FIELD(&lbl_802A9168, M2C_UNK (**)(), 0x30) = LObjRelease; */
    /* draft: did not compile: M2C_FIELD(&lbl_802A9168, M2C_UNK (**)(), 0x38) = fn_800F1960; */
    M2C_FIELD(&lbl_802A9168, M2C_UNK **, 0x3C) = &LObjLoad;
    M2C_FIELD(&lbl_802A9168, M2C_UNK **, 0x40) = &LObjUpdateFunc;
}
#pragma pop

void HSD_CObjEraseScreen(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 saved_reg_f30;
    s32 saved_reg_f29;
    s32 saved_reg_f28;
    s32 saved_reg_f27;
    f32 temp_f1;
    f32 temp_f31_2;
    f32 temp_f4;
    f32 var_f30;
    f32 var_f29;
    f32 var_f28;
    f32 var_f27;
    s32 temp_r3;

    var_f27 = saved_reg_f27;
    var_f28 = saved_reg_f28;
    var_f29 = saved_reg_f29;
    var_f30 = saved_reg_f30;
    if (arg0 != NULL) {
        if ((arg1 == 0) && (arg2 == 0) && (arg3 == 0)) {
            return;
        }
        temp_f1 = fn_800F39E8(arg0) + (f32)(fn_800F3A10(arg0));
        temp_f31_2 = (f32) (lbl_80351E98 * (f64) temp_f1);
        temp_r3 = HSD_CObjGetProjectionType(arg0, temp_f1);
        switch (temp_r3) {                          /* irregular */
        case 1:
            var_f28 = temp_f31_2 * (f32) Tan(lbl_80351EA0 * (lbl_80351EA4 * M2C_FIELD(arg0, f32 *, 0x40)), lbl_80351EA0);
            var_f29 = var_f28 * M2C_FIELD(arg0, f32 *, 0x44);
            var_f27 = -var_f28;
            var_f30 = -var_f29;
            break;
        case 2:
            temp_f4 = temp_f31_2 / fn_800F39E8(arg0);
            var_f29 = temp_f4 * M2C_FIELD(arg0, f32 *, 0x4C);
            var_f30 = temp_f4 * M2C_FIELD(arg0, f32 *, 0x48);
            var_f28 = temp_f4 * M2C_FIELD(arg0, f32 *, 0x40);
            var_f27 = temp_f4 * M2C_FIELD(arg0, f32 *, 0x44);
            break;
        case 3:
            var_f29 = M2C_FIELD(arg0, f32 *, 0x4C);
            var_f30 = M2C_FIELD(arg0, f32 *, 0x48);
            var_f28 = M2C_FIELD(arg0, f32 *, 0x40);
            var_f27 = M2C_FIELD(arg0, f32 *, 0x44);
            break;
        }
        fn_800FF74C(arg1, arg2, arg3, var_f28, var_f27, var_f30, var_f29, -temp_f31_2);
    }
}

void HSD_CObjRemoveAnim(void *arg0) {
    s32 temp_cr0_eq;

    temp_cr0_eq = arg0 == NULL;
    if ((temp_cr0_eq == 0) && (temp_cr0_eq == 0)) {
        HSD_AObjRemove(M2C_FIELD(arg0, s32 *, 0x84));
        M2C_FIELD(arg0, s32 *, 0x84) = 0;
        HSD_CObjGetEyePositionWObj_800F2A0C(arg0);
        HSD_WObjRemoveAnim();
        HSD_CObjGetEyePositionWObj(arg0);
        HSD_WObjRemoveAnim();
    }
}

void HSD_CObjAddAnim(void *arg0, void *arg1) {
    if ((arg0 != NULL) && (arg1 != NULL)) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
            HSD_AObjRemove();
        }
        M2C_FIELD(arg0, u32 *, 0x84) = HSD_AObjLoadDesc(M2C_FIELD(arg1, s32 *, 0));
        HSD_CObjGetEyePositionWObj_800F2A0C(arg0);
        HSD_WObjAddAnim((long)(M2C_FIELD(arg1, s32 *, 4)), (long)(0));
        HSD_CObjGetEyePositionWObj(arg0);
        HSD_WObjAddAnim((long)(M2C_FIELD(arg1, s32 *, 8)), (long)(0));
    }
}

void CObjUpdateFunc() { } /* draft: stub */

void HSD_CObjAnim(void *arg0) {
    if (arg0 != NULL) {
        HSD_AObjInterpretAnim(M2C_FIELD(arg0, s32 *, 0x84), arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x40));
        HSD_WObjInterpretAnim(M2C_FIELD(arg0, s32 *, 0x24));
        HSD_WObjInterpretAnim(M2C_FIELD(arg0, s32 *, 0x28));
    }
}

void HSD_CObjReqAnim(void *arg0, f32 farg0) {
    s32 temp_cr0_eq;

    temp_cr0_eq = arg0 == NULL;
    if ((temp_cr0_eq == 0) && (temp_cr0_eq == 0)) {
        HSD_AObjReqAnim(M2C_FIELD(arg0, s32 *, 0x84));
        HSD_WObjReqAnim(M2C_FIELD(arg0, s32 *, 0x24), farg0);
        HSD_WObjReqAnim(M2C_FIELD(arg0, s32 *, 0x28), farg0);
    }
}

s32 setupTopHalfCamera(void *arg0) {
    s32 saved_reg_r27;
    M2C_UNK sp8;
    s32 temp_r30;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f31;
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f29;
    f32 temp_f31_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f6;
    f32 var_f0;
    f32 var_f2;
    s32 temp_r29;
    s32 temp_r31;
    M2C_UNK var_r27;
    u8 temp_r0;

    var_r27 = saved_reg_r27;
    temp_f31 = M2C_FIELD(arg0, f32 *, 0x14);
    if (temp_f31 >= (f32) M2C_FIELD(&lbl_8031D320, u16 *, 6)) {
        return 0;
    }
    var_f2 = M2C_FIELD(arg0, f32 *, 0x18);
    temp_f30 = M2C_FIELD(arg0, f32 *, 0xC);
    temp_f29 = M2C_FIELD(arg0, f32 *, 0x10);
    if (var_f2 < (f32) M2C_FIELD(&lbl_8031D320, u16 *, 6)) {

    } else {
        var_f2 = (f32) M2C_FIELD(&lbl_8031D320, u16 *, 6);
    }
    temp_r29 = __cvt_fp2unsigned(var_f2 - temp_f31);
    temp_r30 = __cvt_fp2unsigned(temp_f29 - temp_f30);
    temp_r31 = __cvt_fp2unsigned(temp_f31);
    __cvt_fp2unsigned(temp_f30);
    fn_800E58B4(temp_r31, temp_r30, temp_r29);
    temp_f6 = M2C_FIELD(arg0, f32 *, 0x18);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x14);
    if (temp_f6 < (f32) M2C_FIELD(&lbl_8031D320, u16 *, 6)) {
        var_f0 = temp_f6;
    } else {
        var_f0 = (f32) M2C_FIELD(&lbl_8031D320, u16 *, 6);
    }
    temp_f4 = var_f0 - temp_f2;
    temp_f31_2 = temp_f4 / (temp_f6 - temp_f2);
    fn_800E5858(M2C_FIELD(arg0, f32 *, 0x10) - M2C_FIELD(arg0, f32 *, 0xC), temp_f4, lbl_80351EA8, lbl_80351EAC);
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x50);
    switch ((s32) temp_r0) {                        /* irregular */
    case 1:
        var_r27 = 0;
        temp_f1 = (M2C_FIELD(arg0, f32 *, 0x38)) * (f32) Tan((f32) (lbl_80351EC0 * (lbl_80351E98 * (f64) M2C_FIELD(arg0, f32 *, 0x40))), lbl_80351EC0);
        temp_f4_2 = temp_f1 * M2C_FIELD(arg0, f32 *, 0x44);
        C_MTXFrustum(&sp8, temp_f1, temp_f1 * -((lbl_80351EC8 * temp_f31_2) - lbl_80351EAC), -temp_f4_2, temp_f4_2, (M2C_FIELD(arg0, f32 *, 0x38)), M2C_FIELD(arg0, f32 *, 0x3C));
        break;
    case 2:
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x40);
        var_r27 = 0;
        C_MTXFrustum(&sp8, temp_f1_2, -((temp_f31_2 * (temp_f1_2 - M2C_FIELD(arg0, f32 *, 0x44))) - temp_f1_2), M2C_FIELD(arg0, f32 *, 0x48), M2C_FIELD(arg0, f32 *, 0x4C), M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x3C));
        break;
    case 3:
        temp_f1_3 = M2C_FIELD(arg0, f32 *, 0x40);
        var_r27 = 1;
        C_MTXOrtho(&sp8, temp_f1_3, -((temp_f31_2 * (temp_f1_3 - M2C_FIELD(arg0, f32 *, 0x44))) - temp_f1_3), M2C_FIELD(arg0, f32 *, 0x48), M2C_FIELD(arg0, f32 *, 0x4C), M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x3C));
        break;
    }
    GXSetProjection(&sp8, var_r27);
    return 1;
}

s32 setupBottomHalfCamera(void *arg0) { return 0; } /* draft: stub */

void fn_800F23D8(void *arg0) {
    M2C_UNK sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    M2C_UNK sp8;
    void *temp_r5;
    void *temp_r5_2;

    if (!(M2C_FIELD(arg0, s32 *, 8) & 2) && (HSD_CObjMtxIsDirty((void *)(0)) != 0)) {
        /* draft: did not compile: HSD_CObjGetEyePosition_800F2B24(arg0, &sp20); */
        switch (HSD_CObjGetUpVector(arg0, &sp14)) {
        case 0:
                sp14 = lbl_80351EA8;
                sp18 = lbl_80351EAC;
                sp1C = lbl_80351EA8;
            break;
        }
        /* draft: did not compile: HSD_CObjGetEyePosition(arg0, &sp8); */
        /* draft: did not compile: C_MTXLookAt(arg0 + 0x54, &sp20, &sp14, &sp8); */
        temp_r5 = M2C_FIELD(arg0, void **, 0x24);
        M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) & 0xFFFFFFFD);
        temp_r5_2 = M2C_FIELD(arg0, void **, 0x28);
        M2C_FIELD(temp_r5_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r5_2, s32 *, 8) & 0xFFFFFFFD);
        HSD_CObjClearFlags(arg0, 0x40000000, temp_r5_2);
        HSD_CObjSetFlags(arg0, 0x80000000);
    }
}

s32 fn_800F24A4(void *arg0) { return 0; } /* draft: stub */

void fn_800F29A8(void) {
    fn_800FF4A0();
    _HSD_ZListDisp();
}

s32 HSD_CObjGetEyePositionWObj(void *arg0) {
    if (arg0 == NULL) {
        __assert(&lbl_80350120, 0x2C2, &lbl_80350128);
    }
    return M2C_FIELD(arg0, s32 *, 0x28);
}

s32 HSD_CObjGetEyePositionWObj_800F2A0C(void *arg0) {
    if (arg0 == NULL) {
        __assert(&lbl_80350120, 0x2DA, &lbl_80350128);
    }
    return M2C_FIELD(arg0, s32 *, 0x24);
}

void HSD_CObjGetEyePosition(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        __assert(&lbl_80350120, 0x2F2, &lbl_80350128);
    }
    if (arg0 == NULL) {
        __assert(&lbl_80350120, 0x2C2, &lbl_80350128);
    }
    HSD_WObjGetPosition(M2C_FIELD(arg0, s32 *, 0x28), arg1);
}

void HSD_CObjSetInterest(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        __assert(&lbl_80350120, 0x2FE, &lbl_80350128);
    }
    if (arg0 == NULL) {
        __assert(&lbl_80350120, 0x2C2, &lbl_80350128);
    }
    HSD_WObjSetPosition(M2C_FIELD(arg0, s32 *, 0x28), arg1);
}

void HSD_CObjGetEyePosition_800F2B24(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        __assert(&lbl_80350120, 0x30A, &lbl_80350128);
    }
    if (arg0 == NULL) {
        __assert(&lbl_80350120, 0x2DA, &lbl_80350128);
    }
    HSD_WObjGetPosition(M2C_FIELD(arg0, s32 *, 0x24), arg1);
}

void HSD_CObjSetEyePosition(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        __assert(&lbl_80350120, 0x316, &lbl_80350128);
    }
    if (arg0 == NULL) {
        __assert(&lbl_80350120, 0x2DA, &lbl_80350128);
    }
    HSD_WObjSetPosition(M2C_FIELD(arg0, s32 *, 0x24), arg1);
}

f32 fn_800F2BFC(void *arg0, s32 arg1) {
    u32 sp30;
    s32 sp28;
    s32 sp24;
    M2C_UNK sp38;
    M2C_UNK sp14;
    f32 sp2C;
    f32 sp20;
    M2C_UNK sp8;
    s32 var_r0;
    s32 var_r0_2;

    if ((arg0 == NULL) || ((u32) M2C_FIELD(arg0, u32 *, 0x24) == 0U) || ((u32) M2C_FIELD(arg0, u32 *, 0x28) == 0U)) {
        var_r0 = 0;
    } else {
        if (arg0 == NULL) {
            __assert(&lbl_80350120, 0x30A, &lbl_80350128);
        }
        if (arg0 == NULL) {
            __assert(&lbl_80350120, 0x2DA, &lbl_80350128);
        }
        HSD_WObjGetPosition(M2C_FIELD(arg0, u32 *, 0x24), &sp8);
        if (arg0 == NULL) {
            __assert(&lbl_80350120, 0x2F2, &lbl_80350128);
        }
        if (arg0 == NULL) {
            __assert(&lbl_80350120, 0x2C2, &lbl_80350128);
        }
        HSD_WObjGetPosition(M2C_FIELD(arg0, u32 *, 0x28), &sp14);
        PSVECSubtract(&sp14, &sp8, &sp20);
        if ((lbl_80351ED0 >= fabs(sp20)) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((fabs(sp24) == lbl_80351ED0) != 0)) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((fabs(sp28) == lbl_80351ED0) != 0))) {
            var_r0_2 = -1;
        } else {
            PSVECNormalize(&sp20, &sp20);
            var_r0_2 = 0;
        }
        var_r0 = var_r0_2 == 0;
    }
    if (var_r0 == 0) {
        return lbl_80351EA8;
    }
    if ((lbl_80351EAC - (f32) fabs(PSVECDotProduct(arg1, &sp20))) < lbl_80351ED8) {
        return lbl_80351EA8;
    }
    C_MTXLookAt(&sp38, &lbl_802A93A0, &lbl_802A93AC, &sp20);
    PSMTXMultVecSR(&sp38, arg1, &sp2C);
    if (lbl_80351EA8 == sp30) {
        if (-sp2C >= lbl_80351EA8) {
            return lbl_80351EDC;
        }
        return lbl_80351EE0;
    }
    return (f32) ArcTan2();
}

s32 fn_800F2DE4(void *arg0, f32 *arg1, f32 farg0) {
    M2C_UNK sp1C;
    s32 sp44;
    M2C_UNK sp4C;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp28;
    s32 sp48;
    M2C_UNK sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f4;
    f32 var_f4_2;
    f64 temp_f1;
    f64 temp_f1_2;
    f64 temp_f1_3;
    f64 temp_f1_4;
    f64 temp_f1_5;
    f64 temp_f1_6;
    s32 var_r0;
    s32 var_r0_2;

    if ((arg0 == NULL) || ((u32) M2C_FIELD(arg0, u32 *, 0x24) == 0U) || ((u32) M2C_FIELD(arg0, u32 *, 0x28) == 0U)) {
        var_r0 = 0;
    } else {
        if (arg0 == NULL) {
            __assert(&lbl_80350120, 0x30A, &lbl_80350128);
        }
        if (arg0 == NULL) {
            __assert(&lbl_80350120, 0x2DA, &lbl_80350128);
        }
        HSD_WObjGetPosition(M2C_FIELD(arg0, u32 *, 0x24), &sp10);
        if (arg0 == NULL) {
            __assert(&lbl_80350120, 0x2F2, &lbl_80350128);
        }
        if (arg0 == NULL) {
            __assert(&lbl_80350120, 0x2C2, &lbl_80350128);
        }
        HSD_WObjGetPosition(M2C_FIELD(arg0, u32 *, 0x28), &sp1C);
        PSVECSubtract(&sp1C, &sp10, &sp40);
        M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
        if ((fabs(sp40) == lbl_80351ED0) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((fabs(sp44) == lbl_80351ED0) != 0)) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((fabs(sp48) == lbl_80351ED0) != 0))) {
            var_r0_2 = -1;
        } else {
            PSVECNormalize(&sp40, &sp40);
            var_r0_2 = 0;
        }
        var_r0 = var_r0_2 == 0;
    }
    if (var_r0 == 0) {
        return 0;
    }
    if ((lbl_80351EE8 - (f64) (f32) fabs(sp44)) < (f32) lbl_80351EF0) {
        var_f4 = (sp44 * sp44) + (sp48 * sp48);
        if (var_f4 > lbl_80351EA8) {
            temp_f1 = __frsqrte(var_f4);
            temp_f1_2 = lbl_80351E98 * temp_f1 * -(((f64) var_f4 * (temp_f1 * temp_f1)) - lbl_80351EF8);
            temp_f1_3 = lbl_80351E98 * temp_f1_2 * -(((f64) var_f4 * (temp_f1_2 * temp_f1_2)) - lbl_80351EF8);
            spC = (f32) ((f64) var_f4 * (lbl_80351E98 * temp_f1_3 * -(((f64) var_f4 * (temp_f1_3 * temp_f1_3)) - lbl_80351EF8)));
            var_f4 = spC;
        }
        sp34 = var_f4;
        temp_f2 = -sp40 / (f32) var_f4;
        sp38 = sp44 * temp_f2;
        sp3C = sp48 * temp_f2;
    } else {
        var_f4_2 = (sp40 * sp40) + (sp48 * sp48);
        if (var_f4_2 > lbl_80351EA8) {
            temp_f1_4 = __frsqrte(var_f4_2);
            temp_f1_5 = lbl_80351E98 * temp_f1_4 * -(((f64) var_f4_2 * (temp_f1_4 * temp_f1_4)) - lbl_80351EF8);
            temp_f1_6 = lbl_80351E98 * temp_f1_5 * -(((f64) var_f4_2 * (temp_f1_5 * temp_f1_5)) - lbl_80351EF8);
            sp8 = (f32) ((f64) var_f4_2 * (lbl_80351E98 * temp_f1_6 * -(((f64) var_f4_2 * (temp_f1_6 * temp_f1_6)) - lbl_80351EF8)));
            var_f4_2 = sp8;
        }
        sp38 = var_f4_2;
        temp_f2_2 = -sp44 / (f32) var_f4_2;
        sp34 = temp_f2_2 * sp40;
        sp3C = sp48 * temp_f2_2;
    }
    fn_800CC2C4(&sp4C, &sp40, -farg0);
    PSMTXMultVecSR(&sp4C, &sp34, &sp28);
    PSVECNormalize(&sp28, arg1);
    return 1;
}

s32 HSD_CObjGetUpVector(void *arg0, void *arg1) {
    if ((arg0 == NULL) || (arg1 == NULL)) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 8) & 1) {
        M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0x2C);
        M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
        M2C_FIELD(arg1, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x34);
        return 1;
    }
    return 0;
}

void fn_800F3130(void *arg0, f32 *arg1) {
    s32 sp34;
    s32 sp30;
    s32 sp40;
    s32 sp3C;
    M2C_UNK sp44;
    f32 sp38;
    M2C_UNK sp14;
    f32 sp20;
    f32 sp2C;
    M2C_UNK sp8;
    f32 var_f1;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    u32 sp24;

    if (arg0 != NULL) {
        if (arg1 == NULL) {
            return;
        }
        if (M2C_FIELD(arg0, s32 *, 8) & 1) {
            if (arg1 != NULL) {
                if ((fabs(M2C_FIELD(arg1, f32 *, 0)) <= lbl_80351ED0) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((fabs(M2C_FIELD(arg1, f32 *, 4)) == (f32) lbl_80351ED0) != 0)) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((fabs(M2C_FIELD(arg1, f32 *, 8)) == (f32) lbl_80351ED0) != 0))) {
                    var_r0 = -1;
                } else {
                    PSVECNormalize(arg1, &sp38);
                    var_r0 = 0;
                }
            } else {
                var_r0 = -1;
            }
            if (var_r0 != 0) {
                OSReport(&lbl_802A92C8 + 0xF0);
                __assert(&lbl_80350120, 0x3D6, &lbl_80350130);
            }
            if ((M2C_FIELD(arg0, f32 *, 0x2C) != sp38) || (M2C_FIELD(arg0, f32 *, 0x30) != sp3C) || (M2C_FIELD(arg0, f32 *, 0x34) != sp40)) {
                HSD_CObjSetMtxDirty(arg0);
                M2C_FIELD(arg0, f32 *, 0x2C) = sp38;
                M2C_FIELD(arg0, f32 *, 0x30) = sp3C;
                M2C_FIELD(arg0, f32 *, 0x34) = sp40;
            }
        } else {
            if ((arg0 == NULL) || ((u32) M2C_FIELD(arg0, u32 *, 0x24) == 0U) || ((u32) M2C_FIELD(arg0, u32 *, 0x28) == 0U)) {
                var_r0_2 = 0;
            } else {
                if (arg0 == NULL) {
                    __assert(&lbl_80350120, 0x30A, &lbl_80350128);
                }
                if (arg0 == NULL) {
                    __assert(&lbl_80350120, 0x2DA, &lbl_80350128);
                }
                HSD_WObjGetPosition(M2C_FIELD(arg0, u32 *, 0x24), &sp8);
                if (arg0 == NULL) {
                    __assert(&lbl_80350120, 0x2F2, &lbl_80350128);
                }
                if (arg0 == NULL) {
                    __assert(&lbl_80350120, 0x2C2, &lbl_80350128);
                }
                HSD_WObjGetPosition(M2C_FIELD(arg0, u32 *, 0x28), &sp14);
                PSVECSubtract(&sp14, &sp8, &sp2C);
                if ((fabs(sp2C) <= lbl_80351ED0) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((fabs(sp30) == lbl_80351ED0) != 0)) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((fabs(sp34) == lbl_80351ED0) != 0))) {
                    var_r0_3 = -1;
                } else {
                    PSVECNormalize(&sp2C, &sp2C);
                    var_r0_3 = 0;
                }
                var_r0_2 = var_r0_3 == 0;
            }
            if (var_r0_2 == 0) {
                var_f1 = lbl_80351EA8;
            } else if ((lbl_80351EAC - (f32) fabs(PSVECDotProduct(arg1, &sp2C))) < lbl_80351ED8) {
                var_f1 = lbl_80351EA8;
            } else {
                C_MTXLookAt(&sp44, &lbl_802A92C8 + 0xD8, &lbl_802A92C8 + 0xE4, &sp2C);
                PSMTXMultVecSR(&sp44, arg1, &sp20);
                if (sp24 == lbl_80351EA8) {
                    if (-lbl_80351EA8 >= sp20) {
                        var_f1 = lbl_80351EDC;
                    } else {
                        var_f1 = lbl_80351EE0;
                    }
                } else {
                    var_f1 = (f32) ArcTan2();
                }
            }
            HSD_CObjSetRoll(arg0, var_f1);
        }
    }
}

void HSD_CObjSetMtxDirty(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 0xC0000000);
}

s32 HSD_CObjMtxIsDirty(void *arg0) {
    s32 var_r4;
    void *temp_r3;
    void *temp_r5;

    var_r4 = 0;
    if ((M2C_FIELD(arg0, s32 *, 8) & 0x40000000) || ((temp_r5 = M2C_FIELD(arg0, void **, 0x24), ((temp_r5 == NULL) == 0)) && (M2C_FIELD(temp_r5, s32 *, 8) & 2)) || ((temp_r3 = M2C_FIELD(arg0, void **, 0x28), ((temp_r3 == NULL) == 0)) && (M2C_FIELD(temp_r3, s32 *, 8) & 2))) {
        var_r4 = 1;
    }
    return var_r4;
}

void HSD_CObjGetViewingMtx(s32 arg1) {
    HSD_CObjGetViewingMtxPtr((long)(0));
    PSMTXCopy(arg1);
}

u32 HSD_CObjGetInvViewingMtxPtrDirect(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) & 0x80000000) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x88) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x88) = HSD_MtxAlloc();
        }
        /* draft: did not compile: PSMTXInverse(arg0 + 0x54, M2C_FIELD(arg0, u32 *, 0x88)); */
        HSD_CObjClearFlags((void *)(arg0), (long)(0x80000000), (void *)(0));
    }
    return M2C_FIELD(arg0, u32 *, 0x88);
}

s32 HSD_CObjGetViewingMtxPtr(s32 arg0) {
    fn_800F23D8((void *)(0));
    return arg0 + 0x54;
}
