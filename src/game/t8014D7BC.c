/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

u64 __div2u(u64, u32, M2C_UNK, M2C_UNK, u8, u8);
u64 __mod2u(u64, u32, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_802B0998;
s32 fwide(void *, M2C_UNK);
s32 __flush_all();
M2C_UNK fn_8014BB98(s32);
extern s32 lbl_80350F48;
M2C_UNK strncpy(s32, M2C_UNK *, s32);
extern s32 lbl_80352470;
extern M2C_UNK __close_all;
extern M2C_UNK *__stdio_exit;
u32 __pformatter_8014FAAC();
extern M2C_UNK __StringWrite;

void fn_8014D7BC(void *arg0, s32 arg1, void *arg2);
s32 fn_8014DCB8(void *arg0, void *arg1);
s32 __equals_dec(void *arg0, void *arg1);
void fn_8014DEBC();
void fn_8014E1FC(void *arg0, u8 *arg1, s16 arg2);
void fn_8014E2E8(void *arg0, void *arg1, void *arg2);
void fn_8014E574(void *arg0, u64 arg2, u32 arg3);
s32 fn_8014E684(u32 arg0);
s32 Abs(s32 arg0);
s32 __flush_buffer(void *arg0, s32 *arg1);
void __prep_buffer(void *arg0);
u8 fn_8014E7FC(s32 arg0);
u32 __fwrite(u32 arg0, u32 arg1, s32 arg2, void *arg3);
void fwrite(void);
s32 fn_8014EB4C(void *arg0);
s32 fn_8014EC84(void *arg0);
void fseek(void);
s32 fn_8014ED64(void *arg0, u32 arg1, s32 arg2);
s32 fn_8014EFA0(void *arg0);
u32 wcstombs(s32 arg0, u16 *arg1, u32 arg2);
s32 fn_8014F0B0(u32 arg0, u16 arg1);
s32 memcmp(s32 arg0, s32 arg1, s32 arg2);
void *__memrchr(s32 arg0, u8 arg1, s32 arg2);
void *memchr(s32 arg0, u8 arg1, s32 arg2);
u32 memmove(u32 arg0, u32 arg1, u32 arg2);
void fn_8014F2C4(s32 arg0, s32 arg1, u32 arg2);
void fn_8014F374(s32 arg0, s32 arg1, u32 arg2);
void fn_8014F438(s32 arg0, s32 arg1, u32 arg2);
void fn_8014F4E4(s32 arg0, s32 arg1, u32 arg2);
void __stdio_atexit(void);
void fn_8014F5B4(u32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8);
void fn_8014F694(u32 arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8);

void fn_8014D7BC(void *arg0, s32 arg1, void *arg2) { } /* draft: stub */

s32 fn_8014DCB8(void *arg0, void *arg1) {
    u8 temp_r5_2;
    s16 temp_r5;
    s32 temp_r0_2;
    s32 var_ctr_2;
    u8 temp_r0_3;
    s16 temp_r0;
    u8 temp_r6;
    u8 temp_r7;
    u8 var_r8;
    s32 var_ctr;
    u8 var_r9;

    if ((u8) M2C_FIELD(arg0, u8 *, 5) == 0) {
        return M2C_FIELD(arg1, u8 *, 5) != 0;
    }
    if ((u8) M2C_FIELD(arg1, u8 *, 5) == 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 2);
    temp_r5 = M2C_FIELD(arg1, s16 *, 2);
    if (temp_r0 == temp_r5) {
        temp_r7 = M2C_FIELD(arg0, u8 *, 4);
        temp_r5_2 = M2C_FIELD(arg1, u8 *, 4);
        var_r9 = temp_r7;
        if ((s32) temp_r7 > (s32) temp_r5_2) {
            var_r9 = temp_r5_2;
        }
        var_r8 = 0;
        var_ctr = var_r9;
        if ((s32) var_r9 > 0) {
loop_8:
            temp_r0_2 = var_r8 + 5;
            /* draft: did not compile: temp_r6 = *(arg0 + temp_r0_2); */
            /* draft: did not compile: temp_r0_3 = *(arg1 + temp_r0_2); */
            if (temp_r6 < temp_r0_3) {
                return 1;
            }
            if (temp_r0_3 < temp_r6) {
                return 0;
            }
            var_r8 += 1;
            var_ctr -= 1;
            if (var_ctr == 0) {
                goto block_13;
            }
            goto loop_8;
        }
block_13:
        if ((s32) var_r9 == (s32) temp_r7) {
            var_ctr_2 = temp_r5_2 - var_r8;
            if (var_r8 < (s32) temp_r5_2) {
loop_15:
                if (0 /* draft: did not compile */) {
                    return 1;
                }
                var_r8 += 1;
                var_ctr_2 -= 1;
                if (var_ctr_2 == 0) {
                    /* Duplicate return node #18. Try simplifying control flow for better match */
                    return 0;
                }
                goto loop_15;
            }
        }
        return 0;
    }
    return temp_r0 < temp_r5;
}

#pragma push
#pragma peephole off
s32 __equals_dec(void *arg0, void *arg1) {
    s8 var_ctr;
    u32 var_ctr_2;
    u8 var_ctr_3;
    s32 var_r8;
    u8 temp_r5;
    u8 temp_r6;
    s32 temp_r0;
    u8 var_r9;
    u8 temp_r7;

    temp_r5 = M2C_FIELD(arg0, u8 *, 5);
    if (temp_r5 == 0) {
        return M2C_FIELD(arg1, u8 *, 5) == 0;
    }
    if ((u8) M2C_FIELD(arg1, u8 *, 5) == 0) {
        return temp_r5 == 0;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 2) == (s16) M2C_FIELD(arg1, s16 *, 2)) {
        temp_r7 = M2C_FIELD(arg0, u8 *, 4);
        temp_r6 = M2C_FIELD(arg1, u8 *, 4);
        var_r9 = temp_r7;
        if ((s32) temp_r7 > (s32) temp_r6) {
            var_r9 = temp_r6;
        }
        var_r8 = 0;
        var_ctr = var_r9;
        if ((s32) var_r9 > 0) {
loop_8:
            temp_r0 = var_r8 + 5;
            if (0 /* draft: did not compile */) {
                return 0;
            }
            var_r8 = var_r8 + 1;
            var_ctr = var_ctr;
            if ((var_ctr - 1) == 0) {
                goto block_11;
            }
            goto loop_8;
        }
block_11:
        if (var_r9 == (s32) temp_r7) {
            var_ctr_2 = temp_r6 - var_r8;
            if (var_r8 < (s32) temp_r6) {
loop_13:
                if (0 /* draft: did not compile */) {
                    return 0;
                }
                var_r8 = var_r8 + 1;
                var_ctr_2 = var_ctr_2;
                if ((var_ctr_2 - 1) == 0) {
                    /* Duplicate return node #21. Try simplifying control flow for better match */
                    return 1;
                }
                goto loop_13;
            }
            /* Duplicate return node #21. Try simplifying control flow for better match */
            return 1;
        }
        var_ctr_3 = temp_r7 - var_r8;
        if (var_r8 < (s32) temp_r7) {
loop_18:
            if (0 /* draft: did not compile */) {
                return 0;
            }
            var_r8 = var_r8 + 1;
            var_ctr_3 = var_ctr_3 - 1;
            if (var_ctr_3 == 0) {
                /* Duplicate return node #21. Try simplifying control flow for better match */
                return 1;
            }
            goto loop_18;
        }
        return 1;
    }
    return 0;
}
#pragma pop

