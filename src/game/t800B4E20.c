/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 EXIDeselect(u16, u8);
s32 EXILock(u16, M2C_UNK, M2C_UNK *, M2C_UNK *);
s32 EXISelect(u16, M2C_UNK, u16);
s32 EXIUnlock(u16, s32);
s32 OSGetTick();
M2C_UNK OSSetAlarm(void *, M2C_UNK *, M2C_UNK, s32, M2C_UNK *);
s32 EXIImmEx(u16, u8 *, s32, M2C_UNK);
M2C_UNK fn_800C87B8();
extern M2C_UNK fn_800B2F6C;
extern M2C_UNK fn_800B2F7C;
extern M2C_UNK fn_800B2FA0;
extern M2C_UNK lbl_802CF9F0;
extern M2C_UNK lbl_802CFA08;
extern M2C_UNK lbl_803507D0;
extern M2C_UNK lbl_803507E0;
extern M2C_UNK lbl_803507F4;
extern u16 lbl_803507F8;
extern M2C_UNK lbl_803507FC;
extern M2C_UNK lbl_80350808;
s32 fn_800AFB80(u16, M2C_UNK, u16);
extern u8 lbl_802CFC28;
M2C_UNK fn_800B6EB0();
extern M2C_UNK lbl_802CFCA8;
M2C_UNK fn_800C1C84();
M2C_UNK fn_800BC658(void *);
M2C_UNK fn_800BEDE4(u16, void *);
u16 fn_800BF4B4(void *);
M2C_UNK fn_800C05CC();
u16 fn_800C10A0(M2C_UNK, M2C_UNK, s32, M2C_UNK, u16, u16);
u16 fn_800C11F4(M2C_UNK, M2C_UNK, s32, M2C_UNK, u16, M2C_UNK, u16);
M2C_UNK fn_800C1D74();
u16 fn_800BC960(u16 *, s32, M2C_UNK *, M2C_UNK *, s16 *, M2C_UNK *, s32 *, u16 *);
u16 fn_800C0354(void *, u16, s32, u16);
s32 fn_800B12C8(s32, s32, s32, M2C_UNK, s32);

u16 fn_800B4E20(u8 *arg0, u16 arg1);
u16 fn_800B5588(u8 *arg0, u16 arg1);
u16 fn_800B5A64(u8 *arg0, u16 arg1);
u16 fn_800B5E8C(u8 *arg0, u16 arg1);
u8 fn_800B6350(u8 *arg0, u16 arg1);
u16 fn_800B643C(u8 *arg0, u16 arg1);
s32 fn_800B65C8(u32 arg0, u32 arg1);
void fn_800B6648(void);
u16 fn_800B6670(void **arg0);
s32 fn_800B674C(void *arg0);
s32 SD_Close(void *arg0);
u16 fn_800B6868(void *arg0);
s32 fn_800B6A7C(void *arg0, u32 arg1);
u16 fn_800B6B24(u16 *arg0, s32 arg1);
u16 fn_800B6C14(void *arg0, s32 arg1, u16 arg2, u16 arg3);
s32 fn_800B6D20(s32 arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4);

