/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 OSGetTick();
s32 fn_800B11A4(s32, s32, s32, M2C_UNK, void *);
M2C_UNK fn_800B0A60(M2C_UNK, M2C_UNK);
u16 fn_800B0B1C(u16);
u16 fn_800B2EF4();
M2C_UNK fn_800B09DC();
u16 fn_800B0B14();
u16 fn_800B6D20(s32, s32, s32, s32, s32);
u16 fn_800B1090(s32);
u16 fn_800B1110(s32);
extern s16 lbl_8035082A;
extern s16 lbl_8035082C;
extern s32 lbl_80350830;
M2C_UNK fn_800C1C18(M2C_UNK *);
M2C_UNK fn_800C1C84();
extern M2C_UNK lbl_801DA7E0;
extern M2C_UNK lbl_802CFCA8;
extern s16 lbl_80350810;
extern s16 lbl_80350812;
extern s16 lbl_80350814;
extern s16 lbl_80350816;
extern u16 lbl_80350818;
extern u16 lbl_8035081A;
extern u16 lbl_8035081C;
extern u16 lbl_8035081E;
extern s32 lbl_80350820;
extern u16 lbl_80350824;
extern u16 lbl_80350828;
extern s32 lbl_80350838;
extern s8 lbl_80350826;
M2C_UNK fn_800C1D34(void *, u8 *);
M2C_UNK fn_800C1D74();
s32 fn_800C1E70();
M2C_UNK fn_800C1F00(u16);
s32 fn_800C1F48(M2C_UNK, u16);
M2C_UNK fn_800C349C();
extern u8 lbl_8022BB00;
extern u16 lbl_80350834;
extern u16 lbl_80350836;
M2C_UNK fn_800C05CC(void *, M2C_UNK);
u16 fn_800C1354(s32 *, u32 *, M2C_UNK, s32, s32);

s32 fn_800B6DA0(s32 arg0, s32 arg1, s32 arg2, u32 arg3, void *arg4);
void fn_800B6E28(void);
u16 SD_Term(u16 arg0);
void fn_800B6EB0(void);
u16 fn_800B6ED0(s32 arg0, s32 arg1, u8 arg2);
u16 fn_800B6F60(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5);
u16 fn_800B702C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5);
u16 fn_800B70F8(s32 arg0, u8 arg1);
u16 fn_800B71A4(s32 arg0, u8 arg1);
u16 SD_Format(s32 arg0, u16 arg1, u16 arg2);
u16 fn_800B72E8(u32 arg0, u16 arg1, u16 arg2, u16 arg3, u16 arg4, u16 arg5);
s32 fn_800B7A04(u32 *arg0, u16 arg1);
u16 fn_800B7EF0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4, u16 arg5);
u16 fn_800B8520(s32 arg0, s32 arg1, u16 arg2);
u16 fn_800B86A8(u8 *arg0, s32 arg1, u16 arg2, u16 arg3);
u16 fn_800B8800(s32 arg0, s32 arg1, s32 arg2, u16 arg3);
s32 fn_800B8B3C(u16 arg0, s32 *arg1, u32 *arg2, s32 arg3, s32 arg4);
u16 fn_800B8C7C(s32 *arg0, u16 arg1, u16 arg2);

s32 fn_800B6DA0(s32 arg0, s32 arg1, s32 arg2, u32 arg3, void *arg4) {
    s32 sp20;
    s32 sp1C;
    u32 sp14;
    s32 sp10;
    s32 sp8;
    s32 temp_r31;

    sp8 = arg0;
    sp10 = arg2;
    sp14 = arg3;
    if (sp14 != 0U) {
        return 0xA00C;
    }
    sp20 = OSGetTick();
    temp_r31 = fn_800B11A4(sp8, arg1, sp10, 0, arg4);
    sp1C = OSGetTick();
    M2C_FIELD(arg4, s32 *, 4) = (s32) (arg1 << 9);
    return temp_r31;
}