void fn_8014DEBC() { } /* draft: stub */

void fn_8014E1FC(void *arg0, u8 *arg1, s16 arg2) { } /* draft: stub */

void fn_8014E2E8(void *arg0, void *arg1, void *arg2) { } /* draft: stub */

void fn_8014E574(void *arg0, u64 arg2, u32 arg3) {
    u32 temp_r4;
    unsigned int var_r28;
    u64 temp_r3;
    u64 temp_ret;
    u64 var_r29;
    u8 *var_r3;
    u8 *var_r4;
    u8 temp_r5;
    s8 temp_r7;
    u8 temp_r8;

    var_r29 = arg2;
    var_r28 = arg3;
    M2C_FIELD(arg0, s8 *, 0) = 0;
    if (((var_r28 ^ 0) | (var_r29 ^ 0)) == 0) {
        M2C_FIELD(arg0, s16 *, 2) = 0;
        M2C_FIELD(arg0, u8 *, 4) = 1U;
        M2C_FIELD(arg0, s8 *, 5) = 0;
        return;
    }
    M2C_FIELD(arg0, u8 *, 4) = 0U;
loop_4:
    if (((var_r28 ^ 0) | (var_r29 ^ 0)) != 0) {
        temp_r8 = M2C_FIELD(arg0, u8 *, 4);
        temp_r7 = temp_r8 + 1;
        M2C_FIELD(arg0, u8 *, 4) = temp_r7;
        temp_r4 = (u32) __mod2u(var_r29, var_r28, 0, 0xA);
        /* draft: did not compile: *(arg0 + (temp_r8 + 5)) = (s8) temp_r4; */
        temp_ret = __div2u((s32)var_r29, var_r28, 0, 0xA, temp_r7, temp_r8);
        temp_r3 = temp_ret;
        var_r28 = (u32) temp_ret;
        var_r29 = temp_r3;
        goto loop_4;
    }
    /* draft: did not compile: var_r4 = arg0 + 5; */
    /* draft: did not compile: var_r3 = arg0 + (M2C_FIELD(arg0, u8 *, 4) + 5); */
loop_7:
    var_r3 -= 1;
    if (var_r4 < var_r3) {
        temp_r5 = *var_r4;
        var_r4 += 1;
        *var_r4 = *var_r3;
        *var_r3 = temp_r5;
        goto loop_7;
    }
    M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, u8 *, 4) - 1);
}

