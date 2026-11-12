/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 EXIDeselect(u16, s32);
s32 EXILock(u16, M2C_UNK, M2C_UNK *);
s32 EXISelect(u16, M2C_UNK, u16);
s32 EXIUnlock(u16, s32);
s32 OSGetTick();
s32 EXIImmEx();
s32 fn_800B65C8(s32, M2C_UNK);
extern M2C_UNK fn_800B2F6C;
extern M2C_UNK fn_800B2F7C;
extern M2C_UNK lbl_803507D0;
extern M2C_UNK lbl_803507E0;
extern M2C_UNK lbl_803507F4;
extern u16 lbl_803507F8;
extern M2C_UNK lbl_80350808;
extern M2C_UNK lbl_803507FC;
M2C_UNK OSSetAlarm(void *, M2C_UNK *, M2C_UNK, s32, M2C_UNK *);
u16 fn_800B643C(u8 *, u16);
M2C_UNK fn_800C87B8(void *, s32);
extern M2C_UNK fn_800B2FA0;
extern M2C_UNK lbl_802CF9F0;
extern M2C_UNK lbl_802CFA08;

u16 fn_800B33A4(void *arg0, u16 arg1);
u16 fn_800B392C(void *arg0);
u16 fn_800B400C(void);
u16 fn_800B4778(u8 *arg0, u16 arg1);

u16 fn_800B33A4(void *arg0, u16 arg1) {
    s16 spE;
    void *sp8;
    s32 temp_r28;
    s32 temp_r4;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_17;
    s32 temp_r4_18;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    u16 temp_r27;
    u16 var_r29;

    sp8 = arg0;
    temp_r27 = *(&lbl_803507F4 + (lbl_803507F8 * 2));
    *(&lbl_803507D0 + (lbl_803507F8 * 4)) = 0;
    if (EXILock(lbl_803507F8, 0, &fn_800B2F7C) == 0) {
        do {

        } while ((s32) *(&lbl_803507D0 + (lbl_803507F8 * 4)) == 0);
        if (EXILock(lbl_803507F8, 0, &fn_800B2F6C) == 0) {
            temp_r4 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4) = *(&lbl_803507E0 + temp_r4) | 0xA0;
            var_r29 = *(&lbl_803507E0 + (lbl_803507F8 * 2));
        } else {
            goto block_4;
        }
    } else {
block_4:
        if (EXISelect(lbl_803507F8, 0, temp_r27) == 0) {
            temp_r4_2 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_2) = *(&lbl_803507E0 + temp_r4_2) | 0xB0;
            if (EXIUnlock(lbl_803507F8, temp_r4_2) == 0) {
                temp_r4_3 = lbl_803507F8 * 2;
                *(&lbl_803507E0 + temp_r4_3) = *(&lbl_803507E0 + temp_r4_3) | 0xD0;
            }
            var_r29 = *(&lbl_803507E0 + (lbl_803507F8 * 2));
        } else {
            var_r29 = 0;
        }
    }
    if (var_r29 != 0) {
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    spE = 0;
    M2C_FIELD(sp8, u8 *, 0) = (u8) *(&lbl_80350808 + lbl_803507F8);
    if (EXIImmEx(lbl_803507F8, sp8, 1, 2) == 0) {
        temp_r4_4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_4) = *(&lbl_803507E0 + temp_r4_4) | 0xF0;
        if (EXIDeselect(lbl_803507F8, temp_r4_4) == 0) {
            temp_r4_5 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_5) = *(&lbl_803507E0 + temp_r4_5) | 0xE0;
        }
        if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
            temp_r4_6 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_6) = *(&lbl_803507E0 + temp_r4_6) | 0xD0;
        }
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    M2C_FIELD(sp8, u8 *, 0) = (u8) *(&lbl_80350808 + lbl_803507F8);
    if (EXIImmEx(lbl_803507F8, sp8, 1, 2) == 0) {
        temp_r4_7 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_7) = *(&lbl_803507E0 + temp_r4_7) | 0xF0;
        if (EXIDeselect(lbl_803507F8, temp_r4_7) == 0) {
            temp_r4_8 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_8) = *(&lbl_803507E0 + temp_r4_8) | 0xE0;
        }
        if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
            temp_r4_9 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_9) = *(&lbl_803507E0 + temp_r4_9) | 0xD0;
        }
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    temp_r28 = OSGetTick();
loop_32:
    if (!(M2C_FIELD(sp8, u8 *, 0) & 0x80)) {

    } else {
        M2C_FIELD(sp8, u8 *, 0) = (u8) *(&lbl_80350808 + lbl_803507F8);
        if (EXIImmEx(lbl_803507F8, sp8, 1, 2) == 0) {
            temp_r4_10 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_10) = *(&lbl_803507E0 + temp_r4_10) | 0xF0;
        } else if (M2C_FIELD(sp8, u8 *, 0) & 0x80) {
            if (fn_800B65C8(temp_r28, 0x5DC) != 0) {
                M2C_FIELD(sp8, u8 *, 0) = (u8) *(&lbl_80350808 + lbl_803507F8);
                if (EXIImmEx(lbl_803507F8, sp8, 1, 2) == 0) {
                    temp_r4_11 = lbl_803507F8 * 2;
                    *(&lbl_803507E0 + temp_r4_11) = *(&lbl_803507E0 + temp_r4_11) | 0xF0;
                } else if (M2C_FIELD(sp8, u8 *, 0) & 0x80) {
                    temp_r4_12 = lbl_803507F8 * 2;
                    *(&lbl_803507E0 + temp_r4_12) = *(&lbl_803507E0 + temp_r4_12) | 0x4000;
                }
            } else {
                goto loop_32;
            }
        }
    }
