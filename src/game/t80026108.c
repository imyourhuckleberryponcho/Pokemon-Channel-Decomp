/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK GXSetVtxDesc(M2C_UNK, M2C_UNK);
M2C_UNK fn_800E0804();
M2C_UNK fn_800E0FA8();
M2C_UNK GXSetTexCoordGen2(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E1314(M2C_UNK);
M2C_UNK GXBegin(s32, s32, u16);
M2C_UNK GXInitTexObj(M2C_UNK *, s32, u16, u16, s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXLoadTexObj();
M2C_UNK GXSetTevOp(M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevColorIn(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevAlphaIn(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevColorOp(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevAlphaOp(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevOrder(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E4B50(M2C_UNK);
M2C_UNK GXSetBlendMode(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetZMode(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXLoadTexMtxImm();
M2C_UNK HSD_TObjSetupTextureCoordGen(void *);
s32 fn_80151770(u32, M2C_UNK);
extern f32 lbl_803515CC;
M2C_UNK fn_800E48A0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK PSMTXMultVec(f32 *, f32 *, void *);
M2C_UNK GXSetVtxAttrFmt(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetChanAmbColor(M2C_UNK, s32 *);
M2C_UNK GXSetChanMatColor(M2C_UNK, s32 *);
M2C_UNK fn_800E2CA4(M2C_UNK);
M2C_UNK GXSetChanCtrl(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_8002554C();
M2C_UNK fn_80026024();
extern M2C_UNK lbl_802220B8;
extern M2C_UNK lbl_8034E7B8;
extern M2C_UNK lbl_8034E7BC;
extern M2C_UNK lbl_8034E7C0;
M2C_UNK fn_80005888(void *);
M2C_UNK OSFreeToHeap(s32, s32);
extern s32 lbl_8034FE78;
M2C_UNK HSD_JObjSetCurrent(s32);
M2C_UNK HSD_JObjSetupMatrixSub(void *);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_8034E7C4;
extern M2C_UNK lbl_8034E7CC;
s32 get_up_vector_for_viewing_mtx(M2C_UNK);
extern M2C_UNK lbl_80221B10;
extern M2C_UNK lbl_802220F4;
extern M2C_UNK lbl_80223D70;
M2C_UNK fn_80079FFC(void *, M2C_UNK);
M2C_UNK fn_8007F14C(s32, M2C_UNK);
M2C_UNK GXInvalidateTexAll();
M2C_UNK GXSetTevColorS10(M2C_UNK, s32 *, s32);
M2C_UNK fn_800E4668(M2C_UNK, s32 *);
M2C_UNK GXSetTevKColorSel(M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevKAlphaSel(M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevSwapMode(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_800E4808(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 lbl_803515E8;
extern s32 lbl_803515EC;
extern s32 lbl_803515F0;
extern s32 lbl_803515F4;
extern s32 lbl_803515F8;
extern s32 lbl_803515FC;
extern f32 lbl_80351600;
s32 fn_80038264(s32);
M2C_UNK GXGetTexBufferSize(u16, u16, u32, M2C_UNK, M2C_UNK);
M2C_UNK DCInvalidateRange(s32, s32);
M2C_UNK DCStoreRange(s32, s32);
M2C_UNK PSMTXIdentity(M2C_UNK *);
M2C_UNK C_MTXOrtho(M2C_UNK *, f32, f32, f32, f32, f32, f32);
M2C_UNK GXInitTexObjLOD(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32, f32);
M2C_UNK GXSetProjection(M2C_UNK *, M2C_UNK);
M2C_UNK GXLoadPosMtxImm(M2C_UNK *, M2C_UNK);
M2C_UNK GXSetCurrentMtx(M2C_UNK);
M2C_UNK fn_800E5858(f32, f32, f32, f32, f32, f32);
M2C_UNK fn_800E58B4(s32, s32, s32, s32);
extern M2C_UNK lbl_8034E800;
extern M2C_UNK lbl_8034E820;
extern f32 lbl_80351604;
extern f32 lbl_80351608;
M2C_UNK method_requestMotionUrgently(void *, s32, f32);
extern f32 lbl_80351618;
s32 OSGetTick(M2C_UNK, M2C_UNK);
M2C_UNK fn_80005868(M2C_UNK);
M2C_UNK fn_8002F4B4();
M2C_UNK fn_8002F664();
M2C_UNK fn_8002F854();
extern M2C_UNK fn_800280F8;
M2C_UNK fn_800A1720(s32, M2C_UNK);

void fn_80026108(void *arg0, void *arg1, void *arg2, s32 arg3);
void fn_800268A0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
void fn_80026E30(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 *arg5, s32 *arg6, M2C_UNK arg_sp0, void *arg_sp8);
void *fn_80026FA8(void *arg0, void *arg1, u16 arg2, u16 arg3, u16 arg4, f32 farg0);
void *fn_800270E0(void *arg0, s16 arg1);
void fn_80027144(void **arg0, s32 arg1, s32 arg2);
s32 fn_80027224(void);
void fn_8002725C(void *arg0);
void *fn_800272D8(void *arg0, s16 arg1);
s32 fn_80027348(void);
u32 fn_80027350(void *arg0, u32 arg1);
void fn_80027388(void);
s32 fn_8002738C(void);
void fn_80027394(void);
s32 fn_80027398(void *arg0);
void fn_800273A0(void);
void fn_8002740C(void);
void fn_800277AC(void);
void fn_80027828(void *arg0);
void *fn_8002786C(void *arg0, s32 arg1);
void fn_800278E0(void *arg0, u16 arg1, u16 arg2, u32 arg3);
void fn_8002793C(void *arg0);
void fn_800279B8(void *arg0);
void fn_80027A34(void *arg0);
void fn_80027A58(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
u16 fn_80027DBC(void *arg0, s32 arg1, s32 arg2);
void fn_80027DF4(void *arg0, s32 arg1, s32 arg2, s16 arg3);
void fn_80027E2C(void *arg0, void *arg1, M2C_UNK arg_sp0);
void fn_80027ED0(void *arg0, s32 arg1);
void fn_80027F30(void *arg0);
void *fn_80027F54(void *arg0);
void *fn_80028080(void *arg0, s16 arg1);

void fn_80026108(void *arg0, void *arg1, void *arg2, s32 arg3) { } /* draft: stub */

void fn_800268A0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80026E30(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 *arg5, s32 *arg6, M2C_UNK arg_sp0, void *arg_sp8) {
    f32 sp18;
    f32 sp14;
    f32 sp10;
    s32 spC;
    s32 sp8;

    sp10 = M2C_FIELD(arg_sp8, f32 *, 0);
    sp14 = M2C_FIELD(arg_sp8, f32 *, 4);
    sp18 = M2C_FIELD(arg_sp8, f32 *, 8);
    PSMTXMultVec(&sp10, &sp10, arg_sp8);
    GXSetVtxAttrFmt(0, 9, 1, 4, 0);
    GXSetVtxAttrFmt(0, 0xA, 0, 4, 0);
    GXSetVtxAttrFmt(0, 0xD, 1, 4, 0);
    GXSetVtxAttrFmt(0, 0xE, 1, 4, 0);
    GXSetVtxAttrFmt(0, 0xF, 1, 4, 0);
    fn_800E1314(2);
    fn_800E2CA4(1);
    GXSetChanCtrl(0, 1, 0, 0, 1, 2, 2);
    GXSetChanCtrl(2, 0, 0, 0, 1, 0, 2);
    spC = *arg5;
    GXSetChanAmbColor(4, &spC);
    sp8 = *arg6;
    GXSetChanMatColor(4, &sp8);
    /* draft: did not compile: fn_800268A0(arg1, arg0, arg2, arg3, arg4); */
}

void *fn_80026FA8(void *arg0, void *arg1, u16 arg2, u16 arg3, u16 arg4, f32 farg0) {
    s32 spC;
    void *sp8;
    void *temp_r4;
    void *temp_r5;
    void *temp_r5_2;

    M2C_FIELD(arg0, u8 *, 0x1C) = (u8) M2C_FIELD(&lbl_8034E7B8, u8 *, 0);
    M2C_FIELD(arg0, void **, 0) = arg1;
    M2C_FIELD(arg0, u8 *, 0x1D) = (u8) M2C_FIELD(&lbl_8034E7B8, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 0x1E) = (u8) M2C_FIELD(&lbl_8034E7B8, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 0x1F) = (u8) M2C_FIELD(&lbl_8034E7B8, u8 *, 3);
    M2C_FIELD(arg0, u8 *, 0x20) = (u8) M2C_FIELD(&lbl_8034E7BC, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(&lbl_8034E7BC, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 0x22) = (u8) M2C_FIELD(&lbl_8034E7BC, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 0x23) = (u8) M2C_FIELD(&lbl_8034E7BC, u8 *, 3);
    M2C_FIELD(arg0, u8 *, 0x24) = (u8) M2C_FIELD(&lbl_8034E7C0, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 0x25) = (u8) M2C_FIELD(&lbl_8034E7C0, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 0x26) = (u8) M2C_FIELD(&lbl_8034E7C0, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 0x27) = (u8) M2C_FIELD(&lbl_8034E7C0, u8 *, 3);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(&lbl_802220B8, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(&lbl_802220B8, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(&lbl_802220B8, f32 *, 8);
    /* draft: did not compile: fn_8002554C(arg0 + 4, arg2, arg3, arg4, &lbl_802220B8, &lbl_8034E7C0, &lbl_8034E7BC); */
    temp_r4 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x10), void **, 8);
    temp_r5 = M2C_FIELD(temp_r4, void **, 0x18);
    sp8 = temp_r5;
    spC = M2C_FIELD(M2C_FIELD(temp_r4, void **, 0x10), s32 *, 0x18);
    temp_r5_2 = M2C_FIELD(M2C_FIELD(temp_r5, void **, 0xC), void **, 8);
    /* draft: did not compile: fn_80026024(arg0 + 0x14, M2C_FIELD(temp_r5_2, s32 *, 0x2C), M2C_FIELD(temp_r5_2, s32 *, 0x44), &sp8, 2, arg2, farg0); */
    return arg0;
}

void *fn_800270E0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        OSFreeToHeap(lbl_8034FE78, M2C_FIELD(arg0, s32 *, 0xC));
        OSFreeToHeap(lbl_8034FE78, M2C_FIELD(arg0, s32 *, 0x18));
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_80027144(void **arg0, s32 arg1, s32 arg2) { } /* draft: stub */

s32 fn_80027224(void) {
    s32 var_r0;

    var_r0 = get_up_vector_for_viewing_mtx(0x60);
    if (var_r0 != 0) {
        /* draft: did not compile: var_r0 = fn_8002725C((void *)(0)); */
    }
    return var_r0;
}

void fn_8002725C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80221B10;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0x200000;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80223D70;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0xB0000;
    M2C_FIELD(arg0, s32 *, 0x28) = 5;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 2);
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_802220F4;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 0x10000);
    M2C_FIELD(arg0, s32 *, 0x28) = 1;
}

void *fn_800272D8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_802220F4;
        fn_8007F14C(M2C_FIELD(arg0, s32 *, 0x5C), 1);
        fn_80079FFC(arg0, 0);
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

s32 fn_80027348(void) {
    return 0x19D;
}

u32 fn_80027350(void *arg0, u32 arg1) {
    u32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u32 *, 0x5C);
    M2C_FIELD(arg0, u32 *, 0x5C) = arg1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 0x1000);
    } else {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFEFFF);
    }
    return temp_r5;
}

void fn_80027388(void) {

}

s32 fn_8002738C(void) {
    return 0;
}

void fn_80027394(void) {

}

s32 fn_80027398(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x5C);
}

void fn_800273A0(void) {
    GXSetTexCoordGen2(0, 1, 4, 0x3C, 0, 0x7D);
    GXInvalidateTexAll();
    GXSetTevOrder(0, 0, 0, 0xFF);
    GXSetTevOp(0, 3);
    fn_800E1314(1);
    fn_800E4B50(1);
}

void fn_8002740C(void) {
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;

    GXSetTexCoordGen2(0, 1, 4, 0x3C, 0, 0x7D);
    GXSetTexCoordGen2(1, 1, 4, 0x3C, 0, 0x7D);
    GXInvalidateTexAll();
    GXSetTevOrder(0, 0, 0, 0xFF);
    GXSetTevColorIn(0, 0xF, 8, 0xE, 2);
    GXSetTevColorOp(0, 0, 0, 0, 0, 0);
    GXSetTevAlphaIn(0, 7, 4, 6, 1);
    GXSetTevAlphaOp(0, 1, 0, 0, 0, 0);
    GXSetTevKColorSel(0, 0xC);
    GXSetTevKAlphaSel(0, 0x1C);
    GXSetTevSwapMode(0, 0, 1);
    GXSetTevOrder(1, 1, 1, 0xFF);
    GXSetTevColorIn(1, 0xF, 8, 0xE, 0);
    GXSetTevColorOp(1, 0, 0, 1, 0, 0);
    GXSetTevAlphaIn(1, 7, 4, 6, 0);
    GXSetTevAlphaOp(1, 0, 0, 1, 0, 0);
    GXSetTevKColorSel(1, 0xD);
    GXSetTevKAlphaSel(1, 0x1D);
    GXSetTevSwapMode(1, 0, 0);
    GXSetTevOrder(2, 0, 0, 0xFF);
    GXSetTevColorIn(2, 0xF, 8, 0xE, 0);
    GXSetTevColorOp(2, 0, 0, 0, 1, 0);
    GXSetTevAlphaIn(2, 7, 4, 6, 0);
    GXSetTevAlphaOp(2, 1, 0, 0, 1, 0);
    GXSetTevKColorSel(2, 0xE);
    GXSetTevKAlphaSel(2, 0x1E);
    GXSetTevSwapMode(2, 0, 2);
    GXSetTevOrder(3, 0xFF, 0xFF, 0xFF);
    GXSetTevColorIn(3, 0, 1, 0xE, 0xF);
    GXSetTevColorOp(3, 0, 0, 0, 1, 0);
    GXSetTevAlphaIn(3, 7, 7, 7, 7);
    GXSetTevAlphaOp(3, 0, 0, 0, 1, 0);
    GXSetTevSwapMode(3, 0, 0);
    GXSetTevKColorSel(3, 0xF);
    sp18 = lbl_803515E8;
    sp1C = lbl_803515EC;
    sp14 = lbl_803515F0;
    GXSetTevColorS10(1, &sp18, lbl_803515E8);
    fn_800E4668(0, &sp14);
    sp10 = lbl_803515F4;
    fn_800E4668(1, &sp10);
    spC = lbl_803515F8;
    fn_800E4668(2, &spC);
    sp8 = lbl_803515FC;
    fn_800E4668(3, &sp8);
    fn_800E4808(0, 0, 1, 2, 3);
    fn_800E4808(1, 0, 3, 3, 3);
    fn_800E4808(2, 0, 0, 3, 0);
    fn_800E1314(2);
    fn_800E4B50(4);
}

void fn_800277AC(void) {
    fn_800E4808(0, 0, 1, 2, 3);
    fn_800E4808(1, 0, 0, 0, 3);
    fn_800E4808(2, 1, 1, 1, 3);
    fn_800E4808(3, 2, 2, 2, 3);
}

void fn_80027828(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s16 *, 0x3A) = 0;
    M2C_FIELD(arg0, s16 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s16 *, 0x3E) = 0;
    M2C_FIELD(arg0, s16 *, 0x3C) = 0;
    M2C_FIELD(arg0, s8 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_80351600;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_80351600;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_80351600;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_80351600;
}

void *fn_8002786C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x34) = arg1;
    M2C_FIELD(arg0, s32 *, 0x30) = fn_80038264(M2C_FIELD(arg0, s32 *, 0x34));
    M2C_FIELD(arg0, s16 *, 0x3C) = 0;
    M2C_FIELD(arg0, s16 *, 0x38) = 0;
    M2C_FIELD(arg0, s16 *, 0x3E) = 0;
    M2C_FIELD(arg0, s16 *, 0x3A) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s8 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_80351600;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_80351600;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_80351600;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_80351600;
    return arg0;
}

void fn_800278E0(void *arg0, u16 arg1, u16 arg2, u32 arg3) {
    M2C_FIELD(arg0, u32 *, 0x40) = arg3;
    M2C_FIELD(arg0, u8 *, 0x44) = (u8) ((arg3 >> 7U) & 1);
    M2C_FIELD(arg0, u16 *, 0x38) = arg1;
    M2C_FIELD(arg0, u16 *, 0x3A) = arg2;
    if ((u8) M2C_FIELD(arg0, u8 *, 0x44) == 0) {
        GXGetTexBufferSize(arg1, arg2, arg3, 0, 0);
    }
}

void fn_8002793C(void *arg0) {
    s32 var_r3;
    u32 temp_r3;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x44) != 0) {
        temp_r3 = M2C_FIELD(arg0, u16 *, 0x38) * M2C_FIELD(arg0, u16 *, 0x3A) * 3;
        var_r3 = (s32) ((temp_r3 >> 0x1FU) + temp_r3) >> 1;
    } else {
        var_r3 = GXGetTexBufferSize(M2C_FIELD(arg0, u16 *, 0x38), M2C_FIELD(arg0, u16 *, 0x3A), M2C_FIELD(arg0, s32 *, 0x40), 0, 0);
    }
    DCInvalidateRange(M2C_FIELD(arg0, s32 *, 0x30), (var_r3 + 0x1F) & 0xFFFFFFE0);
}

void fn_800279B8(void *arg0) {
    s32 var_r3;
    u32 temp_r3;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x44) != 0) {
        temp_r3 = M2C_FIELD(arg0, u16 *, 0x38) * M2C_FIELD(arg0, u16 *, 0x3A) * 3;
        var_r3 = (s32) ((temp_r3 >> 0x1FU) + temp_r3) >> 1;
    } else {
        var_r3 = GXGetTexBufferSize(M2C_FIELD(arg0, u16 *, 0x38), M2C_FIELD(arg0, u16 *, 0x3A), M2C_FIELD(arg0, s32 *, 0x40), 0, 0);
    }
    DCStoreRange(M2C_FIELD(arg0, s32 *, 0x30), (var_r3 + 0x1F) & 0xFFFFFFE0);
}

void fn_80027A34(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, u16 *, 4) = (u16) M2C_FIELD(arg0, u16 *, 0x38);
    M2C_FIELD(arg0, u16 *, 6) = (u16) M2C_FIELD(arg0, u16 *, 0x3A);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x40);
}

#pragma push
#pragma dont_inline on
void fn_80027A58(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) {
    M2C_UNK sp98;
    M2C_UNK sp68;
    M2C_UNK sp48;
    M2C_UNK sp28;
    M2C_UNK sp8;
    s32 temp_r30;
    s32 temp_r29;
    u16 temp_r0;
    u16 temp_r5;

    C_MTXOrtho(&sp98, lbl_80351604, lbl_80351608, lbl_80351608, lbl_80351604, lbl_80351608, lbl_80351604);
    GXSetProjection(&sp98, 1);
    PSMTXIdentity(&sp68);
    GXLoadPosMtxImm(&sp68, 0);
    GXSetCurrentMtx(0);
    temp_r29 = arg3 - arg1;
    temp_r30 = arg4 - arg2;
    fn_800E5858((f32) arg1, (f32) arg2, (f32) temp_r29, (f32) temp_r30, lbl_80351600, lbl_80351604);
    fn_800E58B4(arg1, arg2, temp_r29, temp_r30);
    fn_800E2CA4(0);
    GXSetChanCtrl(4, 0, 0, 0, 0, 0, 2);
    GXSetChanCtrl(5, 0, 0, 0, 0, 0, 2);
    GXSetZMode(0, 7, 0);
    GXSetBlendMode(1, 1, 0, 0);
    if ((s8) M2C_FIELD(arg0, s8 *, 0x44) != 0) {
        fn_8002740C();
        GXInitTexObj(&sp48, M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, u16 *, 0x38), M2C_FIELD(arg0, u16 *, 0x3A), 1, 0, 0, 0);
        GXInitTexObjLOD(&sp48, 0, 1, 0, 0, 0, lbl_80351600, lbl_80351600, lbl_80351600);
        GXLoadTexObj(&sp48, 1);
        temp_r0 = M2C_FIELD(arg0, u16 *, 0x3A);
        temp_r5 = M2C_FIELD(arg0, u16 *, 0x38);
        GXInitTexObj(&sp28, M2C_FIELD(arg0, s32 *, 0x30) + (temp_r5 * temp_r0), (temp_r5 >> 1U) & 0x7FFF, (temp_r0 >> 1U) & 0x7FFF, 3, 0, 0, 0);
        GXInitTexObjLOD(&sp28, 0, 1, 0, 0, 0, lbl_80351600, lbl_80351600, lbl_80351600);
        GXLoadTexObj(&sp28, 0);
    } else {
        fn_800273A0();
        GXInitTexObj(&sp8, M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, u16 *, 0x38), M2C_FIELD(arg0, u16 *, 0x3A), 4, 0, 0, 0);
        GXInitTexObjLOD(&sp8, 0, 1, 0, 0, 0, lbl_80351600, lbl_80351600, lbl_80351600);
        GXLoadTexObj(&sp8, 0);
    }
    fn_800E0804();
    GXSetVtxDesc(9, 2);
    GXSetVtxDesc(0xD, 2);
    fn_800E0FA8(9, &lbl_8034E800, 2);
    fn_800E0FA8(0xD, &lbl_8034E820, 2);
    GXSetVtxAttrFmt(0, 9, 0, 1, 0);
    GXSetVtxAttrFmt(0, 0xD, 1, 0, 0);
    GXBegin(0x80, 0, 4);
    *(s8 *)0xCC008000 = 0;
    *(s8 *)0xCC008000 = 0;
    *(s8 *)0xCC008000 = 1;
    *(s8 *)0xCC008000 = 1;
    *(s8 *)0xCC008000 = 2;
    *(s8 *)0xCC008000 = 2;
    *(s8 *)0xCC008000 = 3;
    *(s8 *)0xCC008000 = 3;
    if ((s8) M2C_FIELD(arg0, s8 *, 0x44) != 0) {
        fn_800277AC();
    }
}
#pragma pop

