/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

u8 fn_8007C844();
M2C_UNK fn_8008065C();
s32 fn_80080738();
M2C_UNK fn_80103060(M2C_UNK, s32);
M2C_UNK fn_8010310C(M2C_UNK, s32, M2C_UNK, M2C_UNK, u32);
extern M2C_UNK lbl_8022A0BC;
extern s32 lbl_803506F0;
M2C_UNK fn_80102F7C(u8);
M2C_UNK PadRumbleOffN(u8);
M2C_UNK PadRumbleOffH(u8);
extern M2C_UNK lbl_8031E920;
s32 PadGetDevClass();
extern M2C_UNK lbl_802CE700;
M2C_UNK EnableReset();
M2C_UNK DisableReset();
M2C_UNK PadSetXlatRatio();
M2C_UNK fn_80080764();
M2C_UNK PadSetNormalXlatRatio();
extern M2C_UNK lbl_801CDAE0;
extern s32 lbl_803519E0;
u8 GetGlobalFlag(s32);
M2C_UNK fn_80012CF8();
s32 fn_8007B144();
s32 fn_80080790();
M2C_UNK fn_800A3244();
s32 strlen();
M2C_UNK fn_8003475C();
s32 fn_800962A4();
extern M2C_UNK lbl_8034FC60;
void *get_up_vector_for_viewing_mtx(M2C_UNK);
void *fn_800224DC(s32);
M2C_UNK fn_80022584(M2C_UNK);
M2C_UNK fn_80022948(void *, s32);
M2C_UNK fn_80022978(void *);
M2C_UNK fn_8002298C(void *, s32);
s32 fn_8007FC40();
M2C_UNK fn_8009C728(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_80022F64(s32);
M2C_UNK fn_80022FCC(s32);
u8 fn_800230C4();
s32 fn_80023104(u32);
M2C_UNK fn_80080698(void *, f32);
extern f32 lbl_80351AC0;
extern f32 lbl_80351AC4;
u8 IsStreamPlaying(s32);
M2C_UNK SetStreamAudioTrack(s32, s32);
s32 GetStreamAudioTrack();
M2C_UNK method_zoomScreen(s32);

s32 scr_PadRumble(s32 arg0);
s32 scr_PadRumbleOn(s32 arg0);
s32 scr_PadRumbleOffN(s32 arg0);
s32 scr_PadRumbleOffH(s32 arg0);
s32 scr_PadSetClampAnalogLR(s32 arg0);
s32 scr_PadGetDevClass(s32 arg0);
s32 scr_EnableButtons(s32 arg0);
s32 scr_DisableButtons(s32 arg0);
s32 scr_EnableReset(s32 arg0);
s32 scr_DisableReset(s32 arg0);
s32 scr_PadSetXlatRatio(s32 arg0);
s32 scr_PadSetNormalXlatRatio(s32 arg0);
s32 *fn_80095240(s32 arg0);
void scr_GetPokemonProperty();
s32 fn_800954DC(s32 arg0);
s32 CountNiceCards(s32 arg0);
s32 scr_CountNiceCards(s32 arg0);
s32 scr_method_startProgram(s32 arg0);
s32 scr_method_stopProgram(s32 arg0);
s32 scr_StartStream(void *arg0, M2C_UNK arg_sp0);
s32 scr_StopStream(void *arg0);
s32 scr_PauseStream(void *arg0);
s32 scr_GetStreamGopNumber(void *arg0);
s32 scr_GetStreamFrame(void *arg0);
s32 scr_GetStreamTime(void *arg0);
s32 scr_IsStreamReady(void *arg0);
s32 scr_IsStreamPlaying(void *arg0);
s32 scr_IsStreamDone(void *arg0);
s32 scr_SetStreamAudioTrack(void *arg0);
s32 scr_GetStreamAudioTrack(void *arg0);
s32 scr_SetStreamVolume(void *arg0);
s32 scr_method_zoomScreen(s32 arg0);

s32 scr_PadRumble(s32 arg0) {
    s32 temp_r3;
    u32 var_r31;

    temp_r3 = fn_80080738();
    var_r31 = 0U;
    if ((temp_r3 > 0) && (temp_r3 < 4)) {
        var_r31 = M2C_FIELD((&lbl_8022A0BC + (temp_r3 * 4)), u32 *, -4);
    }
    if ((var_r31 != 0U) && (fn_8007C844() != 0)) {
        fn_80103060(0, lbl_803506F0 - 8);
        fn_8010310C(0, lbl_803506F0, -2, 0, var_r31);
        lbl_803506F0 += 1;
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_PadRumbleOn(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    if (fn_8007C844() != 0) {
        fn_80102F7C(temp_r31);
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_PadRumbleOffN(s32 arg0) {
    PadRumbleOffN(fn_80080738());
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_PadRumbleOffH(s32 arg0) {
    PadRumbleOffH(fn_80080738());
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_PadSetClampAnalogLR(s32 arg0) {
    u8 temp_r31;
    u8 temp_r30;

    temp_r31 = fn_80080738();
    temp_r30 = fn_80080738(arg0);
    M2C_FIELD(&lbl_8031E920, u8 *, 0x20) = fn_80080738(arg0);
    M2C_FIELD(&lbl_8031E920, u8 *, 0x21) = temp_r30;
    M2C_FIELD(&lbl_8031E920, u8 *, 0x22) = temp_r31;
    fn_8008065C((long)(arg0), (long)(0));
    return 0;
}

s32 scr_PadGetDevClass(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, PadGetDevClass());
    return 0;
}

s32 scr_EnableButtons(s32 arg0) {
    s32 temp_r31;
    s32 temp_r6;

    temp_r31 = fn_80080738();
    temp_r6 = fn_80080738(arg0) * 4;
    *(&lbl_802CE700 + temp_r6) = *(&lbl_802CE700 + temp_r6) | temp_r31;
    fn_8008065C((long)(arg0), (long)(0));
    return 0;
}

s32 scr_DisableButtons(s32 arg0) {
    s32 temp_r31;
    s32 temp_r6;

    temp_r31 = fn_80080738();
    temp_r6 = fn_80080738(arg0) * 4;
    *(&lbl_802CE700 + temp_r6) = *(&lbl_802CE700 + temp_r6) & ~temp_r31;
    fn_8008065C((long)(arg0), (long)(0));
    return 0;
}

s32 scr_EnableReset(s32 arg0) {
    EnableReset();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_DisableReset(s32 arg0) {
    DisableReset();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_PadSetXlatRatio(s32 arg0) {
    fn_80080764();
    PadSetXlatRatio();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_PadSetNormalXlatRatio(s32 arg0) {
    fn_80080764();
    PadSetNormalXlatRatio();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 *fn_80095240(s32 arg0) {
    s32 *temp_r4;
    s32 *var_r4;
    s32 var_ctr;
    s32 var_r6;

    if ((arg0 > 0) && (arg0 < (s32) lbl_803519E0)) {
        temp_r4 = &lbl_801CDAE0 + (arg0 * 0x64);
        if (arg0 == (s32) *temp_r4) {
            return temp_r4;
        }
    }
    var_r6 = lbl_803519E0;
    var_r6 -= 1;
    var_r4 = &lbl_801CDAE0 + (var_r6 * 0x64);
    var_ctr = var_r6 + 1;
    if (var_r6 >= 0) {
loop_5:
        if (arg0 == (s32) *var_r4) {
            return &lbl_801CDAE0 + (var_r6 * 0x64);
        }
        var_r4 -= 0x64;
        var_r6 -= 1;
        var_ctr -= 1;
        if (var_ctr == 0) {
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return NULL;
        }
        goto loop_5;
    }
    return NULL;
}

void scr_GetPokemonProperty() { } /* draft: stub */

s32 fn_800954DC(s32 arg0) {
    s32 var_r31;
    s32 var_r30;

    var_r31 = 0;
    var_r30 = 0;
    do {
        if (GetGlobalFlag(arg0 + var_r30) != 0) {
            var_r31 += 1;
        }
        var_r30 += 1;
    } while (var_r30 < 0x6E);
    return var_r31;
}

#pragma push
#pragma dont_inline on
s32 CountNiceCards(s32 arg0) {
    s32 var_r31;
    s32 var_r30;

    var_r31 = 0;
    switch (arg0) {                                 /* irregular */
    case 0x0:
        var_r30 = 0;
        do {
            if ((GetGlobalFlag(var_r30 + 0x54) != 0) || (GetGlobalFlag(var_r30 + 0xC2) != 0) || (GetGlobalFlag(var_r30 + 0x130) != 0)) {
                var_r31 += 1;
            }
            var_r30 += 1;
        } while (var_r30 < 0x6E);
        break;
    case 0xC2:
    case 0x130:
    case 0x54:
        var_r31 = fn_800954DC((long)(0));
        break;
    }
    return var_r31;
}
#pragma pop

s32 scr_CountNiceCards(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, CountNiceCards((long)(0)));
    return 0;
}

s32 scr_method_startProgram(s32 arg0) {
    s32 temp_r30;
    s32 temp_r31;

    temp_r30 = fn_80080790();
    fn_80080738(arg0);
    temp_r31 = fn_8007B144();
    fn_800A3244();
    fn_80012CF8(temp_r31 + 0x1EC, temp_r30, strlen(temp_r30));
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_stopProgram(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_800962A4();
    fn_800A3244();
    fn_8003475C();
    fn_80012CF8(temp_r31 + 0x1EC, &lbl_8034FC60, strlen(&lbl_8034FC60));
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_StartStream(void *arg0, M2C_UNK arg_sp0) {
    void *temp_r30;
    s32 temp_r3;
    u8 var_r29;
    void *var_r28;
    s32 var_r27;
    s32 var_r26;
    s32 temp_r25;
    void *temp_r3_2;

    temp_r3 = fn_8007FC40();
    var_r27 = 0;
    var_r26 = -1;
    if (temp_r3 >= 3) {
        var_r26 = fn_80080738(arg0) - 1;
    }
    if (temp_r3 >= 2) {
        var_r27 = fn_80080738(arg0) - 1;
    }
    temp_r25 = fn_80080790(arg0);
    temp_r30 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), void **, 0x38);
    temp_r3_2 = M2C_FIELD(temp_r30, void **, 0x10);
    if (temp_r3_2 != NULL) {
        var_r29 = M2C_FIELD(temp_r3_2, u8 *, 0xA);
    } else {
        var_r29 = 0;
    }
    fn_80022584(1);
    var_r28 = get_up_vector_for_viewing_mtx(0x180);
    if (var_r28 != NULL) {
        var_r28 = fn_800224DC(temp_r25);
    }
    M2C_FIELD(var_r28, u8 *, 0xA) = var_r29;
    M2C_FIELD(temp_r30, void **, 0x10) = var_r28;
    fn_8009C728(temp_r30, M2C_FIELD(temp_r30, s32 *, 0x3C), 1, -1, -1);
    if (temp_r3 == 1) {
        fn_80022948(var_r28, var_r26);
        fn_80022978(var_r28);
    } else {
        fn_80022948(var_r28, var_r26);
        fn_8002298C(var_r28, var_r27);
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_StopStream(void *arg0) { return 0; } /* draft: stub */

s32 scr_PauseStream(void *arg0) {
    s32 temp_r31;
    void *temp_r4;

    temp_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), void **, 0x38);
    temp_r31 = M2C_FIELD(temp_r4, s32 *, 0x10);
    if (fn_80080738(temp_r4) != 0) {
        fn_80022FCC(temp_r31);
    } else {
        fn_80022F64(temp_r31);
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_GetStreamGopNumber(void *arg0) {
    void *temp_r31;
    s32 var_r30;

    var_r30 = -1;
    temp_r31 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), void **, 0x38), void **, 0x10);
    if ((temp_r31 != NULL) && (fn_800230C4(temp_r31) != 0)) {
        var_r30 = M2C_FIELD(temp_r31, s32 *, 0x158);
        if (var_r30 < 0) {
            var_r30 = -1;
        }
    }
    fn_8008065C(arg0, var_r30);
    return 0;
}

s32 scr_GetStreamFrame(void *arg0) {
    void *temp_r31;
    s32 var_r30;

    var_r30 = -1;
    temp_r31 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), void **, 0x38), void **, 0x10);
    if ((temp_r31 != NULL) && (fn_800230C4(temp_r31) != 0)) {
        var_r30 = M2C_FIELD(temp_r31, s32 *, 0x160);
        var_r30 += 1;
        if (var_r30 <= 0) {
            var_r30 = -1;
        }
    }
    fn_8008065C(arg0, var_r30);
    return 0;
}

s32 scr_GetStreamTime(void *arg0) {
    f32 var_f31;
    u32 temp_r31;

    var_f31 = lbl_80351AC0;
    temp_r31 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), void **, 0x38), u32 *, 0x10);
    if ((temp_r31 != 0U) && (fn_800230C4(temp_r31) != 0)) {
        var_f31 = (f32) (fn_80023104(temp_r31) / 1000) / lbl_80351AC4;
    }
    fn_80080698(arg0, var_f31);
    return 0;
}

s32 scr_IsStreamReady(void *arg0) {
    fn_8008065C(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), void **, 0x38), void **, 0x10), s32 *, 0x18) != 0);
    return 0;
}