u16 fn_800B4E20(u8 *arg0, u16 arg1) {
    s16 sp24;
    u16 sp22;
    u8 sp21;
    u8 sp20;
    u8 sp15;
    u8 sp14;
    u8 sp13;
    u8 sp12;
    u8 sp11;
    u8 sp10;
    s32 temp_r24;
    s32 temp_r4;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_20;
    s32 temp_r4_21;
    s32 temp_r4_22;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r6;
    s32 var_r29;
    s32 var_r29_2;
    u16 temp_r23;
    u16 var_r27;
    u8 *var_r31;
    u8 temp_r0;
    u8 temp_r4_10;
    u8 temp_r4_14;
    u8 temp_r4_17;
    u8 temp_r4_4;
    u8 temp_r4_7;

    *(&lbl_803507D0 + (lbl_803507F8 * 4)) = 0;
    temp_r23 = *(&lbl_803507F4 + (lbl_803507F8 * 2));
    if (EXILock(lbl_803507F8, 0, &fn_800B2F7C, &fn_800B2F7C) == 0) {
        do {

        } while ((s32) *(&lbl_803507D0 + (lbl_803507F8 * 4)) == 0);
        if (EXILock(lbl_803507F8, 0, &fn_800B2F6C, &fn_800B2F6C) == 0) {
            temp_r4 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4) = *(&lbl_803507E0 + temp_r4) | 0xA0;
            var_r27 = *(&lbl_803507E0 + (lbl_803507F8 * 2));
        } else {
            goto block_4;
        }
    } else {
block_4:
        if (EXISelect(lbl_803507F8, 0, temp_r23) == 0) {
            temp_r4_2 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_2) = *(&lbl_803507E0 + temp_r4_2) | 0xB0;
            if (EXIUnlock(lbl_803507F8, temp_r4_2) == 0) {
                temp_r4_3 = lbl_803507F8 * 2;
                *(&lbl_803507E0 + temp_r4_3) = *(&lbl_803507E0 + temp_r4_3) | 0xD0;
            }
            var_r27 = *(&lbl_803507E0 + (lbl_803507F8 * 2));
        } else {
            var_r27 = 0;
        }
    }
    if (var_r27 != 0) {
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    var_r31 = arg0;
    var_r29 = 0;
loop_13:
    if (var_r29 < arg1) {
        *var_r31 = *(&lbl_80350808 + lbl_803507F8);
        var_r31 += 1;
        var_r29 += 1;
        goto loop_13;
    }
    sp22 = 0;
    sp24 = 0;
    if (EXIImmEx(lbl_803507F8, arg0, 1, 2) == 0) {
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
    temp_r24 = OSGetTick();
loop_37:
    if ((u8) *arg0 == 0xFE) {
        goto block_38;
    }
    *arg0 = *(&lbl_80350808 + lbl_803507F8);
    if (EXIImmEx(lbl_803507F8, arg0, 1, 2) == 0) {
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
    if ((u8) *arg0 != 0xFE) {
        if (fn_800B65C8(temp_r24, 0x5DC) != 0) {
            *arg0 = *(&lbl_80350808 + lbl_803507F8);
            if (EXIImmEx(lbl_803507F8, arg0, 1, 2) == 0) {
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
            if ((u8) *arg0 != 0xFE) {
                temp_r4_13 = lbl_803507F8 * 2;
                *(&lbl_803507E0 + temp_r4_13) = *(&lbl_803507E0 + temp_r4_13) | 0x4000;
            }
            goto block_38;
        }
        goto loop_37;
    }
block_38:
    *arg0 = *(&lbl_80350808 + lbl_803507F8);
    if (EXIImmEx(lbl_803507F8, arg0, arg1 - 4, 2) == 0) {
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
    sp10 = 0xC;
    sp11 = 0;
    sp12 = 0;
    sp13 = 0;
    sp14 = 0;
    sp10 = 0xC | 0x40;
    sp15 = fn_800B6350(&sp10, 5) | 1;
    if ((s32) *(&lbl_803507FC + (lbl_803507F8 * 4)) != 0) {
        var_r29_2 = 0;
loop_47:
        if (var_r29_2 < 6) {
            temp_r0 = (&sp10)[var_r29_2];
            (&sp10)[var_r29_2] = ~(temp_r0 | temp_r0);
            var_r29_2 += 1;
            goto loop_47;
        }
    }
    if (EXIImmEx(lbl_803507F8, &sp10, 6, 2) == 0) {
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
    M2C_FIELD(&arg0[arg1], u8 *, -4) = sp10;
    M2C_FIELD(&arg0[arg1], u8 *, -3) = sp11;
    M2C_FIELD(&arg0[arg1], u8 *, -2) = sp12;
    temp_r6 = lbl_803507F8 * 0xC;
    M2C_FIELD(&arg0[arg1], u8 *, -1) = sp13;
    sp20 = sp14;
    sp21 = sp15;
    OSSetAlarm(&lbl_802CFA08 + (lbl_803507F8 * 0x28), &fn_800B2FA0, 0, (u32) ((u32) *(u32 *)0x800000F8 >> 2U) / 1000000, &fn_800B2FA0);
    fn_800C87B8(&lbl_802CF9F0 + temp_r6, &lbl_802CF9F0, temp_r6);
    sp22 = (sp20 << 8) & 0xFF00;
    sp22 += sp15;
    if (EXIDeselect(lbl_803507F8, sp20) == 0) {
        temp_r4_20 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_20) = *(&lbl_803507E0 + temp_r4_20) | 0xE0;
    }
    if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
        temp_r4_21 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_21) = *(&lbl_803507E0 + temp_r4_21) | 0xD0;
    }
    if (sp22 != fn_800B643C(arg0, arg1)) {
        temp_r4_22 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_22) = *(&lbl_803507E0 + temp_r4_22) | 2;
    }
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}

#pragma push
#pragma optimize_for_size on
u16 fn_800B5588(u8 *arg0, u16 arg1) {
    u8 sp18;
    s32 temp_r4;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_14;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    u32 var_r30;
    s32 var_r30_2;
    s32 var_r30_3;
    u16 var_r26;
    u8 *var_r29;
    u8 temp_r0;

    *(&lbl_80350808 + lbl_803507F8) = 0xFF;
    var_r29 = arg0;
    *arg0 |= 0x40;
    sp18 = fn_800B6350(arg0, arg1);
    if ((s32) *(&lbl_803507FC + (lbl_803507F8 * 4)) != 0) {
        *(&lbl_80350808 + lbl_803507F8) = 0;
        var_r30 = 0;
loop_3:
        if (var_r30 < (s32) arg1) {
            temp_r0 = *var_r29;
            *var_r29 = ~(temp_r0 | temp_r0);
            var_r29 += 1;
            var_r30 += 1;
            goto loop_3;
        }
    }
    var_r26 = 0;
loop_7:
    if (var_r26 < arg1) {
        var_r26 += 1;
        goto loop_7;
    }
    var_r30_2 = 0;
loop_10:
    if (var_r30_2 < 0x80) {
        (&lbl_802CFC28)[var_r30_2] = *(&lbl_80350808 + lbl_803507F8);
        var_r30_2 += 1;
        goto loop_10;
    }
    *(&lbl_803507D0 + (lbl_803507F8 * 4)) = 0;
    if (EXILock((unsigned short)(lbl_803507F8), (long)(0), (long *)(&fn_800B2F7C), (long *)(0)) == 0) {
        do {

        } while ((s32) *(&lbl_803507D0 + (lbl_803507F8 * 4)) == 0);
        if (EXILock((unsigned short)(lbl_803507F8), (long)(0), (long *)(&fn_800B2F6C), (long *)(0)) == 0) {
            temp_r4 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4) = *(&lbl_803507E0 + temp_r4) | 0xA0;
            return *(&lbl_803507E0 + (lbl_803507F8 * 2));
        }
        goto block_15;
    }
block_15:
    if (fn_800AFB80(lbl_803507F8, 0, *(&lbl_803507F4 + (lbl_803507F8 * 2))) == 0) {
        temp_r4_2 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_2) = *(&lbl_803507E0 + temp_r4_2) | 0xB0;
        if (EXIUnlock(lbl_803507F8, temp_r4_2) == 0) {
            temp_r4_3 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_3) = *(&lbl_803507E0 + temp_r4_3) | 0xD0;
        }
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    var_r30_3 = 0;
loop_27:
    if (var_r30_3 >= 0x14) {
        *(&lbl_803507E0 + (lbl_803507F8 * 2)) = 0;
        EXIDeselect((unsigned short)(lbl_803507F8), (unsigned char)(0));
        if (EXISelect(lbl_803507F8, 0, *(&lbl_803507F4 + (lbl_803507F8 * 2))) == 0) {
            temp_r4_4 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_4) = *(&lbl_803507E0 + temp_r4_4) | 0xB0;
            if (EXIUnlock(lbl_803507F8, temp_r4_4) == 0) {
                temp_r4_5 = lbl_803507F8 * 2;
                *(&lbl_803507E0 + temp_r4_5) = *(&lbl_803507E0 + temp_r4_5) | 0xD0;
            }
            return *(&lbl_803507E0 + (lbl_803507F8 * 2));
        }
        if (EXIImmEx(lbl_803507F8, arg0, arg1, 1) == 0) {
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
        sp18 |= 1;
        if ((s32) *(&lbl_803507FC + (lbl_803507F8 * 4)) != 0) {
            sp18 = ~(sp18 | sp18);
        }
        if (EXIImmEx(lbl_803507F8, &sp18, 1U, 1) == 0) {
            temp_r4_9 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_9) = *(&lbl_803507E0 + temp_r4_9) | 0xF0;
        }
        if (EXIDeselect((unsigned short)(lbl_803507F8), (unsigned char)(0)) == 0) {
            temp_r4_10 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_10) = *(&lbl_803507E0 + temp_r4_10) | 0xE0;
        }
        if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
            temp_r4_11 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_11) = *(&lbl_803507E0 + temp_r4_11) | 0xD0;
        }
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    if (EXIImmEx(lbl_803507F8, &lbl_802CFC28, 0x80U, 1) == 0) {
        temp_r4_12 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_12) = *(&lbl_803507E0 + temp_r4_12) | 0xF0;
        if (EXIDeselect(lbl_803507F8, temp_r4_12) == 0) {
            temp_r4_13 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_13) = *(&lbl_803507E0 + temp_r4_13) | 0xE0;
        }
        if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
            temp_r4_14 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4_14) = *(&lbl_803507E0 + temp_r4_14) | 0xD0;
        }
        return *(&lbl_803507E0 + (lbl_803507F8 * 2));
    }
    var_r30_3 += 1;
    goto loop_27;
}
#pragma pop

