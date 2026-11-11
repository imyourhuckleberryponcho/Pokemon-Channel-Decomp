/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 OSDisableInterrupts(M2C_UNK *, M2C_UNK *);
M2C_UNK OSReport(void *);
M2C_UNK OSRestoreInterrupts(s32);
M2C_UNK fn_800C5B7C(M2C_UNK *, M2C_UNK, void *, s32, u32);
void *fn_800D13D0(s32);
M2C_UNK fn_800D1B74(void *, void *, void *, void *, void *);
M2C_UNK fn_800D1E48(u16, u16, u8, u16, u16, u16, u16, u16);
extern M2C_UNK lbl_802A7138;
extern M2C_UNK lbl_8031C848;
extern M2C_UNK lbl_8034FFA4;
extern u32 lbl_80350A1C;
extern s16 lbl_80350A20;
extern s16 lbl_80350A22;
extern s32 lbl_80350A24;
extern s32 lbl_80350A28;
extern s32 lbl_80350A2C;
extern u32 lbl_80350A50;
extern u32 lbl_80350A54;
u64 __shl2i(M2C_UNK, M2C_UNK, s32);
u64 __shr2u(s32, s32, M2C_UNK);
extern s32 lbl_80350A08;
extern s32 lbl_80350A30;
extern s32 lbl_80350A38;
extern s32 lbl_80350A3C;
extern s32 lbl_80350A48;
extern s32 lbl_80350A04;
extern void *lbl_80350A40;
extern M2C_UNK lbl_8031C938;
s32 SIGetType();
extern M2C_UNK lbl_8031C9A0;
extern s32 lbl_8034FFB8;
extern s32 lbl_8034FFBC;
M2C_UNK fn_800CAF94(s32, s32);
M2C_UNK SIEnablePolling(s32);
M2C_UNK SIGetResponse(s32, M2C_UNK *);
extern s32 lbl_8034FFB4;
extern s32 lbl_80350A5C;
extern s32 lbl_80350A60;
M2C_UNK OSSetWirelessID(s32, M2C_UNK, s32, s32, s32, s32);
M2C_UNK SIDisablePolling(u32);
extern s32 lbl_80350A68;
extern s32 lbl_80350A6C;
extern s32 lbl_80350A70;
extern M2C_UNK lbl_8031C990;
extern u32 lbl_8034FFC0;
extern M2C_UNK lbl_8034FFC8;
extern M2C_UNK lbl_8034FFCC;
extern s32 lbl_80350A64;
u64 OSGetTime();
M2C_UNK OSRegisterResetFunction(M2C_UNK *);
M2C_UNK OSRegisterVersion(s32);
M2C_UNK SIRefreshSamplingRate(M2C_UNK);
u64 __shr2i(u64, u32, M2C_UNK, s32);
extern u32 __PADSpec;
extern M2C_UNK lbl_802A7550;
extern s32 lbl_8034FFB0;
extern u32 lbl_80350920;
extern s32 lbl_80350A58;
s32 SIIsChanBusy(s32);
s32 SIGetStatus(s32);
M2C_UNK fn_800CAFA8();
M2C_UNK fn_800D3F8C();

void VIConfigure(void *arg0);
void VIFlush(void);
void VISetNextFrameBuffer(s32 arg0);
void VISetBlack(s32 arg0);
s32 GetRetraceCount(void);
s32 fn_800D2A30(void);
s32 fn_800D2A98(void);
u32 fn_800D2B40(void);
void VIGetTvFormat();
s32 VIGetDTVStatus(void);
void UpdateOrigin(s32 arg0);
void PADOriginCallback(s32 arg1);
void fn_800D2EE4(s32 arg0, s32 arg1);
void PADProbeCallback(s32 arg1);
void PADTypeAndStatusCallback(s32 arg1);
void fn_800D33A8(s32 arg0, s32 arg1);
s32 fn_800D34DC(s32 arg0);
s32 fn_800D35DC(void);
s32 fn_800D37F4(void *arg0);
void fn_800D3BA0(s32 arg0, u32 arg1);
void PADSetSpec(s32 arg0);
void SPEC0_MakeStatus(void *arg1, void *arg2);
void SPEC1_MakeStatus(void *arg1, void *arg2);

