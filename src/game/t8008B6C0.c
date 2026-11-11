/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 fn_800807CC();
M2C_UNK fn_8008085C(s32, s32);
M2C_UNK fn_8008065C(s32, M2C_UNK);
s32 fn_80080738();
M2C_UNK RequestLoadInitialModels(s32, s32);
extern s32 lbl_803504F0;
u8 IsInitialModelsLoaded(s32);
M2C_UNK fn_800146F0(void **, M2C_UNK);
M2C_UNK fn_80015F5C();
M2C_UNK fn_8002892C(s32, s32, f32);
M2C_UNK fn_8002898C(s32, s32);
M2C_UNK fn_80031578(void **, void **, M2C_UNK, M2C_UNK);
u8 fn_8007F61C(s32);
u8 fn_8007F65C(s32);
s32 fn_8007FC40();
f32 fn_80080764(s32);
s32 fn_80080790(s32);
M2C_UNK fn_800866BC(void **, s32, void **);
M2C_UNK RequestNextSystemText(s32, s32);
M2C_UNK HideSystemText(s32);
u8 IsSystemTextShown(s32);
M2C_UNK fn_80028A24(s32, s32, s32, s32, s32, M2C_UNK);
M2C_UNK fn_80012CF8(void **, s32, s32);
M2C_UNK fn_80014798(void **, s32, M2C_UNK *);
s32 strlen();
M2C_UNK HideDialog(s32);
u8 IsDialogShown(s32);
s32 GetDialogState(s32);
M2C_UNK FineTuneDialog(s32, s32, s32, f32);
M2C_UNK ShowModoru(s32);
M2C_UNK fn_80028D80(s32);
M2C_UNK HideButtons(s32);
M2C_UNK ShowButtons(s32);
M2C_UNK DisableSystemMenu(s32);
M2C_UNK EnableSystemMenu(s32);
M2C_UNK fn_8002A19C(s32, s32);
M2C_UNK HideFilm(s32);
M2C_UNK InitTouchPanel(s32, s32, s32, s32, s32, s32 *);
extern f32 lbl_80351A50;
M2C_UNK ScaleTouchPanelText(f32);
M2C_UNK ShowTouchPanel();

void fn_8008B6C0(u32 arg0, u8 arg1);
s32 GetGlobalFlag(s32 arg0);
s32 scr_ModifyGlobalFlag(s32 arg0);
s32 scr_GetGlobalFlag(s32 arg0);
s32 scr_RequestLoadInitialModels(s32 arg0);
s32 scr_IsInitialModelsLoaded(s32 arg0);
s32 scr_ShowSystemText(s32 arg0);
s32 scr_RequestNextSystemText(s32 arg0);
s32 scr_HideSystemText(s32 arg0);
s32 scr_IsSystemTextShown(s32 arg0);
s32 scr_EnableFocusDecision(s32 arg0);
s32 scr_IsFocusDecisionEnabled(void);
s32 scr_ShowDialog(s32 arg0);
s32 scr_ShowDialogEx(s32 arg0, M2C_UNK arg_sp0);
s32 scr_HideDialog(s32 arg0);
s32 scr_IsDialogShown(s32 arg0);
s32 scr_GetDialogFlags(void);
s32 scr_GetDialogState(s32 arg0);
s32 scr_FineTuneDialog(s32 arg0);
s32 scr_ShowModoru(s32 arg0);
s32 scr_HideModoru(s32 arg0);
s32 scr_NotifyApproach(s32 arg0);
s32 scr_IsApproaching(void);
s32 scr_HideButtons(s32 arg0);
s32 scr_ShowButtons(s32 arg0);
s32 scr_DisableSystemMenu(s32 arg0);
s32 scr_EnableSystemMenu(s32 arg0);
s32 scr_ShowFilm(s32 arg0);
s32 scr_HideFilm(s32 arg0);
s32 scr_InitTouchPanel(s32 arg0);
s32 scr_ScaleTouchPanelText(s32 arg0);
s32 scr_ShowTouchPanel(s32 arg0);

void fn_8008B6C0(u32 arg0, u8 arg1) {
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r4;
    u32 temp_r5;
    u32 temp_r0;

    temp_r5 = arg0 >> 0x1FU;
    temp_r0 = (arg0 << 0x1B) - temp_r5;
    temp_r31 = (s32) arg0 / 32;
    temp_r30 = ((temp_r0 << 5) | (temp_r0 >> 0x1BU)) + temp_r5;
    temp_r4 = fn_800807CC(temp_r31 + 9, temp_r5);
    if (arg1 != 0) {
        fn_8008085C(temp_r31 + 9, temp_r4 | (1 << temp_r30));
        return;
    }
    fn_8008085C(temp_r31 + 9, temp_r4 & ~(1 << temp_r30));
}

