/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK lbl_802CFCA8;
u16 fn_800BEAE0(void *, u16, u16 *);
s32 fn_800B6F60(void *, s32, s32, M2C_UNK, void *, u16);
s32 fn_800B702C(void *, s32, s32, M2C_UNK, void *, u16);
s16 fn_800B71A4(M2C_UNK *, u16);
u16 fn_800BEEE4(void *);
M2C_UNK fn_800C05CC(void *, M2C_UNK);
u16 fn_800BF4B4(void *);
extern M2C_UNK lbl_8034FF20;
u16 fn_800C28E4(void *, u32, u32, s32, void *);

s32 fn_800C09F8(void *arg0, s32 arg1);
u16 fn_800C0C80(void *arg0, u16 arg1);
u16 fn_800C0DB4(void *arg0, u16 arg1, u16 arg2);
u16 fn_800C0FEC(void *arg0, u32 arg1);
u32 fn_800C1048(void *arg0, u16 arg1);
s32 fn_800C10A0(void *arg0, s32 arg1, s32 arg2, void *arg3, u16 arg4, u16 arg5);
s32 fn_800C11F4(void *arg0, s32 arg1, s32 arg2, void *arg3, u16 arg4, u16 arg5, u16 arg6);
s32 fn_800C1354(u32 *arg0, s32 *arg1, s32 arg2, u16 arg3, u16 arg4);
s32 fn_800C15BC(u8 *arg0, u8 **arg1, u16 *arg2, u16 arg3);
s32 fn_800C173C(void *arg0, void *arg1);
s32 fn_800C17AC(s32 arg0, s32 arg1);
void fn_800C194C(s32 arg0);
s32 fn_800C1AD4(M2C_UNK *arg0);
void fn_800C1C18(s32 arg0);
void fn_800C1C84(s32 arg0, s8 arg1, u32 arg2);
void fn_800C1D34(s32 arg0, s32 arg1);
void fn_800C1D74(s32 arg0, s32 arg1, u32 arg2);
u32 fn_800C1E70(s32 arg0);
s32 fn_800C1EB8(s32 arg0, s32 arg1, u32 arg2);
void fn_800C1F00(u16 arg0, u16 arg1);
u16 fn_800C1F48(u16 arg0, u16 arg1);
u16 fn_800C1FC4(void *arg0);
u16 fn_800C2104(void *arg0);
s32 SD_Umount(void *arg0);
u16 fn_800C2344(void *arg0);
u16 WritePictureSD(void *arg0, u32 arg1, u32 arg2, s32 arg3, void *arg4);

s32 fn_800C09F8(void *arg0, s32 arg1) { return 0; } /* draft: stub */

#pragma push
#pragma peephole off
u16 fn_800C0C80(void *arg0, u16 arg1) {
    u16 spE;

    if ((arg1 < 2U) || (arg1 >= (u16) M2C_FIELD(arg0, u16 *, 0xBC))) {
        return 0xFFFDU;
    }
    if (fn_800BEAE0(arg0, arg1, &spE) != 0) {
        return 0xFFFEU;
    }
    if ((spE >= 2U) && (spE < (u16) M2C_FIELD(arg0, u16 *, 0xBC))) {
        return spE;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x3C) == 1) {
        if (spE == -9U) {
            return 0xFFF7U;
        }
        if ((spE >= -8U) && (spE <= -1U)) {
            return 0xFFFFU;
        }
        return 0xFFFEU;
    }
    if (spE == 0xFF7) {
        return 0xFFF7U;
    }
    if ((spE >= 0xFF8U) && (spE <= 0xFFFU)) {
        return 0xFFFFU;
    }
    return 0xFFFEU;
}
#pragma pop