s32 fn_8014E684(u32 arg0) {
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    u32 var_r3;
    u32 var_r8;

    var_r3 = arg0;
    var_r5 = 0x20;
    var_r8 = 0xFFFF;
    var_r6 = 0x10;
    var_r4 = 0;
    var_r7 = 0x10;
loop_8:
    if (var_r5 != 0) {
        if (!(var_r3 & var_r8)) {
            var_r4 += var_r7;
            var_r3 = var_r3 >> var_r7;
            var_r5 -= var_r7;
            goto block_4;
        }
        if (var_r8 != 1) {
block_4:
            if (var_r6 > 1) {
                var_r6 = (s32) (((u32) var_r6 >> 0x1FU) + var_r6) >> 1;
            }
            if (var_r8 > 1U) {
                var_r8 = var_r8 >> var_r6;
                var_r7 -= var_r6;
            }
            goto loop_8;
        }
    }
    return var_r4;
}

s32 Abs(s32 arg0) {
    s32 temp_r4;

    temp_r4 = arg0 >> 0x1F;
    return (temp_r4 ^ arg0) - temp_r4;
}

s32 __flush_buffer(void *arg0, s32 *arg1) { return 0; } /* draft: stub */

void __prep_buffer(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) - (M2C_FIELD(arg0, s32 *, 0x18) & M2C_FIELD(arg0, s32 *, 0x2C)));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
}

u8 fn_8014E7FC(s32 arg0) {
    if (arg0 == -1) {
        return -1U;
    }
    return *(&lbl_802B0998 + (u8) arg0);
}