void fn_800B6E28(void) {
    fn_800B0A60(0, 0);
}

u16 SD_Term(u16 arg0) {
    u16 temp_r3;

    if (arg0 > 1U) {
        return 0xA00CU;
    }
    temp_r3 = fn_800B0B1C(arg0);
    if (temp_r3 != 0) {
        return temp_r3;
    }
    return fn_800B2EF4();
}

void fn_800B6EB0(void) {
    fn_800B09DC();
}

u16 fn_800B6ED0(s32 arg0, s32 arg1, u8 arg2) {
    s32 spC;
    s32 sp8;
    u16 temp_r3;
    u16 var_r31;

    sp8 = arg0;
    spC = arg1;
    if ((s32) (arg2 & 0xF00) != 0x100) {
        var_r31 = 0xA00C;
    } else if ((u16) arg2 < 2U) {
        temp_r3 = fn_800B0B1C(arg2);
        var_r31 = temp_r3;
        if (temp_r3 == 0) {
            /* draft: did not compile: var_r31 = fn_800B6E28(); */
        }
    } else {
        var_r31 = 0xA00C;
    }
    return var_r31;
}

u16 fn_800B6F60(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5) {
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    u16 temp_r27;
    u16 var_r29;
    u16 var_r31;

    sp8 = arg0;
    spC = arg1;
    sp10 = arg2;
    sp14 = arg3;
    sp18 = arg4;
    if ((s32) (arg5 & 0xF00) != 0x100) {
        var_r31 = 0xA00C;
    } else {
        var_r29 = 0;
        temp_r27 = fn_800B0B14();
        if ((u16) arg5 < 2U) {
            if ((u16) arg5 != temp_r27) {
                var_r29 = fn_800B0B1C(arg5);
            }
        } else {
            var_r29 = 0xA00C;
        }
        var_r31 = var_r29;
        if (var_r29 == 0) {
            /* draft: did not compile: var_r31 = fn_800B6DA0(sp8, spC, sp10, sp14, sp18); */
        }
    }
    return var_r31;
}

u16 fn_800B702C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5) {
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    u16 temp_r27;
    u16 var_r29;
    u16 var_r31;

    sp8 = arg0;
    spC = arg1;
    sp10 = arg2;
    sp14 = arg3;
    sp18 = arg4;
    if ((s32) (arg5 & 0xF00) != 0x100) {
        var_r31 = 0xA00C;
    } else {
        var_r29 = 0;
        temp_r27 = fn_800B0B14();
        if ((u16) arg5 < 2U) {
            if ((u16) arg5 != temp_r27) {
                var_r29 = fn_800B0B1C(arg5);
            }
        } else {
            var_r29 = 0xA00C;
        }
        var_r31 = var_r29;
        if (var_r29 == 0) {
            var_r31 = fn_800B6D20(sp8, spC, sp10, sp14, sp18);
        }
    }
    return var_r31;
}

u16 fn_800B70F8(s32 arg0, u8 arg1) {
    s32 sp8;
    u16 temp_r27;
    u16 var_r29;
    u16 var_r31;

    sp8 = arg0;
    if ((s32) (arg1 & 0xF00) != 0x100) {
        var_r31 = 0xA00C;
    } else {
        var_r29 = 0;
        temp_r27 = fn_800B0B14();
        if ((u16) arg1 < 2U) {
            if ((u16) arg1 != temp_r27) {
                var_r29 = fn_800B0B1C(arg1);
            }
        } else {
            var_r29 = 0xA00C;
        }
        var_r31 = var_r29;
        if (var_r29 == 0) {
            var_r31 = fn_800B1090(sp8);
        }
    }
    return var_r31;
}

