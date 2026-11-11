/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK lbl_80350348;
extern s32 lbl_80350E3C;
extern M2C_UNK lbl_80350350;
M2C_UNK salCalcVolume(s32, f32 *, u32, u32, s32, f32, f32, f32);
extern M2C_UNK lbl_801DAA88;
extern M2C_UNK lbl_8033BE10;
extern f32 lbl_80352338;
extern f32 lbl_8035233C;
M2C_UNK salDeactivateVoice(s32);
M2C_UNK salActivateStudio();
M2C_UNK fn_80127154();
M2C_UNK fn_80129C00(void *, s32);
M2C_UNK fn_80129CA8(void *, s32);
M2C_UNK DCStoreRange(s32, s32);
s32 fn_8012F9AC(s32, M2C_UNK *);
M2C_UNK fn_8012F8A4();
M2C_UNK fn_8012F9E4();
M2C_UNK __cvt_fp2unsigned(u32 *, f32, f32);
extern u32 lbl_8032CC00;
extern f32 lbl_80352340;
s32 fn_8012F40C(s32, s32);
M2C_UNK fn_8012F7C8(s32, s32);
extern s32 lbl_80350E6C;
extern s32 lbl_80350E70;
extern s32 lbl_80350E2C;
extern M2C_UNK lbl_80343AF0;
extern M2C_UNK lbl_80343D74;
s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32, u32);
M2C_UNK ARQPostRequest(void *, s32, s32, s32, s32, s32, s32, s32);
M2C_UNK DCFlushRange(void *, M2C_UNK);
s32 fn_800D5118();
u32 fn_800D5120();
M2C_UNK InitStreamBuffers(s32);
void *fn_8012FF68(M2C_UNK);
M2C_UNK fn_8012FF90(void *);
extern s32 lbl_80350E88;
extern s32 lbl_80350E90;
extern u32 lbl_80350E94;
u32 fn_800D6D50();
extern u32 lbl_80350E84;

void fn_8012E5EC(s32 arg0, s32 arg1);
void fn_8012E618(s32 arg0, s32 arg1);
void fn_8012E644(s32 arg0, u8 arg1);
void fn_8012E6A0(s32 arg0, s32 arg1, u32 arg2, f32 farg0, f32 farg1, f32 farg2);
void fn_8012E960(s32 arg0);
void fn_8012E98C(void);
void fn_8012E9AC(void);
void fn_8012E9CC(u8 arg0);
void fn_8012EA00(u8 arg0);
s32 fn_8012EA34(s32 arg0);
void hwFlushStream(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0);
void fn_8012EB68(void);
void fn_8012EB88(void);
void fn_8012EBA8(void);
void fn_8012EBCC(void);
void hwFrq2Pitch(u32 arg0);
void fn_8012EC2C(s32 arg1);
void fn_8012EC50(void **arg0, s32 *arg1);
void fn_8012ECE4(void);
void fn_8012ED04(void *arg0, s32 arg1);
void fn_8012ED88(void);
void fn_8012EDA8(void);
void fn_8012EDAC(void *arg0);
void fn_8012EDC0(void);
s32 fn_8012EDCC(s32 arg0);
s32 fn_8012EDF4(s32 arg0);
void fn_8012EE14(void *arg0);
void fn_8012EEB4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0);
void fn_8012F090(void);
void fn_8012F0A8(s32 arg0, M2C_UNK arg_sp0);
void fn_8012F394(void);
void fn_8012F3B4(s32 arg0, s32 arg1);

void fn_8012E5EC(s32 arg0, s32 arg1) {
    void *temp_r3;

    /* draft: did not compile: temp_r3 = lbl_80350E3C + (arg0 * 0xF4); */
    M2C_FIELD(temp_r3, u16 *, 0xCC) = (u16) *(&lbl_80350348 + ((arg1 * 2) & 0x1FE));
    M2C_FIELD(temp_r3, s32 *, 0x24) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x24) | 0x100);
}

void fn_8012E618(s32 arg0, s32 arg1) {
    void *temp_r3;

    /* draft: did not compile: temp_r3 = lbl_80350E3C + (arg0 * 0xF4); */
    M2C_FIELD(temp_r3, u16 *, 0xCE) = (u16) *(&lbl_80350350 + ((arg1 * 2) & 0x1FE));
    M2C_FIELD(temp_r3, s32 *, 0x24) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x24) | 0x80);
}

