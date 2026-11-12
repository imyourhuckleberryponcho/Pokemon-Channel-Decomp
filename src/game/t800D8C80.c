/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 EXIDeselect(s32);
s32 EXISelect(s32, M2C_UNK, M2C_UNK, s32);
s32 EXIImmEx(s32, s8 *, s32, M2C_UNK);
extern M2C_UNK lbl_8031C9E0;
u32 OSGetTick();
extern u32 lbl_8034FFF8;
M2C_UNK DCFlushRange(s32, M2C_UNK, M2C_UNK, s32);
M2C_UNK DCInvalidateRange(s32, M2C_UNK);
s32 fn_800D8B14(s32, u32);
extern M2C_UNK lbl_802A7860;
u32 fn_800D6D58();
M2C_UNK fn_800D6D90(s32);
M2C_UNK EXIUnlock(M2C_UNK);
s32 EXIProbe(M2C_UNK);
s32 fn_800D7BC0(M2C_UNK, u8 *);
M2C_UNK __CARDMountCallback(M2C_UNK, s32);
M2C_UNK __CARDPutControlBlock(void *, s32);
M2C_UNK DCStoreRange(void *, M2C_UNK);
s32 __OSLockSramEx();
M2C_UNK __OSUnlockSramEx(M2C_UNK);
u16 fn_800D86CC();
u64 __shr2i(s32, s32, M2C_UNK);

s32 ReadArrayUnlock(s32 arg0, s32 arg1, s8 *arg2, s32 arg3, s32 arg4);
s32 DummyLen(void);
s32 __CARDUnlock(s32 arg0, void *arg1);
void InitCallback(u32 arg0);
void DoneCallback(u32 arg0);
void fn_800D9D74(s32 arg0, s32 arg1);
s32 __CARDRead(s32 arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4);
void fn_800D9EB4(s32 arg0, s32 arg1);
s32 fn_800D9F90(s32 arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4);
s32 fn_800D9FF4(s32 arg0);
s32 fn_800DA00C(void *arg0);
void WriteCallback(s32 arg0, s32 arg1);
void fn_800DA0E8(s32 arg0, s32 arg1);
s32 __CARDAllocBlock(s32 arg0, u32 arg1);
s32 __CARDFreeBlock(s32 arg0, u16 arg1);
void __CARDUpdateFatBlock(s32 arg0, void *arg1, s32 arg2);
s32 fn_800DA410(void *arg0);
void WriteCallback_800DA418(s32 arg0, s32 arg1);
void fn_800DA4E8(s32 arg0, s32 arg1);
s32 __CARDUpdateDir(s32 arg0, s32 arg1);
void __CARDCheckSum(u16 *arg0, s32 arg1, u16 *arg2, u16 *arg3);
s32 VerifyID(void *arg0);

s32 ReadArrayUnlock(s32 arg0, s32 arg1, s8 *arg2, s32 arg3, s32 arg4) { return 0; } /* draft: stub */

s32 DummyLen(void) {
    s32 var_r3;
    u32 temp_r0;
    u32 var_r29;
    u32 var_r30;

    var_r30 = 1;
    var_r29 = 0U;
    lbl_8034FFF8 = OSGetTick();
    lbl_8034FFF8 = (lbl_8034FFF8 * 0x41C64E6D) + 0x3039;
    var_r3 = (((u32) lbl_8034FFF8 >> 0x10U) & 0x1F) + 1;
loop_4:
    if ((var_r3 < 4) && (var_r29 < 0xAU)) {
        temp_r0 = OSGetTick() << var_r30;
        var_r30 += 1;
        if (var_r30 > 0x10U) {
            var_r30 = 1;
        }
        lbl_8034FFF8 = temp_r0;
        var_r29 += 1;
        lbl_8034FFF8 = (lbl_8034FFF8 * 0x41C64E6D) + 0x3039;
        var_r3 = (((u32) lbl_8034FFF8 >> 0x10U) & 0x1F) + 1;
        goto loop_4;
    }
    if (var_r3 < 4) {
        var_r3 = 4;
    }
    return var_r3;
}

