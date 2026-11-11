/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK OSReport(M2C_UNK *);
M2C_UNK fn_800CC2C4(M2C_UNK *, f32 *, f32);
M2C_UNK PSMTXMultVecSR(M2C_UNK *, f32 *, f32 *);
M2C_UNK PSVECSubtract(M2C_UNK *, M2C_UNK *, f32 *);
M2C_UNK PSVECNormalize(f32 *, f32 *);
M2C_UNK HSD_CObjGetEyePositionWObj(void *);
M2C_UNK HSD_CObjGetEyePositionWObj_800F2A0C(void *);
f32 fn_800F2BFC(void *, f32 *);
M2C_UNK fn_800F2DE4(void *, M2C_UNK *);
M2C_UNK fn_800F3130(void *, M2C_UNK *);
M2C_UNK HSD_CObjSetMtxDirty(void *);
M2C_UNK HSD_WObjGetPosition(M2C_UNK *);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_802A93B8;
extern M2C_UNK lbl_80350120;
extern M2C_UNK lbl_80350128;
extern M2C_UNK lbl_80350130;
extern f64 lbl_80351E98;
extern f32 lbl_80351EA8;
extern f64 lbl_80351ED0;
extern f64 lbl_80351EE8;
extern f64 lbl_80351EF0;
extern f64 lbl_80351EF8;
extern s32 lbl_80350C4C;
s32 hsdNew();
extern M2C_UNK lbl_802A92C8;
extern M2C_UNK *lbl_80350C48;
M2C_UNK HSD_WObjInit(s32, s32);
extern M2C_UNK lbl_802A93F0;
u32 hsdSearchClassInfo();
s32 HSD_WObjAlloc();
M2C_UNK HSD_AObjRemove(s32);
M2C_UNK HSD_MtxFree();
M2C_UNK hsdInitClassInfo(M2C_UNK *, M2C_UNK *, void *, void *, M2C_UNK, M2C_UNK);
extern M2C_UNK CObjUpdateFunc;
extern M2C_UNK lbl_802AA3D0;
M2C_UNK HSD_ObjAllocInit(M2C_UNK *, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_8031D290;
M2C_UNK HSD_ZListFree();
extern f32 lbl_80351F00;

void HSD_CObjSetRoll(void *arg0, f32 farg0);
f32 fn_800F3978(f32 farg0);
f32 HSD_CObjGetFov(void *arg0);
void HSD_CObjSetFov(void *arg0, f32 farg0);
f32 method_getAspect(void *arg0);
f32 fn_800F39E8(void *arg0);
void HSD_CObjSetNear(void *arg0, f32 farg0);
f32 fn_800F3A10(void *arg0);
void HSD_CObjSetFar(void *arg0, f32 farg0);
void HSD_CObjGetScissor(void *arg0, void *arg1);
void HSD_CObjSetScissor(void *arg0, void *arg1);
void HSD_CObjSetScissorx4(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4);
void HSD_CObjGetViewportf(void *arg0, void *arg1);
void HSD_CObjSetViewport(void *arg0, void *arg1);
void HSD_CObjSetViewportf(void *arg0, void *arg1);
void HSD_CObjSetViewportfx4(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
u8 HSD_CObjGetProjectionType(void *arg0);
void HSD_CObjSetPerspective(void *arg0, f32 farg0, f32 farg1);
void HSD_CObjSetFlags(void *arg0, s32 arg1);
void HSD_CObjClearFlags(void *arg0, s32 arg1);
s32 HSD_CObjGetCurrent(void);
s32 fn_800F3BF8(void);
s32 CObjLoad(void *arg0, void *arg1);
void **HSD_CObjLoadDesc(u32 *arg0);
s32 CObjInit(void *arg0);
void CObjRelease(void *arg0);
void fn_800F413C(u32 arg0);
void PObjInfoInit(void);
void HSD_FObjInitAllocData(void);
void HSD_FObjRemove(u32 arg0);
void HSD_FObjRemoveAll(M2C_UNK *arg0, M2C_UNK arg_sp0);
void HSD_FObjReqAnimAll(void *arg0, f32 farg0);

void HSD_CObjSetRoll(void *arg0, f32 farg0) {
    s32 sp24;
    s32 sp20;
    s32 sp6C;
    s32 sp68;
    s32 sp48;
    s32 sp44;
    M2C_UNK sp70;
    f32 sp64;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp40;
    M2C_UNK sp34;
    M2C_UNK sp28;
    f32 sp1C;
    M2C_UNK sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f31;
    f32 var_f4;
    f32 var_f4_2;
    f64 temp_f1;
    f64 temp_f1_2;
    f64 temp_f1_3;
    f64 temp_f1_4;
    f64 temp_f1_5;
    f64 temp_f1_6;
    s32 temp_r3;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;

    if (arg0 != NULL) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_r3 & 1) {
            if ((arg0 == NULL) || ((u32) M2C_FIELD(arg0, u32 *, 0x24) == 0U) || ((u32) M2C_FIELD(arg0, u32 *, 0x28) == 0U)) {
                var_r0 = 0;
            } else {
                if (arg0 == NULL) {
                    __assert(&lbl_80350120, 0x30A, &lbl_80350128);
                }
                HSD_CObjGetEyePositionWObj_800F2A0C(arg0);
                HSD_WObjGetPosition(&sp28);
                if (arg0 == NULL) {
                    __assert(&lbl_80350120, 0x2F2, &lbl_80350128);
                }
                HSD_CObjGetEyePositionWObj(arg0);
                HSD_WObjGetPosition(&sp34);
                PSVECSubtract(&sp34, &sp28, &sp40);
                M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
                if ((fn_800F3978(sp40) == (f32) lbl_80351ED0) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((fn_800F3978(sp44) == (f32) lbl_80351ED0) != 0)) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((fn_800F3978(sp48) == (f32) lbl_80351ED0) != 0))) {
                    var_r0_2 = -1;
                } else {
                    PSVECNormalize(&sp40, &sp40);
                    var_r0_2 = 0;
                }
                var_r0 = var_r0_2 == 0;
            }
            if (var_r0 != 0) {
                if ((f32) (lbl_80351EE8 - (f64) (f32) fabs(sp44)) < (f32) lbl_80351EF0) {
                    var_f4 = (sp44 * sp44) + (sp48 * sp48);
                    if (var_f4 > lbl_80351EA8) {
                        temp_f1 = __frsqrte(var_f4);
                        temp_f1_2 = lbl_80351E98 * temp_f1 * -(((f64) var_f4 * (temp_f1 * temp_f1)) - lbl_80351EF8);
                        temp_f1_3 = lbl_80351E98 * temp_f1_2 * -(((f64) var_f4 * (temp_f1_2 * temp_f1_2)) - lbl_80351EF8);
                        spC = (f32) ((f64) var_f4 * (lbl_80351E98 * temp_f1_3 * -(((f64) var_f4 * (temp_f1_3 * temp_f1_3)) - lbl_80351EF8)));
                        var_f4 = spC;
                    }
                    sp4C = var_f4;
                    temp_f2 = -sp40 / (f32) var_f4;
                    sp50 = sp44 * temp_f2;
                    sp54 = sp48 * temp_f2;
                } else {
                    var_f4_2 = (sp40 * sp40) + (sp48 * sp48);
                    if (var_f4_2 > lbl_80351EA8) {
                        temp_f1_4 = __frsqrte(var_f4_2);
                        temp_f1_5 = lbl_80351E98 * temp_f1_4 * -(((f64) var_f4_2 * (temp_f1_4 * temp_f1_4)) - lbl_80351EF8);
                        temp_f1_6 = lbl_80351E98 * temp_f1_5 * -(((f64) var_f4_2 * (temp_f1_5 * temp_f1_5)) - lbl_80351EF8);
                        sp8 = (f32) ((f64) var_f4_2 * (lbl_80351E98 * temp_f1_6 * -(((f64) var_f4_2 * (temp_f1_6 * temp_f1_6)) - lbl_80351EF8)));
                        var_f4_2 = sp8;
                    }
                    sp50 = var_f4_2;
                    temp_f2_2 = -sp44 / (f32) var_f4_2;
                    sp4C = temp_f2_2;
                    sp4C *= sp40;
                    sp54 = sp48 * temp_f2_2;
                }
                fn_800CC2C4(&sp70, &sp40, -farg0);
                PSMTXMultVecSR(&sp70, &sp4C, &sp58);
                PSVECNormalize(&sp58, &sp64);
            }
            if (arg0 != NULL) {
                if (M2C_FIELD(arg0, s32 *, 8) & 1) {
                    M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
                    if ((fn_800F3978(sp64) == (f32) lbl_80351ED0) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((fn_800F3978(sp68) == (f32) lbl_80351ED0) != 0)) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((fn_800F3978(sp6C) == (f32) lbl_80351ED0) != 0))) {
                        var_r0_3 = -1;
                    } else {
                        PSVECNormalize(&sp64, &sp1C);
                        var_r0_3 = 0;
                    }
                    if (var_r0_3 != 0) {
                        OSReport(&lbl_802A93B8);
                        __assert(&lbl_80350120, 0x3D6, &lbl_80350130);
                    }
                    if ((M2C_FIELD(arg0, f32 *, 0x2C) != sp1C) || (M2C_FIELD(arg0, f32 *, 0x30) != sp20) || (M2C_FIELD(arg0, f32 *, 0x34) != sp24)) {
                        M2C_FIELD(arg0, f32 *, 0x2C) = sp1C;
                        M2C_FIELD(arg0, f32 *, 0x30) = sp20;
                        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 0xC0000000);
                        M2C_FIELD(arg0, f32 *, 0x34) = sp24;
                    }
                } else {
                    temp_f31 = fn_800F2BFC(arg0, &sp64);
                    if (arg0 != NULL) {
                        if (M2C_FIELD(arg0, s32 *, 8) & 1) {
                            fn_800F2DE4(arg0, &sp10);
                            fn_800F3130(arg0, &sp10);
                            return;
                        }
                        if (M2C_FIELD(arg0, f32 *, 0x2C) != temp_f31) {
                            HSD_CObjSetMtxDirty(arg0);
                        }
                        M2C_FIELD(arg0, f32 *, 0x2C) = temp_f31;
                    }
                }
            }
        } else {
            if (M2C_FIELD(arg0, f32 *, 0x2C) != farg0) {
                M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r3 | 0xC0000000);
            }
            M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
        }
    }
}

