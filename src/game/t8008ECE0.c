/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 method_getSerialNo(s32 *);
M2C_UNK fn_8008065C(s32, s32);
M2C_UNK fn_80080738();
M2C_UNK fn_8008085C(M2C_UNK, s32);
s32 method_setAttr(s32);
s32 method_setAttrAsync(s32);
s32 method_getResultCode();
s32 method_getResultCodeEx();
M2C_UNK CardScheduleExec();
extern s32 lbl_8035055C;
extern void *lbl_80350564;
extern s32 lbl_80350560;
M2C_UNK DCFlushRange(s32, M2C_UNK);
s32 fn_80037E3C(s32, s32, s32, M2C_UNK);
M2C_UNK fn_800278E0(void *, u16, u16, M2C_UNK);
M2C_UNK fn_800279B8(void *);
M2C_UNK fn_80027E2C(void *, void *);
M2C_UNK fn_8014A474();
extern void *lbl_80350554;
s32 fn_80037ED0(s32, s32, M2C_UNK);
void *get_up_vector_for_viewing_mtx(M2C_UNK);
M2C_UNK ReadBmp(void *, s32);
s32 fn_80080790(s32);
extern void *lbl_80350568;
void *fn_80089738();
f32 fn_80080764();
M2C_UNK fn_80080698(s32, f32);
s32 method_requestMotion(s32);
M2C_UNK fn_800913C0(s32);
s32 method_requestNextMotion(s32);
s32 method_requestMotionUrgently(s32, f32);
extern f32 lbl_80351A78;
u8 method_isMotionStarted(s32);
u8 method_isMotionCompleted(s32, M2C_UNK);
M2C_UNK method_resetMotion();
M2C_UNK method_setRotateRel(f32 *);
u8 method_isNoMoreMotion();
u8 method_isMotionLooped();
M2C_UNK method_enableAutoMove(s32);
u8 method_isAutoMoveEnabled();
M2C_UNK method_enableAbsoluteMotion(s32);

s32 scr_method_getSerialNo(s32 arg0);
s32 scr_method_setAttr(s32 arg0);
s32 scr_method_setAttrAsync(s32 arg0);
s32 scr_method_getResultCode(s32 arg0);
s32 scr_method_getResultCodeEx(s32 arg0);
s32 scr_CardScheduleExec(s32 arg0);
s32 scr_ClearNurieData(s32 arg0);
s32 scr_PushPaintData(void);
s32 scr_PopPaintData(void);
s32 scr_method_saveNurieFile(s32 arg0);
s32 scr_DecompNurie(s32 arg0);
s32 scr_method_loadNurieFile(s32 arg0);
s32 scr_ReadBmp(s32 arg0);
s32 scr_method_getMdlId(s32 arg0);
s32 scr_method_setScale(s32 arg0);
s32 scr_method_setScaleV(s32 arg0);
s32 fn_8008F304(s32 arg0, s32 arg1);
void scr_method_getScaleX(void);
void scr_method_getScaleY(void);
void scr_method_getScaleZ(void);
s32 scr_method_requestMotion(s32 arg0);
s32 scr_method_requestNextMotion(s32 arg0);
s32 scr_method_requestMotionUrgently(s32 arg0);
s32 scr_method_isMotionStarted(s32 arg0);
s32 scr_method_isMotionCompleted(s32 arg0);
s32 scr_method_resetMotion(s32 arg0);
s32 scr_method_setRotateRel(s32 arg0);
s32 scr_method_isNoMoreMotion(s32 arg0);
s32 scr_method_isMotionLooped(s32 arg0);
s32 scr_method_enableAutoMove(s32 arg0);
s32 scr_method_isAutoMoveEnabled(s32 arg0);
s32 scr_method_enableAbsoluteMotion(s32 arg0);

s32 scr_method_getSerialNo(s32 arg0) {
    s32 spC;
    s32 sp8;

    spC = 0;
    sp8 = 0;
    fn_80080738();
    fn_8008065C(arg0, method_getSerialNo(&sp8));
    fn_8008085C(0xCCF, sp8);
    fn_8008085C(0xCD0, spC & ~0);
    return 0;
}

