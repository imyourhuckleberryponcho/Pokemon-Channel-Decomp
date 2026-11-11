/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK gTRKState;
M2C_UNK TRK_flush_cache();
M2C_UNK fn_8015709C(M2C_UNK *, M2C_UNK);
M2C_UNK TRKPostEvent(M2C_UNK *);
s32 fn_8015AD7C(s32, s32 *, u8, u8 *, s32);
s32 fn_8015AF0C(s32, u8 *);
s32 fn_8015B02C(s32, u8, s32, u8 *);
s32 fn_8015B378(u8, s32, s32, u8 *, M2C_UNK, s32);
extern M2C_UNK gTRKCPUState;
extern M2C_UNK lbl_802B0F24;
s32 fn_80157C04(s32, s32);
M2C_UNK fn_80157C68(s32, u16);
extern M2C_UNK gTRKExceptionStatus_802B0F14;
M2C_UNK fn_80157B7C(s32, M2C_UNK, u16);
s32 fn_8015B654(M2C_UNK, M2C_UNK *);
extern s32 gTRKBigEndian;
M2C_UNK TRKReadBuffer1_ui64(s32, s32 *);
extern M2C_UNK lbl_801DB288;
extern M2C_UNK lbl_801DB2B0;
extern M2C_UNK lbl_8034BEE4;
u32 TRKReadBuffer_ui32(s32, s32);
u32 fn_80157A6C(s32, s32);
extern M2C_UNK gTRKRestoreFlags;
s32 fn_8015B820();
M2C_UNK fn_8015B828(s32);
s32 fn_8015BBC4(s32 *, u32, s32);
M2C_UNK TRK_ppc_memcpy(u32, u32, s32, s32, s32);
extern M2C_UNK lbl_801DB278;
void *InitMetroTRKCommTable(M2C_UNK);
extern s32 lbl_8034BEF8;
M2C_UNK fn_8015D8D4();
s32 TRKInitializeNub();
M2C_UNK TRKNubMainLoop();
M2C_UNK TRKNubWelcome();
s32 TRKTerminateNub();
extern s32 TRK_mainError_8034BF00;
M2C_UNK TRKInterruptHandler(s32, s32, u16, s32, s32, s32, s32, s32);
extern s32 sp;

s32 TRKTargetStopped(void);
s32 fn_8015BE18(u32 arg1, u32 arg2);
s32 TRKTargetSupportRequest(void);
s32 fn_8015C05C(void);
s32 fn_8015C06C(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8015C0E8(s32 arg0, s32 arg1);
void fn_8015C154(s32 arg0);
void fn_8015C200(s32 arg0);
s32 TRKTargetInterrupt(u8 *arg0);
void TRKPostInterruptEvent(void);
s32 fn_8015C540(void *arg0);
s32 fn_8015C5A0(void *arg0);
s32 fn_8015C644(void *arg0);
s32 fn_8015C668(u32 arg0, u32 arg1, s32 arg2, s32 *arg3, s32 arg4);
u32 TRKTargetAccessExtended1(u32 arg0, u32 arg1, s32 arg2, s32 *arg3, s32 arg4);
s32 fn_8015CC10(u32 arg0, u32 arg1, s32 arg2, s32 *arg3, s32 arg4);
s32 TRKTargetAccessDefault(s32 arg0, u32 arg1, s32 arg2, s32 *arg3, s32 arg4);
s32 TRKTargetAccessMemory(u32 arg0, u32 arg1, s32 *arg2, s32 arg4);
s32 fn_8015CF8C(u32 arg0, u8 arg1, u8 arg2);
void fn_8015D0B0(void);
void fn_8015D0B8(void);
void fn_8015D0C0(void);
void fn_8015D0C8(void);
void InitMetroTRK(s32 arg0, s32 arg_sp0);
s32 TRKInitializeTarget(void);
u32 fn_8015D1B0(u32 arg0);
void EnableMetroTRKInterrupts(void);
void TRKSaveExtended1Block(void);
void TRKRestoreExtended1Block(void);
s32 fn_8015D580(void);
void TRK_main(void);
void TRKLoadContext(void *arg0, s32 arg1);

s32 TRKTargetStopped(void) {
    return M2C_FIELD(&gTRKState, s32 *, 0x98);
}

s32 fn_8015BE18(u32 arg1, u32 arg2) {
    if (arg1 < arg2) {
        TRK_flush_cache(arg1, arg2 - arg1);
        return 0;
    }
    return 0x700;
}

s32 TRKTargetSupportRequest(void) {
    M2C_UNK sp10;
    s32 spC;
    u8 sp8;
    u8 temp_r27;
    s32 temp_r7;
    s32 var_r30;
    u8 temp_r28;

    temp_r28 = (u8) M2C_FIELD(&gTRKCPUState, s32 *, 0xC);
    if ((temp_r28 != 0xD1) && (temp_r28 != 0xD0) && (temp_r28 != 0xD2) && (temp_r28 != 0xD3) && (temp_r28 != 0xD4)) {
        fn_8015709C(&sp10, 4);
        TRKPostEvent(&sp10);
        return 0;
    }
    switch (temp_r28) {                             /* irregular */
    case 0xD2:
        var_r30 = fn_8015B02C(M2C_FIELD(&gTRKCPUState, s32 *, 0x10), (u8) M2C_FIELD(&gTRKCPUState, s32 *, 0x14), M2C_FIELD(&gTRKCPUState, s32 *, 0x18), &sp8);
        if ((sp8 == 0) && (var_r30 != 0)) {
            sp8 = 1;
        }
        M2C_FIELD(&gTRKCPUState, s32 *, 0xC) = (s32) sp8;
        break;
    case 0xD3:
        var_r30 = fn_8015AF0C(M2C_FIELD(&gTRKCPUState, s32 *, 0x10), &sp8);
        if ((sp8 == 0) && (var_r30 != 0)) {
            sp8 = 1;
        }
        M2C_FIELD(&gTRKCPUState, s32 *, 0xC) = (s32) sp8;
        break;
    case 0xD4:
        /* draft: did not compile: temp_r7 = *M2C_FIELD(&gTRKCPUState, s32 *, 0x14); */
        spC = temp_r7;
        var_r30 = fn_8015AD7C(M2C_FIELD(&gTRKCPUState, s32 *, 0x10), &spC, (u8) M2C_FIELD(&gTRKCPUState, s32 *, 0x18), &sp8, temp_r7);
        if ((sp8 == 0) && (var_r30 != 0)) {
            sp8 = 1;
        }
        M2C_FIELD(&gTRKCPUState, s32 *, 0xC) = (s32) sp8;
        /* draft: did not compile: *M2C_FIELD(&gTRKCPUState, s32 *, 0x14) = spC; */
        break;
    default:
        temp_r27 = M2C_FIELD(&gTRKCPUState, s32 *, 0x14);
        var_r30 = fn_8015B378((u8) M2C_FIELD(&gTRKCPUState, s32 *, 0x10), M2C_FIELD(&gTRKCPUState, s32 *, 0x18), temp_r27, &sp8, 1, temp_r28 == 0xD1);
        if ((sp8 == 0) && (var_r30 != 0)) {
            sp8 = 1;
        }
        M2C_FIELD(&gTRKCPUState, s32 *, 0xC) = (s32) sp8;
        if (temp_r28 == 0xD1) {
            /* draft: did not compile: TRK_flush_cache(M2C_FIELD(&gTRKCPUState, s32 *, 0x18), *temp_r27); */
        }
        break;
    }
    M2C_FIELD(&gTRKCPUState, s32 *, 0x80) = (s32) (M2C_FIELD(&gTRKCPUState, s32 *, 0x80) + 4);
    return var_r30;
}

s32 fn_8015C05C(void) {
    return M2C_FIELD(&gTRKCPUState, s32 *, 0x80);
}

s32 fn_8015C06C(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        return 0x703;
    }
    M2C_FIELD(&lbl_802B0F24, s8 *, 4) = 1;
    M2C_FIELD(&lbl_802B0F24, s32 *, 0xC) = arg0;
    M2C_FIELD(&lbl_802B0F24, s32 *, 0x10) = arg1;
    M2C_FIELD(&lbl_802B0F24, s32 *, 0) = 1;
    M2C_FIELD(&gTRKCPUState, s32 *, 0x1F8) = (s32) (M2C_FIELD(&gTRKCPUState, s32 *, 0x1F8) | 0x400);
    if ((1U == 0U) || (1U == 0x10U)) {
        M2C_FIELD(&lbl_802B0F24, s32 *, 8) = (s32) (M2C_FIELD(&lbl_802B0F24, s32 *, 8) - 1);
    }
    M2C_FIELD(&gTRKState, s32 *, 0x98) = 0;
    return 0;
}