#pragma push
#pragma dont_inline on
u32 __fwrite(u32 arg0, u32 arg1, s32 arg2, void *arg3) {
    s32 var_r31;
    u32 var_r30;
    s32 var_r3;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r27;
    u32 temp_r31;
    u32 temp_r3_2;
    u32 temp_r4;
    u32 var_r27;
    u32 var_r29;
    s32 var_r28;
    u8 temp_r3;
    u32 sp8;

    if (fwide(arg3, 0) == 0) {
        fwide(arg3, -1);
    }
    var_r29 = arg1 * arg2;
    if ((var_r29 == 0) || ((u8) M2C_FIELD(arg3, u8 *, 0xA) != 0) || (temp_r0 = ((u16) M2C_FIELD(arg3, u16 *, 4) >> 6U) & 7, ((temp_r0 == 0) != 0))) {
        return 0U;
    }
    if (temp_r0 == 2) {
        __stdio_atexit();
    }
    var_r31 = 1;
    var_r3 = 0;
    if (!(((u8) M2C_FIELD(arg3, u8 *, 5) >> 3U) & 1) || ((u32) (((u8) M2C_FIELD(arg3, u16 *, 4) >> 1U) & 3) == 2)) {
        var_r3 = 1;
    }
    if ((var_r3 == 0) && ((u32) (((u8) M2C_FIELD(arg3, u16 *, 4) >> 1U) & 3) != 1)) {
        var_r31 = 0;
    }
    if (!(((u8) M2C_FIELD(arg3, u8 *, 8) >> 5U) & 7)) {
        temp_r3 = (u8) M2C_FIELD(arg3, u16 *, 4);
        if ((temp_r3 >> 3U) & 2) {
            if (0 /* draft: did not compile */) {
                return 0U;
            }
            __prep_buffer(arg3);
            M2C_FIELD(arg3, u8 *, 8) = (u8) ((M2C_FIELD(arg3, u8 *, 8) & ~0xE0) | 0x20);
            goto block_20;
        }
    }
block_20:
    if ((u32) (((u8) M2C_FIELD(arg3, u8 *, 8) >> 5U) & 7) != 1) {
        M2C_FIELD(arg3, u8 *, 0xA) = 1U;
        M2C_FIELD(arg3, u32 *, 0x28) = 0U;
        return 0U;
    }
    var_r30 = arg0;
    var_r28 = 0;
    if ((var_r29 != 0) && ((temp_r4 = M2C_FIELD(arg3, u32 *, 0x24), temp_r3_2 = M2C_FIELD(arg3, u32 *, 0x1C), ((temp_r4 == temp_r3_2) == 0)) || (var_r31 != 0))) {
        M2C_FIELD(arg3, u32 *, 0x28) = (u32) (M2C_FIELD(arg3, u32 *, 0x20) - (temp_r4 - temp_r3_2));
loop_26:
        temp_r0_2 = M2C_FIELD(arg3, u32 *, 0x28);
        var_r27 = 0U;
        sp8 = temp_r0_2;
        if (temp_r0_2 > var_r29) {
            sp8 = var_r29;
        }
        if (((u32) (((u8) M2C_FIELD(arg3, u16 *, 4) >> 1U) & 3) == 1) && (sp8 != 0)) {
            /* draft: did not compile: var_r27 = __memrchr((long)(var_r30), (unsigned char)(0xA), (long)(0)); */
            if (var_r27 != 0U) {
                sp8 = (var_r27 + 1) - var_r30;
            }
        }
        if (sp8 != 0) {
            /* draft: did not compile: memcpy(M2C_FIELD(arg3, u32 *, 0x24), var_r30); */
            var_r29 -= sp8;
            var_r30 += sp8;
            var_r28 += sp8;
            M2C_FIELD(arg3, u32 *, 0x24) = (u32) (M2C_FIELD(arg3, u32 *, 0x24) + sp8);
            M2C_FIELD(arg3, u32 *, 0x28) = (u32) (M2C_FIELD(arg3, u32 *, 0x28) - sp8);
        }
        if ((((u32) M2C_FIELD(arg3, u32 *, 0x28) == 0) || (var_r27 != 0U) || !(((u8) M2C_FIELD(arg3, u16 *, 4) >> 1U) & 3)) && (__flush_buffer(arg3, NULL) != 0)) {
            M2C_FIELD(arg3, u8 *, 0xA) = 1U;
            var_r29 = 0;
            M2C_FIELD(arg3, u32 *, 0x28) = 0U;
        } else if ((var_r29 != 0) && (var_r31 != 0)) {
            goto loop_26;
        }
    }
    if ((var_r29 != 0) && (var_r31 == 0)) {
        temp_r27 = M2C_FIELD(arg3, u32 *, 0x1C);
        temp_r31 = M2C_FIELD(arg3, u32 *, 0x20);
        M2C_FIELD(arg3, u32 *, 0x1C) = var_r30;
        M2C_FIELD(arg3, u32 *, 0x20) = var_r29;
        M2C_FIELD(arg3, u32 *, 0x24) = (u32) (var_r30 + var_r29);
        if (0 /* draft: did not compile */) {
            M2C_FIELD(arg3, u8 *, 0xA) = 1U;
            M2C_FIELD(arg3, u32 *, 0x28) = 0U;
        }
        M2C_FIELD(arg3, u32 *, 0x1C) = temp_r27;
        var_r28 += sp8;
        M2C_FIELD(arg3, u32 *, 0x20) = temp_r31;
        __prep_buffer(arg3);
        M2C_FIELD(arg3, u32 *, 0x28) = 0U;
    }
    if ((u32) (((u8) M2C_FIELD(arg3, u16 *, 4) >> 1U) & 3) != 2) {
        M2C_FIELD(arg3, u32 *, 0x28) = 0U;
    }
    return (u32) (var_r28 + (arg1 - 1)) / arg1;
}
#pragma pop

void fwrite(void) {
    __fwrite((unsigned long)(0), (unsigned long)(0), (long)(0), (void *)(0));
}

#pragma push
#pragma dont_inline on
s32 fn_8014EB4C(void *arg0) {
    s32 var_r30;
    u8 temp_r3;
    u8 temp_r4;

    if (arg0 == NULL) {
        return __flush_all();
    }
    if (((u8) M2C_FIELD(arg0, u8 *, 0xA) != 0) || !(((u16) M2C_FIELD(arg0, u16 *, 4) >> 6U) & 7)) {
        return -1;
    }
    if ((((u8) M2C_FIELD(arg0, u16 *, 4) >> 3U) & 7) == 1) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, u8 *, 8);
    if ((u32) ((temp_r3 >> 5U) & 7) >= 3U) {
        M2C_FIELD(arg0, u8 *, 8) = (u8) ((temp_r3 & ~0xE0) | 0x40);
    }
    if ((u32) (((u8) M2C_FIELD(arg0, u8 *, 8) >> 5U) & 7) == 2) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
    temp_r4 = M2C_FIELD(arg0, u8 *, 8);
    if ((u32) ((temp_r4 >> 5U) & 7) != 1) {
        M2C_FIELD(arg0, u8 *, 8) = (u8) (temp_r4 & ~0xE0);
        return 0;
    }
    if ((u32) (((u16) M2C_FIELD(arg0, u16 *, 4) >> 6U) & 7) != 1) {
        var_r30 = 0;
    } else {
        var_r30 = fn_8014EFA0(arg0);
    }
    if (__flush_buffer(arg0, 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0xA) = 1U;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        return -1;
    }
    M2C_FIELD(arg0, u8 *, 8) = (u8) (M2C_FIELD(arg0, u8 *, 8) & ~0xE0);
    M2C_FIELD(arg0, s32 *, 0x18) = var_r30;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    return 0;
}
#pragma pop