#pragma push
#pragma peephole off
s32 GetGlobalFlag(s32 arg0) {
    u32 temp_r0;
    u32 temp_r4;

    temp_r4 = (u32) arg0 >> 0x1FU;
    temp_r0 = (arg0 << 0x1B) - temp_r4;
    return ((1 << (((temp_r0 << 5) | (temp_r0 >> 0x1BU)) + temp_r4)) & fn_800807CC((arg0 / 32) + 9)) != 0;
}
#pragma pop

s32 scr_ModifyGlobalFlag(s32 arg0) {
    u8 temp_r31;

    fn_8008065C(arg0, 0);
    temp_r31 = fn_80080738((long)(0)) != 0;
    fn_80080738(arg0);
    fn_8008B6C0((unsigned long)(temp_r31), (unsigned char)(0));
    return 0;
}

s32 scr_GetGlobalFlag(s32 arg0) {
    fn_80080738((long)(0));
    fn_8008065C(arg0, GetGlobalFlag((long)(0)));
    return 0;
}

s32 scr_RequestLoadInitialModels(s32 arg0) {
    s32 tmp1 = fn_80080738((long)(0));

    RequestLoadInitialModels(lbl_803504F0, tmp1);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_IsInitialModelsLoaded(s32 arg0) {
    u8 tmp1 = IsInitialModelsLoaded(lbl_803504F0);

    fn_8008065C(arg0, tmp1);
    return 0;
}

s32 scr_ShowSystemText(s32 arg0) {
    void *sp14;
    void *sp10;
    void *spC;
    M2C_UNK sp8;
    f32 temp_f31;
    s32 temp_r31;
    s32 var_r31;
    s32 var_r31_2;

    temp_r31 = fn_8007FC40();
    fn_80015F5C(&sp14, &sp8);
    if ((fn_8007F65C(arg0) != 0) || (fn_8007F61C(arg0) != 0)) {
        temp_f31 = fn_80080764(arg0);
        var_r31 = temp_r31 - 2;
loop_4:
        if (var_r31 >= 0) {
            fn_800866BC(&sp10, fn_80080790(arg0), &sp14);
            fn_80031578(&sp14, &sp10, 0, -1);
            fn_800146F0(&sp10, -1);
            var_r31 -= 1;
            goto loop_4;
        }
        fn_8002892C(lbl_803504F0, M2C_FIELD(sp14, s32 *, 0xC), temp_f31);
    } else {
        var_r31_2 = temp_r31 - 1;
loop_8:
        if (var_r31_2 >= 0) {
            fn_800866BC(&spC, fn_80080790(arg0), &sp14);
            fn_80031578(&sp14, &spC, 0, -1);
            fn_800146F0(&spC, -1);
            var_r31_2 -= 1;
            goto loop_8;
        }
        fn_8002898C(lbl_803504F0, M2C_FIELD(sp14, s32 *, 0xC));
    }
    fn_8008065C(arg0, 0);
    fn_800146F0(&sp14, -1);
    return 0;
}

s32 scr_RequestNextSystemText(s32 arg0) {
    void *sp10;
    void *spC;
    M2C_UNK sp8;
    s32 temp_r31;
    s32 var_r31;

    temp_r31 = fn_8007FC40();
    fn_80015F5C(&sp10, &sp8);
    var_r31 = temp_r31 - 1;
loop_2:
    if (var_r31 >= 1) {
        fn_800866BC(&spC, fn_80080790(arg0), &sp10);
        fn_80031578(&sp10, &spC, 0, -1);
        fn_800146F0(&spC, -1);
        var_r31 -= 1;
        goto loop_2;
    }
    fn_80080764(arg0);
    RequestNextSystemText(lbl_803504F0, M2C_FIELD(sp10, s32 *, 0xC));
    fn_8008065C(arg0, 0);
    fn_800146F0(&sp10, -1);
    return 0;
}

s32 scr_HideSystemText(s32 arg0) {
    HideSystemText(lbl_803504F0);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_IsSystemTextShown(s32 arg0) {
    fn_8008065C(arg0, IsSystemTextShown(lbl_803504F0));
    return 0;
}

s32 scr_EnableFocusDecision(s32 arg0) {
    M2C_FIELD(lbl_803504F0, s8 *, 0x10A) = (s8) (fn_80080738((long)(0)) != 0);
    fn_8008065C((long)(arg0), (long)(0));
    return 0;
}

s32 scr_IsFocusDecisionEnabled(void) {
    fn_8008065C((long)(M2C_FIELD(lbl_803504F0, u8 *, 0x10A)), (long)(0));
    return 0;
}

s32 scr_ShowDialog(s32 arg0) {
    void *sp10;
    void *spC;
    M2C_UNK sp8;
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r31_2;
    s32 var_r30;

    temp_r31 = fn_8007FC40() - 3;
    fn_80015F5C(&sp10, &sp8);
    var_r30 = 0;
loop_2:
    if (var_r30 < temp_r31) {
        fn_800866BC(&spC, fn_80080790(arg0), &sp10);
        fn_80031578(&sp10, &spC, 0, -1);
        fn_800146F0(&spC, -1);
        var_r30 += 1;
        goto loop_2;
    }
    temp_r30 = fn_80080790(arg0);
    temp_r31_2 = fn_80080738(arg0);
    fn_80028A24(lbl_803504F0, temp_r30, M2C_FIELD(sp10, s32 *, 0xC), temp_r31_2, fn_80080738(arg0), 0);
    fn_8008065C(arg0, 0);
    fn_800146F0(&sp10, -1);
    return 0;
}

s32 scr_ShowDialogEx(s32 arg0, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 scr_HideDialog(s32 arg0) {
    HideDialog(lbl_803504F0);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_IsDialogShown(s32 arg0) {
    fn_8008065C(arg0, IsDialogShown(lbl_803504F0));
    return 0;
}

s32 scr_GetDialogFlags(void) {
    fn_8008065C((long)(0), (long)(0));
    return 0;
}

s32 scr_GetDialogState(s32 arg0) {
    fn_8008065C(arg0, GetDialogState(lbl_803504F0));
    return 0;
}

s32 scr_FineTuneDialog(s32 arg0) {
    f32 temp_f31;
    s32 temp_r31;
    s32 temp_r30;

    temp_r31 = fn_80080738();
    temp_r30 = fn_80080738(arg0);
    temp_f31 = fn_80080764(arg0);
    fn_80080764(arg0);
    FineTuneDialog(lbl_803504F0, temp_r30, temp_r31, temp_f31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_ShowModoru(s32 arg0) {
    ShowModoru(lbl_803504F0);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_HideModoru(s32 arg0) {
    fn_80028D80(lbl_803504F0);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_NotifyApproach(s32 arg0) {
    M2C_FIELD(lbl_803504F0, s8 *, 0x56) = (s8) (fn_80080738() != 0);
    fn_8008065C((long)(arg0), (long)(0));
    return 0;
}

s32 scr_IsApproaching(void) {
    fn_8008065C((long)(M2C_FIELD(lbl_803504F0, u8 *, 0x56)), (long)(0));
    return 0;
}

s32 scr_HideButtons(s32 arg0) {
    HideButtons(lbl_803504F0);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_ShowButtons(s32 arg0) {
    ShowButtons(lbl_803504F0);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_DisableSystemMenu(s32 arg0) {
    DisableSystemMenu(lbl_803504F0);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_EnableSystemMenu(s32 arg0) {
    EnableSystemMenu(lbl_803504F0);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_ShowFilm(s32 arg0) {
    s8 var_r4;

    fn_80028D80(lbl_803504F0);
    var_r4 = 2;
    var_r4 = fn_8007FC40(arg0) == 0 ? var_r4 : fn_80080738(arg0);
    if (var_r4 == 1) {
        var_r4 = 2;
    }
    fn_8002A19C(lbl_803504F0, var_r4);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_HideFilm(s32 arg0) {
    HideFilm(lbl_803504F0);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_InitTouchPanel(s32 arg0) { return 0; } /* draft: stub */

s32 scr_ScaleTouchPanelText(s32 arg0) {
    f32 temp_f31;

    temp_f31 = fn_80080764((long)(0));
    fn_80080764(arg0);
    ScaleTouchPanelText(temp_f31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_ShowTouchPanel(s32 arg0) {
    ShowTouchPanel();
    fn_8008065C(arg0, 0);
    return 0;
}
