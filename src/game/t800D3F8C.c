/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK lbl_8031C9A0;
extern s32 lbl_8034FFBC;
s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32);
s32 SIBusy();
M2C_UNK SIDisablePolling(s32);
M2C_UNK SIGetTypeAsync(s32, M2C_UNK *);
extern M2C_UNK PADTypeAndStatusCallback;
extern s32 lbl_8034FFB4;
extern s32 lbl_80350A5C;
extern u32 lbl_80350A60;
extern s32 lbl_80350A64;
extern s32 lbl_80350A68;
extern s32 lbl_80350A6C;
extern s32 lbl_80350A70;
extern u32 lbl_80350A74;
extern s32 lbl_80350A78;
M2C_UNK OSClearContext(M2C_UNK *);
M2C_UNK OSSetCurrentContext(M2C_UNK *);
extern s32 lbl_80350A84;
M2C_UNK OSRegisterVersion(s32);
M2C_UNK __OSUnmaskInterrupts(M2C_UNK);
extern s32 lbl_8034FFD0;
extern s32 lbl_80350A80;
extern s32 lbl_80350A88;
extern s32 lbl_80350A90;
extern s32 lbl_80350A98;
extern s32 lbl_80350A9C;
extern s32 lbl_80350AA0;
extern s32 lbl_80350AA4;
extern s32 lbl_80350AA8;
extern s32 lbl_80350AAC;
extern s32 lbl_80350AB0;
extern s32 lbl_80350AB4;
extern s32 lbl_80350AB8;
extern s32 lbl_80350ABC;
extern s32 lbl_80350A94;
extern void *lbl_80350A8C;
u64 OSGetTime();
extern s32 lbl_80350AC0;
M2C_UNK __ARChecksize(u16, M2C_UNK);
extern s32 lbl_8034FFD8;
extern s32 lbl_80350AD0;
extern s32 lbl_80350AD4;
extern s32 lbl_80350AD8;
extern s32 lbl_80350ADC;
extern s32 lbl_80350AC4;
extern s32 sp;

void fn_800D3F8C(s32 arg0, void *arg1, void *arg2);
s32 fn_800D4384(s32 arg0);
void SamplingHandler(M2C_UNK *arg1);
u32 PADSetSamplingCallback(u32 arg0);
s32 __PADDisableRecalibration(s32 arg0);
s32 fn_800D4648(s32 arg0);
void AIInitDMA(u16 arg0, u32 arg1);
void fn_800D4714(void);
void AISetStreamPlayState(u32 arg0);
s32 fn_800D4804(void);
void AISetDSPSampleRate(u32 arg0);
s32 fn_800D48F4(void);
void __AI_set_stream_sample_rate(u32 arg0);
s32 fn_800D49DC(void);
void fn_800D49EC(s32 arg0);
u8 fn_800D4A08(void);
void fn_800D4A18(s32 arg0);
u8 fn_800D4A34(void);
void AIInit(s32 arg0);
void __AISHandler(M2C_UNK *arg1);
void __AIDHandler(M2C_UNK *arg1);
void __AICallbackStackSwitch(M2C_UNK (*arg0)(s32 *));
void __AI_SRC_INIT(void);
s32 fn_800D4F14(s32 arg0);
void ARStartDMA(s32 arg0, u16 arg1, u16 arg2, u16 arg3);
s32 ARInit(s32 arg0, s32 arg1);
void fn_800D510C(void);
s32 fn_800D5118(void);
s32 fn_800D5120(void);
void __ARHandler(M2C_UNK *arg1);