s32 fn_8015C0E8(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        return 0x703;
    }
    M2C_FIELD(&lbl_802B0F24, s8 *, 4) = 0;
    M2C_FIELD(&lbl_802B0F24, s32 *, 8) = arg0;
    M2C_FIELD(&lbl_802B0F24, s32 *, 0) = 1;
    M2C_FIELD(&gTRKCPUState, s32 *, 0x1F8) = (s32) (M2C_FIELD(&gTRKCPUState, s32 *, 0x1F8) | 0x400);
    M2C_FIELD(&lbl_802B0F24, s32 *, 8) = (s32) (M2C_FIELD(&lbl_802B0F24, s32 *, 8) - 1);
    M2C_FIELD(&gTRKState, s32 *, 0x98) = 0;
    return 0;
}

void fn_8015C154(s32 arg0) { } /* draft: stub */

void fn_8015C200(s32 arg0) {
    s32 spC;
    u32 sp8;
    s32 *var_r29;
    s32 *var_r30;
    s32 var_r28;
    s32 var_r30_2;
    s32 var_r3;

    var_r3 = fn_80157C04((long)(M2C_FIELD(&gTRKCPUState, s32 *, 0x80)), (long)(0));
    if (var_r3 == 0) {
        sp8 = 4U;
        /* draft: did not compile: var_r3 = TRKTargetAccessMemory(&spC, M2C_FIELD(&gTRKCPUState, s32 *, 0x80), &sp8, 0, 1); */
        if ((var_r3 == 0) && (sp8 != 4U)) {
            var_r3 = 0x700;
        }
    }
    if (var_r3 == 0) {
        var_r3 = fn_80157C04(arg0, spC);
    }
    if (var_r3 == 0) {
        var_r3 = fn_80157C68(arg0, (u16) M2C_FIELD(&gTRKCPUState, s32 *, 0x2F8));
    }
    if (var_r3 == 0) {
        var_r28 = 0;
        var_r29 = &gTRKCPUState;
        var_r30 = &gTRKCPUState;
        do {
            fn_80157C04(arg0, (s32) (u16) *var_r30);
            var_r28 += 1;
            var_r30 += 4;
        } while (var_r28 < 0x20);
        var_r30_2 = 0;
        do {
            fn_80157B7C(arg0, 0, (u16) M2C_FIELD(var_r29, s32 *, 0x9C));
            var_r30_2 += 1;
            var_r29 += 8;
        } while (var_r30_2 < 0x20);
    }
}