u16 fn_80027DBC(void *arg0, s32 arg1, s32 arg2) { return 0; } /* draft: stub */

void fn_80027DF4(void *arg0, s32 arg1, s32 arg2, s16 arg3) { } /* draft: stub */

void fn_80027E2C(void *arg0, void *arg1, M2C_UNK arg_sp0) {
    s32 var_r25;
    s32 var_r26;
    u16 temp_r27;
    u16 temp_r28;
    u16 temp_r29;
    u16 temp_r30;

    temp_r30 = M2C_FIELD(arg0, u16 *, 0x38);
    var_r26 = 0;
    temp_r29 = M2C_FIELD(arg0, u16 *, 0x3A);
    temp_r28 = M2C_FIELD(arg1, u16 *, 0x38);
    temp_r27 = M2C_FIELD(arg1, u16 *, 0x3A);
loop_5:
    if (var_r26 < (s32) M2C_FIELD(arg1, u16 *, 0x3A)) {
        var_r25 = 0;
loop_3:
        if (var_r25 < (s32) M2C_FIELD(arg1, u16 *, 0x38)) {
            fn_80027DF4(arg1, var_r25, var_r26, fn_80027DBC(arg0, (u32) (var_r25 * temp_r30) / temp_r28, (u32) (var_r26 * temp_r29) / temp_r27));
            var_r25 += 1;
            goto loop_3;
        }
        var_r26 += 1;
        goto loop_5;
    }
}

