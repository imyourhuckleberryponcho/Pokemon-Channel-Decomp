/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80081350(M2C_UNK);
extern M2C_UNK lbl_801D9FC0;
extern M2C_UNK lbl_802CE6D8;
extern s32 lbl_803506D0;
extern M2C_UNK lbl_801D9FD4;
extern M2C_UNK lbl_801D9FFC;
extern s32 lbl_803506D4;
extern M2C_UNK lbl_801DA030;

void fn_800915CC(void);
s32 fn_800915F0(s32 arg0);
s32 fn_8009162C(s32 arg0);
s32 fn_80091664(s32 arg0);
u32 fn_800916D4(s32 arg0);
void fn_80091710(void);
s32 fn_800917CC(void);
s32 fn_80091810(u32 arg0, s32 arg1, u32 arg2);
s32 fn_80091890(s32 arg0);
s32 fn_800918EC(void *arg0);
s32 fn_80091954(void);
s32 fn_800919A8(void);
s32 fn_80091A08(void);
s32 fn_80091A54(s32 arg0);
s32 fn_80091AD0(void);
u32 fn_80091AD8(s32 arg0);
s32 fn_80091B5C(void);
s32 fn_80091B64(s32 arg0);
s32 fn_80091BC0(void);
s32 fn_80091C14(void);
s32 fn_80091C6C(s32 arg0);
s32 fn_80091CC8(void);
s32 fn_80091D1C(void);
s32 fn_80091D74(s32 arg0);
s32 fn_80091DD0(void);
s32 fn_80091E24(void);
s32 fn_80091E7C(s32 arg0);
s32 fn_80091F3C(void);
s32 fn_80091F90(s32 arg0);
s32 fn_80092000(void);
s32 fn_80092088(void);
void MiniScore_GetScore();

void fn_800915CC(void) {
    fn_80081350(0x1A4);
}

s32 fn_800915F0(s32 arg0) {
    return 0;
}

s32 fn_8009162C(s32 arg0) {
    return 0;
}

s32 fn_80091664(s32 arg0) {
    s32 var_r29;

    var_r29 = 0;
loop_1:
    if ((u32) *(&lbl_801D9FC0 + (arg0 * 4)) == fn_8009162C(var_r29)) {
        return var_r29;
    }
    var_r29 += 1;
    if (var_r29 >= 6) {
        return -1;
    }
    goto loop_1;
}

u32 fn_800916D4(s32 arg0) {
    s32 temp_r4;

    if ((arg0 < 0) || (arg0 > 9)) {
        return 0U;
    }
    temp_r4 = *(&lbl_802CE6D8 + (arg0 * 4));
    return (u32) ((-1 - temp_r4) | (temp_r4 + 1)) >> 0x1FU;
}

void fn_80091710(void) {
    s32 temp_r3;
    s32 temp_r3_2;

    M2C_FIELD(&lbl_802CE6D8, s32 *, 0) = -1;
    M2C_FIELD(&lbl_802CE6D8, s32 *, 4) = -1;
    M2C_FIELD(&lbl_802CE6D8, s32 *, 8) = -1;
    M2C_FIELD(&lbl_802CE6D8, s32 *, 0xC) = -1;
    M2C_FIELD(&lbl_802CE6D8, s32 *, 0x10) = -1;
    M2C_FIELD(&lbl_802CE6D8, s32 *, 0x14) = -1;
    M2C_FIELD(&lbl_802CE6D8, s32 *, 0x18) = -1;
    M2C_FIELD(&lbl_802CE6D8, s32 *, 0x1C) = -1;
    M2C_FIELD(&lbl_802CE6D8, s32 *, 0x20) = -1;
    M2C_FIELD(&lbl_802CE6D8, s32 *, 0x24) = -1;
    M2C_FIELD(&lbl_802CE6D8, s32 *, 0) = fn_80091664((long)(0));
    M2C_FIELD(&lbl_802CE6D8, s32 *, 0x20) = fn_80091664((long)(1));
    M2C_FIELD(&lbl_802CE6D8, s32 *, 0x24) = fn_80091664((long)(2));
    temp_r3 = fn_80091664((long)(3));
    M2C_FIELD(&lbl_802CE6D8, s32 *, 4) = temp_r3;
    M2C_FIELD(&lbl_802CE6D8, s32 *, 8) = temp_r3;
    temp_r3_2 = fn_80091664((long)(4));
    M2C_FIELD(&lbl_802CE6D8, s32 *, 0xC) = temp_r3_2;
    M2C_FIELD(&lbl_802CE6D8, s32 *, 0x10) = temp_r3_2;
    M2C_FIELD(&lbl_802CE6D8, s32 *, 0x14) = temp_r3_2;
}

