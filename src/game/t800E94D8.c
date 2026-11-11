/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 hsdNew(M2C_UNK *);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_802A8280;
extern M2C_UNK lbl_80350078;
extern M2C_UNK lbl_803500A0;
extern M2C_UNK *lbl_80350B98;
s32 hsdAllocMemPiece(M2C_UNK);
extern M2C_UNK lbl_80350094;
M2C_UNK hsdFreeMemPiece(M2C_UNK);
extern M2C_UNK lbl_803500A4;
M2C_UNK GXPixModeSync();
M2C_UNK GXSetTexCopySrc(s32, s32, u16, u16);
M2C_UNK GXSetTexCopyDst(u16, u16, s32, s32);
M2C_UNK GXCopyTex(s32, u8);
M2C_UNK GXInvalidateTexAll();
M2C_UNK HSD_AObjRemove(s32);
M2C_UNK HSD_Free_801095FC(u32);
extern s32 lbl_80350B9C;
M2C_UNK hsdInitClassInfo(M2C_UNK *, M2C_UNK *, void *, void *, M2C_UNK, M2C_UNK);
extern M2C_UNK fn_800E6BC4;
extern M2C_UNK TObjLoad;
extern M2C_UNK MakeTextureMtx;
extern M2C_UNK TObjMakeTExp;
extern M2C_UNK lbl_802AA3D0;
M2C_UNK HSD_SetupChannel(M2C_UNK *, M2C_UNK *);
M2C_UNK HSD_DisableChannelLighting(M2C_UNK);
M2C_UNK HSD_StateSetNumChans(M2C_UNK);
s32 HSD_LObjGetLightMaskDiffuse(void *);
s32 fn_800EEF54();
s32 fn_800EEF5C();
s32 fn_800EEF64();
void *HSD_LObjGetActiveByID(M2C_UNK);
void *HSD_LObjGetActiveByIndex(s32);
M2C_UNK HSD_LObjSetup(s32 *, f32);
M2C_UNK HSD_MulColor();
extern M2C_UNK lbl_802A8750;
extern M2C_UNK lbl_8031D198;
extern s32 lbl_803500A8;
M2C_UNK fn_800EAB60();
s32 fn_800EAB9C();
s32 HSD_StateAssignTev();
M2C_UNK fn_800EABD0();
M2C_UNK HSD_SetupTevStage(M2C_UNK *, M2C_UNK);
M2C_UNK HSD_SetTevRegAll();
extern f32 lbl_80351E40;
extern f32 lbl_80351E44;
extern f32 lbl_80351E48;
M2C_UNK fn_800E1C30(u8, s32);
extern s32 lbl_80350BDC;
extern u8 lbl_80350BE0;
M2C_UNK fn_800E1D1C();
extern s32 lbl_80350BD4;
M2C_UNK GXSetBlendMode(s32, s32, s32, s32);
extern s32 lbl_80350BC4;
extern s32 lbl_80350BC8;
extern s32 lbl_80350BCC;
extern s32 lbl_80350BD0;
M2C_UNK GXSetZMode(u8, s32, u8);
extern u8 lbl_80350BB8;
extern s32 lbl_80350BBC;
extern u8 lbl_80350BC0;
M2C_UNK fn_800E48A0(s32, u8, s32, s32, u8);
extern u8 lbl_80350BA6;
extern s32 lbl_80350BA8;
extern s32 lbl_80350BAC;
extern u8 lbl_80350BB0;
extern s32 lbl_80350BB4;
M2C_UNK GXSetColorUpdate(u8);
extern u8 lbl_80350BA5;
M2C_UNK GXSetAlphaUpdate(u8);
extern u8 lbl_80350BA4;
M2C_UNK GXSetDstAlpha(u8, u8);
extern u8 lbl_80350BA2;
extern u8 lbl_80350BA3;
M2C_UNK fn_800E5144(u8);
extern u8 lbl_80350BA1;
M2C_UNK GXSetDither(u8);
extern u8 lbl_80350BA0;
extern s8 lbl_80350BD8;
M2C_UNK HSD_ClearVtxDesc_800F673C();
extern M2C_UNK lbl_802A8870;