f32 fn_800F3978(f32 farg0) {
    return fabs(farg0);
}

f32 HSD_CObjGetFov(void *arg0) {
    if ((arg0 == NULL) || ((u8) M2C_FIELD(arg0, u8 *, 0x50) != 1)) {
        return lbl_80351EA8;
    }
    return M2C_FIELD(arg0, f32 *, 0x40);
}

void HSD_CObjSetFov(void *arg0, f32 farg0) {
    if (arg0 != NULL) {
        if ((u8) M2C_FIELD(arg0, u8 *, 0x50) != 1) {
            return;
        }
        M2C_FIELD(arg0, f32 *, 0x40) = farg0;
    }
}

f32 method_getAspect(void *arg0) {
    if ((arg0 == NULL) || ((u8) M2C_FIELD(arg0, u8 *, 0x50) != 1)) {
        return lbl_80351EA8;
    }
    return M2C_FIELD(arg0, f32 *, 0x44);
}

f32 fn_800F39E8(void *arg0) {
    if (arg0 == NULL) {
        return lbl_80351EA8;
    }
    return M2C_FIELD(arg0, f32 *, 0x38);
}

void HSD_CObjSetNear(void *arg0, f32 farg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x38) = farg0;
    }
}

f32 fn_800F3A10(void *arg0) {
    if (arg0 == NULL) {
        return lbl_80351EA8;
    }
    return M2C_FIELD(arg0, f32 *, 0x3C);
}

