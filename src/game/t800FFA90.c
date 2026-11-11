/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK DVDInit();
s32 GXInit(s32);
M2C_UNK VIWaitForRetrace();
M2C_UNK HSD_VIInit(s32 *, s32, s32, s32, s32, M2C_UNK, M2C_UNK, s32);
M2C_UNK fn_80107CA4();
extern M2C_UNK lbl_8031D300;
extern M2C_UNK lbl_8031D30C;
extern void *lbl_803501CC;
extern s32 lbl_803501D4;
extern s32 lbl_803501D8;
extern s32 lbl_80350CB8;
extern s32 lbl_80350CC0;
extern s32 lbl_80352A78;
u32 OSAllocFromArenaLo(s32, M2C_UNK);
M2C_UNK HSD_Panic(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_802A9C40;
extern M2C_UNK lbl_802A9C50;
extern M2C_UNK lbl_802A9C74;
M2C_UNK GXInitLightAttn(M2C_UNK *, f32, f32, f32, f32, f32, f32);
M2C_UNK fn_800E2A08(M2C_UNK *, f32, f32, f32);
M2C_UNK fn_800E2A18(M2C_UNK *, f32, f32, f32);
M2C_UNK GXInitLightColor(M2C_UNK *, s32 *);
M2C_UNK GXLoadLightObjImm(M2C_UNK *, s32);
M2C_UNK HSD_StateInvalidate(M2C_UNK);
s32 HSD_Index2LightID(s32);
extern s32 lbl_803501DC;
extern f32 lbl_80351FD0;
extern f32 lbl_80351FD4;
u32 OSGetArenaHi();
s32 OSGetArenaLo(M2C_UNK *);
M2C_UNK OSSetArenaLo(u32);
M2C_UNK fn_800ABB64();
s32 fn_800ABBE4(u32, u32);
s32 fn_800C6F68();
M2C_UNK HSD_ObjSetHeap(s32, M2C_UNK, M2C_UNK *, u32);
extern s32 lbl_803501C8;
extern u32 lbl_80350CA8;
extern u32 lbl_80350CAC;
extern u32 lbl_80350CB0;
extern u32 lbl_80350CB4;
extern s32 lbl_80350CC4;
extern s32 lbl_80350CC8;
M2C_UNK _hsdClassInit();
s32 OSAllocFromHeap(s32);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_803501E0;
M2C_UNK OSFreeToHeap(s32);
M2C_UNK fn_800ABCC4();
M2C_UNK fn_800ABC50(s32);
extern s32 lbl_80350CD4;
M2C_UNK fn_800E1034();
M2C_UNK GXInvalidateTexAll();
M2C_UNK fn_800E517C(s32, s32);
M2C_UNK fn_800E5304(u8, u32);
extern M2C_UNK lbl_8031D320;
extern s32 lbl_803501D0;
extern s32 lbl_80350CBC;
extern s32 lbl_80350CD0;
M2C_UNK HSD_RenderInitAllocData();
M2C_UNK HSD_AObjInitAllocData();
M2C_UNK HSD_FObjInitAllocData();
M2C_UNK HSD_ZListInitAllocData();
M2C_UNK HSD_VecInitAllocData();
M2C_UNK HSD_MtxInitAllocData();
M2C_UNK HSD_ListInitAllocData();
M2C_UNK HSD_IDInitAllocData();
M2C_UNK HSD_ListInitAllocData_801091B0();
M2C_UNK HSD_ShadowInitAllocData();
M2C_UNK OSDisableInterrupts(M2C_UNK *);
M2C_UNK OSRestoreInterrupts();
M2C_UNK VIConfigure();
M2C_UNK VIFlush();
M2C_UNK VISetNextFrameBuffer(s32, s32);
M2C_UNK VISetBlack(s32);
extern M2C_UNK lbl_802A9E58;
extern M2C_UNK lbl_803501E8;
extern s32 lbl_80350CD8;
extern s32 lbl_80350CDC;
M2C_UNK GXPixModeSync();
M2C_UNK GXSetDispCopySrc(M2C_UNK, M2C_UNK, u16, u16);
M2C_UNK GXSetDispCopyDst(u16, u16);
M2C_UNK GXSetCopyClamp(M2C_UNK);
u16 GXSetDispCopyYScale();
M2C_UNK GXSetCopyClear(s32 *, s32);
M2C_UNK GXSetCopyFilter();
M2C_UNK GXSetDispCopyGamma(s32);
M2C_UNK GXCopyDisp(M2C_UNK *, M2C_UNK);
M2C_UNK HSD_StateSetZMode(u8, M2C_UNK, M2C_UNK);
M2C_UNK HSD_StateSetColorUpdate(u8);
M2C_UNK HSD_StateSetAlphaUpdate(u8);
extern M2C_UNK lbl_802A9E64;
extern M2C_UNK lbl_8031D520;
extern f32 lbl_80351FD8;
M2C_UNK fn_800E15B0();
M2C_UNK GXDrawDone(M2C_UNK *);

void fn_800FFA90(void);
void fn_800FFBCC(void);
u32 *fn_800FFBD0(s32 arg0, void *arg1, M2C_UNK arg_sp0);
s32 fn_800FFD04(void);
void fn_800FFD54(void);
void HSD_OSInit(void);
s32 HSD_MemAlloc(s32 arg0);
void HSD_Free(s32 arg0);
void fn_80100038(void);
void _HSD_MemClearDefaultCB(void);
s32 _HSD_MemCheckOwnDefaultCB(u32 arg0);
s32 fn_801000E8(void);
void fn_801000F0(s32 arg0);
void fn_80100190(void);
void fn_8010019C(s32 arg0);
void HSD_ObjInit(void);
void fn_801001F0();
s32 HSD_VISetUserPreRetraceCallback(s32 arg0);
void HSD_VIPreRetraceCB(s32 arg0);
void HSD_VIPostRetraceCB(s32 arg0);
void HSD_VIGXDrawDoneCB(void);
s32 fn_801009BC(void);
void HSD_VICopyEFB2XFBPtr(void *arg0, M2C_UNK *arg1, s32 arg2);
void fn_80100C24(s32 arg0);
void fn_80100DA0(M2C_UNK arg_sp0);
void HSD_VIWaitXFBFlushNoYield(void);
void fn_801010DC(void);
s32 fn_8010118C(void);
s32 fn_80101220(void);
s32 fn_8010129C(s32 arg0);
s32 fn_80101384(s32 arg0);
void HSD_VISetConfigure(void *arg0);

void fn_800FFA90(void) {
    s8 sp5A;
    s8 sp59;
    s8 sp58;
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    s8 sp48;
    s32 sp44;
    s32 sp40;
    s32 sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r10;

    DVDInit();
    fn_800FFBD0((long)(lbl_803501D8), (void *)(lbl_803501CC), (long)(0));
    fn_800FFD04();
    lbl_80350CB8 = GXInit(lbl_803501D4);
    HSD_OSInit();
    sp8 = M2C_FIELD(lbl_803501CC, s32 *, 0);
    M2C_FIELD(&lbl_8031D30C, s32 *, 0xC) = (s32) lbl_803501D4;
    spC = M2C_FIELD(lbl_803501CC, s32 *, 4);
    sp10 = M2C_FIELD(lbl_803501CC, s32 *, 8);
    sp14 = M2C_FIELD(lbl_803501CC, s32 *, 0xC);
    sp18 = M2C_FIELD(lbl_803501CC, s32 *, 0x10);
    sp1C = M2C_FIELD(lbl_803501CC, s32 *, 0x14);
    sp20 = M2C_FIELD(lbl_803501CC, s32 *, 0x18);
    sp24 = M2C_FIELD(lbl_803501CC, s32 *, 0x1C);
    sp28 = M2C_FIELD(lbl_803501CC, s32 *, 0x20);
    sp2C = M2C_FIELD(lbl_803501CC, s32 *, 0x24);
    sp30 = M2C_FIELD(lbl_803501CC, s32 *, 0x28);
    sp34 = M2C_FIELD(lbl_803501CC, s32 *, 0x2C);
    sp38 = M2C_FIELD(lbl_803501CC, s32 *, 0x30);
    sp3C = M2C_FIELD(lbl_803501CC, s32 *, 0x34);
    temp_r10 = M2C_FIELD(lbl_803501CC, s32 *, 0x38);
    sp40 = temp_r10;
    sp44 = 1;
    sp48 = 1;
    sp4C = 0;
    sp50 = lbl_80352A78;
    sp54 = 0xFFFFFF;
    sp58 = 1;
    sp59 = 1;
    sp5A = 1;
    HSD_VIInit(&sp8, M2C_FIELD(&lbl_8031D300, s32 *, 0), M2C_FIELD(&lbl_8031D300, s32 *, 4), M2C_FIELD(&lbl_8031D300, s32 *, 8), lbl_80352A78, 0, 1, temp_r10);
    fn_800FFD54();
    fn_800FFBCC();
    fn_80107CA4();
    VIWaitForRetrace();
    HSD_ObjInit();
    lbl_80350CC0 = 1;
}

void fn_800FFBCC(void) {

}

u32 *fn_800FFBD0(s32 arg0, void *arg1, M2C_UNK arg_sp0) {
    s32 temp_r26;
    s32 var_r27;
    u32 *var_r28;
    u32 *var_r5;
    u32 temp_r0;
    u32 temp_r3;
    u32 var_ctr;
    u32 var_ctr_2;
    u32 var_r3;

    if (arg1 == NULL) {
        return NULL;
    }
    /* draft: did not compile: var_r28 = &lbl_8031D300; */
    var_r27 = 0;
    temp_r26 = ((M2C_FIELD(arg1, u16 *, 4) + 0xF) & 0xFFF0) * M2C_FIELD(arg1, u16 *, 8) * 2;
    M2C_FIELD(&lbl_8031D30C, s32 *, 8) = (s32) (temp_r26 * arg0);
loop_6:
    if (var_r27 < arg0) {
        temp_r3 = OSAllocFromArenaLo(temp_r26, 0x20);
        *var_r28 = temp_r3;
        if (temp_r3 == 0U) {
            HSD_Panic(&lbl_802A9C40, 0xF0, &lbl_802A9C50);
        }
        var_r28 += 4;
        var_r27 += 1;
        goto loop_6;
    }
    var_r3 = 3 - arg0;
    /* draft: did not compile: var_r5 = &(&lbl_8031D300)[arg0]; */
    if (arg0 < 3) {
        temp_r0 = var_r3 >> 3U;
        var_ctr = temp_r0;
        if (temp_r0 != 0) {
            do {
                M2C_FIELD(var_r5, u32 *, 0) = 0U;
                M2C_FIELD(var_r5, s32 *, 4) = 0;
                M2C_FIELD(var_r5, s32 *, 8) = 0;
                M2C_FIELD(var_r5, s32 *, 0xC) = 0;
                M2C_FIELD(var_r5, s32 *, 0x10) = 0;
                M2C_FIELD(var_r5, s32 *, 0x14) = 0;
                M2C_FIELD(var_r5, s32 *, 0x18) = 0;
                M2C_FIELD(var_r5, s32 *, 0x1C) = 0;
                var_r5 += 0x20;
                var_ctr -= 1;
            } while (var_ctr != 0);
            var_r3 &= 7;
            if (var_r3 != 0) {
                goto block_11;
            }
        } else {
block_11:
            var_ctr_2 = var_r3;
            do {
                *var_r5 = 0U;
                var_r5 += 4;
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
    return 0;
}

s32 fn_800FFD04(void) {
    s32 temp_r3;

    temp_r3 = OSAllocFromArenaLo((long)(0x20), (long)(0));
    switch (temp_r3) {
    case 0:
            HSD_Panic(&lbl_802A9C40, 0x103, &lbl_802A9C74);
        break;
    }
    return temp_r3;
}

void fn_800FFD54(void) {
    M2C_UNK spC;
    s32 sp8;
    s32 var_r31;

    fn_800E2A08(&spC, lbl_80351FD0, lbl_80351FD4, lbl_80351FD4);
    fn_800E2A18(&spC, lbl_80351FD0, lbl_80351FD4, lbl_80351FD4);
    GXInitLightAttn(&spC, lbl_80351FD0, lbl_80351FD4, lbl_80351FD4, lbl_80351FD0, lbl_80351FD4, lbl_80351FD4);
    sp8 = lbl_803501DC;
    GXInitLightColor(&spC, &sp8);
    var_r31 = 0;
    do {
        GXLoadLightObjImm(&spC, HSD_Index2LightID(var_r31));
        var_r31 += 1;
    } while (var_r31 < 8);
    HSD_StateInvalidate(-1);
}

void HSD_OSInit(void) {
    M2C_UNK (*sp18)();
    M2C_UNK (*sp14)();
    M2C_UNK (*sp10)();
    M2C_UNK (*spC)();
    M2C_UNK (*sp8)();
    s32 temp_r3;
    s32 temp_r3_3;
    u32 temp_r0;
    unsigned int temp_r31_2;
    u32 temp_r3_2;

    OSGetArenaLo((long *)(0));
    OSGetArenaHi();
    M2C_FIELD(&lbl_8031D30C, s32 *, 0) = fn_800C6F68();
    M2C_FIELD(&lbl_8031D30C, s32 *, 4) = (s32) ((((M2C_FIELD(&lbl_8031D30C, s32 *, 0) - OSGetArenaHi()) + (s32)(OSGetArenaLo(&lbl_8031D30C))) - M2C_FIELD(&lbl_8031D30C, s32 *, 8)) - M2C_FIELD(&lbl_8031D30C, s32 *, 0xC));
    if ((s32) lbl_80350CC8 == 0) {
        sp8 = HSD_MemAlloc;
        /* draft: did not compile: spC = HSD_Free; */
        /* draft: did not compile: sp14 = fn_80100038; */
        /* draft: did not compile: sp10 = _HSD_MemClearDefaultCB; */
        sp18 = _HSD_MemCheckOwnDefaultCB;
        fn_801094FC(&sp8, 0x14, _HSD_MemClearDefaultCB, fn_80100038, HSD_Free, (u16)HSD_MemAlloc);
        if (((u32) lbl_80350CB0 != 0) && ((u32) lbl_80350CB4 != 0)) {
            lbl_80350CA8 = lbl_80350CB0;
            lbl_80350CAC = lbl_80350CB4;
            lbl_80350CB0 = 0;
            lbl_80350CB4 = 0;
            lbl_803501C8 = fn_800ABBE4((unsigned long)(0), (unsigned long)(0));
            fn_800ABB64();
            temp_r3 = lbl_80350CAC - lbl_80350CA8;
            M2C_FIELD(&lbl_8031D30C, s32 *, 0x10) = temp_r3;
            HSD_ObjSetHeap(temp_r3, 0, &lbl_8031D30C, lbl_80350CA8);
            return;
        }
        temp_r31_2 = (OSGetArenaLo((long *)(0)) + 0x1F) & 0xFFFFFFE0;
        temp_r3_2 = OSGetArenaHi();
        lbl_80350CA8 = temp_r31_2;
        if ((s32) lbl_80350CC4 > 0) {
            temp_r0 = temp_r31_2 + lbl_80350CC4;
            lbl_80350CAC = temp_r0;
            if (temp_r0 > temp_r3_2) {
                lbl_80350CAC = temp_r3_2;
            }
            lbl_80350CAC &= 0xFFFFFFE0;
        } else {
            lbl_80350CAC = temp_r3_2 & 0xFFFFFFE0;
        }
        lbl_803501C8 = fn_800ABBE4(lbl_80350CA8, lbl_80350CAC);
        fn_800ABB64();
        temp_r3_3 = lbl_80350CAC - lbl_80350CA8;
        M2C_FIELD(&lbl_8031D30C, s32 *, 0x10) = temp_r3_3;
        HSD_ObjSetHeap(temp_r3_3, 0, &lbl_8031D30C, lbl_80350CA8);
        OSSetArenaLo(lbl_80350CAC);
    }
}

s32 HSD_MemAlloc(s32 arg0) {
    s32 temp_r3;

    if (arg0 == 0) {
        return 0;
    }
    _hsdClassInit();
    temp_r3 = OSAllocFromHeap(arg0);
    switch (temp_r3) {
    case 0:
            __assert(&lbl_802A9C40, 0x179, &lbl_803501E0);
        break;
    }
    return temp_r3;
}

void HSD_Free(s32 arg0) {
    _hsdClassInit();
    OSFreeToHeap(arg0);
}

void fn_80100038(void) {
    _hsdClassInit();
    fn_800ABCC4();
}

void _HSD_MemClearDefaultCB(void) {
    fn_800ABC50(lbl_803501C8);
    if (((u32) lbl_80350CB0 != 0U) && ((u32) lbl_80350CB4 != 0U)) {
        lbl_80350CA8 = lbl_80350CB0;
        lbl_80350CAC = lbl_80350CB4;
        lbl_80350CB0 = 0U;
        lbl_80350CB4 = 0U;
    }
    lbl_803501C8 = fn_800ABBE4(lbl_80350CA8, lbl_80350CAC);
    fn_800ABB64();
}

s32 _HSD_MemCheckOwnDefaultCB(u32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    if (((u32) lbl_80350CA8 <= arg0) && (arg0 < (u32) lbl_80350CAC)) {
        var_r4 = 1;
    }
    return var_r4;
}

s32 fn_801000E8(void) {
    return lbl_80350CD4;
}

void fn_801000F0(s32 arg0) {
    lbl_80350CD4 = arg0;
    if ((u8) M2C_FIELD(&lbl_8031D320, u8 *, 0x19) != 0) {
        fn_800E517C(2, lbl_803501D0);
    } else {
        fn_800E517C(lbl_80350CBC, 0);
    }
    fn_800E5304(M2C_FIELD(&lbl_8031D320, u8 *, 0x18), (u32) (M2C_FIELD(&lbl_8031D320, u16 *, 8) - M2C_FIELD(&lbl_8031D320, u16 *, 0x10)) >> 0x1FU);
    if ((s32) lbl_80350CD0 != 0) {
        if (lbl_80350CD0 & 1) {
            fn_800E1034();
        }
        if (lbl_80350CD0 & 2) {
            GXInvalidateTexAll();
        }
        lbl_80350CD0 = 0;
    }
}

void fn_80100190(void) {

}

void fn_8010019C(s32 arg0) {
    lbl_80350CD0 |= arg0;
}

void HSD_ObjInit(void) {
    HSD_ListInitAllocData_801091B0();
    HSD_AObjInitAllocData();
    HSD_FObjInitAllocData();
    HSD_IDInitAllocData();
    HSD_VecInitAllocData();
    HSD_MtxInitAllocData();
    HSD_ListInitAllocData();
    HSD_RenderInitAllocData();
    HSD_ShadowInitAllocData();
    HSD_ZListInitAllocData();
}

void fn_801001F0() { } /* draft: stub */

s32 HSD_VISetUserPreRetraceCallback(s32 arg0) {
    s32 temp_r30;

    temp_r30 = M2C_FIELD(&lbl_8031D320, s32 *, 0x1DC);
    OSDisableInterrupts(&lbl_8031D320);
    M2C_FIELD(&lbl_8031D320, s32 *, 0x1DC) = arg0;
    OSRestoreInterrupts();
    return temp_r30;
}

void HSD_VIPreRetraceCB(s32 arg0) {
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r30;
    s32 var_r30_2;
    s32 var_r6;
    void *temp_r30;

    var_r6 = 0;
    var_r30 = 0;
    if (M2C_FIELD(&lbl_8031D320, s32 *, 0x5C) == 6) {
        var_r0 = 0;
    } else if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0xBC) == 6) {
        var_r0 = 1;
    } else if ((s32) M2C_FIELD((&lbl_8031D320 + 0x60), s32 *, 0xBC) == 6) {
        var_r0 = 2;
    } else {
        var_r0 = -1;
    }
    if (var_r0 != -1) {
        temp_r4 = var_r0 * 0x60;
        temp_r30 = &lbl_8031D320 + temp_r4;
        VISetNextFrameBuffer(M2C_FIELD(temp_r30, s32 *, 0x58), temp_r4);
        if ((u8) M2C_FIELD(temp_r30, u8 *, 0xB4) != 0) {
            /* draft: did not compile: VIConfigure(temp_r30 + 0x60); */
            VISetBlack(M2C_FIELD(temp_r30, s32 *, 0x9C));
        }
        var_r6 = 1;
        var_r30 = 1;
    } else if (((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x1D4) == 1) && ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x178) == 1)) {
        if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x5C) == 7) {
            var_r0_2 = 0;
        } else if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0xBC) == 7) {
            var_r0_2 = 1;
        } else if ((s32) M2C_FIELD((&lbl_8031D320 + 0x60), s32 *, 0xBC) == 7) {
            var_r0_2 = 2;
        } else {
            var_r0_2 = -1;
        }
        var_r30_2 = var_r0_2;
        if (var_r0_2 == -1) {
            if ((s32) (u16)M2C_FIELD(&lbl_8031D320, s32 *, 0x5C) == 2) {
                var_r30_2 = 0;
            } else if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0xBC) == 2) {
                var_r30_2 = 1;
            } else if ((s32) M2C_FIELD((&lbl_8031D320 + 0x60), s32 *, 0xBC) == 2) {
                var_r30_2 = 2;
            } else {
                var_r30_2 = -1;
            }
            if (var_r30_2 == -1) {
                __assert(&lbl_803501E8, 0xFC, &lbl_802A9E58);
            }
            temp_r4_2 = var_r30_2 * 0x60;
            VISetNextFrameBuffer(M2C_FIELD((&lbl_8031D320 + temp_r4_2), s32 *, 0x58), temp_r4_2);
            var_r6 = 1;
        }
        M2C_FIELD((&lbl_8031D320 + (var_r30_2 * 0x60)), s32 *, 0x5C) = 8;
        if ((u8) M2C_FIELD(&lbl_8031D320, u8 *, 0x1D0) != 0) {
            VIConfigure(&lbl_8031D320 + 0x17C);
            VISetBlack(M2C_FIELD(&lbl_8031D320, s32 *, 0x1B8));
            var_r6 = 1;
        }
        var_r30 = 1;
    }
    if (var_r6 != 0) {
        VIFlush();
    }
    if (var_r30 != 0) {
        lbl_80350CDC += 1;
    }
    temp_r3 = lbl_80350CD8 + 1;
    lbl_80350CD8 = temp_r3;
    if (temp_r3 >= (s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x1EC)) {
        M2C_FIELD(&lbl_8031D320, s32 *, 0x1F0) = (s32) lbl_80350CDC;
        lbl_80350CDC = 0;
        lbl_80350CD8 = 0;
    }
    if (((M2C_UNK (*)(s32)) M2C_FIELD(&lbl_8031D320, M2C_UNK (**)(s32), 0x1D8)) != NULL) {
        M2C_FIELD(&lbl_8031D320, M2C_UNK (**)(s32), 0x1D8)(arg0);
    }
}

