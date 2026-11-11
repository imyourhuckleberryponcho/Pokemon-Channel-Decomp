/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK TRK_memcpy();
M2C_UNK fn_8015B63C(M2C_UNK *);
M2C_UNK fn_8015B644();
extern M2C_UNK lbl_80349F70;
M2C_UNK fn_8015B64C(M2C_UNK *);
M2C_UNK TRK_board_display();
s32 TRKInitializeDispatcher();
s32 TRKInitializeIntDrivenUART(M2C_UNK, M2C_UNK, M2C_UNK, s32 *);
s32 TRKInitializeTarget();
M2C_UNK TRKTargetSetInputPendingPtr(s32, s32 *);
extern s32 gTRKBigEndian;
extern s32 gTRKInputPendingPtr;
s32 fn_8015D7CC(s8);
M2C_UNK fn_8015D7F4();
M2C_UNK fn_80003590();
extern M2C_UNK lbl_80349FA0;
M2C_UNK fn_801583F8(M2C_UNK *);
extern M2C_UNK lbl_801DB258;
extern M2C_UNK lbl_8034B954;
M2C_UNK fn_8015709C(M2C_UNK *, M2C_UNK);
M2C_UNK fn_8015ACA8(void *, M2C_UNK, M2C_UNK);
s32 fn_8015D6DC(u8 *);

s32 TRKPostEvent(s32 arg0);
s32 TRKGetNextEvent(s32 arg0);
s32 TRKInitializeEventQueue(void);
void TRKNubWelcome(void);
s32 TRKTerminateNub(void);
s32 TRKInitializeNub(void);
void fn_80157420(void *arg0);
void TRKReadBuffer_ui32(void *arg0, M2C_UNK *arg1, s32 arg2);
void TRKReadBuffer_ui8(void *arg0, s32 arg1, s32 arg2);
s32 TRKReadBuffer1_ui64(void *arg0, M2C_UNK *arg1);
s32 fn_8015786C(void *arg0, M2C_UNK *arg1);
s32 fn_80157934(void *arg0, M2C_UNK *arg1);
s32 fn_801579EC(void *arg0, s32 arg1);
void fn_80157A6C(s32 arg0, s32 *arg1, s32 arg2);
s32 TRKAppendBuffer_ui8(void *arg0, u8 *arg1, s32 arg2);
void fn_80157B7C(s32 arg2, s32 arg3);
void fn_80157C04(s32 arg1);
void fn_80157C68(s16 arg1);
s32 TRKReadBuffer(void *arg0, s32 arg1, u32 arg2);
s32 TRKAppendBuffer(void *arg0, u8 *arg1, u32 arg2);
s32 TRKSetBufferPosition(void *arg0, u32 arg1);
void fn_80157E1C(void *arg0, u8 arg1);
void TRKReleaseBuffer(s32 arg0);
void *TRKGetBuffer(s32 arg0);
s32 TRKGetFreeBuffer(s32 *arg0, void **arg1);
s32 TRKInitializeMessageBuffers(void);
s32 fn_80158028(void);
s32 TRKInitializeSerialHandler(void);
void TRKProcessInput(s32 arg0);
void TRKGetInput(void);
s32 fn_8015813C(void);
void usr_put_initialize(void);

s32 TRKPostEvent(s32 arg0) {
    s32 temp_r29;
    s32 var_r31;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r3;

    var_r31 = 0;
    fn_8015B644(&lbl_80349F70, &lbl_80349F70);
    if ((s32) M2C_FIELD(&lbl_80349F70, s32 *, 4) == 2) {
        var_r31 = 0x100;
    } else {
        temp_r0 = M2C_FIELD(&lbl_80349F70, s32 *, 8) + M2C_FIELD(&lbl_80349F70, s32 *, 4);
        temp_r3 = temp_r0 >> 0x1FU;
        temp_r29 = (((temp_r0 & 1) ^ temp_r3) - temp_r3);
        temp_r29 *= 0xC;
        TRK_memcpy(&lbl_80349F70 + temp_r29 + 0xC, arg0, 0xC);
        M2C_FIELD((&lbl_80349F70 + temp_r29), u32 *, 0x10) = (u32) M2C_FIELD(&lbl_80349F70, u32 *, 0x24);
        temp_r0_2 = M2C_FIELD(&lbl_80349F70, u32 *, 0x24) + 1;
        M2C_FIELD(&lbl_80349F70, u32 *, 0x24) = temp_r0_2;
        if (temp_r0_2 < 0x100U) {
            M2C_FIELD(&lbl_80349F70, u32 *, 0x24) = 0x100U;
        }
        M2C_FIELD(&lbl_80349F70, s32 *, 4) = (s32) (M2C_FIELD(&lbl_80349F70, s32 *, 4) + 1);
    }
    fn_8015B63C(&lbl_80349F70);
    return var_r31;
}