s32 TRKTargetInterrupt(u8 *arg0) {
    s32 temp_cr0_eq;
    s32 var_r3;
    s32 var_r7;
    u8 temp_r0;

    temp_r0 = *arg0;
    var_r3 = 0;
    if ((s32) temp_r0 < 5) {
        if ((s32) temp_r0 < 3) {
            return 0;
        }
        temp_cr0_eq = (s32) M2C_FIELD(&lbl_802B0F24, s32 *, 0) == 0;
        switch (temp_cr0_eq) {
        case 0:
                var_r7 = 1;
                M2C_FIELD(&gTRKCPUState, s32 *, 0x1F8) = (s32) (M2C_FIELD(&gTRKCPUState, s32 *, 0x1F8) & 0xFFFFFBFF);
                if ((temp_cr0_eq == 0) && ((u16) M2C_FIELD(&gTRKCPUState, s32 *, 0x2F8) == 0xD00)) {
                    switch ((s32) M2C_FIELD(&lbl_802B0F24, u8 *, 4)) { /* irregular */
                    case 0:
                        if ((u32) M2C_FIELD(&lbl_802B0F24, u32 *, 8) != 0U) {
                            var_r7 = 0;
                        }
                        break;
                    case 1:
                        if (((u32) M2C_FIELD(&gTRKCPUState, u32 *, 0x80) >= (u32) M2C_FIELD(&lbl_802B0F24, u32 *, 0xC)) && ((u32) M2C_FIELD(&gTRKCPUState, u32 *, 0x80) <= (u32) M2C_FIELD(&lbl_802B0F24, u32 *, 0x10))) {
                            var_r7 = 0;
                        }
                        break;
                    }
                }
                if (var_r7 != 0) {
                    M2C_FIELD(&lbl_802B0F24, s32 *, 0) = 0;
                } else {
                    M2C_FIELD(&lbl_802B0F24, s32 *, 0) = 1;
                    M2C_FIELD(&gTRKCPUState, s32 *, 0x1F8) = (s32) (M2C_FIELD(&gTRKCPUState, s32 *, 0x1F8) | 0x400);
                    if (((s16)M2C_FIELD(&lbl_802B0F24, u8 *, 4) == 0) || ((u8) M2C_FIELD(&lbl_802B0F24, u8 *, 4) == 0x10)) {
                        M2C_FIELD(&lbl_802B0F24, u32 *, 8) = (u32) (M2C_FIELD(&lbl_802B0F24, u32 *, 8) - 1);
                    }
                    M2C_FIELD(&gTRKState, s32 *, 0x98) = 0;
                }
            break;
        }
        switch (M2C_FIELD(&lbl_802B0F24, s32 *, 0)) {
        case 0:
                var_r3 = fn_8015B654(0x90, &gTRKState);
                M2C_FIELD(&gTRKState, s32 *, 0x98) = 1;
            break;
        }
        /* Duplicate return node #23. Try simplifying control flow for better match */
        return var_r3;
    }
    return var_r3;
}

void TRKPostInterruptEvent(void) {
    M2C_UNK sp10;
    u8 spC;
    s32 sp8;
    M2C_UNK var_r4;

    if ((s32) M2C_FIELD(&gTRKState, s32 *, 0x9C) != 0) {
        M2C_FIELD(&gTRKState, s32 *, 0x9C) = 0;
        return;
    }
    if ((s32) (u16) M2C_FIELD(&gTRKCPUState, s32 *, 0x2F8) != 0xD00) {
        if ((s32) (u16) M2C_FIELD(&gTRKCPUState, s32 *, 0x2F8) < 0xD00) {
            if ((s32) (u16) M2C_FIELD(&gTRKCPUState, s32 *, 0x2F8) != 0x700) {
                goto block_9;
            }
            goto block_6;
        }
block_9:
        var_r4 = 4;
    } else {
block_6:
        sp8 = 4;
        /* draft: did not compile: TRKTargetAccessMemory(&spC, M2C_FIELD(&gTRKCPUState, s32 *, 0x80), &sp8, 0, 1); */
        if ((u32) (spC + 0xF0200000) == 0U) {
            var_r4 = 5;
        } else {
            var_r4 = 3;
        }
    }
    fn_8015709C(&sp10, (u16)var_r4);
    TRKPostEvent(&sp10);
}

s32 fn_8015C540(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 1) = fn_8015D580();
    M2C_FIELD(arg0, s8 *, 2) = (s8) gTRKBigEndian;
    M2C_FIELD(arg0, s8 *, 3) = 4;
    M2C_FIELD(arg0, s8 *, 4) = 8;
    M2C_FIELD(arg0, s8 *, 5) = 4;
    M2C_FIELD(arg0, s8 *, 6) = 8;
    return 0;
}

s32 fn_8015C5A0(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0) = 0x7A;
    M2C_FIELD(arg0, u8 *, 1) = 0;
    M2C_FIELD(arg0, u8 *, 2) = 0x4F;
    M2C_FIELD(arg0, u8 *, 3) = 7;
    M2C_FIELD(arg0, u8 *, 4) = 0;
    M2C_FIELD(arg0, u8 *, 5) = 0;
    M2C_FIELD(arg0, u8 *, 6) = 0;
    M2C_FIELD(arg0, u8 *, 7) = 0;
    M2C_FIELD(arg0, u8 *, 8) = 0;
    M2C_FIELD(arg0, u8 *, 9) = 0;
    M2C_FIELD(arg0, u8 *, 0xA) = 0;
    M2C_FIELD(arg0, u8 *, 0xB) = 0;
    M2C_FIELD(arg0, u8 *, 0xC) = 0;
    M2C_FIELD(arg0, u8 *, 0xD) = 0;
    M2C_FIELD(arg0, u8 *, 0xE) = 0;
    M2C_FIELD(arg0, u8 *, 0xF) = 0;
    M2C_FIELD(arg0, u8 *, 0x10) = 1;
    M2C_FIELD(arg0, u8 *, 0x11) = 0;
    M2C_FIELD(arg0, u8 *, 0x12) = 3;
    M2C_FIELD(arg0, u8 *, 0x13) = 0;
    M2C_FIELD(arg0, u8 *, 0x14) = 0;
    M2C_FIELD(arg0, u8 *, 0x15) = 0;
    M2C_FIELD(arg0, u8 *, 0x16) = 0;
    M2C_FIELD(arg0, u8 *, 0x17) = 0;
    M2C_FIELD(arg0, u8 *, 0x18) = 0;
    M2C_FIELD(arg0, u8 *, 0x19) = 0;
    M2C_FIELD(arg0, u8 *, 0x1A) = 3;
    M2C_FIELD(arg0, u8 *, 0x1B) = 0;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    M2C_FIELD(arg0, u8 *, 0x1D) = 0;
    M2C_FIELD(arg0, u8 *, 0x1E) = 0;
    M2C_FIELD(arg0, u8 *, 0x1F) = 0x80;
    return 0;
}