void VIConfigure(void *arg0) {
    s32 sp8;
    s16 temp_r5;
    s16 var_r3;
    s16 var_r5;
    s16 var_r7;
    s32 temp_r0_2;
    s32 temp_r10;
    s32 temp_r10_2;
    s32 temp_r14;
    s32 temp_r16;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_r8_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r4;
    s32 var_r5_3;
    s32 var_r7_2;
    s32 var_r7_3;
    s32 var_r7_4;
    s32 var_r9;
    u16 var_r0;
    u16 var_r0_2;
    u16 var_r0_5;
    u16 var_r0_6;
    u16 var_r0_7;
    u16 var_r5_2;
    u32 temp_r0;
    u32 temp_r0_3;
    u32 temp_r16_2;
    u32 temp_r4;
    u8 var_r4_2;
    void *temp_r3;

    temp_r14 = OSDisableInterrupts(&lbl_8031C848, &lbl_802A7138);
    temp_r4 = M2C_FIELD(arg0, u32 *, 0) & 3;
    if ((u32) M2C_FIELD(&lbl_8031C848, u32 *, 0x114) != temp_r4) {
        lbl_80350A24 = 1;
        M2C_FIELD(&lbl_8031C848, u32 *, 0x114) = temp_r4;
    }
    temp_r16 = *(s32 *)0x800000CC;
    temp_r0 = (u32) M2C_FIELD(arg0, u32 *, 0) >> 2U;
    if ((temp_r0 == 4) && ((u32) lbl_80350A54 == 0U)) {
        lbl_80350A54 = 1U;
        OSReport(&lbl_802A7138 + 0x260);
        OSReport(&lbl_802A7138 + 0x28C);
        OSReport(&lbl_802A7138 + 0x2B8);
        OSReport(&lbl_802A7138 + 0x2E4);
        OSReport(&lbl_802A7138 + 0x310);
        OSReport(&lbl_802A7138 + 0x33C);
        OSReport(&lbl_802A7138 + 0x260);
    }
    switch (temp_r16) {                             /* switch 1; irregular */
    case 2:                                         /* switch 1 */
    case 6:                                         /* switch 1 */
    case 0:                                         /* switch 1 */
        switch (temp_r0) {                          /* switch 2; irregular */
        case 0:                                     /* switch 2 */
        case 2:                                     /* switch 2 */
            break;
        case 6:                                     /* switch 2 */
            break;
        }
        break;
    case 5:                                         /* switch 1 */
        if ((temp_r0 != 1) && (temp_r0 != 5)) {
        default:                                    /* switch 1 */
            fn_800C5B7C(&lbl_8034FFA4, 0x75C, &lbl_802A7138 + 0x368, temp_r16, temp_r0);
        }
        break;
    }
    if ((temp_r0 == 0) || (temp_r0 == 2)) {
        M2C_FIELD(&lbl_8031C848, u32 *, 0x118) = (u32) temp_r16;
    } else {
        M2C_FIELD(&lbl_8031C848, u32 *, 0x118) = temp_r0;
    }
    M2C_FIELD(&lbl_8031C848, u16 *, 0xF0) = (u16) M2C_FIELD(arg0, u16 *, 0xA);
    if ((u32) M2C_FIELD(&lbl_8031C848, u32 *, 0x114) == 1) {
        var_r0 = (M2C_FIELD(arg0, u16 *, 0xC) * 2) & 0xFFFE;
    } else {
        var_r0 = M2C_FIELD(arg0, u16 *, 0xC);
    }
    M2C_FIELD(&lbl_8031C848, u16 *, 0xF2) = var_r0;
    M2C_FIELD(&lbl_8031C848, u16 *, 0xF4) = (u16) M2C_FIELD(arg0, u16 *, 0xE);
    M2C_FIELD(&lbl_8031C848, u16 *, 0x102) = (u16) M2C_FIELD(arg0, u16 *, 4);
    M2C_FIELD(&lbl_8031C848, u16 *, 0x104) = (u16) M2C_FIELD(arg0, u16 *, 8);
    M2C_FIELD(&lbl_8031C848, s32 *, 0x110) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(&lbl_8031C848, u16 *, 0x10A) = (u16) M2C_FIELD(&lbl_8031C848, u16 *, 0x102);
    M2C_FIELD(&lbl_8031C848, u16 *, 0x10C) = (u16) M2C_FIELD(&lbl_8031C848, u16 *, 0x104);
    M2C_FIELD(&lbl_8031C848, u16 *, 0x106) = 0U;
    M2C_FIELD(&lbl_8031C848, u16 *, 0x108) = 0U;
    if ((u32) M2C_FIELD(&lbl_8031C848, u32 *, 0x114) == 2) {
        var_r0_2 = M2C_FIELD(&lbl_8031C848, u16 *, 0x10C);
    } else if ((u32) M2C_FIELD(&lbl_8031C848, u32 *, 0x114) == 3) {
        var_r0_2 = M2C_FIELD(&lbl_8031C848, u16 *, 0x10C);
    } else if ((s32) M2C_FIELD(&lbl_8031C848, s32 *, 0x110) == 0) {
        var_r0_2 = (M2C_FIELD(&lbl_8031C848, u16 *, 0x10C) * 2) & 0xFFFE;
    } else {
        var_r0_2 = M2C_FIELD(&lbl_8031C848, u16 *, 0x10C);
    }
    M2C_FIELD(&lbl_8031C848, u16 *, 0xF6) = var_r0_2;
    if ((u32) M2C_FIELD(&lbl_8031C848, u32 *, 0x114) == 3) {
        var_r0_3 = 1;
    } else {
        var_r0_3 = 0;
    }
    M2C_FIELD(&lbl_8031C848, s32 *, 0x134) = var_r0_3;
    temp_r3 = fn_800D13D0((M2C_FIELD(&lbl_8031C848, u32 *, 0x118) * 4) + M2C_FIELD(&lbl_8031C848, u32 *, 0x114));
    M2C_FIELD(&lbl_8031C848, void **, 0x144) = temp_r3;
    var_r5 = 0x2D0 - M2C_FIELD(&lbl_8031C848, u16 *, 0xF4);
    var_r3 = (s16) M2C_FIELD(&lbl_8031C848, u16 *, 0xF0) + lbl_80350A20;
    if (var_r3 > var_r5) {

    } else {
        if (var_r3 < 0) {
            var_r3 = 0;
        }
        var_r5 = var_r3;
    }
    M2C_FIELD(&lbl_8031C848, s16 *, 0xF8) = var_r5;
    if ((s32) M2C_FIELD(&lbl_8031C848, s32 *, 0x110) == 0) {
        var_r4 = 2;
    } else {
        var_r4 = 1;
    }
    temp_r5 = M2C_FIELD(&lbl_8031C848, u16 *, 0xF2) & 1;
    var_r7 = (s16) M2C_FIELD(&lbl_8031C848, u16 *, 0xF2) + lbl_80350A22;
    if (var_r7 > temp_r5) {

    } else {
        var_r7 = temp_r5;
    }
    M2C_FIELD(&lbl_8031C848, s16 *, 0xFA) = var_r7;
    temp_r0_2 = ((s16) M2C_FIELD(temp_r3, u16 *, 2) * 2) - temp_r5;
    temp_r10 = (s16) M2C_FIELD(&lbl_8031C848, u16 *, 0xF2) + ((s16) M2C_FIELD(&lbl_8031C848, u16 *, 0xF6) + lbl_80350A22);
    if ((temp_r10 - temp_r0_2) > 0) {
        var_r9 = temp_r10 - temp_r0_2;
    } else {
        var_r9 = 0;
    }
    temp_r10_2 = (s16) M2C_FIELD(&lbl_8031C848, u16 *, 0xF2) + lbl_80350A22;
    if ((temp_r10_2 - temp_r5) < 0) {
        var_r7_2 = temp_r10_2 - temp_r5;
    } else {
        var_r7_2 = 0;
    }
    M2C_FIELD(&lbl_8031C848, u16 *, 0xFC) = (u16) ((M2C_FIELD(&lbl_8031C848, u16 *, 0xF6) + var_r7_2) - var_r9);
    temp_r8 = (s16) M2C_FIELD(&lbl_8031C848, u16 *, 0xF2) + lbl_80350A22;
    if ((temp_r8 - temp_r5) < 0) {
        var_r7_3 = temp_r8 - temp_r5;
    } else {
        var_r7_3 = 0;
    }
    M2C_FIELD(&lbl_8031C848, s16 *, 0xFE) = (s16) (M2C_FIELD(&lbl_8031C848, u16 *, 0x108) - (var_r7_3 / var_r4));
    temp_r8_2 = (s16) M2C_FIELD(&lbl_8031C848, u16 *, 0xF2) + ((s16) M2C_FIELD(&lbl_8031C848, u16 *, 0xF6) + lbl_80350A22);
    if ((temp_r8_2 - temp_r0_2) > 0) {
        var_r7_4 = temp_r8_2 - temp_r0_2;
    } else {
        var_r7_4 = 0;
    }
    temp_r6 = (s16) M2C_FIELD(&lbl_8031C848, u16 *, 0xF2) + lbl_80350A22;
    if ((temp_r6 - temp_r5) < 0) {
        var_r0_4 = temp_r6;
        var_r0_4 -= temp_r5;
    } else {
        var_r0_4 = 0;
    }
    M2C_FIELD(&lbl_8031C848, s16 *, 0x100) = (s16) ((M2C_FIELD(&lbl_8031C848, u16 *, 0x10C) + (var_r0_4 / var_r4)) - (var_r7_4 / var_r4));
    if ((u32) lbl_80350A1C == 0U) {
        M2C_FIELD(&lbl_8031C848, u32 *, 0x118) = 3U;
    }
    if ((u16) (M2C_FIELD(temp_r3, u16 *, 0x18) % 2) != 0) {
        var_r5_2 = M2C_FIELD(temp_r3, u16 *, 0x1A);
    } else {
        var_r5_2 = 0;
    }
    M2C_FIELD(&lbl_8031C848, s16 *, 0x32) = (s16) (var_r5_2 + 1);
    lbl_80350A2C = lbl_80350A2C;
    lbl_80350A28 |= 0x40;
    M2C_FIELD(&lbl_8031C848, s16 *, 0x30) = (s16) (((u16) ((s32) M2C_FIELD(temp_r3, u16 *, 0x18) / 2) + 1) | 0x1000);
    lbl_80350A2C = lbl_80350A2C;
    lbl_80350A28 |= 0x80;
    if (((u32) M2C_FIELD(&lbl_8031C848, u32 *, 0x114) == 2) || ((u32) M2C_FIELD(&lbl_8031C848, u32 *, 0x114) == 3)) {
        var_r5_3 = (M2C_FIELD(&lbl_8031C848, u16 *, 2) & 0xFFFFFFFB) | 4;
    } else {
        var_r5_3 = (M2C_FIELD(&lbl_8031C848, u16 *, 2) & 0xFFFFFFFB & ~4) | ((M2C_FIELD(&lbl_8031C848, u32 *, 0x114) << 2) & 4);
    }
    temp_r5_2 = (var_r5_3 & 0xFFFFFFF7) | (M2C_FIELD(&lbl_8031C848, s32 *, 0x134) * 8);
    if (((u32) M2C_FIELD(&lbl_8031C848, u32 *, 0x118) == 4) || ((u32) (M2C_FIELD(&lbl_8031C848, u32 *, 0x118) - 5) <= 1U)) {
        var_r0_5 = temp_r5_2 & 0xFFFFFCFF;
    } else {
        var_r0_5 = (temp_r5_2 & 0xFFFFFCFF) | (M2C_FIELD(&lbl_8031C848, u32 *, 0x118) << 8);
    }
    M2C_FIELD(&lbl_8031C848, u16 *, 2) = var_r0_5;
    lbl_80350A2C = lbl_80350A2C;
    lbl_80350A28 |= 0x40000000;
    temp_r0_3 = M2C_FIELD(arg0, u32 *, 0);
    if (((s32) temp_r0_3 == 2) || ((s32) temp_r0_3 == 3) || ((s32) temp_r0_3 == 0x1A)) {
        var_r0_6 = (M2C_FIELD(&lbl_8031C848, u16 *, 0x6C) & 0xFFFFFFFE) | 1;
    } else {
        var_r0_6 = M2C_FIELD(&lbl_8031C848, u16 *, 0x6C) & 0xFFFFFFFE;
    }
    M2C_FIELD(&lbl_8031C848, u16 *, 0x6C) = var_r0_6;
    lbl_80350A2C |= 0x200;
    lbl_80350A28 = lbl_80350A28;
    if ((s32) M2C_FIELD(&lbl_8031C848, s32 *, 0x134) != 0) {
        var_r0_7 = M2C_FIELD(&lbl_8031C848, u16 *, 0x10A) * 2;
    } else {
        var_r0_7 = M2C_FIELD(&lbl_8031C848, u16 *, 0x10A);
    }
    if (var_r0_7 < (u16) M2C_FIELD(&lbl_8031C848, u16 *, 0xF4)) {
        M2C_FIELD(&lbl_8031C848, s16 *, 0x4A) = (s16) (((u32) (M2C_FIELD(&lbl_8031C848, u16 *, 0xF4) + ((var_r0_7 << 8) - 1)) / (u16) M2C_FIELD(&lbl_8031C848, u16 *, 0xF4)) | 0x1000);
        lbl_80350A2C |= 0x04000000;
        lbl_80350A28 = lbl_80350A28;
        M2C_FIELD(&lbl_8031C848, u16 *, 0x70) = var_r0_7;
        lbl_80350A2C |= 0x80;
        lbl_80350A28 = lbl_80350A28;
    } else {
        M2C_FIELD(&lbl_8031C848, s16 *, 0x4A) = 0x100;
        lbl_80350A2C |= 0x04000000;
        lbl_80350A28 = lbl_80350A28;
    }
    M2C_FIELD(&lbl_8031C848, u16 *, 6) = (u16) M2C_FIELD(temp_r3, u16 *, 0x1A);
    lbl_80350A2C = lbl_80350A2C;
    lbl_80350A28 |= 0x10000000;
    M2C_FIELD(&lbl_8031C848, s16 *, 4) = (s16) ((M2C_FIELD(temp_r3, u8 *, 0x1E) & ~0xFF00) | ((M2C_FIELD(temp_r3, u8 *, 0x1D) << 8) & 0xFF00));
    lbl_80350A2C = lbl_80350A2C;
    lbl_80350A28 |= 0x20000000;
    temp_r16_2 = (M2C_FIELD(temp_r3, u8 *, 0x1F) + (u16) M2C_FIELD(&lbl_8031C848, s16 *, 0xF8)) - 0x28;
    M2C_FIELD(&lbl_8031C848, s16 *, 0xA) = (s16) (M2C_FIELD(temp_r3, u8 *, 0x1C) | ((temp_r16_2 << 7) & 0xFF80));
    lbl_80350A2C = lbl_80350A2C;
    lbl_80350A28 |= 0x04000000;
    M2C_FIELD(&lbl_8031C848, s16 *, 8) = (s16) ((temp_r16_2 >> 9U) | (((M2C_FIELD(temp_r3, u16 *, 0x20) + (u16) M2C_FIELD(&lbl_8031C848, s16 *, 0xF8) + 0x28) - (0x2D0 - M2C_FIELD(&lbl_8031C848, u16 *, 0xF4))) * 2));
    lbl_80350A2C = lbl_80350A2C;
    lbl_80350A28 |= 0x08000000;
    M2C_FIELD(&lbl_8031C848, s16 *, 0x16) = (s16) (M2C_FIELD(temp_r3, u8 *, 0xC) | (M2C_FIELD(temp_r3, u16 *, 0x10) << 5));
    lbl_80350A2C = lbl_80350A2C;
    lbl_80350A28 |= 0x100000;
    M2C_FIELD(&lbl_8031C848, s16 *, 0x14) = (s16) (M2C_FIELD(temp_r3, u8 *, 0xE) | (M2C_FIELD(temp_r3, u16 *, 0x14) << 5));
    lbl_80350A2C = lbl_80350A2C;
    lbl_80350A28 |= 0x200000;
    M2C_FIELD(&lbl_8031C848, s16 *, 0x1A) = (s16) (M2C_FIELD(temp_r3, u8 *, 0xD) | (M2C_FIELD(temp_r3, u16 *, 0x12) << 5));
    lbl_80350A2C = lbl_80350A2C;
    lbl_80350A28 |= 0x40000;
    M2C_FIELD(&lbl_8031C848, s16 *, 0x18) = (s16) (M2C_FIELD(temp_r3, u8 *, 0xF) | (M2C_FIELD(temp_r3, u16 *, 0x16) << 5));
    lbl_80350A2C = lbl_80350A2C;
    lbl_80350A28 |= 0x80000;
    M2C_FIELD(&lbl_8031C848, u8 *, 0x11C) = (u8) ((s32) (M2C_FIELD(&lbl_8031C848, u16 *, 0x102) + 0xF) / 16);
    if ((s32) M2C_FIELD(&lbl_8031C848, s32 *, 0x110) == 0) {
        var_r4_2 = M2C_FIELD(&lbl_8031C848, u8 *, 0x11C);
    } else {
        var_r4_2 = (M2C_FIELD(&lbl_8031C848, u8 *, 0x11C) * 2) & 0xFE;
    }
    M2C_FIELD(&lbl_8031C848, u8 *, 0x11D) = var_r4_2;
    M2C_FIELD(&lbl_8031C848, u8 *, 0x12C) = (u8) (M2C_FIELD(&lbl_8031C848, u16 *, 0x106) % 16);
    M2C_FIELD(&lbl_8031C848, u8 *, 0x11E) = (u8) ((s32) (M2C_FIELD(&lbl_8031C848, u8 *, 0x12C) + (M2C_FIELD(&lbl_8031C848, u16 *, 0x10A) + 0xF)) / 16);
    M2C_FIELD(&lbl_8031C848, s16 *, 0x48) = (s16) ((M2C_FIELD(&lbl_8031C848, u8 *, 0x11D) & ~0xFF00) | ((M2C_FIELD(&lbl_8031C848, u8 *, 0x11E) << 8) & 0xFF00));
    lbl_80350A2C |= 0x08000000;
    lbl_80350A28 = lbl_80350A28;
    if ((u32) lbl_80350A50 != 0U) {
        fn_800D1B74(&lbl_8031C848 + 0xF0, &lbl_8031C848 + 0x124, &lbl_8031C848 + 0x128, &lbl_8031C848 + 0x13C, &lbl_8031C848 + 0x140);
    }
    sp8 = M2C_FIELD(&lbl_8031C848, s32 *, 0x130);
    fn_800D1E48((u16) M2C_FIELD(&lbl_8031C848, s16 *, 0xFA), M2C_FIELD(&lbl_8031C848, u16 *, 0xFC), M2C_FIELD(temp_r3, u8 *, 0), M2C_FIELD(temp_r3, u16 *, 2), M2C_FIELD(temp_r3, u16 *, 4), M2C_FIELD(temp_r3, u16 *, 6), M2C_FIELD(temp_r3, u16 *, 8), M2C_FIELD(temp_r3, u16 *, 0xA));
    OSRestoreInterrupts(temp_r14);
}