s32 TRKGetNextEvent(s32 arg0) { return 0; } /* draft: stub */

s32 TRKInitializeEventQueue(void) {
    fn_8015B64C(&lbl_80349F70);
    fn_8015B644((long *)(&lbl_80349F70), (long *)(0));
    M2C_FIELD(&lbl_80349F70, s32 *, 4) = 0;
    M2C_FIELD(&lbl_80349F70, s32 *, 8) = 0;
    M2C_FIELD(&lbl_80349F70, s32 *, 0x24) = 0x100;
    fn_8015B63C((long *)(&lbl_80349F70));
    return 0;
}

void TRKNubWelcome(void) {
    /* draft: did not compile: TRK_board_display(&@62_801DB238); */
}

s32 TRKTerminateNub(void) {
    fn_80158028();
    return 0;
}

s32 TRKInitializeNub(void) {
    s8 spB;
    s8 spA;
    s8 sp9;
    s8 sp8;
    s32 temp_r30;
    s32 var_r31;

    sp8 = 0x12;
    var_r31 = 0;
    sp9 = 0x34;
    spA = 0x56;
    spB = 0x78;
    gTRKBigEndian = 1;
    if ((u32) ((s32) sp8 + 0xEDCC0000) == 0x5678U) {
        gTRKBigEndian = 1;
    } else if ((u32) ((s32) sp8 + 0x87AA0000) == 0x3412U) {
        gTRKBigEndian = 0;
    } else {
        var_r31 = 1;
    }
    if (var_r31 == 0) {
        usr_put_initialize();
    }
    if (var_r31 == 0) {
        var_r31 = TRKInitializeEventQueue();
    }
    if (var_r31 == 0) {
        var_r31 = TRKInitializeMessageBuffers();
    }
    if (var_r31 == 0) {
        var_r31 = TRKInitializeDispatcher();
    }
    if (var_r31 == 0) {
        temp_r30 = TRKInitializeIntDrivenUART(0xE100, 1, 0, &gTRKInputPendingPtr);
        TRKTargetSetInputPendingPtr(gTRKInputPendingPtr, &gTRKInputPendingPtr);
        if (temp_r30 != 0) {
            var_r31 = temp_r30;
        }
    }
    if (var_r31 == 0) {
        var_r31 = TRKInitializeSerialHandler();
    }
    if (var_r31 == 0) {
        var_r31 = TRKInitializeTarget();
    }
    return var_r31;
}