u16 fn_800B5A64(u8 *arg0, u16 arg1) {
    u8 sp30;
    u8 sp10;
    u8 temp_r4;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 var_r29;
    s32 var_r29_2;
    s32 temp_r24;
    u16 var_r25;
    s32 var_r28;
    u8 *var_r30;
    u8 temp_r0;

    *arg0 |= 0x40;
    sp30 = fn_800B6350((unsigned char *)(arg0), (unsigned short)(0));
    var_r30 = arg0;
    if ((s32) *(&lbl_803507FC + (lbl_803507F8 * 4)) != 0) {
        var_r29 = 0;
loop_3:
        if (var_r29 < (s32) arg1) {
            temp_r0 = *var_r30;
            var_r30 += 1;
            *var_r30 = ~(temp_r0 | temp_r0);
            var_r29 += 1;
            goto loop_3;
        }
    }
    var_r25 = 0;
loop_7:
    if (var_r25 < arg1) {
        var_r25 += 1;
        goto loop_7;
    }
    temp_r24 = *(&lbl_803507F4 + (lbl_803507F8 * 2));
    *(&lbl_803507D0 + (lbl_803507F8 * 4)) = 0;
    if (EXILock((unsigned short)(lbl_803507F8), (long)(0), (long *)(&fn_800B2F7C), (long *)(0)) == 0) {
        do {

        } while ((s32) *(&lbl_803507D0 + (lbl_803507F8 * 4)) == 0);
        if (EXILock((unsigned short)(lbl_803507F8), (long)(0), (long *)(&fn_800B2F6C), (long *)(0)) == 0) {
            temp_r4 = lbl_803507F8 * 2;
            *(&lbl_803507E0 + temp_r4) = *(&lbl_803507E0 + temp_r4) | 0xA0;
            var_r28 = *(&lbl_803507E0 + (lbl_803507F8 * 2));
        } else {
            goto block_12;
        }
    } else {
block_12:
        if (EXISelect(lbl_803507F8, 0, temp_r24) == 0) {
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
    var_r29_2 = 0;
loop_21:
    if (var_r29_2 < 0x20) {
        var_r29_2 += 1;
        (&sp10)[var_r29_2] = *(&lbl_80350808 + lbl_803507F8);
        goto loop_21;
    }
    if (EXIImmEx(lbl_803507F8, &sp10, 0xAU, 1) == 0) {
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
    if (EXIImmEx(lbl_803507F8, arg0, arg1, 1) == 0) {
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
    sp30 |= (u8)1;
    if ((s32) *(&lbl_803507FC + (lbl_803507F8 * 4)) != 0) {
        sp30 = ~(sp30 | sp30);
    }
    if (EXIImmEx(lbl_803507F8, &sp30, 1U, 1) == 0) {
        temp_r4_10 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_10) = *(&lbl_803507E0 + temp_r4_10) | 0xF0;
    }
    if (EXIDeselect((unsigned short)(lbl_803507F8), (unsigned char)(0)) == 0) {
        temp_r4_11 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_11) = *(&lbl_803507E0 + temp_r4_11) | 0xE0;
    }
    if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
        temp_r4_12 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_12) = *(&lbl_803507E0 + temp_r4_12) | 0xD0;
    }
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}