void fn_80027ED0(void *arg0, s32 arg1) {
    method_requestMotionUrgently(arg0, (arg1 & 0xFFF) | (((M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 (**)(), 0xC)() << 0xC) & 0x07FFF000) | 0x38000000), lbl_80351618);
}

void fn_80027F30(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0;
    M2C_FIELD(arg0, s8 *, 0x1E) = 0;
}

void *fn_80027F54(void *arg0) {
    fn_80005868(0x150);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = fn_8014AF48(&fn_800280F8, fn_80028080, 0x28, 8);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    /* draft: did not compile: fn_80027F30(arg0 + 0x24); */
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    M2C_FIELD(arg0, s8 *, 0x51) = 0;
    M2C_FIELD(arg0, s8 *, 0x52) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    /* draft: did not compile: fn_8002F4B4(arg0 + 0x90); */
    /* draft: did not compile: fn_8002F4B4(arg0 + 0x9C); */
    /* draft: did not compile: fn_8002F4B4(arg0 + 0xA8); */
    /* draft: did not compile: fn_8002F664(arg0 + 0xB8); */
    /* draft: did not compile: fn_8002F854(arg0 + 0xC4); */
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    M2C_FIELD(arg0, s32 *, 0xD8) = 0;
    M2C_FIELD(arg0, s32 *, 0xDC) = 0;
    M2C_FIELD(arg0, s32 *, 0xE0) = 0;
    M2C_FIELD(arg0, s32 *, 0xE4) = 1;
    M2C_FIELD(arg0, s32 *, 0xE8) = 0;
    M2C_FIELD(arg0, s32 *, 0xEC) = -1;
    M2C_FIELD(arg0, s8 *, 0xFC) = 1;
    M2C_FIELD(arg0, s32 *, 0x104) = -1;
    M2C_FIELD(arg0, s8 *, 0x108) = 0;
    M2C_FIELD(arg0, s8 *, 0x10A) = 1;
    M2C_FIELD(arg0, s8 *, 0x10B) = 0;
    M2C_FIELD(arg0, s32 *, 0x10C) = 0;
    M2C_FIELD(arg0, s32 *, 0x110) = 0;
    M2C_FIELD(arg0, s32 *, 0x114) = 0;
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    M2C_FIELD(arg0, s32 *, 0x11C) = 0;
    M2C_FIELD(arg0, s32 *, 0x120) = OSGetTick(1, 0);
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    return arg0;
}

void *fn_80028080(void *arg0, s16 arg1) {
    void *temp_r3;

    if (arg0 != NULL) {
        temp_r3 = M2C_FIELD(arg0, void **, 0);
        if (temp_r3 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
        fn_800A1720(M2C_FIELD(arg0, s32 *, 4), 1);
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}
