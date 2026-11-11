/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_8001BFD8(f32 *, M2C_UNK *, M2C_UNK *);
M2C_UNK fn_800335EC(void *, M2C_UNK, M2C_UNK);
u8 fn_80070CFC(f32 *);
f32 fn_80071054(M2C_UNK *);
f32 fn_800710E4(void *, M2C_UNK *);
M2C_UNK fn_8007965C(void *, M2C_UNK);
void *fn_8007AEC4(M2C_UNK, M2C_UNK);
void *fn_8007AF20(void *);
M2C_UNK fn_8007B1B0(f32, f32, M2C_UNK *);
M2C_UNK fn_8007B1C0();
s32 GetFloorRegionId(u32, f32 *, f32);
s32 GetFloorAttr(u32, s32, void *);
u32 PSMTXInverse(M2C_UNK *, M2C_UNK *);
M2C_UNK PSMTXMultVecSR(M2C_UNK *, f32 *, f32 *, s32, f32);
M2C_UNK PSVECAdd(f32 *, f32 *, f32 *, s32, f32);
M2C_UNK PSVECSubtract(f32 *, f32 *, f32 *, s32, s32, s32);
M2C_UNK PSVECScale(f32 *, f32 *, f32, f32);
M2C_UNK PSVECNormalize(f32 *, f32 *);
f32 PSVECMag(f32 *);
M2C_UNK HSD_JObjSetupMatrixSub(void *);
M2C_UNK HSD_MtxGetTranslate();
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_801CB2AC;
extern f32 lbl_801CB2B8;
extern M2C_UNK lbl_801CB318;
extern M2C_UNK lbl_8034E710;
extern M2C_UNK lbl_8034E718;
extern s32 lbl_8034EB30;
extern f32 lbl_80351458;
extern f32 lbl_8035145C;
extern f32 lbl_80351474;
extern f32 lbl_80351478;
u8 fn_8001A354();
u8 method_isAutoMoveEnabled();
f32 method_getPosYShouldBe(s32, s32 *, void *, s32);
extern f32 lbl_80351488;
M2C_UNK fn_8001ABEC(void *);
M2C_UNK fn_8001C104(void *, M2C_UNK *);
u8 fn_8001A920(f32 *, M2C_UNK);
M2C_UNK fn_8001B174(f32 *);
M2C_UNK fn_8001B3E8(f32 *);
M2C_UNK fn_8001BB00(f32 *);
f32 fn_8001BD38(f32 *);
M2C_UNK fn_8001BE58(f32 *);
M2C_UNK fn_80070D60(M2C_UNK *, f32, f32, f32);
M2C_UNK fn_80070EA8(M2C_UNK *, f32, f32, f32);
M2C_UNK fn_80074F54(f32 *, f32 *);
M2C_UNK fn_800754E4(f32 *, f32 *);
M2C_UNK fn_80075778(f32 *);
M2C_UNK PSMTXConcat(M2C_UNK *, M2C_UNK *, M2C_UNK *);
M2C_UNK MTXRotRad(M2C_UNK *, M2C_UNK, f32);
M2C_UNK fn_80104500(M2C_UNK *, f32 *);
f64 ArcSin();
f64 ArcTan2(f32, f32);
extern M2C_UNK lbl_801CB324;
extern f32 lbl_8035148C;
extern f32 lbl_80351490;
extern f64 lbl_80351498;
M2C_UNK fn_8001D784();
M2C_UNK fn_8001A280(M2C_UNK *, s32, s32, s32);
M2C_UNK fn_8001D8B0();
M2C_UNK fn_8001AE78(void *, M2C_UNK *);
M2C_UNK method_setAnimRate(f32);
s32 fn_80074904(s32);
s32 fn_80075AFC(s32);
void *fn_800A713C(s32, s32);
void *fn_800A7338(s32, M2C_UNK, void *);
extern void *lbl_803504E8;
M2C_UNK fn_80005888(void *);
M2C_UNK fn_8009DDC8(M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_80221CC0;

void fn_8001C18C(void *arg0, u8 arg1);
void fn_8001C944(void *arg0, s32 *arg1);
void fn_8001CAD8(void *arg0);
void fn_8001CB30(f32 *arg0);
void fn_8001CF78(void);
void fn_8001CF98(void *arg0, s32 arg1, s32 arg2);
s32 fn_8001D020(void *arg0, s32 arg1, s32 arg2);
s32 fn_8001D0D0(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0);
void method_pauseAction(void *arg0, u8 arg1);
void method_setDefaultFeel(void *arg0, s32 arg1);
s32 method_getDefaultFeel(void *arg0);
s32 method_getActionLoopCount(s32 arg0);
s32 fn_8001D244(void *arg0, s32 arg1);
s32 fn_8001D2E0(void *arg0, s32 arg1);
s32 method_willActionEndNextTime(s32 arg0);
void fn_8001D3C8(void *arg0);
void method_setPickObject(void *arg0, s32 arg1);
s32 fn_8001D46C(void *arg0);
s32 fn_8001D474(void *arg0);
void method_setCarryingObject(void *arg0, s32 arg1);
void method_setCarryingObjectRelPos(void *arg0, void *arg1);
s32 fn_8001D4DC(s32 arg0);
void method_setCarryingObjectRelRotate(void *arg0, void *arg1);
s32 fn_8001D500(s32 arg0);
s32 method_getActIdByGA(void *arg0, u32 arg1);
s32 method_getPlayingActId(void *arg0);
s32 method_getPlayingAPID(void *arg0);
s32 method_getPlayingFeelId(void *arg0);
void method_setAfcSfxVolume(void *arg0, s32 arg1);
s32 method_getAfcSfxVolume(void *arg0);
s32 fn_8001D640(void *arg0);
void *fn_8001D6A0(void *arg0, s16 arg1);

void fn_8001C18C(void *arg0, u8 arg1) { } /* draft: stub */

void fn_8001C944(void *arg0, s32 *arg1) { } /* draft: stub */

void fn_8001CAD8(void *arg0) {
    M2C_UNK sp8;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), M2C_UNK (**)(M2C_UNK *), 0x3C)(&sp8);
    fn_8001CB30(arg0);
    fn_8001C104(arg0, &sp8);
    fn_8001ABEC(arg0);
}

