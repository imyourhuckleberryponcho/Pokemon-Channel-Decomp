/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 fn_80157420();
M2C_UNK fn_80157E1C();
s32 fn_8015C540(u8 *);
s32 TRKAppendBuffer(void *, M2C_UNK *, M2C_UNK);
s32 fn_8015C5A0(M2C_UNK *);
s32 fn_8015C644(u8 *);
M2C_UNK fn_80005518();
M2C_UNK fn_8015709C(M2C_UNK *, M2C_UNK);
M2C_UNK TRKPostEvent(M2C_UNK *);
extern s32 lbl_8034B970;
s32 TRKGetBuffer();
s32 fn_8015786C(s32, s32 *);
s32 fn_801579EC();
s32 fn_80157C04(void *, s32);
M2C_UNK TRKSetBufferPosition(M2C_UNK);
M2C_UNK TRKReleaseBuffer(s32);
s32 TRKGetFreeBuffer(s32 *, void **);
s32 TRKAppendBuffer_ui8(void *, s32, s32);
s32 fn_80157C68(void *, u16);
s32 strlen(s32);
M2C_UNK TRKProcessInput(s32);
s32 fn_8015813C();
s32 TRKReadBuffer_ui8(void *, s32);
s32 fn_80157934(void *, u16 *);
M2C_UNK fn_8015C154(void *);
M2C_UNK fn_8015C200(void *);
extern M2C_UNK gTRKExceptionStatus_802B0F14;
M2C_UNK TRKPostInterruptEvent(s32, s32, s32, s32, s32, s32, s32, s32);
extern M2C_UNK gTRKState;
extern M2C_UNK lbl_801DB288;
extern M2C_UNK lbl_801DB2D8;
extern M2C_UNK lbl_8034BEE4;

