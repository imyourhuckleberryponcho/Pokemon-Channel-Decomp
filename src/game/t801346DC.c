/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_801301D8(void *, M2C_UNK, u8, u8);
M2C_UNK fn_8013095C(void *, M2C_UNK, u8);
M2C_UNK fn_801309C4(void *, M2C_UNK, void *);
M2C_UNK fn_80130C80(void *);
M2C_UNK fn_80130E58(void *, u16, u16);
M2C_UNK fn_801311F8(void *);
M2C_UNK fn_80131FDC(void *, s32, s32);
M2C_UNK fn_8013418C(void **, s32, s32, s32, M2C_UNK, void *);
extern M2C_UNK lbl_802AE010;
extern M2C_UNK lbl_802AEB30;
extern s32 lbl_80346EA0;
extern s32 lbl_80346EA4;
extern M2C_UNK lbl_802AF9F8;
extern s32 lbl_80346EA8;
void *fn_800A8CF8(M2C_UNK);
M2C_UNK fn_800A8D20();
M2C_UNK OSInitThreadQueue(void *);
M2C_UNK OSRegisterResetFunction(M2C_UNK *);
M2C_UNK OSRegisterVersion(s32);
extern M2C_UNK lbl_802AFA50;
extern M2C_UNK lbl_80346EB0;
extern s32 lbl_80350360;
extern s32 lbl_80350EC8;
extern s32 lbl_80350ECC;
M2C_UNK OSClearContext(M2C_UNK *);
M2C_UNK OSSetCurrentContext(M2C_UNK *);
M2C_UNK OSWakeupThread(void *, M2C_UNK *);
s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32);
M2C_UNK OSSleepThread();
M2C_UNK __OSReschedule();
M2C_UNK *fn_800C5410();
extern M2C_UNK lbl_803470C0;
M2C_UNK OSInitAlarm();
M2C_UNK DSPInit();
extern M2C_UNK lbl_802AFA60;
extern M2C_UNK lbl_80346FC0;
extern s32 lbl_80350ED0;
M2C_UNK __GBASync(s32);
extern M2C_UNK __GBASyncCallback;