loop_42:
    if ((u8) M2C_FIELD(sp8, u8 *, 0) != 0xFF) {
        M2C_FIELD(sp8, u8 *, 1) = (u8) M2C_FIELD(sp8, u8 *, 0);
        M2C_FIELD(sp8, u8 *, 0) = (u8) *(&lbl_80350808 + lbl_803507F8);
        if (EXIImmEx((u16)lbl_803507F8, sp8, 1, 2) == 0) {
            temp_r4_13 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_13) = *(&lbl_803507E0 + temp_r4_13) | 0xF0;
        } else if ((u8) M2C_FIELD(sp8, u8 *, 0) != 0xFF) {
            if (fn_800B65C8(temp_r28, 0x5DC) != 0) {
                M2C_FIELD(sp8, u8 *, 1) = (u8) M2C_FIELD(sp8, u8 *, 0);
                M2C_FIELD(sp8, u8 *, 0) = (u8) *(&lbl_80350808 + lbl_803507F8);
                if (EXIImmEx(lbl_803507F8, sp8, 1, 2) == 0) {
                    temp_r4_14 = lbl_803507F8 * 2;
                    *(&lbl_803507E0 + temp_r4_14) = *(&lbl_803507E0 + temp_r4_14) | 0xF0;
                } else if ((u8) M2C_FIELD(sp8, u8 *, 0) != 0xFF) {
                    temp_r4_15 = lbl_803507F8 * 2;
                    *(&lbl_803507E0 + temp_r4_15) = *(&lbl_803507E0 + temp_r4_15) | 0x4000;
                }
            } else {
                goto loop_42;
            }
        }
    }
    M2C_FIELD(sp8, u8 *, 0) = (u8) M2C_FIELD(sp8, u8 *, 1);
    if (arg1 > 1U) {
        M2C_FIELD(sp8, u8 *, 1) = (u8) *(&lbl_80350808 + lbl_803507F8);
        if (0 /* draft: did not compile */) {
            temp_r4_16 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_16) = *(&lbl_803507E0 + temp_r4_16) | 0xF0;
        }
    }
    if (EXIDeselect((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
        temp_r4_17 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_17) = *(&lbl_803507E0 + temp_r4_17) | 0xE0;
    }
    if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
        temp_r4_18 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_18) = *(&lbl_803507E0 + temp_r4_18) | 0xD0;
    }
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}