u16 fn_800B5E8C(u8 *arg0, u16 arg1) {
    u8 *sp30;
    u8 sp11;
    u8 sp10;
    s32 temp_r4;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_12;
    u8 temp_r4_13;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 var_r30;
    s32 var_r30_2;
    u16 temp_r27;
    u16 var_r29;
    s32 temp_r28;

    var_r30 = 0;
loop_2:
    if (var_r30 < 0x20) {
        (&sp10)[var_r30] = *(&lbl_80350808 + lbl_803507F8);
        var_r30 += 1;
        goto loop_2;
    }
    temp_r28 = fn_800B643C(arg0, arg1);
    temp_r27 = *(&lbl_803507F4 + (lbl_803507F8 * 2));
    *(&lbl_803507D0 + (lbl_803507F8 * 4)) = 0;
    if (EXILock((unsigned short)(lbl_803507F8), (long)(0), (long *)(&fn_800B2F7C), (long *)(0)) == 0) {
        do {

        } while ((s32) *(&lbl_803507D0 + (lbl_803507F8 * 4)) == 0);
        if (EXILock((unsigned short)(lbl_803507F8), (long)(0), (long *)(&fn_800B2F6C), (long *)(0)) == 0) {
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
    if (EXIImmEx(lbl_803507F8, &sp10, 8U, 1) == 0) {
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
    var_r30_2 = 0;
loop_22:
    if (var_r30_2 < 0x20) {
        (&sp10)[var_r30_2] = *(&lbl_80350808 + lbl_803507F8);
        var_r30_2 += 1;
        goto loop_22;
    }
    sp30 = arg0;
    sp10 = 0xFC;
    if (EXIImmEx(lbl_803507F8, &sp10, 1U, 1) == 0) {
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
    if (EXIImmEx(lbl_803507F8, sp30, arg1, 1) == 0) {
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
    sp10 = (u8) (temp_r28 >> 8U);
    OSSetAlarm(&lbl_802CFA08 + (lbl_803507F8 * 0x28), &fn_800B2FA0, 0, (u32) ((u32) *(u32 *)0x800000F8 >> 2U) / 1000000, &fn_800B2FA0);
    temp_r4_13 = lbl_803507F8 * 0xC;
    fn_800C87B8(&lbl_802CF9F0 + temp_r4_13, temp_r4_13);
    sp11 = temp_r28;
    if (EXIImmEx(lbl_803507F8, &sp10, 2U, 1) == 0) {
        temp_r4_14 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_14) = *(&lbl_803507E0 + temp_r4_14) | 0xF0;
    }
    if (EXIDeselect((unsigned short)(lbl_803507F8), (unsigned char)(0)) == 0) {
        temp_r4_15 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_15) = *(&lbl_803507E0 + temp_r4_15) | 0xE0;
    }
    if (EXIUnlock((unsigned short)(lbl_803507F8), (long)(0)) == 0) {
        temp_r4_16 = lbl_803507F8 * 2;
        *(&lbl_803507E0 + temp_r4_16) = *(&lbl_803507E0 + temp_r4_16) | 0xD0;
    }
    return *(&lbl_803507E0 + (lbl_803507F8 * 2));
}

u8 fn_800B6350(u8 *arg0, u16 arg1) {
    s32 temp_r31_3;
    s32 var_r30;
    s32 temp_r31;
    u16 temp_r31_2;
    s32 var_r28;
    s32 var_r31;
    u8 *var_r27;
    s32 var_r29;

    var_r31 = 0;
    var_r28 = 0;
    var_r27 = arg0;
loop_12:
    if (var_r28 < arg1) {
        var_r29 = 0x80;
        var_r30 = 0;
loop_10:
        if (var_r30 < 8) {
            temp_r31 = var_r31 * 2;
            if (var_r29 & (*var_r27 ^ ((s32) (var_r31 * 2) >> var_r30))) {
                temp_r31_2 = temp_r31 | 1;
                if ((temp_r31_2 ^ 8) & 8) {
                    var_r31 = temp_r31_2 | 8;
                } else {
                    var_r31 = temp_r31_2 & 0xFFF7;
                }
            } else {
                temp_r31_3 = temp_r31 & 0xFFFE;
                if (temp_r31_3 & 8) {
                    var_r31 = temp_r31_3 | 8;
                } else {
                    var_r31 = temp_r31_3 & 0xFFF7;
                }
            }
            var_r29 = (u8) ((s32) var_r29 >> 1);
            var_r30 += 1;
            goto loop_10;
        }
        var_r31 = (s16) (u8) var_r31;
        var_r27 += 1;
        var_r28 += 1;
        goto loop_12;
    }
    return (u8) (var_r31 * 2);
}

u16 fn_800B643C(u8 *arg0, u16 arg1) {
    s32 sp10;
    u16 spC;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 var_r31;
    u16 var_r28;
    u8 *var_r27;
    u8 var_r29;

    spC = arg1;
    sp10 = 0;
    var_r28 = 0;
    var_r27 = arg0;
loop_18:
    if (var_r28 < spC) {
        var_r29 = 0x80;
        var_r31 = 0;
loop_16:
        if (var_r31 < 8) {
            if (var_r29 & ((u8) *var_r27 ^ (u8) ((s32) (u16) sp10 >> (var_r31 + 8)))) {
                temp_r0 = sp10 * 2;
                sp10 = temp_r0;
                temp_r0_2 = temp_r0 | 1;
                sp10 = temp_r0_2;
                if ((temp_r0_2 ^ 0x20) & 0x20) {
                    sp10 |= 0x20;
                } else {
                    sp10 &= 0xFFFFFFDF;
                }
                if ((sp10 ^ 0x1000) & 0x1000) {
                    sp10 |= 0x1000;
                } else {
                    sp10 &= 0xFFFFEFFF;
                }
            } else {
                sp10 *= 2;
                temp_r0_3 = (sp10 * 2) & 0xFFFFFFFE;
                sp10 = temp_r0_3;
                if (temp_r0_3 & 0x20) {
                    sp10 |= 0x20;
                } else {
                    sp10 &= 0xFFFFFFDF;
                }
                if (sp10 & 0x1000) {
                    sp10 |= 0x1000;
                } else {
                    sp10 &= 0xFFFFEFFF;
                }
            }
            var_r29 = (u8) ((s32) var_r29 >> 1);
            var_r31 += 1;
            goto loop_16;
        }
        sp10 = (s32) (u16) sp10;
        var_r27 += 1;
        var_r28 += 1;
        goto loop_18;
    }
    return (u16) sp10;
}

#pragma push
#pragma optimize_for_size on
s32 fn_800B65C8(u32 arg0, u32 arg1) {
    u32 spC;
    u32 temp_r3;
    u32 var_r31;

    spC = arg1;
    temp_r3 = OSGetTick();
    if (temp_r3 < arg0) {
        var_r31 = temp_r3 + (-1 - arg0) + 1;
    } else {
        var_r31 = temp_r3 - arg0;
    }
    if ((u32) (var_r31 / (u32) ((u32) ((u32) *(u32 *)0x800000F8 >> 2U) / 1000U)) > spC) {
        return 1;
    }
    return 0;
}
#pragma pop

void fn_800B6648(void) {
    fn_800B6EB0();
}

u16 fn_800B6670(void **arg0) {
    s32 spC;
    s32 temp_r3;

    spC = 0;
    if (arg0 == NULL) {
        return 0xA00CU;
    }
    if ((void *) *arg0 != (void *) (&lbl_802CFCA8 + (M2C_FIELD(*arg0, u16 *, 0) * 0x25E48) + 8)) {
        return 0xA02EU;
    }
    if ((u16) M2C_FIELD(*arg0, u16 *, 6) != 2) {
        return 0xA003U;
    }
    if ((u16) M2C_FIELD(*arg0, u16 *, 4) != 1) {
        return 0xA016U;
    }
    temp_r3 = fn_800B674C(arg0);
    if (temp_r3 != 0) {
        return temp_r3;
    }
    return 0U;
}

s32 fn_800B674C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    /* draft: did not compile: fn_800C1C84(arg0 + 0x14, 0, 0x40); */
    return 0;
}

#pragma push
#pragma peephole off
s32 SD_Close(void *arg0) {
    if ((arg0 == NULL) || ((void *) M2C_FIELD(arg0, void **, 4) == NULL)) {
        return 0xA00C;
    }
    if ((u16) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 4) != 1) {
        return 0xA016;
    }
    if ((void *) M2C_FIELD(arg0, void **, 4) != (void *) (&lbl_802CFCA8 + (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0) * 0x25E48) + 8)) {
        return 0xA00C;
    }
    return fn_800B6868(arg0);
}
#pragma pop