#pragma push
#pragma peephole off
void HSD_VIPostRetraceCB(s32 arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r7;
    void *temp_r30;

    if (M2C_FIELD(&lbl_8031D320, s32 *, 0x5C) == 6) {
        var_r7 = 0;
    } else if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0xBC) == 6) {
        var_r7 = 1;
    } else if ((s32) M2C_FIELD((&lbl_8031D320 + 0x60), s32 *, 0xBC) == 6) {
        var_r7 = 2;
    } else {
        var_r7 = -1;
    }
    if (var_r7 != -1) {
        if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x5C) == 7) {
            var_r0 = 0;
        } else if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0xBC) == 7) {
            var_r0 = 1;
        } else if ((s32) M2C_FIELD((&lbl_8031D320 + 0x60), s32 *, 0xBC) == 7) {
            var_r0 = 2;
        } else {
            var_r0 = -1;
        }
        if (var_r0 != -1) {
            M2C_FIELD((&lbl_8031D320 + (var_r0 * 0x60)), s32 *, 0x5C) = 2;
        }
        M2C_FIELD((&lbl_8031D320 + (var_r7 * 0x60)), s32 *, 0x5C) = 7;
        if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x5C) == 5) {
            var_r0_2 = 0;
        } else if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0xBC) == 5) {
            var_r0_2 = 1;
        } else if ((s32) M2C_FIELD((&lbl_8031D320 + 0x60), s32 *, 0xBC) == 5) {
            var_r0_2 = 2;
        } else {
            var_r0_2 = -1;
        }
        if (var_r0_2 != -1) {
            M2C_FIELD((&lbl_8031D320 + (var_r0_2 * 0x60)), s32 *, 0x5C) = 6;
        }
    } else {
        if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x5C) == 8) {
            var_r0_3 = 0;
        } else if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0xBC) == 8) {
            var_r0_3 = 1;
        } else if ((s32) M2C_FIELD((&lbl_8031D320 + 0x60), s32 *, 0xBC) == 8) {
            var_r0_3 = 2;
        } else {
            var_r0_3 = -1;
        }
        if (var_r0_3 != -1) {
            temp_r30 = &lbl_8031D320 + (var_r0_3 * 0x60);
            /* draft: did not compile: HSD_VICopyEFB2XFBPtr(&lbl_8031D320 + 0x17C, M2C_FIELD(temp_r30, s32 *, 0x58), 0); */
            M2C_FIELD(temp_r30, s32 *, 0x5C) = 7;
            M2C_FIELD(&lbl_8031D320, s32 *, 0x178) = 0;
        }
    }
    if (((M2C_UNK (*)(s32)) M2C_FIELD(&lbl_8031D320, M2C_UNK (**)(s32), 0x1DC)) != NULL) {
        M2C_FIELD(&lbl_8031D320, M2C_UNK (**)(s32), 0x1DC)(arg0);
    }
}
#pragma pop