void fn_8012E644(s32 arg0, u8 arg1) {
    s32 temp_r5;
    void *temp_r3;
    void *temp_r3_2;

    switch (arg1) {

    case 0:
            temp_r5 = 0xF4;
            temp_r5 *= arg0;
            /* draft: did not compile: temp_r3 = lbl_80350E3C + temp_r5; */
            M2C_FIELD(temp_r3, s32 *, 0xF0) = (s32) (M2C_FIELD(temp_r3, s32 *, 0xF0) | 0x80000000);
            M2C_FIELD((lbl_80350E3C + temp_r5), s16 *, 0xD0) = 0x10;
            M2C_FIELD((temp_r5 + lbl_80350E3C), s16 *, 0xD2) = 0x10;
            return;

        break;

    }
    /* draft: did not compile: temp_r3_2 = lbl_80350E3C + (arg0 * 0xF4); */
    M2C_FIELD(temp_r3_2, s32 *, 0xF0) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0xF0) & 0x7FFFFFFF);
}

void fn_8012E6A0(s32 arg0, s32 arg1, u32 arg2, f32 farg0, f32 farg1, f32 farg2) {
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    f32 sp8;
    f32 var_f1;
    f32 var_f2;
    f32 var_f3;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r6_3;
    void *temp_r31;

    var_f1 = farg0;
    var_f2 = farg1;
    var_f3 = farg2;
    /* draft: did not compile: temp_r31 = lbl_80350E3C + (arg0 * 0xF4); */
    var_f1 = var_f1 < lbl_80352338 ? var_f1 : lbl_80352338;
    if (var_f2 >= lbl_80352338) {
        var_f2 = lbl_80352338;
    }
    if (var_f3 >= lbl_80352338) {
        var_f3 = lbl_80352338;
    }
    salCalcVolume(arg1, &sp8, arg2, (u32) M2C_FIELD(temp_r31, u32 *, 0xF0) >> 0x1FU, M2C_FIELD((&lbl_8033BE10 + (M2C_FIELD(temp_r31, u8 *, 0xEF) * 0xBC)), s32 *, 0x54) == 1, var_f1, var_f2, var_f3);
    temp_r5 = (s32) (lbl_8035233C * spC);
    temp_r4 = (s32) (lbl_8035233C * sp8);
    temp_r6 = (s32) (lbl_8035233C * sp10);
    if (((u8) M2C_FIELD(temp_r31, u8 *, 0xE5) == 0xFF) || ((u16) M2C_FIELD(temp_r31, u16 *, 0x4C) != (u16) temp_r4) || ((u16) M2C_FIELD(temp_r31, u16 *, 0x4E) != (u16) temp_r5) || ((u16) M2C_FIELD(temp_r31, u16 *, 0x50) != (u16) temp_r6)) {
        M2C_FIELD(temp_r31, u16 *, 0x4C) = (u16) temp_r4;
        M2C_FIELD(temp_r31, u16 *, 0x4E) = (u16) temp_r5;
        M2C_FIELD(temp_r31, u16 *, 0x50) = (u16) temp_r6;
        M2C_FIELD(temp_r31, s32 *, 0x24) = (s32) (M2C_FIELD(temp_r31, s32 *, 0x24) | 1);
        M2C_FIELD(temp_r31, u8 *, 0xE5) = 0U;
    }
    temp_r4_2 = (s32) (lbl_8035233C * sp14);
    temp_r5_2 = (s32) (lbl_8035233C * sp18);
    temp_r6_2 = (s32) (lbl_8035233C * sp1C);
    if (((u8) M2C_FIELD(temp_r31, u8 *, 0xE6) == 0xFF) || ((u16) M2C_FIELD(temp_r31, u16 *, 0x52) != (u16) temp_r4_2) || ((u16) M2C_FIELD(temp_r31, u16 *, 0x54) != (u16) temp_r5_2) || ((u16) M2C_FIELD(temp_r31, u16 *, 0x56) != (u16) temp_r6_2)) {
        M2C_FIELD(temp_r31, u16 *, 0x52) = (u16) temp_r4_2;
        M2C_FIELD(temp_r31, u16 *, 0x54) = (u16) temp_r5_2;
        M2C_FIELD(temp_r31, u16 *, 0x56) = (u16) temp_r6_2;
        M2C_FIELD(temp_r31, s32 *, 0x24) = (s32) (M2C_FIELD(temp_r31, s32 *, 0x24) | 2);
        M2C_FIELD(temp_r31, u8 *, 0xE6) = 0U;
    }
    temp_r5_3 = (s32) (lbl_8035233C * sp24);
    temp_r4_3 = (s32) (lbl_8035233C * sp20);
    temp_r6_3 = (s32) (lbl_8035233C * sp28);
    if (((u8) M2C_FIELD(temp_r31, u8 *, 0xE7) == 0xFF) || ((u16) M2C_FIELD(temp_r31, u16 *, 0x58) != (u16) temp_r4_3) || ((u16) M2C_FIELD(temp_r31, u16 *, 0x5A) != (u16) temp_r5_3) || ((u16) M2C_FIELD(temp_r31, u16 *, 0x5C) != (u16) temp_r6_3)) {
        M2C_FIELD(temp_r31, u16 *, 0x58) = (u16) temp_r4_3;
        M2C_FIELD(temp_r31, u16 *, 0x5A) = (u16) temp_r5_3;
        M2C_FIELD(temp_r31, u16 *, 0x5C) = (u16) temp_r6_3;
        M2C_FIELD(temp_r31, s32 *, 0x24) = (s32) (M2C_FIELD(temp_r31, s32 *, 0x24) | 4);
        M2C_FIELD(temp_r31, u8 *, 0xE7) = 0U;
    }
    if (M2C_FIELD(temp_r31, u32 *, 0xF0) & 0x80000000) {
        temp_r0 = (arg2 >> 0xFU) & 0x1FE;
        M2C_FIELD(temp_r31, s16 *, 0xD2) = (s16) (0x20 - *(&lbl_801DAA88 + temp_r0));
        M2C_FIELD(temp_r31, u16 *, 0xD0) = (u16) *(&lbl_801DAA88 + temp_r0);
        M2C_FIELD(temp_r31, s32 *, 0x24) = (s32) (M2C_FIELD(temp_r31, s32 *, 0x24) | 0x200);
    }
}