void VIFlush(void) {
    s32 temp_r28;
    s32 temp_r30;
    s32 temp_r3;
    s32 var_r4;
    u32 temp_r4;
    u64 temp_r3_2;
    u64 temp_ret;

    temp_r30 = OSDisableInterrupts((long *)(&lbl_8031C848), (long *)(0));
    lbl_80350A30 |= lbl_80350A24;
    lbl_80350A24 = 0;
    lbl_80350A3C |= lbl_80350A2C;
    lbl_80350A38 |= lbl_80350A28;
loop_5:
    if (((lbl_80350A2C ^ 0) | (lbl_80350A28 ^ 0)) != 0) {
        temp_r28 = lbl_80350A2C;
        var_r4 = CLZ((u32) __shr2u(lbl_80350A28, temp_r28, 0x20));
        if (var_r4 < 0x20) {

        } else {
            var_r4 = CLZ(temp_r28 & ~0) + 0x20;
        }
        temp_r3 = var_r4 * 2;
        M2C_FIELD((&lbl_8031C848 + temp_r3), u16 *, 0x78) = (u16) *(&lbl_8031C848 + temp_r3);
        temp_ret = __shl2i(0, 1, 0x3F - var_r4);
        temp_r3_2 = temp_ret;
        temp_r4 = (u32) temp_ret;
        lbl_80350A2C &= ~(temp_r4 | temp_r4);
        lbl_80350A28 &= ~(temp_r3_2 | temp_r3_2);
        goto loop_5;
    }
    lbl_80350A08 = 1;
    lbl_80350A48 = M2C_FIELD(&lbl_8031C848, s32 *, 0x120);
    OSRestoreInterrupts(temp_r30);
}