void fn_80157420(void *arg0) {
    s32 temp_r0;
    s32 temp_r9;
    s8 var_ctr_2;
    s32 var_r3_2;
    u32 temp_r4;
    u32 temp_r8;
    u32 var_ctr;
    u32 var_r29;
    u32 var_r3;
    u8 temp_r0_2;
    u8 var_r28;
    u8 var_r28_2;
    u8 var_r5;
    void *temp_r9_2;

    var_r5 = 0;
    temp_r8 = M2C_FIELD(arg0, u32 *, 8);
    var_r3 = 0U;
    if (temp_r8 > 0U) {
        temp_r4 = temp_r8 - 8;
        if (temp_r8 > 8U) {
            var_ctr = (u32) (temp_r4 + 7) >> 3U;
            if (temp_r4 > 0U) {
                do {
                    temp_r9 = var_r3 + 0x10;
                    var_r3 += 8;
                    /* draft: did not compile: temp_r9_2 = arg0 + temp_r9; */
                    var_r5 = (u8) ((u8) ((u8) ((u8) ((u8) ((u8) ((var_r5 + M2C_FIELD(temp_r9_2, u8 *, 0)) + M2C_FIELD(temp_r9_2, u8 *, 1)) + M2C_FIELD(temp_r9_2, u8 *, 2)) + M2C_FIELD(temp_r9_2, u8 *, 3)) + M2C_FIELD(temp_r9_2, u8 *, 4)) + M2C_FIELD(temp_r9_2, u8 *, 5)) + M2C_FIELD(temp_r9_2, u8 *, 6)) + M2C_FIELD(temp_r9_2, u8 *, 7);
                    var_ctr -= 1;
                } while (var_ctr != 0);
            }
        }
        var_ctr_2 = temp_r8 - var_r3;
        if (var_r3 < temp_r8) {
            do {
                temp_r0 = var_r3 + 0x10;
                var_r3 += 1;
                /* draft: did not compile: var_r5 += *(arg0 + temp_r0); */
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
    temp_r0_2 = var_r5 ^ 0xFF;
    var_r3_2 = fn_8015D7CC(0x7E);
    if (var_r3_2 == 0) {
        var_r29 = 0U;
loop_13:
        if (var_r29 < (u32) M2C_FIELD(arg0, u32 *, 8)) {
            /* draft: did not compile: var_r28 = *(arg0 + (var_r29 + 0x10)); */
            if (((var_r28 != 0x7E) && (var_r28 != 0x7D)) || (var_r3_2 = fn_8015D7CC(0x7D), var_r28 ^= 0x20, ((var_r3_2 == 0) != 0))) {
                var_r3_2 = fn_8015D7CC((s8) var_r28);
                if (var_r3_2 == 0) {
                    var_r29 += 1;
                    goto loop_13;
                }
            }
        }
    }
    if ((var_r3_2 == 0) && (((var_r28_2 = temp_r0_2, ((temp_r0_2 == 0x7E) == 0)) && (temp_r0_2 != 0x7D)) || (var_r3_2 = fn_8015D7CC(0x7D), var_r28_2 ^= 0x20, ((var_r3_2 == 0) != 0)))) {
        var_r3_2 = fn_8015D7CC((s8) var_r28_2);
    }
    if (var_r3_2 == 0) {
        var_r3_2 = fn_8015D7CC(0x7E);
    }
    if (var_r3_2 == 0) {
        fn_8015D7F4();
    }
}

void TRKReadBuffer_ui32(void *arg0, M2C_UNK *arg1, s32 arg2) {
    M2C_UNK sp8;
    M2C_UNK *var_r25;
    M2C_UNK *var_r31;
    s32 temp_r3;
    s32 var_r26;
    s32 var_r30;
    s32 var_r3;
    u32 temp_r0;
    u32 var_r24;

    var_r31 = arg1;
    var_r30 = 0;
    var_r3 = 0;
loop_10:
    if ((var_r3 == 0) && (var_r30 < arg2)) {
        if ((s32) gTRKBigEndian != 0) {
            var_r25 = var_r31;
        } else {
            var_r25 = &sp8;
        }
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xC);
        var_r24 = 4U;
        var_r26 = 0;
        temp_r0 = M2C_FIELD(arg0, s32 *, 8) - temp_r3;
        if (temp_r0 < 4U) {
            var_r26 = 0x302;
            var_r24 = temp_r0;
        }
        /* draft: did not compile: TRK_memcpy(var_r25, arg0 + (temp_r3 + 0x10), var_r24); */
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + var_r24);
        if (((s32) gTRKBigEndian == 0) && (var_r26 == 0)) {
            M2C_FIELD(var_r31, u8 *, 0) = (u8) M2C_FIELD(var_r25, u8 *, 3);
            M2C_FIELD(var_r31, u8 *, 1) = (u8) M2C_FIELD(var_r25, u8 *, 2);
            M2C_FIELD(var_r31, u8 *, 2) = (u8) M2C_FIELD(var_r25, u8 *, 1);
            M2C_FIELD(var_r31, u8 *, 3) = (u8) M2C_FIELD(var_r25, u8 *, 0);
        }
        var_r3 = var_r26;
        var_r31 += 4;
        var_r30 += 1;
        goto loop_10;
    }
}

void TRKReadBuffer_ui8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r29;
    s32 var_r31;
    s32 var_r3;
    u32 temp_r0;
    u32 var_r30;

    var_r29 = 0;
    var_r3 = 0;
loop_4:
    if ((var_r3 == 0) && (var_r29 < arg2)) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xC);
        var_r30 = 1U;
        var_r31 = 0;
        temp_r0 = M2C_FIELD(arg0, s32 *, 8) - temp_r3;
        if (temp_r0 < 1U) {
            var_r31 = 0x302;
            var_r30 = temp_r0;
        }
        /* draft: did not compile: TRK_memcpy(arg1 + var_r29, arg0 + (temp_r3 + 0x10), var_r30); */
        var_r3 = var_r31;
        var_r29 += 1;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + var_r30);
        goto loop_4;
    }
}