#pragma push
#pragma optimize_for_size on
u16 fn_800B392C(void *arg0) {
    s16 spC;
    void *sp8;
    s32 temp_r0;
    s32 temp_r29;
    s32 temp_r29_2;
    s32 temp_r4;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_17;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_20;
    s32 temp_r4_21;
    s32 temp_r4_22;
    s32 temp_r4_23;
    s32 temp_r4_24;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    u16 temp_r27;
    u16 var_r28;
    void *temp_r31;

    sp8 = arg0;
    temp_r27 = *(&lbl_803507F4 + (lbl_803507F8 * 2));
    *(&lbl_803507D0 + (lbl_803507F8 * 4)) = 0;
    if (EXILock(lbl_803507F8, 0, &fn_800B2F7C) == 0) {
        do {

        } while ((s32) *(&lbl_803507D0 + (lbl_803507F8 * 4)) == 0);
        if (EXILock(lbl_803507F8, 0, &fn_800B2F6C) == 0) {
            temp_r4 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4) = *(&lbl_803507E0 + temp_r4) | 0xA0;
            var_r28 = *(&lbl_803507E0 + (lbl_803507F8 * 2));
        } else {
            goto block_4;
        }
    } else {
block_4:
        if (EXISelect(lbl_803507F8, 0, temp_r27) == 0) {
            temp_r4_2 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_2) = *(&lbl_803507E0 + temp_r4_2) | 0xB0;
            if (EXIUnlock(lbl_803507F8, temp_r4_2) == 0) {
                temp_r4_3 = lbl_803507F8 * 2;
                *(&lbl_803507E0 + temp_r4_3) = *(&lbl_803507E0 + temp_r4_3) | 0xD0;
            }
            var_r28 = *(&lbl_803507E0 + (lbl_803507F8 * 2));
        } else {
            var_r28 = 0;
        }
    }
    if (var_r28 != 0) {
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    spC = 0;
    M2C_FIELD(sp8, u8 *, 0) = (u8) *(&lbl_80350808 + lbl_803507F8);
    if (EXIImmEx(lbl_803507F8, sp8, 1, 2) == 0) {
        temp_r4_4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_4) = *(&lbl_803507E0 + temp_r4_4) | 0xF0;
        if (EXIDeselect(lbl_803507F8, temp_r4_4) == 0) {
            temp_r4_5 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_5) = *(&lbl_803507E0 + temp_r4_5) | 0xE0;
        }
        if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
            temp_r4_6 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_6) = *(&lbl_803507E0 + temp_r4_6) | 0xD0;
        }
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    temp_r29 = OSGetTick();
loop_34:
    if (!(M2C_FIELD(sp8, u8 *, 0) & 0x10)) {
        goto block_35;
    }
    M2C_FIELD(sp8, u8 *, 0) = (u8) *(&lbl_80350808 + lbl_803507F8);
    if (EXIImmEx(lbl_803507F8, sp8, 1, 2) == 0) {
        temp_r4_7 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_7) = *(&lbl_803507E0 + temp_r4_7) | 0xF0;
        if (EXIDeselect(lbl_803507F8, temp_r4_7) == 0) {
            temp_r4_8 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_8) = *(&lbl_803507E0 + temp_r4_8) | 0xE0;
        }
        if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
            temp_r4_9 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_9) = *(&lbl_803507E0 + temp_r4_9) | 0xD0;
        }
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    if (M2C_FIELD(sp8, u8 *, 0) & 0x10) {
        if (fn_800B65C8(temp_r29, 0x5DC) != 0) {
            M2C_FIELD(sp8, u8 *, 0) = (u8) *(&lbl_80350808 + lbl_803507F8);
            if (EXIImmEx(lbl_803507F8, sp8, 1, 2) == 0) {
                temp_r4_10 = lbl_803507F8 * 2;
                *(&lbl_803507E0 + temp_r4_10) = *(&lbl_803507E0 + temp_r4_10) | 0xF0;
                if (EXIDeselect(lbl_803507F8, temp_r4_10) == 0) {
                    temp_r4_11 = lbl_803507F8 * 2;
                    *(&lbl_803507E0 + temp_r4_11) = *(&lbl_803507E0 + temp_r4_11) | 0xE0;
                }
                if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
                    temp_r4_12 = lbl_803507F8 * 2;
                    *(&lbl_803507E0 + temp_r4_12) = *(&lbl_803507E0 + temp_r4_12) | 0xD0;
                }
                return *(&lbl_803507E0 + (lbl_803507F8 * 2));
            }
            if (M2C_FIELD(sp8, u8 *, 0) & 0x10) {
                temp_r4_13 = lbl_803507F8 * 2;
                *(&lbl_803507E0 + temp_r4_13) = *(&lbl_803507E0 + temp_r4_13) | 0x4000;
            }
            goto block_35;
        }
        goto loop_34;
    }