void fn_8001CB30(f32 *arg0) { } /* draft: stub */

void fn_8001CF78(void) {
    fn_8001CAD8((void *)(0));
}

void fn_8001CF98(void *arg0, s32 arg1, s32 arg2) {
    void *sp10;
    s32 spC;
    M2C_UNK sp8;
    void *temp_r7;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x264) != 0) {
        method_pauseAction((void *)(0), (unsigned char)(0));
    }
    /* draft: did not compile: temp_r7 = arg0 + 0x210; */
    sp10 = temp_r7;
    spC = M2C_FIELD(arg0, s32 *, 0x214);
    /* draft: did not compile: fn_8001D784(&sp8, arg0 + 0x20C, &spC, &sp10, temp_r7); */
    fn_8001D020(arg0, arg1, arg2);
}

s32 fn_8001D020(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK sp10;
    void *spC;
    M2C_UNK sp8;
    u8 temp_r5;
    u8 var_r7;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x264) != 0) {
        method_pauseAction((void *)(0), (unsigned char)(0));
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x250);
    M2C_FIELD(arg0, s32 *, 0x250) = (s32) (temp_r5 + 1);
    if ((u32) (arg2 + 0xB0000000) == 2U) {
        var_r7 = M2C_FIELD(arg0, s32 *, 0x254);
    } else {
        var_r7 = arg2;
    }
    fn_8001A280(&sp10, M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), s32 *, 8), arg1, var_r7);
    /* draft: did not compile: spC = arg0 + 0x210; */
    /* draft: did not compile: fn_8001D8B0(&sp8, arg0 + 0x20C, &spC, &sp10); */
    return temp_r5;
}

s32 fn_8001D0D0(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

void method_pauseAction(void *arg0, u8 arg1) {
    M2C_FIELD(arg0, u8 *, 0x264) = arg1;
    if (arg1 != 0) {
        method_setAnimRate(lbl_80351458);
        return;
    }
    method_setAnimRate(lbl_8035145C);
}

void method_setDefaultFeel(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x254) = arg1;
}

s32 method_getDefaultFeel(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x254);
}

s32 method_getActionLoopCount(s32 arg0) {
    if (fn_8001A354(arg0 + 0x200) != 0) {
        return fn_80074904(arg0);
    }
    return -1;
}

s32 fn_8001D244(void *arg0, s32 arg1) {
    void *var_r3;

    if (0 /* draft: did not compile */) {
        return 1;
    }
    if (arg1 == (s32) M2C_FIELD(arg0, s32 *, 0x200)) {
        return 1;
    }
    var_r3 = M2C_FIELD(arg0, void **, 0x214);
loop_9:
    if (0 /* draft: did not compile */) {
        return 1;
    }
    if (arg1 == (s32) M2C_FIELD(var_r3, s32 *, 8)) {
        return 0;
    }
    var_r3 = M2C_FIELD(var_r3, void **, 4);
    goto loop_9;
}