s32 TRKReadBuffer1_ui64(void *arg0, M2C_UNK *arg1) {
    M2C_UNK sp8;
    M2C_UNK *var_r31;
    s32 temp_r3;
    s32 var_r29;
    u32 temp_r0;
    u32 var_r28;

    if ((s32) gTRKBigEndian != 0) {
        var_r31 = arg1;
    } else {
        var_r31 = &sp8;
    }
    temp_r3 = M2C_FIELD((s32)arg0, s32 *, 0xC);
    var_r28 = 8U;
    var_r29 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 8) - temp_r3;
    if (temp_r0 < 8U) {
        var_r28 = temp_r0;
        var_r29 = 0x302;
    }
    /* draft: did not compile: TRK_memcpy(var_r31, arg0 + (temp_r3 + 0x10), var_r28); */
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + var_r28);
    if (((s32) gTRKBigEndian == 0) && (var_r29 == 0)) {
        M2C_FIELD(arg1, u8 *, 0) = (u8) M2C_FIELD(var_r31, u8 *, 7);
        M2C_FIELD(arg1, u8 *, 1) = (u8) M2C_FIELD(var_r31, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 2) = (u8) M2C_FIELD(var_r31, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 3) = (u8) M2C_FIELD(var_r31, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 4) = (u8) M2C_FIELD(var_r31, u8 *, 3);
        M2C_FIELD(arg1, u8 *, 5) = (u8) M2C_FIELD(var_r31, u8 *, 2);
        M2C_FIELD(arg1, u8 *, 6) = (u8) M2C_FIELD(var_r31, u8 *, 1);
        M2C_FIELD(arg1, u8 *, 7) = (u8) M2C_FIELD(var_r31, u8 *, 0);
    }
    return var_r29;
}

s32 fn_8015786C(void *arg0, M2C_UNK *arg1) {
    M2C_UNK sp8;
    M2C_UNK *var_r28;
    s32 temp_r3;
    s32 var_r30;
    u32 temp_r0;
    u32 var_r29;

    if ((s32) gTRKBigEndian != 0) {
        var_r28 = arg1;
    } else {
        var_r28 = &sp8;
    }
    temp_r3 = M2C_FIELD((s32)arg0, s32 *, 0xC);
    var_r29 = 4U;
    var_r30 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 8) - temp_r3;
    if (temp_r0 < 4U) {
        var_r29 = temp_r0;
        var_r30 = 0x302;
    }
    /* draft: did not compile: TRK_memcpy(var_r28, arg0 + (temp_r3 + 0x10), var_r29); */
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + var_r29);
    if (((s32) gTRKBigEndian == 0) && (var_r30 == 0)) {
        M2C_FIELD(arg1, u8 *, 0) = (u8) M2C_FIELD(var_r28, u8 *, 3);
        M2C_FIELD(arg1, u8 *, 1) = (u8) M2C_FIELD(var_r28, u8 *, 2);
        M2C_FIELD(arg1, u8 *, 2) = (u8) M2C_FIELD(var_r28, u8 *, 1);
        M2C_FIELD(arg1, u8 *, 3) = (u8) M2C_FIELD(var_r28, u8 *, 0);
    }
    return var_r30;
}