u16 fn_800B6868(void *arg0) {
    u16 temp_r3;
    u16 temp_r3_2;
    s16 temp_r3_3;
    u16 var_r0;
    u16 var_r30;
    void *temp_r28;
    void *temp_r29;

    var_r30 = 0;
    if ((void *) M2C_FIELD(arg0, void **, 4) == NULL) {
        return 0xA008U;
    }
    if ((u16) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 6) != 2) {
        return 0xA003U;
    }
    if ((u16) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 4) == 1) {
        var_r0 = 5;
    } else {
        var_r0 = 3;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0) >= var_r0) {
        return 0xA008U;
    }
    if ((u16) M2C_FIELD(M2C_FIELD((s32)arg0, void **, 4), u16 *, 0) > 1U) {
        return 0xA008U;
    }
    temp_r28 = &lbl_802CFCA8 + (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0) * 0x25E48);
    if ((u16) M2C_FIELD(arg0, u16 *, 2) == 1) {
        if ((u32) (u16)M2C_FIELD(arg0, u32 *, 0x24) == 0) {
            fn_800BEDE4(M2C_FIELD(arg0, u16 *, 0x22), M2C_FIELD((s32)arg0, void **, 4));
        }
        temp_r3_2 = fn_800C10A0(0, 1, M2C_FIELD(arg0, s32 *, 0x34), 0, M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 4), M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0));
        if (temp_r3_2 != 0) {
            return temp_r3_2;
        }
        /* draft: did not compile: temp_r29 = temp_r28 + 0x20000 + M2C_FIELD(arg0, u16 *, 0x38); */
        M2C_FIELD(temp_r29, s8 *, 0xBC0) = (s8) M2C_FIELD(arg0, u32 *, 0x24);
        M2C_FIELD(temp_r29, u8 *, 0xBAF) = (u8) M2C_FIELD(arg0, u8 *, 0x13);
        M2C_FIELD(temp_r29, u8 *, 0xBC1) = (u8) ((u32) M2C_FIELD(arg0, u32 *, 0x24) >> 8U);
        M2C_FIELD(temp_r29, u8 *, 0xBC2) = (u8) ((u32) M2C_FIELD(arg0, u32 *, 0x24) >> 0x10U);
        M2C_FIELD(temp_r29, s8 *, 0xBC3) = (s8) ((u32) M2C_FIELD(arg0, u32 *, 0x24) >> 0x18U);
        M2C_FIELD(temp_r29, s8 *, 0xBBE) = (s8) M2C_FIELD(arg0, u16 *, 0x22);
        M2C_FIELD(temp_r29, s8 *, 0xBBF) = (s8) ((s32) M2C_FIELD(arg0, u16 *, 0x22) >> 8);
        /* draft: did not compile: fn_800C1D74(temp_r29 + 0xBB0, arg0 + 0x14, 0xA); */
        /* draft: did not compile: fn_800C05CC(temp_r29 + 0xBA4, 0); */
        temp_r3 = fn_800C11F4(0, 1, M2C_FIELD(arg0, s32 *, 0x34), 0, M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 4), 0, M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0));
        if (temp_r3 != 0) {
            return temp_r3;
        }
        M2C_FIELD(arg0, u16 *, 2) = 0U;
        temp_r3_3 = fn_800BF4B4(M2C_FIELD(arg0, void **, 4));
        var_r30 = temp_r3_3;
        if (temp_r3_3 != 0) {
            return var_r30;
        }
        goto block_20;
    }
