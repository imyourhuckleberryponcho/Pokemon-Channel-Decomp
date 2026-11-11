/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 method_getPlayingActId();
M2C_UNK fn_8008065C();
s32 method_getPlayingAPID();
s32 method_getPlayingFeelId();
void *fn_8007B144();
M2C_UNK fn_80080738();
M2C_UNK fn_80029CE8(void *, s32, void *);
s32 fn_8007FC40();
extern void *lbl_803504F0;
M2C_UNK SetCursorPos(s32, f32);
f32 fn_80080764(s32);
extern s32 lbl_803504F8;
M2C_UNK SetCursorBarrier(s32, f32);
M2C_UNK fn_8001E644();
M2C_UNK fn_80080698(s32, f32);
extern u8 lbl_80350749;
extern f32 lbl_8035074C;
extern f32 lbl_80350750;
M2C_UNK fn_80029C60();
M2C_UNK fn_80005868(s32);
M2C_UNK fn_80012CF8();
s32 fn_80080790(s32);
M2C_UNK __destroy_new_array();
s32 strlen();
extern M2C_UNK fn_800146F0;
extern s8 lbl_803506C8;
extern u8 lbl_803506C9;
M2C_UNK fn_80015F5C();
M2C_UNK fn_8001DF90(s32, s32, s32);
M2C_UNK fn_8001E0D0(s32, M2C_UNK *);
s32 fn_8001E4B4(s32);
extern M2C_UNK lbl_8034FC38;
s32 BlockFreeSize();
s32 HeapFreeSize();

s32 scr_method_getPlayingActId(s32 arg0);
s32 scr_method_getPlayingAPID(s32 arg0);
s32 scr_method_getPlayingFeelId(s32 arg0);
void *fn_8008ADDC(void *arg0);
s32 scr_ShowCursor(s32 arg0);
s32 scr_HideCursor(s32 arg0);
s32 scr_SetCursorPos(s32 arg0);
s32 scr_SetCursorBarrier(s32 arg0);
s32 scr_GetCursorBarrierX(s32 arg0);
s32 scr_GetCursorBarrierY(s32 arg0);
s32 scr_IsCursorOnScreen(void);
s32 scr_GetCursorCoordX(void);
s32 scr_GetCursorCoordY(void);
s32 scr_GetCursorPosX(s32 arg0);
s32 scr_GetCursorPosY(s32 arg0);
s32 scr_DisableNadeNadeMode(void);
s32 scr_EnableNadeNadeMode(void);
s32 scr_IsNadeNadeModeEnabled(void);
s32 scr_ShowPPU(void);
s32 fn_8008B264(s32 arg0, s8 arg1, M2C_UNK arg_sp0);
void fn_8008B354(s32 arg0);
void scr_OsPrint(void);
void scr_OsPrintLine(void);
s32 fn_8008B3D8(s32 arg0, u8 arg1, s32 arg2, u8 arg3, M2C_UNK arg_sp0);
void scr_Print(void);
void scr_PrintLine(void);
void scr_PrintLoc(void);
s32 scr_SetDebugLevel(s32 arg0);
s32 scr_SetInitialDebugLevel(s32 arg0);
s32 scr_BlockFreeSize(s32 arg0);
s32 scr_HeapFreeSize(s32 arg0);
void fn_8008B6BC(void);

s32 scr_method_getPlayingActId(s32 arg0) {
    fn_8008ADDC((void *)(0));
    fn_8008065C(arg0, method_getPlayingActId());
    return 0;
}

s32 scr_method_getPlayingAPID(s32 arg0) {
    fn_8008ADDC((void *)(0));
    fn_8008065C(arg0, method_getPlayingAPID());
    return 0;
}

s32 scr_method_getPlayingFeelId(s32 arg0) {
    fn_8008ADDC((void *)(0));
    fn_8008065C(arg0, method_getPlayingFeelId());
    return 0;
}