s32 fn_80157934(void *arg0, M2C_UNK *arg1) {
    M2C_UNK sp8;
    M2C_UNK *var_r29;
    s32 temp_r3;
    s32 var_r31;
    u32 temp_r0;
    u32 var_r30;

    if ((s32) gTRKBigEndian != 0) {
        var_r29 = arg1;
    } else {
        var_r29 = &sp8;
    }
    temp_r3 = M2C_FIELD((s32)arg0, s32 *, 0xC);
    var_r30 = 2U;
    var_r31 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 8) - temp_r3;
    if (temp_r0 < 2U) {
        var_r30 = temp_r0;
        var_r31 = 0x302;
    }
    /* draft: did not compile: TRK_memcpy(var_r29, arg0 + (temp_r3 + 0x10), var_r30); */
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + var_r30);
    if (((s32) gTRKBigEndian == 0) && (var_r31 == 0)) {
        M2C_FIELD(arg1, u8 *, 0) = (u8) M2C_FIELD(var_r29, u8 *, 1);
        M2C_FIELD(arg1, u8 *, 1) = (u8) M2C_FIELD(var_r29, u8 *, 0);
    }
    return var_r31;
}

s32 fn_801579EC(void *arg0, s32 arg1) {
    s32 temp_r5;
    s32 var_r31;
    u32 temp_r0;
    u32 var_r30;

    var_r31 = 0;
    var_r30 = 1U;
    temp_r5 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_r0 = M2C_FIELD(arg0, s32 *, 8) - temp_r5;
    if (temp_r0 < 1U) {
        var_r31 = 0x302;
        var_r30 = temp_r0;
    }
    /* draft: did not compile: TRK_memcpy(arg1, arg0 + (temp_r5 + 0x10), var_r30); */
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + var_r30);
    return var_r31;
}

void fn_80157A6C(s32 arg0, s32 *arg1, s32 arg2) {
    s32 unksp9;
    s32 unkspA;
    s32 unkspB;
    u8 spF;
    u8 spE;
    u8 spD;
    u8 spC;
    s32 sp8;
    s32 *var_r30;
    s32 *var_r4;
    s32 var_r29;
    s32 var_r3;

    var_r30 = arg1;
    var_r29 = 0;
    var_r3 = 0;
loop_5:
    if ((var_r3 == 0) && (var_r29 < arg2)) {
        sp8 = *var_r30;
        if ((s32) gTRKBigEndian != 0) {
            var_r4 = &sp8;
        } else {
            var_r4 = (s32 *) &spC;
            spC = unkspB;
            spD = unkspA;
            spE = unksp9;
            spF = (u8) sp8;
        }
        /* draft: did not compile: var_r3 = TRKAppendBuffer(arg0, (u8 *) var_r4, 4); */
        var_r30 += 4;
        var_r29 += 1;
        goto loop_5;
    }
}

s32 TRKAppendBuffer_ui8(void *arg0, u8 *arg1, s32 arg2) {
    s32 var_r0;
    s32 var_r7;
    s32 var_r9;
    u32 temp_r7;
    u8 *var_r4;

    var_r4 = arg1;
    var_r9 = 0;
    var_r0 = 0;
loop_5:
    if ((var_r0 == 0) && (var_r9 < arg2)) {
        temp_r7 = M2C_FIELD(arg0, u32 *, 0xC);
        if (temp_r7 >= 0x880U) {
            var_r7 = 0x301;
        } else {
            M2C_FIELD(arg0, u32 *, 0xC) = (u32) (temp_r7 + 1);
            var_r7 = 0;
            /* draft: did not compile: *(arg0 + (temp_r7 + 0x10)) = *var_r4; */
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
        }
        var_r0 = var_r7;
        var_r9 += 1;
        var_r4 += 1;
        goto loop_5;
    }
    return var_r0;
}

void fn_80157B7C(s32 arg2, s32 arg3) {
    s32 unksp9;
    s32 unkspA;
    s32 unkspB;
    s32 unkspD;
    s32 unkspE;
    s32 unkspF;
    u8 sp17;
    u8 sp16;
    u8 sp15;
    u8 sp14;
    u8 sp13;
    u8 sp12;
    u8 sp11;
    u8 sp10;
    s32 spC;
    s32 sp8;
    s32 *var_r4;

    sp8 = arg2;
    spC = arg3;
    if ((s32) gTRKBigEndian != 0) {
        var_r4 = &sp8;
    } else {
        var_r4 = (s32 *) &sp10;
        sp10 = unkspF;
        sp11 = unkspE;
        sp12 = unkspD;
        sp13 = (u8) spC;
        sp14 = unkspB;
        sp15 = unkspA;
        sp16 = unksp9;
        sp17 = (u8) sp8;
    }
    /* draft: did not compile: TRKAppendBuffer((u8 *) var_r4, 8); */
}

