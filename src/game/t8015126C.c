/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern u32 lbl_80350380;
M2C_UNK exit(M2C_UNK);
extern M2C_UNK lbl_80349F58;
extern M2C_UNK lbl_801DAE98;
extern f64 lbl_80350390;
extern f64 lbl_80350398;
extern s32 lbl_80350F48;
extern f64 lbl_80352488;
f64 fn_8014CA88(s32 *);
extern M2C_UNK lbl_801DAEB8;
extern M2C_UNK lbl_801DAEE4;
extern M2C_UNK lbl_802B0898;
extern M2C_UNK lbl_802B0A98;
extern u8 *lbl_802B0B98;
extern f32 lbl_80350388;
extern f32 lbl_8035038C;
extern f64 lbl_803503A0;
extern f64 lbl_803503A8;
extern f64 lbl_803503B0;
extern s32 lbl_80352480;
extern u8 lbl_80352484;
extern f64 lbl_80352490;

void parse_format_8015126C();
s32 fn_80151770(void);
u8 __StringRead(void *arg0, u8 arg1, s32 arg2);
s32 fn_80151820(s32 arg0);
void *fn_801518D0(void *arg0, u8 *arg1);
s32 fn_80151938(s32 arg0, s32 arg1);
void *strchr(s32 arg0, u8 arg1);
s32 strncmp(s32 arg0, s32 arg1, s32 arg2);
s32 strcmp(u8 *arg0, u8 *arg1);
void strcat(s32 arg0, s32 arg1);
void strncpy(s32 arg0, s32 arg1, s32 arg2);
void strcpy(s32 arg0, s32 arg1);
void strlen(s32 arg0);
void fn_80151CE4(s32 arg0, s32 *arg1);
f64 fn_80151DA0(s32 arg0, s8 (*arg1)(s32, M2C_UNK, M2C_UNK, u8 *, u16, s32, s32, s32), s32 arg2, s32 *arg3, s32 *arg4);
s32 fn_80152DAC(s32 arg0);
void __strtoul();
s32 fn_801531E4(void);

void parse_format_8015126C() { } /* draft: stub */

s32 fn_80151770(void) {
    u32 temp_r0;

    temp_r0 = (lbl_80350380 * 0x41C64E6D) + 0x3039;
    lbl_80350380 = temp_r0;
    return (temp_r0 >> 0x10U) & 0x7FFF;
}

u8 __StringRead(void *arg0, u8 arg1, s32 arg2) {
    u8 *temp_r4;
    u8 temp_r3;

    switch (arg2) {                                 /* irregular */
    case 0:
        temp_r4 = M2C_FIELD(arg0, u8 **, 0);
        temp_r3 = *temp_r4;
        if ((s8) temp_r3 == 0) {
            M2C_FIELD(arg0, s32 *, 4) = 1;
            return -1U;
        }
        M2C_FIELD(arg0, u8 **, 0) = (u8 *) (temp_r4 + 1);
        return temp_r3;
    case 1:
        if ((s32) M2C_FIELD(arg0, s32 *, 4) == 0) {
            M2C_FIELD(arg0, u8 **, 0) = (u8 *) (M2C_FIELD(arg0, u8 **, 0) - 1);
        } else {
            M2C_FIELD(arg0, s32 *, 4) = 0;
        }
        return arg1;
    case 2:
        return (u8) M2C_FIELD(arg0, s32 *, 4);
    default:
        return 0U;
    }
}

s32 fn_80151820(s32 arg0) {
    M2C_UNK (*temp_r31)(s32);
    void *temp_r3;

    if ((arg0 < 1) || (arg0 > 6)) {
        return -1;
    }
    temp_r3 = &lbl_80349F58 + (arg0 * 4);
    temp_r31 = M2C_FIELD(temp_r3, M2C_UNK (**)(s32), -4);
    if (temp_r31 != (M2C_UNK (*)(s32))1U) {
        /* draft: did not compile: *(temp_r3 - 4) = 0; */
    }
    if ((temp_r31 == (M2C_UNK (*)(s32))1U) || ((temp_r31 == NULL) && (arg0 == 1))) {
        return 0;
    }
    if (temp_r31 == NULL) {
        exit(0);
    }
    temp_r31(arg0);
    return 0;
}