void fn_801346DC(void *arg0, void *arg1);
void fn_80134B44(void **arg0, void *arg1, s32 arg2);
void fn_80134F98(s32 arg2);
void fn_80134FBC(void **arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
void fn_80135444(void *arg0, u32 arg1, void *arg2, u32 arg3, u32 arg4, s32 arg5);
void fn_80135668(void *arg0, u32 arg1, void *arg2, u32 arg3, u32 arg4, s32 arg5);
void fn_801358C8(s32 arg0, void *arg1, s32 arg3, s32 arg4);
void fn_80135988(s32 arg0, void *arg1, s32 arg3, s32 arg4);
void fn_80135A70(void *arg0, u32 arg1, void *arg2, u32 arg3, u32 arg4, s32 arg5);
void *fn_80135B68(s32 arg0);
s32 fn_80135BC0(u32 arg0);
s32 fn_80135BF4(void *arg0, void *arg1, u32 arg2, s32 arg3, s32 arg4, u32 arg5);
s32 fn_80135D48(void *arg0, u32 arg1, u32 arg2);
void fn_80135DFC(void);
s32 fn_80135EBC(void);
void fn_80135ECC(s32 arg0);
void fn_80135F40(s32 arg0, s32 arg1);
void fn_80135FE0(s32 arg0, s32 arg1, M2C_UNK *arg2);
void fn_801360D4(void);
void fn_801360D8(s32 arg0);
s8 fn_8013610C(s32 arg0);
void fn_8013617C(s32 arg0, s32 arg1);
s32 fn_8013629C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void ShortCommandProc(s32 arg0);
void GBAInit(void);
void fn_80136408(s32 arg0, s32 arg1);
void fn_80136498(s32 arg0, s32 arg1);
s32 fn_80136528(void);
void ReadProc(s32 arg0);
void GBARead(s32 arg0, s32 arg1, s32 arg2);
void WriteProc(s32 arg0);

void fn_801346DC(void *arg0, void *arg1) { } /* draft: stub */

void fn_80134B44(void **arg0, void *arg1, s32 arg2) { } /* draft: stub */

void fn_80134F98(s32 arg2) {
    /* draft: did not compile: fn_80134FBC(arg2); */
}

void fn_80134FBC(void **arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80135444(void *arg0, u32 arg1, void *arg2, u32 arg3, u32 arg4, s32 arg5) {
    s32 temp_r0_2;
    s32 temp_r0_4;
    s32 temp_r12_2;
    s32 temp_r31;
    s32 var_r0;
    s32 var_r5;
    u32 temp_r9;
    u32 var_r10;
    u32 var_r7;
    u8 *var_r4;
    u8 temp_r0;
    u8 temp_r0_3;
    u8 temp_r12;
    u8 temp_r9_2;
    void *var_r8;

    var_r7 = arg4;
    if (arg1 != 0U) {
        temp_r9 = var_r7 >> 1U;
        var_r10 = temp_r9 + 1;
        if (!(var_r7 & 1)) {
            var_r10 = temp_r9;
        }
        if (arg3 == 1U) {
            var_r10 += 2;
            lbl_80346EA0 = arg5;
        } else if (arg3 == 3U) {
            var_r10 += 3;
            lbl_80346EA0 = arg5;
        }
        if (var_r10 & 1) {
            var_r10 += 1;
        }
        var_r8 = arg2;
        /* draft: did not compile: var_r4 = arg1 + (var_r10 * lbl_80346EA0); */
        if (arg3 == 1U) {
            temp_r0 = M2C_FIELD(var_r4, u8 *, 1);
            /* draft: did not compile: var_r8 = arg2 + 4; */
            temp_r9_2 = M2C_FIELD(var_r4, u8 *, 0);
            var_r4 += 2;
            var_r7 -= 1;
            M2C_FIELD(arg0, s32 *, 0) = (s32) (s16) (((temp_r9_2 << 8) & 0xFF00) | (temp_r0 & 0x80 & ~0xFF00));
            M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_r0 & 0x7F);
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0);
            M2C_FIELD(arg2, s16 *, 2) = (s16) temp_r0_2;
            M2C_FIELD(arg2, s16 *, 0) = (s16) temp_r0_2;
        } else if (arg3 == 3U) {
            /* draft: did not compile: var_r8 = arg2 + 4; */
            var_r7 -= 1;
            M2C_FIELD(arg0, s32 *, 0) = (s32) (s16) ((M2C_FIELD(var_r4, u8 *, 1) & ~0xFF00) | ((M2C_FIELD(var_r4, u8 *, 0) << 8) & 0xFF00));
            temp_r0_3 = M2C_FIELD(var_r4, u8 *, 2);
            var_r4 += 3;
            M2C_FIELD(arg0, s32 *, 4) = (s32) temp_r0_3;
            temp_r0_4 = M2C_FIELD(arg0, s32 *, 0);
            M2C_FIELD(arg2, s16 *, 2) = (s16) temp_r0_4;
            M2C_FIELD(arg2, s16 *, 0) = (s16) temp_r0_4;
        }
        var_r0 = M2C_FIELD(arg0, s32 *, 0);
        var_r5 = M2C_FIELD(arg0, s32 *, 4);
loop_26:
        if (var_r7 != 0) {
            temp_r12 = *var_r4;
            temp_r31 = (temp_r12 >> 4U) & 7;
            if (!(temp_r12 & 0x80)) {
                var_r0 += *(&lbl_802AE010 + (var_r5 << 5) + (temp_r31 * 4));
                if (var_r0 > 0x7FFF) {
                    var_r0 = 0x7FFF;
                }
            } else {
                var_r0 -= *(&lbl_802AE010 + (var_r5 << 5) + (temp_r31 * 4));
                if (var_r0 < -0x8000) {
                    var_r0 = -0x8000;
                }
            }
            var_r5 = (s32) *(&lbl_802AEB30 + (var_r5 * 8) + temp_r31);
            M2C_FIELD(var_r8, s16 *, 0) = (s16) var_r0;
            M2C_FIELD(var_r8, s16 *, 2) = (s16) var_r0;
            if (var_r7 != 1) {
                temp_r12_2 = temp_r12 & 7;
                if (!(temp_r12 & 8)) {
                    var_r0 += *(&lbl_802AE010 + (var_r5 << 5) + (temp_r12_2 * 4));
                    if (var_r0 > 0x7FFF) {
                        var_r0 = 0x7FFF;
                    }
                } else {
                    var_r0 -= *(&lbl_802AE010 + (var_r5 << 5) + (temp_r12_2 * 4));
                    if (var_r0 < -0x8000) {
                        var_r0 = -0x8000;
                    }
                }
                var_r4 += 1;
                var_r7 -= 2;
                var_r5 = (s32) *(&lbl_802AEB30 + (var_r5 * 8) + temp_r12_2);
                M2C_FIELD(var_r8, s16 *, 4) = (s16) var_r0;
                M2C_FIELD(var_r8, s16 *, 6) = (s16) var_r0;
                /* draft: did not compile: var_r8 += 8; */
                goto loop_26;
            }
        }
        M2C_FIELD(arg0, s32 *, 0) = var_r0;
        M2C_FIELD(arg0, s32 *, 4) = var_r5;
    }
}