s32 __CARDUnlock(s32 arg0, void *arg1) {
    s32 spB4;
    s32 spB0;
    s32 spAC;
    s32 spA8;
    s32 spA4;
    s32 temp_r0;
    s32 temp_r10;
    s32 temp_r10_2;
    s32 temp_r10_3;
    s32 temp_r22;
    s32 temp_r24;
    s32 temp_r25;
    s32 temp_r26;
    s32 temp_r28;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r5;
    s32 temp_r5_3;
    s32 temp_r7_10;
    s32 temp_r7_11;
    s32 temp_r7_12;
    s32 temp_r7_13;
    s32 temp_r7_14;
    s32 temp_r7_15;
    s32 temp_r7_16;
    s32 temp_r7_17;
    s32 temp_r7_5;
    s32 temp_r7_6;
    s32 temp_r7_7;
    s32 temp_r7_8;
    s32 temp_r7_9;
    s32 temp_r8_10;
    s32 temp_r8_11;
    s32 temp_r8_12;
    s32 temp_r8_13;
    s32 temp_r8_14;
    s32 temp_r8_15;
    s32 temp_r8_17;
    s32 temp_r8_18;
    s32 temp_r8_19;
    s32 temp_r8_20;
    s32 temp_r8_4;
    s32 temp_r8_5;
    s32 temp_r8_6;
    s32 temp_r8_7;
    s32 temp_r8_8;
    s32 temp_r8_9;
    s32 temp_r9;
    s32 temp_r9_10;
    s32 temp_r9_11;
    s32 temp_r9_2;
    s32 temp_r9_3;
    s32 temp_r9_4;
    s32 temp_r9_5;
    s32 temp_r9_6;
    s32 temp_r9_7;
    s32 temp_r9_8;
    s32 temp_r9_9;
    s32 var_ctr_10;
    s32 var_ctr_2;
    s32 var_ctr_3;
    s32 var_ctr_4;
    s32 var_ctr_5;
    s32 var_ctr_6;
    s32 var_ctr_8;
    s32 var_ctr_9;
    s32 var_r4;
    s32 var_r6;
    s32 var_r7;
    s32 var_r7_2;
    s32 var_r7_3;
    s32 var_r7_4;
    u32 temp_r4;
    u32 temp_r4_2;
    u32 temp_r4_3;
    u32 temp_r4_4;
    u32 temp_r5_2;
    u32 temp_r7;
    u32 temp_r7_2;
    u32 temp_r7_3;
    u32 temp_r7_4;
    u32 temp_r8;
    u32 temp_r8_16;
    u32 temp_r8_2;
    u32 temp_r8_3;
    u32 var_ctr;
    u32 var_ctr_7;
    u32 var_r25;
    u32 var_r3;
    u32 var_r3_2;
    u32 var_r3_3;
    void *temp_r31;
    void *temp_r30;
    void *temp_r3;

    temp_r5 = arg0 * 0x110;
    temp_r31 = &lbl_8031C9E0 + temp_r5;
    /* draft: did not compile: temp_r30 = temp_r31 + 0x30; */
    temp_r3 = M2C_FIELD(temp_r31, void **, 0x80);
    /* draft: did not compile: temp_r28 = (temp_r3 + 0x2F) & 0xFFFFFFE0; */
    temp_r22 = temp_r28;
    temp_r22 += 0x20;
    lbl_8034FFF8 = OSGetTick(temp_r3, temp_r5);
    temp_r4 = lbl_8034FFF8;
    temp_r3_2 = temp_r4 * 0x41C64E6D;
    lbl_8034FFF8 = temp_r3_2;
    var_r25 = (0x7FEC8000 | (((u32) (lbl_8034FFF8 + 0x3039) >> 0x10U) & 0x7FFF)) & 0xFFFFF000;
    temp_r3_3 = DummyLen();
    if (0 /* draft: did not compile */) {
        return -3;
    }
    temp_r4_2 = (temp_r3_3 * 8) + 1;
    var_r3 = 0U;
    if (temp_r4_2 > 0U) {
        temp_r5_2 = temp_r4_2 - 8;
        if (temp_r4_2 > 8U) {
            var_ctr = (u32) (temp_r5_2 + 7) >> 3U;
            if (temp_r5_2 > 0U) {
                do {
                    temp_r7 = (var_r25 >> 1U) | ((~((var_r25 >> 0x17U) ^ ((var_r25 >> 0xFU) ^ (var_r25 ^ (var_r25 >> 7U)))) << 0x1E) & 0x40000000);
                    temp_r8 = ((~((temp_r7 >> 0x17U) ^ ((temp_r7 >> 0xFU) ^ (temp_r7 ^ (temp_r7 >> 7U)))) << 0x1E) & 0x40000000 & ~0x3FFFFFFF) | ((temp_r7 >> 1U) & 0x3FFFFFFF);
                    temp_r7_2 = ((~((temp_r8 >> 0x17U) ^ ((temp_r8 >> 0xFU) ^ (temp_r8 ^ (temp_r8 >> 7U)))) << 0x1E) & 0x40000000 & ~0x3FFFFFFF) | ((temp_r8 >> 1U) & 0x3FFFFFFF);
                    temp_r8_2 = ((~((temp_r7_2 >> 0x17U) ^ ((temp_r7_2 >> 0xFU) ^ (temp_r7_2 ^ (temp_r7_2 >> 7U)))) << 0x1E) & 0x40000000 & ~0x3FFFFFFF) | ((temp_r7_2 >> 1U) & 0x3FFFFFFF);
                    temp_r7_3 = ((~((temp_r8_2 >> 0x17U) ^ ((temp_r8_2 >> 0xFU) ^ (temp_r8_2 ^ (temp_r8_2 >> 7U)))) << 0x1E) & 0x40000000 & ~0x3FFFFFFF) | ((temp_r8_2 >> 1U) & 0x3FFFFFFF);
                    temp_r8_3 = ((~((temp_r7_3 >> 0x17U) ^ ((temp_r7_3 >> 0xFU) ^ (temp_r7_3 ^ (temp_r7_3 >> 7U)))) << 0x1E) & 0x40000000 & ~0x3FFFFFFF) | ((temp_r7_3 >> 1U) & 0x3FFFFFFF);
                    temp_r7_4 = ((~((temp_r8_3 >> 0x17U) ^ ((temp_r8_3 >> 0xFU) ^ (temp_r8_3 ^ (temp_r8_3 >> 7U)))) << 0x1E) & 0x40000000 & ~0x3FFFFFFF) | ((temp_r8_3 >> 1U) & 0x3FFFFFFF);
                    var_r25 = ((~((temp_r7_4 >> 0x17U) ^ ((temp_r7_4 >> 0xFU) ^ (temp_r7_4 ^ (temp_r7_4 >> 7U)))) << 0x1E) & 0x40000000 & ~0x3FFFFFFF) | ((temp_r7_4 >> 1U) & 0x3FFFFFFF);
                    var_r3 += 8;
                    var_ctr -= 1;
                } while (var_ctr != 0);
            }
        }
        var_ctr_2 = temp_r4_2 - var_r3;
        if (var_r3 < temp_r4_2) {
            do {
                var_r25 = (var_r25 >> 1U) | ((~((var_r25 >> 0x17U) ^ ((var_r25 >> 0xFU) ^ (var_r25 ^ (var_r25 >> 7U)))) << 0x1E) & 0x40000000);
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
    temp_r4_3 = var_r25 >> 0x17U;
    M2C_FIELD(temp_r31, s32 *, 0x2C) = (s32) (var_r25 | (~(temp_r4_3 ^ ((var_r25 >> 0xFU) ^ (var_r25 ^ (var_r25 >> 7U)))) << 0x1F));
    M2C_FIELD(temp_r31, s32 *, 0x2C) = fn_800D8B14(M2C_FIELD(temp_r31, s32 *, 0x2C), temp_r4_3);
    temp_r3_4 = DummyLen();
    if (0 /* draft: did not compile */) {
        return -3;
    }
    var_r7 = M2C_FIELD(temp_r31, s32 *, 0x2C);
    var_ctr_3 = 4;
    temp_r25 = spA4 ^ var_r7;
    do {
        temp_r7_5 = (var_r7 * 2) | (((u32) ~((var_r7 << 0x17) ^ ((var_r7 << 0xF) ^ (var_r7 ^ (var_r7 << 7)))) >> 0x1EU) & 2);
        temp_r9 = (((u32) ~((temp_r7_5 << 0x17) ^ ((temp_r7_5 << 0xF) ^ (temp_r7_5 ^ (temp_r7_5 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r7_5 << 1) & 0xFFFFFFFC);
        temp_r8_4 = (((u32) ~((temp_r9 << 0x17) ^ ((temp_r9 << 0xF) ^ (temp_r9 ^ (temp_r9 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r9 << 1) & 0xFFFFFFFC);
        temp_r7_6 = (((u32) ~((temp_r8_4 << 0x17) ^ ((temp_r8_4 << 0xF) ^ (temp_r8_4 ^ (temp_r8_4 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r8_4 << 1) & 0xFFFFFFFC);
        temp_r8_5 = (((u32) ~((temp_r7_6 << 0x17) ^ ((temp_r7_6 << 0xF) ^ (temp_r7_6 ^ (temp_r7_6 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r7_6 << 1) & 0xFFFFFFFC);
        temp_r7_7 = (((u32) ~((temp_r8_5 << 0x17) ^ ((temp_r8_5 << 0xF) ^ (temp_r8_5 ^ (temp_r8_5 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r8_5 << 1) & 0xFFFFFFFC);
        temp_r8_6 = (((u32) ~((temp_r7_7 << 0x17) ^ ((temp_r7_7 << 0xF) ^ (temp_r7_7 ^ (temp_r7_7 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r7_7 << 1) & 0xFFFFFFFC);
        var_r7 = (((u32) ~((temp_r8_6 << 0x17) ^ ((temp_r8_6 << 0xF) ^ (temp_r8_6 ^ (temp_r8_6 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r8_6 << 1) & 0xFFFFFFFC);
        var_ctr_3 -= 1;
    } while (var_ctr_3 != 0);
    M2C_FIELD(temp_r31, s32 *, 0x2C) = (s32) (var_r7 | ((u32) ~((var_r7 << 0x17) ^ ((var_r7 << 0xF) ^ (var_r7 ^ (var_r7 << 7)))) >> 0x1FU));
    var_ctr_4 = 4;
    var_r7_2 = M2C_FIELD(temp_r31, s32 *, 0x2C);
    temp_r26 = spA8 ^ var_r7_2;
    do {
        temp_r7_8 = (var_r7_2 * 2) | (((u32) ~((var_r7_2 << 0x17) ^ ((var_r7_2 << 0xF) ^ (var_r7_2 ^ (var_r7_2 << 7)))) >> 0x1EU) & 2);
        temp_r9_2 = (((u32) ~((temp_r7_8 << 0x17) ^ ((temp_r7_8 << 0xF) ^ (temp_r7_8 ^ (temp_r7_8 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r7_8 << 1) & 0xFFFFFFFC);
        temp_r8_7 = (((u32) ~((temp_r9_2 << 0x17) ^ ((temp_r9_2 << 0xF) ^ (temp_r9_2 ^ (temp_r9_2 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r9_2 << 1) & 0xFFFFFFFC);
        temp_r7_9 = (((u32) ~((temp_r8_7 << 0x17) ^ ((temp_r8_7 << 0xF) ^ (temp_r8_7 ^ (temp_r8_7 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r8_7 << 1) & 0xFFFFFFFC);
        temp_r8_8 = (((u32) ~((temp_r7_9 << 0x17) ^ ((temp_r7_9 << 0xF) ^ (temp_r7_9 ^ (temp_r7_9 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r7_9 << 1) & 0xFFFFFFFC);
        temp_r7_10 = (((u32) ~((temp_r8_8 << 0x17) ^ ((temp_r8_8 << 0xF) ^ (temp_r8_8 ^ (temp_r8_8 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r8_8 << 1) & 0xFFFFFFFC);
        temp_r8_9 = (((u32) ~((temp_r7_10 << 0x17) ^ ((temp_r7_10 << 0xF) ^ (temp_r7_10 ^ (temp_r7_10 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r7_10 << 1) & 0xFFFFFFFC);
        var_r7_2 = (((u32) ~((temp_r8_9 << 0x17) ^ ((temp_r8_9 << 0xF) ^ (temp_r8_9 ^ (temp_r8_9 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r8_9 << 1) & 0xFFFFFFFC);
        var_ctr_4 -= 1;
    } while (var_ctr_4 != 0);
    M2C_FIELD(temp_r31, s32 *, 0x2C) = (s32) (var_r7_2 | ((u32) ~((var_r7_2 << 0x17) ^ ((var_r7_2 << 0xF) ^ (var_r7_2 ^ (var_r7_2 << 7)))) >> 0x1FU));
    var_ctr_5 = 4;
    var_r7_3 = M2C_FIELD(temp_r31, s32 *, 0x2C);
    temp_r24 = spAC ^ var_r7_3;
    do {
        temp_r7_11 = (var_r7_3 * 2) | (((u32) ~((var_r7_3 << 0x17) ^ ((var_r7_3 << 0xF) ^ (var_r7_3 ^ (var_r7_3 << 7)))) >> 0x1EU) & 2);
        temp_r9_3 = (((u32) ~((temp_r7_11 << 0x17) ^ ((temp_r7_11 << 0xF) ^ (temp_r7_11 ^ (temp_r7_11 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r7_11 << 1) & 0xFFFFFFFC);
        temp_r8_10 = (((u32) ~((temp_r9_3 << 0x17) ^ ((temp_r9_3 << 0xF) ^ (temp_r9_3 ^ (temp_r9_3 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r9_3 << 1) & 0xFFFFFFFC);
        temp_r7_12 = (((u32) ~((temp_r8_10 << 0x17) ^ ((temp_r8_10 << 0xF) ^ (temp_r8_10 ^ (temp_r8_10 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r8_10 << 1) & 0xFFFFFFFC);
        temp_r8_11 = (((u32) ~((temp_r7_12 << 0x17) ^ ((temp_r7_12 << 0xF) ^ (temp_r7_12 ^ (temp_r7_12 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r7_12 << 1) & 0xFFFFFFFC);
        temp_r7_13 = (((u32) ~((temp_r8_11 << 0x17) ^ ((temp_r8_11 << 0xF) ^ (temp_r8_11 ^ (temp_r8_11 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r8_11 << 1) & 0xFFFFFFFC);
        temp_r8_12 = (((u32) ~((temp_r7_13 << 0x17) ^ ((temp_r7_13 << 0xF) ^ (temp_r7_13 ^ (temp_r7_13 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r7_13 << 1) & 0xFFFFFFFC);
        var_r7_3 = (((u32) ~((temp_r8_12 << 0x17) ^ ((temp_r8_12 << 0xF) ^ (temp_r8_12 ^ (temp_r8_12 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r8_12 << 1) & 0xFFFFFFFC);
        var_ctr_5 -= 1;
    } while (var_ctr_5 != 0);
    M2C_FIELD(temp_r31, s32 *, 0x2C) = (s32) (var_r7_3 | ((u32) ~((var_r7_3 << 0x17) ^ ((var_r7_3 << 0xF) ^ (var_r7_3 ^ (var_r7_3 << 7)))) >> 0x1FU));
    var_ctr_6 = 4;
    var_r7_4 = M2C_FIELD(temp_r31, s32 *, 0x2C);
    temp_r0 = spB0 ^ var_r7_4;
    do {
        temp_r7_14 = (var_r7_4 * 2) | (((u32) ~((var_r7_4 << 0x17) ^ ((var_r7_4 << 0xF) ^ (var_r7_4 ^ (var_r7_4 << 7)))) >> 0x1EU) & 2);
        temp_r9_4 = (((u32) ~((temp_r7_14 << 0x17) ^ ((temp_r7_14 << 0xF) ^ (temp_r7_14 ^ (temp_r7_14 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r7_14 << 1) & 0xFFFFFFFC);
        temp_r8_13 = (((u32) ~((temp_r9_4 << 0x17) ^ ((temp_r9_4 << 0xF) ^ (temp_r9_4 ^ (temp_r9_4 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r9_4 << 1) & 0xFFFFFFFC);
        temp_r7_15 = (((u32) ~((temp_r8_13 << 0x17) ^ ((temp_r8_13 << 0xF) ^ (temp_r8_13 ^ (temp_r8_13 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r8_13 << 1) & 0xFFFFFFFC);
        temp_r8_14 = (((u32) ~((temp_r7_15 << 0x17) ^ ((temp_r7_15 << 0xF) ^ (temp_r7_15 ^ (temp_r7_15 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r7_15 << 1) & 0xFFFFFFFC);
        temp_r7_16 = (((u32) ~((temp_r8_14 << 0x17) ^ ((temp_r8_14 << 0xF) ^ (temp_r8_14 ^ (temp_r8_14 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r8_14 << 1) & 0xFFFFFFFC);
        temp_r8_15 = (((u32) ~((temp_r7_16 << 0x17) ^ ((temp_r7_16 << 0xF) ^ (temp_r7_16 ^ (temp_r7_16 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r7_16 << 1) & 0xFFFFFFFC);
        var_r7_4 = (((u32) ~((temp_r8_15 << 0x17) ^ ((temp_r8_15 << 0xF) ^ (temp_r8_15 ^ (temp_r8_15 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r8_15 << 1) & 0xFFFFFFFC);
        var_ctr_6 -= 1;
    } while (var_ctr_6 != 0);
    M2C_FIELD(temp_r31, s32 *, 0x2C) = (s32) (var_r7_4 | ((u32) ~((var_r7_4 << 0x17) ^ ((var_r7_4 << 0xF) ^ (var_r7_4 ^ (var_r7_4 << 7)))) >> 0x1FU));
    temp_r4_4 = temp_r3_4 * 8;
    var_r6 = M2C_FIELD(temp_r31, s32 *, 0x2C);
    var_r3_2 = 0U;
    temp_r5_3 = spB4 ^ var_r6;
    if (temp_r4_4 > 0U) {
        temp_r8_16 = temp_r4_4 - 8;
        if (temp_r4_4 > 8U) {
            var_ctr_7 = (u32) (temp_r8_16 + 7) >> 3U;
            if (temp_r8_16 > 0U) {
                do {
                    temp_r9_5 = (var_r6 * 2) | (((u32) ~((var_r6 << 0x17) ^ ((var_r6 << 0xF) ^ (var_r6 ^ (var_r6 << 7)))) >> 0x1EU) & 2);
                    temp_r10 = (((u32) ~((temp_r9_5 << 0x17) ^ ((temp_r9_5 << 0xF) ^ (temp_r9_5 ^ (temp_r9_5 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r9_5 << 1) & 0xFFFFFFFC);
                    temp_r9_6 = (((u32) ~((temp_r10 << 0x17) ^ ((temp_r10 << 0xF) ^ (temp_r10 ^ (temp_r10 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r10 << 1) & 0xFFFFFFFC);
                    temp_r10_2 = (((u32) ~((temp_r9_6 << 0x17) ^ ((temp_r9_6 << 0xF) ^ (temp_r9_6 ^ (temp_r9_6 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r9_6 << 1) & 0xFFFFFFFC);
                    temp_r9_7 = (((u32) ~((temp_r10_2 << 0x17) ^ ((temp_r10_2 << 0xF) ^ (temp_r10_2 ^ (temp_r10_2 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r10_2 << 1) & 0xFFFFFFFC);
                    temp_r10_3 = (((u32) ~((temp_r9_7 << 0x17) ^ ((temp_r9_7 << 0xF) ^ (temp_r9_7 ^ (temp_r9_7 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r9_7 << 1) & 0xFFFFFFFC);
                    temp_r9_8 = (((u32) ~((temp_r10_3 << 0x17) ^ ((temp_r10_3 << 0xF) ^ (temp_r10_3 ^ (temp_r10_3 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r10_3 << 1) & 0xFFFFFFFC);
                    var_r6 = (((u32) ~((temp_r9_8 << 0x17) ^ ((temp_r9_8 << 0xF) ^ (temp_r9_8 ^ (temp_r9_8 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r9_8 << 1) & 0xFFFFFFFC);
                    var_r3_2 += 8;
                    var_ctr_7 -= 1;
                } while (var_ctr_7 != 0);
            }
        }
        var_ctr_8 = temp_r4_4 - var_r3_2;
        if (var_r3_2 < temp_r4_4) {
            do {
                var_r6 = (var_r6 * 2) | (((u32) ~((var_r6 << 0x17) ^ ((var_r6 << 0xF) ^ (var_r6 ^ (var_r6 << 7)))) >> 0x1EU) & 2);
                var_ctr_8 -= 1;
            } while (var_ctr_8 != 0);
        }
    }
    M2C_FIELD(temp_r31, s32 *, 0x2C) = (s32) (var_r6 | ((u32) ~((var_r6 << 0x17) ^ ((var_r6 << 0xF) ^ (var_r6 ^ (var_r6 << 7)))) >> 0x1FU));
    var_ctr_9 = 4;
    var_r3_3 = 0U;
    var_r4 = M2C_FIELD(temp_r31, s32 *, 0x2C);
    do {
        temp_r8_17 = (var_r4 * 2) | (((u32) ~((var_r4 << 0x17) ^ ((var_r4 << 0xF) ^ (var_r4 ^ (var_r4 << 7)))) >> 0x1EU) & 2);
        temp_r9_9 = (((u32) ~((temp_r8_17 << 0x17) ^ ((temp_r8_17 << 0xF) ^ (temp_r8_17 ^ (temp_r8_17 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r8_17 << 1) & 0xFFFFFFFC);
        temp_r8_18 = (((u32) ~((temp_r9_9 << 0x17) ^ ((temp_r9_9 << 0xF) ^ (temp_r9_9 ^ (temp_r9_9 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r9_9 << 1) & 0xFFFFFFFC);
        temp_r9_10 = (((u32) ~((temp_r8_18 << 0x17) ^ ((temp_r8_18 << 0xF) ^ (temp_r8_18 ^ (temp_r8_18 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r8_18 << 1) & 0xFFFFFFFC);
        temp_r8_19 = (((u32) ~((temp_r9_10 << 0x17) ^ ((temp_r9_10 << 0xF) ^ (temp_r9_10 ^ (temp_r9_10 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r9_10 << 1) & 0xFFFFFFFC);
        temp_r9_11 = (((u32) ~((temp_r8_19 << 0x17) ^ ((temp_r8_19 << 0xF) ^ (temp_r8_19 ^ (temp_r8_19 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r8_19 << 1) & 0xFFFFFFFC);
        temp_r8_20 = (((u32) ~((temp_r9_11 << 0x17) ^ ((temp_r9_11 << 0xF) ^ (temp_r9_11 ^ (temp_r9_11 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r9_11 << 1) & 0xFFFFFFFC);
        var_r4 = (((u32) ~((temp_r8_20 << 0x17) ^ ((temp_r8_20 << 0xF) ^ (temp_r8_20 ^ (temp_r8_20 << 7)))) >> 0x1EU) & 2 & ~0xFFFFFFFC) | ((temp_r8_20 << 1) & 0xFFFFFFFC);
        var_r3_3 += 8;
        var_ctr_9 -= 1;
    } while (var_ctr_9 != 0);
    var_ctr_10 = 0x21 - var_r3_3;
    if (var_r3_3 < 0x21U) {
        do {
            var_r4 = (var_r4 * 2) | (((u32) ~((var_r4 << 0x17) ^ ((var_r4 << 0xF) ^ (var_r4 ^ (var_r4 << 7)))) >> 0x1EU) & 2);
            var_ctr_10 -= 1;
        } while (var_ctr_10 != 0);
    }
    temp_r7_17 = var_r4 << 0x17;
    M2C_FIELD(temp_r31, s32 *, 0x2C) = (s32) (var_r4 | ((u32) ~(temp_r7_17 ^ ((var_r4 << 0xF) ^ (var_r4 ^ (var_r4 << 7)))) >> 0x1FU));
    M2C_FIELD(temp_r28, s32 *, 0) = temp_r0;
    M2C_FIELD(temp_r28, s32 *, 4) = temp_r5_3;
    M2C_FIELD(temp_r3, s32 *, 0) = temp_r28;
    M2C_FIELD(temp_r3, s32 *, 4) = 8;
    M2C_FIELD(temp_r3, s32 *, 0xC) = temp_r22;
    M2C_FIELD(temp_r3, s32 *, 8) = 0;
    DCFlushRange(temp_r28, 8, 8, temp_r7_17);
    DCInvalidateRange(temp_r22, 4);
    DCFlushRange((long)((s32) temp_r3), (long)(0x10), (long)(0), (long)(0));
    M2C_FIELD(temp_r30, s32 *, 4) = 0xFF;
    M2C_FIELD(temp_r30, void **, 0xC) = (void *) (&lbl_802A7860 + 0x80000000);
    M2C_FIELD(temp_r30, s32 *, 0x10) = 0x160;
    M2C_FIELD(temp_r30, s32 *, 0x14) = 0;
    M2C_FIELD(temp_r30, s16 *, 0x24) = 0x10;
    /* draft: did not compile: M2C_FIELD(temp_r30, M2C_UNK (**)(), 0x28) = InitCallback; */
    M2C_FIELD(temp_r30, s32 *, 0x2C) = 0;
    /* draft: did not compile: M2C_FIELD(temp_r30, M2C_UNK (**)(), 0x30) = DoneCallback; */
    M2C_FIELD(temp_r30, s32 *, 0x34) = 0;
    DSPAddTask(temp_r30, InitCallback, 0x10);
    M2C_FIELD(arg1, s32 *, 0) = temp_r25;
    M2C_FIELD(arg1, s32 *, 4) = temp_r26;
    M2C_FIELD(arg1, s32 *, 8) = temp_r24;
    return 0;
}

void InitCallback(u32 arg0) {
    M2C_UNK *var_r4;
    u8 temp_r31;

    var_r4 = &lbl_8031C9E0;
    if (0 /* draft: did not compile */) {
        var_r4 = &lbl_8031C9E0 + 0x110;
    }
    fn_800D6D90(0xFF000000);
    temp_r31 = M2C_FIELD(var_r4, s32 *, 0x80);
    do {

    } while (fn_800D6D58() != 0U);
    fn_800D6D90(temp_r31);
    do {

    } while (fn_800D6D58() != 0U);
}

void DoneCallback(u32 arg0) { } /* draft: stub */

void fn_800D9D74(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_r0_2)(s32, s32);
    s32 temp_r0;
    s32 var_r29;
    void *temp_r30;

    var_r29 = arg1;
    temp_r30 = &lbl_8031C9E0 + (arg0 * 0x110);
    if ((var_r29 < 0) || (M2C_FIELD(temp_r30, s32 *, 0xB8) = (s32) (M2C_FIELD(temp_r30, s32 *, 0xB8) + 0x200), M2C_FIELD(temp_r30, s32 *, 0xB0) = (s32) (M2C_FIELD(temp_r30, s32 *, 0xB0) + 0x200), M2C_FIELD(temp_r30, s32 *, 0xB4) = (s32) (M2C_FIELD(temp_r30, s32 *, 0xB4) + 0x200), temp_r0 = M2C_FIELD(temp_r30, s32 *, 0xAC) - 1, M2C_FIELD(temp_r30, s32 *, 0xAC) = temp_r0, ((temp_r0 > 0) == 0)) || (var_r29 = __CARDReadSegment(arg0, (u16)fn_800D9D74), ((var_r29 < 0) != 0))) {
        if ((u32) M2C_FIELD(temp_r30, u32 *, 0xD0) == 0U) {
            __CARDPutControlBlock(temp_r30, var_r29);
        }
        temp_r0_2 = M2C_FIELD(temp_r30, M2C_UNK (**)(s32, s32), 0xD4);
        if (temp_r0_2 != NULL) {
            M2C_FIELD(temp_r30, M2C_UNK (**)(s32, s32), 0xD4) = NULL;
            temp_r0_2(arg0, var_r29);
        }
    }
}

s32 __CARDRead(s32 arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4) {
    void *temp_r8;

    temp_r8 = &lbl_8031C9E0 + (arg0 * 0x110);
    if ((s32) M2C_FIELD(temp_r8, s32 *, 0) == 0) {
        return -3;
    }
    M2C_FIELD(temp_r8, s32 *, 0xD4) = arg4;
    M2C_FIELD(temp_r8, u32 *, 0xAC) = (u32) (arg2 >> 9U);
    M2C_FIELD(temp_r8, s32 *, 0xB0) = arg1;
    M2C_FIELD(temp_r8, s32 *, 0xB4) = arg3;
    return __CARDReadSegment(fn_800D9D74, fn_800D9D74);
}

void fn_800D9EB4(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_r0_2)(s32, s32);
    s32 temp_r0;
    s32 var_r29;
    void *temp_r30;

    var_r29 = arg1;
    temp_r30 = &lbl_8031C9E0 + (arg0 * 0x110);
    if ((var_r29 < 0) || (M2C_FIELD(temp_r30, s32 *, 0xB8) = (s32) (M2C_FIELD(temp_r30, s32 *, 0xB8) + 0x80), M2C_FIELD(temp_r30, s32 *, 0xB0) = (s32) (M2C_FIELD(temp_r30, s32 *, 0xB0) + 0x80), M2C_FIELD(temp_r30, s32 *, 0xB4) = (s32) (M2C_FIELD(temp_r30, s32 *, 0xB4) + 0x80), temp_r0 = M2C_FIELD(temp_r30, s32 *, 0xAC) - 1, M2C_FIELD(temp_r30, s32 *, 0xAC) = temp_r0, ((temp_r0 > 0) == 0)) || (var_r29 = fn_800D8424(arg0, (u16)fn_800D9EB4), ((var_r29 < 0) != 0))) {
        if ((u32) M2C_FIELD(temp_r30, u32 *, 0xD0) == 0U) {
            __CARDPutControlBlock(temp_r30, var_r29);
        }
        temp_r0_2 = M2C_FIELD(temp_r30, M2C_UNK (**)(s32, s32), 0xD4);
        if (temp_r0_2 != NULL) {
            M2C_FIELD(temp_r30, M2C_UNK (**)(s32, s32), 0xD4) = NULL;
            temp_r0_2(arg0, var_r29);
        }
    }
}

s32 fn_800D9F90(s32 arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4) {
    void *temp_r8;

    temp_r8 = &lbl_8031C9E0 + (arg0 * 0x110);
    if ((s32) M2C_FIELD(temp_r8, s32 *, 0) == 0) {
        return -3;
    }
    M2C_FIELD(temp_r8, s32 *, 0xD4) = arg4;
    M2C_FIELD(temp_r8, u32 *, 0xAC) = (u32) (arg2 >> 7U);
    M2C_FIELD(temp_r8, s32 *, 0xB0) = arg1;
    M2C_FIELD(temp_r8, s32 *, 0xB4) = arg3;
    return fn_800D8424(fn_800D9EB4, fn_800D9EB4);
}

s32 fn_800D9FF4(s32 arg0) {
    return M2C_FIELD((&lbl_8031C9E0 + (arg0 * 0x110)), s32 *, 0xB8);
}

s32 fn_800DA00C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x88);
}

void WriteCallback(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_r0)(s32, s32);
    u8 temp_r3;
    u32 temp_r4;
    u32 temp_r5;
    void *temp_r31;

    temp_r31 = &lbl_8031C9E0 + (arg0 * 0x110);
    if (arg1 >= 0) {
        temp_r3 = M2C_FIELD(temp_r31, s32 *, 0x80);
        temp_r4 = temp_r3 + 0x6000;
        temp_r5 = temp_r3 + 0x8000;
        if ((u32) M2C_FIELD(temp_r31, u32 *, 0x88) == temp_r4) {
            M2C_FIELD(temp_r31, u32 *, 0x88) = temp_r5;
            /* draft: did not compile: memcpy(temp_r5, 0x2000U); */
        } else {
            M2C_FIELD(temp_r31, u32 *, 0x88) = temp_r4;
            /* draft: did not compile: memcpy(temp_r4, temp_r5, 0x2000); */
        }
    }
    if ((u32) M2C_FIELD(temp_r31, u32 *, 0xD0) == 0U) {
        __CARDPutControlBlock(temp_r31, arg1);
    }
    temp_r0 = M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0xD8);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0xD8) = NULL;
        temp_r0(arg0, arg1);
    }
}

void fn_800DA0E8(s32 arg0, s32 arg1) { } /* draft: stub */

s32 __CARDAllocBlock(s32 arg0, u32 arg1) {
    s32 saved_reg_r31;
    u16 var_r4;
    u16 temp_r0;
    u16 temp_r10;
    u16 var_r12;
    u16 var_r11;
    u16 var_r31;
    u16 *temp_r7;
    void *temp_r8;
    void *temp_r9;
    u16 var_r30;

    var_r31 = saved_reg_r31;
    var_r4 = arg1;
    temp_r9 = &lbl_8031C9E0 + (arg0 * 0x110);
    if ((s32) M2C_FIELD(temp_r9, s32 *, 0) == 0) {
        return -3;
    }
    temp_r8 = M2C_FIELD(temp_r9, void **, 0x88);
    temp_r0 = M2C_FIELD(temp_r8, u16 *, 6);
    if (temp_r0 < var_r4) {
        return -9;
    }
    M2C_FIELD(temp_r8, u16 *, 6) = (u16) (temp_r0 - var_r4);
    var_r12 = 0xFFFF;
    var_r11 = M2C_FIELD(temp_r8, u16 *, 8);
    var_r30 = 0;
loop_15:
    if (var_r4 == 0U) {
        M2C_FIELD(temp_r8, u16 *, 8) = var_r11;
        M2C_FIELD(temp_r9, u16 *, 0xBE) = var_r12;
        return 0;
    }
    temp_r10 = M2C_FIELD(temp_r9, u16 *, 0x10);
    var_r30 = var_r30 + 1;
    if ((s32) (temp_r10 - 5) < (s32) var_r30) {
        return -6;
    }
    var_r11 = var_r11 + 1;
    if ((var_r11 < 5U) || (var_r11 >= temp_r10)) {
        var_r11 = 5;
    }
    /* draft: did not compile: temp_r7 = temp_r8 + ((var_r11 * 2) & 0x1FFFE); */
    if ((u16) *temp_r7 == 0) {
        if (var_r12 == -1U) {
            var_r12 = var_r11;
        } else {
            /* draft: did not compile: *(temp_r8 + ((var_r31 * 2) & 0x1FFFE)) = var_r11; */
        }
        var_r31 = var_r11;
        var_r4 = var_r4 - 1;
        *temp_r7 = 0xFFFF;
    }
    goto loop_15;
}

s32 __CARDFreeBlock(s32 arg0, u16 arg1) {
    u32 var_r4;
    u16 *temp_r6;
    void *temp_r9;
    void *temp_r8;

    var_r4 = arg1;
    temp_r9 = &lbl_8031C9E0 + (arg0 * 0x110);
    if ((s32) M2C_FIELD(temp_r9, s32 *, 0) == 0) {
        return -3;
    }
    temp_r8 = M2C_FIELD(temp_r9, void **, 0x88);
loop_7:
    if (var_r4 == -1U) {
        return 0;
    }
    if ((var_r4 < 5U) || (var_r4 >= (u16) M2C_FIELD(temp_r9, u16 *, 0x10))) {
        return -6;
    }
    /* draft: did not compile: temp_r6 = temp_r8 + (var_r4 * 2); */
    var_r4 = *temp_r6;
    *temp_r6 = 0;
    M2C_FIELD(temp_r8, u16 *, 6) = (u16) (M2C_FIELD(temp_r8, u16 *, 6) + 1);
    goto loop_7;
}

void __CARDUpdateFatBlock(s32 arg0, void *arg1, s32 arg2) { } /* draft: stub */

s32 fn_800DA410(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

void WriteCallback_800DA418(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_r0_2)(s32, s32);
    u8 temp_r3;
    u32 temp_r0;
    u32 temp_r4;
    void *temp_r31;

    temp_r31 = &lbl_8031C9E0 + (arg0 * 0x110);
    if (arg1 >= 0) {
        temp_r3 = M2C_FIELD(temp_r31, s32 *, 0x80);
        temp_r4 = temp_r3 + 0x2000;
        temp_r0 = temp_r3 + 0x4000;
        if ((u32) M2C_FIELD(temp_r31, u32 *, 0x84) == temp_r4) {
            M2C_FIELD(temp_r31, u32 *, 0x84) = temp_r0;
            /* draft: did not compile: memcpy(temp_r0, 0x2000U); */
        } else {
            M2C_FIELD(temp_r31, u32 *, 0x84) = temp_r4;
            /* draft: did not compile: memcpy(temp_r4, temp_r0, 0x2000); */
        }
    }
    if ((u32) M2C_FIELD(temp_r31, u32 *, 0xD0) == 0U) {
        __CARDPutControlBlock(temp_r31, arg1);
    }
    temp_r0_2 = M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0xD8);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0xD8) = NULL;
        temp_r0_2(arg0, arg1);
    }
}

void fn_800DA4E8(s32 arg0, s32 arg1) { } /* draft: stub */

s32 __CARDUpdateDir(s32 arg0, s32 arg1) { return 0; } /* draft: stub */

#pragma push
#pragma optimize_for_size on
void __CARDCheckSum(u16 *arg0, s32 arg1, u16 *arg2, u16 *arg3) {
    u8 temp_r0;
    s32 var_ctr;
    s32 var_ctr_2;
    s32 var_r4;
    u16 *var_r3;
    u16 temp_r0_10;
    u16 temp_r0_2;
    u16 temp_r0_3;
    u16 temp_r0_4;
    u16 temp_r0_5;
    u16 temp_r0_6;
    u16 temp_r0_7;
    u16 temp_r0_8;
    u16 temp_r0_9;

    var_r3 = arg0;
    *arg3 = 0;
    var_r4 = arg1 / 2;
    *arg2 = 0;
    if (var_r4 > 0) {
        temp_r0 = arg1 / 16;
        var_ctr = temp_r0;
        if (temp_r0 != 0) {
            do {
                *arg2 += M2C_FIELD(var_r3, u16 *, 0);
                temp_r0_2 = M2C_FIELD(var_r3, u16 *, 0);
                *arg3 += ~(temp_r0_2 | temp_r0_2);
                *arg2 += M2C_FIELD(var_r3, u16 *, 2);
                temp_r0_3 = M2C_FIELD(var_r3, u16 *, 2);
                *arg3 += ~(temp_r0_3 | temp_r0_3);
                *arg2 += M2C_FIELD(var_r3, u16 *, 4);
                temp_r0_4 = M2C_FIELD(var_r3, u16 *, 4);
                *arg3 += ~(temp_r0_4 | temp_r0_4);
                *arg2 += M2C_FIELD(var_r3, u16 *, 6);
                temp_r0_5 = M2C_FIELD(var_r3, u16 *, 6);
                *arg3 += ~(temp_r0_5 | temp_r0_5);
                *arg2 += M2C_FIELD(var_r3, u16 *, 8);
                temp_r0_6 = M2C_FIELD(var_r3, u16 *, 8);
                *arg3 += ~(temp_r0_6 | temp_r0_6);
                *arg2 += M2C_FIELD(var_r3, u16 *, 0xA);
                temp_r0_7 = M2C_FIELD(var_r3, u16 *, 0xA);
                *arg3 += ~(temp_r0_7 | temp_r0_7);
                *arg2 += M2C_FIELD(var_r3, u16 *, 0xC);
                temp_r0_8 = M2C_FIELD(var_r3, u16 *, 0xC);
                *arg3 += ~(temp_r0_8 | temp_r0_8);
                *arg2 += M2C_FIELD(var_r3, u16 *, 0xE);
                temp_r0_9 = M2C_FIELD(var_r3, u16 *, 0xE);
                var_r3 += 0x10;
                *arg3 += ~(temp_r0_9 | temp_r0_9);
                var_ctr -= 1;
            } while (var_ctr != 0);
            var_r4 &= 7;
            if (var_r4 != 0) {
                goto block_4;
            }
        } else {
block_4:
            var_ctr_2 = var_r4;
            do {
                *arg2 += *var_r3;
                temp_r0_10 = *var_r3;
                var_r3 += 2;
                *arg3 += ~(temp_r0_10 | temp_r0_10);
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
    if ((u16) *arg2 == -1U) {
        *arg2 = 0;
    }
    if ((u16) *arg3 == -1U) {
        *arg3 = 0;
    }
}
#pragma pop

#pragma push
#pragma peephole off
s32 VerifyID(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_ctr;
    s32 var_ctr_2;
    s32 var_r26;
    s32 var_r28;
    u8 var_r31;
    s32 var_r3;
    u16 *temp_r3;
    u16 *var_r25;
    u16 *var_r4;
    u8 temp_r5;
    u16 temp_r5_2;
    u16 temp_r5_3;
    u16 temp_r5_4;
    u16 temp_r5_5;
    u16 temp_r5_6;
    u16 temp_r5_7;
    u16 temp_r5_8;
    u16 temp_r5_9;
    u16 var_r6;
    u32 var_r7;
    s8 temp_r4;
    u64 temp_ret;
    u64 temp_ret_2;
    u8 *var_r29;

    temp_r3 = M2C_FIELD(arg0, u16 **, 0x80);
    if (((u16) M2C_FIELD(temp_r3, u16 *, 0x20) != 0) || ((u16) M2C_FIELD(temp_r3, u16 *, 0x22) != (u16) M2C_FIELD(arg0, u16 *, 8))) {
        return -6;
    }
    temp_r0 = 0x1FC / 2;
    var_r4 = temp_r3;
    var_r7 = 0;
    var_r3 = temp_r0;
    var_r6 = 0;
    if (temp_r0 > 0) {
        temp_r0_2 = 0x1FC / 16;
        var_ctr = temp_r0_2;
        if (temp_r0_2 != 0) {
            do {
                temp_r5 = M2C_FIELD(var_r4, u16 *, 0);
                temp_r5_2 = M2C_FIELD(var_r4, u16 *, 2);
                temp_r5_3 = M2C_FIELD(var_r4, u16 *, 4);
                temp_r5_4 = M2C_FIELD(var_r4, u16 *, 6);
                temp_r5_5 = M2C_FIELD(var_r4, u16 *, 8);
                temp_r5_6 = M2C_FIELD(var_r4, u16 *, 0xA);
                temp_r5_7 = M2C_FIELD(var_r4, u16 *, 0xC);
                temp_r5_8 = M2C_FIELD(var_r4, u16 *, 0xE);
                var_r6 = var_r6 + temp_r5 + temp_r5_2 + temp_r5_3 + temp_r5_4 + temp_r5_5 + temp_r5_6 + temp_r5_7 + temp_r5_8;
                var_r7 = var_r7 + ~(temp_r5 | temp_r5) + ~(temp_r5_2 | temp_r5_2) + ~(temp_r5_3 | temp_r5_3) + ~(temp_r5_4 | temp_r5_4) + ~(temp_r5_5 | temp_r5_5) + ~(temp_r5_6 | temp_r5_6) + ~(temp_r5_7 | temp_r5_7) + ~(temp_r5_8 | temp_r5_8);
                var_r4 += 0x10;
                var_ctr -= 1;
            } while (var_ctr != 0);
            var_r3 &= 7;
            if (var_r3 != 0) {
                goto block_7;
            }
        } else {
block_7:
            var_ctr_2 = var_r3;
            do {
                temp_r5_9 = *var_r4;
                var_r4 += 2;
                var_r6 += temp_r5_9;
                var_r7 += ~(temp_r5_9 | temp_r5_9);
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
    if (var_r6 == -1U) {
        var_r6 = 0;
    }
    if (var_r7 == -1U) {
        var_r7 = 0;
    }
    if (((u16) M2C_FIELD(temp_r3, u16 *, 0x1FC) != var_r6) || ((u16) M2C_FIELD(temp_r3, u16 *, 0x1FE) != var_r7)) {
        return -6;
    }
    var_r31 = M2C_FIELD(temp_r3, s32 *, 0xC);
    var_r28 = M2C_FIELD(temp_r3, s32 *, 0x10);
    var_r25 = temp_r3;
    /* draft: did not compile: var_r29 = __OSLockSramEx() + (((arg0 - &lbl_8031C9E0) / 272) * 0xC); */
    var_r26 = 0;
loop_17:
    temp_ret = __shr2i((var_r31 * 0x41C64E6D) + MULTU_HI(var_r28, 0x41C64E6D) + (var_r28 * 0) + M2C_CARRY, (var_r28 * 0x41C64E6D) + 0x3039, 0x10);
    temp_r4 = (u32) temp_ret;
    if ((u8) *var_r25 != (u8) (temp_r4 + *var_r29)) {
        __OSUnlockSramEx(0);
        return -6;
    }
    temp_ret_2 = __shr2i((temp_ret * 0x41C64E6D) + MULTU_HI(temp_r4, 0x41C64E6D) + (temp_r4 * 0) + M2C_CARRY, (temp_r4 * 0x41C64E6D) + 0x3039, 0x10);
    var_r26 += 1;
    var_r28 = (u32) temp_ret_2 & 0x7FFF;
    var_r31 = temp_ret_2 & 0;
    var_r29 += 1;
    var_r25 += 1;
    if (var_r26 >= 0xC) {
        __OSUnlockSramEx(0);
        if ((u16) M2C_FIELD(temp_r3, u16 *, 0x24) != fn_800D86CC()) {
            return -0xD;
        }
        return 0;
    }
    goto loop_17;
}
#pragma pop