u16 fn_800C0DB4(void *arg0, u16 arg1, u16 arg2) {
    u16 sp10;
    u16 var_r29;
    u32 var_r29_2;
    u16 var_r31;

    if ((arg1 < 2U) || (arg1 >= (u16) M2C_FIELD(arg0, u16 *, 0xBC))) {
        return 0xFFFDU;
    }
    if ((arg2 < 2U) || (arg2 >= (u16) M2C_FIELD(arg0, u16 *, 0xBC))) {
        return 0xFFFDU;
    }
    if (arg1 == arg2) {
        return 0xFFFDU;
    }
    var_r31 = arg1;
    if ((u16) M2C_FIELD(arg0, u16 *, 0x3C) == 1) {
        var_r29 = 0;
loop_23:
        if (var_r29 >= -1U) {
            return 0xFFFEU;
        }
        if (fn_800BEAE0(arg0, var_r31, &sp10) != 0) {
            return 0xFFFEU;
        }
        if (sp10 == arg2) {
            return var_r31;
        }
        if (sp10 == -9U) {
            return 0xFFF7U;
        }
        if ((sp10 >= -8U) && (sp10 <= -1U)) {
            return 0xFFFFU;
        }
        if ((sp10 < 2U) || (sp10 >= (u16) M2C_FIELD(arg0, u16 *, 0xBC))) {
            return 0xFFFEU;
        }
        var_r31 = sp10;
        var_r29 += 1;
        goto loop_23;
    }
    var_r29_2 = 0;
loop_39:
    if (var_r29_2 >= -1U) {
        return 0xFFFEU;
    }
    if (fn_800BEAE0(arg0, var_r31, &sp10) != 0) {
        return 0xFFFEU;
    }
    if (sp10 == arg2) {
        return var_r31;
    }
    if (sp10 == 0xFF7) {
        return 0xFFF7U;
    }
    if ((sp10 >= 0xFF8U) && (sp10 <= 0xFFFU)) {
        return 0xFFFFU;
    }
    if ((sp10 < 2U) || (sp10 >= (u16) M2C_FIELD(arg0, u16 *, 0xBC))) {
        return 0xFFFEU;
    }
    var_r31 = sp10;
    var_r29_2 += 1;
    goto loop_39;
}

u16 fn_800C0FEC(void *arg0, u32 arg1) {
    if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x64)) {
        return 0xFFFFU;
    }
    if (arg1 >= (u32) M2C_FIELD(arg0, u32 *, 0x68)) {
        return 0xFFFFU;
    }
    return (u16) (((u32) (arg1 - M2C_FIELD(arg0, u32 *, 0x64)) / (u16) M2C_FIELD(arg0, u16 *, 0x1E)) + 2);
}

u32 fn_800C1048(void *arg0, u16 arg1) {
    u32 temp_r31;

    if (arg1 < 2U) {
        return -1U;
    }
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x64) + ((arg1 - 2) * M2C_FIELD(arg0, u16 *, 0x1E));
    if (temp_r31 >= (u32) M2C_FIELD(arg0, u32 *, 0x68)) {
        return -1U;
    }
    return temp_r31;
}

s32 fn_800C10A0(void *arg0, s32 arg1, s32 arg2, void *arg3, u16 arg4, u16 arg5) {
    u16 sp1A;
    s32 var_r28;
    void *temp_r31;
    void *var_r25;
    void *var_r30;

    var_r25 = arg0;
    var_r30 = arg3;
    sp1A = arg5;
    temp_r31 = &lbl_802CFCA8 + (sp1A * 0x25E48);
    if ((arg4 != 1) && (arg4 != 2)) {
        return 0xA016;
    }
    if (var_r30 == NULL) {
        /* draft: did not compile: var_r30 = temp_r31 + 0x24BA4; */
    }
    if (var_r25 == NULL) {
        /* draft: did not compile: var_r25 = temp_r31 + 0x20BA4; */
    }
    M2C_FIELD(var_r30, s16 *, 2) = 0;
    M2C_FIELD(var_r30, s32 *, 4) = 0;
    M2C_FIELD(var_r30, s16 *, 0) = 0x1000;
    if (arg4 == 1) {
        if (((u16) M2C_FIELD(temp_r31, u16 *, 0xE) == 2) && ((u32) M2C_FIELD(temp_r31, u32 *, 0x104) < (u32) (arg2 + arg1))) {
            return 0xA023;
        }
        goto block_14;
    }
    if (((u16) M2C_FIELD(temp_r31, u16 *, 0x112) == 2) && ((u32) M2C_FIELD(temp_r31, u32 *, 0x208) < (u32) (arg2 + arg1))) {
        return 0xA023;
    }
block_14:
    if (arg4 == 1) {
        var_r28 = fn_800B6F60(var_r25, arg1, arg2, 0, var_r30, M2C_FIELD(temp_r31, u16 *, 2));
    } else {
        var_r28 = 0xA047;
    }
    return var_r28;
}