void HSD_VIGXDrawDoneCB(void) {
    M2C_FIELD(&lbl_8031D320, s32 *, 0x1E0) = 0;
    if (((M2C_UNK (*)(s32)) M2C_FIELD(&lbl_8031D320, M2C_UNK (**)(s32), 0x1E8)) != NULL) {
        M2C_FIELD(&lbl_8031D320, M2C_UNK (**)(s32), 0x1E8)(M2C_FIELD(&lbl_8031D320, s32 *, 0x1E4));
    }
}

s32 fn_801009BC(void) {
    return M2C_FIELD(&lbl_8031D320, s32 *, 0x1E0);
}

void HSD_VICopyEFB2XFBPtr(void *arg0, M2C_UNK *arg1, s32 arg2) {
    s32 sp8;
    u16 temp_r0;
    u16 temp_r4;

    /* draft: did not compile: GXSetCopyFilter(M2C_FIELD(arg0, u8 *, 0x19), arg0 + 0x1A, M2C_FIELD(arg0, u8 *, 0x40), arg0 + 0x32); */
    GXSetDispCopyGamma(M2C_FIELD(arg0, s32 *, 0x44));
    HSD_StateSetColorUpdate(M2C_FIELD(arg0, u8 *, 0x50));
    HSD_StateSetAlphaUpdate(M2C_FIELD(arg0, u8 *, 0x51));
    HSD_StateSetZMode(M2C_FIELD(arg0, u8 *, 0x52), 3, 1);
    sp8 = M2C_FIELD(arg0, s32 *, 0x48);
    GXSetCopyClear(&sp8, M2C_FIELD(arg0, s32 *, 0x4C));
    switch (arg2) {                                 /* irregular */
    case 0:
        GXSetCopyClamp(3);
        GXSetDispCopySrc(0, 0, M2C_FIELD(arg0, u16 *, 4), M2C_FIELD(arg0, u16 *, 6));
        temp_r4 = M2C_FIELD(arg0, u16 *, 8);
        GXSetDispCopyDst(M2C_FIELD(arg0, u16 *, 4), GXSetDispCopyYScale(temp_r4, (f32) temp_r4 / (f32) M2C_FIELD(arg0, u16 *, 6)));
        GXCopyDisp(arg1, 1);
block_10:
        GXPixModeSync();
        return;
    case 1:
        GXSetDispCopySrc(0, 0, M2C_FIELD(arg0, u16 *, 4), (u16) (M2C_FIELD(arg0, u16 *, 6) - 4));
        GXSetDispCopyDst(M2C_FIELD(arg0, u16 *, 4), GXSetDispCopyYScale(M2C_BITWISE(u16, lbl_80351FD8)));
        GXSetCopyClamp(1);
        GXSetDispCopySrc(0, 0, M2C_FIELD(arg0, u16 *, 4), (u16) (M2C_FIELD(arg0, u16 *, 6) - 4));
        GXCopyDisp(arg1, 1);
        GXPixModeSync();
        return;
    case 2:
        GXSetDispCopySrc(0, 0, M2C_FIELD(arg0, u16 *, 4), (u16) (M2C_FIELD(arg0, u16 *, 6) - 4));
        GXSetDispCopyDst(M2C_FIELD(arg0, u16 *, 4), GXSetDispCopyYScale(M2C_BITWISE(u16, lbl_80351FD8)));
        GXSetCopyClamp(2);
        temp_r0 = M2C_FIELD(arg0, u16 *, 6) - 4;
        GXSetDispCopySrc(0, 4, M2C_FIELD(arg0, u16 *, 4), temp_r0);
        GXCopyDisp(arg1 + (((M2C_FIELD(arg0, u16 *, 4) + 0xF) & 0xFFF0) * temp_r0 * 2), 1);
        GXSetDispCopySrc(0, 0, M2C_FIELD(arg0, u16 *, 4), 4U);
        GXSetCopyClamp(3);
        GXCopyDisp(&lbl_8031D520, 1);
        goto block_10;
    default:
        HSD_Panic(&lbl_803501E8, 0x207, &lbl_802A9E64);
        goto block_10;
    }
}