void fn_800D3F8C(s32 arg0, void *arg1, void *arg2) {
    s32 temp_r0;
    s8 temp_r0_2;
    s8 temp_r0_3;
    s8 temp_r0_4;
    s8 temp_r0_5;
    s8 temp_r0_6;
    s8 temp_r0_7;
    s8 temp_r0_8;
    s8 temp_r0_9;
    u8 temp_r0_10;
    u8 temp_r0_11;
    u8 temp_r7;
    u8 temp_r7_2;
    u8 temp_r7_3;
    u8 temp_r7_4;
    u8 var_r3;
    u8 var_r5;
    u8 var_r6;
    u8 var_r6_2;
    u8 var_r6_3;
    u8 var_r6_4;
    void *temp_r3;

    M2C_FIELD(arg1, s16 *, 0) = (s16) (((u32) M2C_FIELD(arg2, u32 *, 0) >> 0x10U) & 0x3FFF);
    M2C_FIELD(arg1, s8 *, 2) = (s8) ((u32) M2C_FIELD(arg2, u32 *, 0) >> 8U);
    M2C_FIELD(arg1, s8 *, 3) = (s8) M2C_FIELD(arg2, u32 *, 0);
    temp_r0 = lbl_8034FFBC & 0x700;
    switch (temp_r0) {                              /* irregular */
    case 0x600:
    case 0x700:
    case 0x500:
    case 0x0:
        M2C_FIELD(arg1, s8 *, 4) = (s8) ((u32) M2C_FIELD(arg2, u32 *, 4) >> 0x18U);
        M2C_FIELD(arg1, s8 *, 5) = (s8) ((u32) M2C_FIELD(arg2, u32 *, 4) >> 0x10U);
        M2C_FIELD(arg1, u8 *, 6) = (u8) (((u32) M2C_FIELD(arg2, u32 *, 4) >> 8U) & 0xF0);
        M2C_FIELD(arg1, u8 *, 7) = (u8) (((u32) M2C_FIELD(arg2, u32 *, 4) >> 4U) & 0xF0);
        M2C_FIELD(arg1, u8 *, 8) = (u8) (M2C_FIELD(arg2, u32 *, 4) & 0xF0);
        M2C_FIELD(arg1, s8 *, 9) = (s8) ((M2C_FIELD(arg2, u32 *, 4) * 0x10) & 0xF0);
        break;
    case 0x100:
        M2C_FIELD(arg1, s8 *, 4) = (s8) (((u32) M2C_FIELD(arg2, u32 *, 4) >> 0x18U) & 0xF0);
        M2C_FIELD(arg1, s8 *, 5) = (s8) (((u32) M2C_FIELD(arg2, u32 *, 4) >> 0x14U) & 0xF0);
        M2C_FIELD(arg1, u8 *, 6) = (u8) ((u32) M2C_FIELD(arg2, u32 *, 4) >> 0x10U);
        M2C_FIELD(arg1, u8 *, 7) = (u8) ((u32) M2C_FIELD(arg2, u32 *, 4) >> 8U);
        M2C_FIELD(arg1, u8 *, 8) = (u8) (M2C_FIELD(arg2, u32 *, 4) & 0xF0);
        M2C_FIELD(arg1, s8 *, 9) = (s8) ((M2C_FIELD(arg2, u32 *, 4) * 0x10) & 0xF0);
        break;
    case 0x200:
        M2C_FIELD(arg1, s8 *, 4) = (s8) (((u32) M2C_FIELD(arg2, u32 *, 4) >> 0x18U) & 0xF0);
        M2C_FIELD(arg1, s8 *, 5) = (s8) (((u32) M2C_FIELD(arg2, u32 *, 4) >> 0x14U) & 0xF0);
        M2C_FIELD(arg1, u8 *, 6) = (u8) (((u32) M2C_FIELD(arg2, u32 *, 4) >> 0x10U) & 0xF0);
        M2C_FIELD(arg1, u8 *, 7) = (u8) (((u32) M2C_FIELD(arg2, u32 *, 4) >> 0xCU) & 0xF0);
        M2C_FIELD(arg1, u8 *, 8) = (u8) ((u32) M2C_FIELD(arg2, u32 *, 4) >> 8U);
        M2C_FIELD(arg1, s8 *, 9) = (s8) M2C_FIELD(arg2, u32 *, 4);
        break;
    case 0x300:
        M2C_FIELD(arg1, s8 *, 4) = (s8) ((u32) M2C_FIELD(arg2, u32 *, 4) >> 0x18U);
        M2C_FIELD(arg1, s8 *, 5) = (s8) ((u32) M2C_FIELD(arg2, u32 *, 4) >> 0x10U);
        M2C_FIELD(arg1, u8 *, 6) = (u8) ((u32) M2C_FIELD(arg2, u32 *, 4) >> 8U);
        M2C_FIELD(arg1, u8 *, 7) = (u8) M2C_FIELD(arg2, u32 *, 4);
        M2C_FIELD(arg1, u8 *, 8) = 0U;
        M2C_FIELD(arg1, s8 *, 9) = 0;
        break;
    case 0x400:
        M2C_FIELD(arg1, s8 *, 4) = (s8) ((u32) M2C_FIELD(arg2, u32 *, 4) >> 0x18U);
        M2C_FIELD(arg1, s8 *, 5) = (s8) ((u32) M2C_FIELD(arg2, u32 *, 4) >> 0x10U);
        M2C_FIELD(arg1, u8 *, 6) = 0U;
        M2C_FIELD(arg1, u8 *, 7) = 0U;
        M2C_FIELD(arg1, u8 *, 8) = (u8) ((u32) M2C_FIELD(arg2, u32 *, 4) >> 8U);
        M2C_FIELD(arg1, s8 *, 9) = (s8) M2C_FIELD(arg2, u32 *, 4);
        break;
    }
    temp_r3 = &lbl_8031C9A0 + (arg0 * 0xC);
    M2C_FIELD(arg1, s8 *, 2) = (s8) ((u8) M2C_FIELD(arg1, s8 *, 2) - 0x80);
    M2C_FIELD(arg1, s8 *, 3) = (s8) ((u8) M2C_FIELD(arg1, s8 *, 3) - 0x80);
    M2C_FIELD(arg1, s8 *, 4) = (s8) ((u8) M2C_FIELD(arg1, s8 *, 4) - 0x80);
    M2C_FIELD(arg1, s8 *, 5) = (s8) ((u8) M2C_FIELD(arg1, s8 *, 5) - 0x80);
    temp_r7 = M2C_FIELD(temp_r3, u8 *, 2);
    var_r6 = (u8) M2C_FIELD(arg1, s8 *, 2);
    if ((s8) temp_r7 > 0) {
        if ((s8) var_r6 < (temp_r0_2 = (s8) temp_r7 - 0x80)) {
            var_r6 = (u8) temp_r0_2;
        }
    } else if ((s8) temp_r7 < 0) {
        temp_r0_3 = (s8) temp_r7 + 0x7F;
        if (temp_r0_3 < (s8) var_r6) {
            var_r6 = (u8) temp_r0_3;
        }
    }
    M2C_FIELD(arg1, s8 *, 2) = (s8) (var_r6 - temp_r7);
    temp_r7_2 = M2C_FIELD(temp_r3, u8 *, 3);
    var_r6_2 = (u8) M2C_FIELD(arg1, s8 *, 3);
    if ((s8) temp_r7_2 > 0) {
        if ((s8) var_r6_2 < (temp_r0_4 = (s8) temp_r7_2 - 0x80)) {
            var_r6_2 = (u8) temp_r0_4;
        }
    } else if ((s8) temp_r7_2 < 0) {
        temp_r0_5 = (s8) temp_r7_2 + 0x7F;
        if (temp_r0_5 < (s8) var_r6_2) {
            var_r6_2 = (u8) temp_r0_5;
        }
    }
    M2C_FIELD(arg1, s8 *, 3) = (s8) (var_r6_2 - temp_r7_2);
    temp_r7_3 = M2C_FIELD(temp_r3, u8 *, 4);
    var_r6_3 = (u8) M2C_FIELD(arg1, s8 *, 4);
    if ((s8) temp_r7_3 > 0) {
        if ((s8) var_r6_3 < (temp_r0_6 = (s8) temp_r7_3 - 0x80)) {
            var_r6_3 = (u8) temp_r0_6;
        }
    } else if ((s8) temp_r7_3 < 0) {
        temp_r0_7 = (s8) temp_r7_3 + 0x7F;
        if (temp_r0_7 < (s8) var_r6_3) {
            var_r6_3 = (u8) temp_r0_7;
        }
    }
    M2C_FIELD(arg1, s8 *, 4) = (s8) (var_r6_3 - temp_r7_3);
    temp_r7_4 = M2C_FIELD(temp_r3, u8 *, 5);
    var_r6_4 = (u8) M2C_FIELD(arg1, s8 *, 5);
    if ((s8) temp_r7_4 > 0) {
        if ((s8) var_r6_4 < (temp_r0_8 = (s8) temp_r7_4 - 0x80)) {
            var_r6_4 = (u8) temp_r0_8;
        }
    } else if ((s8) temp_r7_4 < 0) {
        temp_r0_9 = (s8) temp_r7_4 + 0x7F;
        if (temp_r0_9 < (s8) var_r6_4) {
            var_r6_4 = (u8) temp_r0_9;
        }
    }
    M2C_FIELD(arg1, s8 *, 5) = (s8) (var_r6_4 - temp_r7_4);
    temp_r0_10 = M2C_FIELD(temp_r3, u8 *, 6);
    var_r5 = M2C_FIELD(arg1, u8 *, 6);
    if (var_r5 < temp_r0_10) {
        var_r5 = temp_r0_10;
    }
    M2C_FIELD(arg1, u8 *, 6) = (u8) (var_r5 - temp_r0_10);
    temp_r0_11 = M2C_FIELD(temp_r3, u8 *, 7);
    var_r3 = M2C_FIELD(arg1, u8 *, 7);
    if (var_r3 < temp_r0_11) {
        var_r3 = temp_r0_11;
    }
    M2C_FIELD(arg1, u8 *, 7) = (u8) (var_r3 - temp_r0_11);
}