s32 fn_800C11F4(void *arg0, s32 arg1, s32 arg2, void *arg3, u16 arg4, u16 arg5, u16 arg6) {
    u16 sp1E;
    u16 sp1C;
    u16 sp1A;
    s32 var_r28;
    void *temp_r31;
    void *var_r25;
    void *var_r30;

    var_r25 = arg0;
    var_r30 = arg3;
    sp1A = arg5;
    sp1C = arg6;
    temp_r31 = &lbl_802CFCA8 + (sp1C * 0x25E48);
    if ((arg4 != 1) && (arg4 != 2)) {
        return 0xA016;
    }
    if (var_r30 == NULL) {
        /* draft: did not compile: var_r30 = temp_r31 + 0x24BA4; */
    }
    if (var_r25 == NULL) {
        /* draft: did not compile: var_r25 = temp_r31 + 0x20BA4; */
    }
    M2C_FIELD(var_r30, s32 *, 4) = 0;
    M2C_FIELD(var_r30, s16 *, 2) = 0;
    M2C_FIELD(var_r30, s16 *, 0) = 0x2000;
    if (arg4 == 1) {
        if (((u16) M2C_FIELD(temp_r31, u16 *, 0xE) == 2) && ((u32) M2C_FIELD(temp_r31, u32 *, 0x104) < (u32) (arg2 + arg1))) {
            return 0xA023;
        }
        goto block_14;
    }
    if (((u16) M2C_FIELD(temp_r31, u16 *, 0x112) == 2) && ((u32) M2C_FIELD(temp_r31, u32 *, 0x208) < (u32) (arg2 + arg1))) {
        return 0xA023;
    }
block_14:
    if (arg4 == 1) {
        var_r28 = fn_800B702C(var_r25, arg1, arg2, 0, var_r30, M2C_FIELD(temp_r31, u16 *, 2));
    } else {
        sp1E = sp1A;
        var_r28 = 0xA047;
    }
    return var_r28;
}

#pragma push
#pragma optimize_for_size on
s32 fn_800C1354(u32 *arg0, s32 *arg1, s32 arg2, u16 arg3, u16 arg4) {
    s32 sp24;
    s32 sp22;
    s32 sp23;
    s32 sp28;
    s32 sp29;
    s32 sp25;
    s32 sp26;
    M2C_UNK sp5C;
    M2C_UNK sp1C;
    s16 sp18;
    u16 sp16;
    u32 sp14;
    u16 sp12;
    s32 var_r27;
    u32 temp_r31;
    u32 var_r29;
    u32 var_r29_2;
    u32 var_r29_3;

    sp12 = arg3;
    sp14 = arg4;
    sp16 = sp12;
    if (arg2 & 1) {
        *arg0 = 0x1E500;
        *arg1 = 0x20;
    } else {
        *arg0 = 0x500;
        *arg1 = 0x20;
    }
    sp18 = fn_800B71A4(&sp5C, M2C_FIELD((&lbl_802CFCA8 + (sp14 * 0x25E48)), u16 *, 2));
    var_r29 = 0U;
loop_5:
    if (var_r29 < 0x20U) {
        *(&sp1C + var_r29) = *(&sp5C + (0x1F - var_r29));
        var_r29 += 1;
        goto loop_5;
    }
    var_r27 = 2;
    var_r29_2 = 0U;
loop_8:
    if (var_r29_2 < (u32) ((u16) (((sp26 >> 7U) & 1 & ~6) | ((sp25 << 1) & 6)) + 1)) {
        var_r27 *= 2;
        var_r29_2 += 1;
        goto loop_8;
    }
    var_r29_3 = 0U;
loop_11:
    if (var_r29_3 < (u32) ((u16) (((sp29 >> 6U) & 3 & ~0xC) | ((sp28 << 2) & 0xC)) - 1)) {
        var_r29_3 += 1;
        goto loop_11;
    }
    temp_r31 = ((u16) (((((sp23 * 4) & 0xFFFC & ~0xC00) | ((sp22 << 0xA) & 0xC00)) & ~3) | ((sp24 >> 6U) & 3)) + 1) * var_r27;
    if (arg2 & 1) {
        *arg0 = temp_r31;
        *arg1 = var_r27;
    } else {
        if (temp_r31 <= 0x1F60U) {
            *arg0 = 0xA0;
        } else if (temp_r31 <= 0x3F60U) {
            *arg0 = 0xA0;
        } else if (temp_r31 <= 0x7EC0U) {
            *arg0 = 0x140;
        } else if (temp_r31 <= -0x280U) {
            *arg0 = 0x280;
        } else if (temp_r31 <= 0x1F3E4U) {
            *arg0 = 0x500;
        } else if (temp_r31 <= 0x3F600U) {
            *arg0 = 0xA00;
        } else if (temp_r31 <= 0x7EC0AU) {
            *arg0 = 0x1400;
        } else if (temp_r31 <= 0xFD800U) {
            *arg0 = 0x2800;
        } else if (temp_r31 <= 0x1FB000U) {
            *arg0 = 0x5000;
        } else if (temp_r31 <= 0x3F6000U) {
            *arg0 = 0xA000;
        }
        *arg1 = var_r27;
    }
    return 0;
}
#pragma pop

