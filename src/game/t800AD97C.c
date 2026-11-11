/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 HSD_TExpTev(s32 *);
s32 HSD_TExpCnst(M2C_UNK *, M2C_UNK, M2C_UNK, s32 *);
M2C_UNK HSD_TExpColorOp(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK HSD_TExpAlphaOp(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK HSD_TExpColorIn(s32, M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK);
M2C_UNK HSD_TExpAlphaIn(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK HSD_TExpOrder(void *, M2C_UNK);
M2C_UNK __assert(void *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_8022B688;
extern M2C_UNK lbl_8034FE80;
extern M2C_UNK lbl_8034FE84;
extern M2C_UNK lbl_8034FE88;
extern M2C_UNK lbl_8034FE8C;
extern M2C_UNK lbl_8034FE90;
extern M2C_UNK lbl_8034FE94;
M2C_UNK hsdInitClassInfo(M2C_UNK *, M2C_UNK *, void *, void *, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_8022B778;
extern M2C_UNK lbl_802A8AA0;
extern M2C_UNK lbl_8034FEA0;
extern M2C_UNK lbl_8034FEA4;
extern M2C_UNK lbl_8034FEA8;
extern M2C_UNK lbl_8034FEAC;
extern M2C_UNK lbl_8034FEB0;
extern M2C_UNK lbl_8034FEB4;
extern M2C_UNK lbl_8022B868;
extern M2C_UNK lbl_8034FEC0;
extern M2C_UNK lbl_8034FEC4;
extern M2C_UNK lbl_8034FEC8;
extern M2C_UNK lbl_8034FECC;
extern M2C_UNK lbl_8022B940;
extern M2C_UNK lbl_8034FED8;
extern M2C_UNK lbl_8034FEDC;
extern M2C_UNK lbl_8034FEE0;
extern M2C_UNK lbl_8034FEE4;
extern M2C_UNK lbl_8034FEE8;
extern M2C_UNK lbl_8034FEEC;
extern M2C_UNK lbl_8022BA20;
extern M2C_UNK lbl_8034FEF8;
extern M2C_UNK lbl_8034FEFC;
extern M2C_UNK lbl_8034FF00;
extern M2C_UNK lbl_8034FF04;
M2C_UNK __OSMaskInterrupts(M2C_UNK);
M2C_UNK __OSUnmaskInterrupts(M2C_UNK);
u32 fn_800C66EC(M2C_UNK);
extern M2C_UNK lbl_802CF930;
s32 OSDisableInterrupts(M2C_UNK *, s32);
M2C_UNK OSRestoreInterrupts(s32, s32);
s32 OSGetConsoleType();
u32 fn_800C4074();
M2C_UNK OSGetTime(M2C_UNK);
u64 __div2i(M2C_UNK, s32);
s32 EXIGetID(s32, M2C_UNK, M2C_UNK *);

s32 fn_800AD97C(void *arg1, s32 *arg2, M2C_UNK arg_sp0);
void fn_800ADD38(void);
s32 fn_800ADD94(void *arg1, s32 *arg2, M2C_UNK arg_sp0);
void fn_800AE324(void);
s32 fn_800AE380(void *arg1, s32 *arg2, M2C_UNK arg_sp0);
void fn_800AE718(void);
s32 fn_800AE774(void *arg1, s32 *arg2, M2C_UNK arg_sp0);
void fn_800AEB30(void);
s32 fn_800AEB8C(void *arg1, s32 *arg2, M2C_UNK arg_sp0);
void SetExiInterruptMask(s32 arg0, void *arg1);
s32 EXIImm(s32 arg0, void *arg1, s32 arg2, u32 arg3, u32 arg4);
s32 EXIImmEx(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 EXIDma(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u32 arg4);
s32 EXISync(s32 arg0);
s32 EXIClearInterrupts(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 EXISetExiCallback(s32 arg0, s32 arg1);
s32 __EXIProbe(s32 arg0);
s32 EXIProbe(s32 arg0);

s32 fn_800AD97C(void *arg1, s32 *arg2, M2C_UNK arg_sp0) {
    s32 sp8;
    s32 temp_r24;
    s32 temp_r25;
    s32 temp_r26;
    s32 temp_r26_2;
    s32 temp_r26_3;
    s32 temp_r27;
    s32 temp_r27_2;
    s32 temp_r28;
    s32 temp_r29;

    if (arg2 == NULL) {
        __assert(&lbl_8022B688 + 0x80, 0x3F, &lbl_8034FE94);
    }
    *arg2 = 0;
    if (arg1 == NULL) {
        __assert(&lbl_8022B688 + 0x80, 0x43, &lbl_8022B688 + 0x94);
    }
    if ((u32) M2C_FIELD(arg1, u32 *, 8) != 0U) {
        __assert(&lbl_8022B688 + 0x80, 0x45, &lbl_8022B688 + 0xA0);
    }
    if ((u32) M2C_FIELD(arg1, u32 *, 0x58) == 0U) {
        __assert(&lbl_8022B688 + 0x80, 0x4A, &lbl_8022B688 + 0xB8);
    }
    if (M2C_FIELD(arg1, s32 *, 0x4C) & 0xF) {
        __assert(&lbl_8022B688 + 0x80, 0x4C, &lbl_8022B688 + 0xC8);
    }
    temp_r26_2 = HSD_TExpCnst(&lbl_8034FE88, 1, 0, arg2);
    temp_r25 = HSD_TExpCnst(&lbl_8034FE8C, 1, 0, arg2);
    temp_r24 = HSD_TExpCnst(&lbl_8034FE90, 1, 0, arg2);
    temp_r28 = HSD_TExpCnst(&lbl_8034FE80, 1, 0, arg2);
    HSD_TExpCnst(&lbl_8034FE84, 1, 0, arg2);
    temp_r29 = HSD_TExpCnst(&lbl_8034FE84 + 3, 6, 0, arg2);
    temp_r27 = HSD_TExpTev(arg2);
    HSD_TExpOrder(arg1, 0xFF);
    HSD_TExpColorOp(temp_r27, 0, 0, 3, 1);
    sp8 = 0;
    HSD_TExpColorIn(temp_r27, 7, 0, 4, -1, 1, temp_r26_2, 7);
    HSD_TExpAlphaOp(temp_r27, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r27, 7, 0, 7, 0, 7, 0, 5);
    temp_r26_3 = HSD_TExpTev(arg2);
    HSD_TExpOrder(arg1, 0xFF);
    HSD_TExpColorOp(temp_r26_3, 0, 0, 3, 1);
    sp8 = temp_r27;
    HSD_TExpColorIn(temp_r26_3, 7, 0, 2, -1, 1, temp_r25, 1);
    HSD_TExpAlphaOp(temp_r26_3, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r26_3, 7, 0, 7, 0, 7, 0, 5);
    temp_r27_2 = HSD_TExpTev(arg2);
    HSD_TExpOrder(arg1, 0xFF);
    HSD_TExpColorOp(temp_r27_2, 0, 0, 0, 1);
    sp8 = temp_r26_3;
    HSD_TExpColorIn(temp_r27_2, 7, 0, 3, -1, 1, temp_r24, 1);
    HSD_TExpAlphaOp(temp_r27_2, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r27_2, 7, 0, 7, 0, 7, 0, 5);
    temp_r26 = HSD_TExpTev(arg2);
    HSD_TExpOrder(NULL, 0xFF);
    HSD_TExpColorOp(temp_r26, 0, 2, 0, 1);
    sp8 = temp_r28;
    HSD_TExpColorIn(temp_r26, 1, temp_r27_2, 7, 0, 7, 0, 1);
    HSD_TExpAlphaOp(temp_r26, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r26, 7, 0, 7, 0, 7, 0, 5);
    return temp_r26;
}

#pragma push
#pragma peephole off
void fn_800ADD38(void) {
    hsdInitClassInfo(&lbl_8022B778, &lbl_802A8AA0, &lbl_8022B778 + 0x54, &lbl_8022B778 + 0x70, 0x54, 0x20);
    M2C_FIELD(&lbl_8022B778, M2C_UNK (**)(), 0x44) = fn_800ADD94;
}
#pragma pop

s32 fn_800ADD94(void *arg1, s32 *arg2, M2C_UNK arg_sp0) {
    s32 temp_r30;
    s32 temp_r24;
    s32 temp_r25;
    s32 temp_r26;
    s32 temp_r26_2;
    u8 temp_r26_3;
    s32 temp_r26_4;
    u8 temp_r27;
    u8 temp_r27_2;
    s32 temp_r27_3;
    s32 temp_r28;
    s32 temp_r29;
    s32 sp8;

    if (arg2 == NULL) {
        __assert(&lbl_8022B778 + 0x84, 0x36, &lbl_8034FEB4);
    }
    *arg2 = 0;
    if (arg1 == NULL) {
        __assert(&lbl_8022B778 + 0x84, 0x3A, &lbl_8022B778 + 0x98);
    }
    if ((u32) M2C_FIELD(arg1, u32 *, 8) != 0U) {
        __assert(&lbl_8022B778 + 0x84, 0x3C, &lbl_8022B778 + 0xA4);
    }
    if ((u32) M2C_FIELD(arg1, u32 *, 0x58) == 0U) {
        __assert(&lbl_8022B778 + 0x84, 0x41, &lbl_8022B778 + 0xBC);
    }
    if (M2C_FIELD(arg1, s32 *, 0x4C) & 0xF) {
        __assert(&lbl_8022B778 + 0x84, 0x43, &lbl_8022B778 + 0xCC);
    }
    temp_r25 = HSD_TExpCnst(&lbl_8034FEAC, 1, 0, arg2);
    temp_r24 = HSD_TExpCnst(&lbl_8034FEB0, 1, 0, arg2);
    temp_r28 = HSD_TExpCnst(&lbl_8034FEA0, 1, 0, arg2);
    temp_r26_2 = HSD_TExpCnst(&lbl_8034FEA8, 1, 0, arg2);
    HSD_TExpCnst(&lbl_8034FEA4, 1, 0, arg2);
    temp_r29 = HSD_TExpCnst(&lbl_8034FEA4 + 3, 6, 0, arg2);
    temp_r27 = HSD_TExpTev(arg2);
    HSD_TExpOrder(arg1, 0xFF);
    HSD_TExpColorOp(temp_r27, 0, 0, 3, 1);
    sp8 = 0;
    HSD_TExpColorIn(temp_r27, 7, 0, 4, -1, 1, temp_r26_2, 7);
    HSD_TExpAlphaOp(temp_r27, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r27, 7, 0, 7, 0, 7, 0, 5);
    temp_r26_3 = HSD_TExpTev(arg2);
    HSD_TExpOrder(arg1, 0xFF);
    HSD_TExpColorOp(temp_r26_3, 0, 0, 3, 1);
    sp8 = temp_r27;
    HSD_TExpColorIn(temp_r26_3, 7, 0, 2, -1, 1, temp_r25, 1);
    HSD_TExpAlphaOp(temp_r26_3, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r26_3, 7, 0, 7, 0, 7, 0, 5);
    temp_r27_2 = HSD_TExpTev(arg2);
    HSD_TExpOrder(arg1, 0xFF);
    HSD_TExpColorOp(temp_r27_2, 0, 0, 0, 1);
    sp8 = temp_r26_3;
    HSD_TExpColorIn(temp_r27_2, 7, 0, 3, -1, 1, temp_r24, 1);
    HSD_TExpAlphaOp(temp_r27_2, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r27_2, 7, 0, 7, 0, 7, 0, 5);
    temp_r30 = HSD_TExpTev(arg2);
    HSD_TExpOrder(NULL, 0xFF);
    HSD_TExpColorOp(temp_r30, 1, 0, 0, 1);
    sp8 = 0;
    HSD_TExpColorIn(temp_r30, 1, temp_r27_2, 7, 0, 7, 0, 8);
    HSD_TExpAlphaOp(temp_r30, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r30, 7, 0, 7, 0, 7, 0, 5);
    temp_r26_4 = HSD_TExpTev(arg2);
    HSD_TExpOrder(NULL, 0xFF);
    HSD_TExpColorOp(temp_r26_4, 0, 0, 0, 1);
    sp8 = 0;
    HSD_TExpColorIn(temp_r26_4, 7, 0, 1, temp_r30, 1, temp_r30, 7);
    HSD_TExpAlphaOp(temp_r26_4, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r26_4, 7, 0, 7, 0, 7, 0, 5);
    temp_r27_3 = HSD_TExpTev(arg2);
    HSD_TExpOrder(NULL, 0xFF);
    HSD_TExpColorOp(temp_r27_3, 0, 0, 0, 1);
    sp8 = 0;
    HSD_TExpColorIn(temp_r27_3, 7, 0, 1, temp_r26_4, 1, temp_r26_4, 7);
    HSD_TExpAlphaOp(temp_r27_3, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r27_3, 7, 0, 7, 0, 7, 0, 5);
    temp_r26 = HSD_TExpTev(arg2);
    HSD_TExpOrder(NULL, 0xFF);
    HSD_TExpColorOp(temp_r26, 0, 2, 0, 1);
    sp8 = temp_r28;
    HSD_TExpColorIn(temp_r26, 1, temp_r27_3, 7, 0, 7, 0, 1);
    HSD_TExpAlphaOp(temp_r26, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r26, 7, 0, 7, 0, 7, 0, 5);
    return temp_r26;
}

#pragma push
#pragma peephole off
void fn_800AE324(void) {
    hsdInitClassInfo(&lbl_8022B868, &lbl_802A8AA0, &lbl_8022B868 + 0x54, &lbl_8022B868 + 0x68, 0x54, 0x20);
    M2C_FIELD(&lbl_8022B868, M2C_UNK (**)(), 0x44) = fn_800AE380;
}
#pragma pop

s32 fn_800AE380(void *arg1, s32 *arg2, M2C_UNK arg_sp0) {
    s32 sp8;
    s32 temp_r26;
    s32 temp_r27;
    s8 temp_r30;
    s32 temp_r25;
    s32 temp_r28;
    s32 temp_r29;
    s8 temp_r27_2;

    if (arg2 == NULL) {
        __assert(&lbl_8022B868 + 0x74, 0x36, &lbl_8034FECC);
    }
    *arg2 = 0;
    if (arg1 == NULL) {
        __assert(&lbl_8022B868 + 0x74, 0x3A, &lbl_8022B868 + 0x80);
    }
    if ((u32) M2C_FIELD(arg1, u32 *, 8) != 0U) {
        __assert(&lbl_8022B868 + 0x74, 0x3C, &lbl_8022B868 + 0x8C);
    }
    if ((u32) M2C_FIELD(arg1, u32 *, 0x58) == 0U) {
        __assert(&lbl_8022B868 + 0x74, 0x41, &lbl_8022B868 + 0xA4);
    }
    if (M2C_FIELD(arg1, s32 *, 0x4C) & 0xF) {
        __assert(&lbl_8022B868 + 0x74, 0x43, &lbl_8022B868 + 0xB4);
    }
    temp_r26 = HSD_TExpCnst(&lbl_8034FEC0, 1, 0, arg2);
    temp_r25 = HSD_TExpCnst(&lbl_8034FEC4, 1, 0, arg2);
    HSD_TExpCnst(&lbl_8034FEC8, 1, 0, arg2);
    temp_r29 = HSD_TExpCnst(&lbl_8034FEC8 + 3, 6, 0, arg2);
    temp_r28 = HSD_TExpTev(arg2);
    HSD_TExpOrder(arg1, 0xFF);
    HSD_TExpColorOp(temp_r28, 0, 0, 1, 1);
    sp8 = 0;
    HSD_TExpColorIn(temp_r28, 7, 0, 1, -1, 1, temp_r26, 7);
    HSD_TExpAlphaOp(temp_r28, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r28, 7, 0, 7, 0, 7, 0, 5);
    temp_r27_2 = HSD_TExpTev(arg2);
    HSD_TExpOrder(arg1, 0xFF);
    HSD_TExpColorOp(temp_r27_2, 1, 0, 1, 1);
    sp8 = 0;
    HSD_TExpColorIn(temp_r27_2, 7, 0, 1, -1, 1, temp_r26, 8);
    HSD_TExpAlphaOp(temp_r27_2, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r27_2, 7, 0, 7, 0, 7, 0, 5);
    temp_r30 = HSD_TExpTev(arg2);
    HSD_TExpOrder(arg1, 0xFF);
    HSD_TExpColorOp(temp_r30, 1, 0, 0, 1);
    sp8 = 0;
    HSD_TExpColorIn(temp_r30, 7, 0, 1, temp_r27_2, 1, temp_r25, 8);
    HSD_TExpAlphaOp(temp_r30, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r30, 7, 0, 7, 0, 7, 0, 5);
    temp_r27 = HSD_TExpTev(arg2);
    HSD_TExpOrder(NULL, 0xFF);
    HSD_TExpColorOp(temp_r27, 0, 0, 0, 1);
    sp8 = 0;
    HSD_TExpColorIn(temp_r27, 7, 0, 1, temp_r28, 1, temp_r30, 7);
    HSD_TExpAlphaOp(temp_r27, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r27, 7, 0, 7, 0, 7, 0, 5);
    return temp_r27;
}

#pragma push
#pragma peephole off
void fn_800AE718(void) {
    hsdInitClassInfo(&lbl_8022B940, &lbl_802A8AA0, &lbl_8022B940 + 0x54, &lbl_8022B940 + 0x68, 0x54, 0x20);
    M2C_FIELD(&lbl_8022B940, M2C_UNK (**)(), 0x44) = fn_800AE774;
}
#pragma pop

s32 fn_800AE774(void *arg1, s32 *arg2, M2C_UNK arg_sp0) {
    s32 sp8;
    s32 temp_r24;
    s32 temp_r25;
    s32 temp_r26;
    s32 temp_r26_2;
    s32 temp_r26_3;
    s32 temp_r27;
    s32 temp_r27_2;
    s32 temp_r28;
    s32 temp_r29;

    if (arg2 == NULL) {
        __assert(&lbl_8022B940 + 0x74, 0x3E, &lbl_8034FEEC);
    }
    *arg2 = 0;
    if (arg1 == NULL) {
        __assert(&lbl_8022B940 + 0x74, 0x42, &lbl_8022B940 + 0x84);
    }
    if ((u32) M2C_FIELD(arg1, u32 *, 8) != 0U) {
        __assert(&lbl_8022B940 + 0x74, 0x44, &lbl_8022B940 + 0x90);
    }
    if ((u32) M2C_FIELD(arg1, u32 *, 0x58) == 0U) {
        __assert(&lbl_8022B940 + 0x74, 0x49, &lbl_8022B940 + 0xA8);
    }
    if (M2C_FIELD(arg1, s32 *, 0x4C) & 0xF) {
        __assert(&lbl_8022B940 + 0x74, 0x4B, &lbl_8022B940 + 0xB8);
    }
    temp_r26_2 = HSD_TExpCnst(&lbl_8034FEE0, 1, 0, arg2);
    temp_r25 = HSD_TExpCnst(&lbl_8034FEE4, 1, 0, arg2);
    temp_r24 = HSD_TExpCnst(&lbl_8034FEE8, 1, 0, arg2);
    temp_r28 = HSD_TExpCnst(&lbl_8034FED8, 1, 0, arg2);
    HSD_TExpCnst(&lbl_8034FEDC, 1, 0, arg2);
    temp_r29 = HSD_TExpCnst(&lbl_8034FEDC + 3, 6, 0, arg2);
    temp_r27 = HSD_TExpTev(arg2);
    HSD_TExpOrder(arg1, 0xFF);
    HSD_TExpColorOp(temp_r27, 0, 0, 3, 1);
    sp8 = 0;
    HSD_TExpColorIn(temp_r27, 7, 0, 4, -1, 1, temp_r26_2, 7);
    HSD_TExpAlphaOp(temp_r27, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r27, 7, 0, 7, 0, 7, 0, 5);
    temp_r26_3 = HSD_TExpTev(arg2);
    HSD_TExpOrder(arg1, 0xFF);
    HSD_TExpColorOp(temp_r26_3, 0, 0, 3, 1);
    sp8 = temp_r27;
    HSD_TExpColorIn(temp_r26_3, 7, 0, 2, -1, 1, temp_r25, 1);
    HSD_TExpAlphaOp(temp_r26_3, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r26_3, 7, 0, 7, 0, 7, 0, 5);
    temp_r27_2 = HSD_TExpTev(arg2);
    HSD_TExpOrder(arg1, 0xFF);
    HSD_TExpColorOp(temp_r27_2, 0, 0, 0, 1);
    sp8 = temp_r26_3;
    HSD_TExpColorIn(temp_r27_2, 7, 0, 3, -1, 1, temp_r24, 1);
    HSD_TExpAlphaOp(temp_r27_2, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r27_2, 7, 0, 7, 0, 7, 0, 5);
    temp_r26 = HSD_TExpTev(arg2);
    HSD_TExpOrder(NULL, 0xFF);
    HSD_TExpColorOp(temp_r26, 0, 2, 0, 1);
    sp8 = temp_r28;
    HSD_TExpColorIn(temp_r26, 1, temp_r27_2, 7, 0, 7, 0, 1);
    HSD_TExpAlphaOp(temp_r26, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r26, 7, 0, 7, 0, 7, 0, 5);
    return temp_r26;
}

#pragma push
#pragma peephole off
void fn_800AEB30(void) {
    hsdInitClassInfo(&lbl_8022BA20, &lbl_802A8AA0, &lbl_8022BA20 + 0x54, &lbl_8022BA20 + 0x6C, 0x54, 0x20);
    M2C_FIELD(&lbl_8022BA20, M2C_UNK (**)(), 0x44) = fn_800AEB8C;
}
#pragma pop

s32 fn_800AEB8C(void *arg1, s32 *arg2, M2C_UNK arg_sp0) {
    s32 sp8;
    s32 temp_r26;
    s32 temp_r27;
    s8 temp_r30;
    s32 temp_r25;
    s32 temp_r28;
    s32 temp_r29;
    s8 temp_r27_2;

    if (arg2 == NULL) {
        __assert(&lbl_8022BA20 + 0x78, 0x36, &lbl_8034FF04);
    }
    *arg2 = 0;
    if (arg1 == NULL) {
        __assert(&lbl_8022BA20 + 0x78, 0x3A, &lbl_8022BA20 + 0x88);
    }
    if ((u32) M2C_FIELD(arg1, u32 *, 8) != 0U) {
        __assert(&lbl_8022BA20 + 0x78, 0x3C, &lbl_8022BA20 + 0x94);
    }
    if ((u32) M2C_FIELD(arg1, u32 *, 0x58) == 0U) {
        __assert(&lbl_8022BA20 + 0x78, 0x41, &lbl_8022BA20 + 0xAC);
    }
    if (M2C_FIELD(arg1, s32 *, 0x4C) & 0xF) {
        __assert(&lbl_8022BA20 + 0x78, 0x43, &lbl_8022BA20 + 0xBC);
    }
    temp_r26 = HSD_TExpCnst(&lbl_8034FEF8, 1, 0, arg2);
    temp_r25 = HSD_TExpCnst(&lbl_8034FEFC, 1, 0, arg2);
    HSD_TExpCnst(&lbl_8034FF00, 1, 0, arg2);
    temp_r29 = HSD_TExpCnst(&lbl_8034FF00 + 3, 6, 0, arg2);
    temp_r28 = HSD_TExpTev(arg2);
    HSD_TExpOrder(arg1, 0xFF);
    HSD_TExpColorOp(temp_r28, 0, 0, 1, 1);
    sp8 = 0;
    HSD_TExpColorIn(temp_r28, 7, 0, 1, -1, 1, temp_r26, 7);
    HSD_TExpAlphaOp(temp_r28, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r28, 7, 0, 7, 0, 7, 0, 5);
    temp_r27_2 = HSD_TExpTev(arg2);
    HSD_TExpOrder(arg1, 0xFF);
    HSD_TExpColorOp(temp_r27_2, 1, 0, 1, 1);
    sp8 = 0;
    HSD_TExpColorIn(temp_r27_2, 7, 0, 1, -1, 1, temp_r26, 8);
    HSD_TExpAlphaOp(temp_r27_2, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r27_2, 7, 0, 7, 0, 7, 0, 5);
    temp_r30 = HSD_TExpTev(arg2);
    HSD_TExpOrder(arg1, 0xFF);
    HSD_TExpColorOp(temp_r30, 1, 0, 0, 1);
    sp8 = 0;
    HSD_TExpColorIn(temp_r30, 7, 0, 1, temp_r27_2, 1, temp_r25, 8);
    HSD_TExpAlphaOp(temp_r30, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r30, 7, 0, 7, 0, 7, 0, 5);
    temp_r27 = HSD_TExpTev(arg2);
    HSD_TExpOrder(NULL, 0xFF);
    HSD_TExpColorOp(temp_r27, 0, 0, 0, 1);
    sp8 = 0;
    HSD_TExpColorIn(temp_r27, 7, 0, 1, temp_r28, 1, temp_r30, 7);
    HSD_TExpAlphaOp(temp_r27, 0, 0, 0, 1);
    sp8 = temp_r29;
    HSD_TExpAlphaIn(temp_r27, 7, 0, 7, 0, 7, 0, 5);
    return temp_r27;
}

void SetExiInterruptMask(s32 arg0, void *arg1) {
    switch (arg0) {                                 /* irregular */
    case 0:
        if ((((u32) M2C_FIELD(arg1, u32 *, 0) == 0U) && ((u32) M2C_FIELD(&lbl_802CF930, u32 *, 0x80) == 0U)) || (M2C_FIELD(arg1, s32 *, 0xC) & 0x10)) {
            __OSMaskInterrupts(0x410000);
            return;
        }
        __OSUnmaskInterrupts(0x410000);
        return;
    case 1:
        if (((u32) M2C_FIELD(arg1, u32 *, 0) == 0U) || (M2C_FIELD(arg1, s32 *, 0xC) & 0x10)) {
            __OSMaskInterrupts(0x80000);
            return;
        }
        __OSUnmaskInterrupts(0x80000);
        return;
    case 2:
        if ((fn_800C66EC(0x19) == 0U) || (M2C_FIELD(arg1, s32 *, 0xC) & 0x10)) {
            __OSMaskInterrupts(0x40);
            return;
        }
        __OSUnmaskInterrupts(0x40);
        return;
    }
}

s32 EXIImm(s32 arg0, void *arg1, s32 arg2, u32 arg3, u32 arg4) {
    void *temp_r31;
    s32 temp_r30;
    s8 temp_r4;
    s32 temp_r4_2;
    s32 temp_r6;
    s32 var_ctr_2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r4;
    u32 var_ctr;
    u8 *var_r6;
    void *var_r3;

    temp_r4 = arg0 << 6;
    temp_r30 = OSDisableInterrupts(&lbl_802CF930, temp_r4);
    temp_r31 = &lbl_802CF930 + temp_r4;
    if ((M2C_FIELD(temp_r31, s32 *, 0xC) & 3) || !(M2C_FIELD(temp_r31, s32 *, 0xC) & 4)) {
        OSRestoreInterrupts((long)(temp_r30), (long)(0));
        return 0;
    }
    M2C_FIELD(temp_r31, u32 *, 4) = arg4;
    if ((u32) M2C_FIELD(temp_r31, u32 *, 4) != 0U) {
        __OSUnmaskInterrupts(0x200000U >> (arg0 * 3));
        EXIClearInterrupts(arg0, 0, 1, 0);
    }
    M2C_FIELD(temp_r31, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r31, s32 *, 0xC) | 2);
    if (arg3 != 0) {
        var_r0 = 0;
        var_r4 = 0;
        if (arg2 > 0) {
            temp_r6 = arg2 - 8;
            if (arg2 > 8) {
                var_r3 = arg1;
                var_ctr = (u32) (temp_r6 + 7) >> 3U;
                if (temp_r6 > 0) {
                    do {
                        var_r0 = var_r0 | (M2C_FIELD(var_r3, u8 *, 0) << ((3 - var_r4) * 8)) | (M2C_FIELD(var_r3, u8 *, 1) << ((3 - (var_r4 + 1)) * 8)) | (M2C_FIELD(var_r3, u8 *, 2) << ((3 - (var_r4 + 2)) * 8)) | (M2C_FIELD(var_r3, u8 *, 3) << (var_r4 * -8)) | (M2C_FIELD(var_r3, u8 *, 4) << ((3 - (var_r4 + 4)) * 8)) | (M2C_FIELD(var_r3, u8 *, 5) << ((3 - (var_r4 + 5)) * 8)) | (M2C_FIELD(var_r3, u8 *, 6) << ((3 - (var_r4 + 6)) * 8)) | (M2C_FIELD(var_r3, u8 *, 7) << ((3 - (var_r4 + 7)) * 8));
                        /* draft: did not compile: var_r3 += 8; */
                        var_r4 += 8;
                        var_ctr -= 1;
                    } while (var_ctr != 0);
                }
            }
            /* draft: did not compile: var_r6 = arg1 + var_r4; */
            var_ctr_2 = arg2 - var_r4;
            if (var_r4 < arg2) {
                do {
                    var_r0 |= *var_r6 << ((3 - var_r4) * 8);
                    var_r6 += 1;
                    var_r4 += 1;
                    var_ctr_2 -= 1;
                } while (var_ctr_2 != 0);
            }
        }
        M2C_FIELD(((arg0 * 0x14) + 0xCC006800), s32 *, 0x10) = var_r0;
    }
    M2C_FIELD(temp_r31, void **, 0x14) = arg1;
    if (arg3 != 1) {
        var_r0_2 = arg2;
    } else {
        var_r0_2 = 0;
    }
    M2C_FIELD(temp_r31, s32 *, 0x10) = var_r0_2;
    temp_r4_2 = (arg3 * 4) | 1 | ((arg2 - 1) * 0x10);
    M2C_FIELD(((arg0 * 0x14) + 0xCC006800), s32 *, 0xC) = temp_r4_2;
    OSRestoreInterrupts(temp_r30, temp_r4_2);
    return 1;
}

#pragma push
#pragma peephole off
s32 EXIImmEx(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    int var_r31;
    s32 var_r28;
    s32 var_r29;

    var_r28 = arg1;
    var_r29 = arg2;
loop_9:
    switch (var_r29) {
    case 0:
            return 1;
        break;
    }
    if (var_r29 < 4) {
        var_r31 = var_r29;
    } else {
        var_r31 = 4;
    }
    if (0 /* draft: did not compile */) {
        return 0;
    }
    if ((u16)EXISync(arg0) == 0) {
        return 0;
    }
    var_r28 += var_r31;
    var_r29 -= var_r31;
    goto loop_9;
}
#pragma pop

s32 EXIDma(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u32 arg4) {
    s32 temp_r4_2;
    s32 temp_r4;
    s32 temp_r31;
    void *temp_r26;
    void *temp_r3;

    temp_r4 = arg0 << 6;
    temp_r31 = OSDisableInterrupts(&lbl_802CF930, (u16)temp_r4);
    temp_r26 = &lbl_802CF930 + temp_r4;
    if ((M2C_FIELD(temp_r26, s32 *, 0xC) & 3) || !(M2C_FIELD(temp_r26, s32 *, 0xC) & 4)) {
        OSRestoreInterrupts((long)(temp_r31), (long)(0));
        return 0;
    }
    M2C_FIELD(temp_r26, u32 *, 4) = arg4;
    if ((u32) M2C_FIELD(temp_r26, u32 *, 4) != 0U) {
        EXIClearInterrupts(arg0, 0, 1, 0);
        __OSUnmaskInterrupts(0x200000U >> (arg0 * 3));
    }
    M2C_FIELD(temp_r26, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r26, s32 *, 0xC) | 1);
    temp_r4_2 = arg1 & 0x03FFFFE0;
    /* draft: did not compile: temp_r3 = (arg0 * 0x14) + 0xCC006800; */
    M2C_FIELD(temp_r3, s32 *, 8) = arg2;
    OSRestoreInterrupts(temp_r31, temp_r4_2);
    M2C_FIELD(temp_r3, s32 *, 4) = temp_r4_2;
    M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) ((arg3 * 4) | 3);
    return 1;
}

s32 EXISync(s32 arg0) { return 0; } /* draft: stub */

s32 EXIClearInterrupts(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 temp_r0;
    s32 temp_r0_2;
    s32 var_r0;

    temp_r0_2 = arg0 * 0x14;
    /* draft: did not compile: temp_r0 = *(0xCC006800 + temp_r0_2); */
    var_r0 = temp_r0 & 0x7F5;
    if (arg1 != 0) {
        var_r0 |= 2;
    }
    if (arg2 != 0) {
        var_r0 |= 8;
    }
    if (arg3 != 0) {
        var_r0 |= 0x800;
    }
    /* draft: did not compile: *(0xCC006800 + temp_r0_2) = var_r0; */
    return temp_r0;
}

s32 EXISetExiCallback(s32 arg0, s32 arg1) {
    s32 temp_r28;
    s32 *temp_r30;
    s32 temp_r29;

    temp_r30 = &lbl_802CF930 + (arg0 << 6);
    temp_r29 = *temp_r30;
    *temp_r30 = arg1;
    temp_r28 = OSDisableInterrupts((long *)(&lbl_802CF930), (long)(0));
    if (arg0 != 2) {
        SetExiInterruptMask(arg0, temp_r30);
    } else {
        SetExiInterruptMask(0, &lbl_802CF930);
    }
    OSRestoreInterrupts((long)(temp_r28), (long)(0));
    return temp_r29;
}

s32 __EXIProbe(s32 arg0) {
    s32 temp_r27;
    s32 temp_r0;
    s32 *temp_r3;
    u8 temp_r4;
    s32 temp_r5;
    s32 var_r29;
    void *temp_r31;
    s8 temp_r30;

    temp_r31 = &lbl_802CF930 + (arg0 << 6);
    if (arg0 == 2) {
        return 1;
    }
    var_r29 = 1;
    temp_r30 = OSDisableInterrupts((long *)(0), (long)(0));
    temp_r0 = arg0 * 0x14;
    /* draft: did not compile: temp_r5 = *(0xCC006800 + temp_r0); */
    if (!(M2C_FIELD(temp_r31, s32 *, 0xC) & 8)) {
        if (temp_r5 & 0x800) {
            /* draft: did not compile: *(0xCC006800 + temp_r0) = (s32) ((*(0xCC006800 + temp_r0) & 0x7F5) | 0x800); */
            M2C_FIELD(temp_r31, s32 *, 0x20) = 0;
            /* draft: did not compile: *(0x800030C0 + (arg0 * 4)) = 0; */
        }
        if (temp_r5 & 0x1000) {
            temp_r27 = *(u32 *)0x800000F8 / 4000;
            OSGetTime(0x10624DD3);
            __div2i(0, temp_r27);
            temp_r4 = (u32) __div2i(0, 0x64) + 1;
            /* draft: did not compile: temp_r3 = (u32 *)0x80000000 + 0x30C0 + (arg0 * 4); */
            if ((s32) *temp_r3 == 0) {
                *temp_r3 = temp_r4;
            }
            if ((s32) (temp_r4 - *temp_r3) < 3) {
                var_r29 = 0;
            }
        } else {
            M2C_FIELD(temp_r31, s32 *, 0x20) = 0;
            /* draft: did not compile: *(0x800030C0 + (arg0 * 4)) = 0; */
            var_r29 = 0;
        }
    } else if (!(temp_r5 & 0x1000) || (temp_r5 & 0x800)) {
        M2C_FIELD(temp_r31, s32 *, 0x20) = 0;
        /* draft: did not compile: *(0x800030C0 + (arg0 * 4)) = 0; */
        var_r29 = 0;
    }
    OSRestoreInterrupts((long)(temp_r30), (long)(0));
    return var_r29;
}

#pragma push
#pragma optimize_for_size on
s32 EXIProbe(s32 arg0) {
    M2C_UNK spC;
    s32 temp_r4;
    s32 var_r3;

    temp_r4 = arg0 << 6;
    var_r3 = __EXIProbe((long)(arg0));
    if ((var_r3 != 0) && ((s32) M2C_FIELD((&lbl_802CF930 + temp_r4), s32 *, 0x20) == 0)) {
        if (EXIGetID((s32)arg0, 0, &spC) != 0) {
            return 1;
        }
        var_r3 = 0;
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_r3;
    }
    return var_r3;
}
#pragma pop