u16 fn_800B71A4(s32 arg0, u8 arg1) {
    s32 sp8;
    u16 temp_r27;
    u16 var_r29;
    u16 var_r31;

    sp8 = arg0;
    if ((u32) (arg1 & 0xF00) == 0x100) {
        var_r29 = 0;
        temp_r27 = fn_800B0B14();
        if ((u16) arg1 < 2U) {
            if ((u16) arg1 != temp_r27) {
                var_r29 = fn_800B0B1C(arg1);
            }
        } else {
            var_r29 = 0xA00C;
        }
        var_r31 = var_r29;
        if (var_r29 == 0) {
            var_r31 = fn_800B1110(sp8);
        }
    } else {
        var_r31 = 0xA00C;
    }
    return var_r31;
}

u16 SD_Format(s32 arg0, u16 arg1, u16 arg2) {
    s32 sp10;
    u16 spC;
    s32 sp8;
    u16 temp_r3;

    sp8 = arg0;
    spC = arg1;
    sp10 = 0;
    if (arg2 > 1U) {
        return 0xA00CU;
    }
    lbl_8035082A = 1;
    lbl_80350830 = 0x3D40;
    lbl_8035082C = 8;
    temp_r3 = fn_800B72E8(sp8, spC, 0, 1, 1, arg2);
    if (temp_r3 != 0) {
        return temp_r3;
    }
    return 0U;
}

u16 fn_800B72E8(u32 arg0, u16 arg1, u16 arg2, u16 arg3, u16 arg4, u16 arg5) { return 0; } /* draft: stub */