void VISetNextFrameBuffer(s32 arg0) {
    s32 temp_r3;

    temp_r3 = OSDisableInterrupts((long *)(&lbl_8031C848), (long *)(0));
    M2C_FIELD(&lbl_8031C848, s32 *, 0x120) = arg0;
    lbl_80350A50 = 1;
    fn_800D1B74(&lbl_8031C848 + 0xF0, &lbl_8031C848 + 0x124, &lbl_8031C848 + 0x128, &lbl_8031C848 + 0x13C, &lbl_8031C848 + 0x140);
    OSRestoreInterrupts(temp_r3);
}

void VISetBlack(s32 arg0) {
    s32 sp8;
    s32 temp_r3;

    temp_r3 = OSDisableInterrupts((long *)(&lbl_8031C848), (long *)(0));
    M2C_FIELD(&lbl_8031C848, s32 *, 0x130) = arg0;
    sp8 = M2C_FIELD(&lbl_8031C848, s32 *, 0x130);
    fn_800D1E48(M2C_FIELD(&lbl_8031C848, u16 *, 0xFA), M2C_FIELD(&lbl_8031C848, u16 *, 0xF6), M2C_FIELD(M2C_FIELD(&lbl_8031C848, void **, 0x144), u8 *, 0), M2C_FIELD(M2C_FIELD(&lbl_8031C848, void **, 0x144), u16 *, 2), M2C_FIELD(M2C_FIELD(&lbl_8031C848, void **, 0x144), u16 *, 4), M2C_FIELD(M2C_FIELD(&lbl_8031C848, void **, 0x144), u16 *, 6), M2C_FIELD(M2C_FIELD(&lbl_8031C848, void **, 0x144), u16 *, 8), M2C_FIELD(M2C_FIELD(&lbl_8031C848, void **, 0x144), u16 *, 0xA));
    OSRestoreInterrupts(temp_r3);
}

s32 GetRetraceCount(void) {
    return lbl_80350A04;
}

s32 fn_800D2A30(void) {
    u32 temp_r6;
    u32 var_r5;

    var_r5 = M2C_FIELD((void *)0xCC002000, u16 *, 0x2C) & 0x7FF;
    do {
        temp_r6 = var_r5;
        var_r5 = M2C_FIELD((void *)0xCC002000, u16 *, 0x2C) & 0x7FF;
    } while (temp_r6 != var_r5);
    if ((u32) (((var_r5 - 1) * 2) + ((u32) ((M2C_FIELD((void *)0xCC002000, u16 *, 0x2E) & 0x7FF) - 1) / (u16) M2C_FIELD(lbl_80350A40, u16 *, 0x1A))) < (u16) M2C_FIELD(lbl_80350A40, u16 *, 0x18)) {
        return 1;
    }
    return 0;
}

s32 fn_800D2A98(void) {
    s32 var_r31;
    u32 temp_r7;
    u32 var_r6;

    OSDisableInterrupts((long *)(0), (long *)(0));
    var_r6 = M2C_FIELD((void *)0xCC002000, u16 *, 0x2C) & 0x7FF;
    do {
        temp_r7 = var_r6;
        var_r6 = M2C_FIELD((void *)0xCC002000, u16 *, 0x2C) & 0x7FF;
    } while (temp_r7 != var_r6);
    if ((u32) (((var_r6 - 1) * 2) + ((u32) ((M2C_FIELD((void *)0xCC002000, u16 *, 0x2E) & 0x7FF) - 1) / (u16) M2C_FIELD(lbl_80350A40, u16 *, 0x1A))) < (u16) M2C_FIELD(lbl_80350A40, u16 *, 0x18)) {
        var_r31 = 1;
    } else {
        var_r31 = 0;
    }
    OSRestoreInterrupts((long)(0));
    return var_r31 ^ 1 ^ (M2C_FIELD(&lbl_8031C938, u16 *, 0xA) & 1);
}

u32 fn_800D2B40(void) {
    s32 temp_r4;
    s32 temp_r6;
    u16 temp_r0;
    u32 temp_r5;
    u32 temp_r7;
    u32 var_r30;
    u32 var_r6;
    void *temp_r31;

    temp_r31 = lbl_80350A40;
    OSDisableInterrupts((long *)(0), (long *)(0));
    var_r6 = M2C_FIELD((void *)0xCC002000, u16 *, 0x2C) & 0x7FF;
    do {
        temp_r7 = var_r6;
        var_r6 = M2C_FIELD((void *)0xCC002000, u16 *, 0x2C) & 0x7FF;
    } while (temp_r7 != var_r6);
    temp_r5 = (M2C_FIELD((void *)0xCC002000, u16 *, 0x2E) & 0x7FF) - 1;
    temp_r6 = var_r6 - 1;
    temp_r4 = temp_r6 * 2;
    var_r30 = temp_r4 + (temp_r5 / (u16) M2C_FIELD(lbl_80350A40, u16 *, 0x1A));
    OSRestoreInterrupts((long)(temp_r4));
    temp_r0 = M2C_FIELD(temp_r31, u16 *, 0x18);
    if (var_r30 >= temp_r0) {
        var_r30 -= temp_r0;
    }
    return var_r30 >> 1U;
}

void VIGetTvFormat() { } /* draft: stub */

s32 VIGetDTVStatus(void) {
    s32 temp_r31;

    OSDisableInterrupts((long *)(0), (long *)(0));
    temp_r31 = *(u16 *)0xCC00206E & 3;
    OSRestoreInterrupts(0xCC000000);
    return temp_r31 & 1;
}