s32 fn_8015C644(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 0xA;
    M2C_FIELD(arg0, s8 *, 2) = 1;
    M2C_FIELD(arg0, s8 *, 3) = 0xA;
    return 0;
}

s32 fn_8015C668(u32 arg0, u32 arg1, s32 arg2, s32 *arg3, s32 arg4) {
    s32 sp10;
    s32 spE8;
    s32 spE4;
    s32 spE0;
    s32 spDC;
    s32 spD8;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    s32 spC4;
    s32 spC0;
    s32 spBC;
    s32 spB8;
    s32 spB4;
    s32 spB0;
    s32 spAC;
    s32 spA8;
    s32 spA4;
    s32 spA0;
    s32 sp9C;
    s32 sp98;
    s32 sp94;
    s32 sp90;
    s32 sp8C;
    s32 sp88;
    s32 sp84;
    s32 sp80;
    s32 sp7C;
    s32 sp78;
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    s32 sp60;
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    s32 sp48;
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
    s32 spC;
    s32 sp8;
    s32 temp_cr0_eq;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r30;
    s32 var_r3;
    u32 var_r27;

    var_r27 = arg0;
    if (arg1 > 0x1FU) {
        return 0x701;
    }
    spC4 = M2C_FIELD(&lbl_801DB288, s32 *, 0);
    spC8 = M2C_FIELD(&lbl_801DB288, s32 *, 4);
    spE8 = M2C_FIELD(&lbl_801DB288, s32 *, 0x24);
    sp14 = M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 0);
    sp18 = M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 4);
    sp1C = M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 8);
    sp20 = M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 0xC);
    M2C_FIELD(&gTRKExceptionStatus_802B0F14, u8 *, 0xD) = 0U;
    spCC = M2C_FIELD(&lbl_801DB288, s32 *, 8);
    spD0 = M2C_FIELD(&lbl_801DB288, s32 *, 0xC);
    spD4 = M2C_FIELD(&lbl_801DB288, s32 *, 0x10);
    spD8 = M2C_FIELD(&lbl_801DB288, s32 *, 0x14);
    spDC = M2C_FIELD(&lbl_801DB288, s32 *, 0x18);
    spE0 = M2C_FIELD(&lbl_801DB288, s32 *, 0x1C);
    spE4 = M2C_FIELD(&lbl_801DB288, s32 *, 0x20);
    spC4 = 0x7C98E2A6;
    spC8 = 0x90830000;
    spE8 = 0x4E800020;
    TRK_flush_cache(&spC4, 0x28, 0x90830000, 0x7C98E2A6, M2C_FIELD(&lbl_801DB288, s32 *, 0x20), M2C_FIELD(&lbl_801DB288, s32 *, 0x1C), M2C_FIELD(&lbl_801DB288, s32 *, 0x18), M2C_FIELD(&lbl_801DB288, s32 *, 0x14));
    ((M2C_UNK (*)(s32 *, M2C_UNK *)) &spC4)(&sp8, &lbl_8034BEE4);
    spA0 = M2C_FIELD(&lbl_801DB288, s32 *, 4);
    sp9C = M2C_FIELD(&lbl_801DB288, s32 *, 0);
    spC0 = M2C_FIELD(&lbl_801DB288, s32 *, 0x24);
    sp8 |= 0xA0000000;
    spA4 = M2C_FIELD(&lbl_801DB288, s32 *, 8);
    spA8 = M2C_FIELD(&lbl_801DB288, s32 *, 0xC);
    spAC = M2C_FIELD(&lbl_801DB288, s32 *, 0x10);
    spB0 = M2C_FIELD(&lbl_801DB288, s32 *, 0x14);
    spB4 = M2C_FIELD(&lbl_801DB288, s32 *, 0x18);
    spB8 = M2C_FIELD(&lbl_801DB288, s32 *, 0x1C);
    spBC = M2C_FIELD(&lbl_801DB288, s32 *, 0x20);
    sp9C = 0x80830000;
    spA0 = 0x7C98E3A6;
    spC0 = 0x4E800020;
    TRK_flush_cache(&sp9C, 0x28, 0x7C98E3A6, 0x80830000, M2C_FIELD(&lbl_801DB288, s32 *, 0x20), M2C_FIELD(&lbl_801DB288, s32 *, 0x1C), M2C_FIELD(&lbl_801DB288, s32 *, 0x18), M2C_FIELD(&lbl_801DB288, s32 *, 0x14));
    ((M2C_UNK (*)(s32 *, M2C_UNK *)) &sp9C)(&sp8, &lbl_8034BEE4);
    sp78 = M2C_FIELD(&lbl_801DB288, s32 *, 4);
    sp74 = M2C_FIELD(&lbl_801DB288, s32 *, 0);
    sp98 = M2C_FIELD(&lbl_801DB288, s32 *, 0x24);
    sp8 = 0;
    sp7C = M2C_FIELD(&lbl_801DB288, s32 *, 8);
    sp80 = M2C_FIELD(&lbl_801DB288, s32 *, 0xC);
    sp84 = M2C_FIELD(&lbl_801DB288, s32 *, 0x10);
    sp88 = M2C_FIELD(&lbl_801DB288, s32 *, 0x14);
    sp8C = M2C_FIELD(&lbl_801DB288, s32 *, 0x18);
    sp90 = M2C_FIELD(&lbl_801DB288, s32 *, 0x1C);
    sp94 = M2C_FIELD(&lbl_801DB288, s32 *, 0x20);
    sp74 = 0x80830000;
    sp78 = 0x7C90E3A6;
    sp98 = 0x4E800020;
    TRK_flush_cache(&sp74, 0x28, 0x7C90E3A6, 0x80830000, M2C_FIELD(&lbl_801DB288, s32 *, 0x20), M2C_FIELD(&lbl_801DB288, s32 *, 0x1C), M2C_FIELD(&lbl_801DB288, s32 *, 0x18), M2C_FIELD(&lbl_801DB288, s32 *, 0x14));
    ((M2C_UNK (*)(s32 *, M2C_UNK *)) &sp74)(&sp8, &lbl_8034BEE4);
    var_r30 = var_r27 << 0x15;
    *arg3 = 0;
    var_r3 = 0;