s32 fn_800B7A04(u32 *arg0, u16 arg1) {
    s32 temp_r28;
    s32 temp_r29;
    s32 temp_r30;
    s32 var_r31;
    u32 var_r28;
    u32 var_r29;
    u32 var_r30;

    temp_r29 = lbl_80350824 * 0xFFF6;
    if (arg1 == 1) {
        var_r29 = temp_r29 + (lbl_80350828 * ((lbl_80350828 + 0x221) / (u16) lbl_80350828));
        if ((u32) ((lbl_80350828 + 0x221) / (u16) lbl_80350828) == (u32) ((u32) (lbl_80350828 + 0x220) / (u16) lbl_80350828)) {
            var_r29 += lbl_80350828;
        }
    } else {
        var_r29 = temp_r29 + 0x221;
    }
    if ((u32) *arg0 >= var_r29) {
        return 0xA034;
    }
    temp_r30 = lbl_80350824 * 0xFF4;
    if (arg1 == 1) {
        var_r30 = temp_r30 + (lbl_80350828 * ((u32) (lbl_80350828 + 0x39) / (u16) lbl_80350828));
        if ((u32) ((lbl_80350828 + 0x39) / (u16) lbl_80350828) == (u32) ((u32) (lbl_80350828 + 0x38) / (u16) lbl_80350828)) {
            var_r30 += lbl_80350828;
        }
    } else {
        var_r30 = temp_r30 + 0x39;
    }
    temp_r28 = lbl_80350824 * 0xFF5;
    if (arg1 == 1) {
        var_r28 = temp_r28 + (lbl_80350828 * ((lbl_80350828 + 0x41) / (u16) lbl_80350828));
        if ((u32) ((u32) (lbl_80350828 + 0x41) / (u16) lbl_80350828) == (u32) ((u32) (lbl_80350828 + 0x40) / (u16) lbl_80350828)) {
            var_r28 += lbl_80350828;
        }
    } else {
        var_r28 = temp_r28 + 0x41;
    }
    if ((u32) *arg0 >= var_r28) {
        lbl_80350826 = 1;
        var_r31 = 0x10;
    } else if ((u32) *arg0 > var_r30) {
        lbl_80350826 = 2;
        var_r31 = 0xC;
        *arg0 = var_r30;
    } else {
        lbl_80350826 = 2;
        var_r31 = 0xC;
    }
    lbl_80350820 = ((u32) *arg0 / (u16) lbl_80350824) + 1;
    lbl_8035081E = (u16) ((u32) (((lbl_80350820 + 1) * var_r31) + 0xFFF) >> 0xCU);
    lbl_8035081A = 1;
loop_20:
    lbl_8035081C = (lbl_8035081E * 2) + 0x20;
    if (arg1 == 1) {
        lbl_80350818 = lbl_80350828 - (lbl_8035081C % lbl_80350828);
        if ((u16) lbl_80350818 == 1) {
            lbl_80350818 = lbl_80350828;
        } else {
            lbl_80350818 -= lbl_8035081A;
            lbl_80350818 += lbl_80350828;
        }
    } else {
        lbl_80350818 = 0;
    }
    lbl_8035081C += lbl_8035081A;
    if ((u32) *arg0 < (u32) (lbl_80350818 + lbl_8035081C)) {
        return 0xA01E;
    }
    lbl_80350820 = 1;
    lbl_80350820 += ((u32) ((*arg0 - lbl_80350818) - lbl_8035081C) / (u16) lbl_80350824);
    if ((u32) lbl_80350820 < 1U) {
        return 0xA01E;
    }
    if ((u16) lbl_8035081E == (u16) ((u32) (((lbl_80350820 + 1) * var_r31) + 0xFFF) >> 0xCU)) {
        return 0;
    }
    if ((u16) lbl_8035081E < (u16) ((u32) (((lbl_80350820 + 1) * var_r31) + 0xFFF) >> 0xCU)) {
        if (arg1 == 1) {
            lbl_80350818 += lbl_80350828;
            lbl_80350820 = ((u32) ((*arg0 - lbl_80350818) - lbl_8035081C) / (u16) lbl_80350824);
            lbl_80350820 += 1;
            if ((u16) lbl_8035081E == (u16) ((u32) (((lbl_80350820 + 1) * var_r31) + 0xFFF) >> 0xCU)) {
                return 0;
            }
            if ((u16) lbl_80350824 == 1) {
                lbl_80350818 += lbl_80350828;
                lbl_80350820 = 1;
                lbl_80350820 += ((u32) ((*arg0 - lbl_80350818) - lbl_8035081C) / (u16) lbl_80350824);
                if ((u16) lbl_8035081E == (u16) ((u32) (((lbl_80350820 + 1) * var_r31) + 0xFFF) >> 0xCU)) {
                    return 0;
                }
            }
            return 0xA01E;
        }
        lbl_80350820 = (u32) ((*arg0 - lbl_80350818) - lbl_8035081C) / (u16) lbl_80350824;
        *arg0 -= lbl_80350828;
        if ((u16) lbl_8035081E == (u16) ((u32) (((lbl_80350820 + 1) * var_r31) + 0xFFF) >> 0xCU)) {
            return 0;
        }
        if ((u16) lbl_80350824 == 1) {
            lbl_80350820 = (u32) ((*arg0 - lbl_80350818) - lbl_8035081C) / (u16) lbl_80350824;
            *arg0 -= lbl_80350828;
            if ((u16) lbl_8035081E == (u16) ((u32) (((lbl_80350820 + 1) * var_r31) + 0xFFF) >> 0xCU)) {
                return 0;
            }
        }
        return 0xA01E;
    }
    lbl_8035081E -= 1;
    if ((u16) lbl_8035081E == 0) {
        return 0xA01E;
    }
    goto loop_20;
}

u16 fn_800B7EF0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4, u16 arg5) { return 0; } /* draft: stub */

u16 fn_800B8520(s32 arg0, s32 arg1, u16 arg2) { return 0; } /* draft: stub */

u16 fn_800B86A8(u8 *arg0, s32 arg1, u16 arg2, u16 arg3) { return 0; } /* draft: stub */