void fn_80135668(void *arg0, u32 arg1, void *arg2, u32 arg3, u32 arg4, s32 arg5) {
    s32 temp_r30;
    s32 temp_r31_2;
    s32 var_r0;
    s32 var_r5;
    s32 var_r6;
    s32 var_r9;
    u32 var_ctr;
    u32 var_r10;
    u8 var_r7;
    u8 *var_r4;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r31;
    u8 temp_r9;
    void *var_r8;

    var_r7 = arg4;
    if (arg1 != 0U) {
        var_r10 = var_r7;
        if (arg3 == 1U) {
            var_r10 += 4;
            lbl_80346EA4 = arg5;
        } else if (arg3 == 3U) {
            var_r10 += 6;
            lbl_80346EA4 = arg5;
        }
        if (var_r10 & 1) {
            var_r10 += 1;
        }
        var_r8 = arg2;
        /* draft: did not compile: var_r4 = arg1 + (var_r10 * lbl_80346EA4); */
        if (arg3 == 1U) {
            temp_r0 = M2C_FIELD(var_r4, u8 *, 1);
            /* draft: did not compile: var_r8 = arg2 + 4; */
            var_r7 -= 1;
            M2C_FIELD(arg0, s32 *, 0) = (s32) ((temp_r0 & 0x80 & ~0xFF00) | ((M2C_FIELD(var_r4, u8 *, 0) << 8) & 0xFF00));
            M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_r0 & 0x7F);
            temp_r0_2 = M2C_FIELD(var_r4, u8 *, 3);
            temp_r9 = M2C_FIELD(var_r4, u8 *, 2);
            var_r4 += 4;
            M2C_FIELD(arg0, s32 *, 8) = (s32) (s16) (((temp_r9 << 8) & 0xFF00) | (temp_r0_2 & 0x80 & ~0xFF00));
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_r0_2 & 0x7F);
            M2C_FIELD(arg2, s16 *, 2) = (s16) M2C_FIELD(arg0, s32 *, 0);
            M2C_FIELD(arg2, s16 *, 0) = (s16) M2C_FIELD(arg0, s32 *, 8);
        } else if (arg3 == 3U) {
            /* draft: did not compile: var_r8 = arg2 + 4; */
            var_r7 -= 1;
            M2C_FIELD(arg0, s32 *, 0) = (s32) (s16) ((M2C_FIELD(var_r4, u8 *, 1) & ~0xFF00) | ((M2C_FIELD(var_r4, u8 *, 0) << 8) & 0xFF00));
            M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(var_r4, u8 *, 2);
            M2C_FIELD(arg0, s32 *, 8) = (s32) (s16) ((M2C_FIELD(var_r4, u8 *, 4) & ~0xFF00) | ((M2C_FIELD(var_r4, u8 *, 3) << 8) & 0xFF00));
            temp_r0_3 = M2C_FIELD(var_r4, u8 *, 5);
            var_r4 += 6;
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) temp_r0_3;
            M2C_FIELD(arg2, s16 *, 2) = (s16) M2C_FIELD(arg0, s32 *, 0);
            M2C_FIELD(arg2, s16 *, 0) = (s16) M2C_FIELD(arg0, s32 *, 8);
        }
        var_r0 = M2C_FIELD(arg0, s32 *, 0);
        var_r5 = M2C_FIELD(arg0, s32 *, 4);
        var_r6 = M2C_FIELD(arg0, s32 *, 8);
        var_r9 = M2C_FIELD(arg0, s32 *, 0xC);
        var_ctr = var_r7;
        if (var_r7 != 0) {
            do {
                temp_r31 = *var_r4;
                temp_r30 = (temp_r31 >> 4U) & 7;
                if (!(temp_r31 & 0x80)) {
                    var_r0 += *(&lbl_802AE010 + (var_r5 << 5) + (temp_r30 * 4));
                    if (var_r0 > 0x7FFF) {
                        var_r0 = 0x7FFF;
                    }
                } else {
                    var_r0 -= *(&lbl_802AE010 + (var_r5 << 5) + (temp_r30 * 4));
                    if (var_r0 < -0x8000) {
                        var_r0 = -0x8000;
                    }
                }
                temp_r31_2 = temp_r31 & 7;
                var_r5 = (s32) *(&lbl_802AEB30 + (var_r5 * 8) + temp_r30);
                M2C_FIELD(var_r8, s16 *, 2) = (s16) var_r0;
                if (!(temp_r31 & 8)) {
                    var_r6 += *(&lbl_802AE010 + (var_r9 << 5) + (temp_r31_2 * 4));
                    if (var_r6 > 0x7FFF) {
                        var_r6 = 0x7FFF;
                    }
                } else {
                    var_r6 -= *(&lbl_802AE010 + (var_r9 << 5) + (temp_r31_2 * 4));
                    if (var_r6 < -0x8000) {
                        var_r6 = -0x8000;
                    }
                }
                var_r4 += 1;
                var_r9 = (s32) *(&lbl_802AEB30 + (var_r9 * 8) + temp_r31_2);
                M2C_FIELD(var_r8, s16 *, 0) = (s16) var_r6;
                /* draft: did not compile: var_r8 += 4; */
                var_ctr -= 1;
            } while (var_ctr != 0);
        }
        M2C_FIELD(arg0, s32 *, 0) = var_r0;
        M2C_FIELD(arg0, s32 *, 4) = var_r5;
        M2C_FIELD(arg0, s32 *, 8) = var_r6;
        M2C_FIELD(arg0, s32 *, 0xC) = var_r9;
    }
}

