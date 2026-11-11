/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

u16 _GetInputValue();
extern M2C_UNK lbl_802ABD90;
extern M2C_UNK lbl_8032DB24;
extern M2C_UNK lbl_8033D2F0;
extern M2C_UNK lbl_802ABDA0;
extern M2C_UNK lbl_8032D6A4;
extern u32 lbl_80350340;
extern M2C_UNK lbl_802ABE20;
u32 synthGetTicksPerSecond(s32);
M2C_UNK fn_80115A3C(M2C_UNK);
M2C_UNK fn_80118440(M2C_UNK);
M2C_UNK fn_8011A0FC();
M2C_UNK fn_8011A9A8();
M2C_UNK fn_80125E90();
M2C_UNK salHandleAuxProcessing();
M2C_UNK fn_8012B53C();
M2C_UNK salAiGetDest();
M2C_UNK salCtrlDsp();
M2C_UNK fn_8012FF28();
M2C_UNK fn_8012FF48();
extern u8 lbl_80350D30;
extern s32 lbl_80350E3C;
extern u8 lbl_80350E75;
extern u8 lbl_80350E76;
extern u8 lbl_80350E77;
u32 fn_80126C18(u8, u8, s32);
M2C_UNK fn_8012FCC0();
u32 fn_8012FD10(s32);
M2C_UNK hwInitIrq();
M2C_UNK hwEnableIrq();
extern s32 lbl_80350E40;
extern s8 lbl_80350E68;
M2C_UNK fn_8012E5EC(s32, M2C_UNK);
M2C_UNK fn_8012E618(s32, M2C_UNK);
M2C_UNK fn_8012E644(s32, s32);
u16 fn_8012512C(s32, u16);
extern M2C_UNK lbl_802AB54C;
M2C_UNK salActivateVoice(s32, u8, s32);

u16 fn_8012D520(void *arg0);
u16 fn_8012D568(void *arg0);
u16 fn_8012D5B0(u8 arg0, u8 arg1, s32 arg2, s32 arg3);
u16 fn_8012D664(u8 arg0, u8 arg1, s32 arg2, s32 arg3);
void fn_8012D718(void *arg0);
void fn_8012D99C();
void fn_8012DA0C();
void fn_8012DB08();
u16 fn_8012DCEC(void);
s16 sndSin(s32 arg0);
s32 sndBSearch(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 (*arg4)(s32, s32), M2C_UNK arg_sp0);
void fn_8012DE38(s32 *arg0);
void sndConvertTicks(u32 *arg0, s32 arg1);
u32 fn_8012DE90(u32 arg0);
void fn_8012DE98(void);
s32 fn_8012DFEC(s32 arg0, u8 arg1, u8 arg2, s32 arg3);
void fn_8012E0A4(s8 arg0);
u8 fn_8012E0AC(void);
s32 fn_8012E0B4(s32 arg0);
void fn_8012E0D4(s32 arg0);
void fn_8012E0DC(s32 arg0, s32 arg1);
void fn_8012E0F0(s32 arg0, s16 arg1, void *arg2, u32 arg3, s32 arg4, s32 arg5, u32 arg6, s32 arg7);
void fn_8012E2A4(s32 arg0);
void fn_8012E2F4(s32 arg0, void *arg1, u8 arg2);
void fn_8012E4A0(s32 arg0, s32 arg1, s32 arg2);
u8 fn_8012E4C0(s32 arg0);
u8 fn_8012E4D4(s32 arg0);
u16 fn_8012E4E8(s32 arg0);
void fn_8012E4FC(s32 arg0, s8 arg1);
void fn_8012E510(s32 arg0);
void fn_8012E54C(s32 arg0);
void fn_8012E574(s32 arg0, u16 arg1);

u16 fn_8012D520(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x214);
    if (!(temp_r4 & 0x800)) {
        return M2C_FIELD(arg0, u16 *, 0x3C4);
    }
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (temp_r4 & 0xFFFFF7FF);
    return 0;
}

