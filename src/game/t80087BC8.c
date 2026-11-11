/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_8008065C();
M2C_UNK DisableAllSfxGroup(s32);
extern u8 lbl_80350489;
M2C_UNK StackSfxGroup();
M2C_UNK fn_80080738();
M2C_UNK ModifyPrologicMode(s32);
s32 *fn_800A71F8(s32, M2C_UNK);
void *get_up_vector_for_viewing_mtx(M2C_UNK);
void *fn_80016698();
s32 fn_800A6F74(s32);
M2C_UNK method_setInterest(f32 *);
f32 fn_80080764(s32);
void *fn_80089738(s32, f32, f32);
void *fn_800896C0();
M2C_UNK HSD_CObjSetFov(s32, f32);
extern f32 lbl_80351A10;
extern f64 lbl_80351A18;
M2C_UNK fn_80080698(s32, f32);
f64 HSD_CObjGetFov(s32);
extern f64 lbl_80351A20;
M2C_UNK method_getAspect(s32);
M2C_UNK method_setCameraGoal(f32 *, f32 *);
M2C_UNK method_setCameraGoalRel(f32 *, f32 *);
M2C_UNK fn_80017814(s32, s32);
s32 __cvt_fp2unsigned(f32);
M2C_UNK method_setCameraGoalDistance(f32);
M2C_UNK method_beginCreatePath(M2C_UNK);
M2C_UNK method_addPathPoint(f32 *);
M2C_UNK method_endCreatePath(f32, f32, f32);
M2C_UNK method_setPath(s32);
M2C_UNK method_resetPath();
s32 method_getPath();
M2C_UNK fn_80018140(s32);
M2C_UNK fn_80017D3C(s32, M2C_UNK, M2C_UNK, f32);
s32 fn_8007FC40();
extern f32 lbl_80351A30;
M2C_UNK fn_80016FC8();

s32 scr_DisableAllSfxGroup(void *arg0);
s32 scr_IsSfxGroupStacked(void);
s32 scr_PrintARAMlist(void);
s32 scr_StackSfxGroup(s32 arg0);
s32 scr_ModifyPrologicMode(s32 arg0);
s32 scr_GetCamera(void *arg0);
s32 scr_CreateCamera(void *arg0);
s32 scr_method_setInterest(s32 arg0);
s32 hsdFreeMemPiece_80087E6C(s32 arg0, u8 arg1);
void scr_method_setFovDeg(void);
void scr_method_setFovRad(void);
s32 fn_80087F40(s32 arg0, u8 arg1);
void scr_method_getFovDeg(void);
void scr_method_getFovRad(void);
s32 scr_method_getAspect(s32 arg0);
s32 scr_method_setCameraGoal(s32 arg0);
s32 scr_method_setCameraGoalRel(s32 arg0);
s32 scr_method_setCameraGoalObject(s32 arg0);
s32 scr_method_setCameraGoalDistance(s32 arg0);
s32 scr_method_beginCreatePath(s32 arg0);
s32 scr_method_addPathPoint(s32 arg0);
s32 scr_method_endCreatePath(s32 arg0);
s32 scr_method_setPath(s32 arg0);
s32 scr_method_resetPath(s32 arg0);
s32 scr_method_getPath(s32 arg0);
s32 scr_method_setCameraMode(s32 arg0);
s32 scr_method_getCameraMode(s32 arg0);
s32 scr_method_doesHavePath(s32 arg0);
s32 scr_method_setRailMode(s32 arg0);
s32 scr_method_pauseRailMode(s32 arg0);
s32 scr_method_getInterestX(s32 arg0);
s32 scr_method_getInterestY(s32 arg0);

s32 scr_DisableAllSfxGroup(void *arg0) {
    DisableAllSfxGroup(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), s32 *, 0x38));
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_IsSfxGroupStacked(void) {
    fn_8008065C((u8) (lbl_80350489 == 0));
    return 0;
}

s32 scr_PrintARAMlist(void) {
    fn_8008065C(0);
    return 0;
}