void fn_801358C8(s32 arg0, void *arg1, s32 arg3, s32 arg4) {
    s32 var_ctr_2;
    s32 var_r6;
    u32 temp_r0;
    u32 var_ctr;
    u8 temp_r0_10;
    u8 temp_r0_11;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_4;
    u8 temp_r0_5;
    u8 temp_r0_6;
    u8 temp_r0_7;
    u8 temp_r0_8;
    u8 temp_r0_9;
    void *var_r3;
    void *var_r4;

    var_r4 = arg1;
    var_r6 = arg3;
    /* draft: did not compile: var_r3 = arg0 + (var_r6 * 2 * arg4); */
    if (var_r6 > 0) {
        temp_r0 = (u32) var_r6 >> 2U;
        var_ctr = temp_r0;
        if (temp_r0 != 0) {
            do {
                temp_r0_2 = M2C_FIELD(var_r3, u8 *, 0);
                M2C_FIELD(var_r4, u8 *, 2) = temp_r0_2;
                M2C_FIELD(var_r4, u8 *, 0) = temp_r0_2;
                temp_r0_3 = M2C_FIELD(var_r3, u8 *, 1);
                M2C_FIELD(var_r4, u8 *, 3) = temp_r0_3;
                M2C_FIELD(var_r4, u8 *, 1) = temp_r0_3;
                temp_r0_4 = M2C_FIELD(var_r3, u8 *, 2);
                M2C_FIELD(var_r4, u8 *, 6) = temp_r0_4;
                M2C_FIELD(var_r4, u8 *, 4) = temp_r0_4;
                temp_r0_5 = M2C_FIELD(var_r3, u8 *, 3);
                M2C_FIELD(var_r4, u8 *, 7) = temp_r0_5;
                M2C_FIELD(var_r4, u8 *, 5) = temp_r0_5;
                temp_r0_6 = M2C_FIELD(var_r3, u8 *, 4);
                M2C_FIELD(var_r4, u8 *, 0xA) = temp_r0_6;
                M2C_FIELD(var_r4, u8 *, 8) = temp_r0_6;
                temp_r0_7 = M2C_FIELD(var_r3, u8 *, 5);
                M2C_FIELD(var_r4, u8 *, 0xB) = temp_r0_7;
                M2C_FIELD(var_r4, u8 *, 9) = temp_r0_7;
                temp_r0_8 = M2C_FIELD(var_r3, u8 *, 6);
                M2C_FIELD(var_r4, u8 *, 0xE) = temp_r0_8;
                M2C_FIELD(var_r4, u8 *, 0xC) = temp_r0_8;
                temp_r0_9 = M2C_FIELD(var_r3, u8 *, 7);
                /* draft: did not compile: var_r3 += 8; */
                M2C_FIELD(var_r4, u8 *, 0xF) = temp_r0_9;
                M2C_FIELD(var_r4, u8 *, 0xD) = temp_r0_9;
                /* draft: did not compile: var_r4 += 0x10; */
                var_ctr -= 1;
            } while (var_ctr != 0);
            var_r6 &= 3;
            if (var_r6 != 0) {
                goto block_4;
            }
        } else {
block_4:
            var_ctr_2 = var_r6;
            do {
                temp_r0_10 = M2C_FIELD(var_r3, u8 *, 0);
                M2C_FIELD(var_r4, u8 *, 2) = temp_r0_10;
                M2C_FIELD(var_r4, u8 *, 0) = temp_r0_10;
                temp_r0_11 = M2C_FIELD(var_r3, u8 *, 1);
                /* draft: did not compile: var_r3 += 2; */
                M2C_FIELD(var_r4, u8 *, 3) = temp_r0_11;
                M2C_FIELD(var_r4, u8 *, 1) = temp_r0_11;
                /* draft: did not compile: var_r4 += 4; */
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
}

void fn_80135988(s32 arg0, void *arg1, s32 arg3, s32 arg4) {
    s32 var_ctr_2;
    s32 var_r6;
    u32 temp_r0;
    u32 var_ctr;
    u8 temp_r0_2;
    u8 temp_r0_3;
    void *var_r3;
    void *var_r4;

    var_r4 = arg1;
    var_r6 = arg3;
    /* draft: did not compile: var_r3 = arg0 + (var_r6 * 4 * arg4); */
    if (var_r6 > 0) {
        temp_r0 = (u32) var_r6 >> 2U;
        var_ctr = temp_r0;
        if (temp_r0 != 0) {
            do {
                M2C_FIELD(var_r4, u8 *, 0) = (u8) M2C_FIELD(var_r3, u8 *, 0);
                M2C_FIELD(var_r4, u8 *, 1) = (u8) M2C_FIELD(var_r3, u8 *, 1);
                M2C_FIELD(var_r4, u8 *, 2) = (u8) M2C_FIELD(var_r3, u8 *, 2);
                M2C_FIELD(var_r4, u8 *, 3) = (u8) M2C_FIELD(var_r3, u8 *, 3);
                M2C_FIELD(var_r4, u8 *, 4) = (u8) M2C_FIELD(var_r3, u8 *, 4);
                M2C_FIELD(var_r4, u8 *, 5) = (u8) M2C_FIELD(var_r3, u8 *, 5);
                M2C_FIELD(var_r4, u8 *, 6) = (u8) M2C_FIELD(var_r3, u8 *, 6);
                M2C_FIELD(var_r4, u8 *, 7) = (u8) M2C_FIELD(var_r3, u8 *, 7);
                M2C_FIELD(var_r4, u8 *, 8) = (u8) M2C_FIELD(var_r3, u8 *, 8);
                M2C_FIELD(var_r4, u8 *, 9) = (u8) M2C_FIELD(var_r3, u8 *, 9);
                M2C_FIELD(var_r4, u8 *, 0xA) = (u8) M2C_FIELD(var_r3, u8 *, 0xA);
                M2C_FIELD(var_r4, u8 *, 0xB) = (u8) M2C_FIELD(var_r3, u8 *, 0xB);
                M2C_FIELD(var_r4, u8 *, 0xC) = (u8) M2C_FIELD(var_r3, u8 *, 0xC);
                M2C_FIELD(var_r4, u8 *, 0xD) = (u8) M2C_FIELD(var_r3, u8 *, 0xD);
                M2C_FIELD(var_r4, u8 *, 0xE) = (u8) M2C_FIELD(var_r3, u8 *, 0xE);
                temp_r0_2 = M2C_FIELD(var_r3, u8 *, 0xF);
                /* draft: did not compile: var_r3 += 0x10; */
                M2C_FIELD(var_r4, u8 *, 0xF) = temp_r0_2;
                /* draft: did not compile: var_r4 += 0x10; */
                var_ctr -= 1;
            } while (var_ctr != 0);
            var_r6 &= 3;
            if (var_r6 != 0) {
                goto block_4;
            }
        } else {
block_4:
            var_ctr_2 = var_r6;
            do {
                M2C_FIELD(var_r4, u8 *, 0) = (u8) M2C_FIELD(var_r3, u8 *, 0);
                M2C_FIELD(var_r4, u8 *, 1) = (u8) M2C_FIELD(var_r3, u8 *, 1);
                M2C_FIELD(var_r4, u8 *, 2) = (u8) M2C_FIELD(var_r3, u8 *, 2);
                temp_r0_3 = M2C_FIELD(var_r3, u8 *, 3);
                /* draft: did not compile: var_r3 += 4; */
                M2C_FIELD(var_r4, u8 *, 3) = temp_r0_3;
                /* draft: did not compile: var_r4 += 4; */
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
}

void fn_80135A70(void *arg0, u32 arg1, void *arg2, u32 arg3, u32 arg4, s32 arg5) {
    s32 temp_r11;
    s32 temp_r6;
    s32 var_r10;
    s32 var_r4;
    s32 var_r9;
    u8 var_ctr;
    s8 temp_r0;
    u8 temp_r4;
    void *var_r5;
    void *var_r8;

    var_r5 = arg2;
    if (arg1 != 0U) {
        temp_r11 = (arg3 >> 7U) & 1;
        var_r10 = arg4 * 2;
        temp_r6 = *(&lbl_802AF9F8 + ((arg3 * 4) & 0xC));
        if (temp_r11 != 0) {
            var_r10 += 4;
            lbl_80346EA8 = arg5;
        }
        /* draft: did not compile: var_r8 = arg1 + (var_r10 * lbl_80346EA8); */
        if (temp_r11 != 0) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) (s16) ((M2C_FIELD(var_r8, u8 *, 1) & ~0xFF00) | ((M2C_FIELD(var_r8, u8 *, 0) << 8) & 0xFF00));
            temp_r4 = M2C_FIELD(var_r8, u8 *, 2);
            temp_r0 = M2C_FIELD(var_r8, u8 *, 3);
            /* draft: did not compile: var_r8 += 4; */
            M2C_FIELD(arg0, s32 *, 8) = (s32) (s16) (((temp_r4 << 8) & 0xFF00) | (temp_r0 & ~0xFF00));
        }
        var_r4 = M2C_FIELD(arg0, s32 *, 0);
        var_r9 = M2C_FIELD(arg0, s32 *, 8);
        var_ctr = arg4;
        if (arg4 != 0) {
            do {
                /* draft: did not compile: var_r4 += *(temp_r6 + (M2C_FIELD(var_r8, u8 *, 0) * 4)); */
                if (var_r4 < -0x8000) {
                    var_r4 = -0x8000;
                }
                if (var_r4 > 0x7FFF) {
                    var_r4 = 0x7FFF;
                }
                M2C_FIELD(var_r5, s16 *, 2) = (s16) var_r4;
                /* draft: did not compile: var_r9 += *(temp_r6 + (M2C_FIELD(var_r8, u8 *, 1) * 4)); */
                if (var_r9 < -0x8000) {
                    var_r9 = -0x8000;
                }
                if (var_r9 > 0x7FFF) {
                    var_r9 = 0x7FFF;
                }
                M2C_FIELD(var_r5, s16 *, 0) = (s16) var_r9;
                /* draft: did not compile: var_r8 += 2; */
                /* draft: did not compile: var_r5 += 4; */
                var_ctr -= 1;
            } while (var_ctr != 0);
        }
        M2C_FIELD(arg0, s32 *, 0) = var_r4;
        M2C_FIELD(arg0, s32 *, 8) = var_r9;
    }
}

void *fn_80135B68(s32 arg0) {
    void *temp_r3;

    temp_r3 = fn_800A8CF8(0x24);
    if (temp_r3 == NULL) {
        return NULL;
    }
    /* draft: did not compile: M2C_STRUCT_COPY(temp_r3, arg0, 8); */
    M2C_FIELD(temp_r3, s32 *, 0x20) = (s32) M2C_FIELD(temp_r3, u8 *, 2);
    return temp_r3;
}

s32 fn_80135BC0(u32 arg0) {
    if (arg0 == 0U) {
        return 0;
    }
    fn_800A8D20();
    return 1;
}

s32 fn_80135BF4(void *arg0, void *arg1, u32 arg2, s32 arg3, s32 arg4, u32 arg5) {
    s32 temp_r0;
    s32 temp_r0_2;
    s8 var_r31;
    u16 temp_r10;
    u32 var_r7;
    u8 temp_r9;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg5 == 0U) {
        return 0;
    }
    temp_r9 = M2C_FIELD(arg0, u8 *, 2);
    var_r7 = arg2;
    temp_r10 = M2C_FIELD(arg1, u16 *, 2);
    if (temp_r9 & 0x80) {
        var_r7 = arg2 >> 1U;
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0) == 1) {
        temp_r0 = temp_r9 & 0x7F;
        var_r31 = arg2 * 4;
        switch (temp_r0) {                          /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            /* draft: did not compile: fn_80135444(arg0 + 8, arg3, arg5, temp_r10, arg4); */
            break;
        case 1:                                     /* switch 1 */
            /* draft: did not compile: fn_801358C8(arg3, arg5, temp_r10, var_r7, arg4); */
            break;
        default:                                    /* switch 1 */
            var_r31 = 0;
            break;
        }
    } else {
        temp_r0_2 = temp_r9 & 0x7F;
        var_r31 = arg2 * 4;
        switch (temp_r0_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            /* draft: did not compile: fn_80135668(arg0 + 8, arg3, arg5, temp_r10, arg4); */
            break;
        case 1:                                     /* switch 2 */
            /* draft: did not compile: fn_80135988(arg3, arg5, temp_r10, var_r7, arg4); */
            break;
        case 4:                                     /* switch 2 */
            /* draft: did not compile: fn_80135A70(arg0 + 8, arg3, arg5, temp_r10, arg4); */
            break;
        default:                                    /* switch 2 */
            var_r31 = 0;
            break;
        }
    }
    return var_r31;
}

s32 fn_80135D48(void *arg0, u32 arg1, u32 arg2) {
    s32 temp_r0;
    s8 temp_r3;
    s32 temp_r6;
    u32 var_r3;
    u32 var_r7;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 == 0) {
        return 0;
    }
    if (arg2 == 0) {
        return 0;
    }
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x20);
    temp_r0 = temp_r6 & 0x7F;
    switch (temp_r0) {                              /* irregular */
    case 0:
        var_r7 = 4;
        break;
    case 1:
        var_r7 = 0x10;
        break;
    case 4:
        var_r7 = 8;
        break;
    default:
        var_r7 = 4;
        break;
    }
    var_r3 = (u32) (((u32) (arg1 * 8) / var_r7) + 2) / arg2;
    if ((u8) M2C_FIELD(arg0, u8 *, 0) == 1) {
        var_r3 *= 2;
    }
    temp_r3 = ((var_r3 * 2) + 0x1F) & 0xFFFFFFE0;
    if (temp_r6 & 0x80) {
        return temp_r3 * 2;
    }
    return temp_r3;
}