block_35:
    /* draft: did not compile: temp_r31 = sp8 + 1; */
    M2C_FIELD(sp8, u8 *, 1) = (u8) *(&lbl_80350808 + lbl_803507F8);
    if (EXIImmEx(lbl_803507F8, temp_r31, 1, 2) == 0) {
        temp_r4_14 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_14) = *(&lbl_803507E0 + temp_r4_14) | 0xF0;
        if (EXIDeselect(lbl_803507F8, temp_r4_14) == 0) {
            temp_r4_15 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_15) = *(&lbl_803507E0 + temp_r4_15) | 0xE0;
        }
        if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
            temp_r4_16 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_16) = *(&lbl_803507E0 + temp_r4_16) | 0xD0;
        }
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    temp_r29_2 = OSGetTick();
loop_58:
    if ((u8) M2C_FIELD(sp8, u8 *, 1) != 0) {
        goto block_59;
    }
    M2C_FIELD(sp8, u8 *, 1) = (u8) *(&lbl_80350808 + lbl_803507F8);
    if (EXIImmEx(lbl_803507F8, temp_r31, 1, 2) == 0) {
        temp_r4_17 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_17) = *(&lbl_803507E0 + temp_r4_17) | 0xF0;
        if (EXIDeselect(lbl_803507F8, temp_r4_17) == 0) {
            temp_r4_18 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_18) = *(&lbl_803507E0 + temp_r4_18) | 0xE0;
        }
        if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
            temp_r4_19 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_19) = *(&lbl_803507E0 + temp_r4_19) | 0xD0;
        }
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    if ((u8) M2C_FIELD(sp8, u8 *, 1) == 0) {
        if (fn_800B65C8(temp_r29_2, 0x5DC) != 0) {
            M2C_FIELD(sp8, u8 *, 1) = (u8) *(&lbl_80350808 + lbl_803507F8);
            if (EXIImmEx(lbl_803507F8, temp_r31, 1, 2) == 0) {
                temp_r4_20 = lbl_803507F8 * 2;
                *(&lbl_803507E0 + temp_r4_20) = *(&lbl_803507E0 + temp_r4_20) | 0xF0;
                if (EXIDeselect(lbl_803507F8, temp_r4_20) == 0) {
                    temp_r4_21 = lbl_803507F8 * 2;
                    *(&lbl_803507E0 + temp_r4_21) = *(&lbl_803507E0 + temp_r4_21) | 0xE0;
                }
                if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
                    temp_r4_22 = lbl_803507F8 * 2;
                    *(&lbl_803507E0 + temp_r4_22) = *(&lbl_803507E0 + temp_r4_22) | 0xD0;
                }
                return *(&lbl_803507E0 + (lbl_803507F8 * 2));
            }
            if ((u8) M2C_FIELD(sp8, u8 *, 1) == 0) {
                temp_r0 = lbl_803507F8 * 2;
                *(&lbl_803507E0 + temp_r0) = *(&lbl_803507E0 + temp_r0) | 0x4000;
            }
            goto block_59;
        }
        goto loop_58;
    }
block_59:
    if (EXIDeselect((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
        temp_r4_23 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_23) = *(&lbl_803507E0 + temp_r4_23) | 0xE0;
    }
    if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
        temp_r4_24 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_24) = *(&lbl_803507E0 + temp_r4_24) | 0xD0;
    }
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}
#pragma pop

