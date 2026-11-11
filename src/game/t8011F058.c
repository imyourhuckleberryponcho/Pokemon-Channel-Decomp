/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80118418(void *);
s32 fn_8011E4D4(u16, M2C_UNK *);
M2C_UNK fn_8012E0F0(u8, u16, M2C_UNK *, s32, s32, s32, s32, u8);
extern M2C_UNK lbl_80339EE0;
M2C_UNK fn_8012DE38();
M2C_UNK sndConvertTicks(u32 *, void *);
extern M2C_UNK lbl_802AAB80;
void *fn_8011E60C();
M2C_UNK fn_8012E2F4(u8, s16 *, M2C_UNK, u16);
extern M2C_UNK lbl_802AB94C;
extern f32 lbl_80352238;
extern f32 lbl_8035223C;
extern f32 lbl_80352240;
extern f64 lbl_80352250;
u32 fn_8012C858(u32, u8, u8, s32);
s32 __cvt_fp2unsigned(M2C_UNK *, M2C_UNK *, f32);
extern M2C_UNK lbl_802AAB9C;
extern M2C_UNK lbl_802AB54C;
extern f32 lbl_80352258;
s32 fn_8012512C(s32, f64);
M2C_UNK fn_801253F0(void *, M2C_UNK *);
s32 fn_8012DE90(u32);
M2C_UNK fn_8011E8E0(void *, void *);
u32 fn_80124D8C(void *, u32, s32, s32, u16);
M2C_UNK fn_8012CD38(u8, u8, u8);
u16 fn_8012DCEC();
M2C_UNK fn_8012CB8C();

void fn_8011F058(void *arg0, void *arg1);
void fn_8011F254(void *arg0, void *arg1);
void DoSetPitch(void *arg0);
void fn_8011F570(void *arg0, u32 *arg1);
void fn_8011F7C8(void *arg0, void *arg1);
void fn_8011F8F4(void *arg0, void *arg1, M2C_UNK arg_sp0);
void fn_8011FB70(void *arg0, void *arg1);
void fn_8011FC0C(void *arg0, void *arg1);
void fn_8011FCA8(void *arg0, void *arg1);
void fn_8011FDDC(void *arg0, void *arg1, M2C_UNK arg_sp0);
void fn_8011FF0C(void *arg0, void *arg1);
void fn_80120048(void *arg0, void *arg1, M2C_UNK arg_sp0);
void fn_801201E4(void *arg0, void *arg1);
void fn_801202E8(void *arg0, void *arg1);
void fn_801203EC(void *arg0, void *arg1);
void fn_801204F0(void *arg0, void *arg1);
void fn_801205F4(void *arg0, void *arg1);
void fn_801206F8(void *arg0, void *arg1);
void fn_801207FC(void *arg0, void *arg1);
void fn_80120900(void *arg0, void *arg1);
void fn_80120A04(void *arg0, void *arg1);
void fn_80120B08(void *arg0, void *arg1);
void fn_80120C0C(void *arg0, void *arg1);
void fn_80120D10(void *arg0, void *arg1);
void fn_80120E14(void *arg0, void *arg1);

#pragma push
#pragma peephole off
void fn_8011F058(void *arg0, void *arg1) {
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r5_2;
    s32 temp_r8;
    u16 temp_r31;
    u32 temp_r0;
    u32 temp_r0_2;
    int temp_r0_3;
    u8 temp_r4;
    u8 temp_r5;

    temp_r31 = (u16) ((u32) M2C_FIELD(arg1, u32 *, 0) >> 8U);
    if (fn_8011E4D4(temp_r31, &lbl_80339EE0) == 0) {
        temp_r0 = (u32) M2C_FIELD(arg1, u32 *, 0) >> 0x18U;
        switch ((s32) temp_r0) {                    /* irregular */
        case 0:
            M2C_FIELD(&lbl_80339EE0, u32 *, 0xC) = (u32) M2C_FIELD(arg1, u32 *, 4);
            break;
        case 1:
            temp_r0_2 = M2C_FIELD(arg1, u32 *, 4);
            temp_r4 = 0x7F - ((u32) M2C_FIELD(arg0, u32 *, 0x154) >> 0x10U);
            temp_r4_2 = (temp_r0_2 * temp_r4) / 127;
            M2C_FIELD(&lbl_80339EE0, u32 *, 0xC) = (u32) ((u32) (((u32) ((temp_r0_2 * temp_r4) - temp_r4_2) >> 1U) + temp_r4_2) >> 6U);
            break;
        case 2:
            temp_r0_3 = M2C_FIELD(arg1, u32 *, 4);
            temp_r5 = (u8) ((u32) M2C_FIELD(arg0, u32 *, 0x154) >> 0x10U);
            temp_r4_3 = (temp_r0_3 * temp_r5) / 127;
            M2C_FIELD(&lbl_80339EE0, u32 *, 0xC) = (u32) ((u32) (((u32) ((temp_r0_3 * temp_r5) - temp_r4_3) >> 1U) + temp_r4_3) >> 6U);
            break;
        default:
            M2C_FIELD(&lbl_80339EE0, u32 *, 0xC) = 0U;
            break;
        }
        if ((u32) M2C_FIELD(&lbl_80339EE0, u32 *, 0xC) >= (u32) M2C_FIELD(&lbl_80339EE0, u32 *, 0x10)) {
            M2C_FIELD(&lbl_80339EE0, u32 *, 0xC) = (u32) (M2C_FIELD(&lbl_80339EE0, u32 *, 0x10) - 1);
        }
        temp_r4_4 = M2C_FIELD(arg0, s32 *, 0x114);
        temp_r5_2 = M2C_FIELD(arg0, s32 *, 0x118);
        temp_r8 = M2C_FIELD(arg0, s32 *, 0xF4);
        fn_8012E0F0((u8) temp_r8, temp_r31, &lbl_80339EE0, (((temp_r5_2 & 0x100) ^ 0) | ((temp_r4_4 & 0) ^ 0)) == 0, (((u32) M2C_FIELD(arg0, u32 *, 0x110) >> 0xFU) & ~0xFF000000) | (M2C_FIELD(arg0, u8 *, 0x10C) << 0x18), temp_r8, (((temp_r5_2 & 0) ^ 0) | ((temp_r4_4 & 0x800) ^ 0)) == 0, M2C_FIELD(arg0, u8 *, 0x193));
        M2C_FIELD(arg0, s32 *, 0x124) = (s32) M2C_FIELD(&lbl_80339EE0, s32 *, 0);
        if ((u32) (M2C_FIELD(arg0, s32 *, 0x128) + 0x10000) != -1U) {
            DoSetPitch(arg0);
        }
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (M2C_FIELD(arg0, s32 *, 0x118) | 0x20);
        fn_80118418(arg0);
    }
}
#pragma pop

