/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

u32 HandleTrackEvents(u8, u32, s32);
M2C_UNK fn_80118C64(s32);
s8 synthIsFadeOutActive(u8);
s32 fn_80119BBC();
s32 __cvt_fp2unsigned(f32);
f64 Floor(s32, f32);
f64 fn_80156E70(u32, f32, f64, f32, f32, f32, f32);
extern s8 lbl_80350D14;
extern s32 lbl_80350D18;
extern M2C_UNK *lbl_80350D1C;
extern void *lbl_80350D20;
extern void *lbl_80350D24;
extern void *lbl_80350D2C;
extern f32 lbl_803521C0;
extern f32 lbl_803521C4;
extern f32 lbl_803521C8;
extern f64 lbl_803521D0;
extern M2C_UNK lbl_8031F180;
extern M2C_UNK lbl_80320580;
extern M2C_UNK lbl_8032C8C0;
extern s32 lbl_80350D10;
extern s32 lbl_80350D28;
extern M2C_UNK lbl_8032C9C0;
M2C_UNK fn_8012365C();
s32 fn_801239C0();
M2C_UNK fn_80124E00(void *);
M2C_UNK fn_8012CD38(u8, u8, u8);
u32 fn_8012E0B4(u32);
extern M2C_UNK lbl_8032CC00;
extern void *lbl_80350D60;
void *fn_8011E6D4(u16 *);
u8 fn_801230DC(u8, s32, s32, u8, u8, u8);
u8 fn_801239AC(s32);
u16 fn_8012C858(M2C_UNK, u8, u8);
u32 fn_8011E668();
u8 fn_80123AC4(s32);

void fn_80115A3C(u32 arg0);
void fn_80116430(void);
void synthSetBpm(s32 arg0, u8 arg1, s32 arg2);
s32 synthGetTicksPerSecond(void *arg0);
void synthInitPortamento(void *arg0);
s32 fn_801166C8(u8 arg0, u8 arg1, u8 arg2, s32 arg3, s32 *arg4, M2C_UNK arg_sp0);
u8 fn_80116968(s16 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7, M2C_UNK arg_sp0, u8 arg_sp8, u8 arg_spC, u16 arg_sp10, u16 arg_sp14, u32 arg_sp18, u8 arg_sp1C, u8 arg_sp20, s32 arg_sp24);
s32 StartKeymap(s32 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5, u8 arg6, s32 arg7, M2C_UNK arg_sp0, u8 arg_sp8, u8 arg_spC, u16 arg_sp10, u16 arg_sp14, s32 arg_sp18, u8 arg_sp1C, u8 arg_sp20, s32 arg_sp24);
s32 fn_80116F84(u16 arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4, u8 arg5, s32 arg6, s32 arg7, M2C_UNK arg_sp0, u8 arg_sp8, u16 arg_spC, u16 arg_sp10, u8 arg_sp14, s16 arg_sp18, u8 arg_sp1C, s32 arg_sp20);

void fn_80115A3C(u32 arg0) { } /* draft: stub */