void fn_80157C04(s32 arg1) {
    s32 unksp9;
    s32 unkspA;
    s32 unkspB;
    u8 spF;
    u8 spE;
    u8 spD;
    u8 spC;
    s32 sp8;
    s32 *var_r4;

    sp8 = arg1;
    if ((s32) gTRKBigEndian != 0) {
        var_r4 = &sp8;
    } else {
        var_r4 = (s32 *) &spC;
        spC = unkspB;
        spD = unkspA;
        spE = unksp9;
        spF = (u8) sp8;
    }
    /* draft: did not compile: TRKAppendBuffer((u8 *) var_r4, 4); */
}

void fn_80157C68(s16 arg1) {
    s32 unksp9;
    u8 spD;
    u8 spC;
    s16 sp8;
    s16 *var_r4;

    sp8 = arg1;
    if ((s32) gTRKBigEndian != 0) {
        var_r4 = &sp8;
    } else {
        var_r4 = (s16 *) &spC;
        spC = unksp9;
        spD = (u8) sp8;
    }
    /* draft: did not compile: TRKAppendBuffer((u8 *) var_r4, 2); */
}

s32 TRKReadBuffer(void *arg0, s32 arg1, u32 arg2) {
    s32 temp_r4;
    s32 var_r31;
    u32 temp_r0;
    u32 var_r30;

    var_r31 = 0;
    var_r30 = arg2;
    if (var_r30 == 0U) {
        return 0;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_r0 = M2C_FIELD(arg0, s32 *, 8) - temp_r4;
    if (var_r30 > temp_r0) {
        var_r31 = 0x302;
        var_r30 = temp_r0;
    }
    /* draft: did not compile: TRK_memcpy(arg1, arg0 + (temp_r4 + 0x10), var_r30); */
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + var_r30);
    return var_r31;
}

s32 TRKAppendBuffer(void *arg0, u8 *arg1, u32 arg2) { return 0; } /* draft: stub */

s32 TRKSetBufferPosition(void *arg0, u32 arg1) {
    s32 var_r5;

    var_r5 = 0;
    if (arg1 > 0x880U) {
        var_r5 = 0x301;
    } else {
        M2C_FIELD(arg0, u32 *, 0xC) = arg1;
        if (arg1 > (u32) M2C_FIELD(arg0, u32 *, 8)) {
            M2C_FIELD(arg0, u32 *, 8) = arg1;
        }
    }
    return var_r5;
}

void fn_80157E1C(void *arg0, u8 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    if (arg1 == 0) {
        /* draft: did not compile: fn_80003590(arg0 + 0x10, 0, 0x880); */
    }
}

void TRKReleaseBuffer(s32 arg0) {
    s32 temp_r4;
    void *temp_r31;

    if ((arg0 != -1) && (arg0 >= 0) && (arg0 < 3)) {
        temp_r4 = arg0 * 0x890;
        temp_r31 = &lbl_80349FA0 + temp_r4;
        fn_8015B644(temp_r31, temp_r4);
        M2C_FIELD(temp_r31, s32 *, 4) = 0;
        fn_8015B63C(temp_r31);
    }
}

void *TRKGetBuffer(s32 arg0) {
    void *var_r0;

    var_r0 = NULL;
    if ((arg0 >= 0) && (arg0 < 3)) {
        var_r0 = &lbl_80349FA0 + (arg0 * 0x890);
    }
    return var_r0;
}