s32 fn_800C15BC(u8 *arg0, u8 **arg1, u16 *arg2, u16 arg3) {
    void *sp18;
    u32 var_r30;
    u16 var_r31;
    u8 **var_r4;
    u8 *var_r3;
    u8 temp_r0;

    var_r3 = arg0;
    var_r4 = arg1;
    var_r30 = 0;
    var_r31 = 0;
    sp18 = &lbl_802CFCA8 + (arg3 * 0x25E48);
    *arg2 = 0;
    if ((u8) *var_r3 != 0x5C) {
        return 0xA02C;
    }
loop_23:
    if ((u8) M2C_FIELD(var_r3, u8 *, 0) == 0) {
        if ((var_r30 > 8U) || (var_r31 > 4U)) {
            return 0xA02C;
        }
        return 0;
    }
    if ((var_r30 > 8U) && (var_r31 == 0)) {
        return 0xA02C;
    }
    if (var_r31 > 4U) {
        return 0xA02C;
    }
    if ((u8) M2C_FIELD(var_r3, u8 *, 0) == 0x5C) {
        var_r30 = 0;
        var_r31 = 0;
        M2C_FIELD(var_r3, u8 *, 0) = 0;
        temp_r0 = M2C_FIELD(var_r3, u8 *, 1);
        var_r3 += 1;
        if ((temp_r0 != 0) && ((u8) *var_r3 != 0x5C)) {
            *arg2 += 1;
            if ((u16) *arg2 > 8U) {
                return 0xA013;
            }
            *var_r4 = var_r3;
            var_r4 += 4;
            goto loop_23;
        }
        goto loop_23;
    }
    if ((u8) M2C_FIELD((s32)var_r3, u8 *, 0) == 0x2E) {
        if (var_r31 != 0) {
            return 0xA02C;
        }
        if (var_r30 == 0) {
            return 0xA02C;
        }
        var_r31 = 1;
        goto block_22;
    }
    if (var_r31 != 0) {
        var_r31 += 1;
    } else {
        var_r30 = var_r30 + 1;
    }
block_22:
    var_r3 += 1;
    goto loop_23;
}

s32 fn_800C173C(void *arg0, void *arg1) {
    u16 var_r31;

    var_r31 = 0;
loop_4:
    if (var_r31 >= 5U) {
        if ((u8) M2C_FIELD(arg0, u8 *, 0xA) != (u8) M2C_FIELD(arg1, u8 *, 0xA)) {
            return 0xA02B;
        }
        return 0;
    }
    if (0 /* draft: did not compile */) {
        return 0xA02B;
    }
    var_r31 += 1;
    goto loop_4;
}

s32 fn_800C17AC(s32 arg0, s32 arg1) { return 0; } /* draft: stub */