void *fn_801518D0(void *arg0, u8 *arg1) {
    u8 temp_r0_2;
    u8 temp_r3;
    u8 temp_r6;
    void *var_r5;
    void *var_r7;
    void *var_r8;

    /* draft: did not compile: var_r5 = arg0 - 1; */
    if (arg1 != NULL) {
        temp_r6 = *arg1;
        if (temp_r6 == 0) {
            return arg0;
        }
loop_9:
        /* draft: did not compile: var_r5 += 1; */
        if ((M2C_FIELD(var_r5, u8 *, 1)) == 0) {
            return NULL;
        }
        if ((M2C_FIELD(var_r5, u8 *, 1)) == temp_r6) {
            /* draft: did not compile: var_r7 = var_r5 - 1; */
            var_r8 = arg1 - 1;
loop_5:
            temp_r0_2 = M2C_FIELD(var_r7, u8 *, 1);
            /* draft: did not compile: var_r7 += 1; */
            temp_r3 = M2C_FIELD(var_r8, u8 *, 1);
            /* draft: did not compile: var_r8 += 1; */
            if (temp_r0_2 == temp_r3) {
                if (temp_r0_2 != 0) {
                    goto loop_5;
                }
            }
            if (temp_r3 == 0) {
                return var_r5;
            }
            goto loop_9;
        }
        goto loop_9;
    }
    return arg0;
}

s32 fn_80151938(s32 arg0, s32 arg1) {
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    u8 sp8;
    s32 temp_r7;
    s8 temp_r0_2;
    void *var_r30;
    void *var_r7;

    /* draft: did not compile: var_r30 = arg1 - 1; */
    sp8 = M2C_FIELD(&lbl_801DAE98, s32 *, 0);
    spC = M2C_FIELD(&lbl_801DAE98, s32 *, 4);
    sp10 = M2C_FIELD(&lbl_801DAE98, s32 *, 8);
    sp14 = M2C_FIELD(&lbl_801DAE98, s32 *, 0xC);
    sp18 = M2C_FIELD(&lbl_801DAE98, s32 *, 0x10);
    sp1C = M2C_FIELD(&lbl_801DAE98, s32 *, 0x14);
    sp20 = M2C_FIELD(&lbl_801DAE98, s32 *, 0x18);
    sp24 = M2C_FIELD(&lbl_801DAE98, s32 *, 0x1C);
loop_2:
    /* draft: did not compile: var_r30 += 1; */
    if ((M2C_FIELD(var_r30, s8 *, 1)) != 0) {
        temp_r7 = ((M2C_FIELD(var_r30, s8 *, 1)) >> 3U) & 0x1F;
        *(&sp8 + temp_r7) = *(&sp8 + temp_r7) | (1 << ((M2C_FIELD(var_r30, s8 *, 1)) & 7));
        goto loop_2;
    }
    /* draft: did not compile: var_r7 = arg0 - 1; */
loop_5:
    temp_r0_2 = M2C_FIELD(var_r7, s8 *, 1);
    /* draft: did not compile: var_r7 += 1; */
    if ((s32) temp_r0_2 != 0) {
        if (*(&sp8 + ((temp_r0_2 >> 3U) & 0x1F)) & (1 << (temp_r0_2 & 7))) {
            goto loop_5;
        }
    }
    return 0;
}