s32 fn_800D4384(s32 arg0) {
    s32 temp_r30;
    u8 temp_r3;
    s32 temp_r5;
    s32 var_r30;
    s32 var_r3;
    u32 temp_r4;

    if ((u32) lbl_80350A74 != 0U) {
        PADSetSamplingCallback(0);
    }
    if (arg0 == 0) {
        var_r30 = 0;
        var_r3 = 0;
        if (((u32) lbl_80350A60 == 0) && ((s32) lbl_8034FFB4 == 0x20)) {
            var_r3 = 1;
        }
        if ((var_r3 != 0) && (SIBusy() == 0)) {
            var_r30 = 1;
        }
        if (((s32) lbl_80350A78 == 0) && (var_r30 != 0)) {
            temp_r5 = lbl_80350A5C;
            temp_r3 = OSDisableInterrupts();
            temp_r30 = (0xF0000000 | lbl_80350A70) & ~(lbl_80350A68 | lbl_80350A6C);
            temp_r4 = lbl_80350A60 | temp_r30;
            lbl_80350A70 = 0;
            lbl_80350A60 = temp_r4;
            lbl_80350A5C = temp_r5 & ~temp_r30;
            if (!(*(u8 *)0x800030E3 & 0x40)) {
                lbl_80350A64 |= temp_r30;
            }
            SIDisablePolling(lbl_80350A60 & temp_r5);
            if ((s32) lbl_8034FFB4 == 0x20) {
                lbl_8034FFB4 = CLZ(lbl_80350A60);
                if ((s32) lbl_8034FFB4 != 0x20) {
                    lbl_80350A60 &= ~(0x80000000U >> lbl_8034FFB4);
                    memset(&lbl_8031C9A0 + (lbl_8034FFB4 * 0xC), 0, 0xC);
                    SIGetTypeAsync(lbl_8034FFB4, &PADTypeAndStatusCallback);
                }
            }
            OSRestoreInterrupts(temp_r3);
            lbl_80350A78 = 1;
            return 0;
        }
        return var_r30;
    }
    lbl_80350A78 = 0;
    return 1;
}

