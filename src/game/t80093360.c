/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80079B1C(s32, s32, M2C_UNK);
void *fn_8007B144();
M2C_UNK fn_8008065C();
M2C_UNK fn_80080738();
M2C_UNK fn_800A7008(s32, void *);
f32 fn_80080764(s32);
void *fn_80089738();
M2C_UNK fn_80080698(s32, f32);
extern f64 lbl_80351A98;
extern f32 lbl_80351AA0;
extern f32 lbl_80351AA4;
M2C_UNK fn_80070D60(M2C_UNK *, f32, f32, f32);
M2C_UNK fn_80071314(s32 *, s32, M2C_UNK);
M2C_UNK PSMTXMultVecSR(M2C_UNK *, s32 *, s32 *, s32, s32, M2C_UNK *);
extern M2C_UNK lbl_801DA060;
extern f32 lbl_80351AA8;
M2C_UNK PSMTXMultVec(M2C_UNK *, f32 *, f32 *);
M2C_UNK PSVECAdd(s32, f32 *, s32);
extern s32 lbl_8034EB30;
s32 GetFocusObjectID(s32);

s32 scr_method_removeObject(void *arg0);
s32 scr_method_alive(s32 arg0);
s32 scr_method_setPos(s32 arg0);
s32 scr_method_movePos(s32 arg0);
s32 scr_method_copyPos(s32 arg0);
s32 fn_800936D0(s32 arg0, s32 arg1);
void scr_method_getPosX(void);
void scr_method_getPosY(void);
void scr_method_getPosZ(void);
s32 fn_800937E0(s32 arg0, u8 arg1);
void scr_method_setRotate(void);
void scr_method_setRotateDeg(void);
s32 scr_method_copyRotate(s32 arg0);
s32 fn_800939B0(s32 arg0, s32 arg1, u8 arg2);
void scr_method_getRotateX(void);
void scr_method_getRotateY(void);
void scr_method_getRotateZ(void);
void fn_80093AF0(s32 arg1);
s32 scr_method_getNormalizedRotateX(s32 arg0);
s32 scr_method_getNormalizedRotateY(s32 arg0);
s32 scr_method_getNormalizedRotateZ(s32 arg0);
void fn_80093C40(s32 arg0, s32 arg1);
s32 scr_method_localToWorldX(s32 arg0);
s32 scr_method_localToWorldY(s32 arg0);
s32 scr_method_localToWorldZ(s32 arg0);
s32 scr_method_setAttrib(s32 arg0);
s32 scr_method_modifyAttrib(s32 arg0);
s32 scr_method_getAttrib(s32 arg0);
s32 scr_method_hide(s32 arg0);
s32 scr_method_show(s32 arg0);
s32 scr_method_isShown(s32 arg0);
s32 scr_GetFocusObjectID(void *arg0);

s32 scr_method_removeObject(void *arg0) {
    s32 temp_r3;
    void *temp_r30;
    void *var_r31;

    fn_80080738();
    var_r31 = fn_8007B144();
    temp_r30 = M2C_FIELD(arg0, void **, 0x2E0);
    fn_8008065C(arg0, 0);
    temp_r3 = M2C_FIELD(var_r31, s32 *, 8);
    if (temp_r3 & 0x2000) {
        if (var_r31 != NULL) {
            M2C_FIELD(M2C_FIELD(var_r31, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK), 8)(var_r31, 1);
        }
        goto block_9;
    }
    var_r31 = temp_r3 & 2 ? var_r31 : NULL;
    if (var_r31 != NULL) {
        fn_80079B1C(M2C_FIELD(temp_r30, s32 *, 0x38), M2C_FIELD(var_r31, s32 *, 0), 1);
        fn_800A7008(M2C_FIELD(var_r31, s32 *, 0x24), var_r31);
        if (0 /* draft: did not compile */) {
            return 1;
        }
    }
block_9:
    return 0;
}

s32 scr_method_alive(s32 arg0) {
    u8 var_r4;

    var_r4 = 0;
    if (fn_80080738() != 0) {
        /* draft: did not compile: var_r4 = fn_8007B144(); */
    }
    fn_8008065C(arg0, var_r4 != 0);
    return 0;
}