u16 fn_800B8800(s32 arg0, s32 arg1, s32 arg2, u16 arg3) {
    void *sp14;
    s32 temp_r5;
    u16 temp_r3;
    u16 temp_r3_2;
    u16 var_r26;
    u32 temp_r5_2;
    void *temp_r29;
    void *temp_r31;

    temp_r29 = &lbl_802CFCA8 + (arg3 * 0x25E48);
    /* draft: did not compile: sp14 = temp_r29 + 0x20BA4; */
    M2C_FIELD(temp_r29, s8 *, 0x20D62) = 0;
    M2C_FIELD(temp_r29, s8 *, 0x20D63) = (s8) ((s32) (lbl_80350818 % (lbl_80350836 * lbl_80350834)) / (s32) lbl_80350836);
    M2C_FIELD(temp_r29, u8 *, 0x20D64) = (u8) (M2C_FIELD(temp_r29, u8 *, 0x20D64) | ((((lbl_80350818 % (lbl_80350836 * lbl_80350834)) % lbl_80350836) + 1) & 0x3F));
    temp_r5 = (s32) lbl_80350818 / (s32) (lbl_80350836 * lbl_80350834);
    M2C_FIELD(temp_r29, u8 *, 0x20D64) = (u8) (M2C_FIELD(temp_r29, u8 *, 0x20D64) & 0xC0);
    M2C_FIELD(temp_r29, u8 *, 0x20D64) = (u8) (M2C_FIELD(temp_r29, u8 *, 0x20D64) & 0x3F);
    M2C_FIELD(temp_r29, u8 *, 0x20D64) = (u8) (M2C_FIELD(temp_r29, u8 *, 0x20D64) | ((((s32) temp_r5 >> 8) << 6) & 0xC0));
    M2C_FIELD(temp_r29, s8 *, 0x20D65) = (s8) temp_r5;
    /* draft: did not compile: temp_r31 = temp_r29 + 0x20D62; */
    if ((u32) (arg0 - lbl_80350818) < 0x7FA8U) {
        M2C_FIELD(temp_r31, s8 *, 4) = 1;
    } else if ((u32) (arg0 - lbl_80350818) < 0x10000U) {
        M2C_FIELD(temp_r31, s8 *, 4) = 4;
    } else {
        M2C_FIELD(temp_r31, s8 *, 4) = 6;
    }
    M2C_FIELD(temp_r31, s8 *, 5) = (s8) ((u32) ((arg0 - 1) % (lbl_80350836 * lbl_80350834)) / (u16) lbl_80350836);
    M2C_FIELD(temp_r31, u8 *, 6) = (u8) (M2C_FIELD(temp_r31, u8 *, 6) | (((((arg0 - 1) % (lbl_80350836 * lbl_80350834)) % lbl_80350836) + 1) & 0x3F));
    temp_r5_2 = (u32) (arg0 - 1) / (u32) (lbl_80350836 * lbl_80350834);
    M2C_FIELD(temp_r31, u8 *, 6) = (u8) (M2C_FIELD(temp_r31, u8 *, 6) & 0xC0);
    M2C_FIELD(temp_r31, u8 *, 6) = (u8) (M2C_FIELD(temp_r31, u8 *, 6) | ((((s32) (u16) temp_r5_2 >> 8) << 6) & 0xC0));
    M2C_FIELD(temp_r31, s8 *, 7) = (s8) temp_r5_2;
    M2C_FIELD(temp_r29, s8 *, 0x20D6A) = (s8) lbl_80350818;
    M2C_FIELD(temp_r29, s8 *, 0x20D6B) = (s8) ((s32) lbl_80350818 >> 8);
    M2C_FIELD(temp_r31, u8 *, 6) = (u8) (M2C_FIELD(temp_r31, u8 *, 6) & 0x3F);
    M2C_FIELD(temp_r29, s8 *, 0x20D6C) = (s8) ((s32) lbl_80350818 >> 0x10);
    M2C_FIELD(temp_r29, s8 *, 0x20D6D) = (s8) ((s32) lbl_80350818 >> 0x18);
    M2C_FIELD(temp_r29, s8 *, 0x20D6E) = (s8) (arg0 - lbl_80350818);
    M2C_FIELD(temp_r29, u8 *, 0x20D6F) = (u8) ((u32) (arg0 - lbl_80350818) >> 8U);
    M2C_FIELD(temp_r29, u8 *, 0x20D70) = (u8) ((u32) (arg0 - lbl_80350818) >> 0x10U);
    M2C_FIELD(temp_r29, s8 *, 0x20D71) = (s8) ((u32) (arg0 - lbl_80350818) >> 0x18U);
    M2C_FIELD(temp_r29, s8 *, 0x20DA2) = 0x55;
    M2C_FIELD(temp_r29, s8 *, 0x20DA3) = 0xAA;
    if ((u16) lbl_80350816 != 0) {
        /* draft: did not compile: temp_r3_2 = fn_800B8C7C(arg1, arg2, arg3); */
        if (temp_r3_2 != 0) {
            return temp_r3_2;
        }
        /* draft: did not compile: fn_800C1C84(temp_r29 + 0x20BA4, 0, 0x4000); */
        var_r26 = 0;
loop_12:
        if ((s32) var_r26 >= (s32) (lbl_80350816 - 1)) {
            goto block_13;
        }
        /* draft: did not compile: temp_r3 = fn_800B8C7C(arg1, arg2, arg3); */
        if (temp_r3 != 0) {
            return temp_r3;
        }
        var_r26 = var_r26 + 1;
        goto loop_12;
    }
block_13:
    return 0U;
}