void fn_8015A100(void *arg0);
void fn_8015A498(void *arg0);
void fn_8015A6C8(void *arg0);
s32 fn_8015A9A0(void *arg0);
s32 fn_8015AA58(void *arg0);
void fn_8015AB3C(void *arg0);
void fn_8015ABF8(void *arg0);
void fn_8015ACA8(void *arg0, s8 arg1, s8 arg2);
void fn_8015AD60(s32 arg0);
s32 fn_8015AD6C(void);
s32 fn_8015AD7C(s32 arg0, s32 *arg1, s8 arg2, s8 *arg3);
s32 fn_8015AF0C(s32 arg0, s8 *arg1);
s32 fn_8015B02C(s32 arg0, s8 arg1, s32 *arg2, s8 *arg3);
s32 fn_8015B1D4(s32 arg0, s32 *arg1, u32 arg2, s32 arg3, s32 arg4);
s32 fn_8015B378(u32 arg0, s32 arg1, u32 *arg2, u8 *arg3, s32 arg4, s32 arg5);
s32 fn_8015B63C(void);
s32 fn_8015B644(void);
s32 fn_8015B64C(void);
s32 fn_8015B654(u8 arg0);
void TRK_flush_cache(s32 arg0, s32 arg1);
void fn_8015B764(s32 arg0, u8 arg1, u32 arg2);
s32 fn_8015B820(void);
s32 fn_8015B828(void);
void TRK_ppc_memcpy(s32 arg0, s32 arg1, s32 arg2);
void TRKInterruptHandler();
s32 TRKExceptionHandler(u16 arg0);
void TRKSwapAndGo();
void TRKInterruptHandlerEnableInterrupts(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void TRKTargetSetInputPendingPtr(s32 arg0);
s32 fn_8015BBC4(void *arg0, u32 arg1, s32 arg2);
s32 fn_8015BDE0(void);
void TRKTargetSetStopped(s32 arg0);

void fn_8015A100(void *arg0) { } /* draft: stub */

void fn_8015A498(void *arg0) { } /* draft: stub */

void fn_8015A6C8(void *arg0) { } /* draft: stub */

s32 fn_8015A9A0(void *arg0) { return 0; } /* draft: stub */

s32 fn_8015AA58(void *arg0) { return 0; } /* draft: stub */

void fn_8015AB3C(void *arg0) { } /* draft: stub */

void fn_8015ABF8(void *arg0) { } /* draft: stub */

void fn_8015ACA8(void *arg0, s8 arg1, s8 arg2) { } /* draft: stub */

void fn_8015AD60(s32 arg0) {
    lbl_8034B970 = arg0;
}

s32 fn_8015AD6C(void) {
    return lbl_8034B970;
}

s32 fn_8015AD7C(s32 arg0, s32 *arg1, s8 arg2, s8 *arg3) { return 0; } /* draft: stub */

s32 fn_8015AF0C(s32 arg0, s8 *arg1) { return 0; } /* draft: stub */

s32 fn_8015B02C(s32 arg0, s8 arg1, s32 *arg2, s8 *arg3) { return 0; } /* draft: stub */

s32 fn_8015B1D4(s32 arg0, s32 *arg1, u32 arg2, s32 arg3, s32 arg4) {
    s32 saved_reg_r30;
    s32 saved_reg_r29;
    u8 sp9;
    u8 sp8;
    s32 temp_r3;
    s32 var_r27;
    s32 var_r28;
    s32 var_r31;
    u32 var_r29;
    void *var_r30;

    var_r29 = saved_reg_r29;
    /* draft: did not compile: var_r30 = saved_reg_r30; */
    var_r28 = arg3 + 1;
    var_r31 = 0;
    var_r27 = 1;
    *arg1 = -1;
loop_26:
    if ((var_r28 != 0) && ((s32) *arg1 == -1) && (var_r31 == 0)) {
        var_r31 = fn_80157420(arg0);
        if (var_r31 == 0) {
            if (arg4 != 0) {
                var_r29 = 0U;
            }
loop_4:
            *arg1 = fn_8015813C();
            temp_r3 = *arg1;
            if (temp_r3 == -1) {
                if ((arg4 == 0) || (var_r29 += 1, ((var_r29 < 0x04C4B3ECU) != 0))) {
                    goto loop_4;
                }
            }
            if (temp_r3 != -1) {
                var_r27 = 0;
                /* draft: did not compile: var_r30 = TRKGetBuffer((long)(0)); */
                TRKSetBufferPosition(0);
                var_r31 = fn_801579EC(var_r30, &sp9);
                if ((var_r31 == 0) && (sp9 < 0x80U)) {
                    TRKProcessInput(*arg1);
                    *arg1 = -1;
                    goto loop_4;
                }
            }
            if ((s32) *arg1 != -1) {
                if ((u32) M2C_FIELD(var_r30, u32 *, 8) < arg2) {
                    var_r27 = 1;
                }
                if ((var_r31 == 0) && (var_r27 == 0)) {
                    var_r31 = fn_801579EC(var_r30, &sp8);
                }
                if ((var_r31 == 0) && (var_r27 == 0) && ((sp9 != 0x80) || (sp8 != 0))) {
                    var_r27 = 1;
                }
                if ((var_r31 != 0) || (var_r27 != 0)) {
                    TRKReleaseBuffer(*arg1);
                    *arg1 = -1;
                }
            }
        }
        var_r28 -= 1;
        goto loop_26;
    }
    if ((s32) *arg1 == -1) {
        var_r31 = 0x800;
    }
    return var_r31;
}

#pragma push
#pragma optimize_for_size on
s32 fn_8015B378(u32 arg0, s32 arg1, u32 *arg2, u8 *arg3, s32 arg4, s32 arg5) {
    s32 saved_reg_r28;
    s32 sp14;
    s32 sp10;
    void *spC;
    u16 spA;
    u8 sp8;
    s32 var_r0_2;
    s32 var_r21;
    s32 var_r25;
    s32 var_r4;
    s32 var_r5;
    s32 temp_r3_2;
    s32 var_r0;
    u32 var_r31;
    u32 temp_r3;
    u32 temp_r4;
    u32 temp_r4_2;
    u8 var_r30;
    void *var_r28;

    /* draft: did not compile: var_r28 = saved_reg_r28; */
    if ((arg1 == 0) || ((u32) *arg2 == 0U)) {
        return 2;
    }
    *arg3 = 0;
    var_r30 = 0U;
    var_r21 = 0;
    var_r25 = 0;
loop_47:
    if (var_r25 == 0) {
        temp_r3 = *arg2;
        if ((var_r30 < temp_r3) && (var_r21 == 0) && ((u8) *arg3 == 0)) {
            temp_r3_2 = temp_r3 - var_r30;
            var_r0 = 0x800;
            var_r0 = temp_r3_2 > 0x800U ? var_r0 : temp_r3_2;
            var_r31 = var_r0;
            var_r21 = TRKGetFreeBuffer(&sp10, &spC);
            if (var_r21 == 0) {
                var_r5 = 0xD0;
                if (arg5 != 0) {
                    var_r5 = 0xD1;
                }
                temp_r4 = M2C_FIELD(spC, u32 *, 0xC);
                if (temp_r4 >= 0x880U) {
                    var_r4 = 0x301;
                } else {
                    M2C_FIELD(spC, u32 *, 0xC) = (u32) (temp_r4 + 1);
                    var_r4 = 0;
                    /* draft: did not compile: *(spC + (temp_r4 + 0x10)) = var_r5; */
                    M2C_FIELD(spC, s32 *, 8) = (s32) (M2C_FIELD(spC, s32 *, 8) + 1);
                }
                var_r21 = var_r4;
            }
            if (var_r21 == 0) {
                var_r21 = fn_80157C04(spC, arg0);
            }
            if (var_r21 == 0) {
                var_r21 = fn_80157C68(spC, var_r31);
            }
            if ((arg5 == 0) && (var_r21 == 0)) {
                var_r21 = TRKAppendBuffer_ui8(spC, arg1 + var_r30, var_r31);
            }
            if (var_r21 == 0) {
                if (arg4 != 0) {
                    var_r0_2 = 0;
                    spA = 0;
                    sp8 = 0;
                    if ((arg5 != 0) && (arg0 == 0U)) {
                        var_r0_2 = 1;
                    }
                    /* draft: did not compile: var_r21 = fn_8015B1D4(spC, &sp14, 5, 3, var_r0_2 == 0); */
                    switch (var_r21) {
                    case 0:
                            /* draft: did not compile: var_r28 = TRKGetBuffer(sp14); */
                            TRKSetBufferPosition(2);
                        break;
                    }
                    if (var_r21 == 0) {
                        var_r21 = fn_801579EC(var_r28, &sp8);
                    }
                    if (var_r21 == 0) {
                        var_r21 = fn_80157934(var_r28, &spA);
                    }
                    if ((arg5 != 0) && (var_r21 == 0)) {
                        temp_r4_2 = M2C_FIELD(var_r28, u32 *, 8);
                        if (temp_r4_2 != (u32) (spA + 5)) {
                            spA = temp_r4_2 - 5;
                            if (sp8 == 0) {
                                sp8 = 1;
                            }
                        }
                        if (spA <= var_r31) {
                            var_r21 = TRKReadBuffer_ui8(var_r28, arg1 + var_r30);
                        }
                    }
                    if (spA != var_r31) {
                        if (((arg5 == 0) || (spA >= var_r31)) && (sp8 == 0)) {
                            sp8 = 1;
                        }
                        var_r31 = spA;
                        var_r25 = 1;
                    }
                    *arg3 = sp8;
                    TRKReleaseBuffer(sp14);
                } else {
                    var_r21 = fn_80157420(spC);
                }
            }
            TRKReleaseBuffer(sp10);
            var_r30 = var_r30 + var_r31;
            goto loop_47;
        }
    }
    *arg2 = var_r30;
    return var_r21;
}
#pragma pop

s32 fn_8015B63C(void) {
    return 0;
}

s32 fn_8015B644(void) {
    return 0;
}

s32 fn_8015B64C(void) {
    return 0;
}

s32 fn_8015B654(u8 arg0) { return 0; } /* draft: stub */

void TRK_flush_cache(s32 arg0, s32 arg1) {
    s8 var_r4;
    u8 var_r5;

    var_r5 = 0xFFFFFFF1 & arg0;
    var_r4 = arg1;
    var_r4 += (arg0 - var_r5);
    do {
        M2C_DCACHE_CLEAN(var_r5);
        M2C_DCACHE_CLEAN_INVALIDATE(var_r5);
        M2C_SYNC();
        M2C_ICACHE_INVALIDATE(var_r5);
        var_r5 += 8;
        var_r4 -= 8;
    } while (var_r4 >= 0);
    M2C_SYNC();
}

void fn_8015B764(s32 arg0, u8 arg1, u32 arg2) {
    s32 var_r3;
    s32 var_r4_2;
    s32 var_r6;
    u32 var_r4;
    u32 var_r5;
    u32 var_r7;
    void *var_r3_2;

    var_r5 = arg2;
    var_r6 = arg0;
    var_r6 -= 1;
    var_r7 = arg1;
    if (var_r5 >= 0x20U) {
        var_r3 = ~(var_r6 | var_r6) & 3;
        if (var_r3 != 0) {
            var_r5 -= var_r3;
            do {
                var_r3 -= 1;
                M2C_FIELD(var_r6, u8 *, 1) = var_r7;
                var_r6 += 1;
            } while (var_r3 != 0);
        }
        if (var_r7 != 0) {
            var_r7 |= (var_r7 << 8) | ((var_r7 << 0x18) | (var_r7 << 0x10));
        }
        var_r4 = var_r5 >> 5U;
        /* draft: did not compile: var_r3_2 = var_r6 - 3; */
        if (var_r4 != 0) {
            do {
                M2C_FIELD(var_r3_2, s32 *, 4) = (s32) var_r7;
                var_r4 -= 1;
                M2C_FIELD(var_r3_2, s32 *, 8) = (s32) var_r7;
                M2C_FIELD(var_r3_2, s32 *, 0xC) = (s32) var_r7;
                M2C_FIELD(var_r3_2, s32 *, 0x10) = (s32) var_r7;
                M2C_FIELD(var_r3_2, s32 *, 0x14) = (s32) var_r7;
                M2C_FIELD(var_r3_2, s32 *, 0x18) = (s32) var_r7;
                M2C_FIELD(var_r3_2, s32 *, 0x1C) = (s32) var_r7;
                /* draft: did not compile: var_r3_2 += 0x20; */
                M2C_FIELD(var_r3_2, s32 *, 0x20) = (s32) var_r7;
            } while (var_r4 != 0);
        }
        var_r4_2 = (var_r5 >> 2U) & 7;
        if (var_r4_2 != 0) {
            do {
                var_r4_2 -= 1;
                /* draft: did not compile: var_r3_2 += 4; */
                M2C_FIELD(var_r3_2, s32 *, 4) = (s32) var_r7;
            } while (var_r4_2 != 0);
        }
        /* draft: did not compile: var_r6 = (s32) (var_r3_2 + 3); */
        var_r5 &= 3;
    }
    if (var_r5 != 0) {
        do {
            var_r5 -= 1;
            M2C_FIELD(var_r6, u8 *, 1) = var_r7;
            var_r6 += 1;
        } while (var_r5 != 0);
    }
}

s32 fn_8015B820(void) {
    return M2C_ERROR(/* unknown instruction: mfmsr $r3 */);
}

s32 fn_8015B828(void) {
    return M2C_ERROR(/* unknown instruction: mtmsr $r3 */);
}

void TRK_ppc_memcpy(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r10;

    M2C_ERROR(/* unknown instruction: mfmsr $r8 */);
    var_r10 = 0;
loop_1:
    if (var_r10 != arg2) {
        M2C_ERROR(/* unknown instruction: mtmsr $r7 */);
        M2C_SYNC();
        M2C_ERROR(/* unknown instruction: mtmsr $r6 */);
        M2C_SYNC();
        /* draft: did not compile: *(var_r10 + arg0) = *(var_r10 + arg1); */
        var_r10 += 1;
        goto loop_1;
    }
    M2C_ERROR(/* unknown instruction: mtmsr $r8 */);
    M2C_SYNC();
}

void TRKInterruptHandler() { } /* draft: stub */

s32 TRKExceptionHandler(u16 arg0) {
    M2C_FIELD(&gTRKExceptionStatus_802B0F14, u16 *, 8) = arg0;
    M2C_FIELD(&gTRKExceptionStatus_802B0F14, s32 *, 0) = (s32) M2C_ERROR(/* unknown instruction: mfsrr0 $r3 */);
    if (((s32) M2C_FIELD(&gTRKExceptionStatus_802B0F14, u16 *, 8) != 0x200) && ((s32) M2C_FIELD(&gTRKExceptionStatus_802B0F14, u16 *, 8) != 0x300) && ((s32) M2C_FIELD(&gTRKExceptionStatus_802B0F14, u16 *, 8) != 0x400) && ((s32) M2C_FIELD(&gTRKExceptionStatus_802B0F14, u16 *, 8) != 0x600) && ((s32) M2C_FIELD(&gTRKExceptionStatus_802B0F14, u16 *, 8) != 0x700) && ((s32) M2C_FIELD(&gTRKExceptionStatus_802B0F14, u16 *, 8) != 0x800) && ((s32) M2C_FIELD(&gTRKExceptionStatus_802B0F14, u16 *, 8) != 0x1000) && ((s32) M2C_FIELD(&gTRKExceptionStatus_802B0F14, u16 *, 8) != 0x1100) && ((s32) M2C_FIELD(&gTRKExceptionStatus_802B0F14, u16 *, 8) != 0x1200) && ((s32) M2C_FIELD(&gTRKExceptionStatus_802B0F14, u16 *, 8) != 0x1300)) {

    } else {
        M2C_ERROR(/* unknown instruction: mfsrr0 $r3 */);
        M2C_ERROR(/* unknown instruction: mtsrr0 $r3 */);
    }
    M2C_FIELD(&gTRKExceptionStatus_802B0F14, s8 *, 0xD) = 1;
    M2C_ERROR(/* unknown instruction: mfsprg $r3, 0x3 */);
    M2C_ERROR(/* unknown instruction: mtcrf 0xff, $r3 */);
    M2C_ERROR(/* unknown instruction: mfsprg $r2, 0x1 */);
    M2C_ERROR(/* unknown instruction: rfi */);
    return M2C_ERROR(/* unknown instruction: mfsprg $r3, 0x2 */);
}

void TRKSwapAndGo() { } /* draft: stub */

void TRKInterruptHandlerEnableInterrupts(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: mtmsr $r0 */);
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: mtxer $r0 */);
    M2C_ERROR(/* unknown instruction: mtdsisr $r0 */);
    M2C_ERROR(/* unknown instruction: mtdar $r0 */);
    TRKPostInterruptEvent(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void TRKTargetSetInputPendingPtr(s32 arg0) {
    M2C_FIELD(&gTRKState, s32 *, 0xA0) = arg0;
}

#pragma push
#pragma peephole off
s32 fn_8015BBC4(void *arg0, u32 arg1, s32 arg2) {
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
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r0;
    s32 var_r4;

    sp30 = M2C_FIELD(&lbl_801DB2D8, s32 *, 0);
    sp34 = M2C_FIELD(&lbl_801DB2D8, s32 *, 4);
    sp38 = M2C_FIELD(&lbl_801DB2D8, s32 *, 8);
    sp3C = M2C_FIELD(&lbl_801DB2D8, s32 *, 0xC);
    sp40 = M2C_FIELD(&lbl_801DB2D8, s32 *, 0x10);
    sp44 = M2C_FIELD(&lbl_801DB2D8, s32 *, 0x14);
    sp48 = M2C_FIELD(&lbl_801DB2D8, s32 *, 0x18);
    sp4C = M2C_FIELD(&lbl_801DB2D8, s32 *, 0x1C);
    sp50 = M2C_FIELD(&lbl_801DB2D8, s32 *, 0x20);
    sp54 = M2C_FIELD(&lbl_801DB2D8, s32 *, 0x24);
    if (arg1 < 0x20U) {
        temp_r0 = arg1 << 0x15;
        var_r4 = temp_r0 | 0xC8030000;
        if (arg2 != 0) {
            var_r4 = temp_r0 | 0xD8030000;
        }
        sp30 = var_r4;
        sp54 = 0x4E800020;
        /* draft: did not compile: TRK_flush_cache(&sp30, 0x28); */
        ((M2C_UNK (*)(void *, M2C_UNK *)) &sp30)(arg0, &lbl_8034BEE4);
        return 0;
    }
    if (arg1 == 0x20) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & ~0);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & 0);
        return 0;
    }
    if (arg1 == 0x21) {
        if (arg2 == 0) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 4);
        }
        sp8 = M2C_FIELD(&lbl_801DB288, s32 *, 0);
        spC = M2C_FIELD(&lbl_801DB288, s32 *, 4);
        sp10 = M2C_FIELD(&lbl_801DB288, s32 *, 8);
        sp14 = M2C_FIELD(&lbl_801DB288, s32 *, 0xC);
        sp18 = M2C_FIELD(&lbl_801DB288, s32 *, 0x10);
        sp1C = M2C_FIELD(&lbl_801DB288, s32 *, 0x14);
        sp20 = M2C_FIELD(&lbl_801DB288, s32 *, 0x18);
        sp24 = M2C_FIELD(&lbl_801DB288, s32 *, 0x1C);
        sp28 = M2C_FIELD(&lbl_801DB288, s32 *, 0x20);
        sp2C = M2C_FIELD(&lbl_801DB288, s32 *, 0x24);
        if (arg2 != 0) {
            spC = 0x90830000;
            sp8 = 0x7C9EFAA6;
        } else {
            sp8 = 0x80830000;
            spC = 0x7C9EFBA6;
        }
        sp2C = 0x4E800020;
        /* draft: did not compile: TRK_flush_cache(&sp8, 0x28); */
        ((M2C_UNK (*)(void *, M2C_UNK *)) &sp8)(arg0, &lbl_8034BEE4);
        if (arg2 != 0) {
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~0);
            M2C_FIELD(arg0, s32 *, 0) = (s32) (0 & 0);
        }
    }
    return 0;
}
#pragma pop

s32 fn_8015BDE0(void) {
    M2C_FIELD(&gTRKState, s32 *, 0x98) = 1;
    return 0;
}

void TRKTargetSetStopped(s32 arg0) {
    M2C_FIELD(&gTRKState, s32 *, 0x98) = arg0;
}