void fn_800C194C(s32 arg0) {
    M2C_UNK spC;
    M2C_UNK spB;
    u16 var_r29;
    u16 var_r29_2;
    u16 var_r29_3;
    u16 var_r30;
    s8 var_r31;
    u16 var_r31_2;
    u16 var_r31_3;

    /* draft: did not compile: fn_800C1C84(&spC, 0, 0xC); */
    var_r30 = 0;
    var_r31 = 0xB;
loop_7:
    if (var_r31 > 8U) {
        if ((u8) M2C_FIELD((var_r31 + arg0), u8 *, -1) != 0x20) {
            var_r29 = var_r31;
loop_4:
            if (var_r29 > 8U) {
                *(&spC + var_r30) = M2C_FIELD((var_r29 + arg0), u8 *, -1);
                var_r29 = var_r29 - 1;
                var_r30 = var_r30 + 1;
                goto loop_4;
            }
            *(&spC + var_r30) = 0x2E;
            var_r30 = var_r30 + 1;
        } else {
            var_r31 -= 1;
            goto loop_7;
        }
    }
    var_r31_2 = 8;
loop_15:
    if (var_r31_2 != 0) {
        if ((u8) M2C_FIELD((arg0 + var_r31_2), u8 *, -1) != 0x20) {
            var_r29_2 = var_r31_2;
loop_12:
            if (var_r29_2 != 0) {
                var_r30 = var_r30 + 1;
                *(&spC + var_r30) = M2C_FIELD((var_r29_2 + arg0), u8 *, -1);
                var_r29_2 = var_r29_2 - 1;
                goto loop_12;
            }
        } else {
            var_r31_2 = var_r31_2 - 1;
            goto loop_15;
        }
    }
    if (var_r30 == 0) {
        var_r29_3 = 0;
loop_19:
        if (var_r29_3 < 8U) {
            *(&spC + var_r30) = 0x20;
            var_r29_3 = var_r29_3 + 1;
            var_r30 = var_r30 + 1;
            goto loop_19;
        }
    }
    var_r31_3 = 0;
loop_22:
    if (var_r30 > var_r31_3) {
        /* draft: did not compile: *(arg0 + var_r31_3) = *(&spB + (var_r30 - var_r31_3)); */
        var_r31_3 = var_r31_3 + 1;
        goto loop_22;
    }
    /* draft: did not compile: *(arg0 + var_r31_3) = 0; */
}

s32 fn_800C1AD4(M2C_UNK *arg0) {
    M2C_UNK spD;
    M2C_UNK spC;
    M2C_UNK spB;
    u16 var_r28;
    u16 var_r29;
    u16 var_r30;
    u16 var_r31;
    u8 temp_r0;

    var_r28 = 0;
    var_r30 = fn_800C1E70((long)(0));
    if (var_r30 > 0x3FU) {
        return 0xA017;
    }
    if (var_r30 > -1U) {
        return 0xA017;
    }
    /* draft: did not compile: fn_800C1D34(&spC, arg0); */
    /* draft: did not compile: fn_800C1C18(&spC); */
    var_r31 = 0;
loop_18:
    if (var_r31 < var_r30) {
        temp_r0 = *(&spC + var_r31);
        if ((s32) temp_r0 != 0x5C) {
            if ((s32) temp_r0 < 0x5C) {
                if ((s32) temp_r0 != 0x20) {
                    goto block_16;
                }
                goto block_9;
            }
block_16:
            var_r28 = 0;
        } else {
block_9:
            if (var_r28 != 0) {
                var_r29 = var_r31;
loop_12:
                if (var_r29 < var_r30) {
                    *(&spC + var_r29) = *(&spD + var_r29);
                    var_r29 += 1;
                    goto loop_12;
                }
                var_r31 -= 1;
                var_r30 -= 1;
            }
            if ((u8) *(&spC + var_r31) == 0x5C) {
                var_r28 = 1;
            }
        }
        var_r31 += 1;
        goto loop_18;
    }
    if ((var_r31 > 1U) && (var_r28 != 0)) {
        *(&spB + var_r30) = 0;
    }
    /* draft: did not compile: fn_800C1D34(arg0, &spC); */
    return 0;
}