void fn_80116430(void) {
    M2C_UNK **temp_r7_7;
    M2C_UNK *var_r7;
    M2C_UNK *var_r7_2;
    M2C_UNK *var_r8;
    s32 var_ctr_2;
    u32 var_r9;
    void *temp_r7;
    void *temp_r7_2;
    void *temp_r7_3;
    void *temp_r7_4;
    void *temp_r7_5;
    void *temp_r7_6;
    u8 var_ctr;
    M2C_UNK **var_r6;

    var_r7 = &lbl_80320580;
    var_r8 = &lbl_8032C8C0;
    lbl_80350D2C = 0;
    var_r9 = 0;
    lbl_80350D28 = 0;
    var_ctr = 8;
    do {
        if (var_r9 == 0) {
            M2C_FIELD(var_r7, void **, 4) = NULL;
            lbl_80350D24 = var_r7;
        } else {
            M2C_FIELD(var_r7, M2C_UNK **, -0x1868) = var_r7;
            M2C_FIELD(var_r7, void **, 4) = (void *) (&lbl_80320580 + ((var_r9 - 1) * 0x1868));
        }
        M2C_FIELD(var_r8, u16 *, 0) = 0xFFFF;
        var_r6 = NULL;
        M2C_FIELD(var_r8, u16 *, 2) = 0xFFFF;
        M2C_FIELD(var_r8, u16 *, 4) = 0xFFFF;
        M2C_FIELD(var_r8, u16 *, 6) = 0xFFFF;
        M2C_FIELD(var_r8, u16 *, 8) = 0xFFFF;
        M2C_FIELD(var_r8, u16 *, 0xA) = 0xFFFF;
        M2C_FIELD(var_r8, u16 *, 0xC) = 0xFFFF;
        M2C_FIELD(var_r8, u16 *, 0xE) = 0xFFFF;
        M2C_FIELD(var_r8, u16 *, 0x10) = 0xFFFF;
        M2C_FIELD(var_r8, u16 *, 0x12) = 0xFFFF;
        M2C_FIELD(var_r8, u16 *, 0x14) = 0xFFFF;
        M2C_FIELD(var_r8, u16 *, 0x16) = 0xFFFF;
        M2C_FIELD(var_r8, u16 *, 0x18) = 0xFFFF;
        M2C_FIELD(var_r8, u16 *, 0x1A) = 0xFFFF;
        M2C_FIELD(var_r7, u8 *, 9) = var_r9;
        var_r9 += 1;
        M2C_FIELD(var_r8, u16 *, 0x1C) = 0xFFFF;
        M2C_FIELD(var_r7, s8 *, 8) = 0;
        var_r7 += 0x1868;
        M2C_FIELD(var_r8, u16 *, 0x1E) = 0xFFFF;
        var_r8 += 0x20;
        var_ctr -= 1;
    } while (var_ctr != 0);
    var_r7_2 = &lbl_8031F180;
    M2C_FIELD((&lbl_80320580 + (var_r9 * 0x1868)), s32 *, -0x1868) = 0;
    lbl_80350D1C = &lbl_8031F180;
    var_ctr_2 = 0x20;
    do {
        M2C_FIELD(var_r7_2, M2C_UNK ***, 4) = var_r6;
        if (var_r6 != NULL) {
            *var_r6 = var_r7_2;
        }
        M2C_FIELD(var_r7_2, M2C_UNK **, 0x18) = var_r7_2;
        temp_r7 = var_r7_2 + 0x14;
        if (var_r7_2 != NULL) {
            M2C_FIELD(var_r7_2, void **, 0) = temp_r7;
        }
        M2C_FIELD(temp_r7, void **, 0x18) = temp_r7;
        /* draft: did not compile: temp_r7_2 = temp_r7 + 0x14; */
        if (temp_r7 != NULL) {
            M2C_FIELD(var_r7_2, void **, 0x14) = temp_r7_2;
        }
        M2C_FIELD(temp_r7_2, void **, 0x18) = temp_r7_2;
        /* draft: did not compile: temp_r7_3 = temp_r7_2 + 0x14; */
        if (temp_r7_2 != NULL) {
            M2C_FIELD(temp_r7, void **, 0x14) = temp_r7_3;
        }
        M2C_FIELD(temp_r7_3, void **, 0x18) = temp_r7_3;
        /* draft: did not compile: temp_r7_4 = temp_r7_3 + 0x14; */
        if (temp_r7_3 != NULL) {
            M2C_FIELD(temp_r7_2, void **, 0x14) = temp_r7_4;
        }
        M2C_FIELD(temp_r7_4, void **, 0x18) = temp_r7_4;
        /* draft: did not compile: temp_r7_5 = temp_r7_4 + 0x14; */
        if (temp_r7_4 != NULL) {
            M2C_FIELD(temp_r7_3, void **, 0x14) = temp_r7_5;
        }
        M2C_FIELD(temp_r7_5, void **, 0x18) = temp_r7_5;
        /* draft: did not compile: temp_r7_6 = temp_r7_5 + 0x14; */
        if (temp_r7_5 != NULL) {
            M2C_FIELD(temp_r7_4, void **, 0x14) = temp_r7_6;
        }
        M2C_FIELD(temp_r7_6, void **, 0x18) = temp_r7_6;
        /* draft: did not compile: temp_r7_7 = temp_r7_6 + 0x14; */
        if (temp_r7_6 != NULL) {
            M2C_FIELD(temp_r7_5, M2C_UNK ***, 0x14) = temp_r7_7;
        }
        var_r6 = temp_r7_7;
        /* draft: did not compile: var_r7_2 = temp_r7_7 + 0x14; */
        var_ctr_2 -= 1;
    } while (var_ctr_2 != 0);
    M2C_FIELD(temp_r7_6, s32 *, 0x14) = 0;
    lbl_80350D10 = 0;
}

