/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK DCFlushRange(u32, M2C_UNK);
M2C_UNK DCFlushRangeNoSync(u32, M2C_UNK);
M2C_UNK DCInvalidateRange(s32);
M2C_UNK DCStoreRangeNoSync(s32, M2C_UNK, M2C_UNK, s32, u32, s32);
s32 fn_8012F394();
u32 fn_8012FF68();
extern M2C_UNK lbl_8033BE10;
extern s32 lbl_80350E08;
extern u32 lbl_80350E28;
extern u32 lbl_80350E30;
extern u32 lbl_80350E34;
extern u32 lbl_80350E38;
extern u32 lbl_80350E3C;
extern u8 lbl_80350E74;
extern u8 lbl_80350E75;

s32 fn_80126C18(u8 arg0, u8 arg1, s32 arg2);
void salInitHRTFBuffer(void);
void salActivateStudio(u8 arg0, s8 arg1, s32 arg2);
void fn_80127154(u8 arg0);
s32 salCheckVolErrorAndResetDelta(s16 *arg0, s16 *arg1, u16 *arg2, u16 arg3, s32 arg4, s32 arg5);
void sal_setup_dspvol(u16 *arg0, u16 *arg1, s16 arg2);
void sal_update_hostplayinfo(void *arg0);
void DoDepopFade(s32 *arg0, s16 *arg1, s32 *arg2);
void fn_801273D0(void *arg0, void *arg1);
void SortVoices(s32 arg0, s32 arg1, s32 arg2, void *arg_sp0);

s32 fn_80126C18(u8 arg0, u8 arg1, s32 arg2) { return 0; } /* draft: stub */

#pragma push
#pragma peephole off
void salInitHRTFBuffer(void) {
    /* draft: did not compile: memset(lbl_80350E30, 0, 0x100); */
    DCFlushRangeNoSync(lbl_80350E30, 0x100);
}
#pragma pop

void salActivateStudio(u8 arg0, s8 arg1, s32 arg2) {
    s32 temp_r31;
    void *temp_r28;
    void *temp_r28_2;
    void *temp_r28_3;
    void *temp_r3;
    void *temp_r3_2;

    temp_r31 = 0xBC;
    temp_r31 *= arg0;
    temp_r28 = &lbl_8033BE10 + temp_r31;
    /* draft: did not compile: memset(M2C_FIELD(temp_r28, s32 *, 0x28), 0, 0x3C00); */
    DCFlushRangeNoSync(M2C_FIELD(temp_r28, s32 *, 0x28), 0x3C00);
    /* draft: did not compile: memset(*(&lbl_8033BE10 + temp_r31), 0, 0x36); */
    M2C_FIELD(temp_r3, s32 *, 0xC) = 0;
    temp_r3 = &lbl_8033BE10 + temp_r31;
    M2C_FIELD(temp_r3, s32 *, 8) = 0;
    M2C_FIELD(temp_r3, s32 *, 4) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x18) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x14) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x24) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x20) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x1C) = 0;
    DCFlushRangeNoSync((unsigned long)(*(&lbl_8033BE10 + temp_r31)), (long)(0x36));
    temp_r28_2 = &lbl_8033BE10 + temp_r31;
    /* draft: did not compile: memset(M2C_FIELD(temp_r28_2, s32 *, 0x30), 0, 0x780); */
    DCFlushRangeNoSync(M2C_FIELD(temp_r28_2, s32 *, 0x30), 0x780);
    temp_r28_3 = &lbl_8033BE10 + temp_r31;
    /* draft: did not compile: memset(M2C_FIELD(temp_r28_3, s32 *, 0x3C), 0, 0x780); */
    DCFlushRangeNoSync(M2C_FIELD(temp_r28_3, s32 *, 0x3C), 0x780);
    temp_r3_2 = &lbl_8033BE10 + temp_r31;
    M2C_FIELD(temp_r3_2, s32 *, 0x48) = 0;
    M2C_FIELD(temp_r3_2, s32 *, 0x4C) = 0;
    M2C_FIELD(temp_r3_2, u8 *, 0x50) = 1;
    M2C_FIELD(temp_r3_2, u8 *, 0x51) = arg1;
    M2C_FIELD(temp_r3_2, u8 *, 0x52) = 0;
    M2C_FIELD(temp_r3_2, s32 *, 0x54) = arg2;
    M2C_FIELD(temp_r3_2, s32 *, 0xB0) = 0;
    M2C_FIELD(temp_r3_2, s32 *, 0xAC) = 0;
}