void fn_8011F254(void *arg0, void *arg1) {
    u32 sp8;
    s8 var_r4;
    u32 temp_r0;
    u32 temp_r0_2;

    if (((u32) M2C_FIELD(arg1, u32 *, 0) >> 0x18U) & 3) {
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (M2C_FIELD(arg0, s32 *, 0x118) | 0x4000);
    } else {
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (M2C_FIELD(arg0, s32 *, 0x118) & ~0x4000);
        M2C_FIELD(arg0, s32 *, 0x114) = (s32) (M2C_FIELD(arg0, s32 *, 0x114) & ~0);
    }
    sp8 = (u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U;
    if (((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U) & 1) {
        fn_8012DE38(&sp8);
    } else {
        sndConvertTicks(&sp8, arg0);
    }
    if (sp8 != 0) {
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (M2C_FIELD(arg0, s32 *, 0x118) | 0x2000);
        M2C_FIELD(arg0, u32 *, 0x144) = sp8;
        temp_r0 = M2C_FIELD(arg1, u32 *, 0);
        temp_r0_2 = temp_r0 >> 0x10U;
        var_r4 = (s8) (temp_r0 >> 8U);
        if (var_r4 < 0) {
            if ((s8) temp_r0_2 < 0) {
                M2C_FIELD(arg0, s8 *, 0x141) = (s8) -temp_r0_2;
            } else {
                M2C_FIELD(arg0, s8 *, 0x141) = (s8) temp_r0_2;
            }
            M2C_FIELD(arg0, s8 *, 0x140) = (s8) -var_r4;
            M2C_FIELD(arg0, u32 *, 0x148) = (u32) ((u32) M2C_FIELD(arg0, u32 *, 0x144) >> 1U);
            return;
        }
        if ((s8) temp_r0_2 < 0) {
            if (var_r4 == 0) {
                M2C_FIELD(arg0, s8 *, 0x141) = (s8) -temp_r0_2;
                M2C_FIELD(arg0, u32 *, 0x148) = (u32) ((u32) M2C_FIELD(arg0, u32 *, 0x144) >> 1U);
            } else {
                M2C_FIELD(arg0, s8 *, 0x141) = (s8) (0x64 - temp_r0_2);
                var_r4 -= 1;
                M2C_FIELD(arg0, u32 *, 0x148) = 0U;
            }
        } else {
            M2C_FIELD(arg0, s8 *, 0x141) = (s8) temp_r0_2;
            M2C_FIELD(arg0, u32 *, 0x148) = 0U;
        }
        M2C_FIELD(arg0, s8 *, 0x140) = var_r4;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x118) = (s32) (M2C_FIELD(arg0, s32 *, 0x118) & ~0x2000);
    M2C_FIELD(arg0, s32 *, 0x114) = (s32) (M2C_FIELD(arg0, s32 *, 0x114) & ~0);
}

void DoSetPitch(void *arg0) {
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r7_2;
    s32 var_ctr;
    s32 var_ctr_2;
    s32 var_r10;
    s32 var_r7;
    s32 var_r8;
    u8 var_r9;
    u16 *var_r4;
    u16 *var_r4_2;
    u16 temp_r5_2;
    u16 temp_r5_3;
    u32 temp_r0;
    u32 temp_r5;
    u32 temp_r6;
    u32 temp_r6_2;
    u32 temp_r6_3;
    u32 temp_r6_4;
    u32 temp_r7;
    u32 temp_r8;

    temp_r5 = M2C_FIELD(arg0, u32 *, 0x124);
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x128) & 0xFFFFFF;
    temp_r7 = temp_r5 & 0xFFFFFF;
    if (temp_r7 == temp_r6) {
        M2C_FIELD(arg0, s16 *, 0x12C) = (s16) (temp_r5 >> 0x18U);
        M2C_FIELD(arg0, s8 *, 0x12E) = 0;
        return;
    }
    if (temp_r7 < temp_r6) {
        temp_r6_2 = (u32) (temp_r6 << 0xC) / temp_r7;
        var_r10 = 0;
        var_ctr = 0xB;
loop_4:
        if ((u32) (temp_r6_2 >> 0xCU) >= (u32) (1 << (var_r10 + 1))) {
            var_r10 += 1;
            var_ctr -= 1;
            if (var_ctr != 0) {
                goto loop_4;
            }
        }
        var_r9 = 0xB;
        temp_r8 = temp_r6_2 / (u32) (1 << var_r10);
        /* draft: did not compile: var_r4 = &lbl_802AAB80 + 0x16; */
loop_7:
        if (temp_r8 <= (u16) *var_r4) {
            var_r4 -= 2;
            var_r9 -= 1;
            goto loop_7;
        }
        temp_r7_2 = var_r9 * 2;
        M2C_FIELD(arg0, s16 *, 0x12C) = (s16) ((temp_r5 >> 0x18U) + ((var_r10 * 0xC) + var_r9));
        temp_r5_2 = *(&lbl_802AAB80 + temp_r7_2);
        M2C_FIELD(arg0, s8 *, 0x12E) = (s8) ((u32) ((temp_r8 - temp_r5_2) * 0x64) / (u32) (M2C_FIELD((&lbl_802AAB80 + temp_r7_2), u16 *, 2) - temp_r5_2));
        return;
    }
    temp_r6_3 = (u32) (temp_r7 << 0xC) / temp_r6;
    var_r8 = 0;
    var_ctr_2 = 0xB;
loop_11:
    if ((u32) (temp_r6_3 >> 0xCU) >= (u32) (1 << (var_r8 + 1))) {
        var_r8 += 1;
        var_ctr_2 -= 1;
        if (var_ctr_2 != 0) {
            goto loop_11;
        }
    }
    var_r7 = 0xB;
    temp_r6_4 = temp_r6_3 / (u32) (1 << var_r8);
    /* draft: did not compile: var_r4_2 = &lbl_802AAB80 + 0x16; */
loop_14:
    if (temp_r6_4 <= (u16) *var_r4_2) {
        var_r4_2 -= 2;
        var_r7 -= 1;
        goto loop_14;
    }
    temp_r0 = temp_r5 >> 0x18U;
    temp_r4 = var_r7 + (var_r8 * 0xC);
    if (temp_r4 > (s32) temp_r0) {
        M2C_FIELD(arg0, s8 *, 0x12E) = 0;
        M2C_FIELD(arg0, s16 *, 0x12C) = 0;
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x12C) = (s16) (temp_r0 - temp_r4);
    temp_r0_2 = var_r7 * 2;
    temp_r5_3 = *(&lbl_802AAB80 + temp_r0_2);
    M2C_FIELD(arg0, s8 *, 0x12E) = (s8) ((u32) ((temp_r5_3 - temp_r6_4) * 0x64) / (u32) (M2C_FIELD((&lbl_802AAB80 + temp_r0_2), u16 *, 2) - temp_r5_3));
}

void fn_8011F570(void *arg0, u32 *arg1) {
    s16 sp12;
    s16 sp10;
    s16 spE;
    s16 spC;                                        /* compiler-managed */
    s16 spA;
    s16 sp8;                                        /* compiler-managed */
    f32 var_f1;
    s32 temp_r0;
    s32 temp_r6_4;
    s32 temp_r8_2;
    u16 temp_r3_2;
    u16 temp_r5;
    u16 temp_r6;
    u16 temp_r6_2;
    u16 temp_r6_3;
    u16 temp_r8;
    void *temp_r3;

    temp_r3 = fn_8011E60C((u16) ((u32) *arg1 >> 8U));
    if (temp_r3 != NULL) {
        if (((u32) *arg1 >> 0x18U) == 0) {
            temp_r6 = M2C_FIELD(temp_r3, u16 *, 0);
            sp8 = (((s32) temp_r6 >> 8) & ~0xFFFF00) | ((temp_r6 << 8) & 0xFFFF00);
            temp_r6_2 = M2C_FIELD(temp_r3, u16 *, 2);
            spA = (((s32) temp_r6_2 >> 8) & ~0xFFFF00) | ((temp_r6_2 << 8) & 0xFFFF00);
            temp_r6_3 = M2C_FIELD(temp_r3, u16 *, 4);
            spC = (((s32) temp_r6_3 >> 8) & ~0xFFFF00) | ((temp_r6_3 << 8) & 0xFFFF00);
            temp_r3_2 = M2C_FIELD(temp_r3, u16 *, 6);
            spE = (((s32) temp_r3_2 >> 8) & ~0xFFFF00) | ((temp_r3_2 << 8) & 0xFFFF00);
            fn_8012E2F4((u8) M2C_FIELD(arg0, s32 *, 0xF4), &sp8, 0, temp_r6_3);
        } else {
            temp_r8 = M2C_FIELD(temp_r3, u16 *, 8);
            var_f1 = *(&lbl_802AB94C + (((s32) (u16) ((((s32) temp_r8 >> 8) & ~0xFFFF00) | ((temp_r8 << 8) & 0xFFFF00)) >> 5) * 4));
            temp_r0 = ((((((u8) M2C_FIELD(temp_r3, u16 *, 0) & ~0xFF00) | ((M2C_FIELD(temp_r3, u8 *, 1) << 8) & 0xFF00)) & ~0xFF0000) | (((u8) M2C_FIELD(temp_r3, u16 *, 2) << 0x10) & 0xFF0000)) & ~0xFF000000) | (M2C_FIELD(temp_r3, u8 *, 3) << 0x18);
            sp8 = temp_r0;
            spC = ((((((u8) M2C_FIELD(temp_r3, u16 *, 4) & ~0xFF00) | ((M2C_FIELD(temp_r3, u8 *, 5) << 8) & 0xFF00)) & ~0xFF0000) | (((u8) M2C_FIELD(temp_r3, u16 *, 6) << 0x10) & 0xFF0000)) & ~0xFF000000) | (M2C_FIELD(temp_r3, u8 *, 7) << 0x18);
            sp10 = (s16) (lbl_80352238 * var_f1);
            temp_r5 = M2C_FIELD(temp_r3, u16 *, 0xA);
            sp12 = (((s32) temp_r5 >> 8) & ~0xFFFF00) | ((temp_r5 << 8) & 0xFFFF00);
            temp_r6_4 = (((((M2C_FIELD(temp_r3, u8 *, 0x10) & ~0xFF00) | ((M2C_FIELD(temp_r3, u8 *, 0x11) << 8) & 0xFF00)) & ~0xFF0000) | ((M2C_FIELD(temp_r3, u8 *, 0x12) << 0x10) & 0xFF0000)) & ~0xFF000000) | (M2C_FIELD(temp_r3, u8 *, 0x13) << 0x18);
            temp_r8_2 = (((((M2C_FIELD(temp_r3, u8 *, 0xC) & ~0xFF00) | ((M2C_FIELD(temp_r3, u8 *, 0xD) << 8) & 0xFF00)) & ~0xFF0000) | ((M2C_FIELD(temp_r3, u8 *, 0xE) << 0x10) & 0xFF0000)) & ~0xFF000000) | (M2C_FIELD(temp_r3, u8 *, 0xF) << 0x18);
            if ((u32) (temp_r8_2 + 0x80000000) != 0U) {
                var_f1 = (f32) lbl_80352250;
                sp8 = temp_r0 + (s32) (lbl_8035223C * (f32) M2C_FIELD(arg0, u32 *, 0x158) * (f32) temp_r8_2);
            }
            if ((u32) (temp_r6_4 + 0x80000000) != 0U) {
                var_f1 = (f32) lbl_80352250;
                spC += (s32) (lbl_80352240 * (f32) M2C_FIELD(arg0, u8 *, 0x12F) * (f32) temp_r6_4);
            }
            fn_8012E2F4((u8) M2C_FIELD(arg0, s32 *, 0xF4), (s16 *) &sp8, 1, M2C_BITWISE(u16, var_f1));
        }
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (M2C_FIELD(arg0, s32 *, 0x118) | 0x100);
    }
}

void fn_8011F7C8(void *arg0, void *arg1) { } /* draft: stub */

void fn_8011F8F4(void *arg0, void *arg1, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8011FB70(void *arg0, void *arg1) {
    s32 temp_r3;
    u32 temp_r31;

    temp_r31 = (u32) M2C_FIELD(arg1, u32 *, 0) >> 0x10U;
    M2C_FIELD(arg0, u32 *, 0x188) = temp_r31;
    /* draft: did not compile: fn_8012DE38(arg0 + 0x188); */
    M2C_FIELD(arg0, s32 *, 0x170) = (s32) ((M2C_FIELD(arg1, u32 *, 0) << 8) & 0xFF0000);
    temp_r3 = (s8) M2C_FIELD(arg1, s32 *, 4) << 0x10;
    M2C_FIELD(arg0, s32 *, 0x180) = (s32) (M2C_FIELD(arg0, s32 *, 0x170) + temp_r3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x188) != 0) {
        M2C_FIELD(arg0, s32 *, 0x178) = (s32) (temp_r3 / (s32) temp_r31);
    } else {
        M2C_FIELD(arg0, s32 *, 0x178) = temp_r3;
    }
    M2C_FIELD(arg0, s32 *, 0x114) = (s32) (M2C_FIELD(arg0, s32 *, 0x114) | 0x2000);
}

void fn_8011FC0C(void *arg0, void *arg1) {
    s32 temp_r3;
    u32 temp_r31;

    temp_r31 = (u32) M2C_FIELD(arg1, u32 *, 0) >> 0x10U;
    M2C_FIELD(arg0, u32 *, 0x18C) = temp_r31;
    /* draft: did not compile: fn_8012DE38(arg0 + 0x18C); */
    M2C_FIELD(arg0, s32 *, 0x174) = (s32) ((M2C_FIELD(arg1, u32 *, 0) << 8) & 0xFF0000);
    temp_r3 = (s8) M2C_FIELD(arg1, s32 *, 4) << 0x10;
    M2C_FIELD(arg0, s32 *, 0x184) = (s32) (M2C_FIELD(arg0, s32 *, 0x174) + temp_r3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x18C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x17C) = (s32) (temp_r3 / (s32) temp_r31);
    } else {
        M2C_FIELD(arg0, s32 *, 0x17C) = temp_r3;
    }
    M2C_FIELD(arg0, s32 *, 0x114) = (s32) (M2C_FIELD(arg0, s32 *, 0x114) | 0x2000);
}