loop_11:
    if ((var_r27 <= arg1) && (var_r3 == 0)) {
        temp_cr0_eq = arg4 == 0;
        if (temp_cr0_eq == 0) {
            var_r0 = var_r30 | 0xE0030000;
            sp4C = M2C_FIELD(&lbl_801DB2B0, s32 *, 0);
            sp50 = M2C_FIELD(&lbl_801DB2B0, s32 *, 4);
            sp54 = M2C_FIELD(&lbl_801DB2B0, s32 *, 8);
            sp58 = M2C_FIELD(&lbl_801DB2B0, s32 *, 0xC);
            sp5C = M2C_FIELD(&lbl_801DB2B0, s32 *, 0x10);
            sp60 = M2C_FIELD(&lbl_801DB2B0, s32 *, 0x14);
            sp64 = M2C_FIELD(&lbl_801DB2B0, s32 *, 0x18);
            sp68 = M2C_FIELD(&lbl_801DB2B0, s32 *, 0x1C);
            sp6C = M2C_FIELD(&lbl_801DB2B0, s32 *, 0x20);
            sp70 = M2C_FIELD(&lbl_801DB2B0, s32 *, 0x24);
            if (temp_cr0_eq == 0) {
                var_r0 = var_r30 | 0xF0030000;
            }
            sp4C = var_r0;
            sp70 = 0x4E800020;
            TRK_flush_cache(&sp4C, 0x28);
            ((M2C_UNK (*)(s32 *, M2C_UNK *)) &sp4C)(&spC, &lbl_8034BEE4);
            var_r3 = fn_80157B7C(arg2, spC, sp10);
        } else {
            TRKReadBuffer1_ui64(arg2, &spC);
            var_r0_2 = var_r30 | 0xE0030000;
            sp24 = M2C_FIELD(&lbl_801DB2B0, s32 *, 0);
            sp28 = M2C_FIELD(&lbl_801DB2B0, s32 *, 4);
            sp2C = M2C_FIELD(&lbl_801DB2B0, s32 *, 8);
            sp30 = M2C_FIELD(&lbl_801DB2B0, s32 *, 0xC);
            sp34 = M2C_FIELD(&lbl_801DB2B0, s32 *, 0x10);
            sp38 = M2C_FIELD(&lbl_801DB2B0, s32 *, 0x14);
            sp3C = M2C_FIELD(&lbl_801DB2B0, s32 *, 0x18);
            sp40 = M2C_FIELD(&lbl_801DB2B0, s32 *, 0x1C);
            sp44 = M2C_FIELD(&lbl_801DB2B0, s32 *, 0x20);
            sp48 = M2C_FIELD(&lbl_801DB2B0, s32 *, 0x24);
            if (arg4 != 0) {
                var_r0_2 = var_r30 | 0xF0030000;
            }
            sp24 = var_r0_2;
            sp48 = 0x4E800020;
            TRK_flush_cache(&sp24, 0x28);
            ((M2C_UNK (*)(s32 *, M2C_UNK *)) &sp24)(&spC, &lbl_8034BEE4);
            var_r3 = 0;
        }
        var_r30 += 0x200000;
        var_r27 += 1;
        *arg3 += 8;
        goto loop_11;
    }
    if ((u8) M2C_FIELD(&gTRKExceptionStatus_802B0F14, u8 *, 0xD) != 0) {
        var_r3 = 0x702;
        *arg3 = 0;
    }
    M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 0) = sp14;
    M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 4) = sp18;
    M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 8) = sp1C;
    M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 0xC) = sp20;
    return var_r3;
}

u32 TRKTargetAccessExtended1(u32 arg0, u32 arg1, s32 arg2, s32 *arg3, s32 arg4) { return 0; } /* draft: stub */

s32 fn_8015CC10(u32 arg0, u32 arg1, s32 arg2, s32 *arg3, s32 arg4) {
    s32 spC;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 sp8;
    s32 var_r3;
    u32 var_r26;

    var_r26 = arg0;
    if (arg1 > 0x21U) {
        return 0x701;
    }
    sp10 = M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 0);
    sp14 = M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 4);
    sp18 = M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 8);
    sp1C = M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 0xC);
    M2C_FIELD(&gTRKExceptionStatus_802B0F14, u8 *, 0xD) = 0U;
    fn_8015B828(fn_8015B820(M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 0xC), M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 8), M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 4), M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 0)) | 0x2000);
    var_r3 = 0;
    *arg3 = 0;
loop_7:
    if ((var_r26 <= arg1) && (var_r3 == 0)) {
        if (arg4 != 0) {
            fn_8015BBC4(&sp8, var_r26, arg4);
            var_r3 = fn_80157B7C(arg2, sp8, spC);
        } else {
            TRKReadBuffer1_ui64(arg2, &sp8);
            var_r3 = fn_8015BBC4(&sp8, var_r26, arg4);
        }
        var_r26 += 1;
        *arg3 += 8;
        goto loop_7;
    }
    if ((u8) M2C_FIELD(&gTRKExceptionStatus_802B0F14, u8 *, 0xD) != 0) {
        var_r3 = 0x702;
        *arg3 = 0;
    }
    M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 0) = sp10;
    M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 4) = sp14;
    M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 8) = sp18;
    M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 0xC) = sp1C;
    return var_r3;
}