void SamplingHandler(M2C_UNK *arg1) {
    M2C_UNK sp10;

    if (((M2C_UNK (*)()) lbl_80350A74) != NULL) {
        OSClearContext(&sp10);
        OSSetCurrentContext(&sp10);
        /* draft: did not compile: lbl_80350A74(); */
        OSClearContext(&sp10);
        OSSetCurrentContext(arg1);
    }
}

u32 PADSetSamplingCallback(u32 arg0) {
    u32 temp_r31;

    temp_r31 = lbl_80350A74;
    lbl_80350A74 = arg0;
    if (arg0 != 0U) {
        SIRegisterPollingHandler(SamplingHandler);
    } else {
        SIUnregisterPollingHandler(SamplingHandler);
    }
    return temp_r31;
}

s32 __PADDisableRecalibration(s32 arg0) {
    s32 var_r31;

    OSDisableInterrupts();
    if (*(u8 *)0x800030E3 & 0x40) {
        var_r31 = 1;
    } else {
        var_r31 = 0;
    }
    /* draft: did not compile: *(void *)0x800030E3 = (u8) (*(void *)0x800030E3 & 0xBF); */
    if (arg0 != 0) {
        /* draft: did not compile: *(void *)0x800030E3 = (u8) (*(void *)0x800030E3 | 0x40); */
    }
    OSRestoreInterrupts((long)(0));
    return var_r31;
}