u16 fn_8012D568(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x214);
    if (!(temp_r4 & 0x1000)) {
        return M2C_FIELD(arg0, u16 *, 0x3E8);
    }
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (temp_r4 & 0xFFFFEFFF);
    return 0;
}

#pragma push
#pragma peephole off
u16 fn_8012D5B0(u8 arg0, u8 arg1, s32 arg2, s32 arg3) {
    u8 temp_r10;
    s32 temp_r4;
    s32 temp_r7;
    u8 temp_r7_2;
    s32 temp_r8;
    s8 temp_r4_2;
    void *temp_r9;

    temp_r9 = &lbl_8033D2F0 + ((arg3 << 6) & 0x3FC0);
    temp_r8 = (arg2 * 4) & 0x3FC;
    temp_r10 = *(&lbl_802ABD90 + ((arg1 * 4) & 0x3FC));
    /* draft: did not compile: temp_r7_2 = *(temp_r9 + temp_r8); */
    temp_r4 = temp_r10 & temp_r7_2;
    temp_r4_2 = (u32) (-temp_r4 | temp_r4) >> 0x1FU;
    if (temp_r4_2 != 0) {
        /* draft: did not compile: *(temp_r9 + temp_r8) = temp_r7_2 & ~temp_r10; */
    }
    if (temp_r4_2 != 0) {
        temp_r7 = arg0 * 0x90;
        return _GetInputValue(0, &lbl_8032DB24 + temp_r7 + (arg1 * 0x24), temp_r7);
    }
    return M2C_FIELD((&lbl_8032DB24 + (arg0 * 0x90) + (arg1 * 0x24)), u16 *, 0x20);
}
#pragma pop

u16 fn_8012D664(u8 arg0, u8 arg1, s32 arg2, s32 arg3) {
    u8 temp_r10;
    s32 temp_r4;
    s32 temp_r7;
    u8 temp_r7_2;
    s32 temp_r8;
    s8 temp_r4_2;
    void *temp_r9;

    temp_r9 = &lbl_8033D2F0 + ((arg3 << 6) & 0x3FC0);
    temp_r8 = (arg2 * 4) & 0x3FC;
    temp_r10 = *(&lbl_802ABDA0 + ((arg1 * 4) & 0x3FC));
    /* draft: did not compile: temp_r7_2 = *(temp_r9 + temp_r8); */
    temp_r4 = temp_r10 & temp_r7_2;
    temp_r4_2 = (u32) (-temp_r4 | temp_r4) >> 0x1FU;
    if (temp_r4_2 != 0) {
        /* draft: did not compile: *(temp_r9 + temp_r8) = temp_r7_2 & ~temp_r10; */
    }
    if (temp_r4_2 != 0) {
        temp_r7 = arg0 * 0x90;
        return _GetInputValue(0, &lbl_8032D6A4 + temp_r7 + (arg1 * 0x24), temp_r7);
    }
    return M2C_FIELD((&lbl_8032D6A4 + (arg0 * 0x90) + (arg1 * 0x24)), u16 *, 0x20);
}