s32 scr_method_setPos(s32 arg0) {
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f30;
    f32 temp_f31;
    void *temp_r3;

    temp_f31 = fn_80080764(arg0);
    sp8 = fn_80080764(arg0);
    sp14 = sp8;
    temp_f30 = fn_80080764((long)(0));
    spC = temp_f31;
    sp10 = temp_f30;
    sp18 = spC;
    sp1C = sp10;
    temp_r3 = fn_80089738(arg0, (s32)spC, (s32)sp8);
    if (!(M2C_FIELD(temp_r3, s32 *, 8) & 0x80000)) {
        M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(f32 *), 0x38)(&sp14);
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_movePos(s32 arg0) {
    f32 temp_f31;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f30;
    f32 sp28;
    f32 temp_f3;
    f32 temp_f4;
    void *temp_r3;

    temp_f31 = fn_80080764(arg0);
    sp8 = fn_80080764(arg0);
    temp_f30 = fn_80080764((long)(0));
    spC = temp_f31;
    sp10 = temp_f30;
    sp20 = sp8;
    sp24 = spC;
    sp28 = sp10;
    temp_r3 = fn_80089738(arg0, (s32)spC, (s32)sp8);
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(f32 *), 0x3C)(&sp14);
    temp_f3 = sp18;
    temp_f4 = sp14 + sp20;
    temp_f1 = sp1C;
    temp_f2 = temp_f3 + sp24;
    sp14 = temp_f4;
    sp18 = temp_f2;
    sp1C = temp_f1 + sp28;
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(void *, f32 *, f32, f32, f32, f32), 0x38)(temp_r3, &sp14, temp_f1, temp_f2, temp_f3, temp_f4);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_copyPos(s32 arg0) {
    M2C_UNK sp8;
    void *temp_r31;
    void *temp_r31_2;

    temp_r31_2 = fn_80089738((long)(arg0), (float)(0), (float)(0));
    temp_r31 = fn_80089738((long)(0), (float)(0), (float)(0));
    M2C_FIELD(M2C_FIELD(temp_r31, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK *), 0x3C)(temp_r31, &sp8);
    M2C_FIELD(M2C_FIELD(temp_r31_2, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK *), 0x38)(temp_r31_2, &sp8);
    fn_8008065C(arg0, 0);
    return 0;
}

#pragma push
#pragma peephole off
s32 fn_800936D0(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 spC;
    s32 saved_reg_f31;
    f32 sp8;
    f32 var_f31;

    M2C_FIELD(M2C_FIELD(fn_80089738(), void **, 0x20), M2C_UNK (**)(f32 *), 0x3C)(&sp8);
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

void scr_method_getPosX(void) {
    fn_800936D0((long)(0), (long)(0));
}

void scr_method_getPosY(void) {
    fn_800936D0((long)(1), (long)(0));
}

void scr_method_getPosZ(void) {
    fn_800936D0((long)(2), (long)(0));
}

s32 fn_800937E0(s32 arg0, u8 arg1) {
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f30;
    f32 temp_f31;
    void *temp_r3;

    temp_f31 = fn_80080764(arg0);
    sp8 = fn_80080764(arg0);
    sp14 = sp8;
    temp_f30 = fn_80080764((long)(0));
    spC = temp_f31;
    sp10 = temp_f30;
    sp18 = spC;
    sp1C = sp10;
    temp_r3 = fn_80089738(arg0, (s32)spC, (s32)sp8);
    if (arg1 != 0) {
        sp14 = (f32) ((f64) sp14 * lbl_80351A98);
        sp18 = (f32) ((f64) sp18 * lbl_80351A98);
        sp1C = (f32) ((f64) sp1C * lbl_80351A98);
    }
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(f32 *), 0x30)(&sp14);
    fn_8008065C(arg0, 0);
    return 0;
}

void scr_method_setRotate(void) {
    fn_800937E0((long)(0), (unsigned char)(0));
}

void scr_method_setRotateDeg(void) {
    fn_800937E0((long)(1), (unsigned char)(0));
}