s32 TRKGetFreeBuffer(s32 *arg0, void **arg1) {
    s32 var_r29;
    s32 var_r30;
    void *var_r31;

    var_r30 = 0x300;
    var_r29 = 0;
    *arg1 = NULL;
loop_7:
    if (var_r29 < 3) {
        var_r31 = NULL;
        if ((var_r29 >= 0) && (var_r29 < 3)) {
            var_r31 = &lbl_80349FA0 + (var_r29 * 0x890);
        }
        fn_8015B644(var_r31);
        if ((s32) M2C_FIELD(var_r31, s32 *, 4) == 0) {
            M2C_FIELD(var_r31, s32 *, 8) = 0;
            var_r30 = 0;
            M2C_FIELD(var_r31, s32 *, 0xC) = 0;
            M2C_FIELD(var_r31, s32 *, 4) = 1;
            *arg1 = var_r31;
            *arg0 = var_r29;
            var_r29 = 3;
        }
        fn_8015B63C(var_r31);
        var_r29 += 1;
        goto loop_7;
    }
    if (var_r30 == 0x300) {
        fn_801583F8(&lbl_801DB258);
    }
    return var_r30;
}

s32 TRKInitializeMessageBuffers(void) {
    M2C_UNK *var_r30;
    s32 var_r29;

    var_r30 = &lbl_80349FA0;
    var_r29 = 0;
    do {
        fn_8015B64C(var_r30);
        fn_8015B644(var_r30);
        M2C_FIELD(var_r30, s32 *, 4) = 0;
        fn_8015B63C(var_r30);
        var_r29 += 1;
        var_r30 += 0x890;
    } while (var_r29 < 3);
    return 0;
}

s32 fn_80158028(void) {
    return 0;
}

s32 TRKInitializeSerialHandler(void) {
    M2C_FIELD(&lbl_8034B954, s32 *, 0) = -1;
    M2C_FIELD(&lbl_8034B954, s8 *, 8) = 0;
    M2C_FIELD(&lbl_8034B954, s32 *, 0xC) = 0;
    return 0;
}

void TRKProcessInput(s32 arg0) {
    s32 sp10;
    M2C_UNK sp8;

    fn_8015709C(&sp8, 2);
    sp10 = arg0;
    lbl_8034B954 = -1;
    /* draft: did not compile: TRKPostEvent(&sp8, &lbl_8034B954); */
}

void TRKGetInput(void) {
    s32 sp14;
    M2C_UNK spC;
    u8 sp8;
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = fn_8015813C();
    if (temp_r3 != -1) {
        /* draft: did not compile: temp_r31 = TRKGetBuffer((long)(0)); */
        TRKSetBufferPosition((void *)(0), (unsigned long)(0));
        /* draft: did not compile: fn_801579EC(temp_r31, &sp8); */
        if (sp8 < 0x80U) {
            fn_8015709C(&spC, 2);
            sp14 = temp_r3;
            lbl_8034B954 = -1;
            /* draft: did not compile: TRKPostEvent(&spC, &lbl_8034B954); */
            return;
        }
        TRKReleaseBuffer(temp_r3);
    }
}

