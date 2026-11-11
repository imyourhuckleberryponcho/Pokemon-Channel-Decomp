/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

u64 OSGetTime();
M2C_UNK fn_800C34EC();
M2C_UNK __GXAbort(void *, M2C_UNK);
M2C_UNK fn_800E1804(M2C_UNK);
M2C_UNK GXSetDrawDoneCallback(M2C_UNK);
extern void *__cpReg;
extern void *__memReg;
extern void *gx;
extern u32 lbl_80350B40;
extern s32 lbl_80350B48;
extern u32 lbl_80350B4C;
extern u32 lbl_80350B50;
M2C_UNK GXInitTexCacheRegion(void *, M2C_UNK, s32, M2C_UNK, s32, M2C_UNK);
M2C_UNK GXInitTlutRegion(void *, s32, M2C_UNK);
M2C_UNK GXSetMisc(M2C_UNK, M2C_UNK, void *);
M2C_UNK OSRegisterResetFunction(M2C_UNK *);
M2C_UNK OSRegisterVersion(s32, M2C_UNK *);
s32 PPCMfhid2();
M2C_UNK PPCMthid2(s32);
M2C_UNK PPCMtwpar(M2C_UNK, M2C_UNK);
M2C_UNK __GXFlushTextureState(M2C_UNK, M2C_UNK, void *, void *, void *, void *, void *);
M2C_UNK __GXPEInit();
M2C_UNK __GXSetTmemConfig(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK);
extern M2C_UNK GXResetFuncInfo_802A7B30;
extern s32 __GXVersion;
extern s32 __peReg;
extern s32 __piReg;
extern M2C_UNK gxData_8031CC20;
s32 VIGetTvFormat(s32, s32);
M2C_UNK fn_800E0B94(u32, M2C_UNK *);
M2C_UNK fn_800E0FA8(u32, void *, M2C_UNK);
M2C_UNK fn_800E1034();
M2C_UNK GXSetTexCoordGen2(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E1314(M2C_UNK);
M2C_UNK fn_800E16A0(M2C_UNK, M2C_UNK);
M2C_UNK fn_800E16B4(M2C_UNK);
M2C_UNK fn_800E16C8(M2C_UNK);
M2C_UNK fn_800E16E4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E176C(M2C_UNK);
M2C_UNK fn_800E1788(M2C_UNK, M2C_UNK);
M2C_UNK fn_800E179C(M2C_UNK);
M2C_UNK fn_800E17B8(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E1C30(M2C_UNK, M2C_UNK);
M2C_UNK fn_800E1C78(M2C_UNK, M2C_UNK);
M2C_UNK fn_800E1CC0(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E1D1C(M2C_UNK);
M2C_UNK fn_800E1D68(M2C_UNK);
M2C_UNK GXSetDispCopySrc(M2C_UNK, M2C_UNK, u16, u16);
M2C_UNK GXSetDispCopyDst(u16, u16);
M2C_UNK fn_800E2078(M2C_UNK);
M2C_UNK GXSetCopyClamp(M2C_UNK);
M2C_UNK GXSetDispCopyYScale(u16, f32);
M2C_UNK GXSetCopyClear(s32 *, M2C_UNK);
M2C_UNK GXSetCopyFilter(u8, void *, M2C_UNK, void *);
M2C_UNK GXSetDispCopyGamma(M2C_UNK);
M2C_UNK GXClearBoundingBox();
M2C_UNK GXSetChanAmbColor(M2C_UNK, s32 *);
M2C_UNK GXSetChanMatColor(M2C_UNK, s32 *);
M2C_UNK fn_800E2CA4(M2C_UNK);
M2C_UNK GXSetChanCtrl(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXInvalidateTexAll();
M2C_UNK fn_800E38B0(M2C_UNK *, void *);
M2C_UNK fn_800E38C4(M2C_UNK *);
M2C_UNK fn_800E3F48(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E41D8(M2C_UNK);
M2C_UNK GXSetTevDirect(u32);
M2C_UNK GXSetTevOp(M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevKColorSel(u32, M2C_UNK);
M2C_UNK GXSetTevKAlphaSel(u32, M2C_UNK);
M2C_UNK GXSetTevSwapMode(u32, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E4808(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E48A0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E48F4(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevOrder(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E4B50(M2C_UNK);
M2C_UNK fn_800E4B80(M2C_UNK, s32 *, f32, f32, f32, f32);
M2C_UNK fn_800E4F64(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetBlendMode(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetColorUpdate(M2C_UNK);
M2C_UNK GXSetAlphaUpdate(M2C_UNK);
M2C_UNK GXSetZMode(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E5144(M2C_UNK);
M2C_UNK fn_800E517C(M2C_UNK, M2C_UNK);
M2C_UNK GXSetDither(M2C_UNK);
M2C_UNK GXSetDstAlpha(M2C_UNK, M2C_UNK);
M2C_UNK fn_800E52CC(M2C_UNK, M2C_UNK);
M2C_UNK fn_800E5304(u8, M2C_UNK);
M2C_UNK fn_800E54A8(M2C_UNK *);
M2C_UNK GXLoadPosMtxImm(f32 *, M2C_UNK, f32);
M2C_UNK GXLoadNrmMtxImm(f32 *, M2C_UNK);
M2C_UNK GXSetCurrentMtx(M2C_UNK);
M2C_UNK GXLoadTexMtxImm(f32 *, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E5858(u16, f32, f32, f32, f32, f32, f32);
M2C_UNK fn_800E58B4(M2C_UNK, M2C_UNK, u16, u16);
M2C_UNK fn_800E5944(M2C_UNK, M2C_UNK);
M2C_UNK GXSetClipMode(M2C_UNK);
M2C_UNK fn_800E5A30(M2C_UNK, M2C_UNK);
M2C_UNK fn_800E6278();
extern M2C_UNK fn_800DE82C;
extern M2C_UNK __GXDefaultTlutRegionCallback;
extern M2C_UNK lbl_802A7A44;
extern M2C_UNK lbl_802A7B14;
extern M2C_UNK lbl_802A7CA0;
extern M2C_UNK lbl_802A7CDC;
extern M2C_UNK lbl_802A7D18;
extern M2C_UNK lbl_802A7D54;
extern s32 lbl_80351D14;
extern s32 lbl_80351D18;
extern s32 lbl_80351D1C;
extern f32 lbl_80351D20;
extern f32 lbl_80351D24;
extern f32 lbl_80351D28;
M2C_UNK OSClearContext(M2C_UNK *);
M2C_UNK OSSetCurrentContext(M2C_UNK *);
M2C_UNK OSResumeThread(s32);
M2C_UNK OSSuspendThread(s32);
extern s32 lbl_80350B60;
extern s32 lbl_80350B68;
extern s32 lbl_80350B70;
M2C_UNK OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts();
extern void *lbl_80350B58;
extern u32 lbl_80350B5C;
extern u8 lbl_80350B64;
extern s32 lbl_80350B6C;
M2C_UNK __OSUnmaskInterrupts(M2C_UNK);
s32 fn_800C8A78();
extern M2C_UNK lbl_80350010;
extern M2C_UNK lbl_80350014;
extern M2C_UNK lbl_80350018;
extern s32 resetFuncRegistered;

s32 __GXShutdown(s32 arg0);
void *GXInit(s32 arg0, s32 arg1);
void __GXInitGX(void);
void fn_800DFBB0(M2C_UNK *arg1);
void GXInitFifoBase(void *arg0, s32 arg1, u32 arg2);
void GXInitFifoPtrs(void *arg0, s32 arg1, s32 arg2);
void fn_800DFDC0(void *arg0, s32 arg1, s32 arg2);
void GXSetCPUFifo(void *arg0);
void GXSetGPFifo(void *arg0);
s32 fn_800E0054(s32 arg0);
void __GXFifoInit(void);
void fn_800E00E4(void);
void fn_800E0108(void);
void fn_800E0128(u8 arg0);
void fn_800E0164(s32 arg0, s32 arg1);
void fn_800E01A0(u8 arg0, s32 arg1);
s32 fn_800E01DC(void);
void fn_800E01E4(void);
void GXSetVtxDesc();
void fn_800E068C(void);
void __GXCalculateVLim(void);
void fn_800E0804(void);

s32 __GXShutdown(s32 arg0) {
    s32 temp_r6;
    u16 temp_r4;
    u16 temp_r7;
    u32 temp_r4_2;
    u32 temp_r5;
    u64 temp_r3;
    u64 temp_ret;
    u64 temp_ret_2;

    if (arg0 == 0U) {
        if ((u32) lbl_80350B50 == 0U) {
            do {
                temp_r4 = M2C_FIELD(__memReg, u16 *, 0x4E);
            } while (temp_r4 != M2C_FIELD(__memReg, u16 *, 0x4E));
            lbl_80350B40 = (temp_r4 << 0x10) | M2C_FIELD(__memReg, u16 *, 0x50);
            temp_ret = OSGetTime();
            lbl_80350B4C = (u32) temp_ret;
            lbl_80350B50 = 1U;
            lbl_80350B48 = temp_ret;
            return 0;
        }
        temp_ret_2 = OSGetTime();
        temp_r3 = temp_ret_2;
        temp_r4_2 = (u32) temp_ret_2;
        do {
            temp_r7 = M2C_FIELD(__memReg, u16 *, 0x4E);
        } while (temp_r7 != M2C_FIELD(__memReg, u16 *, 0x4E));
        temp_r6 = ((temp_r3 - lbl_80350B48) - !M2C_CARRY) ^ 0x80000000;
        temp_r5 = (temp_r7 << 0x10) | M2C_FIELD(__memReg, u16 *, 0x50);
        if ((s32) -((temp_r6 - temp_r6) - !M2C_CARRY) != 0) {
            return 0;
        }
        if (temp_r5 != (u32) lbl_80350B40) {
            lbl_80350B4C = temp_r4_2;
            lbl_80350B48 = (s32) temp_r3;
            lbl_80350B40 = temp_r5;
            return 0;
        }
        goto block_14;
    }
    fn_800E0054(0);
    M2C_FIELD(__cpReg, s16 *, 4) = 3;
    fn_800E1804(0);
    GXSetDrawDoneCallback(0);
    *(s32 *)0xCC008000 = 0;
    *(s32 *)0xCC008000 = 0;
    *(s32 *)0xCC008000 = 0;
    *(s32 *)0xCC008000 = 0;
    *(s32 *)0xCC008000 = 0;
    *(s32 *)0xCC008000 = 0;
    *(s32 *)0xCC008000 = 0;
    *(s32 *)0xCC008000 = 0;
    fn_800C34EC(0xCC010000);
    M2C_FIELD(__cpReg, s16 *, 2) = 0;
    M2C_FIELD(gx, s8 *, 0x4F2) = 1;
    __GXAbort(gx, 3);
block_14:
    return 1;
}

void *GXInit(s32 arg0, s32 arg1) { } /* draft: stub */

void __GXInitGX(void) {
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    s32 sp28;
    s32 sp24;
    u32 var_r30_2;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    M2C_UNK *var_r31;
    M2C_UNK var_r4;
    s32 temp_r3;
    u16 temp_r4;
    u16 temp_r4_2;
    u32 var_r29;
    u32 var_r29_2;
    u32 var_r30;
    u8 sp20;

    sp28 = lbl_80351D14;
    sp24 = lbl_80351D18;
    sp20 = lbl_80351D1C;
    temp_r3 = VIGetTvFormat(lbl_80351D18, lbl_80351D14);
    switch (temp_r3) {                              /* irregular */
    case 0:
        var_r31 = &lbl_802A7CA0;
        break;
    case 1:
        var_r31 = &lbl_802A7D18;
        break;
    case 5:
        var_r31 = &lbl_802A7D54;
        break;
    case 2:
        var_r31 = &lbl_802A7CDC;
        break;
    default:
        var_r31 = &lbl_802A7CA0;
        break;
    }
    sp1C = sp28;
    GXSetCopyClear(&sp1C, 0xFFFFFF);
    GXSetTexCoordGen2(0, 1, 4, 0x3C, 0, 0x7D);
    GXSetTexCoordGen2(1, 1, 5, 0x3C, 0, 0x7D);
    GXSetTexCoordGen2(2, 1, 6, 0x3C, 0, 0x7D);
    GXSetTexCoordGen2(3, 1, 7, 0x3C, 0, 0x7D);
    GXSetTexCoordGen2(4, 1, 8, 0x3C, 0, 0x7D);
    GXSetTexCoordGen2(5, 1, 9, 0x3C, 0, 0x7D);
    GXSetTexCoordGen2(6, 1, 0xA, 0x3C, 0, 0x7D);
    GXSetTexCoordGen2(7, 1, 0xB, 0x3C, 0, 0x7D);
    fn_800E1314(1);
    fn_800E0804();
    fn_800E1034();
    var_r29 = 9U;
    do {
        fn_800E0FA8(var_r29, gx, 0);
        var_r29 += 1;
    } while (var_r29 <= 0x18U);
    var_r29_2 = 0U;
    do {
        fn_800E0B94(var_r29_2, &lbl_802A7A44);
        var_r29_2 += 1;
    } while (var_r29_2 < 8U);
    fn_800E1C30(6, 0);
    fn_800E1C78(6, 0);
    fn_800E1CC0(0, 0, 0);
    fn_800E1CC0(1, 0, 0);
    fn_800E1CC0(2, 0, 0);
    fn_800E1CC0(3, 0, 0);
    fn_800E1CC0(4, 0, 0);
    fn_800E1CC0(5, 0, 0);
    fn_800E1CC0(6, 0, 0);
    fn_800E1CC0(7, 0, 0);
    sp2C = lbl_80351D20;
    sp30 = lbl_80351D24;
    sp34 = lbl_80351D24;
    sp38 = lbl_80351D24;
    sp3C = lbl_80351D24;
    sp40 = lbl_80351D20;
    sp44 = lbl_80351D24;
    sp48 = lbl_80351D24;
    sp4C = lbl_80351D24;
    sp50 = lbl_80351D24;
    sp54 = lbl_80351D20;
    temp_r4 = M2C_FIELD(var_r31, u16 *, 4);
    sp58 = lbl_80351D24;
    GXLoadPosMtxImm(&sp2C, 0, lbl_80351D20);
    GXLoadNrmMtxImm(&sp2C, 0);
    GXSetCurrentMtx(0);
    GXLoadTexMtxImm(&sp2C, 0x3C, 0);
    GXLoadTexMtxImm(&sp2C, 0x7D, 0);
    fn_800E5858((u16)temp_r4, lbl_80351D24, lbl_80351D24, (f32) temp_r4, (f32) M2C_FIELD(var_r31, u16 *, 8), lbl_80351D24, lbl_80351D20);
    fn_800E54A8(&lbl_802A7B14);
    fn_800E1D68(0);
    fn_800E1D1C(2);
    GXSetClipMode(0);
    fn_800E58B4(0, 0, M2C_FIELD(var_r31, u16 *, 4), M2C_FIELD(var_r31, u16 *, 6));
    fn_800E5944(0, 0);
    fn_800E2CA4(0);
    GXSetChanCtrl(4, 0, 0, 1, 0, 0, 2);
    sp18 = sp24;
    GXSetChanAmbColor(4, &sp18);
    sp14 = sp20;
    GXSetChanMatColor(4, &sp14);
    GXSetChanCtrl(5, 0, 0, 1, 0, 0, 2);
    sp10 = sp24;
    GXSetChanAmbColor(5, &sp10);
    spC = sp20;
    GXSetChanMatColor(5, &spC);
    GXInvalidateTexAll();
    var_r30 = 0U;
    M2C_FIELD(gx, s32 *, 0x2C8) = 0;
    M2C_FIELD(gx, s32 *, 0x2CC) = 0;
    fn_800E38B0(&fn_800DE82C, gx);
    fn_800E38C4(&__GXDefaultTlutRegionCallback);
    GXSetTevOrder(0, 0, 0, 4);
    GXSetTevOrder(1, 1, 1, 4);
    GXSetTevOrder(2, 2, 2, 4);
    GXSetTevOrder(3, 3, 3, 4);
    GXSetTevOrder(4, 4, 4, 4);
    GXSetTevOrder(5, 5, 5, 4);
    GXSetTevOrder(6, 6, 6, 4);
    GXSetTevOrder(7, 7, 7, 4);
    GXSetTevOrder(8, 0xFF, 0xFF, 0xFF);
    GXSetTevOrder(9, 0xFF, 0xFF, 0xFF);
    GXSetTevOrder(0xA, 0xFF, 0xFF, 0xFF);
    GXSetTevOrder(0xB, 0xFF, 0xFF, 0xFF);
    GXSetTevOrder(0xC, 0xFF, 0xFF, 0xFF);
    GXSetTevOrder(0xD, 0xFF, 0xFF, 0xFF);
    GXSetTevOrder(0xE, 0xFF, 0xFF, 0xFF);
    GXSetTevOrder(0xF, 0xFF, 0xFF, 0xFF);
    fn_800E4B50(1);
    GXSetTevOp(0, 3);
    fn_800E48A0(7, 0, 0, 7, 0);
    fn_800E48F4(0, 0x11, 0);
    do {
        GXSetTevKColorSel(var_r30, 6);
        GXSetTevKAlphaSel(var_r30, 0);
        GXSetTevSwapMode(var_r30, 0, 0);
        var_r30 += 1;
    } while (var_r30 < 0x10U);
    fn_800E4808(0, 0, 1, 2, 3);
    fn_800E4808(1, 0, 0, 0, 3);
    fn_800E4808(2, 1, 1, 1, 3);
    fn_800E4808(3, 2, 2, 2, 3);
    var_r30_2 = 0U;
    do {
        GXSetTevDirect(var_r30_2);
        var_r30_2 += 1;
    } while (var_r30_2 < 0x10U);
    fn_800E41D8(0);
    fn_800E3F48(0, 0, 0);
    fn_800E3F48(1, 0, 0);
    fn_800E3F48(2, 0, 0);
    fn_800E3F48(3, 0, 0);
    sp8 = sp24;
    fn_800E4B80(0, &sp8, lbl_80351D24, lbl_80351D20, lbl_80351D28, lbl_80351D20);
    fn_800E4F64(0, 0, 0);
    GXSetBlendMode(0, 4, 5, 0);
    GXSetColorUpdate(1);
    GXSetAlphaUpdate(1);
    GXSetZMode(1, 3, 1);
    fn_800E5144(1);
    GXSetDither(1);
    GXSetDstAlpha(0, 0);
    fn_800E517C(0, 0);
    fn_800E52CC(1, 1);
    if ((s32) M2C_FIELD(var_r31, u16 *, 0x10) == (s32) (M2C_FIELD(var_r31, u16 *, 8) * 2)) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    fn_800E5304(M2C_FIELD(var_r31, u8 *, 0x18), var_r4);
    GXSetDispCopySrc(0, 0, M2C_FIELD(var_r31, u16 *, 4), M2C_FIELD(var_r31, u16 *, 6));
    GXSetDispCopyDst(M2C_FIELD(var_r31, u16 *, 4), M2C_FIELD(var_r31, u16 *, 6));
    temp_r4_2 = M2C_FIELD(var_r31, u16 *, 8);
    GXSetDispCopyYScale((u16)temp_r4_2, (f32) temp_r4_2 / (f32) M2C_FIELD(var_r31, u16 *, 6));
    GXSetCopyClamp(3);
    GXSetCopyFilter(M2C_FIELD(var_r31, u8 *, 0x19), var_r31 + 0x1A, 1, var_r31 + 0x32);
    GXSetDispCopyGamma(0);
    fn_800E2078(0);
    GXClearBoundingBox();
    fn_800E176C(1);
    fn_800E16C8(1);
    fn_800E179C(0);
    fn_800E16E4(0, 0, 1, 0xF);
    fn_800E16A0(7, 0);
    fn_800E16B4(1);
    fn_800E1788(0, 0);
    fn_800E17B8(1, 7, 1);
    fn_800E5A30(0x23, 0x16);
    fn_800E6278();
}

void fn_800DFBB0(M2C_UNK *arg1) {
    M2C_UNK sp10;
    s32 temp_r5;
    u32 temp_r4;

    M2C_FIELD(gx, u32 *, 0xC) = (u32) M2C_FIELD(__cpReg, u16 *, 0);
    if ((((u32) M2C_FIELD(gx, u32 *, 8) >> 3U) & 1) && (((u32) M2C_FIELD(gx, u32 *, 0xC) >> 1U) & 1)) {
        OSResumeThread(lbl_80350B60);
        lbl_80350B68 = 0;
        fn_800E01A0(1, 1);
        fn_800E0164(1, 0);
    }
    if ((((u32) M2C_FIELD(gx, u32 *, 8) >> 2U) & 1) && (M2C_FIELD(gx, u32 *, 0xC) & 1)) {
        temp_r5 = lbl_80350B70;
        lbl_80350B70 = temp_r5 + 1;
        fn_800E0164((long)(0), (long)(1));
        fn_800E01A0(1, 0);
        lbl_80350B68 = 1;
        OSSuspendThread(lbl_80350B60);
    }
    temp_r4 = M2C_FIELD(gx, u32 *, 8);
    if (((temp_r4 >> 5U) & 1) && (((u32) M2C_FIELD(gx, u32 *, 0xC) >> 4U) & 1)) {
        M2C_FIELD(gx, u32 *, 8) = (u32) (temp_r4 & 0xFFFFFFDF);
        M2C_FIELD(__cpReg, s16 *, 2) = (s16) M2C_FIELD(gx, u32 *, 8);
        if (((M2C_UNK (*)()) lbl_80350B6C) != NULL) {
            OSClearContext(&sp10);
            OSSetCurrentContext(&sp10);
            /* draft: did not compile: lbl_80350B6C(); */
            OSClearContext(&sp10);
            OSSetCurrentContext(arg1);
        }
    }
}

void GXInitFifoBase(void *arg0, s32 arg1, u32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = (s32) (arg1 + (arg2 - 4));
    M2C_FIELD(arg0, u32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    /* draft: did not compile: fn_800DFDC0(arg2 - 0x4000, (arg2 >> 1U) & 0x7FFFFFE0); */
    GXInitFifoPtrs(arg0, arg1, arg1);
}

void GXInitFifoPtrs(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;

    OSDisableInterrupts();
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (arg2 - arg1);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r4 + M2C_FIELD(arg0, s32 *, 8));
    }
    OSRestoreInterrupts();
}

void fn_800DFDC0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
}

void GXSetCPUFifo(void *arg0) {
    s32 temp_r31;
    s32 temp_r6;

    lbl_80350B58 = arg0;
    temp_r31 = OSDisableInterrupts();
    if (0 /* draft: did not compile */) {
        M2C_FIELD(__piReg, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0) & 0x3FFFFFFF);
        M2C_FIELD(__piReg, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 4) & 0x3FFFFFFF);
        temp_r6 = M2C_FIELD(arg0, s32 *, 0x18) & 0x3FFFFFE0 & 0xFBFFFFFF;
        M2C_FIELD(__piReg, s32 *, 0x14) = temp_r6;
        lbl_80350B64 = 1;
        fn_800E01A0((unsigned char)(1), (long)(1));
        fn_800E0164(1, 0);
        fn_800E0128(1);
    } else {
        if ((s8) lbl_80350B64 != 0) {
            fn_800E0128(0);
            lbl_80350B64 = 0;
        }
        fn_800E0164(0, 0);
        M2C_FIELD(__piReg, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0) & 0x3FFFFFFF);
        M2C_FIELD(__piReg, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 4) & 0x3FFFFFFF);
        M2C_FIELD(__piReg, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) & 0x3FFFFFE0 & 0xFBFFFFFF);
    }
    fn_800C34EC((long)(0));
    OSRestoreInterrupts(temp_r31);
}

void GXSetGPFifo(void *arg0) {
    s32 temp_r31;

    temp_r31 = OSDisableInterrupts();
    fn_800E0108();
    fn_800E0164(0, 0);
    /* draft: did not compile: lbl_80350B5C = arg0; */
    M2C_FIELD(__cpReg, s16 *, 0x20) = (s16) M2C_FIELD(arg0, u32 *, 0);
    M2C_FIELD(__cpReg, s16 *, 0x24) = (s16) M2C_FIELD(arg0, u32 *, 4);
    M2C_FIELD(__cpReg, s16 *, 0x30) = (s16) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(__cpReg, s16 *, 0x34) = (s16) M2C_FIELD(arg0, u32 *, 0x18);
    M2C_FIELD(__cpReg, s16 *, 0x38) = (s16) M2C_FIELD(arg0, u32 *, 0x14);
    M2C_FIELD(__cpReg, s16 *, 0x28) = (s16) M2C_FIELD(arg0, u32 *, 0xC);
    M2C_FIELD(__cpReg, s16 *, 0x2C) = (s16) M2C_FIELD(arg0, u32 *, 0x10);
    M2C_FIELD(__cpReg, s16 *, 0x22) = (s16) (((u32) M2C_FIELD(arg0, u32 *, 0) >> 0x10U) & 0x3FFF);
    M2C_FIELD(__cpReg, s16 *, 0x26) = (s16) (((u32) M2C_FIELD(arg0, u32 *, 4) >> 0x10U) & 0x3FFF);
    M2C_FIELD(__cpReg, s16 *, 0x32) = (s16) ((s32) M2C_FIELD(arg0, s32 *, 0x1C) >> 0x10);
    M2C_FIELD(__cpReg, s16 *, 0x36) = (s16) (((u32) M2C_FIELD(arg0, u32 *, 0x18) >> 0x10U) & 0x3FFF);
    M2C_FIELD(__cpReg, s16 *, 0x3A) = (s16) (((u32) M2C_FIELD(arg0, u32 *, 0x14) >> 0x10U) & 0x3FFF);
    M2C_FIELD(__cpReg, s16 *, 0x2A) = (s16) ((u32) M2C_FIELD(arg0, u32 *, 0xC) >> 0x10U);
    M2C_FIELD(__cpReg, s16 *, 0x2E) = (s16) ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 0x10U);
    fn_800C34EC(__cpReg);
    if (0 /* draft: did not compile */) {
        lbl_80350B64 = 1;
        fn_800E0164(1, 0);
        fn_800E0128(1);
    } else {
        lbl_80350B64 = 0;
        fn_800E0164(0, 0);
        fn_800E0128(0);
    }
    fn_800E01A0(1, 1);
    fn_800E00E4();
    OSRestoreInterrupts(temp_r31);
}

#pragma push
#pragma peephole off
s32 fn_800E0054(s32 arg0) {
    s32 temp_r31;

    temp_r31 = lbl_80350B6C;
    OSDisableInterrupts();
    lbl_80350B6C = arg0;
    OSRestoreInterrupts();
    return temp_r31;
}
#pragma pop

void __GXFifoInit(void) {
    __OSSetInterruptHandler(0x11, fn_800DFBB0);
    __OSUnmaskInterrupts(0x4000);
    lbl_80350B60 = fn_800C8A78();
    lbl_80350B68 = 0;
    lbl_80350B58 = 0;
    lbl_80350B5C = 0;
}

void fn_800E00E4(void) {
    M2C_FIELD(gx, s32 *, 8) = (s32) ((M2C_FIELD(gx, s32 *, 8) & 0xFFFFFFFE) | 1);
    M2C_FIELD(__cpReg, s16 *, 2) = (s16) M2C_FIELD(gx, s32 *, 8);
}

void fn_800E0108(void) {
    M2C_FIELD(gx, s32 *, 8) = (s32) (M2C_FIELD(gx, s32 *, 8) & 0xFFFFFFFE);
    M2C_FIELD(__cpReg, s16 *, 2) = (s16) M2C_FIELD(gx, s32 *, 8);
}

void fn_800E0128(u8 arg0) {
    s32 var_r0;

    if (arg0 != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    M2C_FIELD(gx, s32 *, 8) = (s32) ((M2C_FIELD(gx, s32 *, 8) & 0xFFFFFFEF) | (var_r0 * 0x10));
    M2C_FIELD(__cpReg, s16 *, 2) = (s16) M2C_FIELD(gx, s32 *, 8);
}

void fn_800E0164(s32 arg0, s32 arg1) {
    M2C_FIELD(gx, s32 *, 8) = (s32) ((M2C_FIELD(gx, s32 *, 8) & 0xFFFFFFFB) | ((arg0 * 4) & 0x3FC));
    M2C_FIELD(gx, s32 *, 8) = (s32) ((M2C_FIELD(gx, s32 *, 8) & 0xFFFFFFF7) | ((arg1 * 8) & 0x7F8));
    M2C_FIELD(__cpReg, s16 *, 2) = (s16) M2C_FIELD(gx, s32 *, 8);
}

void fn_800E01A0(u8 arg0, s32 arg1) {
    M2C_FIELD(gx, s32 *, 0x10) = (s32) ((M2C_FIELD(gx, s32 *, 0x10) & 0xFFFFFFFE) | arg0);
    M2C_FIELD(gx, s32 *, 0x10) = (s32) ((M2C_FIELD(gx, s32 *, 0x10) & 0xFFFFFFFD) | ((arg1 * 2) & 0x1FE));
    M2C_FIELD(__cpReg, s16 *, 4) = (s16) M2C_FIELD(gx, s32 *, 0x10);
}

s32 fn_800E01DC(void) {
    return lbl_80350B5C;
}

void fn_800E01E4(void) {
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r3_4;
    s32 var_r3_5;
    s32 var_r3_6;
    s32 var_r3_7;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r5;
    s32 var_r6;
    u32 temp_r4;
    u32 temp_r6;

    temp_r4 = M2C_FIELD(gx, u32 *, 0x14);
    if ((temp_r4 >> 0xDU) & 3) {
        var_r3 = 1;
    } else {
        var_r3 = 0;
    }
    if ((temp_r4 >> 0xFU) & 3) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    if ((u8) M2C_FIELD(gx, u8 *, 0x41D) != 0) {
        var_r4_2 = 2;
    } else if ((u8) M2C_FIELD(gx, u8 *, 0x41C) != 0) {
        var_r4_2 = 1;
    } else {
        var_r4_2 = 0;
    }
    temp_r6 = M2C_FIELD(gx, u32 *, 0x18);
    if (temp_r6 & 3) {
        var_r3_2 = 1;
    } else {
        var_r3_2 = 0;
    }
    if ((temp_r6 >> 2U) & 3) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    if ((temp_r6 >> 4U) & 3) {
        var_r3_3 = 1;
    } else {
        var_r3_3 = 0;
    }
    if ((temp_r6 >> 6U) & 3) {
        var_r3_4 = 1;
    } else {
        var_r3_4 = 0;
    }
    if ((temp_r6 >> 8U) & 3) {
        var_r3_5 = 1;
    } else {
        var_r3_5 = 0;
    }
    if ((temp_r6 >> 0xAU) & 3) {
        var_r3_6 = 1;
    } else {
        var_r3_6 = 0;
    }
    if ((temp_r6 >> 0xCU) & 3) {
        var_r3_7 = 1;
    } else {
        var_r3_7 = 0;
    }
    if ((temp_r6 >> 0xEU) & 3) {
        var_r6 = 1;
    } else {
        var_r6 = 0;
    }
    *(s8 *)0xCC008000 = 0x10;
    *(s8 *)0xCC008000 = 0x1008;
    *(s8 *)0xCC008000 = (s32) (((var_r3_2 + var_r5 + var_r3_3 + var_r3_4 + var_r3_5 + var_r3_6 + var_r3_7 + var_r6) * 0x10) | ((var_r3 + var_r4) | (var_r4_2 * 4)));
    M2C_FIELD(gx, s16 *, 2) = 1;
}

void GXSetVtxDesc() { } /* draft: stub */

void fn_800E068C(void) {
    s32 temp_r3;

    *(s8 *)0xCC008000 = 8;
    *(s8 *)0xCC008000 = 0x50;
    temp_r3 = M2C_FIELD(gx, s32 *, 0x14);
    *(s8 *)0xCC008000 = temp_r3;
    *(s8 *)0xCC008000 = 8;
    *(s8 *)0xCC008000 = 0x60;
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(gx, s32 *, 0x18);
    fn_800E01E4();
}

void __GXCalculateVLim(void) {
    s32 var_r8;
    u32 temp_r4;
    u32 temp_r9;

    if ((u16) M2C_FIELD(gx, u16 *, 4) != 0) {
        temp_r9 = M2C_FIELD(gx, u32 *, 0x14);
        temp_r4 = M2C_FIELD(gx, u32 *, 0x18);
        if ((s32) (((u32) M2C_FIELD(gx, u32 *, 0x1C) >> 9U) & 1) == 1) {
            var_r8 = 3;
        } else {
            var_r8 = 1;
        }
        M2C_FIELD(gx, s16 *, 6) = (s16) ((temp_r9 & 1) + ((temp_r9 >> 1U) & 1) + ((temp_r9 >> 2U) & 1) + ((temp_r9 >> 3U) & 1) + ((temp_r9 >> 4U) & 1) + ((temp_r9 >> 5U) & 1) + ((temp_r9 >> 6U) & 1) + ((temp_r9 >> 7U) & 1) + ((temp_r9 >> 8U) & 1) + *(&lbl_80350018 + ((temp_r9 >> 9U) & 3)) + (*(&lbl_80350018 + ((temp_r9 >> 0xBU) & 3)) * var_r8) + *(&lbl_80350010 + ((temp_r9 >> 0xDU) & 3)) + *(&lbl_80350010 + ((temp_r9 >> 0xFU) & 3)) + *(&lbl_80350014 + (temp_r4 & 3)) + *(&lbl_80350014 + ((temp_r4 >> 2U) & 3)) + *(&lbl_80350014 + ((temp_r4 >> 4U) & 3)) + *(&lbl_80350014 + ((temp_r4 >> 6U) & 3)) + *(&lbl_80350014 + ((temp_r4 >> 8U) & 3)) + *(&lbl_80350014 + ((temp_r4 >> 0xAU) & 3)) + *(&lbl_80350014 + ((temp_r4 >> 0xCU) & 3)) + *(&lbl_80350014 + ((temp_r4 >> 0xEU) & 3)));
    }
}

void fn_800E0804(void) {
    M2C_FIELD(gx, s32 *, 0x14) = 0;
    M2C_FIELD(gx, s32 *, 0x14) = (s32) ((M2C_FIELD(gx, s32 *, 0x14) & 0xFFFFF9FF) | 0x200);
    M2C_FIELD(gx, s32 *, 0x18) = 0;
    M2C_FIELD(gx, s8 *, 0x41C) = 0;
    M2C_FIELD(gx, s8 *, 0x41D) = 0;
    M2C_FIELD(gx, s32 *, 0x4F4) = (s32) (M2C_FIELD(gx, s32 *, 0x4F4) | 8);
}