#pragma push
#pragma optimize_for_size on
u16 fn_800B400C(void) {
    u8 sp8;
    s32 temp_r0;
    s32 temp_r28;
    s32 temp_r4;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_17;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_20;
    s32 temp_r4_21;
    s32 temp_r4_22;
    s32 temp_r4_23;
    s32 temp_r4_24;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 var_r30;
    u16 temp_r27;
    u16 temp_r5;
    u16 var_r29;

    var_r30 = 0;
loop_2:
    if (var_r30 < 0x20) {
        (&sp8)[var_r30] = *(&lbl_80350808 + lbl_803507F8);
        var_r30 += 1;
        goto loop_2;
    }
    temp_r27 = *(&lbl_803507F4 + (lbl_803507F8 * 2));
    *(&lbl_803507D0 + (lbl_803507F8 * 4)) = 0;
    if (EXILock((unsigned short)(lbl_803507F8), (long)(0), (long *)(&fn_800B2F7C)) == 0) {
        do {

        } while ((s32) *(&lbl_803507D0 + (lbl_803507F8 * 4)) == 0);
        if (EXILock((unsigned short)(lbl_803507F8), (long)(0), (long *)(&fn_800B2F6C)) == 0) {
            temp_r4 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4) = *(&lbl_803507E0 + temp_r4) | 0xA0;
            var_r29 = *(&lbl_803507E0 + (lbl_803507F8 * 2));
        } else {
            goto block_7;
        }
    } else {
block_7:
        if (EXISelect(lbl_803507F8, 0, temp_r27) == 0) {
            temp_r4_2 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_2) = *(&lbl_803507E0 + temp_r4_2) | 0xB0;
            if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(temp_r4_2)) == 0) {
                temp_r4_3 = lbl_803507F8 * 2;
                *(&lbl_803507E0 + temp_r4_3) = *(&lbl_803507E0 + temp_r4_3) | 0xD0;
            }
            var_r29 = *(&lbl_803507E0 + (lbl_803507F8 * 2));
        } else {
            var_r29 = 0;
        }
    }
    if (var_r29 != 0) {
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    sp8 = 0xFD;
    if ((s32) *(&lbl_803507FC + (lbl_803507F8 * 4)) != 0) {
        sp8 = 2;
    }
    if (EXIImmEx(lbl_803507F8, &sp8, 1, 1) == 0) {
        temp_r4_4 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_4) = *(&lbl_803507E0 + temp_r4_4) | 0xF0;
        if (EXIDeselect(lbl_803507F8, temp_r4_4) == 0) {
            temp_r4_5 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_5) = *(&lbl_803507E0 + temp_r4_5) | 0xE0;
        }
        if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
            temp_r4_6 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_6) = *(&lbl_803507E0 + temp_r4_6) | 0xD0;
        }
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    sp8 = *(&lbl_80350808 + lbl_803507F8);
    if (EXIImmEx(lbl_803507F8, &sp8, 1, 2) == 0) {
        temp_r4_7 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_7) = *(&lbl_803507E0 + temp_r4_7) | 0xF0;
        if (EXIDeselect(lbl_803507F8, temp_r4_7) == 0) {
            temp_r4_8 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_8) = *(&lbl_803507E0 + temp_r4_8) | 0xE0;
        }
        if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
            temp_r4_9 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_9) = *(&lbl_803507E0 + temp_r4_9) | 0xD0;
        }
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    sp8 = *(&lbl_80350808 + lbl_803507F8);
    if (EXIImmEx(lbl_803507F8, &sp8, 1, 2) == 0) {
        temp_r4_10 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_10) = *(&lbl_803507E0 + temp_r4_10) | 0xF0;
        if ((u16)EXIDeselect(lbl_803507F8, temp_r4_10) == 0) {
            temp_r4_11 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_11) = *(&lbl_803507E0 + temp_r4_11) | 0xE0;
        }
        if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
            temp_r4_12 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_12) = *(&lbl_803507E0 + temp_r4_12) | 0xD0;
        }
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    sp8 = *(&lbl_80350808 + lbl_803507F8);
    if (EXIImmEx(lbl_803507F8, &sp8, 1, 2) == 0) {
        temp_r4_13 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_13) = *(&lbl_803507E0 + temp_r4_13) | 0xF0;
        if (EXIDeselect(lbl_803507F8, temp_r4_13) == 0) {
            temp_r4_14 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_14) = *(&lbl_803507E0 + temp_r4_14) | 0xE0;
        }
        if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
            temp_r4_15 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_15) = *(&lbl_803507E0 + temp_r4_15) | 0xD0;
        }
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    sp8 = *(&lbl_80350808 + lbl_803507F8);
    if (EXIImmEx(lbl_803507F8, &sp8, 1, 2) == 0) {
        temp_r4_16 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_16) = *(&lbl_803507E0 + temp_r4_16) | 0xF0;
        if (EXIDeselect(lbl_803507F8, temp_r4_16) == 0) {
            temp_r4_17 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_17) = *(&lbl_803507E0 + temp_r4_17) | 0xE0;
        }
        if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
            temp_r4_18 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_18) = *(&lbl_803507E0 + temp_r4_18) | 0xD0;
        }
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    OSGetTick();
    temp_r28 = OSGetTick();