block_20:
    fn_800BC658(arg0);
    return var_r30;
}

s32 fn_800B6A7C(void *arg0, u32 arg1) {
    if ((arg0 == NULL) || (arg1 == 0U)) {
        return 0xA00C;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 4) != 1) {
        return 0xA016;
    }
    if (arg0 != (void *) (&lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48) + 8)) {
        return 0xA00C;
    }
    return fn_800B6B24(arg0, (u16)arg1);
}

u16 fn_800B6B24(u16 *arg0, s32 arg1) {
    s8 sp2F;
    M2C_UNK sp68;
    M2C_UNK sp48;
    s16 sp44;
    M2C_UNK sp24;
    s32 sp20;
    u16 sp1E;
    u16 sp1C;
    void *sp18;
    s32 sp14;
    s32 spC;
    u16 *sp8;
    u16 temp_r3;

    sp14 = arg1;
    sp44 = 0;
    sp18 = &lbl_802CFCA8 + (*arg0 * 0x25E48);
    sp8 = &sp1C;
    spC = 1;
    temp_r3 = fn_800BC960(arg0, (u16)arg1, &sp68, &sp48, &sp44, &sp24, &sp20, &sp1E);
    if (temp_r3 != 0) {
        return temp_r3;
    }
    if ((sp2F & 1) || (sp2F & 8) || (sp2F & 0x10) || ((s32) (sp2F & 0xF) == 0xF)) {
        return 0xA006U;
    }
    sp1E = fn_800B6C14(arg0, sp20, (u16)sp1E, sp1C);
    return sp1E;}