s32 fn_8014EC84(void *arg0) {
    s32 temp_r30;
    s32 temp_r31;
    s32 var_r3;

    if (arg0 == NULL) {
        return -1;
    }
    if (!(((u16) M2C_FIELD(arg0, u16 *, 4) >> 6U) & 7)) {
        return 0;
    }
    temp_r30 = fn_8014EB4C((void *)(0));
    temp_r31 = M2C_FIELD(arg0, s32 (**)(s32), 0x44)(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) & ~0x1C0);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    if (((u8) M2C_FIELD(arg0, u8 *, 8) >> 4U) & 1) {
        fn_8014BB98(M2C_FIELD(arg0, s32 *, 0x1C));
    }
    var_r3 = 0;
    if ((temp_r30 != 0) || (temp_r31 != 0)) {
        var_r3 = 1;
    }
    return (s32) (-var_r3 | var_r3) >> 0x1F;
}

void fseek(void) {
    fn_8014ED64((void *)(0), (unsigned long)(0), (long)(0));
}

s32 fn_8014ED64(void *arg0, u32 arg1, s32 arg2) { return 0; } /* draft: stub */

s32 fn_8014EFA0(void *arg0) {
    s32 temp_r3;
    u32 temp_r0;
    u32 temp_r5;

    temp_r0 = ((u16) M2C_FIELD(arg0, u16 *, 4) >> 6U) & 7;
    if (((temp_r0 != 1) && (temp_r0 != 2)) || ((u8) M2C_FIELD(arg0, u8 *, 0xA) != 0)) {
        lbl_80350F48 = 0x28;
        return -1;
    }
    temp_r5 = ((u8) M2C_FIELD(arg0, u8 *, 8) >> 5U) & 7;
    if (temp_r5 == 0) {
        return M2C_FIELD(arg0, s32 *, 0x18);
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x34) + (M2C_FIELD(arg0, s32 *, 0x24) - M2C_FIELD(arg0, s32 *, 0x1C));
    if (temp_r5 >= 3U) {
        return temp_r3 - (temp_r5 - 2);
    }
    return temp_r3;
}

u32 wcstombs(s32 arg0, u16 *arg1, u32 arg2) {
    M2C_UNK sp8;
    s32 temp_r3;
    u16 *var_r29;
    u32 var_r30;

    var_r30 = 0U;
    if ((arg0 == 0) || (arg1 == NULL)) {
        return 0U;
    }
    var_r29 = arg1;
loop_8:
    if (var_r30 <= arg2) {
        if ((u16) *var_r29 == 0) {
            /* draft: did not compile: *(arg0 + var_r30) = 0; */
        } else {
            var_r29 += 2;
            /* draft: did not compile: temp_r3 = fn_8014F0B0(&sp8); */
            if ((u32) (var_r30 + temp_r3) <= arg2) {
                strncpy(arg0 + var_r30, &sp8, temp_r3);
                var_r30 += temp_r3;
                goto loop_8;
            }
        }
    }
    return var_r30;
}

s32 fn_8014F0B0(u32 arg0, u16 arg1) {
    u8 sp8;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r5;
    u16 var_r4;
    void *var_r6;

    var_r4 = arg1;
    sp8 = lbl_80352470;
    if (arg0 == 0U) {
        return 0;
    }
    if (var_r4 < 0x80U) {
        var_r5 = 1;
    } else if (var_r4 < 0x800U) {
        var_r5 = 2;
    } else {
        var_r5 = 3;
    }
    /* draft: did not compile: var_r6 = arg0 + var_r5; */
    switch (var_r5) {                               /* irregular */
    case 3:
        temp_r0 = var_r4 & 0x3F;
        var_r4 = (var_r4 >> 6U) & 0x3FF;
        /* draft: did not compile: var_r6 -= 1; */
        M2C_FIELD(var_r6, s8 *, -1) = (s8) (temp_r0 | 0x80);
        /* fallthrough */
    case 2:
        temp_r0_2 = var_r4 & 0x3F;
        var_r4 = (var_r4 >> 6U) & 0x3FF;
        /* draft: did not compile: var_r6 -= 1; */
        M2C_FIELD(var_r6, s8 *, -1) = (s8) (temp_r0_2 | 0x80);
        /* fallthrough */
    case 1:
        M2C_FIELD(var_r6, s8 *, -1) = (s8) (var_r4 | *(&sp8 + var_r5));
        break;
    }
    return var_r5;
}