void synthSetBpm(s32 arg0, u8 arg1, s32 arg2) {
    u8 var_r4;

    var_r4 = arg1;
    if (var_r4 == 0xFF) {
        var_r4 = 8;
    }
    *(&lbl_8032C9C0 + ((var_r4 << 6) & 0x3FC0) + ((arg2 * 4) & 0x3FC)) = (arg0 * 8 * 0x600) / 240;
}

s32 synthGetTicksPerSecond(void *arg0) {
    u8 temp_r0;
    s32 var_r4;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x122);
    var_r4 = 8;
    if (temp_r0 != 0xFF) {
        var_r4 = temp_r0;
    }
    return *(&lbl_8032C9C0 + (var_r4 << 6) + (M2C_FIELD(arg0, u8 *, 0x123) * 4));
}

void synthInitPortamento(void *arg0) {
    s32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0x114) & 0;
    if (((((M2C_FIELD(arg0, s32 *, 0x118)) & 0x20000) ^ 0) | (temp_r5 ^ 0)) == 0) {
        if ((u8) M2C_FIELD(arg0, u8 *, 0x131) == 1) {
            if (((((M2C_FIELD(arg0, s32 *, 0x118)) & 0x1000) ^ 0) | (temp_r5 ^ 0)) == 0) {
                M2C_FIELD(arg0, s32 *, 0x13C) = 0;
            } else {
                M2C_FIELD(arg0, s32 *, 0x13C) = (s32) M2C_FIELD(arg0, s32 *, 0x134);
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x13C) = (s32) M2C_FIELD(arg0, s32 *, 0x134);
        }
        M2C_FIELD(arg0, s32 *, 0x138) = (s32) (M2C_FIELD(arg0, u8 *, 0x130) << 0x10);
    }
}