void HSD_CObjSetFar(void *arg0, f32 farg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x3C) = farg0;
    }
}

void HSD_CObjGetScissor(void *arg0, void *arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
        M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    }
}

void HSD_CObjSetScissor(void *arg0, void *arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0);
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 4);
    }
}

void HSD_CObjSetScissorx4(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s16 *, 0x1C) = arg1;
        M2C_FIELD(arg0, s16 *, 0x1E) = arg2;
        M2C_FIELD(arg0, s16 *, 0x20) = arg3;
        M2C_FIELD(arg0, s16 *, 0x22) = arg4;
    }
}

void HSD_CObjGetViewportf(void *arg0, void *arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
        M2C_FIELD(arg1, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
        M2C_FIELD(arg1, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    }
}

void HSD_CObjSetViewport(void *arg0, void *arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, s16 *, 0);
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, s16 *, 2);
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, s16 *, 4);
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, s16 *, 6);
    }
}

void HSD_CObjSetViewportf(void *arg0, void *arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0);
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 8);
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    }
}

void HSD_CObjSetViewportfx4(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0xC) = farg0;
        M2C_FIELD(arg0, f32 *, 0x10) = farg1;
        M2C_FIELD(arg0, f32 *, 0x14) = farg2;
        M2C_FIELD(arg0, f32 *, 0x18) = farg3;
    }
}