s32 memcmp(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r4;
    u8 *var_r6;
    u8 *var_r7;
    u8 temp_r0;
    u8 temp_r3;

    /* draft: did not compile: var_r6 = arg0 - 1; */
    /* draft: did not compile: var_r7 = arg1 - 1; */
    var_r4 = arg2 + 1;
loop_4:
    var_r4 -= 1;
    if (var_r4 == 0) {
        return 0;
    }
    temp_r3 = M2C_FIELD(var_r6, u8 *, 1);
    var_r6 += 1;
    temp_r0 = M2C_FIELD(var_r7, u8 *, 1);
    var_r7 += 1;
    if (temp_r3 != temp_r0) {
        if ((u8) *var_r6 < (u8) *var_r7) {
            return -1;
        }
        return 1;
    }
    goto loop_4;
}

void *__memrchr(s32 arg0, u8 arg1, s32 arg2) {
    s32 var_r5;
    u8 temp_r0;
    void *var_r3;

    /* draft: did not compile: var_r3 = arg0 + arg2; */
    var_r5 = arg2 + 1;
loop_2:
    var_r5 -= 1;
    if (var_r5 == 0) {
        return NULL;
    }
    temp_r0 = M2C_FIELD(var_r3, u8 *, -1);
    /* draft: did not compile: var_r3 -= 1; */
    if (temp_r0 != arg1) {
        goto loop_2;
    }
    return var_r3;
}

void *memchr(s32 arg0, u8 arg1, s32 arg2) {
    s32 var_r5;
    s8 temp_r0;
    void *var_r3;

    /* draft: did not compile: var_r3 = arg0 - 1; */
    var_r5 = arg2;
    var_r5 += 1;
loop_2:
    var_r5 -= 1;
    switch (var_r5) {
    case 0:
            return NULL;
        break;
    }
    temp_r0 = M2C_FIELD(var_r3, u8 *, 1);
    /* draft: did not compile: var_r3 += 1; */
    if (temp_r0 != arg1) {
        goto loop_2;
    }
    return var_r3;
}

u32 memmove(u32 arg0, u32 arg1, u32 arg2) {
    s32 temp_r7;
    u8 var_r5;
    u8 var_r5_2;
    u8 temp_r0;
    u8 temp_r0_2;
    void *var_r3;
    void *var_r3_2;
    void *var_r4;
    void *var_r4_2;

    temp_r7 = arg1 < arg0;
    if (arg2 >= 0x20U) {
        if ((arg0 ^ arg1) & 3) {
            if (temp_r7 == 0) {
                fn_8014F374((long)(0), (long)(0), (unsigned long)(0));
            } else {
                fn_8014F2C4((long)(0), (long)(0), (unsigned long)(0));
            }
        } else if (temp_r7 == 0) {
            fn_8014F4E4((long)(0), (long)(0), (unsigned long)(0));
        } else {
            fn_8014F438((long)(0), (long)(0), (unsigned long)(0));
        }
        return arg0;
    }
    if (temp_r7 == 0) {
        /* draft: did not compile: var_r3 = arg1 - 1; */
        /* draft: did not compile: var_r4 = arg0 - 1; */
        var_r5 = arg2 + 1;
loop_12:
        var_r5 -= 1;
        if (var_r5 != 0) {
            temp_r0 = M2C_FIELD(var_r3, u8 *, 1);
            /* draft: did not compile: var_r3 += 1; */
            /* draft: did not compile: var_r4 += 1; */
            M2C_FIELD(var_r4, u8 *, 1) = temp_r0;
            goto loop_12;
        }
    } else {
        /* draft: did not compile: var_r3_2 = arg1 + arg2; */
        /* draft: did not compile: var_r4_2 = arg0 + arg2; */
        var_r5_2 = arg2 + 1;
loop_16:
        var_r5_2 -= 1;
        if (var_r5_2 != 0) {
            temp_r0_2 = M2C_FIELD(var_r3_2, u8 *, -1);
            /* draft: did not compile: var_r3_2 -= 1; */
            /* draft: did not compile: var_r4_2 -= 1; */
            M2C_FIELD(var_r4_2, u8 *, -1) = temp_r0_2;
            goto loop_16;
        }
    }
    return arg0;
}

