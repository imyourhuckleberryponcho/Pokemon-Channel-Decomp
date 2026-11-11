/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern void *gx;
M2C_UNK fn_800C34EC(M2C_UNK);
u64 OSGetTime(s32);
u32 fn_800E01DC();
extern void *__memReg;
s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32);
M2C_UNK OSSleepThread(M2C_UNK *);
extern u8 lbl_80350B80;
extern M2C_UNK lbl_80350B84;
extern void *__peReg;
extern s32 lbl_80350B78;
M2C_UNK OSClearContext(M2C_UNK *);
M2C_UNK OSSetCurrentContext(M2C_UNK *);
extern s32 lbl_80350B7C;
M2C_UNK OSWakeupThread(M2C_UNK *);
M2C_UNK OSInitThreadQueue(M2C_UNK *);
M2C_UNK __OSUnmaskInterrupts(M2C_UNK);
M2C_UNK fn_800E068C();
M2C_UNK __GXCalculateVLim();
M2C_UNK fn_800E1DA4();
M2C_UNK __GXSetSUTexRegs();
M2C_UNK fn_800E42AC();

void GXSetVtxAttrFmt();
void fn_800E0B94();
void fn_800E0F0C(void);
void fn_800E0FA8(s32 arg0, s32 arg1, u8 arg2);
void fn_800E1034(void);
void GXSetTexCoordGen2();
void fn_800E1314(u8 arg0);
void GXSetMisc(s32 arg0, u16 arg1);
void GXFlush(void);
s32 __GXAbort(void);
void fn_800E15B0(void);
void GXDrawDone(void);
void GXPixModeSync(void);
void fn_800E16A0(s32 arg0, u8 arg1);
void fn_800E16B4(s32 arg0);
void fn_800E16C8(s32 arg0);
void fn_800E16E4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800E176C(s32 arg0);
void fn_800E1788(s32 arg0, s32 arg1);
void fn_800E179C(s32 arg0);
void fn_800E17B8(u8 arg0, s32 arg1, s32 arg2);
void fn_800E17E0(s32 arg0, s32 arg1, s32 *arg2);
s32 fn_800E1804(s32 arg0);
void fn_800E1848(M2C_UNK *arg1);
s32 GXSetDrawDoneCallback(s32 arg0);
void fn_800E1914(M2C_UNK *arg1);
void __GXPEInit(void);
void fn_800E1A18(void);
void GXBegin(s32 arg0, s32 arg1, s16 arg2);
void __GXSendFlushPrim(void);
void fn_800E1C30(s32 arg0, s32 arg1);
void fn_800E1C78(s32 arg0, s32 arg1);

void GXSetVtxAttrFmt() { } /* draft: stub */

void fn_800E0B94() { } /* draft: stub */

void fn_800E0F0C(void) {
    s32 var_r11;
    u8 var_r12;

    var_r12 = 0;
    var_r11 = 0;
loop_4:
    if (var_r12 < 8U) {
        if (M2C_FIELD(gx, u8 *, 0x4F3) & (1 << var_r12)) {
            *(s8 *)0xCC008000 = 8;
            *(s8 *)0xCC008000 = var_r12 | 0x70;
            /* draft: did not compile: *(s8 *)0xCC008000 = (s32) *(gx + (var_r11 + 0x1C)); */
            *(s8 *)0xCC008000 = 8;
            *(s8 *)0xCC008000 = var_r12 | 0x80;
            /* draft: did not compile: *(s8 *)0xCC008000 = (s32) *(gx + (var_r11 + 0x3C)); */
            *(s8 *)0xCC008000 = 8;
            *(s8 *)0xCC008000 = var_r12 | 0x90;
            /* draft: did not compile: *(s8 *)0xCC008000 = (s32) *(gx + (var_r11 + 0x5C)); */
        }
        var_r11 += 4;
        var_r12 += 1;
        goto loop_4;
    }
    M2C_FIELD(gx, u8 *, 0x4F3) = 0U;
}

void fn_800E0FA8(s32 arg0, s32 arg1, u8 arg2) { } /* draft: stub */