void fn_80127154(u8 arg0) {
    M2C_FIELD((&lbl_8033BE10 + (arg0 * 0xBC)), s8 *, 0x50) = 0;
}

s32 salCheckVolErrorAndResetDelta(s16 *arg0, s16 *arg1, u16 *arg2, u16 arg3, s32 arg4, s32 arg5) {
    s16 temp_r0;
    s8 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r3;
    s32 temp_r3_2;
    u16 temp_r9;

    temp_r9 = *arg2;
    if (arg3 != temp_r9) {
        temp_r0 = (s16) arg3 - (s16) temp_r9;
        if ((temp_r0 >= 0x20) && (temp_r0 < 0xA0)) {
            temp_r0_2 = temp_r0 >> 5;
            if ((s16) temp_r0_2 < 5) {
                temp_r3 = (s16) temp_r0_2 * 2;
                /* draft: did not compile: *(arg4 + temp_r3) = *(arg4 + temp_r3) | arg5; */
            }
            *arg1 = 1;
            *arg2 += (s16) temp_r0_2 << 5;
            return 1;
        }
        if ((temp_r0 <= -0x20) && (temp_r0 > -0xA0)) {
            temp_r0_3 = -temp_r0 >> 5;
            if ((s16) temp_r0_3 < 5) {
                temp_r3_2 = (s16) temp_r0_3 * 2;
                /* draft: did not compile: *(arg4 + temp_r3_2) = *(arg4 + temp_r3_2) | arg5; */
            }
            *arg1 = 0xFFFF;
            *arg2 -= temp_r0_3 << 5;
            return 1;
        }
        if ((arg3 == 0) && (temp_r0 > -0x20)) {
            *arg2 = 0;
            *arg0 = 0;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        *arg1 = 0;
        return 0;
    }
    *arg1 = 0;
    return 0;
}

void sal_setup_dspvol(u16 *arg0, u16 *arg1, s16 arg2) {
    *arg0 = (arg2 - (s16) *arg1) / 160;
    *arg1 += (s16) *arg0 * 0xA0;
}

void sal_update_hostplayinfo(void *arg0) {
    u32 temp_r4;
    u32 var_r5;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x8C) == 0U) {
        if ((u16) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 8) != 2) {
            var_r5 = M2C_FIELD(arg0, s32 *, 0xE0) << 5;
        } else {
            var_r5 = 0x200000;
        }
        temp_r4 = M2C_FIELD(arg0, u32 *, 0xDC);
        M2C_FIELD(arg0, u32 *, 0xDC) = (u32) (temp_r4 + (var_r5 << 0x10));
        if (temp_r4 > (u32) M2C_FIELD(arg0, u32 *, 0xDC)) {
            M2C_FIELD(arg0, s32 *, 0xD8) = (s32) ((var_r5 >> 0x10U) + M2C_FIELD(arg0, s32 *, 0xD8) + 1);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0xD8) = (s32) (M2C_FIELD(arg0, s32 *, 0xD8) + (var_r5 >> 0x10U));
    }
}

void DoDepopFade(s32 *arg0, s16 *arg1, s32 *arg2) {
    s16 var_r0;
    s16 var_r0_2;
    s32 temp_r0;

    temp_r0 = *arg2;
    if (temp_r0 <= -0xA0) {
        if (temp_r0 <= -0xC80) {
            var_r0 = 0x14;
        } else {
            var_r0 = (s16) (-temp_r0 / 160);
        }
        *arg1 = var_r0;
    } else if (temp_r0 >= 0xA0) {
        if (temp_r0 >= 0xC80) {
            var_r0_2 = -0x14;
        } else {
            var_r0_2 = (s16) (-temp_r0 / 160);
        }
        *arg1 = var_r0_2;
    } else {
        *arg1 = 0;
    }
    *arg0 = *arg2;
    *arg2 += *arg1 * 0xA0;
}