void fn_80100C24(s32 arg0) { } /* draft: stub */

void fn_80100DA0(M2C_UNK arg_sp0) {
    s32 var_r29;
    s32 temp_r27_2;
    s32 temp_r28;
    s32 var_r0;
    s32 var_r0_2;
    s32 temp_r27;
    void *temp_r26;
    void *temp_r5;

    if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x1D4) >= 2) {
        temp_r28 = OSDisableInterrupts((long *)(0));
        if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x5C) == 3) {
            var_r29 = 0;
        } else if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0xBC) == 3) {
            var_r29 = 1;
        } else if ((s32) M2C_FIELD((&lbl_8031D320 + 0x60), s32 *, 0xBC) == 3) {
            var_r29 = 2;
        } else {
            var_r29 = -1;
        }
        if (var_r29 == -1) {
            __assert(&lbl_803501E8, 0x2FB, &lbl_802A9E58);
        }
        temp_r27 = OSDisableInterrupts((long *)(0));
        temp_r26 = &lbl_8031D320 + (var_r29 * 0x60);
        if ((s32) (u16)M2C_FIELD(temp_r26, s32 *, 0x5C) != 3) {
            __assert(&lbl_803501E8, 0x24E, &lbl_802A9E58 + 0x30);
        }
        M2C_FIELD(temp_r26, s32 *, 0x5C) = 4;
        /* draft: did not compile: temp_r5 = temp_r26 + 0x5C; */
        /* draft: did not compile: M2C_STRUCT_COPY((s32) temp_r5 + 4, (s32) (&lbl_8031D320 - 4) + 4, 0x58); */
        M2C_FIELD(&lbl_8031D320, s8 *, 0x54) = 0;
        /* draft: did not compile: OSRestoreInterrupts(temp_r27, &lbl_8031D320, temp_r5 + 0x58); */
        temp_r27_2 = OSDisableInterrupts((long *)(0));
        if ((s32) M2C_FIELD(temp_r26, s32 *, 0x5C) != 4) {
            __assert(&lbl_803501E8, 0x2D2, &lbl_802A9E58 + 0x5C);
        }
        if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x5C) == 6) {
            var_r0 = 0;
        } else if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0xBC) == 6) {
            var_r0 = 1;
        } else if ((s32) M2C_FIELD((&lbl_8031D320 + 0x60), s32 *, 0xBC) == 6) {
            var_r0 = 2;
        } else {
            var_r0 = -1;
        }
        var_r0_2 = 6;
        if (var_r0 != -1) {
            var_r0_2 = 5;
        }
        M2C_FIELD(temp_r26, s32 *, 0x5C) = var_r0_2;
        OSRestoreInterrupts(temp_r27_2);
        OSRestoreInterrupts(temp_r28);
    }
}