s32 fn_800D4648(s32 arg0) {
    s32 temp_r31;

    temp_r31 = lbl_80350A84;
    OSDisableInterrupts();
    lbl_80350A84 = arg0;
    OSRestoreInterrupts((long)(0));
    return temp_r31;
}

void AIInitDMA(u16 arg0, u32 arg1) {
    s32 temp_r4;
    void *temp_r5;
    void *temp_r6;
    void *temp_r7;

    OSDisableInterrupts();
    temp_r5 = (u16 *)0xCC000000 + 0x5000;
    temp_r6 = (u16 *)0xCC000000 + 0x5000;
    temp_r7 = (u16 *)0xCC000000 + 0x5000;
    M2C_FIELD(temp_r5, s16 *, 0x30) = (s16) ((*(u16 *)0xCC005030 & 0xFFFFFC00) | (arg0 >> 0x10U));
    M2C_FIELD(temp_r6, u16 *, 0x32) = (u16) ((M2C_FIELD(temp_r6, u16 *, 0x32) & 0xFFFF001F) | arg0);
    temp_r4 = M2C_FIELD(temp_r7, u16 *, 0x36) & 0xFFFF8000;
    M2C_FIELD(temp_r7, u16 *, 0x36) = (u16) (temp_r4 | (u16) (arg1 >> 5U));
    OSRestoreInterrupts((long)(temp_r4));
}

void fn_800D4714(void) {
    M2C_FIELD((void *)0xCC005000, u16 *, 0x36) = (u16) (M2C_FIELD((void *)0xCC005000, u16 *, 0x36) | 0x8000);
}

void AISetStreamPlayState(u32 arg0) {
    s32 temp_r31;
    s32 temp_r30;
    s32 temp_r29;

    if (arg0 != fn_800D4804()) {
        if ((fn_800D49DC() == 0U) && (arg0 == 1)) {
            temp_r30 = fn_800D4A34();
            temp_r29 = fn_800D4A08();
            fn_800D4A18(0);
            fn_800D49EC(0);
            temp_r31 = OSDisableInterrupts();
            __AI_SRC_INIT();
            *(s32 *)0xCC006C00 = (*(s32 *)0xCC006C00 & 0xFFFFFFFE) | 1;
            OSRestoreInterrupts((long)(temp_r31));
            fn_800D49EC(temp_r30);
            fn_800D4A18(temp_r29);
            *(s32 *)0xCC006C00 = (*(s32 *)0xCC006C00 & 0xFFFFFFDF) | 0x20;
            return;
        }
        /* draft: did not compile: *(void *)0xCC006C00 = (s32) ((*(void *)0xCC006C00 & 0xFFFFFFFE) | arg0); */
    }
}

s32 fn_800D4804(void) {
    return *(s32 *)0xCC006C00 & 1;
}