s32 fn_800917CC(void) {
    s32 temp_r0;
    s32 temp_r3;
    void *var_r4;

    var_r4 = &lbl_802CE6D8 + (lbl_803506D0 * 4);
loop_2:
    if ((s32) lbl_803506D0 >= 9) {
        return -1;
    }
    temp_r0 = M2C_FIELD(var_r4, s32 *, 4);
    /* draft: did not compile: var_r4 += 4; */
    temp_r3 = lbl_803506D0 + 1;
    lbl_803506D0 = temp_r3;
    if (temp_r0 == -1) {
        goto loop_2;
    }
    return temp_r3;
}

s32 fn_80091810(u32 arg0, s32 arg1, u32 arg2) {
    s32 var_r6;
    u32 temp_r3;
    u32 temp_r6;
    u32 temp_r6_2;
    u32 var_r6_2;
    u32 var_r6_3;
    u8 temp_r0;
    u8 temp_r0_2;

    temp_r0 = (u8) (arg0 >> 8U);
    if (temp_r0 < arg2) {
        /* draft: did not compile: var_r6_2 = *(arg1 + temp_r0) << 0x18; */
    } else {
        var_r6_2 = 0x20000000;
    }
    temp_r3 = (u32) (arg0 >> 8U) >> 8U;
    temp_r6 = var_r6_2 >> 8U;
    if ((u8) temp_r3 < arg2) {
        /* draft: did not compile: var_r6_3 = temp_r6 | (*(arg1 + (u8) temp_r3) << 0x18); */
    } else {
        var_r6_3 = temp_r6 | 0x20000000;
    }
    temp_r0_2 = (u8) (temp_r3 >> 8U);
    temp_r6_2 = var_r6_3 >> 8U;
    if (temp_r0_2 < arg2) {
        /* draft: did not compile: var_r6 = temp_r6_2 | (*(arg1 + temp_r0_2) << 0x18); */
    } else {
        var_r6 = temp_r6_2 | 0x20000000;
    }
    return var_r6;
}

s32 fn_80091890(s32 arg0) {
    if ((arg0 < 1) || (arg0 > 5)) {
        return 0;
    }
    return fn_800915F0(lbl_802CE6D8) + ((arg0 - 1) * 8);
}

s32 fn_800918EC(void *arg0) {
    s32 temp_r0;

    if ((u32) (((u32) M2C_FIELD(arg0, u32 *, 0) >> 8U) + 0xFFD30000) == 0x2D2DU) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 6) + (M2C_FIELD(arg0, u8 *, 7) << 8);
        if ((temp_r0 > 0) && (temp_r0 < 6) && ((s32) (temp_r0 * 0xA) == (s32) (M2C_FIELD(arg0, u8 *, 3) + ((M2C_FIELD(arg0, u8 *, 4) << 8) + (M2C_FIELD(arg0, u8 *, 5) << 0x10))))) {
            return 1;
        }
    }
    return 0;
}

s32 fn_80091954(void) {
    void *temp_r3;

    /* draft: did not compile: temp_r3 = fn_80091890((long)(0)); */
    if ((temp_r3 == NULL) || (fn_800918EC((void *)(0)) != 0)) {
        return -1;
    }
    return M2C_FIELD(temp_r3, u8 *, 6) + (M2C_FIELD(temp_r3, u8 *, 7) << 8);
}