void *fn_8008ADDC(void *arg0) {
    s32 temp_r4;
    void *var_r3;

    fn_80080738();
    var_r3 = fn_8007B144();
    if (var_r3 == NULL) {
        return NULL;
    }
    temp_r4 = M2C_FIELD(var_r3, s32 *, 8);
    if (!(temp_r4 & 0x800)) {
        return NULL;
    }
    if ((temp_r4 & 2) && !(temp_r4 & 0x2000) && ((u32) M2C_FIELD(arg0, u32 *, 0x2E0) != (u32) M2C_FIELD(var_r3, u32 *, 0x24))) {
        var_r3 = NULL;
    }
    return var_r3;
}

s32 scr_ShowCursor(s32 arg0) {
    s32 var_r3;
    u16 temp_r31;

    var_r3 = 1;
    var_r3 = fn_8007FC40() != 1 ? var_r3 : fn_80080738(arg0);
    temp_r31 = M2C_FIELD(lbl_803504F0, s8 *, 0x53);
    fn_80029CE8(lbl_803504F0, var_r3 != 0, lbl_803504F0);
    fn_8008065C(arg0, temp_r31 != 0);
    return 0;
}

s32 scr_HideCursor(s32 arg0) {
    s32 var_r3;
    s16 temp_r31;

    var_r3 = 1;
    var_r3 = fn_8007FC40() != 1 ? var_r3 : fn_80080738(arg0);
    temp_r31 = M2C_FIELD(lbl_803504F0, u8 *, 0x53);
    fn_80029CE8(lbl_803504F0, var_r3 == 0, lbl_803504F0);
    fn_8008065C(arg0, (u8) (temp_r31 == 0));
    return 0;
}