void fn_8012D718(void *arg0) {
    M2C_UNK *var_r4;
    M2C_UNK *var_r5;
    M2C_UNK *var_r5_2;
    u8 var_ctr;
    s32 var_ctr_2;
    void *temp_r5;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, u8 *, 0x218) = 7;
        M2C_FIELD(arg0, u8 *, 0x219) = 0;
        M2C_FIELD(arg0, s32 *, 0x21C) = 0x10000;
        M2C_FIELD(arg0, u8 *, 0x220) = 0xB;
        M2C_FIELD(arg0, u8 *, 0x221) = 2;
        M2C_FIELD(arg0, s32 *, 0x224) = 0x10000;
        M2C_FIELD(arg0, u8 *, 0x23A) = 2;
        M2C_FIELD(arg0, u8 *, 0x23C) = 0xA;
        M2C_FIELD(arg0, u8 *, 0x23D) = 0;
        M2C_FIELD(arg0, s32 *, 0x240) = 0x10000;
        M2C_FIELD(arg0, u8 *, 0x25E) = 1;
        M2C_FIELD(arg0, u8 *, 0x260) = 0x83;
        M2C_FIELD(arg0, u8 *, 0x261) = 0;
        M2C_FIELD(arg0, s32 *, 0x264) = 0x10000;
        M2C_FIELD(arg0, u8 *, 0x282) = 1;
        M2C_FIELD(arg0, u8 *, 0x284) = 0x80;
        M2C_FIELD(arg0, u8 *, 0x285) = 0;
        M2C_FIELD(arg0, s32 *, 0x288) = 0x10000;
        M2C_FIELD(arg0, u8 *, 0x2A6) = 1;
        M2C_FIELD(arg0, u8 *, 0x2CC) = 1;
        M2C_FIELD(arg0, u8 *, 0x2CD) = 0;
        M2C_FIELD(arg0, s32 *, 0x2D0) = 0x10000;
        M2C_FIELD(arg0, u8 *, 0x2EE) = 1;
        M2C_FIELD(arg0, u8 *, 0x2F0) = 0x40;
        M2C_FIELD(arg0, u8 *, 0x2F1) = 0;
        M2C_FIELD(arg0, s32 *, 0x2F4) = 0x10000;
        M2C_FIELD(arg0, u8 *, 0x312) = 1;
        M2C_FIELD(arg0, u8 *, 0x314) = 0x41;
        M2C_FIELD(arg0, u8 *, 0x315) = 0;
        M2C_FIELD(arg0, s32 *, 0x318) = 0x10000;
        M2C_FIELD(arg0, u8 *, 0x336) = 1;
        M2C_FIELD(arg0, u8 *, 0x35A) = 0;
        M2C_FIELD(arg0, u8 *, 0x35C) = 0x5B;
        M2C_FIELD(arg0, u8 *, 0x35D) = 0;
        M2C_FIELD(arg0, s32 *, 0x360) = 0x10000;
        M2C_FIELD(arg0, u8 *, 0x37E) = 1;
        M2C_FIELD(arg0, u8 *, 0x3A2) = 0;
        M2C_FIELD(arg0, u8 *, 0x3A4) = 0x5D;
        M2C_FIELD(arg0, u8 *, 0x3A5) = 0;
        M2C_FIELD(arg0, s32 *, 0x3A8) = 0x10000;
        M2C_FIELD(arg0, u8 *, 0x3C6) = 1;
        M2C_FIELD(arg0, u8 *, 0x2A8) = 0x84;
        M2C_FIELD(arg0, u8 *, 0x2A9) = 0;
        M2C_FIELD(arg0, s32 *, 0x2AC) = 0x10000;
        M2C_FIELD(arg0, u8 *, 0x2CA) = 1;
        M2C_FIELD(arg0, u8 *, 0x3EA) = 0;
        M2C_FIELD(arg0, s32 *, 0x214) = 0x1FFF;
        M2C_FIELD(arg0, u8 *, 0x1D4) = 0;
        M2C_FIELD(arg0, u8 *, 0x1D5) = 0;
        M2C_FIELD(arg0, u8 *, 0xA8) = 0;
        return;
    }
    var_r5 = &lbl_8032D6A4;
    var_r4 = &lbl_8032DB24;
    var_ctr = 2;
    do {
        M2C_FIELD(var_r4, u8 *, 0x22) = 0;
        M2C_FIELD(var_r5, u8 *, 0x22) = 0;
        M2C_FIELD(var_r4, u8 *, 0x46) = 0;
        M2C_FIELD(var_r5, u8 *, 0x46) = 0;
        M2C_FIELD(var_r4, u8 *, 0x6A) = 0;
        M2C_FIELD(var_r5, u8 *, 0x6A) = 0;
        M2C_FIELD(var_r4, u8 *, 0x8E) = 0;
        M2C_FIELD(var_r5, u8 *, 0x8E) = 0;
        M2C_FIELD(var_r4, u8 *, 0xB2) = 0;
        M2C_FIELD(var_r5, u8 *, 0xB2) = 0;
        M2C_FIELD(var_r4, u8 *, 0xD6) = 0;
        M2C_FIELD(var_r5, u8 *, 0xD6) = 0;
        M2C_FIELD(var_r4, u8 *, 0xFA) = 0;
        M2C_FIELD(var_r5, u8 *, 0xFA) = 0;
        M2C_FIELD(var_r4, u8 *, 0x11E) = 0;
        M2C_FIELD(var_r5, u8 *, 0x11E) = 0;
        M2C_FIELD(var_r4, u8 *, 0x142) = 0;
        M2C_FIELD(var_r5, u8 *, 0x142) = 0;
        M2C_FIELD(var_r4, u8 *, 0x166) = 0;
        M2C_FIELD(var_r5, u8 *, 0x166) = 0;
        M2C_FIELD(var_r4, u8 *, 0x18A) = 0;
        M2C_FIELD(var_r5, u8 *, 0x18A) = 0;
        M2C_FIELD(var_r4, u8 *, 0x1AE) = 0;
        M2C_FIELD(var_r5, u8 *, 0x1AE) = 0;
        M2C_FIELD(var_r4, u8 *, 0x1D2) = 0;
        M2C_FIELD(var_r5, u8 *, 0x1D2) = 0;
        M2C_FIELD(var_r4, u8 *, 0x1F6) = 0;
        M2C_FIELD(var_r5, u8 *, 0x1F6) = 0;
        M2C_FIELD(var_r4, u8 *, 0x21A) = 0;
        M2C_FIELD(var_r5, u8 *, 0x21A) = 0;
        M2C_FIELD(var_r4, u8 *, 0x23E) = 0;
        var_r4 += 0x240;
        M2C_FIELD(var_r5, u8 *, 0x23E) = 0;
        var_r5 += 0x240;
        var_ctr -= 1;
    } while (var_ctr != 0);
    var_r5_2 = &lbl_8033D2F0;
    var_ctr_2 = 4;
    do {
        M2C_FIELD(var_r5_2, s32 *, 0) = 0xFF;
        M2C_FIELD(var_r5_2, s32 *, 4) = 0xFF;
        M2C_FIELD(var_r5_2, s32 *, 8) = 0xFF;
        M2C_FIELD(var_r5_2, s32 *, 0xC) = 0xFF;
        M2C_FIELD(var_r5_2, s32 *, 0x10) = 0xFF;
        M2C_FIELD(var_r5_2, s32 *, 0x14) = 0xFF;
        M2C_FIELD(var_r5_2, s32 *, 0x18) = 0xFF;
        M2C_FIELD(var_r5_2, s32 *, 0x1C) = 0xFF;
        M2C_FIELD(var_r5_2, s32 *, 0x20) = 0xFF;
        M2C_FIELD(var_r5_2, s32 *, 0x24) = 0xFF;
        M2C_FIELD(var_r5_2, s32 *, 0x28) = 0xFF;
        M2C_FIELD(var_r5_2, s32 *, 0x2C) = 0xFF;
        M2C_FIELD(var_r5_2, s32 *, 0x30) = 0xFF;
        M2C_FIELD(var_r5_2, s32 *, 0x34) = 0xFF;
        M2C_FIELD(var_r5_2, s32 *, 0x38) = 0xFF;
        M2C_FIELD(var_r5_2, s32 *, 0x3C) = 0xFF;
        M2C_FIELD(temp_r5, s32 *, 4) = 0xFF;
        temp_r5 = var_r5_2 + 0x40;
        M2C_FIELD(var_r5_2, s32 *, 0x40) = 0xFF;
        M2C_FIELD(temp_r5, s32 *, 8) = 0xFF;
        M2C_FIELD(temp_r5, s32 *, 0xC) = 0xFF;
        M2C_FIELD(temp_r5, s32 *, 0x10) = 0xFF;
        M2C_FIELD(temp_r5, s32 *, 0x14) = 0xFF;
        M2C_FIELD(temp_r5, s32 *, 0x18) = 0xFF;
        M2C_FIELD(temp_r5, s32 *, 0x1C) = 0xFF;
        M2C_FIELD(temp_r5, s32 *, 0x20) = 0xFF;
        M2C_FIELD(temp_r5, s32 *, 0x24) = 0xFF;
        M2C_FIELD(temp_r5, s32 *, 0x28) = 0xFF;
        M2C_FIELD(temp_r5, s32 *, 0x2C) = 0xFF;
        M2C_FIELD(temp_r5, s32 *, 0x30) = 0xFF;
        M2C_FIELD(temp_r5, s32 *, 0x34) = 0xFF;
        M2C_FIELD(temp_r5, s32 *, 0x38) = 0xFF;
        M2C_FIELD(temp_r5, s32 *, 0x3C) = 0xFF;
        /* draft: did not compile: var_r5_2 = temp_r5 + 0x40; */
        var_ctr_2 -= 1;
    } while (var_ctr_2 != 0);
}