void *strchr(s32 arg0, u8 arg1) {
    u8 temp_r4;
    void *var_r3;

    /* draft: did not compile: var_r3 = arg0 - 1; */
loop_2:
    temp_r4 = M2C_FIELD(var_r3, u8 *, 1);
    /* draft: did not compile: var_r3 += 1; */
    if (temp_r4 == 0) {
        if (arg1 != 0) {
            return NULL;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_r3;
    }
    if (temp_r4 != arg1) {
        goto loop_2;
    }
    return var_r3;
}

s32 strncmp(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r6;
    u8 temp_r0;
    void *var_r3;
    u8 temp_r5;
    void *var_r4;

    /* draft: did not compile: var_r3 = arg0 - 1; */
    /* draft: did not compile: var_r4 = arg1 - 1; */
    var_r6 = arg2 + 1;
loop_4:
    var_r6 -= 1;
    if (var_r6 == 0) {
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 0;
    }
    temp_r0 = M2C_FIELD(var_r3, u8 *, 1);
    /* draft: did not compile: var_r3 += 1; */
    temp_r5 = M2C_FIELD(var_r4, u8 *, 1);
    /* draft: did not compile: var_r4 += 1; */
    if (temp_r0 != temp_r5) {
        return temp_r0 - temp_r5;
    }
    if (temp_r0 != 0) {
        goto loop_4;
    }
    return 0;
}

s32 strcmp(u8 *arg0, u8 *arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    u8 temp_r0_5;
    u32 var_r7;
    u32 var_r8;
    u8 *var_r3;
    u8 *var_r4;
    u8 temp_r0_6;
    u8 temp_r0_7;
    u8 temp_r5;
    u8 temp_r5_2;
    u32 var_r5;
    u32 temp_r6;
    u32 var_ctr;

    var_r3 = arg0;
    var_r4 = arg1;
    var_r5 = *var_r3;
    temp_r0_4 = var_r5 - *var_r4;
    if (temp_r0_4 != 0) {
        return temp_r0_4;
    }
    if ((u32) ((s32) var_r4 & 3) == (temp_r6 = (s32) var_r3 & 3)) {
        if (temp_r6 != 0) {
            if (var_r5 == 0) {
                return 0;
            }
            temp_r0_5 = 3 - temp_r6;
            var_ctr = temp_r0_5;
            if (temp_r0_5 != 0U) {
loop_7:
                temp_r5 = M2C_FIELD(var_r3, u8 *, 1);
                var_r3 += 1;
                temp_r0_6 = M2C_FIELD(var_r4, u8 *, 1);
                var_r4 += 1;
                temp_r0_3 = temp_r5 - temp_r0_6;
                if (temp_r0_3 != 0) {
                    return temp_r0_3;
                }
                if (temp_r5 == 0) {
                    return 0;
                }
                var_ctr -= 1;
                if (var_ctr == 0U) {
                    goto block_12;
                }
                goto loop_7;
            }
block_12:
            var_r3 += 1;
            var_r4 += 1;
            goto block_13;
        }
block_13:
        var_r7 = *var_r3;
        var_r8 = *var_r4;
        if (!((var_r7 + 0xFEFEFEFF) & 0x80808080)) {
loop_16:
            if (var_r7 != var_r8) {
                if (var_r7 > var_r8) {
                    return 1;
                }
                return -1;
            }
            var_r7 = M2C_FIELD(var_r3, u32 *, 4);
            var_r3 += 4;
            var_r8 = M2C_FIELD(var_r4, u32 *, 4);
            var_r4 += 4;
            if (!((var_r7 + 0xFEFEFEFF) & 0x80808080)) {
                goto loop_16;
            }
            goto block_19;
        }
block_19:
        var_r5 = *var_r3;
        temp_r0_2 = var_r5 - *var_r4;
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_21;
    }
block_21:
    if (var_r5 == 0) {
        return 0;
    }
loop_23:
    temp_r5_2 = M2C_FIELD(var_r3, u8 *, 1);
    var_r3 += 1;
    temp_r0_7 = M2C_FIELD(var_r4, u8 *, 1);
    var_r4 += 1;
    temp_r0 = temp_r5_2 - temp_r0_7;
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (temp_r5_2 == 0) {
        return 0;
    }
    goto loop_23;
}

#pragma push
#pragma peephole off
void strcat(s32 arg0, s32 arg1) {
    u8 temp_r0;
    u8 temp_r0_2;
    void *var_r4;
    void *var_r5;
    void *var_r5_2;

    /* draft: did not compile: var_r4 = arg1 - 1; */
    /* draft: did not compile: var_r5 = arg0 - 1; */
    do {
        temp_r0 = M2C_FIELD(var_r5, u8 *, 1);
        /* draft: did not compile: var_r5 += 1; */
    } while (temp_r0 != 0);
    /* draft: did not compile: var_r5_2 = var_r5 - 1; */
    do {
        temp_r0_2 = M2C_FIELD(var_r4, u8 *, 1);
        /* draft: did not compile: var_r4 += 1; */
        /* draft: did not compile: var_r5_2 += 1; */
        M2C_FIELD(var_r5_2, u8 *, 1) = temp_r0_2;
    } while (temp_r0_2 != 0);
}
#pragma pop

void strncpy(s32 arg0, s32 arg1, s32 arg2) {
    u8 temp_r0;
    void *var_r4;
    void *var_r6;
    s32 var_r5;

    /* draft: did not compile: var_r4 = arg1 - 1; */
    /* draft: did not compile: var_r6 = arg0 - 1; */
    var_r5 = arg2 + 1;
loop_6:
    var_r5 -= 1;
    if (var_r5 == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(var_r4, u8 *, 1);
    /* draft: did not compile: var_r4 += 1; */
    /* draft: did not compile: var_r6 += 1; */
    M2C_FIELD(var_r6, u8 *, 1) = temp_r0;
    if (temp_r0 == 0) {
loop_4:
        var_r5 -= 1;
        if (var_r5 != 0) {
            /* draft: did not compile: var_r6 += 1; */
            M2C_FIELD(var_r6, s8 *, 1) = 0;
            goto loop_4;
        }
        return;
    }
    goto loop_6;
}

void strcpy(s32 arg0, s32 arg1) {
    s32 var_r4;
    s32 var_r7;
    u8 temp_r0_2;
    u32 temp_r5;
    u32 var_ctr;
    u32 temp_r0;
    u8 temp_r0_3;
    u32 temp_r0_4;
    u8 temp_r0_5;
    void *var_r7_2;
    s32 var_r8;

    var_r4 = arg1;
    temp_r5 = var_r4 & 3;
    var_r7 = arg0;
    if ((u32) (arg0 & 3) == temp_r5) {
        if (temp_r5 != 0) {
            /* draft: did not compile: temp_r0 = *var_r4; */
            /* draft: did not compile: *var_r7 = temp_r0; */
            if (temp_r0 != 0) {
                temp_r0_2 = 3 - temp_r5;
                var_ctr = temp_r0_2;
                if (temp_r0_2 != 0U) {
loop_4:
                    temp_r0_3 = M2C_FIELD(var_r4, u8 *, 1);
                    var_r4 += 1;
                    M2C_FIELD(var_r7, u8 *, 1) = temp_r0_3;
                    var_r7 += 1;
                    if (temp_r0_3 != 0) {
                        var_ctr -= 1;
                        if (var_ctr == 0U) {
                            goto block_6;
                        }
                        goto loop_4;
                    }
                } else {
block_6:
                    var_r7 += 1;
                    var_r4 += 1;
                    goto block_7;
                }
            }
        } else {
block_7:
            /* draft: did not compile: var_r8 = *var_r4; */
            if (!((var_r8 + 0xFEFEFEFF) & 0x80808080)) {
                /* draft: did not compile: var_r7_2 = var_r7 - 4; */
                do {
                    /* draft: did not compile: var_r7_2 += 4; */
                    M2C_FIELD(var_r7_2, s32 *, 4) = var_r8;
                    var_r8 = M2C_FIELD(var_r4, s32 *, 4);
                    var_r4 += 4;
                } while (!((var_r8 + 0xFEFEFEFF) & 0x80808080));
                /* draft: did not compile: var_r7 = (s32) (var_r7_2 + 4); */
            }
            goto block_11;
        }
    } else {
block_11:
        /* draft: did not compile: temp_r0_4 = *var_r4; */
        /* draft: did not compile: *var_r7 = temp_r0_4; */
        if (temp_r0_4 != 0) {
            do {
                temp_r0_5 = M2C_FIELD(var_r4, u8 *, 1);
                var_r4 += 1;
                M2C_FIELD(var_r7, u8 *, 1) = temp_r0_5;
                var_r7 += 1;
            } while (temp_r0_5 != 0);
        }
    }
}

void strlen(s32 arg0) {
    u8 temp_r0;
    void *var_r4;

    /* draft: did not compile: var_r4 = arg0 - 1; */
    do {
        temp_r0 = M2C_FIELD(var_r4, u8 *, 1);
        /* draft: did not compile: var_r4 += 1; */
    } while (temp_r0 != 0);
}

void fn_80151CE4(s32 arg0, s32 *arg1) {
    s32 sp14;
    s32 sp10;
    s32 spC;
    u32 sp8;
    f32 temp_f1;
    f32 temp_f2;

    sp14 = 0;
    sp10 = arg0;
    /* draft: did not compile: temp_f1 = fn_80151DA0(0x7FFFFFFF, __StringRead, &sp10, &spC, &sp8); */
    if (arg1 != NULL) {
        *arg1 = arg0 + spC;
    }
    temp_f2 = fabs(temp_f1);
    if ((sp8 != 0) || ((lbl_80352488 != temp_f1) && ((temp_f2 < (f32) lbl_80350390) || (temp_f2 > (f32) lbl_80350398)))) {
        lbl_80350F48 = 0x22;
    }
}

f64 fn_80151DA0(s32 arg0, s8 (*arg1)(s32, M2C_UNK, M2C_UNK, u8 *, u16, s32, s32, s32), s32 arg2, s32 *arg3, s32 *arg4) { return 0; } /* draft: stub */

s32 fn_80152DAC(s32 arg0) {
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    M2C_UNK sp8;
    u32 var_r3;

    sp14 = arg0;
    sp18 = 0;
    /* draft: did not compile: var_r3 = __strtoul(0xA, 0x7FFFFFFF, __StringRead, &sp14, &sp8, &spC, &sp10); */
    if ((sp10 != 0) || ((spC == 0) && (var_r3 > 0x7FFFFFFFU)) || ((spC != 0) && (var_r3 > 0x80000000U))) {
        lbl_80350F48 = 0x22;
        return (spC != 0) + 0x7FFFFFFF;
    }
    if (spC != 0) {
        var_r3 = (u32) -(s32) var_r3;
    }
    return (s32) var_r3;
}

void __strtoul() { } /* draft: stub */

s32 fn_801531E4(void) {
    return 0;
}