u16 fn_800B6C14(void *arg0, s32 arg1, u16 arg2, u16 arg3) {
    u16 sp12;
    s32 spC;
    s32 temp_r29;
    u16 temp_r3;
    u16 temp_r3_2;
    u16 var_r31;
    void *temp_r28;

    spC = arg1;
    sp12 = arg3;
    temp_r28 = &lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48) + 0x20000 + arg2;
    M2C_FIELD(temp_r28, s8 *, 0xBA4) = 0xE5;
    temp_r29 = (M2C_FIELD(temp_r28, u8 *, 0xBBE) & ~0xFF00) | ((M2C_FIELD(temp_r28, u8 *, 0xBBF) << 8) & 0xFF00);
    temp_r3_2 = fn_800C0354(arg0, sp12, spC, arg2);
    if (temp_r3_2 != 0) {
        return temp_r3_2;
    }
    if ((temp_r29 > 1U) && ((s32) temp_r29 <= (s32) (M2C_FIELD(arg0, u16 *, 0xBC) - 1))) {
        temp_r3 = fn_800BEDE4(temp_r29, arg0);
        if (temp_r3 != 0) {
            return temp_r3;
        }
        var_r31 = fn_800BF4B4(arg0);
        goto block_10;
    }
    if (temp_r29 == 0) {
        var_r31 = 0;
    } else {
        var_r31 = 0xA032;
    }
block_10:
    return var_r31;
}

s32 fn_800B6D20(s32 arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4) {
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    u8 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r31;

    sp8 = arg0;
    spC = arg1;
    sp10 = arg2;
    sp14 = arg3;
    sp18 = arg4;
    if (sp14 != 0U) {
        return 0xA00C;
    }
    sp20 = OSGetTick();
    temp_r31 = fn_800B12C8(sp8, spC, sp10, 0, sp18);
    sp1C = OSGetTick();
    return temp_r31;
}
