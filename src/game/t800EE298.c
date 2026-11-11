/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern s32 lbl_80350C34;
extern s32 lbl_80350C40;
extern s32 lbl_80350C38;
extern s32 lbl_80350C30;
s32 HSD_LightID2Index();
extern M2C_UNK lbl_8031D268;
M2C_UNK HSD_AObjInterpretAnim(s32, void *, s32);
M2C_UNK HSD_AObjGetFlags(void *);
M2C_UNK HSD_LObjGetInterestWObj(void *);
M2C_UNK HSD_WObjInterpretAnim();
M2C_UNK HSD_AObjReqAnim(s32);
M2C_UNK HSD_WObjReqAnim(f32);
M2C_UNK PSVECSubtract();
M2C_UNK PSVECNormalize(void *, void *);
M2C_UNK HSD_LObjGetPosition(s32 *);
M2C_UNK HSD_LObjGetInterest(s32, s32 *);
extern M2C_UNK lbl_801DA898;
extern M2C_UNK lbl_801DA8A4;
extern f32 lbl_80351E70;
extern f32 lbl_80351E74;
extern f64 lbl_80351E80;
M2C_UNK GXInitLightAttn();
M2C_UNK GXInitLightColor();
M2C_UNK GXLoadLightObjImm();
extern f32 lbl_80351E88;
M2C_UNK PSVECAdd();
M2C_UNK fn_800E2A18();
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_803500F0;
extern M2C_UNK lbl_803500F8;
extern f32 lbl_80351E8C;

void HSD_ForeachAnim();
void HSD_AObjSetRate(void *arg0, f32 farg0);
void HSD_AObjSetRewindFrame(void *arg0, f32 farg0);
void HSD_AObjSetEndFrame(void *arg0, f32 farg0);
s32 HSD_LObjGetLightMaskDiffuse(void);
s32 fn_800EEF54(void);
s32 fn_800EEF5C(void);
s32 fn_800EEF64(void);
s32 HSD_LObjGetActiveByID(void);
s32 HSD_LObjGetActiveByIndex(s32 arg0);
void LObjUpdateFunc();
void HSD_LObjAnim(void *arg0);
void HSD_LObjReqAnim(void *arg0, f32 farg0);
void HSD_LObjGetLightVector(s32 arg0, void *arg1);
void HSD_LObjSetup(void *arg0, void *arg1, f32 farg0);
void HSD_LObjSetupSpecularInit(void *arg0);

void HSD_ForeachAnim() { } /* draft: stub */

void HSD_AObjSetRate(void *arg0, f32 farg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x10) = farg0;
    }
}

void HSD_AObjSetRewindFrame(void *arg0, f32 farg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 8) = farg0;
    }
}

void HSD_AObjSetEndFrame(void *arg0, f32 farg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    }
}

s32 HSD_LObjGetLightMaskDiffuse(void) {
    return lbl_80350C34;
}

s32 fn_800EEF54(void) {
    return lbl_80350C40;
}

s32 fn_800EEF5C(void) {
    return lbl_80350C38;
}

s32 fn_800EEF64(void) {
    return lbl_80350C30;
}

s32 HSD_LObjGetActiveByID(void) {
    s32 temp_r3;

    temp_r3 = HSD_LightID2Index();
    if ((temp_r3 >= 0) && (temp_r3 < 9)) {
        return *(&lbl_8031D268 + (temp_r3 * 4));
    }
    return 0;
}

s32 HSD_LObjGetActiveByIndex(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 8)) {
        return *(&lbl_8031D268 + (arg0 * 4));
    }
    return 0;
}

void LObjUpdateFunc() { } /* draft: stub */

void HSD_LObjAnim(void *arg0) {
    if (arg0 != NULL) {
        HSD_AObjInterpretAnim(M2C_FIELD(arg0, s32 *, 0x48), arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x40));
        HSD_AObjGetFlags(arg0);
        HSD_WObjInterpretAnim();
        HSD_LObjGetInterestWObj(arg0);
        HSD_WObjInterpretAnim();
    }
}

void HSD_LObjReqAnim(void *arg0, f32 farg0) {
    if (arg0 != NULL) {
        HSD_AObjReqAnim(M2C_FIELD(arg0, s32 *, 0x48));
        HSD_AObjGetFlags(arg0);
        HSD_WObjReqAnim(farg0);
        HSD_LObjGetInterestWObj(arg0);
        HSD_WObjReqAnim(farg0);
    }
}