u8 HSD_CObjGetProjectionType(void *arg0) {
    if (arg0 == NULL) {
        return 1U;
    }
    return M2C_FIELD(arg0, u8 *, 0x50);
}

void HSD_CObjSetPerspective(void *arg0, f32 farg0, f32 farg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0x50) = 1;
        M2C_FIELD(arg0, f32 *, 0x40) = farg0;
        M2C_FIELD(arg0, f32 *, 0x44) = farg1;
    }
}

void HSD_CObjSetFlags(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | arg1);
    }
}

void HSD_CObjClearFlags(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & ~arg1);
    }
}

s32 HSD_CObjGetCurrent(void) {
    return lbl_80350C4C;
}

s32 fn_800F3BF8(void) {
    M2C_UNK *var_r3;
    s32 temp_r3;

    var_r3 = lbl_80350C48;
    var_r3 = var_r3 != NULL ? var_r3 : &lbl_802A92C8;
    temp_r3 = hsdNew(var_r3);
    if (temp_r3 == 0) {
        __assert(&lbl_80350120, 0x796, &lbl_80350128);
    }
    return temp_r3;
}

s32 CObjLoad(void *arg0, void *arg1) {
    u16 temp_r0;

    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, u16 *, 4);
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) ((M2C_FIELD(arg1, u16 *, 4) & ~0xC0000000) | (M2C_FIELD(arg0, s32 *, 8) & 0xC0000000));
    }
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, s16 *, 8);
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, s16 *, 0xA);
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, s16 *, 0xC);
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, s16 *, 0xE);
    }
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    }
    HSD_WObjInit(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg1, s32 *, 0x18));
    HSD_WObjInit(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg1, s32 *, 0x1C));
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg1, f32 *, 0x28);
    }
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg1, f32 *, 0x2C);
    }
    if (M2C_FIELD(arg1, u16 *, 4) & 1) {
        if ((u32) M2C_FIELD(arg1, u32 *, 0x24) != 0U) {
            fn_800F3130((void *)(arg0), (long *)(0));
        } else {
            fn_800F3130(arg0, &lbl_802A93F0);
        }
    } else {
        HSD_CObjSetRoll(arg0, M2C_FIELD(arg1, f32 *, 0x20));
    }
    temp_r0 = M2C_FIELD(arg1, u16 *, 6);
    switch ((s32) temp_r0) {                        /* irregular */
    case 1:
        if (arg0 != NULL) {
            M2C_FIELD(arg0, s8 *, 0x50) = 1;
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg1, f32 *, 0x30);
            M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg1, f32 *, 0x34);
        }
        break;
    case 3:
        if (arg0 != NULL) {
            M2C_FIELD(arg0, s8 *, 0x50) = 3;
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg1, f32 *, 0x30);
            M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg1, f32 *, 0x34);
            M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(arg1, f32 *, 0x38);
            M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(arg1, f32 *, 0x3C);
        }
        break;
    case 2:
        if (arg0 != NULL) {
            M2C_FIELD(arg0, s8 *, 0x50) = 2;
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg1, f32 *, 0x30);
            M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg1, f32 *, 0x34);
            M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(arg1, f32 *, 0x38);
            M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(arg1, f32 *, 0x3C);
        }
        break;
    default:
        __assert(&lbl_80350120, 0x7C4, &lbl_80350130);
        break;
    }
    return 0;
}