void HSD_VIWaitXFBFlushNoYield(void) {
    s32 var_r5;
    s32 var_r5_2;
    s32 var_r5_3;
    u32 var_r4;
    int var_r4_2;

    if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x1D4) < 2) {
        return;
    }
loop_4:
    OSDisableInterrupts((long *)(0));
    if (M2C_FIELD(&lbl_8031D320, s32 *, 0x5C) == 4) {
        var_r5 = 0;
    } else if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0xBC) == 4) {
        var_r5 = 1;
    } else if ((s32) M2C_FIELD((&lbl_8031D320 + 0x60), s32 *, 0xBC) == 4) {
        var_r5 = 2;
    } else {
        var_r5 = -1;
    }
    var_r4 = (u32) ((-1 - var_r5) | (var_r5 + 1)) >> 0x1FU;
    if (var_r4 == 0) {
        if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x5C) == 5) {
            var_r5_2 = 0;
        } else if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0xBC) == 5) {
            var_r5_2 = 1;
        } else if ((s32) M2C_FIELD((&lbl_8031D320 + 0x60), s32 *, 0xBC) == 5) {
            var_r5_2 = 2;
        } else {
            var_r5_2 = -1;
        }
        var_r4 = (u32) ((-1 - var_r5_2) | (var_r5_2 + 1)) >> 0x1FU;
    }
    var_r4_2 = (u32) (-(s32) var_r4 | var_r4) >> 0x1FU;
    if (var_r4_2 == 0) {
        if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x5C) == 6) {
            var_r5_3 = 0;
        } else if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0xBC) == 6) {
            var_r5_3 = 1;
        } else if ((s32) M2C_FIELD((&lbl_8031D320 + 0x60), s32 *, 0xBC) == 6) {
            var_r5_3 = 2;
        } else {
            var_r5_3 = -1;
        }
        var_r4_2 = (u32) ((-1 - var_r5_3) | (var_r5_3 + 1)) >> 0x1FU;
    }
    OSRestoreInterrupts();
    if ((s32) (var_r4_2 != 0) != 0) {
        VIWaitForRetrace();
        goto loop_4;
    }
}