void fn_8012D99C() { } /* draft: stub */

void fn_8012DA0C() { } /* draft: stub */

void fn_8012DB08() { } /* draft: stub */

u16 fn_8012DCEC(void) {
    u32 temp_r0;

    temp_r0 = lbl_80350340 * 0xA8351D63;
    lbl_80350340 = temp_r0;
    return (u16) (temp_r0 >> 6U);
}

s16 sndSin(s32 arg0) {
    u32 temp_r0;

    temp_r0 = arg0 & 0xFFF;
    if (temp_r0 < 0x400U) {
        return *(&lbl_802ABE20 + ((temp_r0 * 2) & 0x1FFFE));
    }
    if (temp_r0 < 0x800U) {
        return *(&lbl_802ABE20 + ((0x3FF - (temp_r0 & 0x3FF)) * 2));
    }
    if (temp_r0 < 0xC00U) {
        return (s16) -*(&lbl_802ABE20 + ((temp_r0 * 2) & 0x7FE));
    }
    return (s16) -*(&lbl_802ABE20 + ((0x3FF - (temp_r0 & 0x3FF)) * 2));
}

s32 sndBSearch(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 (*arg4)(s32, s32), M2C_UNK arg_sp0) {
    s32 var_r31;
    s32 var_r30;
    s32 temp_r3;
    s32 temp_r29;
    s32 temp_r28;

    if (arg2 != 0) {
        var_r31 = 1;
        var_r30 = arg2;
loop_2:
        temp_r29 = (s32) (var_r31 + var_r30) >> 1;
        temp_r28 = arg1 + (arg3 * (temp_r29 - 1));
        temp_r3 = arg4(arg0, temp_r28);
        if (temp_r3 == 0) {
            return temp_r28;
        }
        if (temp_r3 < 0) {
            var_r30 = temp_r29 - 1;
        }
        if (((u32) temp_r3 >> 0x1FU) == 0) {
            var_r31 = temp_r29 + 1;
        }
        if (var_r31 > var_r30) {
            goto block_9;
        }
        goto loop_2;
    }
block_9:
    return 0;
}