void HSD_Index2TexMtx();
void HSD_Index2TexMap_800E9594();
void fn_800E9624();
void HSD_TObjRemoveAll(void *arg0);
s32 HSD_TObjAlloc(void);
s32 HSD_TlutAlloc(void);
void HSD_TlutRemove(u32 arg0);
s32 HSD_TObjTevAlloc(void);
void HSD_ImageDescCopyFromEFB(void *arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4);
s32 TObjInit(void *arg0);
void TObjRelease(void *arg0);
void CObjAmnesia(u32 arg0);
void MObjInfoInit(void);
void fn_800E9B28(s32 arg0, M2C_UNK arg_sp0);
void HSD_SetupRenderModeWithCustomPE(u32 arg0, void *arg1);
void HSD_SetupRenderMode(u32 arg0);
void HSD_SetMaterialColor(s32 *arg0, s32 *arg1, s32 *arg2, f32 farg0);
void HSD_SetMaterialShininess(f32 farg0);
void fn_800EA0F8(u8 arg0, s32 arg1);
void HSD_StateSetCullMode(s32 arg0);
void fn_800EA198(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void HSD_StateSetZMode(s32 arg0, s32 arg1, s32 arg2);
void fn_800EA2C8(s32 arg0, u8 arg1, s32 arg2, s32 arg3, u8 arg4, M2C_UNK arg_sp0);
void HSD_StateSetColorUpdate(s32 arg0);
void HSD_StateSetAlphaUpdate(s32 arg0);
void fn_800EA408(s32 arg0, u8 arg1);
void fn_800EA474(s32 arg0);
void fn_800EA4BC(s32 arg0);
void fn_800EA504(void);
void fn_800EA520(void);
void _HSD_StateInvalidateRenderMode(void);
void HSD_StateInvalidate(s32 arg0);

void HSD_Index2TexMtx() { } /* draft: stub */

void HSD_Index2TexMap_800E9594() { } /* draft: stub */

void fn_800E9624() { } /* draft: stub */

void HSD_TObjRemoveAll(void *arg0) {
    void *temp_r31;
    void *temp_r4;
    void *temp_r4_2;
    void *var_r30;

    var_r30 = arg0;
loop_4:
    if (var_r30 != NULL) {
        temp_r31 = M2C_FIELD(var_r30, void **, 8);
        if (var_r30 != NULL) {
            temp_r4 = M2C_FIELD(var_r30, void **, 0);
            M2C_FIELD(temp_r4, M2C_UNK (**)(void *, void *), 0x30)(var_r30, temp_r4);
            temp_r4_2 = M2C_FIELD(var_r30, void **, 0);
            M2C_FIELD(temp_r4_2, M2C_UNK (**)(void *, void *), 0x34)(var_r30, temp_r4_2);
        }
        var_r30 = temp_r31;
        goto loop_4;
    }
}

s32 HSD_TObjAlloc(void) {
    M2C_UNK *var_r3;
    s32 temp_r3;

    var_r3 = lbl_80350B98;
    var_r3 = var_r3 != NULL ? var_r3 : &lbl_802A8280;
    temp_r3 = hsdNew(var_r3);
    if (temp_r3 == 0) {
        __assert(&lbl_80350078, 0x812, &lbl_803500A0);
    }
    return temp_r3;
}

s32 HSD_TlutAlloc(void) {
    s32 temp_r3;

    temp_r3 = hsdAllocMemPiece(0x10);
    if (temp_r3 == 0) {
        __assert(&lbl_80350078, 0x82F, &lbl_80350094);
    }
    /* draft: did not compile: memset(temp_r3, 0, 0x10); */
    return temp_r3;
}

void HSD_TlutRemove(u32 arg0) {
    if (arg0 != 0U) {
        hsdFreeMemPiece(0x10);
    }
}

s32 HSD_TObjTevAlloc(void) {
    s32 temp_r3;

    temp_r3 = hsdAllocMemPiece(0x20);
    if (temp_r3 == 0) {
        __assert(&lbl_80350078, 0x85A, &lbl_803500A4);
    }
    /* draft: did not compile: memset(temp_r3, 0, 0x20); */
    return temp_r3;
}

void HSD_ImageDescCopyFromEFB(void *arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4) {
    if (arg0 != NULL) {
        GXSetTexCopySrc(arg1, arg2, M2C_FIELD(arg0, u16 *, 4), M2C_FIELD(arg0, u16 *, 6));
        GXSetTexCopyDst(M2C_FIELD(arg0, u16 *, 4), M2C_FIELD(arg0, u16 *, 6), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC) != 0);
        if (arg3 != 0) {
            HSD_StateSetZMode(1, 3, 1);
        }
        GXCopyTex(M2C_FIELD(arg0, s32 *, 0), arg3);
        if (arg4 != 0) {
            GXPixModeSync();
            GXInvalidateTexAll();
        }
    }
}