void fn_800C1C18(s32 arg0) {
    u32 var_r31;

    var_r31 = 0U;
loop_5:
    if (var_r31 < fn_800C1E70(arg0)) {
        if (0 /* draft: did not compile */) {
            /* draft: did not compile: *(arg0 + var_r31) = *(arg0 + var_r31) - 0x20; */
        }
        var_r31 += 1;
        goto loop_5;
    }
}

void fn_800C1C84(s32 arg0, s8 arg1, u32 arg2) {
    s32 var_r27;
    s32 var_r28;
    s32 var_r29;
    u32 var_r30;
    u32 var_r30_2;
    u32 var_r31;

    var_r29 = arg0;
    var_r31 = arg2;
loop_2:
    if ((var_r29 & 3) && (var_r31 != 0)) {
        /* draft: did not compile: *var_r29 = arg1; */
        var_r29 += 1;
        var_r31 -= 1;
        goto loop_2;
    }
    if (var_r31 > 4U) {
        var_r27 = var_r29;
        var_r30 = 0;
loop_7:
        if (var_r30 < (u32) (var_r31 >> 2U)) {
            /* draft: did not compile: *var_r27 = (s32) (((u16) arg1 + ((arg1 << 8) & 0xFFFF00)) * 0x10001); */
            var_r30 += 1;
            var_r27 += 4;
            goto loop_7;
        }
        var_r29 = var_r27;
        var_r31 -= var_r30 * 4;
    }
    if (var_r31 != 0) {
        var_r28 = var_r29;
        var_r30_2 = 0U;
loop_12:
        if (var_r30_2 < var_r31) {
            /* draft: did not compile: *var_r28 = arg1; */
            var_r30_2 += 1;
            var_r28 += 1;
            goto loop_12;
        }
    }
}

void fn_800C1D34(s32 arg0, s32 arg1) {
    u32 var_r31;

    var_r31 = 0U;
loop_3:
    if (var_r31 < -1U) {
        /* draft: did not compile: *(arg0 + var_r31) = *(arg1 + var_r31); */
        if (0 /* draft: did not compile */) {
            var_r31 += 1;
            goto loop_3;
        }
    }
}

void fn_800C1D74(s32 arg0, s32 arg1, u32 arg2) {
    s32 var_r26;
    s32 var_r27;
    s32 var_r30;
    s32 var_r31;
    u32 var_r28;
    u32 var_r29;
    u32 var_r29_2;
    u32 var_r29_3;

    if (arg2 != 0) {
        var_r31 = arg0;
        var_r30 = arg1;
        var_r28 = arg2;
        if ((arg0 & 1) && (var_r30 & 1)) {
            /* draft: did not compile: *var_r31 = (u8) *var_r30; */
            var_r31 += 1;
            var_r30 += 1;
            var_r28 -= 1;
            goto block_10;
        }
        if ((var_r31 & 1) || (var_r30 & 1)) {
            var_r29 = 0U;
loop_8:
            if (var_r29 < var_r28) {
                /* draft: did not compile: *var_r31 = (u8) *var_r30; */
                var_r29 += 1;
                var_r31 += 1;
                var_r30 += 1;
                goto loop_8;
            }
            return;
        }
block_10:
        if (var_r28 > 4U) {
            var_r27 = var_r31;
            var_r26 = var_r30;
            var_r29_2 = 0;
loop_13:
            if (var_r29_2 < (u32) (var_r28 >> 2U)) {
                /* draft: did not compile: *var_r27 = (s32) *var_r26; */
                var_r29_2 += 1;
                var_r27 += 4;
                var_r26 += 4;
                goto loop_13;
            }
            var_r31 = var_r27;
            var_r30 = var_r26;
            var_r28 -= var_r29_2 * 4;
        }
        if (var_r28 != 0) {
            var_r29_3 = 0U;
loop_18:
            if (var_r29_3 < var_r28) {
                /* draft: did not compile: *var_r31 = (u8) *var_r30; */
                var_r29_3 += 1;
                var_r31 += 1;
                var_r30 += 1;
                goto loop_18;
            }
        }
    }
}