void HSD_LObjGetLightVector(s32 arg0, void *arg1) {
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_cr0_eq;
    s32 var_r0;

    sp18 = M2C_FIELD(&lbl_801DA898, s32 *, 4);
    sp1C = M2C_FIELD(&lbl_801DA898, s32 *, 8);
    sp14 = M2C_FIELD(&lbl_801DA898, s32 *, 0);
    sp8 = M2C_FIELD(&lbl_801DA8A4, s32 *, 0);
    spC = M2C_FIELD(&lbl_801DA8A4, s32 *, 4);
    sp10 = M2C_FIELD(&lbl_801DA8A4, s32 *, 8);
    if (arg0 != 0) {
        HSD_LObjGetPosition(&sp14);
        HSD_LObjGetInterest(arg0, &sp8);
        PSVECSubtract(&sp8, &sp14, arg1);
        temp_cr0_eq = arg1 == NULL;
        if ((temp_cr0_eq != 0) || (temp_cr0_eq != 0)) {
            var_r0 = -1;
        } else {
            if ((fabs(M2C_FIELD(arg1, f32 *, 0)) <= lbl_80351E80) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((fabs(M2C_FIELD(arg1, f32 *, 4)) == lbl_80351E80) != 0)) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((fabs(M2C_FIELD(arg1, f32 *, 8)) == lbl_80351E80) != 0))) {
                var_r0 = -1;
            } else {
                PSVECNormalize(arg1, arg1);
                var_r0 = 0;
            }
        }
        if (var_r0 != 0) {
            M2C_FIELD(arg1, f32 *, 0) = (f32) lbl_80351E70;
            M2C_FIELD(arg1, f32 *, 4) = (f32) lbl_80351E70;
            M2C_FIELD(arg1, f32 *, 8) = (f32) lbl_80351E74;
        }
    }
}

void HSD_LObjSetup(void *arg0, void *arg1, f32 farg0) { } /* draft: stub */

void HSD_LObjSetupSpecularInit(void *arg0) {
    s32 sp10;
    s32 spC;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    s32 temp_cr0_eq;
    s32 temp_r0;
    s32 temp_r30;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r28;
    void **var_r29;
    void *var_r31;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0xC);
    sp20 = temp_f1;
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x1C);
    temp_cr0_eq = fabs(temp_f1) == (f32) lbl_80351E80;
    sp24 = temp_f2;
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x2C);
    sp28 = temp_f1_2;
    M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
    if ((temp_cr0_eq != 0) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((fabs(temp_f2) == (f32) lbl_80351E80) != 0)) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((fabs(temp_f1_2) == (f32) lbl_80351E80) != 0))) {
        var_r0 = -1;
    } else {
        PSVECNormalize(&sp20, &sp2C);
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        sp2C = lbl_80351E70;
        sp30 = lbl_80351E70;
        sp34 = lbl_80351E8C;
    }
    temp_r30 = lbl_80350C30;
    /* draft: did not compile: var_r29 = &lbl_8031D268; */
    var_r28 = 0;
loop_35:
    if (var_r28 < temp_r30) {
        if ((var_r28 >= 0) && (var_r28 < 8)) {
            var_r31 = *var_r29;
        } else {
            var_r31 = NULL;
        }
        if ((s32) M2C_FIELD(var_r31, s32 *, 0x90) != 0) {
            temp_r0 = M2C_FIELD(var_r31, u16 *, 8) & 3;
            if (temp_r0 != 1) {
                if ((temp_r0 >= 1) && (temp_r0 < 4)) {
                    /* draft: did not compile: PSVECSubtract(&sp20, var_r31 + 0x3C, &sp8); */
                    M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
                    if ((fabs(sp8) == (f32) lbl_80351E80) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((fabs(spC) == (f32) lbl_80351E80) != 0)) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((fabs(sp10) == (f32) lbl_80351E80) != 0))) {
                        var_r0_2 = -1;
                    } else {
                        PSVECNormalize(&sp8, &sp8);
                        var_r0_2 = 0;
                    }
                    if (var_r0_2 == 0) {
                        PSVECAdd(&sp8, &sp2C, &sp14);
                        goto block_26;
                    }
                    sp14 = lbl_80351E70;
                    sp18 = lbl_80351E70;
                    sp1C = lbl_80351E74;
                } else {
                    __assert(&lbl_803500F0, 0x27A, &lbl_803500F8);
                    goto block_26;
                }
            } else {
                /* draft: did not compile: PSVECAdd(var_r31 + 0x3C, &sp2C, &sp14); */
block_26:
                M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
                if ((fabs(sp14) == (f32) lbl_80351E80) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((fabs(sp18) == (f32) lbl_80351E80) != 0)) && (M2C_ERROR(/* unknown instruction: cror eq, lt, eq */), ((fabs(sp1C) == (f32) lbl_80351E80) != 0))) {
                    var_r0_3 = -1;
                } else {
                    PSVECNormalize(&sp14, &sp14);
                    var_r0_3 = 0;
                }
                if (var_r0_3 != 0) {
                    sp14 = lbl_80351E70;
                    sp18 = lbl_80351E70;
                    sp1C = lbl_80351E74;
                }
            }
            /* draft: did not compile: fn_800E2A18(var_r31 + 0x94, sp14, sp18, sp1C); */
            M2C_FIELD(var_r31, u16 *, 8) = (u16) (M2C_FIELD(var_r31, u16 *, 8) | 0x100);
        }
        var_r29 += 4;
        var_r28 += 1;
        goto loop_35;
    }
}