void UpdateOrigin(s32 arg0) {
    s32 temp_r4;
    void *temp_r31;

    temp_r31 = &lbl_8031C9A0 + (arg0 * 0xC);
    temp_r4 = lbl_8034FFBC & 0x700;
    switch (temp_r4) {                              /* irregular */
    case 0x600:
    case 0x700:
    case 0x500:
    case 0x0:
        M2C_FIELD(temp_r31, u8 *, 6) = (u8) (M2C_FIELD(temp_r31, u8 *, 6) & 0xFFFFFFF0);
        M2C_FIELD(temp_r31, u8 *, 7) = (u8) (M2C_FIELD(temp_r31, u8 *, 7) & 0xFFFFFFF0);
        M2C_FIELD(temp_r31, u8 *, 8) = (u8) (M2C_FIELD(temp_r31, u8 *, 8) & 0xFFFFFFF0);
        M2C_FIELD(temp_r31, u8 *, 9) = (u8) (M2C_FIELD(temp_r31, u8 *, 9) & 0xFFFFFFF0);
        break;
    case 0x100:
        M2C_FIELD(temp_r31, u8 *, 4) = (u8) (M2C_FIELD(temp_r31, u8 *, 4) & 0xFFFFFFF0);
        M2C_FIELD(temp_r31, u8 *, 5) = (u8) (M2C_FIELD(temp_r31, u8 *, 5) & 0xFFFFFFF0);
        M2C_FIELD(temp_r31, u8 *, 8) = (u8) (M2C_FIELD(temp_r31, u8 *, 8) & 0xFFFFFFF0);
        M2C_FIELD(temp_r31, u8 *, 9) = (u8) (M2C_FIELD(temp_r31, u8 *, 9) & 0xFFFFFFF0);
        break;
    case 0x200:
        M2C_FIELD(temp_r31, u8 *, 4) = (u8) (M2C_FIELD(temp_r31, u8 *, 4) & 0xFFFFFFF0);
        M2C_FIELD(temp_r31, u8 *, 5) = (u8) (M2C_FIELD(temp_r31, u8 *, 5) & 0xFFFFFFF0);
        M2C_FIELD(temp_r31, u8 *, 6) = (u8) (M2C_FIELD(temp_r31, u8 *, 6) & 0xFFFFFFF0);
        M2C_FIELD(temp_r31, u8 *, 7) = (u8) (M2C_FIELD(temp_r31, u8 *, 7) & 0xFFFFFFF0);
        break;
    }
    M2C_FIELD(temp_r31, u8 *, 2) = (u8) (M2C_FIELD(temp_r31, u8 *, 2) - 0x80);
    M2C_FIELD(temp_r31, u8 *, 3) = (u8) (M2C_FIELD(temp_r31, u8 *, 3) - 0x80);
    M2C_FIELD(temp_r31, u8 *, 4) = (u8) (M2C_FIELD(temp_r31, u8 *, 4) - 0x80);
    M2C_FIELD(temp_r31, u8 *, 5) = (u8) (M2C_FIELD(temp_r31, u8 *, 5) - 0x80);
    if ((lbl_8034FFB8 & (0x80000000U >> arg0)) && ((s8) M2C_FIELD(temp_r31, u8 *, 2) > 0x40) && ((u32) ((SIGetType() & 0xFFFF0000) + 0xF7000000) == 0U)) {
        M2C_FIELD(temp_r31, u8 *, 2) = 0U;
    }
}

void PADOriginCallback(s32 arg1) {
    M2C_UNK sp1C;
    s32 temp_r31;

    if (!(arg1 & 0xF)) {
        UpdateOrigin(lbl_8034FFB4);
        temp_r31 = lbl_8034FFB4;
        lbl_80350A5C |= 0x80000000U >> temp_r31;
        SIGetResponse(temp_r31, &sp1C);
        fn_800CAF94(temp_r31, lbl_8034FFBC | 0x400000);
        SIEnablePolling(lbl_80350A5C);
    }
    lbl_8034FFB4 = CLZ(lbl_80350A60);
    if ((s32) lbl_8034FFB4 != 0x20) {
        lbl_80350A60 &= ~(0x80000000U >> lbl_8034FFB4);
        memset(&lbl_8031C9A0 + (lbl_8034FFB4 * 0xC), 0, 0xC);
        SIGetTypeAsync(lbl_8034FFB4, PADTypeAndStatusCallback);
    }
}

void fn_800D2EE4(s32 arg0, s32 arg1) {
    u8 temp_r31;
    u16 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;
    u32 temp_r30;

    if (lbl_80350A5C & (temp_r30 = 0x80000000U >> arg0)) {
        if (!(arg1 & 0xF)) {
            UpdateOrigin(arg0);
        }
        if (arg1 & 8) {
            temp_r31 = OSDisableInterrupts((long *)(0), (long *)(0));
            SIDisablePolling(temp_r30);
            temp_r8 = ~(temp_r30 | temp_r30);
            temp_r7 = lbl_80350A5C & temp_r8;
            temp_r6 = lbl_80350A68 & temp_r8;
            lbl_80350A5C = temp_r7;
            temp_r5 = lbl_80350A6C & temp_r8;
            lbl_80350A68 = temp_r6;
            lbl_80350A6C = temp_r5;
            lbl_80350A70 &= temp_r8;
            OSSetWirelessID(arg0, 0, temp_r5, temp_r6, temp_r7, temp_r8);
            OSRestoreInterrupts(temp_r31);
        }
    }
}

void PADProbeCallback(s32 arg1) {
    M2C_UNK sp1C;
    s32 temp_r30;

    if (!(arg1 & 0xF)) {
        temp_r30 = lbl_8034FFB4;
        lbl_80350A5C |= 0x80000000U >> temp_r30;
        SIGetResponse(temp_r30, &sp1C);
        fn_800CAF94(temp_r30, lbl_8034FFBC | 0x400000);
        SIEnablePolling(lbl_80350A5C);
        lbl_80350A68 |= 0x80000000U >> lbl_8034FFB4;
    }
    lbl_8034FFB4 = CLZ(lbl_80350A60);
    if ((s32) lbl_8034FFB4 != 0x20) {
        lbl_80350A60 &= ~(0x80000000U >> lbl_8034FFB4);
        memset(&lbl_8031C9A0 + (lbl_8034FFB4 * 0xC), 0, 0xC);
        SIGetTypeAsync(lbl_8034FFB4, PADTypeAndStatusCallback);
    }
}