void fn_800E1034(void) {
    *(s8 *)0xCC008000 = 0x48;
}

void GXSetTexCoordGen2() { } /* draft: stub */

void fn_800E1314(u8 arg0) {
    M2C_FIELD(gx, s32 *, 0x204) = (s32) ((M2C_FIELD(gx, s32 *, 0x204) & 0xFFFFFFF0) | arg0);
    *(s8 *)0xCC008000 = 0x10;
    *(s8 *)0xCC008000 = 0x103F;
    M2C_FIELD(gx, s32 *, 0x4F4) = (s32) (M2C_FIELD(gx, s32 *, 0x4F4) | 4);
    *(s8 *)0xCC008000 = (s32) arg0;
}

#pragma push
#pragma optimize_for_size on
void GXSetMisc(s32 arg0, u16 arg1) {
    switch (arg0) {                                 /* irregular */
    case 1:
        M2C_FIELD(gx, u16 *, 4) = arg1;
        M2C_FIELD(gx, u16 *, 0) = (u16) (M2C_FIELD(gx, u16 *, 4) == 0);
        M2C_FIELD(gx, s16 *, 2) = 1;
        if ((u16) M2C_FIELD(gx, u16 *, 4) != 0) {
            M2C_FIELD(gx, s32 *, 0x4F4) = (s32) (M2C_FIELD(gx, s32 *, 0x4F4) | 8);
            return;
        }
    case 0:
        return;
    case 2:
        M2C_FIELD(gx, s8 *, 0x4F1) = (s8) ((s32) arg1 != 0);
        return;
    case 3:
        M2C_FIELD(gx, s8 *, 0x4F2) = (s8) ((s32) arg1 != 0);
        return;
    }
}
#pragma pop

void GXFlush(void) {
    if ((u32) M2C_FIELD(gx, u32 *, 0x4F4) != 0U) {
        fn_800E1A18();
    }
    *(s32 *)0xCC008000 = 0;
    *(s32 *)0xCC008000 = 0;
    *(s32 *)0xCC008000 = 0;
    *(s32 *)0xCC008000 = 0;
    *(s32 *)0xCC008000 = 0;
    *(s32 *)0xCC008000 = 0;
    *(s32 *)0xCC008000 = 0;
    *(s32 *)0xCC008000 = 0;
    fn_800C34EC(0xCC010000);
}

s32 __GXAbort(void) {
    s32 temp_cr0_eq;
    s32 temp_r28;
    s32 temp_r28_2;
    s32 temp_r31_2;
    s32 temp_r3;
    u16 temp_r4;
    u16 temp_r4_2;
    int temp_r0;
    u32 temp_r28_3;
    u32 temp_r31;
    u32 var_r27;
    u64 temp_r29;
    u64 temp_r30;
    u64 temp_r30_2;
    u64 temp_ret;
    u64 temp_ret_2;
    u64 var_r3;

    if (((u8) M2C_FIELD(gx, u8 *, 0x4F2) != 0) && (fn_800E01DC() != 0U)) {
        do {
            temp_r4 = M2C_FIELD(__memReg, u16 *, 0x4E);
        } while (temp_r4 != M2C_FIELD(__memReg, u16 *, 0x4E));
        var_r27 = (temp_r4 << 0x10) | M2C_FIELD(__memReg, u16 *, 0x50);
        do {
            var_r3 = OSGetTime((long)(0));
            temp_r30 = var_r3;
            temp_r28 = 0 ^ 0x80000000;
loop_6:
            OSGetTime((s32) var_r3);
            var_r3 = (u64) -((temp_r28 - temp_r28) - !M2C_CARRY);
            if (var_r3 == 0) {
                goto loop_6;
            }
loop_8:
            temp_r4_2 = M2C_FIELD(__memReg, u16 *, 0x4E);
            if (temp_r4_2 != M2C_FIELD(__memReg, u16 *, 0x4E)) {
                goto loop_8;
            }
            temp_r0 = (temp_r4_2 << 0x10) | M2C_FIELD(__memReg, u16 *, 0x50);
            temp_cr0_eq = temp_r0 == var_r27;
            var_r27 = temp_r0;
        } while (temp_cr0_eq == 0);
    }
    temp_ret = OSGetTime(0xCC000000);
    temp_r31 = (u32) temp_ret;
    M2C_FIELD((void *)0xCC003000, s32 *, 0x18) = 1;
    temp_r30_2 = temp_ret;
    temp_r28_2 = 0 ^ 0x80000000;
    do {
        OSGetTime((long)(0));
    } while (-((temp_r28_2 - temp_r28_2) - !M2C_CARRY) == 0);
    temp_ret_2 = OSGetTime((long)(0));
    M2C_FIELD((void *)0xCC003000, s32 *, 0x18) = 0;
    temp_r28_3 = (u32) temp_ret_2;
    temp_r29 = temp_ret_2;
    temp_r31_2 = 0 ^ 0x80000000;
    do {
        OSGetTime((long)(0));
        temp_r3 = -((temp_r31_2 - temp_r31_2) - !M2C_CARRY);
    } while (temp_r3 == 0);
    return temp_r3;
}