void fn_801273D0(void *arg0, void *arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r0_8;
    s32 temp_r0_9;
    s32 var_r4;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_r5_3;
    s32 var_r5_4;
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r6_3;
    s32 var_r6_4;
    void *temp_r4;

    M2C_FIELD(arg1, s8 *, 0xED) = 0;
    var_r6 = 0x7FFFFF;
    M2C_FIELD(M2C_FIELD(arg1, void **, 0), s16 *, 0xE) = 0;
    temp_r4 = M2C_FIELD(arg1, void **, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + (s16) M2C_FIELD(temp_r4, u16 *, 0x52));
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 > 0x7FFFFF) {

    } else {
        var_r6 = -0x7FFFFF;
        if (temp_r0 < 0xFF800001) {

        } else {
            var_r6 = temp_r0;
        }
    }
    M2C_FIELD(arg0, s32 *, 4) = var_r6;
    var_r6_2 = 0x7FFFFF;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + (s16) M2C_FIELD(temp_r4, u16 *, 0x58));
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r0_2 > 0x7FFFFF) {

    } else {
        var_r6_2 = -0x7FFFFF;
        if (temp_r0_2 < 0xFF800001) {

        } else {
            var_r6_2 = temp_r0_2;
        }
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r6_2;
    if (M2C_FIELD(temp_r4, u16 *, 0xC) & 4) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + (s16) M2C_FIELD(temp_r4, u16 *, 0x5E));
        var_r5 = 0x7FFFFF;
        temp_r0_3 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_r0_3 > 0x7FFFFF) {

        } else {
            var_r5 = -0x7FFFFF;
            if (temp_r0_3 < 0xFF800001) {

            } else {
                var_r5 = temp_r0_3;
            }
        }
        M2C_FIELD(arg0, s32 *, 0xC) = var_r5;
    }
    if (M2C_FIELD(temp_r4, u16 *, 0xC) & 1) {
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + (s16) M2C_FIELD(temp_r4, u16 *, 0x54));
        var_r5_2 = 0x7FFFFF;
        temp_r0_4 = M2C_FIELD(arg0, s32 *, 0x10);
        if (temp_r0_4 > 0x7FFFFF) {

        } else {
            var_r5_2 = -0x7FFFFF;
            if (temp_r0_4 < 0xFF800001) {

            } else {
                var_r5_2 = temp_r0_4;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x10) = var_r5_2;
        var_r6_3 = 0x7FFFFF;
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + (s16) M2C_FIELD(temp_r4, u16 *, 0x5A));
        temp_r0_5 = M2C_FIELD(arg0, s32 *, 0x14);
        if (temp_r0_5 > 0x7FFFFF) {

        } else {
            var_r6_3 = -0x7FFFFF;
            if (temp_r0_5 < 0xFF800001) {

            } else {
                var_r6_3 = temp_r0_5;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x14) = var_r6_3;
        if (M2C_FIELD(temp_r4, u16 *, 0xC) & 0x14) {
            M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + (s16) M2C_FIELD(temp_r4, u16 *, 0x60));
            var_r5_3 = 0x7FFFFF;
            temp_r0_6 = M2C_FIELD(arg0, s32 *, 0x18);
            if (temp_r0_6 > 0x7FFFFF) {

            } else {
                var_r5_3 = -0x7FFFFF;
                if (temp_r0_6 < 0xFF800001) {

                } else {
                    var_r5_3 = temp_r0_6;
                }
            }
            M2C_FIELD(arg0, s32 *, 0x18) = var_r5_3;
        }
    }
    if (M2C_FIELD(temp_r4, u16 *, 0xC) & 0x12) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + (s16) M2C_FIELD(temp_r4, u16 *, 0x56));
        var_r5_4 = 0x7FFFFF;
        temp_r0_7 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_r0_7 > 0x7FFFFF) {

        } else {
            var_r5_4 = -0x7FFFFF;
            if (temp_r0_7 < 0xFF800001) {

            } else {
                var_r5_4 = temp_r0_7;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = var_r5_4;
        var_r6_4 = 0x7FFFFF;
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + (s16) M2C_FIELD(temp_r4, u16 *, 0x5C));
        temp_r0_8 = M2C_FIELD(arg0, s32 *, 0x20);
        if (temp_r0_8 > 0x7FFFFF) {

        } else {
            var_r6_4 = -0x7FFFFF;
            if (temp_r0_8 < 0xFF800001) {

            } else {
                var_r6_4 = temp_r0_8;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r6_4;
        if (M2C_FIELD(temp_r4, u16 *, 0xC) & 4) {
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + (s16) M2C_FIELD(temp_r4, u16 *, 0x62));
            var_r4 = 0x7FFFFF;
            temp_r0_9 = M2C_FIELD(arg0, s32 *, 0x24);
            if (temp_r0_9 > 0x7FFFFF) {

            } else {
                var_r4 = -0x7FFFFF;
                if (temp_r0_9 < 0xFF800001) {

                } else {
                    var_r4 = temp_r0_9;
                }
            }
            M2C_FIELD(arg0, s32 *, 0x24) = var_r4;
        }
    }
}

void SortVoices(s32 arg0, s32 arg1, s32 arg2, void *arg_sp0) { } /* draft: stub */