#pragma push
#pragma optimize_for_size on
s32 fn_800B8B3C(u16 arg0, s32 *arg1, u32 *arg2, s32 arg3, s32 arg4) {
    u32 sp20;
    s32 sp1C;
    s32 sp18;
    u16 sp8;
    s8 var_r31;

    sp8 = arg0;
    if (fn_800C1354((long *)(&sp1C), (unsigned long *)(&sp20), (long)(1), (long)(0), (long)(0)) != 0) {
        return 0xA00E;
    }
    if (fn_800C1354(&sp18, &sp20, 2, arg3, arg4) != 0) {
        return 0xA00E;
    }
    if (sp8 == 1) {
        *arg1 = sp1C;
    } else {
        *arg1 = sp18;
    }
    *arg2 = sp1C + sp18;
    sp20 = *arg2;
    var_r31 = 0;
loop_13:
    if (var_r31 >= 9U) {
        goto block_14;
    }
    if (M2C_FIELD((&lbl_801DA7E0 + ((var_r31 * 8) & 0x7FFF8)), u32 *, 0x60) == -1U) {
        return 0xA00E;
    }
    if ((u32) M2C_FIELD((&lbl_801DA7E0 + ((var_r31 * 8) & 0x7FFF8)), u32 *, 0x60) >= sp20) {
        lbl_80350834 = M2C_FIELD((&lbl_801DA7E0 + ((var_r31 * 8) & 0x7FFF8)), u16 *, 0x64);
        lbl_80350836 = M2C_FIELD((&lbl_801DA7E0 + ((var_r31 * 8) & 0x7FFF8)), u16 *, 0x66);
block_14:
        return 0;
    }
    var_r31 += 1;
    goto loop_13;
}
#pragma pop

u16 fn_800B8C7C(s32 *arg0, u16 arg1, u16 arg2) {
    s32 sp14;
    s16 sp12;
    s16 sp10;
    u16 spE;
    u16 spC;
    u16 temp_r3;
    void *temp_r31;

    spC = arg1;
    spE = arg2;
    temp_r31 = &lbl_802CFCA8 + (spE * 0x25E48);
    sp10 = 0x2000;
    sp12 = 0;
    sp14 = 0;
    if (spC == 1) {
        /* draft: did not compile: temp_r3 = fn_800B702C(temp_r31 + 0x20BA4, 0x20, *arg0, 0, &sp10, M2C_FIELD(temp_r31, u16 *, 2)); */
        if (temp_r3 != 0) {
            return temp_r3;
        }
        *arg0 += 0x20;
        return 0U;
    }
    return 0xA047U;
}