void fn_800E15B0(void) {
    s32 temp_r31;

    temp_r31 = OSDisableInterrupts();
loop_2:
    if ((u8) lbl_80350B80 == 0) {
        OSSleepThread(&lbl_80350B84);
        goto loop_2;
    }
    OSRestoreInterrupts(temp_r31);
}

void GXDrawDone(void) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = OSDisableInterrupts();
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = 0x45000002;
    GXFlush();
    lbl_80350B80 = 0;
    OSRestoreInterrupts(temp_r3);
    temp_r31 = OSDisableInterrupts();
loop_2:
    if ((u8) lbl_80350B80 == 0) {
        OSSleepThread(&lbl_80350B84);
        goto loop_2;
    }
    OSRestoreInterrupts(temp_r31);
}

void GXPixModeSync(void) {
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(gx, s32 *, 0x1DC);
    M2C_FIELD(gx, s16 *, 2) = 0;
}

void fn_800E16A0(s32 arg0, u8 arg1) {
    M2C_FIELD(__peReg, s16 *, 6) = (s16) ((arg1 & ~0xFFFFFF00) | (arg0 << 8));
}

void fn_800E16B4(s32 arg0) {
    M2C_FIELD(__peReg, s16 *, 8) = (s16) ((arg0 & 0xFFFFFFFB) | 4);
}

void fn_800E16C8(s32 arg0) {
    M2C_FIELD(__peReg, u16 *, 2) = (u16) ((M2C_FIELD(__peReg, u16 *, 2) & 0xFFFFFFEF) | ((arg0 * 0x10) & 0xFF0));
}

void fn_800E16E4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 var_r9;

    var_r9 = 1;
    var_r9 = !((arg0 != 1) && (arg0 != 3)) ? var_r9 : 0;
    M2C_FIELD(__peReg, u16 *, 2) = (u16) ((((((((((((((M2C_FIELD(__peReg, u16 *, 2) & 0xFFFFFFFE) | var_r9) & 0xFFFFF7FF) | ((CLZ(3 - arg0) << 6) & 0xFFFFF800)) & 0xFFFFFFFD) | (((u32) CLZ(2 - arg0) >> 4U) & 0x0FFFFFFE)) & 0xFFFF0FFF) | (arg3 << 0xC)) & 0xFFFFF8FF) | (arg1 << 8)) & 0xFFFFFF1F) | (arg2 << 5)) & 0xFFFFFF) | 0x41000000);
}

void fn_800E176C(s32 arg0) {
    M2C_FIELD(__peReg, u16 *, 2) = (u16) ((M2C_FIELD(__peReg, u16 *, 2) & 0xFFFFFFF7) | ((arg0 * 8) & 0x7F8));
}

void fn_800E1788(s32 arg0, s32 arg1) {
    M2C_FIELD(__peReg, s16 *, 4) = (s16) ((arg1 & 0xFF) | ((arg0 << 8) & 0xFF00 & ~0xFF));
}

void fn_800E179C(s32 arg0) {
    M2C_FIELD(__peReg, u16 *, 2) = (u16) ((M2C_FIELD(__peReg, u16 *, 2) & 0xFFFFFFFB) | ((arg0 * 4) & 0x3FC));
}