void AISetDSPSampleRate(u32 arg0) {
    s32 temp_r26;
    s32 temp_r27;
    s32 temp_r28;
    s8 temp_r29;
    s32 temp_r30;
    s32 temp_r4;

    if (arg0 != fn_800D48F4()) {
        *(s32 *)0xCC006C00 &= 0xFFFFFFBF;
        if (arg0 == 0U) {
            temp_r30 = fn_800D4A08();
            temp_r29 = fn_800D4A34();
            temp_r27 = *(s32 *)0xCC006C00 & 1;
            temp_r28 = fn_800D49DC();
            fn_800D49EC(0);
            fn_800D4A18(0);
            temp_r26 = OSDisableInterrupts();
            __AI_SRC_INIT();
            *(s32 *)0xCC006C00 = (*(s32 *)0xCC006C00 & 0xFFFFFFDF) | 0x20;
            temp_r4 = *(s32 *)0xCC006C00 & 0xFFFFFFFD;
            *(s32 *)0xCC006C00 = temp_r4 | (temp_r28 * 2);
            *(s32 *)0xCC006C00 = (*(s32 *)0xCC006C00 & 0xFFFFFFFE) | temp_r27;
            *(s32 *)0xCC006C00 |= 0x40;
            OSRestoreInterrupts((long)(temp_r26));
            fn_800D49EC(temp_r30);
            fn_800D4A18(temp_r29);
        }
    }
}

s32 fn_800D48F4(void) {
    return (((u32) *(u32 *)0xCC006C00 >> 6U) & 1) ^ 1;
}

void __AI_set_stream_sample_rate(u32 arg0) {
    s32 temp_r26;
    s32 temp_r27;
    s32 temp_r3;
    s8 temp_r29;
    s32 temp_r30;
    s32 temp_r28;
    s32 temp_r4;

    if (arg0 != fn_800D49DC()) {
        temp_r29 = *(s32 *)0xCC006C00 & 1;
        temp_r28 = fn_800D4A08();
        temp_r27 = fn_800D4A34();
        fn_800D4A18(0);
        fn_800D49EC(0);
        temp_r3 = *(s32 *)0xCC006C00;
        temp_r26 = temp_r3 & 0x40;
        *(s32 *)0xCC006C00 &= 0xFFFFFFBF;
        __AI_SRC_INIT();
        temp_r30 = OSDisableInterrupts(temp_r3);
        *(s32 *)0xCC006C00 |= temp_r26;
        *(s32 *)0xCC006C00 = (*(s32 *)0xCC006C00 & 0xFFFFFFDF) | 0x20;
        temp_r4 = *(s32 *)0xCC006C00 & 0xFFFFFFFD;
        *(s32 *)0xCC006C00 = temp_r4 | (arg0 * 2);
        OSRestoreInterrupts((long)(temp_r30));
        AISetStreamPlayState(temp_r29);
        fn_800D49EC(temp_r28);
        fn_800D4A18(temp_r27);
    }
}

s32 fn_800D49DC(void) {
    return ((u32) *(u32 *)0xCC006C00 >> 1U) & 1;
}

void fn_800D49EC(s32 arg0) {
    M2C_FIELD((void *)0xCC006C00, s32 *, 4) = (s32) ((M2C_FIELD((void *)0xCC006C00, s32 *, 4) & 0xFFFFFF00 & ~0xFF) | (arg0 & 0xFF));
}

u8 fn_800D4A08(void) {
    return (u8) *(s32 *)0xCC006C04;
}

#pragma push
#pragma peephole off
void fn_800D4A18(s32 arg0) {
    M2C_FIELD((void *)0xCC006C00, s32 *, 4) = (s32) ((M2C_FIELD((void *)0xCC006C00, s32 *, 4) & 0xFFFF00FF & ~0xFF00) | ((arg0 << 8) & 0xFF00));
}
#pragma pop

u8 fn_800D4A34(void) {
    return (u8) ((u32) *(u32 *)0xCC006C04 >> 8U);
}

void AIInit(s32 arg0) { } /* draft: stub */

void __AISHandler(M2C_UNK *arg1) {
    M2C_UNK sp10;

    *(s32 *)0xCC006C00 |= 8;
    OSClearContext(&sp10);
    OSSetCurrentContext(&sp10);
    if (((M2C_UNK (*)(s32)) lbl_80350A80) != NULL) {
        /* draft: did not compile: lbl_80350A80(M2C_FIELD(((s32 *)0xCC000000 + 0x6C00), s32 *, 8)); */
    }
    OSClearContext(&sp10);
    OSSetCurrentContext(arg1);
}