loop_63:
    if (sp8 != 0) {
        goto block_64;
    }
    sp8 = *(&lbl_80350808 + lbl_803507F8);
    if (EXIImmEx(lbl_803507F8, &sp8, 1, 2) == 0) {
        temp_r4_19 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_19) = *(&lbl_803507E0 + temp_r4_19) | 0xF0;
        if (EXIDeselect(lbl_803507F8, temp_r4_19) == 0) {
            temp_r4_20 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_20) = *(&lbl_803507E0 + temp_r4_20) | 0xE0;
        }
        if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
            temp_r4_21 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_21) = *(&lbl_803507E0 + temp_r4_21) | 0xD0;
        }
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    if (sp8 == 0) {
        if (fn_800B65C8(temp_r28, 0x5DC) != 0) {
            sp8 = *(&lbl_80350808 + lbl_803507F8);
            if (EXIImmEx(lbl_803507F8, &sp8, 1, 2) == 0) {
                temp_r4_22 = lbl_803507F8 * 2;
                temp_r5 = *(&lbl_803507E0 + temp_r4_22);
                *(&lbl_803507E0 + temp_r4_22) = temp_r5 | 0xF0;
                if (EXIDeselect((unsigned short)(lbl_803507F8), (long)(temp_r4_22)) == 0) {
                    temp_r6 = lbl_803507F8 * 2;
                    *(&lbl_803507E0 + temp_r6) = *(&lbl_803507E0 + temp_r6) | 0xE0;
                }
                if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
                    temp_r0 = lbl_803507F8 * 2;
                    *(&lbl_803507E0 + temp_r0) = *(&lbl_803507E0 + temp_r0) | 0xD0;
                }
                return *(&lbl_803507E0 + (lbl_803507F8 * 2));
            }
            if (sp8 == 0) {
                temp_r5_2 = lbl_803507F8 * 2;
                *(&lbl_803507E0 + temp_r5_2) = *(&lbl_803507E0 + temp_r5_2) | 0x4000;
            }
            goto block_64;
        }
        goto loop_63;
    }
block_64:
    if (EXIDeselect((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
        temp_r4_23 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_23) = *(&lbl_803507E0 + temp_r4_23) | 0xE0;
    }
    if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
        temp_r4_24 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_24) = *(&lbl_803507E0 + temp_r4_24) | 0xD0;
    }
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}
#pragma pop

u16 fn_800B4778(u8 *arg0, u16 arg1) {
    s16 sp14;
    s32 sp12;
    u8 sp11;
    u8 sp10;
    s32 temp_r0;
    s32 temp_r25;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_17;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_20;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5;
    s32 var_r28;
    u16 temp_r24;
    u16 var_r29;
    u8 *var_r31;

    temp_r24 = *(&lbl_803507F4 + (lbl_803507F8 * 2));
    *(&lbl_803507D0 + (lbl_803507F8 * 4)) = 0;
    if (EXILock(lbl_803507F8, 0, &fn_800B2F7C) == 0) {
        do {

        } while ((s32) *(&lbl_803507D0 + (lbl_803507F8 * 4)) == 0);
        if (EXILock(lbl_803507F8, 0, &fn_800B2F6C) == 0) {
            temp_r0 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r0) = *(&lbl_803507E0 + temp_r0) | 0xA0;
            var_r29 = *(&lbl_803507E0 + (lbl_803507F8 * 2));
        } else {
            goto block_4;
        }
    } else {
block_4:
        if (EXISelect(lbl_803507F8, 0, temp_r24) == 0) {
            temp_r4 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4) = *(&lbl_803507E0 + temp_r4) | 0xB0;
            if (EXIUnlock(lbl_803507F8, temp_r4) == 0) {
                temp_r4_2 = lbl_803507F8 * 2;
                *(&lbl_803507E0 + temp_r4_2) = *(&lbl_803507E0 + temp_r4_2) | 0xD0;
            }
            var_r29 = *(&lbl_803507E0 + (lbl_803507F8 * 2));
        } else {
            var_r29 = 0;
        }
    }
    if (var_r29 != 0) {
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    var_r31 = arg0;
    var_r28 = 0;
loop_13:
    if (var_r28 < (s32) arg1) {
        *var_r31 = *(&lbl_80350808 + lbl_803507F8);
        var_r31 += 1;
        var_r28 += 1;
        goto loop_13;
    }
    sp12 = 0;
    sp14 = 0;
    if (EXIImmEx(lbl_803507F8, arg0, 1U, 2) == 0) {
        temp_r4_3 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_3) = *(&lbl_803507E0 + temp_r4_3) | 0xF0;
        if (EXIDeselect(lbl_803507F8, temp_r4_3) == 0) {
            temp_r4_4 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_4) = *(&lbl_803507E0 + temp_r4_4) | 0xE0;
        }
        if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
            temp_r4_5 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_5) = *(&lbl_803507E0 + temp_r4_5) | 0xD0;
        }
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    temp_r25 = OSGetTick();
loop_37:
    if ((u8) *arg0 == 0xFE) {
        goto block_38;
    }
    *arg0 = *(&lbl_80350808 + lbl_803507F8);
    if (EXIImmEx(lbl_803507F8, arg0, 1U, 2) == 0) {
        temp_r4_6 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_6) = *(&lbl_803507E0 + temp_r4_6) | 0xF0;
        if (EXIDeselect(lbl_803507F8, temp_r4_6) == 0) {
            temp_r4_7 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_7) = *(&lbl_803507E0 + temp_r4_7) | 0xE0;
        }
        if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
            temp_r4_8 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_8) = *(&lbl_803507E0 + temp_r4_8) | 0xD0;
        }
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    if ((u8) *arg0 != 0xFE) {
        if (fn_800B65C8(temp_r25, 0x5DC) != 0) {
            *arg0 = *(&lbl_80350808 + lbl_803507F8);
            if (EXIImmEx(lbl_803507F8, arg0, 1U, 2) == 0) {
                temp_r4_9 = lbl_803507F8 * 2;
                *(&lbl_803507E0 + temp_r4_9) = *(&lbl_803507E0 + temp_r4_9) | 0xF0;
                if (EXIDeselect(lbl_803507F8, temp_r4_9) == 0) {
                    temp_r4_10 = lbl_803507F8 * 2;
                    *(&lbl_803507E0 + temp_r4_10) = *(&lbl_803507E0 + temp_r4_10) | 0xE0;
                }
                if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
                    temp_r4_11 = lbl_803507F8 * 2;
                    *(&lbl_803507E0 + temp_r4_11) = *(&lbl_803507E0 + temp_r4_11) | 0xD0;
                }
                return *(&lbl_803507E0 + (lbl_803507F8 * 2));
            }
            if ((u8) *arg0 != 0xFE) {
                temp_r4_12 = lbl_803507F8 * 2;
                *(&lbl_803507E0 + temp_r4_12) = *(&lbl_803507E0 + temp_r4_12) | 0x4000;
            }
            goto block_38;
        }
        goto loop_37;
    }