#pragma push
#pragma peephole off
s32 TObjInit(void *arg0) {
    s32 var_r3;

    var_r3 = M2C_FIELD(M2C_FIELD(&lbl_802A8280, void **, 0x14), s32 (**)(void *), 0x2C)(M2C_FIELD(&lbl_802A8280, void **, 0x14));
    if (var_r3 >= 0) {
        var_r3 = 0;
        M2C_FIELD(arg0, u16 *, 0x4A) = 0xFFFF;
    }
    return var_r3;
}
#pragma pop

void TObjRelease(void *arg0) {
    s32 var_r31;
    u8 temp_r3;

    HSD_AObjRemove(M2C_FIELD(arg0, s32 *, 0x64));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U) {
        hsdFreeMemPiece(0x10);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xA8) != 0U) {
        hsdFreeMemPiece(0x20);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        var_r31 = 0;
loop_9:
        /* draft: did not compile: temp_r3 = *((M2C_FIELD(arg0, u32 *, 0x6C)) + var_r31); */
        if (temp_r3 != 0U) {
            if (temp_r3 != 0U) {
                hsdFreeMemPiece(0x10);
            }
            var_r31 += 4;
            goto loop_9;
        }
        HSD_Free_801095FC((M2C_FIELD(arg0, u32 *, 0x6C)));
    }
    M2C_FIELD(M2C_FIELD(&lbl_802A8280, void **, 0x14), M2C_UNK (**)(void *, void *), 0x30)(arg0, M2C_FIELD(&lbl_802A8280, void **, 0x14));
}

void CObjAmnesia(u32 arg0) {
    if (arg0 == (u32) lbl_80350B98) {
        lbl_80350B98 = 0U;
    }
    if (0 /* draft: did not compile */) {
        lbl_80350B9C = 0;
    }
    M2C_FIELD(M2C_FIELD(&lbl_802A8280, void **, 0x14), M2C_UNK (**)(void *), 0x38)(M2C_FIELD(&lbl_802A8280, void **, 0x14));
}

void MObjInfoInit(void) {
    hsdInitClassInfo(&lbl_802A8280, &lbl_802AA3D0, &lbl_802A8280 + 0x4A8, &lbl_802A8280 + 0x4C0, 0x4C, 0xAC);
    M2C_FIELD(&lbl_802A8280, M2C_UNK (**)(), 0x2C) = TObjInit;
    /* draft: did not compile: M2C_FIELD(&lbl_802A8280, M2C_UNK (**)(), 0x30) = TObjRelease; */
    /* draft: did not compile: M2C_FIELD(&lbl_802A8280, M2C_UNK (**)(), 0x38) = CObjAmnesia; */
    M2C_FIELD(&lbl_802A8280, M2C_UNK **, 0x40) = &TObjLoad;
    M2C_FIELD(&lbl_802A8280, M2C_UNK **, 0x44) = &TObjMakeTExp;
    M2C_FIELD(&lbl_802A8280, M2C_UNK **, 0x3C) = &MakeTextureMtx;
    M2C_FIELD(&lbl_802A8280, M2C_UNK **, 0x48) = &fn_800E6BC4;
}