void fn_8012DE38(s32 *arg0) {
    *arg0 <<= 8;
}

void sndConvertTicks(u32 *arg0, s32 arg1) {
    *arg0 = (u32) (((u32) (*arg0 << 0x10) / synthGetTicksPerSecond(arg1)) * 0x3E8) >> 5U;
}

u32 fn_8012DE90(u32 arg0) {
    return arg0 >> 8U;
}

void fn_8012DE98(void) {
    s32 temp_r4;
    s32 temp_r7;
    u8 var_r31;
    u8 var_r9;

    if ((u8) lbl_80350D30 != 0) {
        fn_8011A9A8();
        fn_8012FF28();
        salAiGetDest();
        salCtrlDsp();
        fn_8012FF48();
        fn_8012FF28();
        salHandleAuxProcessing();
        fn_8012FF48();
        fn_8012FF28();
        var_r9 = 0;
        lbl_80350E77 ^= 1;
        lbl_80350E76 = (lbl_80350E76 + 1) % 3;
loop_3:
        if (var_r9 < (u8) lbl_80350E75) {
            temp_r4 = var_r9 * 0xF4;
            var_r9 += 1;
            temp_r7 = temp_r4 + 0x24;
            /* draft: did not compile: *(lbl_80350E3C + temp_r7) = 0; */
            /* draft: did not compile: *(lbl_80350E3C + (temp_r7 + 4)) = 0; */
            /* draft: did not compile: *(lbl_80350E3C + (temp_r7 + 8)) = 0; */
            /* draft: did not compile: *(lbl_80350E3C + (temp_r7 + 0xC)) = 0; */
            /* draft: did not compile: *(lbl_80350E3C + (temp_r7 + 0x10)) = 0; */
            goto loop_3;
        }
        fn_8012FF48();
        var_r31 = 0;
loop_6:
        if (var_r31 < 5U) {
            fn_8012FF28();
            fn_8012E0A4(var_r31);
            fn_80115A3C(0x100);
            fn_80118440(0x100);
            fn_8012FF48();
            var_r31 += 1;
            goto loop_6;
        }
        fn_8012FF28();
        fn_8012E0A4(0U);
        fn_8012B53C();
        fn_8012FF48();
        fn_8012FF28();
        fn_8011A0FC();
        fn_8012FF48();
        fn_8012FF28();
        fn_80125E90();
        fn_8012FF48();
    }
}