#pragma push
#pragma dont_inline on
s32 fn_8015813C(void) {
    u8 sp8;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r29;
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    u32 temp_r4;

    var_r29 = 0;
    var_r3 = fn_8015D6DC(&sp8);
loop_40:
    if ((var_r3 != 0) || (var_r29 != 0)) {
        return -1;
    }
    if ((u8) M2C_FIELD(&lbl_8034B954, u8 *, 8) != 2) {
        M2C_FIELD(&lbl_8034B954, s32 *, 0xC) = 0;
    }
    switch ((s32) M2C_FIELD(&lbl_8034B954, u8 *, 8)) { /* irregular */
    case 0:
        switch (sp8) {
        case 0:
            break;
        case 0x7E:
                /* draft: did not compile: temp_r3_2 = TRKGetFreeBuffer(&lbl_8034B954, &lbl_8034B954 + 4); */
                M2C_FIELD(&lbl_8034B954, u8 *, 0x10) = 0U;
                var_r29 = temp_r3_2;
                M2C_FIELD(&lbl_8034B954, u8 *, 8) = 1U;
            break;
        }
    default:
block_39:
        var_r3 = fn_8015D6DC(&sp8);
        goto loop_40;
    case 1:
        if ((s32) sp8 != 0x7E) {
            M2C_FIELD(&lbl_8034B954, u8 *, 8) = 2U;
        case 2:
            if ((s8) sp8 == 0x7E) {
                if ((s32) M2C_FIELD(&lbl_8034B954, s32 *, 0xC) != 0) {
                    fn_8015ACA8(M2C_FIELD(&lbl_8034B954, void **, 4), 0xFF, 4);
                    if ((s32) M2C_FIELD(&lbl_8034B954, s32 *, 0) != -1) {
                        TRKReleaseBuffer((long)(0));
                        M2C_FIELD(&lbl_8034B954, s32 *, 0) = -1;
                    }
                    M2C_FIELD(&lbl_8034B954, void **, 4) = NULL;
                    M2C_FIELD(&lbl_8034B954, u8 *, 8) = 0U;
                    goto block_39;
                }
                if ((u32) M2C_FIELD(M2C_FIELD(&lbl_8034B954, void **, 4), u32 *, 8) < 2U) {
                    fn_8015ACA8((void *)0xFF, (long)(2), (long)(0));
                    if ((s32) M2C_FIELD(&lbl_8034B954, s32 *, 0) != -1) {
                        TRKReleaseBuffer((long)(0));
                        M2C_FIELD(&lbl_8034B954, s32 *, 0) = -1;
                    }
                    var_r5 = 0;
                    M2C_FIELD(&lbl_8034B954, void **, 4) = NULL;
                    M2C_FIELD(&lbl_8034B954, u8 *, 8) = 0U;
                } else {
                    var_r5 = 1;
                    M2C_FIELD(M2C_FIELD(&lbl_8034B954, void **, 4), u32 *, 0xC) = 0U;
                    M2C_FIELD(M2C_FIELD(&lbl_8034B954, void **, 4), u32 *, 8) = (u32) (M2C_FIELD(M2C_FIELD(&lbl_8034B954, void **, 4), u32 *, 8) - 1);
                }
                if (var_r5 != 0) {
                    temp_r3 = M2C_FIELD(&lbl_8034B954, s32 *, 0);
                    M2C_FIELD(&lbl_8034B954, void **, 4) = NULL;
                    M2C_FIELD(&lbl_8034B954, s32 *, 0) = -1;
                    M2C_FIELD(&lbl_8034B954, u8 *, 8) = 0U;
                    return temp_r3;
                }
                M2C_FIELD(&lbl_8034B954, u8 *, 8) = 0U;
                goto block_39;
            }
            if ((s32) M2C_FIELD(&lbl_8034B954, s32 *, 0xC) != 0) {
                sp8 ^= 0x20;
                M2C_FIELD(&lbl_8034B954, s32 *, 0xC) = 0;
                goto block_31;
            }
            if ((s8) sp8 == 0x7D) {
                M2C_FIELD(&lbl_8034B954, s32 *, 0xC) = 1;
            } else {
block_31:
                temp_r4 = M2C_FIELD(M2C_FIELD(&lbl_8034B954, void **, 4), u32 *, 0xC);
                if (temp_r4 >= 0x880U) {
                    var_r4 = 0x301;
                } else {
                    M2C_FIELD(M2C_FIELD(&lbl_8034B954, void **, 4), u32 *, 0xC) = (u32) (temp_r4 + 1);
                    var_r4 = 0;
                    /* draft: did not compile: *(M2C_FIELD(&lbl_8034B954, void **, 4) + (temp_r4 + 0x10)) = sp8; */
                    M2C_FIELD(M2C_FIELD(&lbl_8034B954, void **, 4), u32 *, 8) = (u32) (M2C_FIELD(M2C_FIELD(&lbl_8034B954, void **, 4), u32 *, 8) + 1);
                }
                var_r29 = var_r4;
                M2C_FIELD(&lbl_8034B954, u8 *, 0x10) = (u8) (M2C_FIELD(&lbl_8034B954, u8 *, 0x10) + sp8);
            }
            goto block_39;
        }
        goto block_39;
    case 3:
        switch (sp8) {
        case 0x7E:
                if ((s32) M2C_FIELD(&lbl_8034B954, s32 *, 0) != -1) {
                    TRKReleaseBuffer((long)(0));
                    M2C_FIELD(&lbl_8034B954, s32 *, 0) = -1;
                }
                M2C_FIELD(&lbl_8034B954, void **, 4) = NULL;
                M2C_FIELD(&lbl_8034B954, u8 *, 8) = 0U;
            break;
        }
        goto block_39;
    }
}
#pragma pop

void usr_put_initialize(void) {

}
