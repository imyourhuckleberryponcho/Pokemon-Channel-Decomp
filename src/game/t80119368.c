/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80123514(M2C_UNK *, void *, M2C_UNK *, void *, void *, M2C_UNK);
M2C_UNK fn_8012357C();
M2C_UNK synthInitAllocationAids();
M2C_UNK fn_80124EC8(void *);
M2C_UNK fn_8012D718(M2C_UNK, void *, M2C_UNK);
M2C_UNK fn_8012E0D4(M2C_UNK *);
s32 fn_8012FF68(s32, M2C_UNK *, M2C_UNK);
extern M2C_UNK fn_80119298;
extern M2C_UNK lbl_8032C9C0;
extern s8 lbl_80350D31;
extern M2C_UNK lbl_80350D3C;
extern M2C_UNK lbl_80350D4C;
extern s32 lbl_80350D54;
extern s32 lbl_80350D58;
extern s32 lbl_80350D5C;
extern s32 lbl_80350D60;
extern s32 lbl_80350D64;
extern s32 lbl_80350D70;
extern s32 lbl_80350D74;
extern f32 lbl_803521F0;
extern f32 lbl_80352218;
M2C_UNK fn_801137B4(s32, s32);
M2C_UNK hwEnableIrq();
M2C_UNK hwDisableIrq();
M2C_UNK fn_80113898(s32);
M2C_UNK fn_801139A0(s32, s32, s32);
M2C_UNK fn_80113A5C(s32, s32, s32, s32);
extern M2C_UNK lbl_8032C8C0;
s32 fn_80118A18(s32, s32, s32);
s32 fn_80118AFC(s32, s32, s32);
s32 fn_80118C64(s32);
s32 fn_80118950(s32, s32, s32, s32, u8);
extern M2C_UNK lbl_8032D654;
s32 fn_80123AC4();
M2C_UNK synthVolume(s32, s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK fn_8012EDC0(u32);
extern M2C_UNK lbl_8032CC00;
M2C_UNK fn_8012E98C(u8, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, s32);
extern M2C_UNK lbl_8032D5F4;
extern M2C_UNK lbl_8032D634;
M2C_UNK fn_80124B6C(s32);
u32 fn_8012E0B4(u32);
M2C_UNK fn_8012E960(u32);
M2C_UNK fn_8012E9AC(u8);
M2C_UNK fn_8012E9CC();
M2C_UNK fn_8012EA00();
extern M2C_UNK lbl_8032DFA8;
extern s32 lbl_80350D78;
extern s8 lbl_80350D7C;
extern s8 lbl_80350D7D;
M2C_UNK fn_8012E6A0(s32, M2C_UNK, s32, s32, f32, f32, f32, f32);
extern f32 lbl_80352220;
M2C_UNK fn_8012E0F0(s32, M2C_UNK, s32 *, M2C_UNK, M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK fn_8012E4FC(s32, u8);
M2C_UNK fn_8012E510(s32, u8);
M2C_UNK fn_8012E574(s32, s32, u32, f32, f32);
u32 fn_8012EA34(s32);
M2C_UNK hwFlushStream(s32, s32, s32, u8, M2C_UNK, M2C_UNK);
s32 fn_8012EBA8(u8);
extern f32 lbl_80352230;
M2C_UNK fn_80124720(s32);
u32 fn_8011BE04(u32);
u8 fn_8012EB68(M2C_UNK, void *, M2C_UNK *);

void fn_80119368(s32 arg0, u32 arg1, M2C_UNK arg_sp0);
void sndSeqSpeed(s32 arg0, s32 arg1);
void fn_80119924(s32 arg0);
void sndSeqMute(s32 arg0, s32 arg1, s32 arg2);
void sndSeqVolume(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
u16 fn_80119A1C(s32 arg0, s32 arg1);
s32 fn_80119A38(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80119A98(s32 arg0, s32 arg1, s32 arg2);
s32 sndFXKeyOff(s32 arg0);
s32 fn_80119B38(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80119BBC(s32 arg0);
void sndVolume(s32 arg0, s32 arg1, s32 arg2);
void sndMasterVolume(s32 arg0, s32 arg1, u8 arg2, u8 arg3);
void sndOutputMode(s32 arg0);
void fn_80119DDC(u8 arg0, s32 arg1, s32 arg2);
void fn_80119E84(u8 arg0, M2C_UNK arg_sp0);
void fn_80119F74(void);
void fn_80119F94(void);
void fn_80119FB4(void);
void SetHWMix(void *arg0);
void fn_8011A0FC(M2C_UNK arg_sp0);
void fn_8011A9A8(void);
void fn_8011A9AC(s32 arg0);
s32 GetPrivateIndex(u32 arg0);
void CheckOutputMode(s8 *arg0, s8 *arg1);
void fn_8011ABC4(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4, s8 arg5);
void streamOutputModeChanged(void);
u32 fn_8011AD38(s8 arg0, s32 arg1, s32 arg2, s32 arg3, s8 arg4, s8 arg5, s8 arg6, s8 arg7, M2C_UNK arg_sp0, u8 arg_sp8, u8 arg_spC, s32 arg_sp10, s32 arg_sp14, s32 arg_sp18, void *arg_sp1C);
s32 sndStreamAllocLength(s32 arg0, s32 arg1);

void fn_80119368(s32 arg0, u32 arg1, M2C_UNK arg_sp0) { } /* draft: stub */

void sndSeqSpeed(s32 arg0, s32 arg1) {
    hwDisableIrq();
    fn_801137B4(arg0, arg1);
    hwEnableIrq();
}

void fn_80119924(s32 arg0) {
    hwDisableIrq();
    fn_80113898(arg0);
    hwEnableIrq();
}

void sndSeqMute(s32 arg0, s32 arg1, s32 arg2) {
    hwDisableIrq();
    fn_801139A0(arg0, arg1, arg2);
    hwEnableIrq();
}

void sndSeqVolume(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    hwDisableIrq();
    fn_80113A5C(arg0, arg1, arg2, arg3);
    hwEnableIrq();
}

u16 fn_80119A1C(s32 arg0, s32 arg1) {
    return *(&lbl_8032C8C0 + ((arg0 << 5) & 0x1FE0) + ((arg1 * 2) & 0x1FE));
}

s32 fn_80119A38(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    hwDisableIrq();
    temp_r31 = fn_80118A18(arg0, arg1, arg2);
    hwEnableIrq();
    return temp_r31;
}

s32 fn_80119A98(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    hwDisableIrq();
    temp_r31 = fn_80118AFC(arg0, arg1, arg2);
    hwEnableIrq();
    return temp_r31;
}

s32 sndFXKeyOff(s32 arg0) {
    s32 temp_r31;

    hwDisableIrq();
    temp_r31 = fn_80118C64(arg0);
    hwEnableIrq();
    return temp_r31;
}

s32 fn_80119B38(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r31;

    hwDisableIrq();
    temp_r31 = fn_80118950(arg0, arg1, arg2, arg3, M2C_FIELD((&lbl_8032D654 + ((arg3 * 2) & 0x1FE)), u8 *, 1));
    hwEnableIrq();
    return temp_r31;
}

s32 fn_80119BBC(s32 arg0) {
    s32 var_r3;

    var_r3 = -1;
    if ((u32) (fn_80123AC4() + 0x10000) != -1U) {
        var_r3 = arg0;
    }
    return var_r3;
}

void sndVolume(s32 arg0, s32 arg1, s32 arg2) {
    hwDisableIrq();
    synthVolume(arg0, arg1, arg2, 0, -1);
    hwEnableIrq();
}

void sndMasterVolume(s32 arg0, s32 arg1, u8 arg2, u8 arg3) {
    hwDisableIrq();
    if (arg2 != 0) {
        synthVolume(arg0, arg1, 0x15, 0, -1);
    }
    if (arg3 != 0) {
        synthVolume(arg0, arg1, 0x16, 0, -1);
    }
    hwEnableIrq();
}

void sndOutputMode(s32 arg0) {
    s32 temp_r0_4;
    s32 var_r6;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r31;
    u32 temp_r3;
    u32 var_r7;
    void *temp_r3_2;
    void *temp_r4;

    temp_r31 = lbl_80350D5C;
    switch (arg0) {                                 /* irregular */
    case 0:
        temp_r0 = temp_r31 | 1;
        lbl_80350D5C = temp_r0;
        lbl_80350D5C = temp_r0 & 0xFFFFFFFD;
        fn_8012EDC0((unsigned long)(0));
        break;
    case 1:
        temp_r3 = temp_r31 & 0xFFFFFFFE;
        temp_r0_2 = temp_r31 & 0xFFFFFFFC;
        lbl_80350D5C = temp_r3;
        lbl_80350D5C = temp_r0_2;
        fn_8012EDC0(temp_r3);
        break;
    case 2:
        temp_r0_3 = temp_r31 & 0xFFFFFFFE;
        lbl_80350D5C = temp_r0_3;
        lbl_80350D5C = temp_r0_3 | 2;
        fn_8012EDC0((unsigned long)(0));
        break;
    }
    if (temp_r31 != (u32) lbl_80350D5C) {
        var_r7 = 0U;
        var_r6 = 0;
loop_12:
        if (var_r7 < (u8) M2C_FIELD(&lbl_8032CC00, u8 *, 0x210)) {
            temp_r0_4 = var_r6 + 0x114;
            var_r6 += 0x404;
            var_r7 += 1;
            /* draft: did not compile: temp_r4 = lbl_80350D60 + temp_r0_4; */
            /* draft: did not compile: temp_r3_2 = lbl_80350D60 + temp_r0_4; */
            M2C_FIELD(temp_r3_2, s32 *, 4) = (s32) M2C_FIELD(temp_r4, s32 *, 4);
            M2C_FIELD(temp_r3_2, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) | 0x2000);
            goto loop_12;
        }
        streamOutputModeChanged();
    }
}

void fn_80119DDC(u8 arg0, s32 arg1, s32 arg2) {
    u8 temp_r10;
    s32 temp_r12;

    hwDisableIrq();
    temp_r12 = (arg0 * 2) & 0x1FE;
    temp_r10 = (arg0 * 4) & 0x3FC;
    *(&lbl_8032D5F4 + temp_r10) = 0;
    M2C_FIELD((&lbl_8032D654 + temp_r12), s8 *, 1) = 0;
    *(&lbl_8032D654 + temp_r12) = 0;
    *(&lbl_8032D634 + temp_r10) = 0;
    *(&lbl_80350D4C + arg0) = 0xFF;
    *(&lbl_80350D3C + arg0) = 0xFF;
    fn_8012E98C(arg0, arg1, arg2, &lbl_8032D654, &lbl_80350D3C, &lbl_80350D4C, 0, temp_r10);
    hwEnableIrq();
}

void fn_80119E84(u8 arg0, M2C_UNK arg_sp0) {
    s32 temp_r8;
    s32 var_r28;
    u32 var_r27;
    void *temp_r4;

    var_r27 = 0U;
    var_r28 = 0;
loop_7:
    if (var_r27 < (u8) M2C_FIELD(&lbl_8032CC00, u8 *, 0x210)) {
        /* draft: did not compile: temp_r4 = lbl_80350D60 + var_r28; */
        if (arg0 == (u8) M2C_FIELD(temp_r4, u8 *, 0x11F)) {
            if ((u32) (M2C_FIELD(temp_r4, s32 *, 0xF4) + 0x10000) != -1U) {
                fn_80124B6C(M2C_FIELD(M2C_FIELD(temp_r4, void **, 0xF8), s32 *, 8));
            } else if (fn_8012E0B4(var_r27) != 0U) {
                fn_8012E960(var_r27);
            }
        }
        var_r28 += 0x404;
        var_r27 += 1;
        goto loop_7;
    }
    hwDisableIrq();
    temp_r8 = (arg0 * 4) & 0x3FC;
    *(&lbl_8032D5F4 + temp_r8) = 0;
    *(&lbl_8032D634 + temp_r8) = 0;
    *(&lbl_80350D4C + arg0) = 0xFF;
    *(&lbl_80350D3C + arg0) = 0xFF;
    hwEnableIrq(&lbl_80350D3C, &lbl_80350D4C, &lbl_8032D634, &lbl_8032D5F4, 0, temp_r8, arg0);
    fn_8012E9AC(arg0);
}

void fn_80119F74(void) {
    fn_8012E9CC();
}

void fn_80119F94(void) {
    fn_8012EA00();
}

void fn_80119FB4(void) {
    M2C_UNK *var_r3;
    s32 temp_r6;
    s32 var_ctr_2;
    u32 var_ctr;
    s32 var_r7;
    void *var_r4;

    var_r7 = 0;
    lbl_80350D7D = 0;
    lbl_80350D7C = 3;
    if (M2C_FIELD(&lbl_8032CC00, u8 *, 0x210) > 0) {
        temp_r6 = M2C_FIELD(&lbl_8032CC00, u8 *, 0x210) - 8;
        if ((s32) M2C_FIELD(&lbl_8032CC00, u8 *, 0x210) > 8) {
            var_r3 = &lbl_8032DFA8;
            var_ctr = (temp_r6 + 7) >> 3U;
            if (temp_r6 > 0) {
                do {
                    M2C_FIELD(var_r3, s8 *, 0xC) = 0;
                    var_r7 += 8;
                    M2C_FIELD(var_r3, s8 *, 0x70) = 0;
                    M2C_FIELD(var_r3, s8 *, 0xD4) = 0;
                    M2C_FIELD(var_r3, s8 *, 0x138) = 0;
                    M2C_FIELD(var_r3, s8 *, 0x19C) = 0;
                    M2C_FIELD(var_r3, s8 *, 0x200) = 0;
                    M2C_FIELD(var_r3, s8 *, 0x264) = 0;
                    M2C_FIELD(var_r3, s8 *, 0x2C8) = 0;
                    var_r3 += 0x320;
                    var_ctr -= 1;
                } while (var_ctr != 0);
            }
        }
        var_r4 = &lbl_8032DFA8 + (var_r7 * 0x64);
        var_ctr_2 = M2C_FIELD(&lbl_8032CC00, u8 *, 0x210) - var_r7;
        if (var_r7 < (s32) M2C_FIELD(&lbl_8032CC00, u8 *, 0x210)) {
            do {
                M2C_FIELD(var_r4, s8 *, 0xC) = 0;
                /* draft: did not compile: var_r4 += 0x64; */
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
    lbl_80350D78 = 0;
}

void SetHWMix(void *arg0) {
    fn_8012E6A0(M2C_FIELD(arg0, s32 *, 0x4C), 0, M2C_FIELD(arg0, u8 *, 0x5A) << 0x10, M2C_FIELD(arg0, u8 *, 0x5B) << 0x10, lbl_80352220 * (f32) M2C_FIELD(arg0, u8 *, 0x59), lbl_80352220 * (f32) M2C_FIELD(arg0, u8 *, 0x5C), lbl_80352220 * (f32) M2C_FIELD(arg0, u8 *, 0x5D), lbl_80352220);
}

void fn_8011A0FC(M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8011A9A8(void) {

}

void fn_8011A9AC(s32 arg0) {
    u8 temp_r0;
    void *temp_r31;

    temp_r31 = &lbl_8032DFA8 + (arg0 * 0x64);
    temp_r0 = M2C_FIELD(temp_r31, u8 *, 0xC);
    if ((s32) temp_r0 < 3) {
        if ((s32) temp_r0 < 1) {
            return;
        }
        if (temp_r0 == 2) {
            fn_80124720(M2C_FIELD(temp_r31, s32 *, 0x4C));
        }
        M2C_FIELD(temp_r31, u8 *, 0xC) = 3U;
        M2C_FIELD(temp_r31, M2C_UNK (**)(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32), 0x10)(0, 0, 0, 0, M2C_FIELD(temp_r31, s32 *, 0x50));
    }
}

s32 GetPrivateIndex(u32 arg0) {
    s32 var_ctr;
    s32 temp_r5;
    u8 temp_r5_2;
    u8 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r5_5;
    s32 temp_r5_6;
    s32 temp_r5_7;
    M2C_UNK *var_r4;
    s32 var_r5;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;

    var_r4 = &lbl_8032DFA8;
    var_r5 = 0;
    var_ctr = 8;
loop_1:
    if (((u8) M2C_FIELD(var_r4, u8 *, 0xC) != 0) && (arg0 == (u32) M2C_FIELD(var_r4, u32 *, 4))) {
        return var_r5;
    }
    temp_r5_7 = var_r5 + 1;
    temp_r4 = var_r4 + 0x64;
    if (((u8) M2C_FIELD(var_r4, u8 *, 0x70) != 0) && (arg0 == (u32) M2C_FIELD(temp_r4, u32 *, 4))) {
        return temp_r5_7;
    }
    temp_r5_6 = temp_r5_7 + 1;
    /* draft: did not compile: temp_r4_2 = temp_r4 + 0x64; */
    if (((u8) M2C_FIELD(temp_r4, u8 *, 0x70) != 0) && (arg0 == (u32) M2C_FIELD(temp_r4_2, u32 *, 4))) {
        return temp_r5_6;
    }
    temp_r5_5 = temp_r5_6 + 1;
    /* draft: did not compile: temp_r4_3 = temp_r4_2 + 0x64; */
    if (((u8) M2C_FIELD(temp_r4_2, u8 *, 0x70) != 0) && (arg0 == (u32) M2C_FIELD(temp_r4_3, u32 *, 4))) {
        return temp_r5_5;
    }
    temp_r5_4 = temp_r5_5 + 1;
    /* draft: did not compile: temp_r4_4 = temp_r4_3 + 0x64; */
    if (((u8) M2C_FIELD(temp_r4_3, u8 *, 0x70) != 0) && (arg0 == (u32) M2C_FIELD(temp_r4_4, u32 *, 4))) {
        return temp_r5_4;
    }
    temp_r5_3 = temp_r5_4 + 1;
    /* draft: did not compile: temp_r4_5 = temp_r4_4 + 0x64; */
    if (((u8) M2C_FIELD(temp_r4_4, u8 *, 0x70) != 0) && (arg0 == (u32) M2C_FIELD(temp_r4_5, u32 *, 4))) {
        return temp_r5_3;
    }
    temp_r5_2 = temp_r5_3 + 1;
    /* draft: did not compile: temp_r4_6 = temp_r4_5 + 0x64; */
    if (((u8) M2C_FIELD(temp_r4_5, u8 *, 0x70) != 0) && (arg0 == (u32) M2C_FIELD(temp_r4_6, u32 *, 4))) {
        return temp_r5_2;
    }
    temp_r5 = temp_r5_2 + 1;
    /* draft: did not compile: temp_r4_7 = temp_r4_6 + 0x64; */
    if (((u8) M2C_FIELD(temp_r4_6, u8 *, 0x70) != 0) && (arg0 == (u32) M2C_FIELD(temp_r4_7, u32 *, 4))) {
        return temp_r5;
    }
    /* draft: did not compile: var_r4 = temp_r4_7 + 0x64; */
    var_r5 = temp_r5 + 1;
    var_ctr -= 1;
    if (var_ctr == 0) {
        return -1;
    }
    goto loop_1;
}

void CheckOutputMode(s8 *arg0, s8 *arg1) {
    if (lbl_80350D5C & 1) {
        *arg0 = 0x40;
        *arg1 = 0;
        return;
    }
    if (!(lbl_80350D5C & 2)) {
        *arg1 = 0;
    }
}

void fn_8011ABC4(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4, s8 arg5) {
    s8 var_r5;
    s8 var_r6;

    var_r5 = arg2;
    var_r6 = arg3;
    M2C_FIELD(arg0, s8 *, 0x5E) = var_r5;
    M2C_FIELD(arg0, s8 *, 0x5F) = var_r6;
    if (lbl_80350D5C & 1) {
        var_r5 = 0x40;
        var_r6 = 0;
    } else if (!(lbl_80350D5C & 2)) {
        var_r6 = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x59) = arg1;
    M2C_FIELD(arg0, s8 *, 0x5A) = var_r5;
    M2C_FIELD(arg0, s8 *, 0x5B) = var_r6;
    M2C_FIELD(arg0, s8 *, 0x5C) = arg4;
    M2C_FIELD(arg0, s8 *, 0x5D) = arg5;
}

void streamOutputModeChanged(void) {
    M2C_UNK *var_r30;
    u32 var_r29;

    hwDisableIrq();
    var_r30 = &lbl_8032DFA8;
    var_r29 = 0U;
loop_9:
    if (var_r29 < (u8) M2C_FIELD(&lbl_8032CC00, u8 *, 0x210)) {
        if ((u8) M2C_FIELD(var_r30, u8 *, 0xC) != 0) {
            M2C_FIELD(var_r30, u8 *, 0x5A) = (u8) M2C_FIELD(var_r30, u8 *, 0x5E);
            M2C_FIELD(var_r30, u8 *, 0x5B) = (u8) M2C_FIELD(var_r30, u8 *, 0x5F);
            if (lbl_80350D5C & 1) {
                M2C_FIELD(var_r30, u8 *, 0x5A) = 0x40U;
                M2C_FIELD(var_r30, u8 *, 0x5B) = 0U;
            } else if (!(lbl_80350D5C & 2)) {
                M2C_FIELD(var_r30, u8 *, 0x5B) = 0U;
            }
            if ((u8) M2C_FIELD(var_r30, u8 *, 0xC) != 3) {
                fn_8012E6A0(M2C_FIELD(var_r30, s32 *, 0x4C), 0, M2C_FIELD(var_r30, u8 *, 0x5A) << 0x10, M2C_FIELD(var_r30, u8 *, 0x5B) << 0x10, lbl_80352220 * (f32) M2C_FIELD(var_r30, u8 *, 0x59), lbl_80352220 * (f32) M2C_FIELD(var_r30, u8 *, 0x5C), lbl_80352220 * (f32) M2C_FIELD(var_r30, u8 *, 0x5D), lbl_80352220);
            }
        }
        var_r30 += 0x64;
        var_r29 += 1;
        goto loop_9;
    }
    hwEnableIrq();
}

u32 fn_8011AD38(s8 arg0, s32 arg1, s32 arg2, s32 arg3, s8 arg4, s8 arg5, s8 arg6, s8 arg7, M2C_UNK arg_sp0, u8 arg_sp8, u8 arg_spC, s32 arg_sp10, s32 arg_sp14, s32 arg_sp18, void *arg_sp1C) { return 0; } /* draft: stub */

#pragma push
#pragma optimize_for_size on
s32 sndStreamAllocLength(s32 arg0, s32 arg1) {
    s32 temp_r3;

    if (arg1 & 1) {
        temp_r3 = (arg0 + 0xD) / 7;
        return (((((u32) ((arg0 + 0xD) - temp_r3) >> 1U) + temp_r3) & 0xFFFFFFF8) + 0x1F) & 0xFFFFFFE0;
    }
    return ((arg0 * 2) + 0x1F) & 0xFFFFFFE0;
}
#pragma pop