s32 fn_8012DFEC(s32 arg0, u8 arg1, u8 arg2, s32 arg3) {
    extern u32 fn_80126C18(u32, u8, s32);
    hwInitIrq();
    lbl_80350E77 = 0;
    lbl_80350E76 = 0;
    lbl_80350E40 = 0;
    if ((salInitAi(fn_8012DE98, arg3, arg0) != 0U) && (fn_80126C18((s32)arg1, (s32)arg2, arg3 & 1) != 0U) && (fn_8012FD10(arg3) != 0U)) {
        hwEnableIrq();
        fn_8012FCC0();
        return 0;
    }
    return -1;
}

void fn_8012E0A4(s8 arg0) {
    lbl_80350E68 = arg0;
}

u8 fn_8012E0AC(void) {
    return lbl_80350E68;
}

s32 fn_8012E0B4(s32 arg0) {
    return M2C_FIELD((lbl_80350E3C + (arg0 * 0xF4)), u8 *, 0xEC) != 0;
}

void fn_8012E0D4(s32 arg0) {
    lbl_80350E40 = arg0;
}

void fn_8012E0DC(s32 arg0, s32 arg1) {
    M2C_FIELD((lbl_80350E3C + (arg0 * 0xF4)), s32 *, 0x1C) = arg1;
}