#pragma push
#pragma peephole off
s32 TRKTargetAccessDefault(s32 arg0, u32 arg1, s32 arg2, s32 *arg3, s32 arg4) {
    u8 sp14;
    u8 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r12;
    s32 var_r3;

    if (arg1 > 0x24U) {
        return 0x701;
    }
    temp_r12 = (arg1 - arg0) + 1;
    sp14 = M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 0xC);
    M2C_FIELD(&gTRKExceptionStatus_802B0F14, u8 *, 0xD) = 0U;
    sp8 = M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 0);
    spC = M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 4);
    sp10 = M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 8);
    *arg3 = temp_r12 * 4;
    if (arg4 != 0) {
        var_r3 = fn_80157A6C(arg2, temp_r12);
    } else {
        var_r3 = TRKReadBuffer_ui32(arg2, temp_r12);
    }
    if ((u8) M2C_FIELD(&gTRKExceptionStatus_802B0F14, u8 *, 0xD) != 0) {
        var_r3 = 0x702;
        *arg3 = 0;
    }
    M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 0) = sp8;
    M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 4) = spC;
    M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 8) = sp10;
    M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 0xC) = sp14;
    return var_r3;
}
#pragma pop

s32 TRKTargetAccessMemory(u32 arg0, u32 arg1, s32 *arg2, s32 arg4) { return 0; } /* draft: stub */

s32 fn_8015CF8C(u32 arg0, u8 arg1, u8 arg2) {
    s32 var_r5;
    u8 temp_r31;

    temp_r31 = (arg1 + arg0) - 1;
    var_r5 = 0x700;
    if (temp_r31 < arg0) {
        return 0x700;
    }
    if ((arg0 <= (u32) M2C_FIELD(&lbl_801DB278, u32 *, 4)) && (temp_r31 >= (u32) M2C_FIELD(&lbl_801DB278, u32 *, 0))) {
        if (((arg2 == 0) && ((s32) M2C_FIELD(&lbl_801DB278, s32 *, 8) == 0)) || ((arg2 == 1) && ((s32) M2C_FIELD(&lbl_801DB278, s32 *, 0xC) == 0))) {
            var_r5 = 0x700;
        } else {
            var_r5 = 0;
            if (arg0 < (u32) M2C_FIELD(&lbl_801DB278, u32 *, 0)) {
                var_r5 = fn_8015CF8C((unsigned long)(M2C_FIELD(&lbl_801DB278, u32 *, 0) - arg0), (unsigned char)(arg2), (unsigned char)(0));
            }
            if ((var_r5 == 0) && (temp_r31 > (u32) M2C_FIELD(&lbl_801DB278, u32 *, 4))) {
                var_r5 = fn_8015CF8C((unsigned long)(temp_r31 - M2C_FIELD(&lbl_801DB278, u32 *, 4)), (unsigned char)((s32)arg2), (unsigned char)(0));
            }
        }
    }
    return var_r5;
}

void fn_8015D0B0(void) {
    M2C_ERROR(/* unknown instruction: twui $r0, 0x0 */);
}

void fn_8015D0B8(void) {
    M2C_ERROR(/* unknown instruction: twui $r0, 0x0 */);
}

void fn_8015D0C0(void) {
    M2C_ERROR(/* unknown instruction: twui $r0, 0x0 */);
}

void fn_8015D0C8(void) {
    M2C_ERROR(/* unknown instruction: twui $r0, 0x0 */);
}

void InitMetroTRK(s32 arg0, s32 arg_sp0) { } /* draft: stub */

s32 TRKInitializeTarget(void) {
    M2C_FIELD(&gTRKState, s32 *, 0x98) = 1;
    M2C_FIELD(&gTRKState, s32 *, 0x8C) = fn_8015B820(&gTRKState);
    lbl_8034BEF8 = 0xE0000000;
    return 0;
}

u32 fn_8015D1B0(u32 arg0) {
    if ((arg0 < (u32) lbl_8034BEF8) || (arg0 >= (u32) (lbl_8034BEF8 + 0x4000)) || !(M2C_FIELD(&gTRKCPUState, s32 *, 0x238) & 3)) {
        return (arg0 & 0x3FFFFFFF) | 0x80000000;
    }
    return arg0;
}

void EnableMetroTRKInterrupts(void) {
    fn_8015D8D4();
}