void **HSD_CObjLoadDesc(u32 *arg0) {
    M2C_UNK *var_r3;
    void **var_r31;
    void *temp_r5;

    if (arg0 != NULL) {
        if (((u32) *arg0 == 0U) || (hsdSearchClassInfo() == 0U)) {
            var_r3 = lbl_80350C48;
            if (var_r3 != NULL) {

            } else {
                var_r3 = &lbl_802A92C8;
            }
            /* draft: did not compile: var_r31 = hsdNew(var_r3); */
            if (var_r31 == NULL) {
                __assert(&lbl_80350120, 0x796, &lbl_80350128);
            }
        } else {
            /* draft: did not compile: var_r31 = hsdNew(); */
            if (var_r31 == NULL) {
                __assert(&lbl_80350120, 0x7EB, &lbl_80350128);
            }
        }
        temp_r5 = *var_r31;
        M2C_FIELD(temp_r5, M2C_UNK (**)(void **, u32 *, void *), 0x3C)(var_r31, arg0, temp_r5);
        return var_r31;
    }
    return NULL;
}

#pragma push
#pragma peephole off
s32 CObjInit(void *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(&lbl_802A92C8, void **, 0x14), s32 (**)(void *), 0x2C)(M2C_FIELD(&lbl_802A92C8, void **, 0x14));
    if (temp_r3 < 0) {
        return temp_r3;
    }
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 0xC0000000);
    }
    M2C_FIELD(arg0, s32 *, 0x24) = HSD_WObjAlloc();
    M2C_FIELD(arg0, s32 *, 0x28) = HSD_WObjAlloc();
    return 0;
}
#pragma pop

void CObjRelease(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    u16 temp_r4;
    u16 temp_r4_4;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_5;
    void *temp_r4_6;

    HSD_AObjRemove(M2C_FIELD(arg0, s32 *, 0x84));
    if (arg0 == NULL) {
        __assert(&lbl_80350120, 0x2DA, &lbl_80350128);
    }
    temp_r30 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_r30 != NULL) {
        temp_r4 = M2C_FIELD(temp_r30, u16 *, 4);
        var_r0 = temp_r4 == 0xFFFF;
        if (var_r0 != 0) {

        } else {
            M2C_FIELD(temp_r30, u16 *, 4) = (u16) (temp_r4 - 1);
            var_r0 = temp_r4 == 0;
        }
        if ((var_r0 != 0) && (temp_r30 != NULL)) {
            temp_r4_2 = M2C_FIELD(temp_r30, void **, 0);
            M2C_FIELD(temp_r4_2, M2C_UNK (**)(void *, void *), 0x30)(temp_r30, temp_r4_2);
            temp_r4_3 = M2C_FIELD(temp_r30, void **, 0);
            M2C_FIELD(temp_r4_3, M2C_UNK (**)(void *, void *), 0x34)(temp_r30, temp_r4_3);
        }
    }
    if (arg0 == NULL) {
        __assert(&lbl_80350120, 0x2C2, &lbl_80350128);
    }
    temp_r30_2 = M2C_FIELD(arg0, void **, 0x28);
    if (temp_r30_2 != NULL) {
        temp_r4_4 = M2C_FIELD(temp_r30_2, u16 *, 4);
        var_r0_2 = temp_r4_4 == 0xFFFF;
        if (var_r0_2 != 0) {

        } else {
            M2C_FIELD(temp_r30_2, u16 *, 4) = (u16) (temp_r4_4 - 1);
            var_r0_2 = temp_r4_4 == 0;
        }
        if ((var_r0_2 != 0) && (temp_r30_2 != NULL)) {
            temp_r4_5 = M2C_FIELD(temp_r30_2, void **, 0);
            M2C_FIELD(temp_r4_5, M2C_UNK (**)(void *, void *), 0x30)(temp_r30_2, temp_r4_5);
            temp_r4_6 = M2C_FIELD(temp_r30_2, void **, 0);
            M2C_FIELD(temp_r4_6, M2C_UNK (**)(void *, void *), 0x34)(temp_r30_2, temp_r4_6);
        }
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
        HSD_MtxFree();
    }
    M2C_FIELD(M2C_FIELD(&lbl_802A92C8, void **, 0x14), M2C_UNK (**)(void *, void *), 0x30)(arg0, M2C_FIELD(&lbl_802A92C8, void **, 0x14));
}