void fn_8014F2C4(s32 arg0, s32 arg1, u32 arg2) {
    u32 var_r6;
    s32 var_r11;
    s32 temp_r8;
    u8 temp_r9;
    s32 temp_r7;
    s32 var_r3;
    s32 var_r5_2;
    u32 temp_r0_2;
    u32 var_r4;
    u32 var_r5;
    s32 temp_r3;
    u8 temp_r0;
    u8 temp_r0_3;
    void *temp_r10;
    void *var_r10;
    void *var_r10_2;
    void *var_r10_3;

    var_r5 = arg2;
    var_r11 = arg0 + var_r5;
    /* draft: did not compile: var_r10 = arg1 + var_r5; */
    var_r3 = var_r11 & 3;
    if (var_r3 != 0) {
        var_r5 -= var_r3;
        do {
            temp_r0 = M2C_FIELD(var_r10, u8 *, -1);
            /* draft: did not compile: var_r10 -= 1; */
            M2C_FIELD(var_r11, u8 *, -1) = temp_r0;
            var_r3 -= 1;
            var_r11 -= 1;
        } while (var_r3 != 0);
    }
    temp_r8 = ((s32) var_r10 * 8) & 0x18;
    temp_r7 = (s32) var_r10 & 3;
    temp_r9 = 0x20 - temp_r8;
    var_r6 = var_r5 >> 3U;
    /* draft: did not compile: temp_r10 = var_r10 + (4 - temp_r7); */
    var_r4 = M2C_FIELD(temp_r10, u32 *, -4);
    /* draft: did not compile: var_r10_2 = temp_r10 - 4; */
    do {
        temp_r0_2 = M2C_FIELD(var_r10_2, u32 *, -4);
        var_r6 -= 1;
        M2C_FIELD(var_r11, s32 *, -4) = (s32) ((temp_r0_2 << temp_r8) | (var_r4 >> temp_r9));
        var_r4 = M2C_FIELD(var_r10_2, u32 *, -8);
        /* draft: did not compile: var_r10_2 -= 8; */
        M2C_FIELD(var_r11, s32 *, -8) = (s32) ((var_r4 << temp_r8) | (temp_r0_2 >> temp_r9));
        var_r11 -= 8;
    } while (var_r6 != 0);
    if (var_r5 & 4) {
        temp_r3 = M2C_FIELD(var_r10_2, s32 *, -4);
        /* draft: did not compile: var_r10_2 -= 4; */
        var_r11 -= 4;
        M2C_FIELD(var_r11, s32 *, -4) = (s32) ((temp_r3 << temp_r8) | (var_r4 >> temp_r9));
    }
    var_r5_2 = var_r5 & 3;
    if (var_r5_2 != 0) {
        /* draft: did not compile: var_r10_3 = var_r10_2 + temp_r7; */
        do {
            temp_r0_3 = M2C_FIELD(var_r10_3, u8 *, -1);
            /* draft: did not compile: var_r10_3 -= 1; */
            var_r5_2 -= 1;
            M2C_FIELD(var_r11, u8 *, -1) = temp_r0_3;
            var_r11 -= 1;
        } while (var_r5_2 != 0);
    }
}

void fn_8014F374(s32 arg0, s32 arg1, u32 arg2) { } /* draft: stub */

void fn_8014F438(s32 arg0, s32 arg1, u32 arg2) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 var_r3;
    s32 var_r3_3;
    s32 var_r5_2;
    u32 var_r3_2;
    u32 var_r5;
    u8 temp_r0;
    u8 temp_r0_4;
    void *var_r4;
    s32 var_r6;

    var_r5 = arg2;
    var_r6 = arg0 + var_r5;
    /* draft: did not compile: var_r4 = arg1 + var_r5; */
    var_r3 = var_r6 & 3;
    if (var_r3 != 0) {
        var_r5 -= var_r3;
        do {
            temp_r0 = M2C_FIELD(var_r4, u8 *, -1);
            /* draft: did not compile: var_r4 -= 1; */
            var_r3 -= 1;
            var_r6 -= 1;
            M2C_FIELD(var_r6, u8 *, -1) = temp_r0;
        } while (var_r3 != 0);
    }
    if ((var_r3_2 = var_r5 >> 5U) != 0) {
        do {
            var_r3_2 -= 1;
            M2C_FIELD(var_r6, s32 *, -4) = (s32) M2C_FIELD(var_r4, s32 *, -4);
            M2C_FIELD(var_r6, s32 *, -8) = (s32) M2C_FIELD(var_r4, s32 *, -8);
            M2C_FIELD(var_r6, s32 *, -0xC) = (s32) M2C_FIELD(var_r4, s32 *, -0xC);
            M2C_FIELD(var_r6, s32 *, -0x10) = (s32) M2C_FIELD(var_r4, s32 *, -0x10);
            M2C_FIELD(var_r6, s32 *, -0x14) = (s32) M2C_FIELD(var_r4, s32 *, -0x14);
            M2C_FIELD(var_r6, s32 *, -0x18) = (s32) M2C_FIELD(var_r4, s32 *, -0x18);
            M2C_FIELD(var_r6, s32 *, -0x1C) = (s32) M2C_FIELD(var_r4, s32 *, -0x1C);
            temp_r0_2 = M2C_FIELD(var_r4, s32 *, -0x20);
            /* draft: did not compile: var_r4 -= 0x20; */
            var_r6 -= 0x20;
            M2C_FIELD(var_r6, s32 *, -0x20) = temp_r0_2;
        } while (var_r3_2 != 0);
    }
    var_r3_3 = (var_r5 >> 2U) & 7;
    if (var_r3_3 != 0) {
        do {
            temp_r0_3 = M2C_FIELD(var_r4, s32 *, -4);
            /* draft: did not compile: var_r4 -= 4; */
            var_r3_3 -= 1;
            M2C_FIELD(var_r6, s32 *, -4) = temp_r0_3;
            var_r6 -= 4;
        } while (var_r3_3 != 0);
    }
    var_r5_2 = var_r5 & 3;
    if (0 != var_r5_2) {
        do {
            temp_r0_4 = M2C_FIELD(var_r4, u8 *, -1);
            /* draft: did not compile: var_r4 -= 1; */
            var_r5_2 -= 1;
            M2C_FIELD(var_r6, u8 *, -1) = temp_r0_4;
            var_r6 -= 1;
        } while (var_r5_2 != 0);
    }
}

