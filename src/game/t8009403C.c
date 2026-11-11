/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_8001FFF4(void **, s32);
M2C_UNK fn_80020054(s32);
M2C_UNK fn_8002F774();
M2C_UNK fn_8008065C();
s32 fn_80080738();
u8 IsModelLoaded(s32);
M2C_UNK fn_800202C0();
M2C_UNK VIWaitForRetrace();
M2C_UNK fn_800806D4(s32, s32);
s32 fn_80080790(s32);
s32 method_addDebugMenu(s32, s32, s32);
void *fn_80089738(s32);
s32 method_eraseDebugMenu(s32);
extern s32 lbl_8034EB30;
M2C_UNK fn_80005888(void **);
M2C_UNK PadSetMux(s32);
M2C_UNK PadResetMux();
s32 PadGetButton();
s32 PadGetTrigger();
s32 PadGetRepeat();
s32 PadGetRelease();
M2C_UNK PadGetNormalAnalogA();
M2C_UNK fn_80080698(s32);
M2C_UNK PadGetNormalAnalogB();
M2C_UNK PadGetNormalAnalogL();
M2C_UNK PadGetNormalAnalogR();
M2C_UNK PadGetNormalStickX();
M2C_UNK PadGetNormalStickY();
M2C_UNK PadGetNormalSubStickX();
M2C_UNK PadGetNormalSubStickY();
M2C_UNK PadGetAnalogA();
M2C_UNK PadGetAnalogB();
M2C_UNK PadGetAnalogL();
M2C_UNK PadGetAnalogR();
M2C_UNK PadGetStickX();
M2C_UNK PadGetStickY();
M2C_UNK PadGetSubStickX();
M2C_UNK PadGetSubStickY();
s32 PadGetResetSwitch();

s32 scr_RequestModel(void *arg0);
s32 scr_IsModelLoaded(void *arg0);
s32 scr_ReleaseModelIndeed(void *arg0, M2C_UNK arg_sp0);
s32 scr_UnloadIfPossible(s32 arg0);
s32 scr_GetModelNameFromMdlId(s32 arg0);
s32 scr_method_addDebugMenu(s32 arg0);
s32 scr_method_eraseDebugMenu(s32 arg0);
s32 scr_SetAttribMask(s32 arg0);
void fn_800947B0(void ***arg0, s32 *arg1, void ***arg2);
s32 scr_PadSetMux(s32 arg0);
s32 scr_PadResetMux(s32 arg0);
s32 scr_PadGetButton(s32 arg0);
s32 scr_PadGetTrigger(s32 arg0);
s32 scr_PadGetRepeat(s32 arg0);
s32 scr_PadGetRelease(s32 arg0);
s32 scr_PadGetNormalAnalogA(s32 arg0);
s32 scr_PadGetNormalAnalogB(s32 arg0);
s32 scr_PadGetNormalAnalogL(s32 arg0);
s32 scr_PadGetNormalAnalogR(s32 arg0);
s32 scr_PadGetNormalStickX(s32 arg0);
s32 scr_PadGetNormalStickY(s32 arg0);
s32 scr_PadGetNormalSubStickX(s32 arg0);
s32 scr_PadGetNormalSubStickY(s32 arg0);
s32 scr_PadGetAnalogA(s32 arg0);
s32 scr_PadGetAnalogB(s32 arg0);
s32 scr_PadGetAnalogL(s32 arg0);
s32 scr_PadGetAnalogR(s32 arg0);
s32 scr_PadGetStickX(s32 arg0);
s32 scr_PadGetStickY(s32 arg0);
s32 scr_PadGetSubStickX(s32 arg0);
s32 scr_PadGetSubStickY(s32 arg0);
s32 scr_PadGetResetSwitch(s32 arg0);