void fn_800E17B8(u8 arg0, s32 arg1, s32 arg2) { } /* draft: stub */

void fn_800E17E0(s32 arg0, s32 arg1, s32 *arg2) { } /* draft: stub */

#pragma push
#pragma peephole off
s32 fn_800E1804(s32 arg0) {
    u8 temp_r31;

    temp_r31 = lbl_80350B78;
    OSDisableInterrupts();
    lbl_80350B78 = arg0;
    OSRestoreInterrupts((long)(0));
    return temp_r31;
}
#pragma pop

void fn_800E1848(M2C_UNK *arg1) {
    M2C_UNK sp10;
    u16 temp_r31;

    temp_r31 = M2C_FIELD(__peReg, u16 *, 0xE);
    if (((M2C_UNK (*)(u16)) lbl_80350B78) != NULL) {
        OSClearContext(&sp10);
        OSSetCurrentContext(&sp10);
        /* draft: did not compile: lbl_80350B78(temp_r31); */
        OSClearContext(&sp10);
        OSSetCurrentContext(arg1);
    }
    M2C_FIELD(__peReg, u16 *, 0xA) = (u16) ((M2C_FIELD(__peReg, u16 *, 0xA) & 0xFFFFFFFB) | 4);
}

#pragma push
#pragma peephole off
s32 GXSetDrawDoneCallback(s32 arg0) {
    u8 temp_r31;

    temp_r31 = lbl_80350B7C;
    OSDisableInterrupts();
    lbl_80350B7C = arg0;
    OSRestoreInterrupts((long)(0));
    return temp_r31;
}
#pragma pop

void fn_800E1914(M2C_UNK *arg1) {
    M2C_UNK sp10;

    M2C_FIELD(__peReg, u16 *, 0xA) = (u16) ((M2C_FIELD(__peReg, u16 *, 0xA) & 0xFFFFFFF7) | 8);
    lbl_80350B80 = 1;
    if (((M2C_UNK (*)()) lbl_80350B7C) != NULL) {
        OSClearContext(&sp10);
        OSSetCurrentContext(&sp10);
        /* draft: did not compile: lbl_80350B7C(); */
        OSClearContext(&sp10);
        OSSetCurrentContext(arg1);
    }
    OSWakeupThread(&lbl_80350B84);
}

void __GXPEInit(void) {
    __OSSetInterruptHandler(0x12, (u16)fn_800E1848);
    __OSSetInterruptHandler(0x13, fn_800E1914);
    OSInitThreadQueue(&lbl_80350B84);
    __OSUnmaskInterrupts(0x2000);
    __OSUnmaskInterrupts(0x1000);
    M2C_FIELD(__peReg, u16 *, 0xA) = (u16) ((((((((M2C_FIELD(__peReg, u16 *, 0xA) & 0xFFFFFFFB) | 4) & 0xFFFFFFF7) | 8) & 0xFFFFFFFE) | 1) & 0xFFFFFFFD) | 2);
}

#pragma push
#pragma dont_inline on
void fn_800E1A18(void) {
    if (M2C_FIELD(gx, s32 *, 0x4F4) & 1) {
        __GXSetSUTexRegs();
    }
    if (M2C_FIELD(gx, s32 *, 0x4F4) & 2) {
        fn_800E42AC();
    }
    if (M2C_FIELD(gx, s32 *, 0x4F4) & 4) {
        fn_800E1DA4();
    }
    if (M2C_FIELD(gx, s32 *, 0x4F4) & 8) {
        fn_800E068C();
    }
    if (M2C_FIELD(gx, s32 *, 0x4F4) & 0x10) {
        fn_800E0F0C();
    }
    if (M2C_FIELD(gx, s32 *, 0x4F4) & 0x18) {
        __GXCalculateVLim();
    }
    M2C_FIELD(gx, s32 *, 0x4F4) = 0;
}
#pragma pop