s32 fn_801166C8(u8 arg0, u8 arg1, u8 arg2, s32 arg3, s32 *arg4, M2C_UNK arg_sp0) {
    s8 saved_reg_r26;
    s32 saved_reg_r24;
    s32 temp_r0;
    s8 temp_r3;
    u8 temp_r4;
    s32 temp_r6;
    s32 temp_r6_2;
    u8 var_r23;
    s8 var_r26;
    s32 var_r27;
    s32 var_r30;
    u32 var_r28;
    u8 temp_r5;
    void *var_r24;
    void *var_r25;

    /* draft: did not compile: var_r24 = saved_reg_r24; */
    var_r26 = saved_reg_r26;
    var_r25 = lbl_80350D60;
    var_r23 = 0;
    var_r27 = -1;
    var_r28 = 0U;
    var_r30 = 0;
loop_17:
    if (var_r28 >= (u8) M2C_FIELD(&lbl_8032CC00, u8 *, 0x210)) {
        if ((u32) (var_r27 + 0x10000) != -1U) {
            fn_80124E00(var_r24);
            fn_8012CD38(M2C_FIELD(var_r24, u8 *, 0x121), M2C_FIELD(var_r24, u8 *, 0x122), (u8) M2C_FIELD(var_r24, u16 *, 0x12C));
            *arg4 = 0;
        } else {
            *arg4 = var_r23;
        }
        return var_r27;
    }
    if (((u8) M2C_FIELD(var_r25, u8 *, 0x11C) == 0) && ((u32) (M2C_FIELD(var_r25, s32 *, 0xF4) + 0x10000) != -1U) && ((u8) M2C_FIELD(var_r25, u8 *, 0x121) == arg1) && ((u8) M2C_FIELD(var_r25, u8 *, 0x122) == arg2)) {
        temp_r0 = M2C_FIELD(var_r25, s32 *, 0x114);
        temp_r3 = M2C_FIELD(var_r25, s32 *, 0x118);
        var_r23 = !((((temp_r3 & 2) ^ 0) | ((temp_r0 & 0) ^ 0)) != 0) ? var_r23 : 1;
        if (((((temp_r3 & 0x10) ^ 0) | ((temp_r0 & 0) ^ 0)) != 0) && ((((temp_r3 & 8) ^ 8) | ((temp_r0 & 0x100) ^ 0)) != 0) && (fn_8012E0B4(var_r28) != 0U)) {
            if (((u32) (var_r27 + 0x10000) == -1U) && (((0x20002 ^ (0x20002 & M2C_FIELD(var_r25, s32 *, 0x118))) | (0 ^ (0 & M2C_FIELD(var_r25, s32 *, 0x114)))) == 0)) {
                *arg4 = 1;
                return -1;
            }
            temp_r6 = M2C_FIELD(var_r25, u16 *, 0x12C) << 0x10;
            var_r24 = var_r25;
            M2C_FIELD(var_r25, s32 *, 0x138) = (s32) (temp_r6 + (((s8) M2C_FIELD(var_r25, u8 *, 0x12E) << 0x10) / 100));
            M2C_FIELD(var_r25, s8 *, 0x130) = (s8) M2C_FIELD(var_r25, u16 *, 0x12C);
            temp_r5 = M2C_FIELD(var_r25, u8 *, 0x12F);
            M2C_FIELD((s32)var_r25, u16 *, 0x12C) = (u16) (arg0 + ((u8) M2C_FIELD(var_r25, u16 *, 0x12C) - temp_r5));
            M2C_FIELD(var_r25, u8 *, 0x12F) = arg0;
            M2C_FIELD(var_r25, u8 *, 0x12E) = 0U;
            M2C_FIELD(var_r25, s32 *, 0x13C) = 0;
            temp_r4 = M2C_FIELD(var_r25, s32 *, 0x118);
            M2C_FIELD(var_r25, s32 *, 0x118) = (s32) (temp_r4 | 0x20000);
            /* draft: did not compile: fn_8012365C(lbl_80350D60 + var_r30, temp_r4, temp_r5, temp_r6); */
            if ((u32) (var_r27 + 0x10000) == -1U) {
                M2C_FIELD(var_r25, s32 *, 0xEC) = -1;
                M2C_FIELD(var_r25, s32 *, 0xF0) = -1;
                var_r26 = M2C_FIELD(var_r25, s32 *, 0xF4);
                /* draft: did not compile: var_r27 = fn_801239C0(lbl_80350D60 + var_r30, arg3); */
            } else {
                temp_r6_2 = M2C_FIELD(var_r25, s32 *, 0xF4);
                /* draft: did not compile: *(lbl_80350D60 + (((u8) var_r26 * 0x404) + 0xEC)) = temp_r6_2; */
                M2C_FIELD(var_r25, s32 *, 0xF0) = var_r26;
                var_r26 = M2C_FIELD(var_r25, s32 *, 0xF4);
                /* draft: did not compile: fn_801239C0(lbl_80350D60 + var_r30, 0, lbl_80350D60, temp_r6_2); */
            }
            goto block_16;
        }
        goto block_16;
    }
block_16:
    var_r30 += 0x404;
    var_r28 += 1;
    /* draft: did not compile: var_r25 += 0x404; */
    goto loop_17;
}

u8 fn_80116968(s16 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7, M2C_UNK arg_sp0, u8 arg_sp8, u8 arg_spC, u16 arg_sp10, u16 arg_sp14, u32 arg_sp18, u8 arg_sp1C, u8 arg_sp20, s32 arg_sp24) { return 0; } /* draft: stub */

s32 StartKeymap(s32 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5, u8 arg6, s32 arg7, M2C_UNK arg_sp0, u8 arg_sp8, u8 arg_spC, u16 arg_sp10, u16 arg_sp14, s32 arg_sp18, u8 arg_sp1C, u8 arg_sp20, s32 arg_sp24) { return 0; } /* draft: stub */

s32 fn_80116F84(u16 arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4, u8 arg5, s32 arg6, s32 arg7, M2C_UNK arg_sp0, u8 arg_sp8, u16 arg_spC, u16 arg_sp10, u8 arg_sp14, s16 arg_sp18, u8 arg_sp1C, s32 arg_sp20) { return 0; } /* draft: stub */