void PADTypeAndStatusCallback(s32 arg1) {
    M2C_UNK sp1C;
    s32 temp_r29;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r3;
    u32 temp_r28;

    temp_r29 = lbl_8034FFB4;
    temp_r5 = lbl_80350A64;
    temp_r28 = 0x80000000U >> temp_r29;
    lbl_80350A64 = temp_r5 & ~temp_r28;
    var_r3 = 1;
    if (arg1 & 0xF) {
        lbl_8034FFB4 = CLZ(lbl_80350A60);
        if ((s32) lbl_8034FFB4 != 0x20) {
            lbl_80350A60 &= ~(0x80000000U >> lbl_8034FFB4);
            memset(&lbl_8031C990 + (lbl_8034FFB4 * 0xC) + 0x10, 0, 0xC);
            SIGetTypeAsync(lbl_8034FFB4, PADTypeAndStatusCallback);
        }
    } else {
        temp_r6 = arg1 & 0xFFFFFF00;
        *(&lbl_8031C990 + temp_r4) = temp_r6;
        temp_r4 = temp_r29;
        if (((u32) ((arg1 & 0x18000000) + 0xF8000000) != 0U) || !(temp_r6 & 0x01000000)) {
            if ((s32) (lbl_8034FFB4 = CLZ(lbl_80350A60)) != 0x20) {
                lbl_80350A60 &= ~(0x80000000U >> lbl_8034FFB4);
                memset(&lbl_8031C990 + (lbl_8034FFB4 * 0xC) + 0x10, 0, 0xC);
                SIGetTypeAsync(lbl_8034FFB4, PADTypeAndStatusCallback);
            }
        } else if ((u32) lbl_8034FFC0 < 2U) {
            lbl_80350A5C |= temp_r28;
            SIGetResponse(temp_r29, &sp1C);
            fn_800CAF94(temp_r29, lbl_8034FFBC | 0x400000);
            SIEnablePolling(lbl_80350A5C);
            lbl_8034FFB4 = CLZ(lbl_80350A60);
            if ((s32) lbl_8034FFB4 != 0x20) {
                lbl_80350A60 &= ~(0x80000000U >> lbl_8034FFB4);
                memset(&lbl_8031C990 + (lbl_8034FFB4 * 0xC) + 0x10, 0, 0xC);
                SIGetTypeAsync(lbl_8034FFB4, PADTypeAndStatusCallback);
            }
        } else {
            if (!(temp_r6 & 0x80000000) || (temp_r6 & 0x04000000)) {
                if ((u32) (temp_r5 & temp_r28) != 0) {
                    var_r3 = SITransfer(temp_r29, &lbl_8034FFCC, 3, &lbl_8031C990 + (temp_r29 * 0xC) + 0x10, 0xA, PADOriginCallback, 0, 0);
                } else {
                    var_r3 = SITransfer(temp_r29, &lbl_8034FFC8, 1, &lbl_8031C990 + (temp_r29 * 0xC) + 0x10, 0xA, PADOriginCallback, 0, 0);
                }
            } else if ((temp_r6 & 0x100000) && !(temp_r6 & 0x80000) && !(temp_r6 & 0x40000)) {
                if (temp_r6 & 0x40000000) {
                    var_r3 = SITransfer(temp_r29, &lbl_8034FFC8, 1, &lbl_8031C990 + (temp_r29 * 0xC) + 0x10, 0xA, PADOriginCallback, 0, 0);
                } else {
                    var_r3 = SITransfer(temp_r29, &lbl_8031C990 + (temp_r4 * 4) + 0x40, 3, &lbl_8031C990 + (temp_r29 * 0xC) + 0x10, 8, PADProbeCallback, 0, 0);
                }
            }
            if (var_r3 == 0) {
                lbl_8034FFB4 = CLZ(lbl_80350A60);
                lbl_80350A70 |= temp_r28;
                if (lbl_8034FFB4 != 0x20) {
                    lbl_80350A60 &= ~(0x80000000U >> lbl_8034FFB4);
                    memset(&lbl_8031C990 + (lbl_8034FFB4 * 0xC) + 0x10, 0, 0xC);
                    SIGetTypeAsync(lbl_8034FFB4, PADTypeAndStatusCallback);
                }
            }
        }
    }
}

void fn_800D33A8(s32 arg0, s32 arg1) {
    s32 temp_r30;
    s32 temp_r3;
    u16 temp_r5;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r7;
    u8 temp_r8;
    u32 temp_r29;

    if (lbl_80350A5C & (temp_r29 = 0x80000000U >> arg0)) {
        temp_r6 = ~(temp_r29 | temp_r29);
        lbl_80350A68 &= temp_r6;
        lbl_80350A6C &= temp_r6;
        temp_r3 = arg1 & 0xFFFFFF00;
        if (!(arg1 & 0xF) && (temp_r3 & 0x80000000) && (temp_r3 & 0x100000) && (temp_r3 & 0x40000000) && !(temp_r3 & 0x04000000) && !(temp_r3 & 0x80000) && !(temp_r3 & 0x40000)) {
            SITransfer(arg0, &lbl_8034FFC8, 1, &lbl_8031C9A0 + (arg0 * 0xC), 0xA, (u16)fn_800D2EE4, 0, 0);
            return;
        }
        temp_r30 = OSDisableInterrupts((long *)(0), (long *)(0));
        SIDisablePolling(temp_r29);
        temp_r8 = ~(temp_r29 | temp_r29);
        temp_r7 = lbl_80350A5C & temp_r8;
        temp_r6_2 = lbl_80350A68 & temp_r8;
        lbl_80350A5C = temp_r7;
        temp_r5 = lbl_80350A6C & temp_r8;
        lbl_80350A68 = temp_r6_2;
        lbl_80350A6C = temp_r5;
        lbl_80350A70 &= temp_r8;
        OSSetWirelessID(arg0, 0, temp_r5, temp_r6_2, temp_r7, temp_r8);
        OSRestoreInterrupts(temp_r30);
    }
}

s32 fn_800D34DC(s32 arg0) {
    s32 temp_r30;
    u8 temp_r31;
    s32 temp_r5;
    s32 temp_r6;

    temp_r31 = OSDisableInterrupts((long *)(0), (long *)(0));
    temp_r30 = (arg0 | lbl_80350A70) & ~(lbl_80350A68 | lbl_80350A6C);
    temp_r6 = lbl_80350A60 | temp_r30;
    temp_r5 = lbl_80350A5C;
    lbl_80350A60 = temp_r6;
    lbl_80350A5C = temp_r5 & ~temp_r30;
    lbl_80350A70 = 0;
    if ((u32) lbl_8034FFC0 == 4U) {
        lbl_80350A64 |= temp_r30;
    }
    SIDisablePolling(lbl_80350A60 & temp_r5);
    if ((s32) lbl_8034FFB4 == 0x20) {
        lbl_8034FFB4 = CLZ(lbl_80350A60);
        if ((s32) lbl_8034FFB4 != 0x20) {
            lbl_80350A60 &= ~(0x80000000U >> lbl_8034FFB4);
            memset(&lbl_8031C9A0 + (lbl_8034FFB4 * 0xC), 0, 0xC);
            SIGetTypeAsync(lbl_8034FFB4, PADTypeAndStatusCallback);
        }
    }
    OSRestoreInterrupts(temp_r31);
    return 1;
}

#pragma push
#pragma optimize_for_size on
s32 fn_800D35DC(void) {
    s32 temp_r27;
    s32 temp_r28;
    s32 temp_r29;
    s32 temp_r5;
    int temp_r5_2;
    s32 temp_r6;
    s32 temp_r6_2;
    u32 temp_r25;
    u64 temp_r26;
    u64 temp_ret;

    if ((s32) lbl_80350A58 != 0) {
        return 1;
    }
    OSRegisterVersion(lbl_8034FFB0);
    if ((u32) __PADSpec != 0U) {
        PADSetSpec((long)(0));
    }
    lbl_80350A58 = 1;
    if ((u32) lbl_80350920 != 0U) {
        temp_ret = OSGetTime();
        temp_r25 = (u32) temp_ret;
        temp_r26 = temp_ret;
        temp_r6 = (u32) __shr2i((unsigned long long)(0x10U), (unsigned long)(0), (long)(0), (long)(0)) & 0xFFFF;
        temp_r29 = ((u32) __shr2i(temp_r26, temp_r25, 0x20, temp_r6) & 0xFFFF) + ((temp_r25 & 0xFFFF) + temp_r6);
        temp_r5 = ((u32) __shr2i((unsigned long long)(temp_r26), (unsigned long)(temp_r25), (long)(0x30), (long)(0)) & 0xFFFF) + temp_r29;
        lbl_80350A64 = 0xF0000000;
        *(u16 *)0x800030E0 = temp_r5 & 0x3FFF;
    }
    /* draft: did not compile: M2C_FIELD(&lbl_8031C990, s32 *, 0x40) = (s32) (((*(void *)0x800030E0 << 8) & 0x3FFF00) | 0x4D000000); */
    /* draft: did not compile: M2C_FIELD(&lbl_8031C990, s32 *, 0x44) = (s32) (((*(void *)0x800030E0 << 8) & 0x3FFF00) | 0x4D400000); */
    /* draft: did not compile: M2C_FIELD(&lbl_8031C990, s32 *, 0x48) = (s32) (((*(void *)0x800030E0 << 8) & 0x3FFF00) | 0x4D800000); */
    /* draft: did not compile: M2C_FIELD(&lbl_8031C990, s32 *, 0x4C) = (s32) (((*(void *)0x800030E0 << 8) & 0x3FFF00) | 0x4DC00000); */
    SIRefreshSamplingRate(0x80000000);
    OSRegisterResetFunction(&lbl_802A7550);
    temp_r27 = OSDisableInterrupts((long *)(0), (long *)(0));
    temp_r28 = (0xF0000000 | lbl_80350A70) & ~(lbl_80350A68 | lbl_80350A6C);
    temp_r5_2 = lbl_80350A5C;
    temp_r6_2 = lbl_80350A60 | temp_r28;
    lbl_80350A70 = 0;
    lbl_80350A60 = temp_r6_2;
    lbl_80350A5C = temp_r5_2 & ~temp_r28;
    if ((u32) lbl_8034FFC0 == 4U) {
        lbl_80350A64 |= temp_r28;
    }
    SIDisablePolling(lbl_80350A60 & temp_r5_2);
    if ((s32) lbl_8034FFB4 == 0x20) {
        lbl_8034FFB4 = CLZ(lbl_80350A60);
        if ((s32) lbl_8034FFB4 != 0x20) {
            lbl_80350A60 &= ~(0x80000000U >> lbl_8034FFB4);
            memset(&lbl_8031C990 + (lbl_8034FFB4 * 0xC) + 0x10, 0, 0xC);
            SIGetTypeAsync(lbl_8034FFB4, PADTypeAndStatusCallback);
        }
    }
    OSRestoreInterrupts(temp_r27);
    return 1;
}
#pragma pop