void fn_800F413C(u32 arg0) {
    if (arg0 == (u32) lbl_80350C48) {
        lbl_80350C48 = 0U;
    }
    if (0 /* draft: did not compile */) {
        lbl_80350C4C = 0;
    }
    M2C_FIELD(M2C_FIELD(&lbl_802A92C8, void **, 0x14), M2C_UNK (**)(void *), 0x38)(M2C_FIELD(&lbl_802A92C8, void **, 0x14));
}

void PObjInfoInit(void) {
    hsdInitClassInfo(&lbl_802A92C8, &lbl_802AA3D0, &lbl_802A92C8 + 0x134, &lbl_802A92C8 + 0x14C, 0x44, 0x8C);
    M2C_FIELD(&lbl_802A92C8, M2C_UNK (**)(), 0x2C) = CObjInit;
    /* draft: did not compile: M2C_FIELD(&lbl_802A92C8, M2C_UNK (**)(), 0x30) = CObjRelease; */
    /* draft: did not compile: M2C_FIELD(&lbl_802A92C8, M2C_UNK (**)(), 0x38) = fn_800F413C; */
    M2C_FIELD(&lbl_802A92C8, M2C_UNK **, 0x40) = &CObjUpdateFunc;
    M2C_FIELD(&lbl_802A92C8, M2C_UNK (**)(), 0x3C) = CObjLoad;
}

void HSD_FObjInitAllocData(void) {
    HSD_ObjAllocInit(&lbl_8031D290, 0x30, 4);
}

void HSD_FObjRemove(u32 arg0) {
    if (arg0 != 0U) {
        HSD_ZListFree();
    }
}

void HSD_FObjRemoveAll(M2C_UNK *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void HSD_FObjReqAnimAll(void *arg0, f32 farg0) {
    s32 temp_cr0_eq;
    void *var_r3;

    var_r3 = arg0;
    if (var_r3 != NULL) {
loop_6:
        if (var_r3 != NULL) {
            temp_cr0_eq = var_r3 == NULL;
            if (temp_cr0_eq == 0) {
                M2C_FIELD(var_r3, s32 *, 4) = (s32) M2C_FIELD(var_r3, s32 *, 8);
                M2C_FIELD(var_r3, f32 *, 0x1C) = (f32) ((f32) M2C_FIELD(var_r3, s16 *, 0x18) + farg0);
                M2C_FIELD(var_r3, s8 *, 0x11) = 0;
                M2C_FIELD(var_r3, s8 *, 0x12) = 0;
                M2C_FIELD(var_r3, u8 *, 0x10) = (u8) (M2C_FIELD(var_r3, u8 *, 0x10) & 0xFFFFFFBF);
                M2C_FIELD(var_r3, s16 *, 0x16) = 0;
                M2C_FIELD(var_r3, s16 *, 0x1A) = 0;
                M2C_FIELD(var_r3, f32 *, 0x20) = (f32) lbl_80351F00;
                M2C_FIELD(var_r3, f32 *, 0x24) = (f32) lbl_80351F00;
                M2C_FIELD(var_r3, f32 *, 0x28) = (f32) lbl_80351F00;
                M2C_FIELD(var_r3, f32 *, 0x2C) = (f32) lbl_80351F00;
                if (temp_cr0_eq == 0) {
                    M2C_FIELD(var_r3, u8 *, 0x10) = (u8) ((M2C_FIELD(var_r3, u8 *, 0x10) & 0xF0) | 1);
                }
            }
            var_r3 = M2C_FIELD(var_r3, void **, 0);
            goto loop_6;
        }
    }
}