void fn_80135DFC(void) {
    u32 temp_r30;
    M2C_UNK *var_r29;
    s32 var_r28;

    if ((s32) lbl_80350EC8 == 0) {
        lbl_80350EC8 = 1;
        var_r29 = &lbl_80346EB0;
        temp_r30 = (u32) ((*(u32 *)0x800000F8 / 500000) * 0x64) >> 3U;
        var_r28 = 0;
        OSRegisterVersion(lbl_80350360);
        do {
            M2C_FIELD(var_r29, u32 *, 0x34) = temp_r30;
            M2C_FIELD(var_r29, s32 *, 0x30) = 0;
            OSInitThreadQueue(var_r29 + 0x24);
            var_r28 += 1;
            var_r29 += 0x40;
        } while (var_r28 < 4);
        lbl_80350ECC = 0;
        OSRegisterResetFunction(&lbl_802AFA50);
    }
}

s32 fn_80135EBC(void) {
    lbl_80350ECC = 1;
    return 1;
}

void fn_80135ECC(s32 arg0) {
    void *temp_r31;

    temp_r31 = &lbl_80346EB0 + (arg0 << 6);
    if ((s32) M2C_FIELD(temp_r31, u8 *, 0x20) != 0) {
        memset(M2C_FIELD(temp_r31, void **, 0x18), 0, 4);
    } else {
        /* draft: did not compile: memcpy(M2C_FIELD(temp_r31, void **, 0x18), temp_r31 + 5, 4); */
    }
    M2C_FIELD(M2C_FIELD(temp_r31, void **, 0x18), u8 *, 4) = (u8) M2C_FIELD(temp_r31, u8 *, 0x20);
}