s32 scr_RequestModel(void *arg0) {
    void *sp14;
    void *sp10;
    u32 spC;
    M2C_UNK sp8;
    s32 temp_r3;
    u32 temp_r30;
    void *var_r3;

    temp_r3 = fn_80080738();
    if (temp_r3 != 0x19D) {
        fn_8001FFF4(&sp10, temp_r3);
        sp14 = sp10;
        if (sp10 != NULL) {
            M2C_FIELD(sp10, s32 *, 0) = (s32) (M2C_FIELD(sp10, s32 *, 0) + 1);
        }
        if (sp10 != NULL) {
            M2C_FIELD(sp10, s32 *, 0) = (s32) (M2C_FIELD(sp10, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(sp10, s32 *, 0) == 0) && (sp10 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp10, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        /* draft: did not compile: temp_r30 = arg0 + 0x2F8; */
        sp10 = NULL;
        var_r3 = M2C_FIELD(arg0, void **, 0x2FC);
loop_9:
        if (0 /* draft: did not compile */) {
            var_r3 = M2C_FIELD(var_r3, void **, 4);
            goto loop_9;
        }
        if (0 /* draft: did not compile */) {
            fn_80020054(temp_r3);
            spC = temp_r30;
            /* draft: did not compile: fn_8002F774(&sp8, arg0 + 0x2F4, &spC, &sp14); */
        }
        if (sp14 != NULL) {
            M2C_FIELD(sp14, s32 *, 0) = (s32) (M2C_FIELD(sp14, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(sp14, s32 *, 0) == 0) && (sp14 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp14, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp14 = NULL;
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_IsModelLoaded(void *arg0) {
    void *var_r31;
    void *temp_r3_2;
    s32 temp_r3;
    u8 var_r29;

    temp_r3 = fn_80080738();
    var_r29 = 0;
    if (temp_r3 == 0x19D) {
        var_r29 = 1;
    } else if ((u8) (temp_r3 == 0) != 0) {
        var_r31 = M2C_FIELD(arg0, void **, 0x2FC);
loop_4:
        if (0 /* draft: did not compile */) {
            var_r29 = 1;
        } else {
            if (IsModelLoaded(M2C_FIELD(M2C_FIELD(M2C_FIELD((temp_r3_2 = M2C_FIELD(var_r31, void **, 8)), void **, 4), void *(**)(void *), 0x18)(temp_r3_2), s32 *, 4)) != 0) {
                var_r31 = M2C_FIELD(var_r31, void **, 4);
                goto loop_4;
            }
        }
    } else {
        var_r29 = IsModelLoaded((long)(0));
    }
    fn_8008065C(arg0, var_r29);
    return 0;
}

#pragma push
#pragma optimize_for_size on
s32 scr_ReleaseModelIndeed(void *arg0, M2C_UNK arg_sp0) {
    void *sp14;
    void *sp10;
    void *spC;
    void *sp8;
    M2C_UNK var_r31;
    s32 temp_r3;
    s32 var_r25;
    s8 var_r26;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *var_r28;
    void *var_r29;

    var_r26 = var_r25 = var_r31 = 0;
    temp_r3 = fn_80080738();
    if (temp_r3 != 0x19D) {
        if ((u8) (temp_r3 == 0) != 0) {
            var_r29 = M2C_FIELD(arg0, void **, 0x2FC);
loop_3:
            if (0 /* draft: did not compile */) {
                temp_r3_2 = M2C_FIELD(var_r29, void **, 8);
                if (M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 4), s32 (**)(void *), 0x28)(temp_r3_2) == 2) {
                    sp10 = var_r29;
                    /* draft: did not compile: fn_800947B0(&sp14, arg0 + 0x2F4, &sp10); */
                    var_r29 = sp14;
                    var_r25 = 1;
                } else {
                    var_r29 = M2C_FIELD(var_r29, void **, 4);
                    var_r26 = 1;
                }
                goto loop_3;
            }
        } else {
            var_r28 = M2C_FIELD(arg0, void **, 0x2FC);
loop_8:
            if (0 /* draft: did not compile */) {
                temp_r3_3 = M2C_FIELD(var_r28, void **, 8);
                if (temp_r3 == (s32) M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 4), void *(**)(void *), 0x18)(temp_r3_3), s32 *, 4)) {
                    temp_r3_4 = M2C_FIELD(var_r28, void **, 8);
                    if (M2C_FIELD(M2C_FIELD(temp_r3_4, void **, 4), s32 (**)(void *), 0x28)(temp_r3_4) == 2) {
                        sp8 = var_r28;
                        /* draft: did not compile: fn_800947B0(&spC, arg0 + 0x2F4, &sp8); */
                        var_r25 = 1;
                    } else {
                        var_r26 = 1;
                    }
                } else {
                    var_r28 = M2C_FIELD(var_r28, void **, 4);
                    goto loop_8;
                }
            }
        }
    }
    if (var_r25 != 0) {
        fn_800202C0();
    }
    if (var_r26 != 0) {
        var_r31 = 1;
    } else if (var_r25 == 0) {
        var_r31 = -1;
    }
    fn_8008065C(arg0, var_r31);
    return 0;
}
#pragma pop

s32 scr_UnloadIfPossible(s32 arg0) {
    s32 var_r31;

    var_r31 = 0;
    do {
        VIWaitForRetrace();
        var_r31 += 1;
    } while (var_r31 < 0xC);
    fn_800202C0();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_GetModelNameFromMdlId(s32 arg0) {
    void *sp14;
    void *sp10;
    void *spC;
    void *sp8;
    s32 temp_r3;

    temp_r3 = fn_80080738();
    if (temp_r3 > 0) {
        fn_8001FFF4((void **)(&spC), (long)(0));
        sp14 = spC;
        if (spC != NULL) {
            M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) + 1);
        }
        if (spC != NULL) {
            M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(spC, s32 *, 0) == 0) && (spC != NULL)) {
                M2C_FIELD(M2C_FIELD(spC, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        spC = NULL;
        fn_800806D4(arg0, M2C_FIELD(M2C_FIELD(sp14, void **, 4), s32 (**)(void *), 0x34)(sp14));
        if (sp14 != NULL) {
            M2C_FIELD(sp14, s32 *, 0) = (s32) (M2C_FIELD(sp14, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(sp14, s32 *, 0) == 0) && (sp14 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp14, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp14 = NULL;
    } else {
        fn_8001FFF4(&sp8, -temp_r3);
        sp10 = sp8;
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) + 1);
        }
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp8, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp8 = NULL;
        fn_800806D4(arg0, M2C_FIELD(M2C_FIELD(sp10, void **, 4), s32 (**)(void *), 0x30)(sp10));
        if (sp10 != NULL) {
            M2C_FIELD(sp10, s32 *, 0) = (s32) (M2C_FIELD(sp10, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(sp10, s32 *, 0) == 0) && (sp10 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp10, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp10 = NULL;
    }
    return 0;
}

s32 scr_method_addDebugMenu(s32 arg0) {
    s32 temp_r31;
    s32 temp_r30;
    s32 temp_r29;
    void *temp_r3;

    temp_r31 = fn_80080738();
    temp_r30 = fn_80080738(arg0);
    temp_r29 = fn_80080790(arg0);
    temp_r3 = fn_80089738(arg0);
    if ((temp_r3 != NULL) && (M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), u32 (**)(), 0x10)() != 0U)) {
        fn_8008065C(arg0, method_addDebugMenu(temp_r29, temp_r30, temp_r31));
        return 0;
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_eraseDebugMenu(s32 arg0) {
    s32 temp_r31;
    void *temp_r3;

    temp_r31 = fn_80080738();
    temp_r3 = fn_80089738(arg0);
    if ((temp_r3 != NULL) && (M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), u32 (**)(), 0x10)() != 0U)) {
        fn_8008065C(arg0, method_eraseDebugMenu(temp_r31));
        return 0;
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_SetAttribMask(s32 arg0) {
    s32 temp_r3;

    temp_r3 = fn_80080738();
    lbl_8034EB30 = ~(temp_r3 | temp_r3);
    fn_8008065C(arg0, 0);
    return 0;
}

void fn_800947B0(void ***arg0, s32 *arg1, void ***arg2) {
    void **temp_r5;
    void *temp_r3;
    void *temp_r4;

    temp_r5 = *arg2;
    *arg2 = M2C_FIELD(temp_r5, void ***, 4);
    M2C_FIELD(M2C_FIELD(temp_r5, void **, 0), void ***, 4) = (void **) M2C_FIELD(temp_r5, void ***, 4);
    *M2C_FIELD(temp_r5, void ***, 4) = M2C_FIELD(temp_r5, void **, 0);
    if ((temp_r5 + 8) != NULL) {
        temp_r4 = M2C_FIELD(temp_r5, void **, 8);
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
            if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                temp_r3 = M2C_FIELD(temp_r5, void **, 8);
                if (temp_r3 != NULL) {
                    M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
        }
        M2C_FIELD(temp_r5, void **, 8) = NULL;
    }
    fn_80005888(temp_r5);
    *arg1 -= 1;
    *arg0 = *arg2;
}

s32 scr_PadSetMux(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_80080738(arg0);
    PadSetMux(temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_PadResetMux(s32 arg0) {
    fn_80080738();
    PadResetMux();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_PadGetButton(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, PadGetButton());
    return 0;
}

s32 scr_PadGetTrigger(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, PadGetTrigger());
    return 0;
}

s32 scr_PadGetRepeat(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, PadGetRepeat());
    return 0;
}

s32 scr_PadGetRelease(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, PadGetRelease());
    return 0;
}

s32 scr_PadGetNormalAnalogA(s32 arg0) {
    fn_80080738();
    PadGetNormalAnalogA();
    fn_80080698(arg0);
    return 0;
}

s32 scr_PadGetNormalAnalogB(s32 arg0) {
    fn_80080738();
    PadGetNormalAnalogB();
    fn_80080698(arg0);
    return 0;
}

s32 scr_PadGetNormalAnalogL(s32 arg0) {
    fn_80080738();
    PadGetNormalAnalogL();
    fn_80080698(arg0);
    return 0;
}

s32 scr_PadGetNormalAnalogR(s32 arg0) {
    fn_80080738();
    PadGetNormalAnalogR();
    fn_80080698(arg0);
    return 0;
}

s32 scr_PadGetNormalStickX(s32 arg0) {
    fn_80080738();
    PadGetNormalStickX();
    fn_80080698(arg0);
    return 0;
}

s32 scr_PadGetNormalStickY(s32 arg0) {
    fn_80080738();
    PadGetNormalStickY();
    fn_80080698(arg0);
    return 0;
}

s32 scr_PadGetNormalSubStickX(s32 arg0) {
    fn_80080738();
    PadGetNormalSubStickX();
    fn_80080698(arg0);
    return 0;
}

s32 scr_PadGetNormalSubStickY(s32 arg0) {
    fn_80080738();
    PadGetNormalSubStickY();
    fn_80080698(arg0);
    return 0;
}

s32 scr_PadGetAnalogA(s32 arg0) {
    fn_80080738();
    PadGetAnalogA();
    fn_80080698(arg0);
    return 0;
}

s32 scr_PadGetAnalogB(s32 arg0) {
    fn_80080738();
    PadGetAnalogB();
    fn_80080698(arg0);
    return 0;
}

s32 scr_PadGetAnalogL(s32 arg0) {
    fn_80080738();
    PadGetAnalogL();
    fn_80080698(arg0);
    return 0;
}

s32 scr_PadGetAnalogR(s32 arg0) {
    fn_80080738();
    PadGetAnalogR();
    fn_80080698(arg0);
    return 0;
}

s32 scr_PadGetStickX(s32 arg0) {
    fn_80080738();
    PadGetStickX();
    fn_80080698(arg0);
    return 0;
}

s32 scr_PadGetStickY(s32 arg0) {
    fn_80080738();
    PadGetStickY();
    fn_80080698(arg0);
    return 0;
}

s32 scr_PadGetSubStickX(s32 arg0) {
    fn_80080738();
    PadGetSubStickX();
    fn_80080698(arg0);
    return 0;
}

s32 scr_PadGetSubStickY(s32 arg0) {
    fn_80080738();
    PadGetSubStickY();
    fn_80080698(arg0);
    return 0;
}

s32 scr_PadGetResetSwitch(s32 arg0) {
    fn_8008065C(arg0, PadGetResetSwitch());
    return 0;
}