void fn_801010DC(void) {
    void *temp_r6;

    if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x1D4) > 1) {
        return;
    }
loop_4:
    if (fn_801009BC() != 0) {
        fn_800E15B0();
        goto loop_4;
    }
    M2C_FIELD(&lbl_8031D320, s32 *, 0x1E0) = 1;
    M2C_FIELD(&lbl_8031D320, s32 *, 0x1E4) = -1;
    GXDrawDone((long *)(&lbl_8031D320));
    OSDisableInterrupts((long *)(0));
    temp_r6 = &lbl_8031D320 + 0x178;
    /* draft: did not compile: M2C_STRUCT_COPY((s32) temp_r6 + 4, (s32) (&lbl_8031D320 - 4) + 4, 0x58); */
    M2C_FIELD(&lbl_8031D320, s8 *, 0x54) = 0;
    M2C_FIELD(&lbl_8031D320, s32 *, 0x178) = 1;
    /* draft: did not compile: OSRestoreInterrupts(&lbl_8031D320, 0, temp_r6 + 0x58); */
}

s32 fn_8010118C(void) {
    s8 var_r31;
    s32 var_r3;
    void *temp_r4;

    var_r3 = -1;
    if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x1D4) > 1) {
        OSDisableInterrupts((long *)(0));
        if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x5C) == 2) {
            var_r31 = 0;
        } else {
            temp_r4 = &lbl_8031D320 + 0x60;
            if ((s32) M2C_FIELD(temp_r4, s32 *, 0x5C) == 2) {
                var_r31 = 1;
            } else if ((s32) M2C_FIELD(temp_r4, s32 *, 0xBC) == 2) {
                var_r31 = 2;
            } else {
                var_r31 = -1;
            }
        }
        OSRestoreInterrupts();
        var_r3 = var_r31;
    }
    return var_r3;
}