void fn_80135F40(s32 arg0, s32 arg1) {
    M2C_UNK (*var_r0)();
    s32 var_r3;
    void *temp_r5;

    temp_r5 = &lbl_80346EB0 + (arg0 << 6);
    if (((M2C_UNK (*)()) M2C_FIELD(temp_r5, M2C_UNK (**)(), 0x1C)) != NULL) {
        var_r3 = -2;
    } else {
        M2C_FIELD(temp_r5, s8 *, 0) = 1;
        /* draft: did not compile: var_r0 = fn_801360D8; */
        M2C_FIELD(temp_r5, s32 *, 0x18) = arg1;
        if (fn_801360D8 != NULL) {

        } else {
            /* draft: did not compile: var_r0 = fn_801360D4; */
        }
        M2C_FIELD(temp_r5, M2C_UNK (**)(), 0x1C) = var_r0;
        /* draft: did not compile: var_r3 = fn_8013629C(arg0, 1, 4, fn_80135ECC); */
    }
    if (var_r3 != 0) {
        return;
    }
    fn_8013610C(arg0);
}

void fn_80135FE0(s32 arg0, s32 arg1, M2C_UNK *arg2) {
    M2C_UNK sp18;
    M2C_UNK (*temp_r12)(s32);
    M2C_UNK (*temp_r12_2)(s32, s8);
    void *temp_r31;

    temp_r31 = &lbl_80346EB0 + (arg0 << 6);
    if ((s32) lbl_80350ECC == 0) {
        if (arg1 & 8) {
            M2C_FIELD(temp_r31, s8 *, 0x20) = -1U;
        } else if (arg1 & 7) {
            M2C_FIELD(temp_r31, s8 *, 0x20) = -3U;
        } else {
            M2C_FIELD(temp_r31, s8 *, 0x20) = 0U;
        }
        temp_r12 = M2C_FIELD(temp_r31, M2C_UNK (**)(s32), 0x38);
        if (temp_r12 != NULL) {
            M2C_FIELD(temp_r31, M2C_UNK (**)(s32), 0x38) = NULL;
            temp_r12(arg0);
        }
        if (((M2C_UNK (*)(s32, s8)) M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s8), 0x1C)) != NULL) {
            OSClearContext(&sp18);
            OSSetCurrentContext(&sp18);
            temp_r12_2 = M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s8), 0x1C);
            M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s8), 0x1C) = NULL;
            temp_r12_2(arg0, M2C_FIELD(temp_r31, s8 *, 0x20));
            OSClearContext(&sp18);
            OSSetCurrentContext(arg2);
        }
    }
}