s32 fn_800919A8(void) {
    void *temp_r3;

    /* draft: did not compile: temp_r3 = fn_80091890((long)(0)); */
    if ((temp_r3 == NULL) || (fn_800918EC((void *)(0)) != 0)) {
        return -1;
    }
    return M2C_FIELD(temp_r3, u8 *, 3) + ((M2C_FIELD(temp_r3, u8 *, 4) << 8) + (M2C_FIELD(temp_r3, u8 *, 5) << 0x10));
}

s32 fn_80091A08(void) {
    s32 *temp_r3;

    /* draft: did not compile: temp_r3 = fn_80091890((long)(0)); */
    if ((temp_r3 == NULL) || (fn_800918EC((void *)(0)) != 0)) {
        return 0;
    }
    return *temp_r3 & 0xFFFFFF00;
}

s32 fn_80091A54(s32 arg0) {
    s32 temp_r3;
    s32 var_r0;
    void *temp_r4;

    if ((arg0 < 1) || (arg0 > 3)) {
        return -1;
    }
    var_r0 = -1;
    /* draft: did not compile: temp_r4 = fn_800915F0(M2C_FIELD(&lbl_802CE6D8, s32 *, 4)) + ((arg0 - 1) * 2); */
    temp_r3 = M2C_FIELD(temp_r4, u8 *, 6) + (M2C_FIELD(temp_r4, u8 *, 7) << 8);
    if (temp_r3 != 0) {
        var_r0 = temp_r3;
    }
    return var_r0;
}

s32 fn_80091AD0(void) {
    return 0;
}

u32 fn_80091AD8(s32 arg0) {
    u32 temp_r3_2;
    u32 var_r4;
    void *temp_r3;

    if ((arg0 < 1) || (arg0 > 3)) {
        return -1U;
    }
    var_r4 = -1U;
    /* draft: did not compile: temp_r3 = fn_800915F0(M2C_FIELD(&lbl_802CE6D8, s32 *, 8)) + ((arg0 - 1) * 2); */
    temp_r3_2 = M2C_FIELD(temp_r3, u8 *, 0xC) + (M2C_FIELD(temp_r3, u8 *, 0xD) << 8);
    if (temp_r3_2 != -1U) {
        var_r4 = temp_r3_2;
    }
    return var_r4;
}

s32 fn_80091B5C(void) {
    return 0;
}

s32 fn_80091B64(s32 arg0) {
    if ((arg0 < 1) || (arg0 > 6)) {
        return 0;
    }
    return fn_800915F0(M2C_FIELD(&lbl_802CE6D8, s32 *, 0xC)) + ((arg0 - 1) * 6);
}

s32 fn_80091BC0(void) {
    u8 temp_r0;
    void *temp_r3;

    /* draft: did not compile: temp_r3 = fn_80091B64((long)(0)); */
    if ((temp_r3 == NULL) || (temp_r0 = M2C_FIELD(temp_r3, u8 *, 0), ((temp_r0 < 1U) != 0)) || (temp_r0 > 6U)) {
        return -1;
    }
    return M2C_FIELD(temp_r3, u8 *, 1) + (M2C_FIELD(temp_r3, u8 *, 2) << 8);
}

s32 fn_80091C14(void) {
    u8 temp_r0;
    void *temp_r3;

    /* draft: did not compile: temp_r3 = fn_80091B64((long)(0)); */
    if ((temp_r3 == NULL) || (temp_r0 = M2C_FIELD(temp_r3, u8 *, 0), ((temp_r0 < 1U) != 0)) || (temp_r0 > 6U)) {
        return 0;
    }
    return 0;
}

s32 fn_80091C6C(s32 arg0) {
    if ((arg0 < 1) || (arg0 > 6)) {
        return 0;
    }
    return fn_800915F0(M2C_FIELD(&lbl_802CE6D8, s32 *, 0x10)) + ((arg0 + 5) * 6);
}

s32 fn_80091CC8(void) {
    u8 temp_r0;
    void *temp_r3;

    /* draft: did not compile: temp_r3 = fn_80091C6C((long)(0)); */
    if ((temp_r3 == NULL) || (temp_r0 = M2C_FIELD(temp_r3, u8 *, 0), ((temp_r0 < 1U) != 0)) || (temp_r0 > 6U)) {
        return -1;
    }
    return M2C_FIELD(temp_r3, u8 *, 1) + (M2C_FIELD(temp_r3, u8 *, 2) << 8);
}

