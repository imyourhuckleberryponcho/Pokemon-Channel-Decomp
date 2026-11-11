/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

u8 method_enableFur(s32);
M2C_UNK fn_8008065C();
s32 fn_80080738();
M2C_UNK fn_800913C0();
M2C_UNK method_setAnimRate(f32);
f32 fn_80080764();
M2C_UNK method_seekMotion(f32);
M2C_UNK method_setTexture(s32);
M2C_UNK method_setAnitex(s32);
M2C_UNK method_resetAnitex();
M2C_UNK method_setAnishape(s32);
M2C_UNK method_resetAnishape();
M2C_UNK method_setShapeMotion(s32, f32);
M2C_UNK method_setItemName(s32);
s32 fn_80080790();
M2C_UNK method_setItemDesc(s32);
s32 method_getItemName();
M2C_UNK fn_800806D4(s32, s32);
s32 method_getItemDesc();
M2C_UNK method_setAmbientCorrection(s8 *);
M2C_UNK fn_80075574();
M2C_UNK fn_80080698();
M2C_UNK method_getCollSize(f32 *, M2C_UNK);
M2C_UNK fn_800335C0(f32 *);
M2C_UNK fn_80091348(s32, f32, f32);
M2C_UNK fn_8007B1B0();
void *fn_8007AEC4(M2C_UNK, M2C_UNK);
void *fn_8007AF20();
M2C_UNK fn_8007B1C0();
M2C_UNK method_setManpuObject(s32, s32, s32, s32, f32);
M2C_UNK method_getBeginFrame();
M2C_UNK method_getEndFrame();
M2C_UNK method_getCurrentFrame();
M2C_UNK GetMotionEndFrame(void **, s32);
extern f32 lbl_80351A88;

s32 scr_method_enableFur(s32 arg0);
s32 scr_method_setAnimRate(s32 arg0);
s32 scr_method_seekMotion(s32 arg0);
s32 scr_method_setRootTransScale(s32 arg0);
s32 scr_method_setTexture(s32 arg0);
s32 scr_method_setAnitex(s32 arg0);
s32 scr_method_resetAnitex(s32 arg0);
s32 scr_method_setAnishape(s32 arg0);
s32 scr_method_resetAnishape(s32 arg0);
s32 scr_method_setShapeMotion(s32 arg0);
s32 scr_method_setItemName(s32 arg0);
s32 scr_method_setItemDesc(s32 arg0);
s32 scr_method_getItemName(s32 arg0);
s32 scr_method_getItemDesc(s32 arg0);
s32 scr_method_setAmbientCorrection(s32 arg0);
s32 scr_method_unsetAmbientCorrection(s32 arg0);
s32 scr_method_getCollX(s32 arg0);
s32 scr_method_getCollY(s32 arg0);
s32 scr_method_getCollZ(s32 arg0);
s32 scr_method_getCollRadius(s32 arg0);
s32 scr_method_getCollSize(s32 arg0);
s32 scr_method_throwItem(s32 arg0);
s32 scr_method_setAdhocZOrderCorrection(s32 arg0);
void scr_SearchFirstObject(void *arg0);
s32 scr_SearchNextObject(void *arg0);
s32 scr_SearchEnd(void *arg0);
s32 scr_method_setManpuObject(s32 arg0);
s32 scr_method_getManpuObject(s32 arg0);
s32 scr_method_getBeginFrame(s32 arg0);
s32 scr_method_getEndFrame(s32 arg0);
s32 scr_method_getCurrentFrame(s32 arg0);
s32 scr_GetMotionEndFrame(s32 arg0);

s32 scr_method_enableFur(s32 arg0) {
    s8 temp_r31;

    temp_r31 = fn_80080738() != 0;
    fn_800913C0(arg0);
    fn_8008065C(arg0, method_enableFur(temp_r31));
    return 0;
}