void __AIDHandler(M2C_UNK *arg1) {
    M2C_UNK sp10;
    u16 temp_r5;

    temp_r5 = M2C_FIELD((void *)0xCC005000, u16 *, 0xA);
    M2C_FIELD((void *)0xCC005000, u16 *, 0xA) = (u16) ((temp_r5 & ~0xA0) | 8);
    OSClearContext((long *)(&sp10));
    OSSetCurrentContext(&sp10);
    if ((((M2C_UNK (*)()) lbl_80350A84) != NULL) && ((s32) lbl_80350A94 == 0)) {
        lbl_80350A94 = 1;
        if ((u32) lbl_80350A88 != 0U) {
            __AICallbackStackSwitch((long (*)(long *))(0));
        } else {
            /* draft: did not compile: lbl_80350A84(); */
        }
        lbl_80350A94 = 0;
    }
    OSClearContext(&sp10);
    OSSetCurrentContext(arg1);
}

void __AICallbackStackSwitch(M2C_UNK (*arg0)(s32 *)) {
    /* draft: did not compile: lbl_80350A8C = sp - 0x18; */
    arg0(&lbl_80350A88);
}

void __AI_SRC_INIT(void) {
    s32 temp_r5;
    s32 temp_r7;
    s32 temp_r8;
    u32 temp_r26;
    u32 var_r0;
    u64 temp_r27;
    u64 temp_ret;
    u64 temp_ret_2;
    void *temp_r30;

    var_r0 = 0U;
loop_15:
    if (var_r0 == 0U) {
        temp_r30 = (s32 *)0xCC000000 + 0x6C00;
        *(s32 *)0xCC006C00 = (*(s32 *)0xCC006C00 & 0xFFFFFFDF) | 0x20;
        *(s32 *)0xCC006C00 &= 0xFFFFFFFD;
        *(s32 *)0xCC006C00 = (*(s32 *)0xCC006C00 & 0xFFFFFFFE) | 1;
        do {

        } while ((u32) M2C_FIELD(temp_r30, u32 *, 8) == (u32) M2C_FIELD(temp_r30, u32 *, 8));
        temp_ret = OSGetTime();
        temp_r26 = (u32) temp_ret;
        temp_r27 = temp_ret;
        *(s32 *)0xCC006C00 = (*(s32 *)0xCC006C00 & 0xFFFFFFFD) | 2;
        *(s32 *)0xCC006C00 = (*(s32 *)0xCC006C00 & 0xFFFFFFFE) | 1;
        do {

        } while ((u32) M2C_FIELD(temp_r30, u32 *, 8) == (u32) M2C_FIELD(temp_r30, u32 *, 8));
        temp_ret_2 = OSGetTime();
        temp_r8 = (u32) temp_ret_2 - temp_r26;
        temp_r7 = ((temp_ret_2 - temp_r27) - !M2C_CARRY) ^ 0x80000000;
        *(s32 *)0xCC006C00 &= 0xFFFFFFFD;
        *(s32 *)0xCC006C00 &= 0xFFFFFFFE;
        if ((s32) -((temp_r7 - temp_r7) - !M2C_CARRY) != 0) {
            var_r0 = 1U;
        } else if (((s32) -((temp_r7 - temp_r7) - !M2C_CARRY) == 0) && ((s32) -((temp_r7 - temp_r7) - !M2C_CARRY) != 0)) {
            var_r0 = 1U;
        } else {
            var_r0 = 0U;
        }
        goto loop_15;
    }
    do {
        temp_r5 = OSGetTime() ^ 0x80000000;
    } while ((s32) -((temp_r5 - temp_r5) - !M2C_CARRY) != 0);
}

s32 fn_800D4F14(s32 arg0) {
    s32 temp_r31;

    temp_r31 = lbl_80350AC0;
    OSDisableInterrupts();
    lbl_80350AC0 = arg0;
    OSRestoreInterrupts((long)(0));
    return temp_r31;
}