s32 scr_method_setAttr(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_80080738(arg0);
    fn_8008065C(arg0, method_setAttr(temp_r31));
    return 0;
}

s32 scr_method_setAttrAsync(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_80080738(arg0);
    fn_8008065C(arg0, method_setAttrAsync(temp_r31));
    return 0;
}

s32 scr_method_getResultCode(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, method_getResultCode());
    return 0;
}

s32 scr_method_getResultCodeEx(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, method_getResultCodeEx());
    return 0;
}

s32 scr_CardScheduleExec(s32 arg0) {
    CardScheduleExec();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_ClearNurieData(s32 arg0) {
    /* draft: did not compile: memset(lbl_8035055C, 0, 4); */
    M2C_FIELD(lbl_80350564, s16 *, 0x3A) = 0;
    fn_8008065C((long)(arg0), (long)(0));
    M2C_FIELD(lbl_80350564, s16 *, 0x38) = 0;
    return 0;
}

s32 scr_PushPaintData(void) {
    s32 temp_r5;

    temp_r5 = lbl_8035055C;
    lbl_8035055C = lbl_80350560;
    lbl_80350560 = temp_r5;
    fn_8008065C(0, temp_r5);
    return 0;
}

s32 scr_PopPaintData(void) {
    s32 temp_r5;

    temp_r5 = lbl_8035055C;
    lbl_8035055C = lbl_80350560;
    lbl_80350560 = temp_r5;
    fn_8008065C(0, temp_r5);
    return 0;
}

s32 scr_method_saveNurieFile(s32 arg0) {
    s32 temp_r31;
    s32 temp_r30;

    temp_r31 = fn_80080738();
    temp_r30 = fn_80080738(arg0);
    DCFlushRange(lbl_8035055C, 0x21DE0);
    fn_8008065C(arg0, fn_80037E3C(temp_r30, temp_r31, lbl_8035055C, 0x21DE0));
    return 0;
}

s32 scr_DecompNurie(s32 arg0) {
    void *temp_r31;

    temp_r31 = lbl_80350554;
    if (0 /* draft: did not compile */) {
        fn_8014A474(lbl_8035055C + 0x20, M2C_FIELD(temp_r31, s32 *, 0x30));
        fn_800278E0(temp_r31, 0x280U, 0x1E0U, 4);
        fn_800278E0(lbl_80350564, M2C_FIELD(lbl_80350564, u16 *, 0x3C), M2C_FIELD(lbl_80350564, u16 *, 0x3E), 4);
        fn_80027E2C(lbl_80350554, lbl_80350564);
        fn_800279B8(lbl_80350564);
    } else {
        M2C_FIELD(lbl_80350564, s16 *, 0x3A) = 0;
        M2C_FIELD(lbl_80350564, s16 *, 0x38) = 0;
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_loadNurieFile(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_80080738(arg0);
    fn_8008065C(arg0, fn_80037ED0(temp_r31, lbl_8035055C, 0x21DE0));
    return 0;
}

s32 scr_ReadBmp(s32 arg0) {
    void *temp_r3;

    temp_r3 = get_up_vector_for_viewing_mtx(8);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0) = 0;
        M2C_FIELD(temp_r3, s32 *, 4) = 0;
    }
    lbl_80350568 = temp_r3;
    ReadBmp(lbl_80350568, fn_80080790(arg0));
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getMdlId(s32 arg0) {
    fn_8008065C(arg0, M2C_FIELD(M2C_FIELD(fn_80089738(), void **, 0x20), s32 (**)(), 0xC)());
    return 0;
}

s32 scr_method_setScale(s32 arg0) {
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f31;
    void *temp_r3;

    temp_f31 = fn_80080764();
    temp_r3 = fn_80089738(arg0);
    sp8 = temp_f31;
    spC = temp_f31;
    sp10 = temp_f31;
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(f32 *), 0x28)(&sp8);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setScaleV(s32 arg0) {
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f30;
    f32 temp_f31;

    temp_f30 = fn_80080764();
    temp_f31 = fn_80080764(arg0);
    sp8 = fn_80080764(arg0);
    spC = temp_f31;
    sp10 = temp_f30;
    sp14 = sp8;
    sp18 = spC;
    sp1C = sp10;
    M2C_FIELD(M2C_FIELD(fn_80089738(arg0, spC, (s32)sp8), void **, 0x20), M2C_UNK (**)(f32 *), 0x28)(&sp14);
    fn_8008065C(arg0, 0);
    return 0;
}

#pragma push
#pragma peephole off
s32 fn_8008F304(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 spC;
    s32 saved_reg_f31;
    f32 sp8;
    f32 var_f31;

    M2C_FIELD(M2C_FIELD(fn_80089738(), void **, 0x20), M2C_UNK (**)(f32 *), 0x2C)(&sp8);
    var_f31 = saved_reg_f31;
    switch (arg1) {                                 /* irregular */
    case 0:
        var_f31 = sp8;
        break;
    case 1:
        var_f31 = spC;
        break;
    case 2:
        var_f31 = sp10;
        break;
    }
    fn_80080698(arg0, var_f31);
    return 0;
}
#pragma pop

void scr_method_getScaleX(void) {
    fn_8008F304((long)(0), (long)(0));
}

void scr_method_getScaleY(void) {
    fn_8008F304((long)(1), (long)(0));
}

void scr_method_getScaleZ(void) {
    fn_8008F304((long)(2), (long)(0));
}

s32 scr_method_requestMotion(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_800913C0(arg0);
    fn_8008065C(arg0, method_requestMotion(temp_r31));
    return 0;
}

s32 scr_method_requestNextMotion(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_800913C0(arg0);
    fn_8008065C(arg0, method_requestNextMotion(temp_r31));
    return 0;
}

s32 scr_method_requestMotionUrgently(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_800913C0(arg0);
    fn_8008065C(arg0, method_requestMotionUrgently(temp_r31, lbl_80351A78));
    return 0;
}

s32 scr_method_isMotionStarted(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_800913C0(arg0);
    fn_8008065C(arg0, method_isMotionStarted(temp_r31));
    return 0;
}

s32 scr_method_isMotionCompleted(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_800913C0(arg0);
    fn_8008065C(arg0, method_isMotionCompleted(temp_r31, 0));
    return 0;
}

s32 scr_method_resetMotion(s32 arg0) {
    fn_800913C0((long)(0));
    method_resetMotion();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setRotateRel(s32 arg0) {
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f30;
    f32 temp_f31;

    temp_f30 = fn_80080764();
    temp_f31 = fn_80080764(arg0);
    sp8 = fn_80080764(arg0);
    spC = temp_f31;
    sp10 = temp_f30;
    sp14 = sp8;
    sp18 = spC;
    sp1C = sp10;
    fn_800913C0((long)(arg0));
    method_setRotateRel(&sp14);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_isNoMoreMotion(s32 arg0) {
    fn_800913C0((long)(0));
    fn_8008065C(arg0, method_isNoMoreMotion());
    return 0;
}

s32 scr_method_isMotionLooped(s32 arg0) {
    fn_800913C0((long)(0));
    fn_8008065C(arg0, method_isMotionLooped());
    return 0;
}

s32 scr_method_enableAutoMove(s32 arg0) {
    s8 temp_r31;

    temp_r31 = fn_80080738() != 0;
    fn_800913C0(arg0);
    method_enableAutoMove(temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_isAutoMoveEnabled(s32 arg0) {
    fn_800913C0((long)(0));
    fn_8008065C(arg0, method_isAutoMoveEnabled());
    return 0;
}

s32 scr_method_enableAbsoluteMotion(s32 arg0) {
    s8 temp_r31;

    temp_r31 = fn_80080738() != 0;
    fn_800913C0(arg0);
    method_enableAbsoluteMotion(temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}