void fn_800E9B28(s32 arg0, M2C_UNK arg_sp0) {
    s32 sp8;
    M2C_UNK *temp_r3_6;
    M2C_UNK *temp_r3_7;
    M2C_UNK *temp_r4;
    s32 temp_r25;
    s32 var_r24;
    s32 var_r26;
    s32 var_r27;
    u32 var_r28;
    u32 var_r29;
    u8 var_r5;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r4_2;

    var_r29 = arg0 & 3;
    var_r27 = 0;
    var_r26 = 0;
    if (var_r29 == 0) {
        var_r29 = 1;
    }
    var_r28 = arg0 & 0x6000;
    if (var_r28 == 0) {
        var_r28 = var_r29 << 0xD;
    }
    if (arg0 & 8) {
        M2C_FIELD(&lbl_802A8750, s32 *, 0x20) = fn_800EEF5C();
        HSD_SetupChannel(&lbl_802A8750, &lbl_802A8750);
        var_r27 = 1;
        temp_r25 = fn_800EEF64();
        var_r24 = 0;
loop_9:
        if (var_r24 < temp_r25) {
            temp_r3 = HSD_LObjGetActiveByIndex(var_r24);
            if (temp_r3 != NULL) {
                sp8 = M2C_FIELD(temp_r3, s32 *, 0x10);
                HSD_LObjSetup(&sp8, M2C_FIELD(&lbl_8031D198, f32 *, 0x10));
            }
            var_r24 += 1;
            goto loop_9;
        }
    }
    if (arg0 & 4) {
        temp_r3_2 = HSD_LObjGetActiveByID(0x100);
        if ((temp_r3_2 != NULL) && (M2C_FIELD(temp_r3_2, u16 *, 8) & 4)) {
            /* draft: did not compile: HSD_MulColor(&lbl_8031D198, temp_r3_2 + 0x10, &lbl_802A8750 + 0x30 + 0xC); */
        } else {
            M2C_FIELD((&lbl_802A8750 + 0x30), s32 *, 0xC) = (s32) lbl_803500A8;
        }
        temp_r3_3 = &lbl_802A8750 + 0x30;
        M2C_FIELD(temp_r3_3, s32 *, 0x1C) = (s32) ((var_r29 >> 1U) & 1);
        temp_r4 = &lbl_802A8750 + 0x30;
        M2C_FIELD(temp_r4, s32 *, 0x20) = HSD_LObjGetLightMaskDiffuse(temp_r3_3);
        HSD_SetupChannel(temp_r4, temp_r4);
        if (var_r28 & 0x4000) {
            M2C_FIELD((&lbl_802A8750 + 0x60), s32 *, 4) = 3;
            var_r26 = 1;
            HSD_SetupChannel((long *)(&lbl_802A8750 + 0x90), (long *)(0));
        } else {
            M2C_FIELD((&lbl_802A8750 + 0x60), s32 *, 4) = 2;
        }
        temp_r4_2 = &lbl_802A8750 + 0x60;
        M2C_FIELD(temp_r4_2, s32 *, 0x20) = fn_800EEF54();
        if ((temp_r3_2 != NULL) && (M2C_FIELD(temp_r3_2, u16 *, 8) & 0x10)) {
            var_r5 = M2C_FIELD(temp_r3_2, u8 *, 0x13);
        } else {
            var_r5 = 0;
        }
        if ((s32) M2C_FIELD(temp_r4_2, s32 *, 0x20) != 0) {
            temp_r3_4 = &lbl_802A8750 + 0x60;
            M2C_FIELD(temp_r3_4, s8 *, 0x14) = 1;
            M2C_FIELD(temp_r3_4, s8 *, 0x13) = 0xFF;
            M2C_FIELD(temp_r3_4, u8 *, 0xF) = var_r5;
        } else {
            temp_r3_5 = &lbl_802A8750 + 0x60;
            M2C_FIELD(temp_r3_5, s8 *, 0x14) = 0;
            M2C_FIELD(temp_r3_5, u8 *, 0x13) = var_r5;
        }
        HSD_SetupChannel((long *)(&lbl_802A8750 + 0x60), (long *)(0));
    } else {
        temp_r3_6 = &lbl_802A8750 + 0xC0;
        M2C_FIELD(temp_r3_6, s32 *, 0x1C) = (s32) ((var_r29 >> 1U) & 1);
        HSD_SetupChannel((long *)(temp_r3_6), (long *)(0));
        temp_r3_7 = &lbl_802A8750 + 0xF0;
        M2C_FIELD(temp_r3_7, s32 *, 0x1C) = (s32) ((var_r28 >> 0xEU) & 1);
        HSD_SetupChannel((long *)(temp_r3_7), (long *)(0));
    }
    if (var_r27 != 0) {
        if (var_r26 == 0) {
            HSD_DisableChannelLighting(3);
        }
        HSD_StateSetNumChans(2);
        return;
    }
    if (var_r26 != 0) {
        HSD_DisableChannelLighting(1);
        HSD_StateSetNumChans(2);
        return;
    }
    HSD_DisableChannelLighting(5);
    HSD_StateSetNumChans(1);
}