s32 scr_method_setAnimRate(s32 arg0) {
    f32 temp_f31;

    temp_f31 = fn_80080764();
    fn_800913C0(arg0);
    method_setAnimRate(temp_f31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_seekMotion(s32 arg0) {
    f32 temp_f31;

    temp_f31 = fn_80080764();
    fn_800913C0(arg0);
    method_seekMotion(temp_f31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setRootTransScale(s32 arg0) {
    f32 temp_f31;

    temp_f31 = fn_80080764();
    M2C_FIELD(M2C_FIELD(fn_800913C0(arg0), void **, 0x20), M2C_UNK (**)(f32), 0x44)(temp_f31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setTexture(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_800913C0(arg0);
    method_setTexture(temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setAnitex(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_800913C0(arg0);
    method_setAnitex(temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_resetAnitex(s32 arg0) {
    fn_800913C0((long)(0));
    method_resetAnitex();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setAnishape(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_800913C0(arg0);
    method_setAnishape(temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_resetAnishape(s32 arg0) {
    fn_800913C0((long)(0));
    method_resetAnishape();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setShapeMotion(s32 arg0) {
    s32 temp_r30;
    s32 temp_r31;

    temp_r31 = fn_80080738();
    temp_r30 = fn_80080738(arg0);
    fn_800913C0(arg0);
    method_setShapeMotion(temp_r30, (f32) temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setItemName(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080790();
    fn_800913C0(arg0);
    method_setItemName(temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setItemDesc(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080790();
    fn_800913C0(arg0);
    method_setItemDesc(temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getItemName(s32 arg0) {
    fn_800913C0((long)(0));
    fn_800806D4(arg0, method_getItemName());
    return 0;
}

s32 scr_method_getItemDesc(s32 arg0) {
    fn_800913C0((long)(0));
    fn_800806D4(arg0, method_getItemDesc());
    return 0;
}

s32 scr_method_setAmbientCorrection(s32 arg0) {
    s8 spA;
    s8 sp9;
    s8 sp8;

    spA = fn_80080738();
    sp9 = fn_80080738(arg0);
    sp8 = fn_80080738(arg0);
    fn_800913C0(arg0);
    method_setAmbientCorrection(&sp8);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_unsetAmbientCorrection(s32 arg0) {
    M2C_FIELD(fn_800913C0(), s8 *, 0x187) = 0;
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getCollX(s32 arg0) {
    f32 sp8;

    fn_800913C0();
    fn_80075574(&sp8, 0);
    fn_80080698(arg0, sp8);
    return 0;
}

s32 scr_method_getCollY(s32 arg0) {
    s32 spC;
    M2C_UNK sp8;

    fn_800913C0();
    fn_80075574(&sp8, 0);
    fn_80080698(arg0, spC);
    return 0;
}

s32 scr_method_getCollZ(s32 arg0) {
    s32 sp10;
    M2C_UNK sp8;

    fn_800913C0();
    fn_80075574(&sp8, 0);
    fn_80080698(arg0, sp10);
    return 0;
}

s32 scr_method_getCollRadius(s32 arg0) {
    f32 sp8;

    fn_800913C0();
    fn_80075574(0, &sp8);
    fn_80080698(arg0, sp8);
    return 0;
}

s32 scr_method_getCollSize(s32 arg0) {
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
    sp18 = spC;
    sp1C = sp10;
    fn_800913C0(arg0, (s32)spC, (s32)sp8);
    sp14 = sp8;
    method_getCollSize(&sp14, 0);
    fn_80080698((long)(arg0), (float)(0));
    return 0;
}

s32 scr_method_throwItem(s32 arg0) {
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
    fn_80091348(arg0, spC, sp8);
    fn_800335C0(&sp14);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setAdhocZOrderCorrection(s32 arg0) {
    f32 temp_f31;

    temp_f31 = fn_80080764();
    M2C_FIELD(fn_800913C0(arg0), f32 *, 0x1B0) = temp_f31;
    fn_8008065C(arg0, 0);
    return 0;
}

void scr_SearchFirstObject(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2F0) = 0;
    fn_8007B1B0();
    scr_SearchNextObject(arg0);
}

s32 scr_SearchNextObject(void *arg0) {
    s32 temp_r31;
    void *temp_r30;

    temp_r31 = fn_80080738();
loop_1:
    if ((void *) M2C_FIELD(arg0, void **, 0x2F0) != NULL) {
        M2C_FIELD(arg0, void **, 0x2F0) = fn_8007AF20();
    } else {
        M2C_FIELD(arg0, void **, 0x2F0) = fn_8007AEC4(0x50000, 0);
    }
    temp_r30 = M2C_FIELD(arg0, void **, 0x2F0);
    if (temp_r30 == NULL) {
        fn_8007B1C0();
        fn_8008065C(arg0, 0);
        return 0;
    }
    if ((M2C_FIELD(temp_r30, s32 *, 8) & 2) && ((u32) M2C_FIELD(temp_r30, u32 *, 0x24) == (u32) M2C_FIELD(arg0, u32 *, 0x2E0)) && (temp_r31 == M2C_FIELD(M2C_FIELD(temp_r30, void **, 0x20), s32 (**)(void *), 0xC)(temp_r30))) {
        fn_8008065C(arg0, M2C_FIELD(temp_r30, s32 *, 0));
        return 0;
    }
    goto loop_1;
}

s32 scr_SearchEnd(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2F0) != 0U) {
        M2C_FIELD(arg0, u32 *, 0x2F0) = 0U;
        fn_8007B1C0();
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setManpuObject(s32 arg0) {
    f32 temp_f31;
    s32 temp_r31;
    s32 temp_r30;
    s32 temp_r29;
    s32 temp_r28;

    temp_f31 = fn_80080764();
    temp_r31 = fn_80080738(arg0);
    temp_r30 = fn_80080738(arg0);
    temp_r29 = fn_80080738(arg0);
    temp_r28 = fn_80080738(arg0);
    fn_800913C0(arg0);
    method_setManpuObject(temp_r28, temp_r29, temp_r30, temp_r31, temp_f31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getManpuObject(s32 arg0) {
    fn_8008065C(arg0, M2C_FIELD(fn_800913C0(), s32 *, 0x188));
    return 0;
}

s32 scr_method_getBeginFrame(s32 arg0) {
    fn_800913C0();
    method_getBeginFrame();
    fn_80080698((long)(arg0), (float)(0));
    return 0;
}

s32 scr_method_getEndFrame(s32 arg0) {
    fn_800913C0();
    method_getEndFrame();
    fn_80080698((long)(arg0), (float)(0));
    return 0;
}

s32 scr_method_getCurrentFrame(s32 arg0) {
    fn_800913C0();
    method_getCurrentFrame();
    fn_80080698((long)(arg0), (float)(0));
    return 0;
}

s32 scr_GetMotionEndFrame(s32 arg0) {
    void *sp14;
    void *sp10;
    void *spC;
    void *sp8;
    u32 temp_r3;

    temp_r3 = fn_80080738();
    GetMotionEndFrame(&spC, (temp_r3 >> 0xCU) & 0x7FFF);
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
    if ((u32) (sp14 != NULL) != 0) {
        sp10 = sp8;
        M2C_FIELD(M2C_FIELD(sp14, void **, 4), M2C_UNK (**)(void **, void *, u32), 0x1C)(&sp8, sp14, temp_r3);
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) + 1);
        }
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp8, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp8 = NULL;
        if ((u32) (sp10 != NULL) != 0) {
            fn_80080698(arg0, sp10, M2C_FIELD(sp10, f32 *, 4) / lbl_80351A88);
            if (sp10 != NULL) {
                M2C_FIELD(sp10, s32 *, 0) = (s32) (M2C_FIELD(sp10, s32 *, 0) - 1);
                if (((s32) M2C_FIELD(sp10, s32 *, 0) == 0) && (sp10 != NULL)) {
                    M2C_FIELD(M2C_FIELD(sp10, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
            sp10 = NULL;
            if (sp14 != NULL) {
                M2C_FIELD(sp14, s32 *, 0) = (s32) (M2C_FIELD(sp14, s32 *, 0) - 1);
                if (((s32) M2C_FIELD(sp14, s32 *, 0) == 0) && (sp14 != NULL)) {
                    M2C_FIELD(M2C_FIELD(sp14, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
            sp14 = NULL;
            return 0;
        }
        if (sp10 != NULL) {
            M2C_FIELD(sp10, s32 *, 0) = (s32) (M2C_FIELD(sp10, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(sp10, s32 *, 0) == 0) && (sp10 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp10, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp10 = NULL;
        goto block_28;
    }
block_28:
    if (sp14 != NULL) {
        M2C_FIELD(sp14, s32 *, 0) = (s32) (M2C_FIELD(sp14, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(sp14, s32 *, 0) == 0) && (sp14 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp14, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    sp14 = NULL;
    fn_8008065C(arg0, -1);
    return 0;
}