void TRKSaveExtended1Block(void) {
    M2C_ERROR(/* unknown instruction: mfsr $r16, 0x0 */);
    M2C_ERROR(/* unknown instruction: mfsr $r17, 0x1 */);
    M2C_ERROR(/* unknown instruction: mfsr $r18, 0x2 */);
    M2C_ERROR(/* unknown instruction: mfsr $r19, 0x3 */);
    M2C_ERROR(/* unknown instruction: mfsr $r20, 0x4 */);
    M2C_ERROR(/* unknown instruction: mfsr $r21, 0x5 */);
    M2C_ERROR(/* unknown instruction: mfsr $r22, 0x6 */);
    M2C_ERROR(/* unknown instruction: mfsr $r23, 0x7 */);
    M2C_ERROR(/* unknown instruction: mfsr $r24, 0x8 */);
    M2C_ERROR(/* unknown instruction: mfsr $r25, 0x9 */);
    M2C_ERROR(/* unknown instruction: mfsr $r26, 0xa */);
    M2C_ERROR(/* unknown instruction: mfsr $r27, 0xb */);
    M2C_ERROR(/* unknown instruction: mfsr $r28, 0xc */);
    M2C_ERROR(/* unknown instruction: mfsr $r29, 0xd */);
    M2C_ERROR(/* unknown instruction: mfsr $r30, 0xe */);
    M2C_ERROR(/* unknown instruction: mfsr $r31, 0xf */);
    M2C_ERROR(/* unknown instruction: mftb $r10, 0x10c */);
    M2C_ERROR(/* unknown instruction: mftb $r11, 0x10d */);
    M2C_ERROR(/* unknown instruction: mfspr $r12, HID0 */);
    M2C_ERROR(/* unknown instruction: mfspr $r13, HID1 */);
    M2C_ERROR(/* unknown instruction: mfsrr1 $r14 */);
    M2C_ERROR(/* unknown instruction: mfspr $r15, PVR */);
    M2C_ERROR(/* unknown instruction: mfibatu $r16, 0x0 */);
    M2C_ERROR(/* unknown instruction: mfibatl $r17, 0x0 */);
    M2C_ERROR(/* unknown instruction: mfibatu $r18, 0x1 */);
    M2C_ERROR(/* unknown instruction: mfibatl $r19, 0x1 */);
    M2C_ERROR(/* unknown instruction: mfibatu $r20, 0x2 */);
    M2C_ERROR(/* unknown instruction: mfibatl $r21, 0x2 */);
    M2C_ERROR(/* unknown instruction: mfibatu $r22, 0x3 */);
    M2C_ERROR(/* unknown instruction: mfibatl $r23, 0x3 */);
    M2C_ERROR(/* unknown instruction: mfdbatu $r24, 0x0 */);
    M2C_ERROR(/* unknown instruction: mfdbatl $r25, 0x0 */);
    M2C_ERROR(/* unknown instruction: mfdbatu $r26, 0x1 */);
    M2C_ERROR(/* unknown instruction: mfdbatl $r27, 0x1 */);
    M2C_ERROR(/* unknown instruction: mfdbatu $r28, 0x2 */);
    M2C_ERROR(/* unknown instruction: mfdbatl $r29, 0x2 */);
    M2C_ERROR(/* unknown instruction: mfdbatu $r30, 0x3 */);
    M2C_ERROR(/* unknown instruction: mfdbatl $r31, 0x3 */);
    M2C_ERROR(/* unknown instruction: mfsdr1 $r22 */);
    M2C_ERROR(/* unknown instruction: mfdar $r23 */);
    M2C_ERROR(/* unknown instruction: mfdsisr $r24 */);
    M2C_ERROR(/* unknown instruction: mfsprg $r25, 0x0 */);
    M2C_ERROR(/* unknown instruction: mfsprg $r26, 0x1 */);
    M2C_ERROR(/* unknown instruction: mfsprg $r27, 0x2 */);
    M2C_ERROR(/* unknown instruction: mfsprg $r28, 0x3 */);
    M2C_ERROR(/* unknown instruction: mfspr $r30, IABR */);
    M2C_ERROR(/* unknown instruction: mfear $r31 */);
    M2C_ERROR(/* unknown instruction: mfspr $r20, GQR0 */);
    M2C_ERROR(/* unknown instruction: mfspr $r21, GQR1 */);
    M2C_ERROR(/* unknown instruction: mfspr $r22, GQR2 */);
    M2C_ERROR(/* unknown instruction: mfspr $r23, GQR3 */);
    M2C_ERROR(/* unknown instruction: mfspr $r24, GQR4 */);
    M2C_ERROR(/* unknown instruction: mfspr $r25, GQR5 */);
    M2C_ERROR(/* unknown instruction: mfspr $r26, GQR6 */);
    M2C_ERROR(/* unknown instruction: mfspr $r27, GQR7 */);
    M2C_ERROR(/* unknown instruction: mfspr $r28, HID2 */);
    M2C_ERROR(/* unknown instruction: mfspr $r29, WPAR */);
    M2C_ERROR(/* unknown instruction: mfspr $r30, DMA_U */);
    M2C_ERROR(/* unknown instruction: mfspr $r31, DMA_L */);
    M2C_ERROR(/* unknown instruction: mfspr $r19, DABR */);
    M2C_ERROR(/* unknown instruction: mfspr $r20, PMC1 */);
    M2C_ERROR(/* unknown instruction: mfspr $r21, PMC2 */);
    M2C_ERROR(/* unknown instruction: mfspr $r22, PMC3 */);
    M2C_ERROR(/* unknown instruction: mfspr $r23, PMC4 */);
    M2C_ERROR(/* unknown instruction: mfspr $r24, SIA */);
    M2C_ERROR(/* unknown instruction: mfspr $r25, MMCR0 */);
    M2C_ERROR(/* unknown instruction: mfspr $r26, MMCR1 */);
    M2C_ERROR(/* unknown instruction: mfspr $r27, THRM1 */);
    M2C_ERROR(/* unknown instruction: mfspr $r28, THRM2 */);
    M2C_ERROR(/* unknown instruction: mfspr $r29, THRM3 */);
    M2C_ERROR(/* unknown instruction: mfspr $r30, ICTC */);
    M2C_ERROR(/* unknown instruction: mfspr $r31, L2CR */);
}