void fn_8012E960(s32 arg0) {
    salDeactivateVoice(lbl_80350E3C + (arg0 * 0xF4));
}

void fn_8012E98C(void) {
    salActivateStudio();
}

void fn_8012E9AC(void) {
    fn_80127154();
}

void fn_8012E9CC(u8 arg0) {
    s32 temp_r5;

    temp_r5 = arg0 * 0xBC;
    fn_80129C00(&lbl_8033BE10 + temp_r5, temp_r5);
}

void fn_8012EA00(u8 arg0) {
    s32 temp_r5;

    temp_r5 = arg0 * 0xBC;
    fn_80129CA8(&lbl_8033BE10 + temp_r5, temp_r5);
}

s32 fn_8012EA34(s32 arg0) {
    s32 temp_r3_2;
    s32 temp_r5;
    s32 var_r3;
    u32 temp_r4_2;
    u8 temp_r0;
    void *temp_r3;
    void *temp_r4;

    var_r3 = arg0;
    temp_r5 = var_r3 * 0xF4;
    /* draft: did not compile: temp_r4 = lbl_80350E3C + temp_r5; */
    if ((u8) M2C_FIELD(temp_r4, u8 *, 0xEC) != 2) {
        return 0;
    }
    temp_r0 = M2C_FIELD(temp_r4, u8 *, 0x90);
    if ((s32) temp_r0 != 3) {
        if ((s32) temp_r0 < 3) {
            if ((s32) temp_r0 < 2) {
                if ((s32) temp_r0 < 0) {
                    return var_r3;
                }
                goto block_8;
            }
            return M2C_FIELD(temp_r4, s32 *, 0x20) - ((u32) M2C_FIELD(temp_r4, u32 *, 0x78) >> 1U);
        }
        if ((s32) temp_r0 < 6) {
block_8:
            /* draft: did not compile: temp_r3 = lbl_80350E3C + temp_r5; */
            temp_r3_2 = M2C_FIELD(temp_r3, s32 *, 0x20);
            temp_r4_2 = temp_r3_2 & 0xF;
            var_r3 = ((u32) (temp_r3_2 - (M2C_FIELD(temp_r3, s32 *, 0x78) * 2)) >> 4U) * 0xE;
            if (temp_r4_2 >= 2U) {
                return (temp_r4_2 + var_r3) - 2;
            }
            /* Duplicate return node #13. Try simplifying control flow for better match */
            return var_r3;
        }
        return var_r3;
    }
    return M2C_FIELD(temp_r4, s32 *, 0x20) - M2C_FIELD(temp_r4, u32 *, 0x78);
}

void hwFlushStream(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0) {
    M2C_UNK sp8;
    s32 temp_r26;
    s8 temp_r29;
    s32 temp_r31;

    temp_r31 = fn_8012F9AC(arg3, &sp8);
    temp_r29 = arg0 + (arg1 & 0xFFFFFFE0);
    temp_r26 = (arg2 + (arg1 & 0x1F) + 0x1F) & 0xFFFFFFE0;
    DCStoreRange(temp_r29, temp_r26);
    fn_8012EEB4((long)(temp_r29), (long)(temp_r31 + (arg1 & 0xFFFFFFE0)), (long)(temp_r26), (long)(1), (long)(arg4), (long)(arg5), (long)(0));
}

void fn_8012EB68(void) {
    fn_8012F8A4();
}

void fn_8012EB88(void) {
    fn_8012F9E4();
}

void fn_8012EBA8(void) {
    fn_8012F9AC((long)(0), (long *)(0));
}

void fn_8012EBCC(void) {

}