block_38:
    *arg0 = *(&lbl_80350808 + lbl_803507F8);
    if (EXIImmEx(lbl_803507F8, arg0, arg1, 2) == 0) {
        temp_r4_13 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_13) = *(&lbl_803507E0 + temp_r4_13) | 0xF0;
        if (EXIDeselect(lbl_803507F8, temp_r4_13) == 0) {
            temp_r4_14 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_14) = *(&lbl_803507E0 + temp_r4_14) | 0xE0;
        }
        if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
            temp_r4_15 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_15) = *(&lbl_803507E0 + temp_r4_15) | 0xD0;
        }
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    OSSetAlarm(&lbl_802CFA08 + (lbl_803507F8 * 0x28), &fn_800B2FA0, 0, (u32) ((u32) *(u32 *)0x800000F8 >> 2U) / 1000000, &fn_800B2FA0);
    temp_r4_16 = lbl_803507F8 * 0xC;
    fn_800C87B8(&lbl_802CF9F0 + temp_r4_16, temp_r4_16);
    sp10 = *(&lbl_80350808 + lbl_803507F8);
    sp11 = *(&lbl_80350808 + lbl_803507F8);
    if (EXIImmEx(lbl_803507F8, &sp10, 2U, 2) == 0) {
        temp_r4_17 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_17) = *(&lbl_803507E0 + temp_r4_17) | 0xF0;
        if (EXIDeselect(lbl_803507F8, temp_r4_17) == 0) {
            temp_r4_18 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_18) = *(&lbl_803507E0 + temp_r4_18) | 0xE0;
        }
        if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
            temp_r4_19 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_19) = *(&lbl_803507E0 + temp_r4_19) | 0xD0;
        }
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    sp12 = (sp10 << 8) & 0xFF00;
    sp12 += sp11;
    if (EXIDeselect((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
        temp_r3 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r3) = *(&lbl_803507E0 + temp_r3) | 0xE0;
    }
    if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
        temp_r5 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r5) = *(&lbl_803507E0 + temp_r5) | 0xD0;
    }
    if (sp12 != fn_800B643C(arg0, arg1)) {
        temp_r4_20 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_20) = *(&lbl_803507E0 + temp_r4_20) | 2;
    }
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}