s32 fn_80091D1C(void) {
    u8 temp_r0;
    void *temp_r3;

    /* draft: did not compile: temp_r3 = fn_80091C6C((long)(0)); */
    if ((temp_r3 == NULL) || (temp_r0 = M2C_FIELD(temp_r3, u8 *, 0), ((temp_r0 < 1U) != 0)) || (temp_r0 > 6U)) {
        return 0;
    }
    return 0;
}

s32 fn_80091D74(s32 arg0) {
    if ((arg0 < 1) || (arg0 > 6)) {
        return 0;
    }
    return fn_800915F0(M2C_FIELD(&lbl_802CE6D8, s32 *, 0x14)) + ((arg0 + 0xB) * 6);
}

s32 fn_80091DD0(void) {
    u8 temp_r0;
    void *temp_r3;

    /* draft: did not compile: temp_r3 = fn_80091D74((long)(0)); */
    if ((temp_r3 == NULL) || (temp_r0 = M2C_FIELD(temp_r3, u8 *, 0), ((temp_r0 < 1U) != 0)) || (temp_r0 > 6U)) {
        return -1;
    }
    return M2C_FIELD(temp_r3, u8 *, 1) + (M2C_FIELD(temp_r3, u8 *, 2) << 8);
}

s32 fn_80091E24(void) {
    u8 temp_r0;
    void *temp_r3;

    /* draft: did not compile: temp_r3 = fn_80091D74((long)(0)); */
    if ((temp_r3 == NULL) || (temp_r0 = M2C_FIELD(temp_r3, u8 *, 0), ((temp_r0 < 1U) != 0)) || (temp_r0 > 6U)) {
        return 0;
    }
    return 0;
}

s32 fn_80091E7C(s32 arg0) { return 0; } /* draft: stub */

s32 fn_80091F3C(void) {
    void *temp_r3;

    /* draft: did not compile: temp_r3 = fn_800915F0(M2C_FIELD(&lbl_802CE6D8, s32 *, 0x24)); */
    if ((u8) M2C_FIELD(temp_r3, u8 *, 0xF) == 0x36) {
        return 0;
    }
    return 0;
}

s32 fn_80091F90(s32 arg0) {
    if ((arg0 < 1) || (arg0 > 3)) {
        return 0;
    }
    return fn_800915F0(M2C_FIELD(&lbl_802CE6D8, s32 *, 0x20)) + ((((arg0 + (lbl_803506D4 * 4)) - 1) * 7) + 0x116);
}

s32 fn_80092000(void) {
    u8 temp_r3;
    u8 temp_r4;
    u8 temp_r7;
    void *temp_r3_2;

    /* draft: did not compile: temp_r3_2 = fn_80091F90((long)(0)); */
    if ((temp_r3_2 == NULL) || ((u8) M2C_FIELD(temp_r3_2, u8 *, 0) == 0xFF)) {
        return -1;
    }
    temp_r7 = M2C_FIELD(temp_r3_2, u8 *, 1);
    temp_r4 = M2C_FIELD(temp_r3_2, u8 *, 2);
    temp_r3 = M2C_FIELD(temp_r3_2, u8 *, 3);
    return (temp_r7 & 0xF) + ((((s32) temp_r7 >> 4) * 0xA) + (((temp_r4 & 0xF) + (((s32) temp_r4 >> 4) * 0xA)) * 0x64) + (((temp_r3 & 0xF) + (((s32) temp_r3 >> 4) * 0xA)) * 0x2710));
}

s32 fn_80092088(void) {
    void *temp_r3;

    /* draft: did not compile: temp_r3 = fn_80091F90((long)(0)); */
    if ((temp_r3 == NULL) || ((u8) M2C_FIELD(temp_r3, u8 *, 0) == 0xFF)) {
        return -1;
    }
    return 0;
}

void MiniScore_GetScore() { } /* draft: stub */