s32 fn_8001D2E0(void *arg0, s32 arg1) {
    void *var_r3;

    if (0 /* draft: did not compile */) {
        return 1;
    }
    if (arg1 == (s32) M2C_FIELD(arg0, s32 *, 0x200)) {
        return 0;
    }
    var_r3 = M2C_FIELD(arg0, void **, 0x214);
loop_9:
    if (0 /* draft: did not compile */) {
        return 1;
    }
    if (arg1 == (s32) M2C_FIELD(var_r3, s32 *, 8)) {
        return 0;
    }
    var_r3 = M2C_FIELD(var_r3, void **, 4);
    goto loop_9;
}

s32 method_willActionEndNextTime(s32 arg0) {
    if (fn_8001A354(arg0 + 0x200) != 0) {
        return fn_80075AFC(arg0);
    }
    return 1;
}

void fn_8001D3C8(void *arg0) {
    f32 sp10;
    f32 spC;
    f32 sp8;
    void *temp_r3;

    temp_r3 = fn_800A713C(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x1D0));
    if (temp_r3 != NULL) {
        sp8 = lbl_80351458;
        spC = lbl_80351458;
        sp10 = lbl_80351458;
        M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(f32 *), 0x30)(&sp8);
    }
    M2C_FIELD(arg0, s32 *, 0x1D0) = 0;
}

void method_setPickObject(void *arg0, s32 arg1) {
    fn_8001D3C8((void *)(0));
    M2C_FIELD(arg0, s32 *, 0x1CC) = arg1;
}

s32 fn_8001D46C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D0);
}

s32 fn_8001D474(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1CC);
}

void method_setCarryingObject(void *arg0, s32 arg1) {
    fn_8001D3C8((void *)(0));
    M2C_FIELD(arg0, s32 *, 0x1CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1D0) = arg1;
}

void method_setCarryingObjectRelPos(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0x1D4) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x1D8) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x1DC) = (f32) M2C_FIELD(arg1, f32 *, 8);
}

s32 fn_8001D4DC(s32 arg0) {
    return arg0 + 0x1D4;
}

void method_setCarryingObjectRelRotate(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0x1E0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x1E4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x1E8) = (f32) M2C_FIELD(arg1, f32 *, 8);
}

s32 fn_8001D500(s32 arg0) {
    return arg0 + 0x1E0;
}

s32 method_getActIdByGA(void *arg0, u32 arg1) {
    s32 temp_r0;
    s32 temp_r3;
    s32 var_ctr;
    s32 var_r6;
    s32 var_r7;
    void *temp_r5;

    var_r7 = 0;
    var_r6 = 0;
    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), void **, 8);
    temp_r0 = M2C_FIELD(temp_r5, s32 *, 0x70);
    var_ctr = temp_r0;
    if (temp_r0 > 0) {
loop_1:
        temp_r3 = M2C_FIELD(temp_r5, s32 *, 0x6C);
        if (0 /* draft: did not compile */) {
            return 0;
        }
        var_r6 += 0x38;
        var_r7 += 1;
        var_ctr -= 1;
        if (var_ctr == 0) {
            /* Duplicate return node #4. Try simplifying control flow for better match */
            return 0x08000000;
        }
        goto loop_1;
    }
    return 0x08000000;
}

s32 method_getPlayingActId(void *arg0) {
    if (0 /* draft: did not compile */) {
        return *M2C_FIELD(arg0, s32 **, 0x204);
    }
    return 0x08000000;
}

s32 method_getPlayingAPID(void *arg0) {
    if (0 /* draft: did not compile */) {
        return M2C_FIELD(arg0, s32 *, 0x200);
    }
    return 0;
}

s32 method_getPlayingFeelId(void *arg0) {
    if (0 /* draft: did not compile */) {
        return M2C_FIELD(arg0, s32 *, 0x208);
    }
    return 0x50000000;
}

void method_setAfcSfxVolume(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x260) = arg1;
}

s32 method_getAfcSfxVolume(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x260);
}

s32 fn_8001D640(void *arg0) {
    void *temp_r3;

    temp_r3 = fn_800A7338(M2C_FIELD(lbl_803504E8, s32 *, 0x278), 0, lbl_803504E8);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, s32 *, 0x1D4) == M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x38);
    }
    return 0;
}

void *fn_8001D6A0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_80221CC0;
        fn_8009DDC8(0, &lbl_80221CC0);
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}