void hwFrq2Pitch(u32 arg0) {
    __cvt_fp2unsigned(&lbl_8032CC00, (lbl_80352340 * (f32) arg0) / (f32) lbl_8032CC00, lbl_80352340);
}

void fn_8012EC2C(s32 arg1) {
    fn_8012F0A8((long)(arg1), (long)(0));
}

void fn_8012EC50(void **arg0, s32 *arg1) {
    s32 temp_r3_2;
    s32 var_r4;
    u32 temp_r0;
    u32 temp_r3;

    temp_r3 = M2C_FIELD(*arg0, u32 *, 4);
    temp_r0 = temp_r3 >> 0x18U;
    var_r4 = temp_r3 & 0xFFFFFF;
    switch ((s32) temp_r0) {                        /* irregular */
    case 3:
        break;
    default:
        temp_r3_2 = (var_r4 + 0xD) / 7;
        var_r4 = (((u32) ((var_r4 + 0xD) - temp_r3_2) >> 1U) + temp_r3_2) & 0xFFFFFFF8;
        break;
    case 2:
        var_r4 *= 2;
        break;
    }
    *arg1 = fn_8012F40C(*arg1, var_r4);
}

void fn_8012ECE4(void) {
    fn_8012F3B4((long)(0), (long)(0));
}

void fn_8012ED04(void *arg0, s32 arg1) {
    s32 temp_r3_2;
    s32 var_r5;
    u32 temp_r0;
    u32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u32 *, 4);
    temp_r0 = temp_r3 >> 0x18U;
    var_r5 = temp_r3 & 0xFFFFFF;
    switch ((s32) temp_r0) {                        /* irregular */
    case 3:
        break;
    default:
        temp_r3_2 = (var_r5 + 0xD) / 7;
        var_r5 = (((u32) ((var_r5 + 0xD) - temp_r3_2) >> 1U) + temp_r3_2) & 0xFFFFFFF8;
        break;
    case 2:
        var_r5 *= 2;
        break;
    }
    fn_8012F7C8(arg1, var_r5);
}

void fn_8012ED88(void) {
    fn_8012F090();
}

void fn_8012EDA8(void) {

}

void fn_8012EDAC(void *arg0) {
    lbl_80350E6C = M2C_FIELD(arg0, s32 *, 0);
    lbl_80350E70 = M2C_FIELD(arg0, s32 *, 4);
}

void fn_8012EDC0(void) {
    lbl_80350E2C = 0;
}

s32 fn_8012EDCC(s32 arg0) {
    void *temp_r3;

    /* draft: did not compile: temp_r3 = lbl_80350E3C + (arg0 * 0xF4); */
    if ((u8) M2C_FIELD(temp_r3, u8 *, 0xEC) == 0) {
        return -1;
    }
    return M2C_FIELD(temp_r3, s32 *, 0xE8);
}

s32 fn_8012EDF4(s32 arg0) {
    return M2C_FIELD((lbl_80350E3C + (arg0 * 0xF4)), u8 *, 0xEC) == 1;
}

#pragma push
#pragma peephole off
void fn_8012EE14(void *arg0) {
    M2C_UNK (*temp_r12)(s32);
    M2C_UNK *var_r31;
    M2C_UNK *var_r30;
    u32 var_r29;

    var_r31 = &lbl_80343AF0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0xC) == 1U) {
        var_r31 = &lbl_80343D74;
    }
    var_r29 = 0U;
    var_r30 = var_r31;
    do {
        if (arg0 == var_r30) {
            temp_r12 = M2C_FIELD(var_r30, M2C_UNK (**)(s32), 0x20);
            if (temp_r12 != NULL) {
                temp_r12(M2C_FIELD(var_r30, s32 *, 0x24));
            }
        }
        var_r29 += 1;
        var_r30 += 0x28;
    } while (var_r29 < 0x10U);
    M2C_FIELD(var_r31, u8 *, 0x281) = (u8) (M2C_FIELD(var_r31, u8 *, 0x281) - 1);
}
#pragma pop

void fn_8012EEB4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8012F090(void) {
    do {

    } while ((u8) M2C_FIELD(&lbl_80343AF0, u8 *, 0x281) != 0);
}

void fn_8012F0A8(s32 arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8012F394(void) {
    fn_800D5118();
}

void fn_8012F3B4(s32 arg0, s32 arg1) {
    u32 temp_r31;
    u32 temp_r3;
    u32 var_r0;

    if (arg0 != 0) {
        temp_r31 = (arg1 + 0x1F) & 0xFFFFFFE0;
        temp_r3 = fn_800D6D50();
        var_r0 = temp_r31;
        if (temp_r31 < temp_r3) {
            var_r0 = temp_r3;
        }
        lbl_80350E84 = var_r0;
    }
    lbl_80350E88 = arg0;
}