s32 fn_800D37F4(void *arg0) {
    s32 sp14;
    s32 temp_r22;
    s32 temp_r25;
    s32 temp_r25_2;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 temp_r8;
    s32 var_r20;
    s32 var_r21;
    u32 temp_r23;
    u32 temp_r3;
    void *var_r24;
    void *var_r31;

    var_r31 = arg0;
    var_r21 = 0;
    var_r24 = &lbl_8031C9A0 + (0 * 0xC);
    temp_r22 = OSDisableInterrupts((long *)(0), (long *)(0));
    var_r20 = 0;
    do {
        temp_r23 = 0x80000000U >> var_r21;
        if (lbl_80350A70 & temp_r23) {
            temp_r25 = OSDisableInterrupts((long *)(0), (long *)(0));
            temp_r7 = lbl_80350A70 & ~(lbl_80350A68 | lbl_80350A6C);
            lbl_80350A60 |= temp_r7;
            lbl_80350A70 = 0;
            temp_r3 = lbl_80350A60 & lbl_80350A5C;
            lbl_80350A5C &= ~temp_r7;
            if ((u32) lbl_8034FFC0 == 4U) {
                lbl_80350A64 |= temp_r7;
            }
            SIDisablePolling(temp_r3);
            if ((s32) lbl_8034FFB4 == 0x20) {
                lbl_8034FFB4 = CLZ(lbl_80350A60);
                if ((s32) lbl_8034FFB4 != 0x20) {
                    lbl_80350A60 &= ~(0x80000000U >> lbl_8034FFB4);
                    memset(&lbl_8031C9A0 + (lbl_8034FFB4 * 0xC), 0, 0xC);
                    SIGetTypeAsync(lbl_8034FFB4, PADTypeAndStatusCallback);
                }
            }
            OSRestoreInterrupts(temp_r25);
            M2C_FIELD(var_r31, s8 *, 0xA) = -2;
            memset(var_r31, 0, 0xA);
        } else if ((lbl_80350A60 & temp_r23) || ((s32) lbl_8034FFB4 == var_r21)) {
            M2C_FIELD(var_r31, s8 *, 0xA) = -2;
            memset(var_r31, 0, 0xA);
        } else if (!(lbl_80350A5C & temp_r23)) {
            M2C_FIELD(var_r31, s8 *, 0xA) = -1;
            memset(var_r31, 0, 0xA);
        } else if (SIIsChanBusy(var_r21) != 0) {
            M2C_FIELD(var_r31, s8 *, 0xA) = -3;
            memset(var_r31, 0, 0xA);
        } else if (SIGetStatus(var_r21) & 8) {
            SIGetResponse(var_r21, &sp14);
            if (lbl_80350A68 & temp_r23) {
                M2C_FIELD(var_r31, s8 *, 0xA) = 0;
                memset(var_r31, 0, 0xA);
                if (!(lbl_80350A6C & temp_r23)) {
                    lbl_80350A6C |= temp_r23;
                    SIGetTypeAsync(var_r21, fn_800D33A8);
                }
            } else {
                SIDisablePolling(temp_r23);
                temp_r25_2 = OSDisableInterrupts((long *)(0), (long *)(0));
                temp_r8 = ~(temp_r23 | temp_r23);
                temp_r7_2 = lbl_80350A5C & temp_r8;
                temp_r6 = lbl_80350A68 & temp_r8;
                lbl_80350A5C = temp_r7_2;
                temp_r5 = lbl_80350A6C & temp_r8;
                lbl_80350A68 = temp_r6;
                lbl_80350A6C = temp_r5;
                lbl_80350A70 &= temp_r8;
                OSSetWirelessID(var_r21, 0, temp_r5, temp_r6, temp_r7_2, temp_r8);
                OSRestoreInterrupts(temp_r25_2);
                M2C_FIELD(var_r31, s8 *, 0xA) = -1;
                memset(var_r31, 0, 0xA);
            }
        } else {
            if (!(SIGetType(var_r21) & 0x20000000)) {
                var_r20 |= temp_r23;
            }
            if (SIGetResponse(var_r21, &sp14) == 0) {
                M2C_FIELD(var_r31, s8 *, 0xA) = -3;
                memset(var_r31, 0, 0xA);
            } else if (sp14 & 0x80000000) {
                M2C_FIELD(var_r31, s8 *, 0xA) = -3;
                memset(var_r31, 0, 0xA);
            } else {
                lbl_8034FFC4(var_r21, var_r31, &sp14);
                if (M2C_FIELD(var_r31, u16 *, 0) & 0x2000) {
                    M2C_FIELD(var_r31, s8 *, 0xA) = -3;
                    memset(var_r31, 0, 0xA);
                    SITransfer(var_r21, &lbl_8034FFC8, 1, var_r24, 0xA, fn_800D2EE4, 0, 0);
                } else {
                    M2C_FIELD(var_r31, s8 *, 0xA) = 0;
                    M2C_FIELD(var_r31, u16 *, 0) = (u16) (M2C_FIELD(var_r31, u16 *, 0) & 0xFFFFFF7F);
                }
            }
        }
        var_r21 += 1;
        /* draft: did not compile: var_r24 += 0xC; */
        /* draft: did not compile: var_r31 += 0xC; */
    } while (var_r21 < 4);
    OSRestoreInterrupts(temp_r22);
    return var_r20;
}

void fn_800D3BA0(s32 arg0, u32 arg1) {
    s32 temp_r31;
    u32 var_r30;

    var_r30 = arg1;
    temp_r31 = OSDisableInterrupts((long *)(0), (long *)(0));
    if ((lbl_80350A5C & (0x80000000U >> arg0)) && !(SIGetType(arg0) & 0x20000000)) {
        if (((u32) lbl_8034FFC0 < 2U) && (var_r30 == 2)) {
            var_r30 = 0;
        }
        fn_800CAF94(arg0, lbl_8034FFBC | 0x400000 | (var_r30 & 3));
        fn_800CAFA8();
    }
    OSRestoreInterrupts(temp_r31);
}

void PADSetSpec(s32 arg0) {
    __PADSpec = 0;
    switch (arg0) {                                 /* irregular */
    case 0:
        /* draft: did not compile: lbl_8034FFC4 = SPEC0_MakeStatus; */
        break;
    case 1:
        /* draft: did not compile: lbl_8034FFC4 = SPEC1_MakeStatus; */
        break;
    default:
        /* draft: did not compile: lbl_8034FFC4 = fn_800D3F8C; */
        break;
    }
    lbl_8034FFC0 = arg0;
}