u32 fn_800C1E70(s32 arg0) {
    u32 var_r31;

    var_r31 = 0U;
loop_4:
    if (var_r31 >= -1U) {
        return -1U;
    }
    if (0 /* draft: did not compile */) {
        return var_r31;
    }
    var_r31 += 1;
    goto loop_4;
}

s32 fn_800C1EB8(s32 arg0, s32 arg1, u32 arg2) {
    u32 var_r31;

    var_r31 = 0U;
loop_4:
    if (var_r31 >= arg2) {
        return 0;
    }
    if (0 /* draft: did not compile */) {
        return 0xFFFF;
    }
    var_r31 += 1;
    goto loop_4;
}

void fn_800C1F00(u16 arg0, u16 arg1) {
    void *temp_r31;

    temp_r31 = &lbl_802CFCA8 + (arg1 * 0x25E48);
    M2C_FIELD(temp_r31, s32 *, 0x259D8) = (s32) arg0;
    M2C_FIELD(temp_r31, s16 *, 0x259DC) = 1;
}

u16 fn_800C1F48(u16 arg0, u16 arg1) {
    void *temp_r31;

    temp_r31 = &lbl_802CFCA8 + (arg1 * 0x25E48);
    M2C_FIELD(temp_r31, s16 *, 0x259DC) = 1;
    M2C_FIELD(temp_r31, u32 *, 0x259D8) = (u32) ((M2C_FIELD(temp_r31, u32 *, 0x259D8) * 0x60C98293) + 0x3039);
    return (u16) (M2C_FIELD(temp_r31, u32 *, 0x259D8) % (arg0 + 1));
}

u16 fn_800C1FC4(void *arg0) {
    u16 temp_r3;
    u16 temp_r3_2;
    u16 temp_r3_3;
    u16 var_r31;
    u16 var_r31_2;
    void *temp_r29;

    temp_r29 = &lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48);
    if ((u16) M2C_FIELD(arg0, u16 *, 4) == 1) {
        var_r31 = 0;
loop_6:
        if (var_r31 >= 5U) {
            goto block_15;
        }
        if (0 /* draft: did not compile */) {
            /* draft: did not compile: temp_r3_3 = fn_800C2104(temp_r29 + ((var_r31 * 0x7C) + 0x210)); */
            if (temp_r3_3 != 0) {
                return temp_r3_3;
            }
        }
        var_r31 += 1;
        goto loop_6;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 4) == 2) {
        var_r31_2 = 0;
loop_14:
        if (var_r31_2 >= 3U) {
            goto block_15;
        }
        if (0 /* draft: did not compile */) {
            /* draft: did not compile: temp_r3_2 = fn_800C2104(temp_r29 + ((var_r31_2 * 0x7C) + 0x47C)); */
            if (temp_r3_2 != 0) {
                return temp_r3_2;
            }
        }
        var_r31_2 += 1;
        goto loop_14;
    }
block_15:
    temp_r3 = fn_800BEEE4(arg0);
    if (temp_r3 != 0) {
        return temp_r3;
    }
    return temp_r3;
}