void fn_8012E0F0(s32 arg0, s16 arg1, void *arg2, u32 arg3, s32 arg4, s32 arg5, u32 arg6, s32 arg7) {
    s32 temp_r0;
    s32 temp_r10;
    s32 temp_r3;
    s32 var_r29;
    u8 var_r12;
    void *temp_r7;

    var_r12 = 0;
    temp_r3 = arg0 * 0xF4;
    var_r29 = 0;
loop_2:
    if (var_r12 <= (u8) lbl_80350E68) {
        temp_r0 = (var_r12 * 4) & 0x3FC;
        var_r12 += 1;
        temp_r10 = lbl_80350E3C + temp_r0 + 0x24;
        /* draft: did not compile: *(temp_r3 + temp_r10) = 0; */
        /* draft: did not compile: var_r29 |= *(temp_r3 + temp_r10) & 0x20; */
        goto loop_2;
    }
    M2C_FIELD((lbl_80350E3C + temp_r3), s32 *, 0x1C) = arg4;
    M2C_FIELD((lbl_80350E3C + temp_r3), s32 *, 0x18) = arg5;
    M2C_FIELD((lbl_80350E3C + temp_r3), s32 *, 0x24) = var_r29;
    M2C_FIELD((lbl_80350E3C + temp_r3), s32 *, 0xF0) = 0;
    M2C_FIELD((lbl_80350E3C + temp_r3), s16 *, 0x70) = arg1;
    /* draft: did not compile: temp_r7 = lbl_80350E3C + temp_r3; */
    M2C_FIELD(temp_r7, s32 *, 0x74) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_r7, s32 *, 0x78) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r7, s32 *, 0x8C) = (s32) M2C_FIELD(arg2, s32 *, 0x18);
    M2C_FIELD(temp_r7, s32 *, 0x7C) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(temp_r7, s32 *, 0x80) = (s32) M2C_FIELD(arg2, s32 *, 0xC);
    M2C_FIELD(temp_r7, s32 *, 0x84) = (s32) M2C_FIELD(arg2, s32 *, 0x10);
    M2C_FIELD(temp_r7, s32 *, 0x88) = (s32) M2C_FIELD(arg2, s32 *, 0x14);
    M2C_FIELD(temp_r7, s32 *, 0x90) = (s32) M2C_FIELD(arg2, s32 *, 0x1C);
    if (arg3 != 0U) {
        M2C_FIELD((temp_r3 + lbl_80350E3C), s8 *, 0xA4) = 0;
        M2C_FIELD((temp_r3 + lbl_80350E3C), s32 *, 0xB8) = 0;
        M2C_FIELD((temp_r3 + lbl_80350E3C), s32 *, 0xBC) = 0;
        M2C_FIELD((temp_r3 + lbl_80350E3C), s16 *, 0xC0) = 0x7FFF;
        M2C_FIELD((temp_r3 + lbl_80350E3C), s32 *, 0xC4) = 0;
    }
    M2C_FIELD((temp_r3 + lbl_80350E3C), s8 *, 0xE4) = 0xFF;
    M2C_FIELD((temp_r3 + lbl_80350E3C), s8 *, 0xE5) = 0xFF;
    M2C_FIELD((temp_r3 + lbl_80350E3C), s8 *, 0xE6) = 0xFF;
    M2C_FIELD((temp_r3 + lbl_80350E3C), s8 *, 0xE7) = 0xFF;
    if (arg6 != 0U) {
        fn_8012E5EC(arg0, 0);
        fn_8012E618(arg0, 1);
    }
    fn_8012E644(arg0, arg7);
}

void fn_8012E2A4(s32 arg0) {
    s32 temp_r4;
    void *temp_r3;
    void *temp_r3_2;

    temp_r4 = arg0 * 0xF4;
    /* draft: did not compile: temp_r3 = lbl_80350E3C + temp_r4; */
    if (((u8) M2C_FIELD(temp_r3, u8 *, 0xEC) == 1) && ((u8) lbl_80350E68 == 0)) {
        M2C_FIELD(temp_r3, s8 *, 0xEE) = 1;
    }
    /* draft: did not compile: temp_r3_2 = lbl_80350E3C + temp_r4 + (lbl_80350E68 * 4); */
    M2C_FIELD(temp_r3_2, s32 *, 0x24) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x24) | 0x20);
}