void SPEC0_MakeStatus(void *arg1, void *arg2) {
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r3_4;
    s32 var_r6;

    var_r3 = 0;
    M2C_FIELD(arg1, u16 *, 0) = 0U;
    if (((u32) M2C_FIELD(arg2, u32 *, 0) >> 0x10U) & 8) {
        var_r3 = 0x100;
    }
    M2C_FIELD(arg1, u16 *, 0) = (u16) (M2C_FIELD(arg1, u16 *, 0) | var_r3);
    if (((u32) M2C_FIELD(arg2, u32 *, 0) >> 0x10U) & 0x20) {
        var_r3_2 = 0x200;
    } else {
        var_r3_2 = 0;
    }
    M2C_FIELD(arg1, u16 *, 0) = (u16) (M2C_FIELD(arg1, u16 *, 0) | var_r3_2);
    if (((u32) M2C_FIELD(arg2, u32 *, 0) >> 0x10U) & 0x100) {
        var_r3_3 = 0x400;
    } else {
        var_r3_3 = 0;
    }
    M2C_FIELD(arg1, u16 *, 0) = (u16) (M2C_FIELD(arg1, u16 *, 0) | var_r3_3);
    if (((u32) M2C_FIELD(arg2, u32 *, 0) >> 0x10U) & 1) {
        var_r3_4 = 0x800;
    } else {
        var_r3_4 = 0;
    }
    M2C_FIELD(arg1, u16 *, 0) = (u16) (M2C_FIELD(arg1, u16 *, 0) | var_r3_4);
    if (((u32) M2C_FIELD(arg2, u32 *, 0) >> 0x10U) & 0x10) {
        var_r6 = 0x1000;
    } else {
        var_r6 = 0;
    }
    M2C_FIELD(arg1, u16 *, 0) = (u16) (M2C_FIELD(arg1, u16 *, 0) | var_r6);
    M2C_FIELD(arg1, s8 *, 2) = (s8) ((u32) M2C_FIELD(arg2, u32 *, 4) >> 0x10U);
    M2C_FIELD(arg1, s8 *, 3) = (s8) ((u32) M2C_FIELD(arg2, u32 *, 4) >> 0x18U);
    M2C_FIELD(arg1, s8 *, 4) = (s8) M2C_FIELD(arg2, u32 *, 4);
    M2C_FIELD(arg1, s8 *, 5) = (s8) ((u32) M2C_FIELD(arg2, u32 *, 4) >> 8U);
    M2C_FIELD(arg1, u8 *, 6) = (u8) ((u32) M2C_FIELD(arg2, u32 *, 0) >> 8U);
    M2C_FIELD(arg1, u8 *, 7) = (u8) M2C_FIELD(arg2, u32 *, 0);
    M2C_FIELD(arg1, s8 *, 8) = 0;
    M2C_FIELD(arg1, s8 *, 9) = 0;
    if ((u8) M2C_FIELD(arg1, u8 *, 6) >= 0xAAU) {
        M2C_FIELD(arg1, u16 *, 0) = (u16) (M2C_FIELD(arg1, u16 *, 0) | 0x40);
    }
    if ((u8) M2C_FIELD(arg1, u8 *, 7) >= 0xAAU) {
        M2C_FIELD(arg1, u16 *, 0) = (u16) (M2C_FIELD(arg1, u16 *, 0) | 0x20);
    }
    M2C_FIELD(arg1, s8 *, 2) = (s8) ((u8) M2C_FIELD(arg1, s8 *, 2) - 0x80);
    M2C_FIELD(arg1, s8 *, 3) = (s8) ((u8) M2C_FIELD(arg1, s8 *, 3) - 0x80);
    M2C_FIELD(arg1, s8 *, 4) = (s8) ((u8) M2C_FIELD(arg1, s8 *, 4) - 0x80);
    M2C_FIELD(arg1, s8 *, 5) = (s8) ((u8) M2C_FIELD(arg1, s8 *, 5) - 0x80);
}

void SPEC1_MakeStatus(void *arg1, void *arg2) {
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r3_4;
    s32 var_r6;

    var_r3 = 0;
    M2C_FIELD(arg1, u16 *, 0) = 0U;
    if (((u32) M2C_FIELD(arg2, u32 *, 0) >> 0x10U) & 0x80) {
        var_r3 = 0x100;
    }
    M2C_FIELD(arg1, u16 *, 0) = (u16) (M2C_FIELD(arg1, u16 *, 0) | var_r3);
    if (((u32) M2C_FIELD(arg2, u32 *, 0) >> 0x10U) & 0x100) {
        var_r3_2 = 0x200;
    } else {
        var_r3_2 = 0;
    }
    M2C_FIELD(arg1, u16 *, 0) = (u16) (M2C_FIELD(arg1, u16 *, 0) | var_r3_2);
    if (((u32) M2C_FIELD(arg2, u32 *, 0) >> 0x10U) & 0x20) {
        var_r3_3 = 0x400;
    } else {
        var_r3_3 = 0;
    }
    M2C_FIELD(arg1, u16 *, 0) = (u16) (M2C_FIELD(arg1, u16 *, 0) | var_r3_3);
    if (((u32) M2C_FIELD(arg2, u32 *, 0) >> 0x10U) & 0x10) {
        var_r3_4 = 0x800;
    } else {
        var_r3_4 = 0;
    }
    M2C_FIELD(arg1, u16 *, 0) = (u16) (M2C_FIELD(arg1, u16 *, 0) | var_r3_4);
    if (((u32) M2C_FIELD(arg2, u32 *, 0) >> 0x10U) & 0x200) {
        var_r6 = 0x1000;
    } else {
        var_r6 = 0;
    }
    M2C_FIELD(arg1, u16 *, 0) = (u16) (M2C_FIELD(arg1, u16 *, 0) | var_r6);
    M2C_FIELD(arg1, s8 *, 2) = (s8) ((u32) M2C_FIELD(arg2, u32 *, 4) >> 0x10U);
    M2C_FIELD(arg1, s8 *, 3) = (s8) ((u32) M2C_FIELD(arg2, u32 *, 4) >> 0x18U);
    M2C_FIELD(arg1, s8 *, 4) = (s8) M2C_FIELD(arg2, u32 *, 4);
    M2C_FIELD(arg1, s8 *, 5) = (s8) ((u32) M2C_FIELD(arg2, u32 *, 4) >> 8U);
    M2C_FIELD(arg1, u8 *, 6) = (u8) ((u32) M2C_FIELD(arg2, u32 *, 0) >> 8U);
    M2C_FIELD(arg1, u8 *, 7) = (u8) M2C_FIELD(arg2, u32 *, 0);
    M2C_FIELD(arg1, s8 *, 8) = 0;
    M2C_FIELD(arg1, s8 *, 9) = 0;
    if ((u8) M2C_FIELD(arg1, u8 *, 6) >= 0xAAU) {
        M2C_FIELD(arg1, u16 *, 0) = (u16) (M2C_FIELD(arg1, u16 *, 0) | 0x40);
    }
    if ((u8) M2C_FIELD(arg1, u8 *, 7) >= 0xAAU) {
        M2C_FIELD(arg1, u16 *, 0) = (u16) (M2C_FIELD(arg1, u16 *, 0) | 0x20);
    }
    M2C_FIELD(arg1, s8 *, 2) = (s8) ((u8) M2C_FIELD(arg1, s8 *, 2) - 0x80);
    M2C_FIELD(arg1, s8 *, 3) = (s8) ((u8) M2C_FIELD(arg1, s8 *, 3) - 0x80);
    M2C_FIELD(arg1, s8 *, 4) = (s8) ((u8) M2C_FIELD(arg1, s8 *, 4) - 0x80);
    M2C_FIELD(arg1, s8 *, 5) = (s8) ((u8) M2C_FIELD(arg1, s8 *, 5) - 0x80);
}