void fn_801360D4(void) {

}

void fn_801360D8(s32 arg0) {
    OSWakeupThread(&lbl_80346EB0 + (arg0 << 6) + 0x24, &lbl_80346EB0);
}

s8 fn_8013610C(s32 arg0) {
    s32 temp_r30;
    s32 temp_r3;
    s8 temp_r31;
    void *temp_r31_2;

    temp_r3 = arg0 << 6;
    temp_r31_2 = &lbl_80346EB0 + temp_r3;
    temp_r30 = OSDisableInterrupts(temp_r3, &lbl_80346EB0);
loop_2:
    if ((u32) M2C_FIELD(temp_r31_2, u32 *, 0x1C) != 0U) {
        /* draft: did not compile: OSSleepThread(temp_r31_2 + 0x24); */
        goto loop_2;
    }
    temp_r31 = (s8) M2C_FIELD(temp_r31_2, u8 *, 0x20);
    OSRestoreInterrupts(temp_r30);
    return temp_r31;
}

void fn_8013617C(s32 arg0, s32 arg1) { } /* draft: stub */

s32 fn_8013629C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;
    s32 temp_r7;
    void *temp_r30;

    temp_r7 = arg0 << 6;
    temp_r30 = &lbl_80346EB0 + temp_r7;
    temp_r3 = OSDisableInterrupts(&lbl_80346EB0, temp_r7);
    M2C_FIELD(temp_r30, s32 *, 0x38) = arg3;
    M2C_FIELD(temp_r30, s32 *, 0xC) = arg1;
    M2C_FIELD(temp_r30, s32 *, 0x10) = arg2;
    SIGetTypeAsync(arg0, fn_8013617C);
    OSRestoreInterrupts(temp_r3);
    return 0;
}