void ARStartDMA(s32 arg0, u16 arg1, u16 arg2, u16 arg3) {
    s32 temp_r4_2;
    u8 temp_r7;
    u16 temp_r6;
    void *temp_r4;
    void *temp_r5;
    void *temp_r8;
    void *temp_r9;

    OSDisableInterrupts();
    temp_r8 = (u16 *)0xCC000000 + 0x5000;
    temp_r9 = (u16 *)0xCC000000 + 0x5000;
    *(u16 *)0xCC005020 = (*(u16 *)0xCC005020 & 0xFFFFFC00) | (arg1 >> 0x10U);
    temp_r4 = (u16 *)0xCC000000 + 0x5000;
    *(u16 *)0xCC005022 = arg1 | (*(u16 *)0xCC005022 & 0xFFFF001F);
    temp_r5 = (u16 *)0xCC000000 + 0x5000;
    M2C_FIELD(temp_r8, s16 *, 0x24) = (s16) ((*(u16 *)0xCC005024 & 0xFFFFFC00) | (arg2 >> 0x10U));
    M2C_FIELD(temp_r9, u16 *, 0x26) = (u16) ((M2C_FIELD(temp_r9, u16 *, 0x26) & 0xFFFF001F) | arg2);
    M2C_FIELD(temp_r4, u16 *, 0x28) = (u16) ((M2C_FIELD(temp_r4, u16 *, 0x28) & 0xFFFF7FFF & ~0xFFFF8000) | (arg0 << 0xF));
    temp_r7 = M2C_FIELD(temp_r4, u16 *, 0x28) & 0xFFFFFC00;
    temp_r6 = temp_r7 | (arg3 >> 0x10U);
    M2C_FIELD(temp_r4, u16 *, 0x28) = temp_r6;
    temp_r4_2 = M2C_FIELD(temp_r5, u16 *, 0x2A) & 0xFFFF001F;
    M2C_FIELD(temp_r5, u16 *, 0x2A) = (u16) (temp_r4_2 | arg3);
    OSRestoreInterrupts((long)(temp_r4_2));
}

s32 ARInit(s32 arg0, s32 arg1) {
    u8 temp_r3;
    s8 temp_r3_2;

    if ((s32) lbl_80350ADC == 1) {
        return 0x4000;
    }
    OSRegisterVersion(lbl_8034FFD8);
    temp_r3 = OSDisableInterrupts();
    lbl_80350AC0 = 0;
    __OSSetInterruptHandler(6, __ARHandler);
    __OSUnmaskInterrupts(0x02000000);
    lbl_80350AD0 = 0x4000;
    lbl_80350AD8 = arg0;
    temp_r3_2 = *(u16 *)0xCC00501A;
    M2C_FIELD((void *)0xCC005000, u16 *, 0x1A) = (u16) ((M2C_FIELD((void *)0xCC005000, u16 *, 0x1A) & 0xFFFFFF00 & ~0xFF) | (temp_r3_2 & 0xFF));
    __ARChecksize(temp_r3_2, 0xCC005000);
    lbl_80350AD4 = arg1;
    lbl_80350ADC = 1;
    OSRestoreInterrupts(temp_r3);
    return lbl_80350AD0;
}

void fn_800D510C(void) {
    lbl_80350ADC = 0;
}

s32 fn_800D5118(void) {
    return 0x4000;
}

s32 fn_800D5120(void) {
    return lbl_80350AC4;
}

void __ARHandler(M2C_UNK *arg1) {
    M2C_UNK sp10;
    u16 temp_r5;

    temp_r5 = M2C_FIELD((void *)0xCC005000, u16 *, 0xA);
    M2C_FIELD((void *)0xCC005000, u16 *, 0xA) = (u16) ((temp_r5 & ~0x88) | 0x20);
    OSClearContext((long *)(&sp10));
    OSSetCurrentContext(&sp10);
    if (((M2C_UNK (*)()) lbl_80350AC0) != NULL) {
        /* draft: did not compile: lbl_80350AC0(); */
    }
    OSClearContext(&sp10);
    OSSetCurrentContext(arg1);
}