void fn_8014F4E4(s32 arg0, s32 arg1, u32 arg2) { } /* draft: stub */

void __stdio_atexit(void) {
    __stdio_exit = &__close_all;
}

void fn_8014F5B4(u32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8) {
    u32 *sp7C;
    M2C_UNK *sp78;
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    u32 sp68;
    f64 sp60;
    f64 sp58;
    f64 sp50;
    f64 sp48;
    f64 sp40;
    f64 sp38;
    f64 sp30;
    f64 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    u32 sp8;
    u32 temp_r3;
    u32 var_r4;

    if (M2C_ERROR(/* Read from unset register $cr0_eq */)) {
        sp28 = farg0;
        sp30 = farg1;
        sp38 = farg2;
        sp40 = farg3;
        sp48 = farg4;
        sp50 = farg5;
        sp58 = farg6;
        sp60 = farg7;
    }
    spC = arg1;
    sp8 = arg0;
    sp10 = arg2;
    sp14 = arg3;
    sp18 = arg4;
    sp1C = arg5;
    sp20 = arg6;
    sp24 = arg7;
    sp74 = 0x02000000;
    sp78 = &arg_sp8;
    sp7C = &sp8;
    sp68 = arg0;
    sp6C = -1;
    sp70 = 0;
    temp_r3 = __pformatter_8014FAAC(&__StringWrite, &sp68, arg1, &sp74);
    if (arg0 != 0U) {
        var_r4 = -2U;
        if (temp_r3 < -1U) {
            var_r4 = temp_r3;
        }
        /* draft: did not compile: *(arg0 + var_r4) = 0; */
    }
}

void fn_8014F694(u32 arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8) {
    u32 *sp7C;
    M2C_UNK *sp78;
    s32 sp74;
    s32 sp70;
    u32 sp6C;
    u32 sp68;
    f64 sp60;
    f64 sp58;
    f64 sp50;
    f64 sp48;
    f64 sp40;
    f64 sp38;
    f64 sp30;
    f64 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    u32 spC;
    u32 sp8;
    u32 temp_r3;
    u32 var_r4;

    if (M2C_ERROR(/* Read from unset register $cr0_eq */)) {
        sp28 = farg0;
        sp30 = farg1;
        sp38 = farg2;
        sp40 = farg3;
        sp48 = farg4;
        sp50 = farg5;
        sp58 = farg6;
        sp60 = farg7;
    }
    spC = arg1;
    sp14 = arg3;
    sp8 = arg0;
    sp10 = arg2;
    sp18 = arg4;
    sp1C = arg5;
    sp20 = arg6;
    sp24 = arg7;
    sp74 = 0x03000000;
    sp78 = &arg_sp8;
    sp7C = &sp8;
    sp68 = arg0;
    sp6C = arg1;
    sp70 = 0;
    temp_r3 = __pformatter_8014FAAC(&__StringWrite, &sp68, &sp74);
    if (arg0 != 0U) {
        var_r4 = arg1 - 1;
        if (temp_r3 < arg1) {
            var_r4 = temp_r3;
        }
        /* draft: did not compile: *(arg0 + var_r4) = 0; */
    }
}