void fn_8012E2F4(s32 arg0, void *arg1, u8 arg2) {
    u8 temp_r31;
    s32 temp_r5;
    s32 var_r4;
    s32 temp_r3;
    u16 var_r4_2;
    void *temp_r3_2;

    if (arg2 != 0) {
        if ((arg2 >= 0) && ((s32) arg2 < 3)) {
            temp_r31 = arg0 * 0xF4;
            M2C_FIELD((lbl_80350E3C + temp_r31), s8 *, 0xA4) = 1;
            M2C_FIELD((lbl_80350E3C + temp_r31), s8 *, 0xCA) = 0;
            if (arg2 == 1) {
                temp_r3 = fn_8012512C((long)(M2C_FIELD(arg1, s32 *, 0)), (unsigned short)(0));
                M2C_FIELD((lbl_80350E3C + temp_r31), s32 *, 0xB8) = (s32) temp_r3;
                M2C_FIELD((lbl_80350E3C + temp_r31), s32 *, 0xBC) = (s32) fn_8012512C(M2C_FIELD(arg1, s32 *, 4), temp_r3);
                var_r4 = (s32) M2C_FIELD(arg1, u16 *, 8) >> 2;
                if ((u32) var_r4 > 0x3FFU) {
                    var_r4 = 0x3FF;
                }
                M2C_FIELD((temp_r31 + lbl_80350E3C), s16 *, 0xC0) = (s16) (0xC1 - *(&lbl_802AB54C + var_r4));
            } else {
                M2C_FIELD((lbl_80350E3C + temp_r31), s32 *, 0xB8) = (s32) (u16) M2C_FIELD(arg1, s32 *, 0);
                M2C_FIELD((lbl_80350E3C + temp_r31), s32 *, 0xBC) = (s32) (u16) M2C_FIELD(arg1, s32 *, 4);
                M2C_FIELD((lbl_80350E3C + temp_r31), u16 *, 0xC0) = (u16) M2C_FIELD(arg1, u16 *, 8);
            }
            M2C_FIELD((lbl_80350E3C + temp_r31), s32 *, 0xC4) = (s32) M2C_FIELD(arg1, u16 *, 0xA);
        }
    } else {
        M2C_FIELD((temp_r5 + lbl_80350E3C), s32 *, 0xBC) = (s32) M2C_FIELD(arg1, u16 *, 2);
        temp_r5 = arg0 * 0xF4;
        M2C_FIELD((lbl_80350E3C + temp_r5), s8 *, 0xA4) = 0;
        M2C_FIELD((lbl_80350E3C + temp_r5), s32 *, 0xB8) = (s32) M2C_FIELD(arg1, s32 *, 0);
        var_r4_2 = (u16) M2C_FIELD(arg1, s32 *, 4) * 8;
        if (var_r4_2 > 0x7FFFU) {
            var_r4_2 = 0x7FFF;
        }
        M2C_FIELD((lbl_80350E3C + temp_r5), u16 *, 0xC0) = var_r4_2;
        M2C_FIELD((temp_r5 + lbl_80350E3C), s32 *, 0xC4) = (s32) M2C_FIELD(arg1, u16 *, 6);
    }
    /* draft: did not compile: temp_r3_2 = lbl_80350E3C + (arg0 * 0xF4); */
    M2C_FIELD(temp_r3_2, s32 *, 0x24) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x24) | 0x10);
}

void fn_8012E4A0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r6;

    temp_r6 = arg0 * 0xF4;
    M2C_FIELD((lbl_80350E3C + temp_r6), s32 *, 0x94) = arg1;
    M2C_FIELD((temp_r6 + lbl_80350E3C), s32 *, 0x98) = arg2;
}

u8 fn_8012E4C0(s32 arg0) {
    return M2C_FIELD((lbl_80350E3C + (arg0 * 0xF4)), u8 *, 0x9C);
}

u8 fn_8012E4D4(s32 arg0) {
    return M2C_FIELD((lbl_80350E3C + (arg0 * 0xF4)), u8 *, 0x90);
}

u16 fn_8012E4E8(s32 arg0) {
    return M2C_FIELD((lbl_80350E3C + (arg0 * 0xF4)), u16 *, 0x70);
}

void fn_8012E4FC(s32 arg0, s8 arg1) {
    M2C_FIELD((lbl_80350E3C + (arg0 * 0xF4)), s8 *, 0xA0) = arg1;
}

void fn_8012E510(s32 arg0) {
    s32 temp_r6;

    temp_r6 = arg0 * 0xF4;
    M2C_FIELD((temp_r6 + lbl_80350E3C), u8 *, 0xD4) = (u8) lbl_80350E68;
    salActivateVoice(lbl_80350E3C + temp_r6, lbl_80350E68, temp_r6);
}

void fn_8012E54C(s32 arg0) {
    void *temp_r3;

    /* draft: did not compile: temp_r3 = lbl_80350E3C + (arg0 * 0xF4) + (lbl_80350E68 * 4); */
    M2C_FIELD(temp_r3, s32 *, 0x24) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x24) | 0x40);
}

void fn_8012E574(s32 arg0, u16 arg1) { } /* draft: stub */