s32 scr_StackSfxGroup(s32 arg0) {
    fn_80080738();
    StackSfxGroup();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_ModifyPrologicMode(s32 arg0) {
    ModifyPrologicMode(fn_80080738() != 0);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_GetCamera(void *arg0) {
    fn_8008065C(arg0, *fn_800A71F8(M2C_FIELD(arg0, s32 *, 0x2E0), 1));
    return 0;
}

s32 scr_CreateCamera(void *arg0) {
    s32 temp_r31;
    void *var_r4;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x2E0);
    var_r4 = get_up_vector_for_viewing_mtx(0x1F8);
    if (var_r4 != NULL) {
        var_r4 = fn_80016698();
    }
    M2C_FIELD(var_r4, s32 *, 0x5C) = 1;
    fn_8008065C(arg0, fn_800A6F74(temp_r31));
    return 0;
}

s32 scr_method_setInterest(s32 arg0) {
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f30;
    f32 temp_f31;
    s32 temp_r4;
    void *temp_r3;

    temp_f31 = fn_80080764(arg0);
    sp8 = fn_80080764(arg0);
    temp_f30 = fn_80080764((long)(0));
    spC = temp_f31;
    sp10 = temp_f30;
    sp18 = spC;
    sp1C = sp10;
    temp_r3 = fn_80089738(arg0, spC, sp8);
    sp14 = sp8;
    temp_r4 = M2C_FIELD(temp_r3, s32 *, 8);
    if (temp_r4 & 0x100) {
        method_setInterest(&sp14);
    } else if (temp_r4 & 0x200) {
        M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(f32 *), 0x44)(&sp14);
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 hsdFreeMemPiece_80087E6C(s32 arg0, u8 arg1) {
    f32 var_f31;
    void *temp_r3;

    var_f31 = fn_80080764((long)(0));
    temp_r3 = fn_800896C0(arg0);
    if (arg1 == 0) {
        var_f31 = (f32) ((f64) (lbl_80351A10 * var_f31) / lbl_80351A18);
    }
    HSD_CObjSetFov(M2C_FIELD(temp_r3, s32 *, 0x60), var_f31);
    fn_8008065C(arg0, 0);
    return 0;
}

void scr_method_setFovDeg(void) {
    hsdFreeMemPiece_80087E6C((long)(1), (unsigned char)(0));
}

void scr_method_setFovRad(void) {
    hsdFreeMemPiece_80087E6C((long)(0), (unsigned char)(0));
}

s32 fn_80087F40(s32 arg0, u8 arg1) {
    f64 var_f1;

    var_f1 = HSD_CObjGetFov(M2C_FIELD(fn_800896C0(), s32 *, 0x60));
    if (arg1 == 0) {
        var_f1 = (f64) ((lbl_80351A18 * var_f1) / lbl_80351A20);
    }
    fn_80080698(arg0, (f32) var_f1);
    return 0;
}

void scr_method_getFovDeg(void) {
    fn_80087F40((long)(1), (unsigned char)(0));
}

void scr_method_getFovRad(void) {
    fn_80087F40((long)(0), (unsigned char)(0));
}

s32 scr_method_getAspect(s32 arg0) {
    method_getAspect(M2C_FIELD(fn_800896C0(), s32 *, 0x60));
    fn_80080698((long)(arg0), (float)(0));
    return 0;
}

s32 scr_method_setCameraGoal(s32 arg0) {
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
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f31;
    f32 temp_f31_2;

    temp_f31 = fn_80080764((long)(0));
    temp_f30 = fn_80080764(arg0);
    sp14 = fn_80080764(arg0);
    sp18 = temp_f30;
    sp1C = temp_f31;
    sp2C = sp14;
    sp30 = sp18;
    sp34 = sp1C;
    temp_f30_2 = fn_80080764((long)(arg0));
    temp_f31_2 = fn_80080764(arg0);
    sp8 = fn_80080764(arg0);
    spC = temp_f31_2;
    sp10 = temp_f30_2;
    sp20 = sp8;
    sp24 = spC;
    sp28 = sp10;
    fn_800896C0(arg0, spC, sp8);
    method_setCameraGoal(&sp20, &sp2C);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setCameraGoalRel(s32 arg0) {
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
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f31;
    f32 temp_f31_2;

    temp_f31 = fn_80080764((long)(0));
    temp_f30 = fn_80080764(arg0);
    sp14 = fn_80080764(arg0);
    sp18 = temp_f30;
    sp1C = temp_f31;
    sp2C = sp14;
    sp30 = sp18;
    sp34 = sp1C;
    temp_f30_2 = fn_80080764((long)(arg0));
    temp_f31_2 = fn_80080764(arg0);
    sp8 = fn_80080764(arg0);
    spC = temp_f31_2;
    sp10 = temp_f30_2;
    sp20 = sp8;
    sp24 = spC;
    sp28 = sp10;
    fn_800896C0(arg0, spC, sp8);
    method_setCameraGoalRel(&sp20, &sp2C);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setCameraGoalObject(s32 arg0) {
    f32 temp_f31;
    s32 temp_r31;

    temp_f31 = (f32) fn_80080738();
    /* draft: did not compile: temp_r31 = fn_800896C0(arg0); */
    fn_8008065C(arg0, 0);
    fn_80017814(temp_r31, __cvt_fp2unsigned(temp_f31));
    return 0;
}

s32 scr_method_setCameraGoalDistance(s32 arg0) {
    f32 temp_f31;

    temp_f31 = (f32) fn_80080738();
    fn_800896C0(arg0);
    method_setCameraGoalDistance(temp_f31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_beginCreatePath(s32 arg0) {
    fn_800896C0();
    method_beginCreatePath(0);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_addPathPoint(s32 arg0) {
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f30;
    f32 temp_f31;

    temp_f31 = fn_80080764(arg0);
    sp8 = fn_80080764(arg0);
    temp_f30 = fn_80080764((long)(0));
    spC = temp_f31;
    sp10 = temp_f30;
    sp18 = spC;
    sp1C = sp10;
    fn_800896C0(arg0, (s32)spC, (u16)sp8);
    sp14 = sp8;
    method_addPathPoint(&sp14);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_endCreatePath(s32 arg0) {
    f32 temp_f31;
    f32 temp_f30;
    s32 temp_r31;

    temp_r31 = fn_80080738();
    temp_f31 = fn_80080764(arg0);
    temp_f30 = fn_80080764(arg0);
    fn_800896C0(arg0);
    method_endCreatePath(temp_f30, temp_f31, (f32) temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setPath(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_800896C0(arg0);
    method_setPath(temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_resetPath(s32 arg0) {
    fn_800896C0();
    method_resetPath();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getPath(s32 arg0) {
    fn_800896C0();
    fn_8008065C(arg0, method_getPath());
    return 0;
}

s32 scr_method_setCameraMode(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_800896C0(arg0);
    fn_80018140(temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getCameraMode(s32 arg0) {
    fn_8008065C(arg0, M2C_FIELD(fn_800896C0(), s32 *, 0x190));
    return 0;
}

s32 scr_method_doesHavePath(s32 arg0) {
    fn_8008065C(arg0, M2C_FIELD(fn_800896C0(), s32 *, 0x194) != 0);
    return 0;
}

s32 scr_method_setRailMode(s32 arg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 var_r30;

    var_r30 = 0;
    switch (fn_8007FC40()) {
    case 3:
            var_r30 = fn_80080738(arg0);
        break;
    }
    temp_r31 = fn_80080738(arg0);
    /* draft: did not compile: temp_r31_2 = fn_800896C0(arg0); */
    fn_80018140(temp_r31 != 0);
    if (var_r30 != 0) {
        fn_80017D3C(temp_r31_2, 0x0819E010, 0, lbl_80351A30);
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_pauseRailMode(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_800896C0(arg0);
    fn_80018140(temp_r31 == 0);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getInterestX(s32 arg0) {
    f32 sp8;

    fn_800896C0();
    fn_80016FC8(&sp8);
    fn_80080698(arg0, sp8);
    return 0;
}

s32 scr_method_getInterestY(s32 arg0) {
    u32 spC;
    M2C_UNK sp8;

    fn_800896C0();
    fn_80016FC8(&sp8);
    fn_80080698(arg0, spC);
    return 0;
}