s32 scr_method_copyRotate(s32 arg0) {
    M2C_UNK sp8;
    void *temp_r31;
    void *temp_r31_2;

    temp_r31 = fn_80089738();
    temp_r31_2 = fn_80089738(arg0);
    M2C_FIELD(M2C_FIELD(temp_r31_2, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK *), 0x30)(temp_r31_2, &sp8);
    M2C_FIELD(M2C_FIELD(temp_r31, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK *), 0x34)(temp_r31, &sp8);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 fn_800939B0(s32 arg0, s32 arg1, u8 arg2) {
    u32 sp10;
    u32 spC;
    u32 saved_reg_f31;
    f32 sp8;
    f32 var_f31;

    var_f31 = saved_reg_f31;
    M2C_FIELD(M2C_FIELD(fn_80089738(), void **, 0x20), M2C_UNK (**)(f32 *), 0x34)(&sp8);
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
    if (arg2 != 0) {
        var_f31 = (lbl_80351AA0 * var_f31) / lbl_80351AA4;
    }
    fn_80080698(arg0, var_f31);
    return 0;
}

void scr_method_getRotateX(void) {
    fn_800939B0((long)(0), (long)(0), (unsigned char)(0));
}

void scr_method_getRotateY(void) {
    fn_800939B0((long)(1), (long)(0), (unsigned char)(0));
}

void scr_method_getRotateZ(void) {
    fn_800939B0((long)(2), (long)(0), (unsigned char)(0));
}

void fn_80093AF0(s32 arg1) {
    s32 sp1C;
    s32 sp18;
    M2C_UNK sp20;
    f32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;

    M2C_FIELD(M2C_FIELD(fn_80089738(), void **, 0x20), M2C_UNK (**)(f32 *), 0x34)(&sp14);
    fn_80070D60(&sp20, sp14, sp18, sp1C);
    sp8 = M2C_FIELD(&lbl_801DA060, s32 *, 0);
    spC = M2C_FIELD(&lbl_801DA060, s32 *, 4);
    sp10 = M2C_FIELD(&lbl_801DA060, s32 *, 8);
    PSMTXMultVecSR(&sp20, &sp8, &sp8, M2C_FIELD(&lbl_801DA060, s32 *, 4), M2C_FIELD(&lbl_801DA060, s32 *, 0), &lbl_801DA060);
    fn_80071314(&sp8, arg1, 1);
}

s32 scr_method_getNormalizedRotateX(s32 arg0) {
    f32 sp8;

    /* draft: did not compile: fn_80093AF0(&sp8); */
    fn_80080698(arg0, sp8);
    return 0;
}

s32 scr_method_getNormalizedRotateY(s32 arg0) {
    s8 spC;
    M2C_UNK sp8;

    /* draft: did not compile: fn_80093AF0(&sp8); */
    fn_80080698(arg0, spC);
    return 0;
}

s32 scr_method_getNormalizedRotateZ(s32 arg0) {
    fn_80089738();
    fn_80080698(arg0, lbl_80351AA8);
    return 0;
}

void fn_80093C40(s32 arg0, s32 arg1) {
    void *temp_r3;
    s32 sp18;
    M2C_UNK sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f30;
    f32 temp_f31;
    s32 sp1C;
    f32 sp20;

    sp8 = fn_80080764(arg0);
    temp_f30 = fn_80080764((long)(0));
    temp_f31 = fn_80080764(arg0);
    spC = temp_f31;
    sp10 = temp_f30;
    sp24 = spC;
    sp28 = sp10;
    temp_r3 = fn_80089738(arg0, spC, sp8);
    sp20 = sp8;
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(f32 *), 0x34)(&sp14);
    fn_80070D60(&sp2C, sp14, sp18, sp1C);
    PSMTXMultVec(&sp2C, &sp20, &sp20);
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(void *, s32), 0x3C)(temp_r3, arg1);
    PSVECAdd(arg1, &sp20, arg1);
}

s32 scr_method_localToWorldX(s32 arg0) {
    f32 sp8;

    /* draft: did not compile: fn_80093C40(&sp8); */
    fn_80080698(arg0, sp8);
    return 0;
}

s32 scr_method_localToWorldY(s32 arg0) {
    s8 spC;
    M2C_UNK sp8;

    /* draft: did not compile: fn_80093C40(&sp8); */
    fn_80080698(arg0, spC);
    return 0;
}

s32 scr_method_localToWorldZ(s32 arg0) {
    s8 sp10;
    M2C_UNK sp8;

    /* draft: did not compile: fn_80093C40(&sp8); */
    fn_80080698(arg0, sp10);
    return 0;
}

s32 scr_method_setAttrib(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    M2C_FIELD(fn_80089738(arg0), s32 *, 0xC) = temp_r31;
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_modifyAttrib(s32 arg0) {
    s32 temp_r30;
    s32 temp_r31;
    void *temp_r3;

    temp_r30 = fn_80080738();
    temp_r31 = fn_80080738(arg0);
    temp_r3 = fn_80089738(arg0);
    if (temp_r30 != 0) {
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r3, s32 *, 0xC) | temp_r31);
    } else {
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r3, s32 *, 0xC) & ~temp_r31);
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getAttrib(s32 arg0) {
    fn_8008065C(arg0, M2C_FIELD(fn_80089738(), s32 *, 0xC) & lbl_8034EB30);
    return 0;
}

s32 scr_method_hide(s32 arg0) {
    void *temp_r3;

    temp_r3 = fn_80089738();
    M2C_FIELD(temp_r3, s32 *, 8) = (s32) (M2C_FIELD(temp_r3, s32 *, 8) | 0x200000);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_show(s32 arg0) {
    void *temp_r3;

    temp_r3 = fn_80089738();
    M2C_FIELD(temp_r3, s32 *, 8) = (s32) (M2C_FIELD(temp_r3, s32 *, 8) & 0xFFDFFFFF);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_isShown(s32 arg0) {
    fn_8008065C(arg0, (u8) ((M2C_FIELD(fn_80089738(), s32 *, 8) & 0x200000) == 0));
    return 0;
}

s32 scr_GetFocusObjectID(void *arg0) {
    fn_8008065C(arg0, GetFocusObjectID(M2C_FIELD(arg0, s32 *, 0x2E0)));
    return 0;
}