s32 scr_SetCursorPos(s32 arg0) {
    f32 temp_f31;

    temp_f31 = fn_80080764((long)(0));
    fn_80080764(arg0);
    SetCursorPos(lbl_803504F8, temp_f31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_SetCursorBarrier(s32 arg0) {
    f32 temp_f31;

    temp_f31 = fn_80080764((long)(0));
    fn_80080764(arg0);
    SetCursorBarrier(lbl_803504F8, temp_f31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_GetCursorBarrierX(s32 arg0) {
    f32 spC;
    M2C_UNK sp8;

    fn_8001E644(lbl_803504F8, &spC, &sp8);
    fn_80080698(arg0, spC);
    return 0;
}

s32 scr_GetCursorBarrierY(s32 arg0) {
    M2C_UNK spC;
    f32 sp8;

    fn_8001E644(lbl_803504F8, &spC, &sp8);
    fn_80080698(arg0, sp8);
    return 0;
}

s32 scr_IsCursorOnScreen(void) {
    fn_8008065C((long)(lbl_80350749), (long)(0));
    return 0;
}

s32 scr_GetCursorCoordX(void) {
    fn_80080698((long)(lbl_8035074C), (float)(0));
    return 0;
}

s32 scr_GetCursorCoordY(void) {
    fn_80080698((long)(lbl_80350750), (float)(0));
    return 0;
}

s32 scr_GetCursorPosX(s32 arg0) {
    f32 spC;
    M2C_UNK sp8;

    fn_80029C60(lbl_803504F0, &spC, &sp8);
    fn_80080698(arg0, spC);
    return 0;
}

s32 scr_GetCursorPosY(s32 arg0) {
    M2C_UNK spC;
    f32 sp8;

    fn_80029C60(lbl_803504F0, &spC, &sp8);
    fn_80080698(arg0, sp8);
    return 0;
}

s32 scr_DisableNadeNadeMode(void) {
    M2C_FIELD(lbl_803504F8, s8 *, 0x3E) = 0;
    M2C_FIELD(lbl_803504F8, s8 *, 0x41) = 0;
    M2C_FIELD(lbl_803504F0, s8 *, 0x10B) = 0;
    fn_8008065C(0, lbl_803504F0);
    return 0;
}

s32 scr_EnableNadeNadeMode(void) {
    M2C_FIELD(lbl_803504F8, s8 *, 0x41) = 1;
    fn_8008065C(0, lbl_803504F8);
    return 0;
}

s32 scr_IsNadeNadeModeEnabled(void) {
    fn_8008065C(M2C_FIELD(lbl_803504F8, u8 *, 0x41));
    return 0;
}

s32 scr_ShowPPU(void) {
    fn_8008065C(0);
    return 0;
}

s32 fn_8008B264(s32 arg0, s8 arg1, M2C_UNK arg_sp0) {
    s32 temp_r29;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r25;
    s32 var_r27;

    if ((s8) lbl_803506C9 == 0) {
        lbl_803506C8 = 0;
        lbl_803506C9 = 1;
    }
    temp_r3 = fn_8007FC40(arg0);
    if (temp_r3 > 0) {
        fn_80005868((temp_r3 * 4) + 0x10);
        temp_r3_2 = fn_8014AF48(fn_8008B354, &fn_800146F0, 4, temp_r3);
        var_r25 = 0;
        var_r27 = temp_r3_2;
loop_5:
        if (var_r25 < temp_r3) {
            temp_r29 = fn_80080790(arg0);
            fn_80012CF8(var_r27, temp_r29, strlen());
            var_r27 += 4;
            var_r25 += 1;
            goto loop_5;
        }
        __destroy_new_array(temp_r3_2, &fn_800146F0);
    }
    lbl_803506C8 = arg1;
    fn_8008065C(arg0, 0);
    return 0;
}

void fn_8008B354(s32 arg0) {
    M2C_UNK sp8;

    /* draft: did not compile: fn_80015F5C(arg0, fn_8008B6BC()); */
}

void scr_OsPrint(void) {
    fn_8008B264((long)(0), (signed char)(0), (long)(0));
}

void scr_OsPrintLine(void) {
    fn_8008B264((long)(1), (signed char)(0), (long)(0));
}

s32 fn_8008B3D8(s32 arg0, u8 arg1, s32 arg2, u8 arg3, M2C_UNK arg_sp0) {
    s32 temp_r23;
    s32 temp_r26;
    s32 temp_r31;
    s32 var_r23;
    s32 var_r23_2;
    s32 var_r30;
    void **var_r24;
    void **var_r24_2;
    void **var_r25;

    temp_r31 = fn_8001E4B4(arg2);
    var_r30 = fn_8007FC40(arg0);
    if (arg3 != 0) {
        var_r30 -= 2;
    }
    if (var_r30 > 0) {
        fn_80005868((var_r30 * 4) + 0x10);
        /* draft: did not compile: var_r25 = fn_8014AF48(fn_8008B354, &fn_800146F0, 4, var_r30); */
    } else {
        var_r25 = NULL;
    }
    var_r23 = var_r30 - 1;
    var_r24 = &var_r25[var_r23];
loop_7:
    if (var_r23 >= 0) {
        temp_r26 = fn_80080790(arg0);
        fn_80012CF8(var_r24, temp_r26, strlen());
        var_r24 -= 4;
        var_r23 -= 1;
        goto loop_7;
    }
    if (arg3 != 0) {
        temp_r23 = fn_80080738(arg0);
        fn_8001DF90(temp_r31, fn_80080738(arg0), temp_r23);
    }
    var_r24_2 = var_r25;
    var_r23_2 = 0;
loop_12:
    if (var_r23_2 < var_r30) {
        fn_8001E0D0(temp_r31, M2C_FIELD(*var_r24_2, M2C_UNK **, 0xC));
        var_r24_2 += 4;
        var_r23_2 += 1;
        goto loop_12;
    }
    __destroy_new_array(var_r25, &fn_800146F0);
    if (arg1 != 0) {
        fn_8001E0D0(temp_r31, &lbl_8034FC38);
    }
    fn_8008065C(arg0, 0);
    return 0;
}

void scr_Print(void) {
    fn_8008B3D8((long)(0), (unsigned char)(0), (long)(0), (unsigned char)(0), (long)(0));
}

void scr_PrintLine(void) {
    fn_8008B3D8((long)(1), (unsigned char)(0), (long)(0), (unsigned char)(0), (long)(0));
}

void scr_PrintLoc(void) {
    fn_8008B3D8((long)(0), (unsigned char)(1), (long)(1), (unsigned char)(0), (long)(0));
}

s32 scr_SetDebugLevel(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_SetInitialDebugLevel(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_BlockFreeSize(s32 arg0) {
    fn_8008065C(arg0, BlockFreeSize());
    return 0;
}

s32 scr_HeapFreeSize(s32 arg0) {
    fn_8008065C(arg0, HeapFreeSize());
    return 0;
}

void fn_8008B6BC(void) {

}