#pragma push
#pragma optimize_for_size on
void fn_8011FCA8(void *arg0, void *arg1) {
    s32 temp_r0_2;
    s32 temp_r3;
    s32 temp_r3_2;
    u32 temp_r0;
    s8 temp_r0_3;
    u32 temp_r3_3;
    u32 var_r30;
    s16 temp_r5;
    s32 temp_r6;

    temp_r5 = (u8) ((u32) M2C_FIELD(arg1, u32 *, 0) >> 8U);
    if ((u8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U) == 0) {
        temp_r0 = M2C_FIELD(arg0, u32 *, 0x154);
        temp_r3 = (temp_r0 * temp_r5) / 127;
        M2C_FIELD(arg0, u32 *, 0x154) = (u32) ((u32) (((u32) ((temp_r0 * temp_r5) - temp_r3) >> 1U) + temp_r3) >> 6U);
    } else {
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x158);
        temp_r3_2 = (temp_r0_2 * temp_r5) / 127;
        M2C_FIELD(arg0, u32 *, 0x154) = (u32) ((u32) (((u32) ((temp_r0_2 * temp_r5) - temp_r3_2) >> 1U) + temp_r3_2) >> 6U);
    }
    M2C_FIELD(arg0, u32 *, 0x154) = (u32) (M2C_FIELD(arg0, u32 *, 0x154) + (M2C_FIELD(arg1, u32 *, 0) & 0xFF0000));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x154) > 0x7F0000U) {
        M2C_FIELD(arg0, u32 *, 0x154) = 0x7F0000U;
    }
    var_r30 = M2C_FIELD(arg0, u32 *, 0x154);
    if (((((u32) M2C_FIELD(arg1, u32 *, 0) >> 0x18U) & ~0xFF00) | ((M2C_FIELD(arg1, u32 *, 4) << 8) & 0xFF00)) != -1U) {
        /* draft: did not compile: temp_r3_3 = fn_8011E60C((unsigned short)(0)); */
        if (temp_r3_3 != 0U) {
            temp_r0_3 = var_r30 >> 0x10U;
            if (temp_r0_3 < 0x7FU) {
                /* draft: did not compile: temp_r6 = *(temp_r3_3 + temp_r0_3); */
                var_r30 = ((u16) var_r30 * (M2C_FIELD((temp_r3_3 + temp_r0_3), u8 *, 1) - temp_r6)) + ((temp_r6 << 0x10) & 0xFF0000);
            } else {
                /* draft: did not compile: var_r30 = *(temp_r3_3 + temp_r0_3) << 0x10; */
            }
        }
    }
    M2C_FIELD(arg0, u32 *, 0x154) = var_r30;
    M2C_FIELD(arg0, s32 *, 0x114) = (s32) (M2C_FIELD(arg0, s32 *, 0x114) | 0x1000);
}
#pragma pop