s32 scr_IsStreamPlaying(void *arg0) {
    fn_8008065C(arg0, IsStreamPlaying(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), void **, 0x38), s32 *, 0x10)));
    return 0;
}

s32 scr_IsStreamDone(void *arg0) {
    u8 var_r0;
    void *temp_r4;

    temp_r4 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), void **, 0x38), void **, 0x10);
    if (temp_r4 != NULL) {
        var_r0 = M2C_FIELD(temp_r4, u8 *, 9);
    } else {
        var_r0 = 0;
    }
    fn_8008065C(var_r0);
    return 0;
}

s32 scr_SetStreamAudioTrack(void *arg0) {
    s32 temp_r31;
    void *temp_r4;

    temp_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), void **, 0x38);
    temp_r31 = M2C_FIELD(temp_r4, s32 *, 0x10);
    SetStreamAudioTrack(temp_r31, fn_80080738(temp_r4));
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_GetStreamAudioTrack(void *arg0) {
    s32 var_r4;

    var_r4 = -1;
    if ((u32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), void **, 0x38), u32 *, 0x10) != 0U) {
        var_r4 = GetStreamAudioTrack();
    }
    fn_8008065C(arg0, var_r4);
    return 0;
}

s32 scr_SetStreamVolume(void *arg0) { return 0; } /* draft: stub */

s32 scr_method_zoomScreen(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_800962A4(arg0);
    method_zoomScreen(temp_r31 != 0);
    fn_8008065C(arg0, 0);
    return 0;
}