void ShortCommandProc(s32 arg0) {
    void *temp_r3;

    temp_r3 = &lbl_803470C0 + (arg0 << 8);
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0x20) == 0) {
        if (((u8) M2C_FIELD(temp_r3, u8 *, 5) != 0) || ((u8) M2C_FIELD(temp_r3, u8 *, 6) != 4)) {
            M2C_FIELD(temp_r3, s32 *, 0x20) = 1;
            return;
        }
        *M2C_FIELD(temp_r3, s8 **, 0x14) = M2C_FIELD(temp_r3, u8 *, 7) & 0x3A;
    }
}

void GBAInit(void) {
    M2C_UNK *var_r28;
    M2C_UNK *var_r29;
    s32 var_r27;
    u32 temp_r30;

    var_r29 = &lbl_803470C0;
    var_r27 = 0;
    var_r28 = &lbl_80346FC0;
    temp_r30 = (u32) ((*(u32 *)0x800000F8 / 500000) * 0x3C) >> 3U;
    do {
        M2C_FIELD(var_r29, u32 *, 0x34) = temp_r30;
        M2C_FIELD(var_r29, s32 *, 0x30) = 0;
        OSInitThreadQueue(var_r29 + 0x24);
        var_r27 += 1;
        M2C_FIELD(var_r29, M2C_UNK **, 0xF8) = var_r28;
        var_r29 += 0x100;
        var_r28 += 0x40;
    } while (var_r27 < 4);
    OSInitAlarm();
    DSPInit();
    lbl_80350ED0 = 0;
    OSRegisterResetFunction(&lbl_802AFA60);
}

void fn_80136408(s32 arg0, s32 arg1) {
    s32 var_r3;
    void *temp_r7;

    temp_r7 = &lbl_803470C0 + (arg0 << 8);
    if ((M2C_UNK *) M2C_FIELD(temp_r7, M2C_UNK **, 0x1C) != NULL) {
        var_r3 = 2;
    } else {
        M2C_FIELD(temp_r7, s8 *, 0) = 0;
        M2C_FIELD(temp_r7, s32 *, 0x14) = arg1;
        M2C_FIELD(temp_r7, M2C_UNK **, 0x1C) = &__GBASyncCallback;
        var_r3 = __GBATransfer(arg0, 1, 3, ShortCommandProc);
    }
    if (var_r3 != 0) {
        return;
    }
    __GBASync(arg0);
}

void fn_80136498(s32 arg0, s32 arg1) {
    s32 var_r3;
    void *temp_r7;

    temp_r7 = &lbl_803470C0 + (arg0 << 8);
    if ((M2C_UNK *) M2C_FIELD(temp_r7, M2C_UNK **, 0x1C) != NULL) {
        var_r3 = 2;
    } else {
        M2C_FIELD(temp_r7, s8 *, 0) = 0xFF;
        M2C_FIELD(temp_r7, s32 *, 0x14) = arg1;
        M2C_FIELD(temp_r7, M2C_UNK **, 0x1C) = &__GBASyncCallback;
        var_r3 = __GBATransfer(arg0, 1, 3, ShortCommandProc);
    }
    if (var_r3 != 0) {
        return;
    }
    __GBASync(arg0);
}

s32 fn_80136528(void) {
    lbl_80350ED0 = 1;
    return 1;
}

void ReadProc(s32 arg0) {
    void *temp_r31;

    temp_r31 = &lbl_803470C0 + (arg0 << 8);
    if ((s32) M2C_FIELD(temp_r31, s32 *, 0x20) == 0) {
        /* draft: did not compile: memcpy(M2C_FIELD(temp_r31, s32 *, 0x18), temp_r31 + 5, 4); */
        *M2C_FIELD(temp_r31, s8 **, 0x14) = M2C_FIELD(temp_r31, u8 *, 9) & 0x3A;
    }
}

void GBARead(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r3;
    void *temp_r8;

    temp_r8 = &lbl_803470C0 + (arg0 << 8);
    if ((M2C_UNK *) M2C_FIELD(temp_r8, M2C_UNK **, 0x1C) != NULL) {
        var_r3 = 2;
    } else {
        M2C_FIELD(temp_r8, s8 *, 0) = 0x14;
        M2C_FIELD(temp_r8, s32 *, 0x18) = arg1;
        M2C_FIELD(temp_r8, s32 *, 0x14) = arg2;
        M2C_FIELD(temp_r8, M2C_UNK **, 0x1C) = &__GBASyncCallback;
        var_r3 = __GBATransfer(arg0, 1, 5, ReadProc, &__GBASyncCallback);
    }
    if (var_r3 != 0) {
        return;
    }
    __GBASync(arg0);
}

void WriteProc(s32 arg0) {
    void *temp_r3;

    temp_r3 = &lbl_803470C0 + (arg0 << 8);
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0x20) == 0) {
        *M2C_FIELD(temp_r3, s8 **, 0x14) = M2C_FIELD(temp_r3, u8 *, 5) & 0x3A;
    }
}