void fn_8011FDDC(void *arg0, void *arg1, M2C_UNK arg_sp0) {
    u32 sp8;
    s32 temp_r30;
    s32 var_r31;
    u16 var_r28;
    u32 temp_r0;
    u32 temp_r3;
    u32 temp_r6;
    u8 temp_r6_2;

    temp_r30 = M2C_FIELD(arg0, s32 *, 0x154);
    sp8 = (u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U;
    if (((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U) & 1) {
        fn_8012DE38(&sp8);
    } else {
        sndConvertTicks(&sp8, arg0);
    }
    var_r31 = fn_8012DE90(sp8);
    if (var_r31 == 0) {
        var_r31 = 1;
    }
    temp_r6 = M2C_FIELD(arg1, u32 *, 0);
    var_r28 = ((u32) (M2C_FIELD(arg0, s32 *, 0x154) * (u8) (temp_r6 >> 8U)) >> 7U) + (temp_r6 & 0xFF0000);
    if (var_r28 > 0x7F0000U) {
        var_r28 = 0x7F0000;
    }
    if ((u16) (((temp_r6 >> 0x18U) & ~0xFF00) | ((M2C_FIELD(arg1, u32 *, 4) << 8) & 0xFF00)) != -1U) {
        /* draft: did not compile: temp_r3 = fn_8011E60C(); */
        if (temp_r3 != 0U) {
            temp_r0 = var_r28 >> 0x10U;
            if (temp_r0 < 0x7FU) {
                /* draft: did not compile: temp_r6_2 = *(temp_r3 + temp_r0); */
                var_r28 = (var_r28 * (M2C_FIELD((temp_r3 + temp_r0), u8 *, 1) - temp_r6_2)) + ((temp_r6_2 << 0x10) & 0xFF0000);
            } else {
                /* draft: did not compile: var_r28 = *(temp_r3 + temp_r0) << 0x10; */
            }
        }
    }
    M2C_FIELD(arg0, s32 *, 0x198) = (s32) var_r28;
    M2C_FIELD(arg0, s32 *, 0x19C) = temp_r30;
    M2C_FIELD(arg0, s32 *, 0x194) = (s32) ((s32) (var_r28 - temp_r30) / var_r31);
    M2C_FIELD(arg0, s32 *, 0x154) = temp_r30;
    M2C_FIELD(arg0, s32 *, 0x118) = (s32) (M2C_FIELD(arg0, s32 *, 0x118) | 0x8000);
}

void fn_8011FF0C(void *arg0, void *arg1) {
    u32 sp8;
    s32 var_r30;
    u32 var_r29;
    u32 temp_r0;
    u32 temp_r3;
    u32 temp_r6;
    u8 temp_r6_2;

    sp8 = (u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U;
    if (((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U) & 1) {
        fn_8012DE38(&sp8);
    } else {
        sndConvertTicks(&sp8, arg0);
    }
    var_r30 = fn_8012DE90(sp8);
    if (var_r30 == 0) {
        var_r30 = 1;
    }
    temp_r6 = M2C_FIELD(arg1, u32 *, 0);
    var_r29 = ((u32) (M2C_FIELD(arg0, s32 *, 0x154) * (u8) (temp_r6 >> 8U)) >> 7U);
    var_r29 += (temp_r6 & 0xFF0000);
    var_r29 = var_r29 <= 0x7F0000U ? var_r29 : 0x7F0000;
    if ((((temp_r6 >> 0x18U) & ~0xFF00) | ((M2C_FIELD(arg1, u32 *, 4) << 8) & 0xFF00)) != -1U) {
        /* draft: did not compile: temp_r3 = fn_8011E60C(); */
        if (temp_r3 != 0U) {
            temp_r0 = var_r29 >> 0x10U;
            if (temp_r0 < 0x7FU) {
                /* draft: did not compile: temp_r6_2 = *(temp_r3 + temp_r0); */
                var_r29 = (var_r29 * (M2C_FIELD((temp_r3 + temp_r0), u8 *, 1) - temp_r6_2)) + ((temp_r6_2 << 0x10) & 0xFF0000);
            } else {
                /* draft: did not compile: var_r29 = *(temp_r3 + temp_r0) << 0x10; */
            }
        }
    }
    M2C_FIELD(arg0, s32 *, 0x198) = (s32) var_r29;
    M2C_FIELD(arg0, s32 *, 0x19C) = 0;
    M2C_FIELD(arg0, s32 *, 0x194) = (s32) ((s32) var_r29 / var_r30);
    M2C_FIELD(arg0, s32 *, 0x154) = 0;
    M2C_FIELD(arg0, s32 *, 0x118) = (s32) (M2C_FIELD(arg0, s32 *, 0x118) | 0x8000);
}

void fn_80120048(void *arg0, void *arg1, M2C_UNK arg_sp0) {
    s32 temp_r3_3;
    u8 var_r31;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 var_r0;
    s32 var_r0_2;
    u16 temp_r4;
    u16 temp_ret;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r3;
    u32 temp_r4_3;
    u32 temp_r5;
    u32 var_r30;
    u8 temp_r3_2;
    u8 var_r27;
    s32 temp_r4_2;

    temp_r5 = M2C_FIELD(arg1, u32 *, 4);
    if ((u8) (temp_r5 >> 8U) == 0) {
        temp_r3 = M2C_FIELD(arg1, u32 *, 0);
        temp_r0 = temp_r3 >> 0x18U;
        var_r31 = (u8) (temp_r3 >> 8U);
        var_r30 = temp_r0;
        if (var_r31 > temp_r0) {
            temp_r3_2 = var_r31;
            var_r31 = (u8) temp_r0;
            var_r30 = (u32) temp_r3_2;
        }
    } else {
        temp_r0_2 = M2C_FIELD(arg1, u32 *, 0);
        temp_r4 = M2C_FIELD(arg0, u16 *, 0x12C);
        temp_r3_3 = temp_r4 - (u8) (temp_r0_2 >> 8U);
        temp_r4_2 = temp_r4 + (temp_r0_2 >> 0x18U);
        if (temp_r3_3 < 0) {
            var_r0 = 0;
        } else {
            var_r0 = 0x7F;
            if (temp_r3_3 <= 0x7F) {
                var_r0 = temp_r3_3;
            }
        }
        var_r31 = (u8) var_r0;
        if (temp_r4_2 < 0) {
            var_r0_2 = 0;
        } else {
            var_r0_2 = 0x7F;
            if (temp_r4_2 <= 0x7F) {
                var_r0_2 = temp_r4_2;
            }
        }
        var_r30 = (u32) (u8) var_r0_2;
    }
    if ((u8) temp_r5 != 0) {
        var_r27 = (fn_8012DCEC() % 201) - 0x64;
    } else {
        var_r27 = (u8) ((u32) M2C_FIELD(arg1, u32 *, 0) >> 0x10U);
    }
    temp_ret = fn_8012DCEC();
    temp_r6 = ((u8) var_r30 - var_r31) + 1;
    temp_r5_2 = (var_r31 + (temp_ret % temp_r6)) << 8;
    temp_r4_3 = ((var_r27 << 0x10) & 0xFF0000) | 0x19 | temp_r5_2;
    M2C_FIELD(arg1, u32 *, 0) = temp_r4_3;
    M2C_FIELD(arg1, u32 *, 4) = 0U;
    M2C_FIELD(arg0, u16 *, 0x12C) = (u16) (((u32) M2C_FIELD(arg1, u32 *, 0) >> 8U) & 0x7F);
    M2C_FIELD(arg0, s8 *, 0x12E) = (s8) ((u32) M2C_FIELD(arg1, u32 *, 0) >> 0x10U);
    if (fn_80124D8C(arg0, temp_r4_3, temp_r5_2, temp_r6, temp_ret) != 0U) {
        fn_8012CD38(M2C_FIELD(arg0, u8 *, 0x121), M2C_FIELD(arg0, u8 *, 0x122), (u8) M2C_FIELD(arg0, u16 *, 0x12C));
    }
    M2C_FIELD(arg1, u32 *, 0) = 4U;
    fn_8011E8E0(arg0, arg1);
}

void fn_801201E4(void *arg0, void *arg1) {
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r5;
    u32 temp_r0;
    u32 temp_r5;
    u8 temp_r8_2;
    u8 var_r6;

    var_r6 = 0;
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x114);
    temp_r8 = M2C_FIELD(arg0, s32 *, 0x118);
    if ((((temp_r8 & 0x80000) ^ 0) | ((temp_r7 & 0) ^ 0)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (temp_r8 | 0x80000);
        M2C_FIELD(arg0, s32 *, 0x114) = temp_r7;
    } else {
        var_r6 = (u8) M2C_FIELD(arg1, u32 *, 4);
    }
    temp_r0 = M2C_FIELD(arg1, u32 *, 0);
    temp_r5 = (temp_r0 & 0xFFFF0000) / 100;
    if (temp_r5 < 0) {
        var_r5 = temp_r5 - (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    } else {
        var_r5 = temp_r5 + (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    }
    temp_r8_2 = (u8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U);
    /* draft: did not compile: fn_8012CB8C(arg0 + 0x218, (u8) (temp_r0 >> 8U), var_r5, var_r6, temp_r8_2 != 0, temp_r8_2); */
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (M2C_FIELD(arg0, s32 *, 0x214) | 1);
}

void fn_801202E8(void *arg0, void *arg1) {
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r5;
    u32 temp_r0;
    u32 temp_r5;
    u8 temp_r8_2;
    u8 var_r6;

    var_r6 = 0;
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x114);
    temp_r8 = M2C_FIELD(arg0, s32 *, 0x118);
    if ((((temp_r8 & 0x100000) ^ 0) | ((temp_r7 & 0) ^ 0)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (temp_r8 | 0x100000);
        M2C_FIELD(arg0, s32 *, 0x114) = temp_r7;
    } else {
        var_r6 = (u8) M2C_FIELD(arg1, u32 *, 4);
    }
    temp_r0 = M2C_FIELD(arg1, u32 *, 0);
    temp_r5 = (temp_r0 & 0xFFFF0000) / 100;
    if (temp_r5 < 0) {
        var_r5 = temp_r5 - (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    } else {
        var_r5 = temp_r5 + (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    }
    temp_r8_2 = (u8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U);
    /* draft: did not compile: fn_8012CB8C(arg0 + 0x23C, (u8) (temp_r0 >> 8U), var_r5, var_r6, temp_r8_2 != 0, temp_r8_2); */
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (M2C_FIELD(arg0, s32 *, 0x214) | 2);
}

void fn_801203EC(void *arg0, void *arg1) {
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r5;
    u32 temp_r0;
    u32 temp_r5;
    u8 temp_r8_2;
    u8 var_r6;

    var_r6 = 0;
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x114);
    temp_r8 = M2C_FIELD(arg0, s32 *, 0x118);
    if ((((temp_r8 & 0x200000) ^ 0) | ((temp_r7 & 0) ^ 0)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (temp_r8 | 0x200000);
        M2C_FIELD(arg0, s32 *, 0x114) = temp_r7;
    } else {
        var_r6 = (u8) M2C_FIELD(arg1, u32 *, 4);
    }
    temp_r0 = M2C_FIELD(arg1, u32 *, 0);
    temp_r5 = (temp_r0 & 0xFFFF0000) / 100;
    if (temp_r5 < 0) {
        var_r5 = temp_r5 - (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    } else {
        var_r5 = temp_r5 + (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    }
    temp_r8_2 = (u8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U);
    /* draft: did not compile: fn_8012CB8C(arg0 + 0x284, (u8) (temp_r0 >> 8U), var_r5, var_r6, temp_r8_2 != 0, temp_r8_2); */
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (M2C_FIELD(arg0, s32 *, 0x214) | 8);
}

void fn_801204F0(void *arg0, void *arg1) {
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r5;
    u32 temp_r0;
    u32 temp_r5;
    u8 temp_r8_2;
    u8 var_r6;

    var_r6 = 0;
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x114);
    temp_r8 = M2C_FIELD(arg0, s32 *, 0x118);
    if ((((temp_r8 & 0x400000) ^ 0) | ((temp_r7 & 0) ^ 0)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (temp_r8 | 0x400000);
        M2C_FIELD(arg0, s32 *, 0x114) = temp_r7;
    } else {
        var_r6 = (u8) M2C_FIELD(arg1, u32 *, 4);
    }
    temp_r0 = M2C_FIELD(arg1, u32 *, 0);
    temp_r5 = (temp_r0 & 0xFFFF0000) / 100;
    if (temp_r5 < 0) {
        var_r5 = temp_r5 - (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    } else {
        var_r5 = temp_r5 + (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    }
    temp_r8_2 = (u8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U);
    /* draft: did not compile: fn_8012CB8C(arg0 + 0x2CC, (u8) (temp_r0 >> 8U), var_r5, var_r6, temp_r8_2 != 0, temp_r8_2); */
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (M2C_FIELD(arg0, s32 *, 0x214) | 0x20);
}

void fn_801205F4(void *arg0, void *arg1) {
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r5;
    u32 temp_r0;
    u32 temp_r5;
    u8 temp_r8_2;
    u8 var_r6;

    var_r6 = 0;
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x114);
    temp_r8 = M2C_FIELD(arg0, s32 *, 0x118);
    if ((((temp_r8 & 0x02000000) ^ 0) | ((temp_r7 & 0) ^ 0)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (temp_r8 | 0x02000000);
        M2C_FIELD(arg0, s32 *, 0x114) = temp_r7;
    } else {
        var_r6 = (u8) M2C_FIELD(arg1, u32 *, 4);
    }
    temp_r0 = M2C_FIELD(arg1, u32 *, 0);
    temp_r5 = (temp_r0 & 0xFFFF0000) / 100;
    if (temp_r5 < 0) {
        var_r5 = temp_r5 - (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    } else {
        var_r5 = temp_r5 + (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    }
    temp_r8_2 = (u8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U);
    /* draft: did not compile: fn_8012CB8C(arg0 + 0x2F0, (u8) (temp_r0 >> 8U), var_r5, var_r6, temp_r8_2 != 0, temp_r8_2); */
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (M2C_FIELD(arg0, s32 *, 0x214) | 0x40);
}

void fn_801206F8(void *arg0, void *arg1) {
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r5;
    u32 temp_r0;
    u32 temp_r5;
    u8 temp_r8_2;
    u8 var_r6;

    var_r6 = 0;
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x114);
    temp_r8 = M2C_FIELD(arg0, s32 *, 0x118);
    if ((((temp_r8 & 0x01000000) ^ 0) | ((temp_r7 & 0) ^ 0)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (temp_r8 | 0x01000000);
        M2C_FIELD(arg0, s32 *, 0x114) = temp_r7;
    } else {
        var_r6 = (u8) M2C_FIELD(arg1, u32 *, 4);
    }
    temp_r0 = M2C_FIELD(arg1, u32 *, 0);
    temp_r5 = (temp_r0 & 0xFFFF0000) / 100;
    if (temp_r5 < 0) {
        var_r5 = temp_r5 - (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    } else {
        var_r5 = temp_r5 + (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    }
    temp_r8_2 = (u8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U);
    /* draft: did not compile: fn_8012CB8C(arg0 + 0x314, (u8) (temp_r0 >> 8U), var_r5, var_r6, temp_r8_2 != 0, temp_r8_2); */
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (M2C_FIELD(arg0, s32 *, 0x214) | 0x80);
}

void fn_801207FC(void *arg0, void *arg1) {
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r5;
    u32 temp_r0;
    u32 temp_r5;
    u8 temp_r8_2;
    u8 var_r6;

    var_r6 = 0;
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x114);
    temp_r8 = M2C_FIELD(arg0, s32 *, 0x118);
    if ((((temp_r8 & 0x800000) ^ 0) | ((temp_r7 & 0) ^ 0)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (temp_r8 | 0x800000);
        M2C_FIELD(arg0, s32 *, 0x114) = temp_r7;
    } else {
        var_r6 = (u8) M2C_FIELD(arg1, u32 *, 4);
    }
    temp_r0 = M2C_FIELD(arg1, u32 *, 0);
    temp_r5 = (temp_r0 & 0xFFFF0000) / 100;
    if (temp_r5 < 0) {
        var_r5 = temp_r5 - (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    } else {
        var_r5 = temp_r5 + (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    }
    temp_r8_2 = (u8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U);
    /* draft: did not compile: fn_8012CB8C(arg0 + 0x35C, (u8) (temp_r0 >> 8U), var_r5, var_r6, temp_r8_2 != 0, temp_r8_2); */
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (M2C_FIELD(arg0, s32 *, 0x214) | 0x200);
}

void fn_80120900(void *arg0, void *arg1) {
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r5;
    u32 temp_r0;
    u32 temp_r5;
    u8 temp_r8_2;
    u8 var_r6;

    var_r6 = 0;
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x114);
    temp_r8 = M2C_FIELD(arg0, s32 *, 0x118);
    if ((((temp_r8 & 0x20000000) ^ 0) | ((temp_r7 & 0) ^ 0)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (temp_r8 | 0x20000000);
        M2C_FIELD(arg0, s32 *, 0x114) = temp_r7;
    } else {
        var_r6 = (u8) M2C_FIELD(arg1, u32 *, 4);
    }
    temp_r0 = M2C_FIELD(arg1, u32 *, 0);
    temp_r5 = (temp_r0 & 0xFFFF0000) / 100;
    if (temp_r5 < 0) {
        var_r5 = temp_r5 - (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    } else {
        var_r5 = temp_r5 + (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    }
    temp_r8_2 = (u8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U);
    /* draft: did not compile: fn_8012CB8C(arg0 + 0x338, (u8) (temp_r0 >> 8U), var_r5, var_r6, temp_r8_2 != 0, temp_r8_2); */
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (M2C_FIELD(arg0, s32 *, 0x214) | 0x100);
}

void fn_80120A04(void *arg0, void *arg1) {
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r5;
    u32 temp_r0;
    u32 temp_r5;
    u8 temp_r8_2;
    u8 var_r6;

    var_r6 = 0;
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x114);
    temp_r8 = M2C_FIELD(arg0, s32 *, 0x118);
    if ((((temp_r8 & 0x40000000) ^ 0) | ((temp_r7 & 0) ^ 0)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (temp_r8 | 0x40000000);
        M2C_FIELD(arg0, s32 *, 0x114) = temp_r7;
    } else {
        var_r6 = (u8) M2C_FIELD(arg1, u32 *, 4);
    }
    temp_r0 = M2C_FIELD(arg1, u32 *, 0);
    temp_r5 = (temp_r0 & 0xFFFF0000) / 100;
    if (temp_r5 < 0) {
        var_r5 = temp_r5 - (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    } else {
        var_r5 = temp_r5 + (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    }
    temp_r8_2 = (u8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U);
    /* draft: did not compile: fn_8012CB8C(arg0 + 0x380, (u8) (temp_r0 >> 8U), var_r5, var_r6, temp_r8_2 != 0, temp_r8_2); */
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (M2C_FIELD(arg0, s32 *, 0x214) | 0x400);
}

void fn_80120B08(void *arg0, void *arg1) {
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r5;
    u32 temp_r0;
    u32 temp_r5;
    u8 temp_r8_2;
    u8 var_r6;

    var_r6 = 0;
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x114);
    temp_r8 = M2C_FIELD(arg0, s32 *, 0x118);
    if ((((temp_r8 & 0x80000000) ^ 0) | ((temp_r7 & 0) ^ 0)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (temp_r8 | 0x80000000);
        M2C_FIELD(arg0, s32 *, 0x114) = temp_r7;
    } else {
        var_r6 = (u8) M2C_FIELD(arg1, u32 *, 4);
    }
    temp_r0 = M2C_FIELD(arg1, u32 *, 0);
    temp_r5 = (temp_r0 & 0xFFFF0000) / 100;
    if (temp_r5 < 0) {
        var_r5 = temp_r5 - (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    } else {
        var_r5 = temp_r5 + (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    }
    temp_r8_2 = (u8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U);
    /* draft: did not compile: fn_8012CB8C(arg0 + 0x3A4, (u8) (temp_r0 >> 8U), var_r5, var_r6, temp_r8_2 != 0, temp_r8_2); */
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (M2C_FIELD(arg0, s32 *, 0x214) | 0x800);
}

void fn_80120C0C(void *arg0, void *arg1) {
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r5;
    u32 temp_r0;
    u32 temp_r5;
    u8 temp_r8_2;
    u8 var_r6;

    var_r6 = 0;
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x114);
    temp_r8 = M2C_FIELD(arg0, s32 *, 0x118);
    if ((((temp_r8 & 0x04000000) ^ 0) | ((temp_r7 & 0) ^ 0)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (temp_r8 | 0x04000000);
        M2C_FIELD(arg0, s32 *, 0x114) = temp_r7;
    } else {
        var_r6 = (u8) M2C_FIELD(arg1, u32 *, 4);
    }
    temp_r0 = M2C_FIELD(arg1, u32 *, 0);
    temp_r5 = (temp_r0 & 0xFFFF0000) / 100;
    if (temp_r5 < 0) {
        var_r5 = temp_r5 - (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    } else {
        var_r5 = temp_r5 + (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    }
    temp_r8_2 = (u8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U);
    /* draft: did not compile: fn_8012CB8C(arg0 + 0x260, (u8) (temp_r0 >> 8U), var_r5, var_r6, temp_r8_2 != 0, temp_r8_2); */
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (M2C_FIELD(arg0, s32 *, 0x214) | 4);
}

void fn_80120D10(void *arg0, void *arg1) {
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r5;
    u32 temp_r0;
    u32 temp_r5;
    u8 temp_r8_2;
    u8 var_r6;

    var_r6 = 0;
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x114);
    temp_r8 = M2C_FIELD(arg0, s32 *, 0x118);
    if ((((temp_r8 & 0x08000000) ^ 0) | ((temp_r7 & 0) ^ 0)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (temp_r8 | 0x08000000);
        M2C_FIELD(arg0, s32 *, 0x114) = temp_r7;
    } else {
        var_r6 = (u8) M2C_FIELD(arg1, u32 *, 4);
    }
    temp_r0 = M2C_FIELD(arg1, u32 *, 0);
    temp_r5 = (temp_r0 & 0xFFFF0000) / 100;
    if (temp_r5 < 0) {
        var_r5 = temp_r5 - (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    } else {
        var_r5 = temp_r5 + (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    }
    temp_r8_2 = (u8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U);
    /* draft: did not compile: fn_8012CB8C(arg0 + 0x2A8, (u8) (temp_r0 >> 8U), var_r5, var_r6, temp_r8_2 != 0, temp_r8_2); */
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (M2C_FIELD(arg0, s32 *, 0x214) | 0x10);
}

void fn_80120E14(void *arg0, void *arg1) {
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r5;
    u32 temp_r0;
    u32 temp_r5;
    u8 temp_r8_2;
    u8 var_r6;

    var_r6 = 0;
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x114);
    temp_r8 = M2C_FIELD(arg0, s32 *, 0x118);
    if ((((temp_r8 & 0x10000000) ^ 0) | ((temp_r7 & 0) ^ 0)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (temp_r8 | 0x10000000);
        M2C_FIELD(arg0, s32 *, 0x114) = temp_r7;
    } else {
        var_r6 = (u8) M2C_FIELD(arg1, u32 *, 4);
    }
    temp_r0 = M2C_FIELD(arg1, u32 *, 0);
    temp_r5 = (temp_r0 & 0xFFFF0000) / 100;
    if (temp_r5 < 0) {
        var_r5 = temp_r5 - (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    } else {
        var_r5 = temp_r5 + (((s8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 0x10U) << 8) / 100);
    }
    temp_r8_2 = (u8) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 8U);
    /* draft: did not compile: fn_8012CB8C(arg0 + 0x3C8, (u8) (temp_r0 >> 8U), var_r5, var_r6, temp_r8_2 != 0, temp_r8_2); */
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (M2C_FIELD(arg0, s32 *, 0x214) | 0x1000);
}