void HSD_SetupRenderModeWithCustomPE(u32 arg0, void *arg1) { } /* draft: stub */

void HSD_SetupRenderMode(u32 arg0) {
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    M2C_UNK sp8;
    M2C_UNK var_r4;

    if ((u16)fn_800EAB9C() == 0) {
        spC = 0;
        sp10 = HSD_StateAssignTev();
        sp14 = 0xFF;
        sp18 = 0xFF;
        sp1C = 4;
        sp20 = 4;
        HSD_SetupTevStage(&sp8, 0xFF);
    }
    var_r4 = 3;
    HSD_StateSetColorUpdate(1);
    HSD_StateSetAlphaUpdate(0);
    fn_800EA408(0, 0);
    fn_800EA198((arg0 >> 0x1EU) & 1, 4, 5, 0xF);
    if (arg0 & 0x08000000) {
        var_r4 = 7;
    }
    HSD_StateSetZMode(1, var_r4, (u8) (((arg0 >> 0x1DU) & 1) ^ 1));
    if (((u32) (arg0 & 0x20000000) == 0) && ((u32) (arg0 & 0x40000000) != 0)) {
        fn_800EA474(0);
        fn_800EA2C8((long)(4), (unsigned char)(0), (long)(0), (long)(4), (unsigned char)(0), (long)(0));
    } else {
        fn_800EA474(1);
        fn_800EA2C8((long)(7), (unsigned char)(0), (long)(0), (long)(7), (unsigned char)(0), (long)(0));
    }
    fn_800EA4BC(0);
    HSD_SetTevRegAll();
    fn_800EABD0();
    fn_800EAB60();
    fn_800E9B28((long)(arg0), (long)(0));
}

void HSD_SetMaterialColor(s32 *arg0, s32 *arg1, s32 *arg2, f32 farg0) {
    f32 var_f2;

    var_f2 = lbl_80351E40;
    M2C_FIELD(&lbl_8031D198, s32 *, 0) = (s32) *arg0;
    M2C_FIELD(&lbl_8031D198, s32 *, 4) = (s32) *arg1;
    M2C_FIELD(&lbl_8031D198, s32 *, 8) = (s32) *arg2;
    M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
    if (farg0 == var_f2) {

    } else {
        var_f2 = lbl_80351E44;
        M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
        if (farg0 == var_f2) {

        } else {
            var_f2 = farg0;
        }
    }
    M2C_FIELD(&lbl_8031D198, s8 *, 0xC) = (s8) (lbl_80351E48 * var_f2);
}

void HSD_SetMaterialShininess(f32 farg0) {
    M2C_FIELD(&lbl_8031D198, f32 *, 0x10) = farg0;
}

void fn_800EA0F8(u8 arg0, s32 arg1) {
    if (((u8) lbl_80350BE0 != arg0) || ((s32) lbl_80350BDC != arg1)) {
        fn_800E1C30(arg0, arg1);
        lbl_80350BE0 = arg0;
        lbl_80350BDC = arg1;
    }
}

void HSD_StateSetCullMode(s32 arg0) {
    if ((s32) lbl_80350BD4 != arg0) {
        fn_800E1D1C();
        lbl_80350BD4 = arg0;
    }
}

void fn_800EA198(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (((s32) lbl_80350BD0 != arg0) || ((s32) lbl_80350BCC != arg1) || ((s32) lbl_80350BC8 != arg2) || ((s32) lbl_80350BC4 != arg3)) {
        GXSetBlendMode(arg0, arg1, arg2, arg3);
        lbl_80350BD0 = arg0;
        lbl_80350BCC = arg1;
        lbl_80350BC8 = arg2;
        lbl_80350BC4 = arg3;
    }
}