s32 fn_80101220(void) {
    s32 var_r31;
    void *temp_r4;

    OSDisableInterrupts((long *)(0));
    if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x5C) == 1) {
        var_r31 = 0;
    } else {
        temp_r4 = &lbl_8031D320 + 0x60;
        if ((s32) M2C_FIELD(temp_r4, s32 *, 0x5C) == 1) {
            var_r31 = 1;
        } else if ((s32) M2C_FIELD(temp_r4, s32 *, 0xBC) == 1) {
            var_r31 = 2;
        } else {
            var_r31 = -1;
        }
    }
    OSRestoreInterrupts();
    return var_r31;
}

s32 fn_8010129C(s32 arg0) {
    s32 var_r31;
    s32 temp_r0_2;
    s32 temp_r30;
    s32 temp_r0;
    u8 var_r4;
    void *temp_r3;
    void *temp_r4;

    var_r31 = 0;
    temp_r30 = OSDisableInterrupts((long *)(0));
    OSDisableInterrupts((long *)(0));
    if ((s32) M2C_FIELD((temp_r4 = &lbl_8031D320 + (arg0 * 0x60)), s32 *, 0x5C) == 2) {
        var_r31 = 1;
        M2C_FIELD(temp_r4, s32 *, 0x5C) = 1;
    }
    OSRestoreInterrupts();
    if (var_r31 != 0) {
        var_r4 = 0;
        if (((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x5C) != 0) && ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x5C) != 1)) {
            var_r4 = 1;
        }
        temp_r3 = &lbl_8031D320 + 0x60;
        temp_r0 = M2C_FIELD(temp_r3, s32 *, 0x5C);
        if ((temp_r0 != 0) && (temp_r0 != 1)) {
            var_r4 += 1;
        }
        temp_r0_2 = M2C_FIELD(temp_r3, s32 *, 0xBC);
        if ((temp_r0_2 != 0) && (temp_r0_2 != 1)) {
            var_r4 += 1;
        }
        M2C_FIELD(&lbl_8031D320, s32 *, 0x1D4) = var_r4;
    }
    OSRestoreInterrupts(temp_r30);
    return var_r31;
}