u16 fn_800C2104(void *arg0) {
    u16 temp_r3;
    u16 temp_r3_2;
    void *temp_r28;
    void *temp_r29;

    temp_r28 = &lbl_802CFCA8 + (*M2C_FIELD(arg0, u16 **, 4) * 0x25E48);
    if (((u16) M2C_FIELD(arg0, u16 *, 0) >= 5U) || ((u16 *) M2C_FIELD(arg0, u16 **, 4) == NULL)) {
        return 0xA02DU;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x13) & 1) || (M2C_FIELD(arg0, u16 *, 0x2C) & 1)) {
        return 0U;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 2) != 1) {
        return 0U;
    }
    temp_r3_2 = fn_800C10A0(0, 1, M2C_FIELD(arg0, s32 *, 0x34), 0, M2C_FIELD(M2C_FIELD(arg0, u16 **, 4), u16 *, 4), M2C_FIELD(M2C_FIELD(arg0, u16 **, 4), u16 *, 0));
    if (temp_r3_2 != 0) {
        return temp_r3_2;
    }
    /* draft: did not compile: temp_r29 = temp_r28 + 0x20000 + M2C_FIELD(arg0, u16 *, 0x38) + 0xBA4; */
    /* draft: did not compile: fn_800C1D74(temp_r29, arg0 + 8, 0xB); */
    M2C_FIELD(temp_r29, s8 *, 0x1C) = (s8) M2C_FIELD(arg0, u32 *, 0x24);
    M2C_FIELD(temp_r29, u8 *, 0xB) = (u8) M2C_FIELD(arg0, u8 *, 0x13);
    M2C_FIELD(temp_r29, u8 *, 0x1D) = (u8) ((u32) M2C_FIELD(arg0, u32 *, 0x24) >> 8U);
    M2C_FIELD(temp_r29, u8 *, 0x1E) = (u8) ((u32) M2C_FIELD(arg0, u32 *, 0x24) >> 0x10U);
    M2C_FIELD(temp_r29, s8 *, 0x1F) = (s8) ((u32) M2C_FIELD(arg0, u32 *, 0x24) >> 0x18U);
    M2C_FIELD(temp_r29, s8 *, 0x1A) = (s8) M2C_FIELD(arg0, u16 *, 0x22);
    M2C_FIELD(temp_r29, s8 *, 0x1B) = (s8) ((s32) M2C_FIELD(arg0, u16 *, 0x22) >> 8);
    /* draft: did not compile: fn_800C1D74(temp_r29 + 0xC, arg0 + 0x14, 0xA); */
    fn_800C05CC(temp_r29, 0);
    temp_r3 = fn_800C11F4(0, 1, M2C_FIELD(arg0, s32 *, 0x34), 0, M2C_FIELD(M2C_FIELD(arg0, u16 **, 4), u16 *, 4), 0, M2C_FIELD(M2C_FIELD(arg0, u16 **, 4), u16 *, 0));
    if (temp_r3 != 0) {
        return temp_r3;
    }
    M2C_FIELD(arg0, u16 *, 2) = 0U;
    return temp_r3;
}

s32 SD_Umount(void *arg0) {
    if (arg0 == NULL) {
        return 0xA00C;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 4) != 1) {
        return 0xA016;
    }
    if (arg0 != (void *) (&lbl_802CFCA8 + (M2C_FIELD(arg0, u16 *, 0) * 0x25E48) + 8)) {
        return 0xA00C;
    }
    return fn_800C2344(arg0);
}

u16 fn_800C2344(void *arg0) { return 0; } /* draft: stub */

#pragma push
#pragma optimize_for_size on
u16 WritePictureSD(void *arg0, u32 arg1, u32 arg2, s32 arg3, void *arg4) {
    s32 sp14;
    u16 temp_r30;

    sp14 = arg3;
    if (arg4 == NULL) {
        return 0xA00CU;
    }
    M2C_FIELD(arg4, s16 *, 0) = 0x2000;
    M2C_FIELD(arg4, s32 *, 4) = 0;
    M2C_FIELD(arg4, u16 *, 2) = 0U;
    if ((arg0 == NULL) || (arg1 == 0U)) {
        M2C_FIELD(arg4, u16 *, 2) = 0xA00CU;
        return 0xA00CU;
    }
    if ((u16) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 4) != 1) {
        M2C_FIELD(arg4, u16 *, 2) = 0xA016U;
        return 0xA016U;
    }
    if ((void *) M2C_FIELD(arg0, void **, 4) != (void *) (&lbl_802CFCA8 + (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0) * 0x25E48) + 8)) {
        M2C_FIELD(arg4, u16 *, 2) = 0xA00CU;
        return 0xA00CU;
    }
    if (arg2 == 0U) {
        return 0U;
    }
    temp_r30 = fn_800C28E4(arg0, arg1, arg2, sp14, arg4);
    M2C_FIELD(arg0, s16 *, 2) = 1;
    if ((u16) M2C_FIELD(arg4, u16 *, 2) == 0) {
        if (temp_r30 != 0) {
            M2C_FIELD(arg4, u16 *, 2) = temp_r30;
        } else {
            M2C_FIELD(arg4, u16 *, 2) = 0U;
        }
    }
    if (temp_r30 != 0) {
        return temp_r30;
    }
    return 0U;
}
#pragma pop
