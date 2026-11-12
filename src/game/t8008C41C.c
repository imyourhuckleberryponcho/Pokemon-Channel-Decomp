/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_8008065C();
M2C_UNK fn_800A3244();
M2C_UNK EnableTouchPanel();
M2C_UNK DisableTouchPanel();
u8 IsTouchPanelShown();
M2C_UNK fn_80080764();
M2C_UNK SetFocusHilightRatio();
M2C_UNK *get_up_vector_for_viewing_mtx();
M2C_UNK fn_80005888(M2C_UNK *);
M2C_UNK fn_800146F0(M2C_UNK *, M2C_UNK);
M2C_UNK fn_80014798(M2C_UNK *, s32, M2C_UNK *);
M2C_UNK *fn_800208F4(M2C_UNK *);
M2C_UNK fn_8002EF7C(M2C_UNK **, M2C_UNK);
M2C_UNK fn_8002FA14(s32, s32, u8 *);
M2C_UNK fn_8002FCC0(M2C_UNK *, M2C_UNK);
M2C_UNK fn_8002FD20(M2C_UNK *);
M2C_UNK fn_8002FDB4(M2C_UNK *, M2C_UNK);
M2C_UNK fn_8002FEA4(M2C_UNK *);
M2C_UNK fn_80031578(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK fn_80079FDC(M2C_UNK *, M2C_UNK *);
M2C_UNK fn_8007A404(M2C_UNK *, M2C_UNK **, M2C_UNK **);
M2C_UNK fn_8007A934(void **, M2C_UNK *, M2C_UNK *);
u8 fn_8007F61C(s32);
u8 fn_8007F65C(s32);
u32 fn_8007FC40();
M2C_UNK *fn_80080738();
s32 fn_80080790(s32);
M2C_UNK fn_8014B048(s32, M2C_UNK **);
extern s32 lbl_803504F0;
extern M2C_UNK lbl_8022A038;
extern M2C_UNK lbl_8022A044;
extern M2C_UNK lbl_8022A050;
M2C_UNK RemoveSystemMenuProgram(s32, s32, s32);
M2C_UNK RemoveSystemMenuTV(s32, s32, s32);
M2C_UNK OpenSystemMenu(s32);
M2C_UNK CloseSystemMenu(s32);
M2C_UNK SelectSystemMenu();
M2C_UNK ForceBalloonModel();
s32 CreatePointLight(s32 *, f32, f32, f32);
s32 fn_800A6F74(s32, s32);
s32 CreateAmbientLight(s32 *);
s32 CreateInfiniteLight(s32 *);
s32 CreateSpotLight(s32 *, f32, f32, f32);
M2C_UNK fn_80033964(s32, s32 *);
void *fn_800A713C();
M2C_UNK HSD_LObjSetColor(s32, s32 *);
extern f32 lbl_80351A58;
extern f32 lbl_80351A5C;
void *fn_8008D824(s32);

s32 scr_HideTouchPanel(s32 arg0);
s32 scr_EnableTouchPanel(s32 arg0);
s32 scr_DisableTouchPanel(s32 arg0);
s32 scr_IsTouchPanelShown(s32 arg0);
s32 scr_SetFocusHilightRatio(void *arg0);
s32 fn_8008C564(s32 arg0, s32 arg1);
void scr_AddSystemMenuItem(void);
void scr_AddSystemMenuTV(void);
void scr_AddSystemMenuProgram(void);
s32 scr_RemoveSystemMenuProgram(void *arg0);
s32 scr_RemoveSystemMenuTV(void *arg0);
s32 scr_OpenSystemMenu(s32 arg0);
s32 scr_CloseSystemMenu(s32 arg0);
s32 scr_SelectSystemMenu(s32 arg0);
s32 scr_CheckSystemMenu(void);
s32 scr_HasSystemMenuBeenUsed(void);
s32 scr_NotifyExplainable(s32 arg0);
s32 scr_ForceBalloonModel(s32 arg0);
s32 scr_CreatePointLight(void *arg0);
s32 scr_CreateAmbientLight(void *arg0);
s32 scr_CreateInfiniteLight(void *arg0);
s32 scr_CreateSpotLight(void *arg0);
s32 scr_method_setColor(void *arg0);
s32 fn_8008D318(s32 arg0, s32 arg1);
void scr_method_setDistAttnGentle(void);
void scr_method_setDistAttnMedium(void);
void scr_method_setDistAttnSteep(void);
s32 fn_8008D410(s32 arg0, s32 arg1);
void scr_method_setSpotAttnFlat(void);
void scr_method_setSpotAttnCos(void);
void scr_method_setSpotAttnCos2(void);
void scr_method_setSpotAttnSharp(void);

s32 scr_HideTouchPanel(s32 arg0) {
    fn_800A3244();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_EnableTouchPanel(s32 arg0) {
    EnableTouchPanel();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_DisableTouchPanel(s32 arg0) {
    DisableTouchPanel();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_IsTouchPanelShown(s32 arg0) {
    fn_8008065C(arg0, IsTouchPanelShown());
    return 0;
}

s32 scr_SetFocusHilightRatio(void *arg0) {
    void *temp_r3;

    fn_80080764();
    temp_r3 = M2C_FIELD(arg0, void **, 0x2E4);
    if ((temp_r3 != NULL) && ((u32) M2C_FIELD(temp_r3, u32 *, 0x24) != 0U)) {
        SetFocusHilightRatio();
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 fn_8008C564(s32 arg0, s32 arg1) { return 0; } /* draft: stub */

void scr_AddSystemMenuItem(void) { } /* draft: stub */

void scr_AddSystemMenuTV(void) { } /* draft: stub */

void scr_AddSystemMenuProgram(void) { } /* draft: stub */

s32 scr_RemoveSystemMenuProgram(void *arg0) { return 0; } /* draft: stub */

s32 scr_RemoveSystemMenuTV(void *arg0) { return 0; } /* draft: stub */

s32 scr_OpenSystemMenu(s32 arg0) {
    OpenSystemMenu(lbl_803504F0);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_CloseSystemMenu(s32 arg0) {
    CloseSystemMenu(lbl_803504F0);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_SelectSystemMenu(s32 arg0) {
    SelectSystemMenu(lbl_803504F0, fn_80080738());
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_CheckSystemMenu(void) {
    fn_8008065C(M2C_FIELD(lbl_803504F0, s32 *, 0xE4));
    return 0;
}

s32 scr_HasSystemMenuBeenUsed(void) {
    fn_8008065C(M2C_FIELD(lbl_803504F0, u8 *, 0x108));
    return 0;
}

s32 scr_NotifyExplainable(s32 arg0) {
    M2C_FIELD(lbl_803504F0, s8 *, 0x57) = (s8) (fn_80080738() != 0);
    fn_8008065C(arg0, 0, lbl_803504F0);
    return 0;
}

s32 scr_ForceBalloonModel(s32 arg0) {
    ForceBalloonModel(lbl_803504F0, fn_80080738());
    fn_8008065C(arg0, 0);
    return 0;
}

#pragma push
#pragma optimize_for_size on
s32 scr_CreatePointLight(void *arg0) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    s32 spC;
    s8 spB;
    s8 spA;
    s8 sp9;
    u16 sp8;
    f32 temp_f30;
    f32 temp_f31;
    s32 var_r4;
    u8 temp_r28;
    s8 temp_r29;
    s8 temp_r30;
    s8 temp_r31;

    /* draft: did not compile: temp_r29 = fn_80080738(); */
    M2C_UNK * dc_fn_80080738 = fn_80080738(arg0);
    /* draft: did not compile: temp_r30 = dc_fn_80080738; */
    /* draft: did not compile: temp_r31 = dc_fn_80080738; */
    temp_f30 = fn_80080764(arg0);
    temp_f31 = fn_80080764(arg0);
    sp10 = fn_80080764(arg0);
    temp_r28 = M2C_FIELD(arg0, s32 *, 0x2E0);
    sp14 = temp_f31;
    sp18 = temp_f30;
    sp1C = sp10;
    sp20 = sp14;
    sp24 = sp18;
    /* draft: did not compile: var_r4 = get_up_vector_for_viewing_mtx((long)(0x84)); */
    if (var_r4 != 0) {
        sp8 = temp_r31;
        sp9 = temp_r30;
        spA = temp_r29;
        spB = 0xFF;
        spC = (s32) sp8;
        var_r4 = CreatePointLight(&spC, sp1C, sp20, sp24);
    }
    fn_8008065C(arg0, fn_800A6F74(temp_r28, var_r4));
    return 0;
}
#pragma pop

s32 scr_CreateAmbientLight(void *arg0) {
    s8 spF;
    s8 spE;
    s8 spD;
    s8 spC;
    s32 sp8;
    s32 temp_r31;
    s32 var_r4;

    /* draft: did not compile: spF = fn_80080738(); */
    /* draft: did not compile: spE = fn_80080738(arg0); */
    /* draft: did not compile: spD = fn_80080738(arg0); */
    /* draft: did not compile: spC = fn_80080738(arg0); */
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x2E0);
    /* draft: did not compile: var_r4 = get_up_vector_for_viewing_mtx(0x80); */
    if (var_r4 != 0) {
        sp8 = (s32) spC;
        var_r4 = CreateAmbientLight(&sp8);
    }
    fn_8008065C(arg0, fn_800A6F74(temp_r31, var_r4));
    return 0;
}

s32 scr_CreateInfiniteLight(void *arg0) {
    s8 spF;
    s8 spE;
    s8 spD;
    s8 spC;
    s32 sp8;
    s32 temp_r31;
    s32 var_r4;

    /* draft: did not compile: spF = fn_80080738(); */
    /* draft: did not compile: spE = fn_80080738(arg0); */
    /* draft: did not compile: spD = fn_80080738(arg0); */
    /* draft: did not compile: spC = fn_80080738(arg0); */
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x2E0);
    /* draft: did not compile: var_r4 = get_up_vector_for_viewing_mtx(0x80); */
    if (var_r4 != 0) {
        sp8 = (s32) spC;
        var_r4 = CreateInfiniteLight(&sp8);
    }
    fn_8008065C(arg0, fn_800A6F74(temp_r31, var_r4));
    return 0;
}

s32 scr_CreateSpotLight(void *arg0) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    s8 spF;
    s8 spE;
    s8 spD;
    u32 spC;
    s32 sp8;
    f32 temp_f30;
    f32 temp_f31;
    s32 temp_r31;
    s32 var_r4;

    spF = 0xFF;
    /* draft: did not compile: spE = fn_80080738(); */
    /* draft: did not compile: spD = fn_80080738(arg0); */
    /* draft: did not compile: spC = fn_80080738(arg0); */
    temp_f30 = fn_80080764(arg0);
    temp_f31 = fn_80080764(arg0);
    sp10 = fn_80080764(arg0);
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x2E0);
    sp14 = temp_f31;
    sp18 = temp_f30;
    sp1C = sp10;
    sp20 = sp14;
    sp24 = sp18;
    /* draft: did not compile: var_r4 = get_up_vector_for_viewing_mtx(0x84, sp14, sp10); */
    if (var_r4 != 0) {
        sp8 = (s32) spC;
        var_r4 = CreateSpotLight(&sp8, sp1C, sp20, sp24);
    }
    fn_8008065C(arg0, fn_800A6F74((u16)temp_r31, var_r4));
    return 0;
}

s32 scr_method_setColor(void *arg0) {
    s8 sp12;
    s8 sp11;
    s8 sp10;
    s32 spC;
    s32 sp8;
    f32 var_f31;
    s32 temp_r3;
    void *temp_r3_2;

    var_f31 = lbl_80351A58;
    temp_r3 = fn_8007FC40();
    if (temp_r3 == 5) {
        var_f31 = fn_80080764(arg0);
    }
    /* draft: did not compile: sp12 = fn_80080738(arg0); */
    /* draft: did not compile: sp11 = fn_80080738(arg0); */
    /* draft: did not compile: sp10 = fn_80080738(arg0); */
    temp_r3_2 = fn_800A713C(M2C_FIELD(arg0, s32 *, 0x2E0), fn_80080738(arg0));
    if (temp_r3 == 5) {
        spC = (s32) sp10;
        fn_80033964((s32) (lbl_80351A5C * var_f31), &spC);
    } else {
        sp8 = (s32) sp10;
        HSD_LObjSetColor(M2C_FIELD(temp_r3_2, s32 *, 0x7C), &sp8);
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 fn_8008D318(s32 arg0, s32 arg1) {
    f32 temp_f31;
    f32 temp_f30;

    temp_f31 = fn_80080764();
    temp_f30 = fn_80080764(arg0);
    M2C_FIELD(M2C_FIELD(fn_8008D824(arg0), void **, 0x20), M2C_UNK (**)(s32, f32, f32), 0x4C)(arg1, temp_f30, temp_f31);
    fn_8008065C(arg0, 0);
    return 0;
}

void scr_method_setDistAttnGentle(void) {
    fn_8008D318((long)(1), (long)(0));
}

void scr_method_setDistAttnMedium(void) {
    fn_8008D318((long)(2), (long)(0));
}

void scr_method_setDistAttnSteep(void) {
    fn_8008D318((long)(3), (long)(0));
}

s32 fn_8008D410(s32 arg0, s32 arg1) {
    f32 temp_f31;

    temp_f31 = fn_80080764();
    M2C_FIELD(M2C_FIELD(fn_8008D824(arg0), void **, 0x20), M2C_UNK (**)(s32, f32), 0x50)(arg1, temp_f31);
    fn_8008065C(arg0, 0);
    return 0;
}

void scr_method_setSpotAttnFlat(void) {
    fn_8008D410((long)(1), (long)(0));
}

void scr_method_setSpotAttnCos(void) {
    fn_8008D410((long)(2), (long)(0));
}

void scr_method_setSpotAttnCos2(void) {
    fn_8008D410((long)(3), (long)(0));
}

void scr_method_setSpotAttnSharp(void) {
    fn_8008D410((long)(4), (long)(0));
}