void HSD_StateSetZMode(s32 arg0, s32 arg1, s32 arg2) {
    u32 temp_r30;
    u8 temp_r31;

    temp_r31 = arg0 != 0;
    temp_r30 = arg2 != 0;
    if (((u8) lbl_80350BC0 != temp_r31) || ((s32) lbl_80350BBC != arg1) || ((u8) lbl_80350BB8 != temp_r30)) {
        GXSetZMode((s32)temp_r31, arg1, temp_r30);
        lbl_80350BC0 = temp_r31;
        lbl_80350BBC = arg1;
        lbl_80350BB8 = temp_r30;
    }
}

void fn_800EA2C8(s32 arg0, u8 arg1, s32 arg2, s32 arg3, u8 arg4, M2C_UNK arg_sp0) {
    if (((s32) lbl_80350BB4 != arg0) || ((u8) lbl_80350BB0 != arg1) || ((s32) lbl_80350BAC != arg2) || ((s32) lbl_80350BA8 != arg3) || ((u8) lbl_80350BA6 != arg4)) {
        fn_800E48A0(arg0, arg1, arg2, arg3, arg4);
        lbl_80350BB4 = arg0;
        lbl_80350BB0 = arg1;
        lbl_80350BAC = arg2;
        lbl_80350BA8 = arg3;
        lbl_80350BA6 = arg4;
    }
}

void HSD_StateSetColorUpdate(s32 arg0) {
    u8 temp_r31;

    temp_r31 = arg0 != 0;
    if ((u8) lbl_80350BA5 != temp_r31) {
        GXSetColorUpdate(temp_r31);
        lbl_80350BA5 = temp_r31;
    }
}

void HSD_StateSetAlphaUpdate(s32 arg0) {
    u8 temp_r31;

    temp_r31 = arg0 != 0;
    if ((u8) lbl_80350BA4 != temp_r31) {
        GXSetAlphaUpdate(temp_r31);
        lbl_80350BA4 = temp_r31;
    }
}

void fn_800EA408(s32 arg0, u8 arg1) {
    u32 temp_r31;

    temp_r31 = arg0 != 0;
    if (((u8) lbl_80350BA3 != temp_r31) || ((u8) lbl_80350BA2 != arg1)) {
        GXSetDstAlpha(temp_r31, arg1);
        lbl_80350BA3 = temp_r31;
        lbl_80350BA2 = arg1;
    }
}

void fn_800EA474(s32 arg0) {
    u8 temp_r31;

    temp_r31 = arg0 != 0;
    if ((u8) lbl_80350BA1 != temp_r31) {
        fn_800E5144(temp_r31);
        lbl_80350BA1 = temp_r31;
    }
}

void fn_800EA4BC(s32 arg0) {
    u8 temp_r31;

    temp_r31 = arg0 != 0;
    if ((u8) lbl_80350BA0 != temp_r31) {
        GXSetDither(temp_r31);
        lbl_80350BA0 = temp_r31;
    }
}

void fn_800EA504(void) {
    lbl_80350BD8 = 0;
    lbl_80350BD4 = -1;
    lbl_80350BE0 = 0xFF;
}

void fn_800EA520(void) {
    HSD_ClearVtxDesc_800F673C();
}

void _HSD_StateInvalidateRenderMode(void) {
    lbl_80350BD0 = -1;
    lbl_80350BCC = -1;
    lbl_80350BC8 = -1;
    lbl_80350BC4 = -1;
    lbl_80350BC0 = 0xFF;
    lbl_80350BBC = -1;
    lbl_80350BB8 = 0xFF;
    lbl_80350BB4 = -1;
    lbl_80350BB0 = 0;
    lbl_80350BAC = -1;
    lbl_80350BA8 = -1;
    lbl_80350BA6 = 0;
    lbl_80350BA5 = 0xFF;
    lbl_80350BA4 = 0xFF;
    lbl_80350BA3 = 0xFF;
    lbl_80350BA2 = 0;
    lbl_80350BA1 = 0xFF;
    lbl_80350BA0 = 0xFF;
}

void HSD_StateInvalidate(s32 arg0) {
    M2C_UNK *var_r31;
    s32 temp_r0;

    var_r31 = &lbl_802A8870;
loop_4:
    temp_r0 = M2C_FIELD(var_r31, s32 *, 0);
    if (temp_r0 != 0) {
        if (arg0 & temp_r0) {
            M2C_FIELD(var_r31, M2C_UNK (**)(), 4)();
        }
        var_r31 += 8;
        goto loop_4;
    }
}
