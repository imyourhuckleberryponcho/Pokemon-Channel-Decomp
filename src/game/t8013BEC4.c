/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK OSDisableInterrupts(u32, u32);
M2C_UNK OSRestoreInterrupts(M2C_UNK *);
s32 fn_80139DA8(void *);
extern M2C_UNK lbl_803477C0;
extern s32 lbl_80350EEC;
extern s32 lbl_80350EF0;
extern s32 lbl_80350EF4;
extern M2C_UNK lbl_803489C0;
extern s32 lbl_80350ED8;
s32 fn_800DCB7C(s32, s32, void *);
s32 CARDClose(void *);
s32 fn_800DD678(void *, s32, u32, s32);
s32 fn_80145D18(s32, s32);

s32 fn_8013BEC4(void *arg0, M2C_UNK arg_sp0);
s32 fn_8013D0F4(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0);
s32 fn_8013D328(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);

s32 fn_8013BEC4(void *arg0, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 fn_8013D0F4(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0) {
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 spC;
    s32 sp8;
    s32 temp_r27;
    s32 temp_r27_2;
    s32 temp_r28;
    s32 temp_r28_2;
    s32 temp_r31;
    s32 temp_r31_2;
    s32 var_r3;
    s32 var_r6;
    u32 temp_r0;
    u32 temp_r4;
    u32 temp_r4_2;
    u32 temp_r6;
    u32 temp_r6_2;
    u32 temp_r7;
    u32 temp_r7_2;
    u32 temp_r7_3;
    u32 temp_r7_4;
    void *temp_r3;
    void *temp_r3_2;

    sp30 = arg0;
    lbl_80350ED8 = lbl_80350EEC;
    sp2C = 0xC;
    sp34 = arg1;
    OSDisableInterrupts((unsigned long)(lbl_80350EEC), (unsigned long)(0));
    temp_r27 = lbl_80350EF0;
    temp_r31 = lbl_80350EF4;
    temp_r28 = *(&lbl_803477C0 + (lbl_80350EF0 * 0x24));
    OSRestoreInterrupts(&lbl_803477C0);
    if ((temp_r31 == 2) || ((s32) lbl_80350EEC != temp_r27) || ((temp_r31 == 0) && ((s32) lbl_80350EEC == temp_r27) && (temp_r28 == 0))) {
        temp_r7 = lbl_80350EEC + 1;
        temp_r7_2 = temp_r7 >> 0x1FU;
        temp_r6 = (temp_r7 << 0x19) - temp_r7_2;
        temp_r3 = &lbl_803477C0 + (lbl_80350EEC * 0x24);
        lbl_80350EEC = ((temp_r6 << 7) | (temp_r6 >> 0x19U)) + temp_r7_2;
        memcpy((void *)(temp_r3), (const void *)(&sp2C), (unsigned long)(0x24));
        if (temp_r31 == 2) {
            lbl_80350EF4 = 0;
        }
    }
    spC = arg0;
    sp8 = 0x11;
    OSDisableInterrupts((unsigned long)(0), (unsigned long)(0));
    temp_r28_2 = lbl_80350EF0;
    temp_r31_2 = lbl_80350EF4;
    temp_r27_2 = *(&lbl_803477C0 + (lbl_80350EF0 * 0x24));
    OSRestoreInterrupts(&lbl_803477C0);
    if ((temp_r31_2 != 2) && ((s32) lbl_80350EEC == temp_r28_2) && ((temp_r31_2 != 0) || ((s32) lbl_80350EEC != temp_r28_2) || (temp_r27_2 != 0))) {
        var_r3 = -0x109;
    } else {
        temp_r7_3 = lbl_80350EEC + 1;
        temp_r7_4 = temp_r7_3 >> 0x1FU;
        temp_r6_2 = (temp_r7_3 << 0x19) - temp_r7_4;
        temp_r3_2 = &lbl_803477C0 + (lbl_80350EEC * 0x24);
        lbl_80350EEC = ((temp_r6_2 << 7) | (temp_r6_2 >> 0x19U)) + temp_r7_4;
        memcpy((void *)(temp_r3_2), (const void *)(&sp8), (unsigned long)(0x24));
        if (temp_r31_2 == 2) {
            lbl_80350EF4 = 0;
        }
        var_r3 = 0;
    }
    if (var_r3 < 0) {
        if ((s32) lbl_80350ED8 >= 0) {
            var_r6 = lbl_80350ED8;
loop_20:
            if (var_r6 != (s32) lbl_80350EEC) {
                temp_r4 = var_r6 + 1;
                temp_r4_2 = temp_r4 >> 0x1FU;
                temp_r0 = (temp_r4 << 0x19) - temp_r4_2;
                *(&lbl_803477C0 + (var_r6 * 0x24)) = 0;
                var_r6 = ((temp_r0 << 7) | (temp_r0 >> 0x19U)) + temp_r4_2;
                goto loop_20;
            }
            lbl_80350EEC = lbl_80350ED8;
            return var_r3;
        }
        /* Duplicate return node #23. Try simplifying control flow for better match */
        return var_r3;
    }
    M2C_FIELD(&lbl_803489C0, s32 *, 0) = 5;
    var_r3 = 0;
    M2C_FIELD(&lbl_803489C0, s32 *, 4) = arg0;
    M2C_FIELD(&lbl_803489C0, s32 *, 8) = arg2;
    M2C_FIELD(&lbl_803489C0, s32 *, 0xC) = 0;
    lbl_80350ED8 = -1;
    return var_r3;
}

s32 fn_8013D328(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) { return 0; } /* draft: stub */