void TRKRestoreExtended1Block(void) {
    u8 temp_r3;

    temp_r3 = M2C_FIELD(&gTRKRestoreFlags, u8 *, 0);
    M2C_FIELD(&gTRKRestoreFlags, u8 *, 0) = 0U;
    M2C_FIELD(&gTRKRestoreFlags, u8 *, 1) = 0U;
    if ((s32) temp_r3 != 0) {
        M2C_ERROR(/* unknown instruction: mttbl $r24 */);
        M2C_ERROR(/* unknown instruction: mttbu $r25 */);
    }
    M2C_ERROR(/* unknown instruction: mtspr GQR0, $r20 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR1, $r21 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR2, $r22 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR3, $r23 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR4, $r24 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR5, $r25 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR6, $r26 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR7, $r27 */);
    M2C_ERROR(/* unknown instruction: mtspr HID2, $r28 */);
    M2C_ERROR(/* unknown instruction: mtspr DMA_U, $r30 */);
    M2C_ERROR(/* unknown instruction: mtspr DMA_L, $r31 */);
    M2C_ERROR(/* unknown instruction: mtspr DABR, $r19 */);
    M2C_ERROR(/* unknown instruction: mtspr PMC1, $r20 */);
    M2C_ERROR(/* unknown instruction: mtspr PMC2, $r21 */);
    M2C_ERROR(/* unknown instruction: mtspr PMC3, $r22 */);
    M2C_ERROR(/* unknown instruction: mtspr PMC4, $r23 */);
    M2C_ERROR(/* unknown instruction: mtspr SIA, $r24 */);
    M2C_ERROR(/* unknown instruction: mtspr MMCR0, $r25 */);
    M2C_ERROR(/* unknown instruction: mtspr MMCR1, $r26 */);
    M2C_ERROR(/* unknown instruction: mtspr THRM1, $r27 */);
    M2C_ERROR(/* unknown instruction: mtspr THRM2, $r28 */);
    M2C_ERROR(/* unknown instruction: mtspr THRM3, $r29 */);
    M2C_ERROR(/* unknown instruction: mtspr ICTC, $r30 */);
    M2C_ERROR(/* unknown instruction: mtspr L2CR, $r31 */);
    M2C_ERROR(/* unknown instruction: mtsr 0x0, $r16 */);
    M2C_ERROR(/* unknown instruction: mtsr 0x1, $r17 */);
    M2C_ERROR(/* unknown instruction: mtsr 0x2, $r18 */);
    M2C_ERROR(/* unknown instruction: mtsr 0x3, $r19 */);
    M2C_ERROR(/* unknown instruction: mtsr 0x4, $r20 */);
    M2C_ERROR(/* unknown instruction: mtsr 0x5, $r21 */);
    M2C_ERROR(/* unknown instruction: mtsr 0x6, $r22 */);
    M2C_ERROR(/* unknown instruction: mtsr 0x7, $r23 */);
    M2C_ERROR(/* unknown instruction: mtsr 0x8, $r24 */);
    M2C_ERROR(/* unknown instruction: mtsr 0x9, $r25 */);
    M2C_ERROR(/* unknown instruction: mtsr 0xa, $r26 */);
    M2C_ERROR(/* unknown instruction: mtsr 0xb, $r27 */);
    M2C_ERROR(/* unknown instruction: mtsr 0xc, $r28 */);
    M2C_ERROR(/* unknown instruction: mtsr 0xd, $r29 */);
    M2C_ERROR(/* unknown instruction: mtsr 0xe, $r30 */);
    M2C_ERROR(/* unknown instruction: mtsr 0xf, $r31 */);
    M2C_ERROR(/* unknown instruction: mtspr HID0, $r12 */);
    M2C_ERROR(/* unknown instruction: mtspr HID1, $r13 */);
    M2C_ERROR(/* unknown instruction: mtsrr1 $r14 */);
    M2C_ERROR(/* unknown instruction: mtspr PVR, $r15 */);
    M2C_ERROR(/* unknown instruction: mtibatu 0x0, $r16 */);
    M2C_ERROR(/* unknown instruction: mtibatl 0x0, $r17 */);
    M2C_ERROR(/* unknown instruction: mtibatu 0x1, $r18 */);
    M2C_ERROR(/* unknown instruction: mtibatl 0x1, $r19 */);
    M2C_ERROR(/* unknown instruction: mtibatu 0x2, $r20 */);
    M2C_ERROR(/* unknown instruction: mtibatl 0x2, $r21 */);
    M2C_ERROR(/* unknown instruction: mtibatu 0x3, $r22 */);
    M2C_ERROR(/* unknown instruction: mtibatl 0x3, $r23 */);
    M2C_ERROR(/* unknown instruction: mtdbatu 0x0, $r24 */);
    M2C_ERROR(/* unknown instruction: mtdbatl 0x0, $r25 */);
    M2C_ERROR(/* unknown instruction: mtdbatu 0x1, $r26 */);
    M2C_ERROR(/* unknown instruction: mtdbatl 0x1, $r27 */);
    M2C_ERROR(/* unknown instruction: mtdbatu 0x2, $r28 */);
    M2C_ERROR(/* unknown instruction: mtdbatl 0x2, $r29 */);
    M2C_ERROR(/* unknown instruction: mtdbatu 0x3, $r30 */);
    M2C_ERROR(/* unknown instruction: mtdbatl 0x3, $r31 */);
    M2C_ERROR(/* unknown instruction: mtsdr1 $r22 */);
    M2C_ERROR(/* unknown instruction: mtdar $r23 */);
    M2C_ERROR(/* unknown instruction: mtdsisr $r24 */);
    M2C_ERROR(/* unknown instruction: mtsprg 0x0, $r25 */);
    M2C_ERROR(/* unknown instruction: mtsprg 0x1, $r26 */);
    M2C_ERROR(/* unknown instruction: mtsprg 0x2, $r27 */);
    M2C_ERROR(/* unknown instruction: mtsprg 0x3, $r28 */);
    M2C_ERROR(/* unknown instruction: mtspr IABR, $r30 */);
    M2C_ERROR(/* unknown instruction: mtear $r31 */);
}

s32 fn_8015D580(void) {
    return 0x54;
}

void TRK_main(void) {
    s32 temp_r3;

    temp_r3 = TRKInitializeNub();
    TRK_mainError_8034BF00 = temp_r3;
    switch (temp_r3) {
    case 0:
            TRKNubWelcome();
            TRKNubMainLoop();
        break;
    }
    TRK_mainError_8034BF00 = TRKTerminateNub();
}

void TRKLoadContext(void *arg0, s32 arg1) {
    s32 arg7;
    s32 arg6;
    s32 arg5;
    s32 arg4;
    s32 temp_r6;
    u16 var_r5;

    var_r5 = M2C_FIELD(arg0, u16 *, 0x1A2);
    temp_r6 = var_r5 & 2;
    if (temp_r6 != 0) {
        M2C_FIELD(arg0, u16 *, 0x1A2) = (u16) (var_r5 & 0xFFFFFFFD);
    }
    M2C_ERROR(/* unknown instruction: mtcrf 0xff, $r4 */);
    M2C_ERROR(/* unknown instruction: mtxer $r4 */);
    M2C_ERROR(/* unknown instruction: mfmsr $r4 */);
    M2C_ERROR(/* unknown instruction: mtmsr $r4 */);
    M2C_ERROR(/* unknown instruction: mtsprg 0x1, $r2 */);
    M2C_ERROR(/* unknown instruction: mtsprg 0x2, $r4 */);
    M2C_ERROR(/* unknown instruction: mtsprg 0x3, $r4 */);
    TRKInterruptHandler(arg1, M2C_FIELD(arg0, s32 *, 0x19C), var_r5, temp_r6, arg4, arg5, arg6, arg7);
}