s32 fn_80101384(s32 arg0) {
    s32 var_r31;
    s32 temp_r0_2;
    s32 temp_r30;
    s32 temp_r0;
    u8 var_r4;
    void *temp_r3;
    void *temp_r4;

    var_r31 = 0;
    temp_r30 = OSDisableInterrupts((long *)(0));
    OSDisableInterrupts((long *)(0));
    if ((s32) M2C_FIELD((temp_r4 = &lbl_8031D320 + (arg0 * 0x60)), s32 *, 0x5C) == 1) {
        var_r31 = 1;
        M2C_FIELD(temp_r4, s32 *, 0x5C) = 2;
    }
    OSRestoreInterrupts();
    if (var_r31 != 0) {
        var_r4 = 0;
        if (((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x5C) != 0) && ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x5C) != 1)) {
            var_r4 = 1;
        }
        temp_r3 = &lbl_8031D320 + 0x60;
        temp_r0 = M2C_FIELD(temp_r3, s32 *, 0x5C);
        if ((temp_r0 != 0) && (temp_r0 != 1)) {
            var_r4 += 1;
        }
        temp_r0_2 = M2C_FIELD(temp_r3, s32 *, 0xBC);
        if ((temp_r0_2 != 0) && (temp_r0_2 != 1)) {
            var_r4 += 1;
        }
        M2C_FIELD(&lbl_8031D320, s32 *, 0x1D4) = var_r4;
    }
    OSRestoreInterrupts(temp_r30);
    return var_r31;
}

void HSD_VISetConfigure(void *arg0) {
    M2C_FIELD(&lbl_8031D320, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(&lbl_8031D320, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_STRUCT_COPY(&lbl_8031D320, arg0, 0x30);
    M2C_FIELD(&lbl_8031D320, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
    M2C_FIELD(&lbl_8031D320, s8 *, 0x54) = 1;
}