#pragma push
#pragma dont_inline on
void GXBegin(s32 arg0, s32 arg1, s16 arg2) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(gx, u32 *, 0x4F4);
    if (temp_r0 != 0) {
        if (temp_r0 & 1) {
            __GXSetSUTexRegs();
        }
        if (M2C_FIELD(gx, u32 *, 0x4F4) & 2) {
            fn_800E42AC();
        }
        if (M2C_FIELD(gx, u32 *, 0x4F4) & 4) {
            fn_800E1DA4();
        }
        if (M2C_FIELD(gx, u32 *, 0x4F4) & 8) {
            fn_800E068C();
        }
        if (M2C_FIELD(gx, u32 *, 0x4F4) & 0x10) {
            fn_800E0F0C();
        }
        if (M2C_FIELD(gx, u32 *, 0x4F4) & 0x18) {
            __GXCalculateVLim();
        }
        M2C_FIELD(gx, u32 *, 0x4F4) = 0U;
    }
    if ((u32) M2C_FIELD(gx, u32 *, 0) == 0U) {
        __GXSendFlushPrim();
    }
    *(s8 *)0xCC008000 = arg1 | arg0;
    *(s8 *)0xCC008000 = arg2;
}
#pragma pop

void __GXSendFlushPrim(void) {
    u16 temp_r6;
    u32 temp_r0;
    u32 temp_r7;
    u32 var_ctr_2;
    u32 var_r3;
    u32 var_ctr;

    temp_r6 = M2C_FIELD(gx, u16 *, 4);
    temp_r7 = temp_r6 * M2C_FIELD(gx, u16 *, 6);
    *(s8 *)0xCC008000 = 0x98;
    *(s8 *)0xCC008000 = temp_r6;
    var_r3 = (u32) (temp_r7 + 3) >> 2U;
    if (temp_r7 > 0U) {
        temp_r0 = var_r3 >> 3U;
        var_ctr = temp_r0;
        if (temp_r0 != 0) {
            do {
                *(s8 *)0xCC008000 = 0;
                *(s8 *)0xCC008000 = 0;
                *(s8 *)0xCC008000 = 0;
                *(s8 *)0xCC008000 = 0;
                *(s8 *)0xCC008000 = 0;
                *(s8 *)0xCC008000 = 0;
                *(s8 *)0xCC008000 = 0;
                *(s8 *)0xCC008000 = 0;
                var_ctr = var_ctr - 1;
            } while (var_ctr != 0);
            var_r3 = var_r3 & 7;
            if (var_r3 != 0) {
                goto block_4;
            }
        } else {
block_4:
            var_ctr_2 = var_r3;
            do {
                *(s8 *)0xCC008000 = 0;
                var_ctr_2 = var_ctr_2 - 1;
            } while (var_ctr_2 != 0);
        }
    }
    M2C_FIELD(gx, s16 *, 2) = 1;
}

void fn_800E1C30(s32 arg0, s32 arg1) {
    M2C_FIELD(gx, s16 *, 2) = 0;
    M2C_FIELD(gx, s32 *, 0x7C) = (s32) ((arg0 & 0xFF) | (M2C_FIELD(gx, s32 *, 0x7C) & 0xFFFFFF00 & ~0xFF));
    M2C_FIELD(gx, s32 *, 0x7C) = (s32) ((M2C_FIELD(gx, s32 *, 0x7C) & 0xFFF8FFFF) | (arg1 << 0x10));
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(gx, s32 *, 0x7C);
}

void fn_800E1C78(s32 arg0, s32 arg1) {
    M2C_FIELD(gx, s16 *, 2) = 0;
    M2C_FIELD(gx, s32 *, 0x7C) = (s32) ((M2C_FIELD(gx, s32 *, 0x7C) & 0xFFFF00FF & ~0xFF00) | ((arg0 << 8) & 0xFF00));
    M2C_FIELD(gx, s32 *, 0x7C) = (s32) ((M2C_FIELD(gx, s32 *, 0x7C) & 0xFFC7FFFF) | (arg1 << 0x13));
    *(s8 *)0xCC008000 = 0x61;
    *(s8 *)0xCC008000 = (s32) M2C_FIELD(gx, s32 *, 0x7C);
}
