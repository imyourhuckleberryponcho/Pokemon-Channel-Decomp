/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK lbl_801DB0E8;
extern f64 lbl_801DB0F8;
extern f64 lbl_803528F0;
extern f64 lbl_803528F8;
extern f64 lbl_80352900;
extern f64 lbl_80352908;
extern f64 lbl_80352910;
extern f64 lbl_80352918;
extern f64 lbl_80352920;
extern f64 lbl_80352930;
extern f64 lbl_80352938;
extern f64 lbl_80352940;
extern f64 lbl_80352948;
extern f64 lbl_80352950;
extern f64 lbl_80352958;
extern f64 lbl_80352960;
extern M2C_UNK lbl_801DB138;
extern f64 lbl_80352968;
extern f64 lbl_80352970;
extern f64 lbl_80352978;
extern f64 lbl_80352980;
extern f64 lbl_80352988;
extern f64 lbl_80352990;
extern M2C_UNK lbl_801DB1A0;
extern f64 lbl_803529A0;
extern f64 lbl_803529A8;
extern f64 lbl_803529B0;
extern f64 lbl_803529B8;
extern f64 lbl_803529C0;
extern f64 lbl_803529C8;
extern f64 lbl_803529D0;
s32 __ieee754_rem_pio2(f64 *);
f64 __kernel_cos(f64, f64);
extern f64 lbl_803529D8;
extern f64 lbl_803529E0;
extern f64 lbl_803529E8;
extern f64 lbl_803529F0;
extern f64 lbl_803529F8;
extern f64 lbl_80352A00;
extern f64 lbl_80352A08;
extern f64 lbl_80352A10;
extern f64 lbl_80352A18;
extern f64 lbl_80352A20;
extern f64 lbl_80352A28;
M2C_UNK fn_80153338();
M2C_UNK fn_80153648();
M2C_UNK __ieee754_atan2();
M2C_UNK fn_80153B3C();
M2C_UNK __ieee754_fmod();
M2C_UNK __ieee754_log();
M2C_UNK fn_80154310();
M2C_UNK fn_80154420();
M2C_UNK TRKDispatchMessage();
M2C_UNK TRKGetBuffer(s32);
M2C_UNK TRKGetInput();
s32 TRKGetNextEvent(u8 *);
M2C_UNK TRKTargetContinue();
M2C_UNK TRKTargetInterrupt(u8 *);
s32 TRKTargetStopped();
M2C_UNK TRKTargetSupportRequest();
extern u8 *gTRKInputPendingPtr;
M2C_UNK TRKReleaseBuffer(s32);

s32 __kernel_rem_pio2(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0);
f64 __kernel_sin(s32 arg0, f64 farg0, f64 farg1);
f64 __kernel_tan(s32 arg0, f64 farg0, f64 farg1);
f64 ArcTan(f64 farg0);
f64 Ceil(f64 farg0);
f64 fn_8015658C(f64 farg0, f64 farg1);
f64 Cos(f64 farg0);
f64 Floor(f64 farg0);
f64 fn_801567D0(s32 *arg0, f64 farg0);
f64 fn_8015685C(s32 arg0, f64 farg0);
f64 fn_80156A20(void *arg0, f64 farg0);
f64 fn_80156B1C(f64 farg0, f64 farg1);
f64 Sin(f64 farg0);
f64 Tan(f64 farg0);
void ArcCos(void);
void ArcSin(void);
void ArcTan2(void);
void fn_80156E50(void);
void fn_80156E70(void);
void fn_80156E90(void);
void Log10(void);
void Pow(void);
f32 fn_80156EF0(void);
f32 fn_80156F14(void);
f32 fn_80156F38(void);
f32 fn_80156F5C(void);
void TRKNubMainLoop(void);
void TRKDestructEvent(void *arg0);
void fn_8015709C(void *arg0, s8 arg1);

s32 __kernel_rem_pio2(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

f64 __kernel_sin(s32 arg0, f64 farg0, f64 farg1) {
    f64 temp_f5;
    f64 temp_f1;
    f64 sp8;
    f64 temp_f7;

    sp8 = farg0;
    if (((s32) (M2C_BITWISE(s32, sp8) & 0x7FFFFFFF) < 0x3E400000) && ((s32) farg0 == 0)) {
        return farg0;
    }
    temp_f7 = sp8 * sp8;
    temp_f5 = temp_f7 * sp8;
    temp_f1 = lbl_80352930;
    temp_f1 += (temp_f7 * ((temp_f7 * ((temp_f7 * ((lbl_80352950 * temp_f7) + lbl_80352948)) + lbl_80352940)) + lbl_80352938));
    if (arg0 == 0U) {
        return (temp_f5 * ((temp_f7 * temp_f1) + lbl_80352958)) + sp8;
    }
    return sp8 - -((lbl_80352958 * temp_f5) - ((temp_f7 * ((lbl_80352960 * farg1) - (temp_f5 * temp_f1))) - farg1));
}

#pragma push
#pragma peephole off
f64 __kernel_tan(s32 arg0, f64 farg0, f64 farg1) {
    s32 unksp14;
    s32 unksp1C;
    s32 unkspC;
    f64 sp18;
    f64 sp10;
    f64 sp8;
    f64 temp_f0;
    f64 temp_f1;
    f64 temp_f1_2;
    f64 temp_f1_3;
    f64 temp_f31;
    f64 temp_f4;
    f64 temp_f6;
    f64 temp_f7;
    f64 var_f2;
    s32 temp_r6;
    s32 temp_r7;
    f64 temp_f13;

    var_f2 = farg1;
    sp8 = farg0;
    temp_r7 = M2C_BITWISE(s32, sp8);
    temp_r6 = temp_r7 & 0x7FFFFFFF;
    if ((temp_r6 < 0x3E300000) && ((s32) farg0 == 0)) {
        if (((arg0 + 1) | (temp_r6 | unkspC)) == 0) {
            return lbl_80352968 / fabs(farg0);
        }
        if (arg0 == 1) {
            return farg0;
        }
        return lbl_80352970 / farg0;
    }
    if (temp_r6 >= 0x3FE59428) {
        if (temp_r7 < 0) {
            var_f2 = -var_f2;
            sp8 = -sp8;
        }
        temp_f0 = lbl_80352980 - var_f2;
        var_f2 = lbl_80352988;
        temp_f1_2 = lbl_80352978 - sp8;
        sp18 = temp_f1_2;
        sp8 = temp_f1_2 + temp_f0;
    }
    temp_f13 = sp8 * sp8;
    temp_f31 = temp_f13 * temp_f13;
    temp_f1_3 = temp_f13 * sp8;
    sp18 = temp_f13;
    temp_f6 = (M2C_FIELD(&lbl_801DB138, f64 *, 0) * temp_f1_3) + ((temp_f13 * ((temp_f1_3 * ((temp_f31 * ((temp_f31 * ((temp_f31 * ((temp_f31 * ((temp_f31 * M2C_FIELD(&lbl_801DB138, f64 *, 0x58)) + M2C_FIELD(&lbl_801DB138, f64 *, 0x48))) + M2C_FIELD(&lbl_801DB138, f64 *, 0x38))) + M2C_FIELD(&lbl_801DB138, f64 *, 0x28))) + M2C_FIELD(&lbl_801DB138, f64 *, 0x18))) + M2C_FIELD(&lbl_801DB138, f64 *, 8) + (temp_f13 * ((temp_f31 * ((temp_f31 * ((temp_f31 * ((temp_f31 * ((temp_f31 * M2C_FIELD(&lbl_801DB138, f64 *, 0x60)) + M2C_FIELD(&lbl_801DB138, f64 *, 0x50))) + M2C_FIELD(&lbl_801DB138, f64 *, 0x40))) + M2C_FIELD(&lbl_801DB138, f64 *, 0x30))) + M2C_FIELD(&lbl_801DB138, f64 *, 0x20))) + M2C_FIELD(&lbl_801DB138, f64 *, 0x10))))) + var_f2)) + var_f2);
    temp_f1 = sp8 + temp_f6;
    if (temp_r6 >= 0x3FE59428) {
        temp_f7 = (f64) arg0;
        return (f64) (1 - ((temp_r7 >> 0x1EU) & 2)) * -((lbl_80352990 * (sp8 - (((temp_f1 * temp_f1) / (temp_f1 + temp_f7)) - temp_f6))) - temp_f7);
    }
    if (arg0 == 1) {
        return temp_f1;
    }
    sp18 = temp_f1;
    temp_f4 = lbl_80352970 / temp_f1;
    unksp1C = 0;
    sp10 = temp_f4;
    unksp14 = 0;
    return (temp_f4 * ((sp10 * (temp_f6 - (sp18 - sp8))) + ((sp10 * sp18) + lbl_80352968))) + sp10;
}
#pragma pop

f64 ArcTan(f64 farg0) {
    f64 sp8;
    f64 temp_f0;
    f64 temp_f10;
    s32 unkspC;
    f64 temp_f2;
    f64 temp_f3;
    f64 var_f1;
    s32 temp_r5;
    u32 temp_r6;
    s32 var_r0;
    void *temp_r3;
    f64 temp_f11;

    sp8 = farg0;
    temp_r6 = M2C_BITWISE(s32, sp8);
    temp_r5 = temp_r6 & 0x7FFFFFFF;
    if (temp_r5 >= 0x44100000) {
        if ((temp_r5 > 0x7FF00000) || (((u32) (temp_r5 + 0x80100000) == 0U) && (unkspC != 0))) {
            return 2.0 * sp8;
        }
        if (temp_r6 > 0) {
            return M2C_FIELD(&lbl_801DB1A0, f64 *, 0x18) + M2C_FIELD(&lbl_801DB1A0, f64 *, 0x38);
        }
        return -M2C_FIELD(&lbl_801DB1A0, f64 *, 0x18) - M2C_FIELD(&lbl_801DB1A0, f64 *, 0x38);
    }
    if (temp_r5 < 0x3FDC0000) {
        if ((temp_r5 < 0x3E200000) && ((lbl_803529A0 + farg0) > lbl_803529A8)) {
            return farg0;
        }
        var_r0 = -1;
        goto block_20;
    }
    temp_f3 = fabs(farg0);
    sp8 = temp_f3;
    if (temp_r5 < 0x3FF30000) {
        if (temp_r5 < 0x3FE60000) {
            var_r0 = 0;
            sp8 = ((lbl_803529B0 * temp_f3) - lbl_803529A8) / (lbl_803529B0 + temp_f3);
        } else {
            var_r0 = 1;
            sp8 = (temp_f3 - lbl_803529A8) / (lbl_803529A8 + temp_f3);
        }
    } else if (temp_r5 < 0x40038000) {
        var_r0 = 2;
        sp8 = (temp_f3 - lbl_803529B8) / ((lbl_803529B8 * temp_f3) + lbl_803529A8);
    } else {
        var_r0 = 3;
        sp8 = lbl_803529C0 / temp_f3;
    }
block_20:
    temp_f11 = sp8 * sp8;
    temp_f10 = temp_f11 * temp_f11;
    temp_f0 = temp_f11 * ((temp_f10 * ((temp_f10 * ((temp_f10 * ((temp_f10 * ((temp_f10 * M2C_FIELD(&lbl_801DB1A0, f64 *, 0x90)) + M2C_FIELD(&lbl_801DB1A0, f64 *, 0x80))) + M2C_FIELD(&lbl_801DB1A0, f64 *, 0x70))) + M2C_FIELD(&lbl_801DB1A0, f64 *, 0x60))) + M2C_FIELD(&lbl_801DB1A0, f64 *, 0x50))) + M2C_FIELD(&lbl_801DB1A0, f64 *, 0x40));
    temp_f2 = ((temp_f10 * ((temp_f10 * ((temp_f10 * ((temp_f10 * M2C_FIELD(&lbl_801DB1A0, f64 *, 0x88)) + M2C_FIELD(&lbl_801DB1A0, f64 *, 0x78))) + M2C_FIELD(&lbl_801DB1A0, f64 *, 0x68))) + M2C_FIELD(&lbl_801DB1A0, f64 *, 0x58))) + M2C_FIELD(&lbl_801DB1A0, f64 *, 0x48));
    temp_f2 *= temp_f10;
    if (var_r0 < 0) {
        return -((sp8 * (temp_f0 + temp_f2)) - sp8);
    }
    temp_r3 = &lbl_801DB1A0 + (var_r0 * 8);
    var_f1 = M2C_FIELD(temp_r3, f64 *, 0) - (((sp8 * (temp_f0 + temp_f2)) - M2C_FIELD(temp_r3, f64 *, 0x20)) - sp8);
    if (temp_r6 < 0) {
        var_f1 = -var_f1;
    }
    return var_f1;
}

f64 Ceil(f64 farg0) {
    s32 unkspC;
    f64 sp8;                                        /* compiler-managed */
    int var_r5;
    s32 temp_r4;
    s32 temp_r7;
    u32 temp_r0;
    u32 temp_r4_2;
    f64 var_f1;
    u32 var_r6;

    var_f1 = farg0;
    sp8 = var_f1;
    var_r5 = M2C_BITWISE(u32, (s32)sp8);
    var_r6 = unkspC;
    temp_r7 = ((var_r5 >> 0x14U) & 0x7FF) - 0x3FF;
    if (temp_r7 < 0x14) {
        if (temp_r7 < 0) {
            if ((lbl_803529C8 + var_f1) > (f32) lbl_803529D0) {
                if ((s32) var_r5 < 0) {
                    var_r5 = 0x80000000;
                    var_r6 = 0;
                } else if ((var_r5 | var_r6) != 0) {
                    var_r5 = 0x3FF00000;
                    var_r6 = 0;
                }
            }
            goto block_26;
        }
        temp_r4 = 0xFFFFF >> temp_r7;
        if ((var_r6 | (var_r5 & temp_r4)) == 0) {
            return var_f1;
        }
        if ((lbl_803529C8 + var_f1) > (f32) lbl_803529D0) {
            if ((s32) var_r5 > 0) {
                var_r5 += 0x100000 >> temp_r7;
            }
            var_r5 &= ~temp_r4;
            var_r6 = 0;
        }
        goto block_26;
    }
    if (temp_r7 > 0x33) {
        if (temp_r7 == 0x400) {
            return 2.0 * var_f1;
        }
        /* Duplicate return node #27. Try simplifying control flow for better match */
        return var_f1;
    }
    temp_r4_2 = -1U >> (temp_r7 - 0x14);
    if (!(var_r6 & temp_r4_2)) {
        return var_f1;
    }
    if ((lbl_803529C8 + var_f1) > (f32) lbl_803529D0) {
        if ((s32) var_r5 > 0) {
            if (temp_r7 == 0x14) {
                var_r5 += 1;
            } else {
                temp_r0 = var_r6;
                temp_r0 += (1 << (0x34 - temp_r7));
                if (temp_r0 < var_r6) {
                    var_r5 += 1;
                }
                var_r6 = temp_r0;
            }
        }
        var_r6 &= ~temp_r4_2;
    }
block_26:
    sp8 = var_r5;
    unkspC = var_r6;
    var_f1 = M2C_BITWISE(f64, sp8);
    return var_f1;
}

f64 fn_8015658C(f64 farg0, f64 farg1) {
    f64 sp10;
    f64 sp8;                                        /* compiler-managed */

    sp8 = farg0;
    sp10 = farg1;
    sp8 = (M2C_BITWISE(s32, sp10) & ~0x7FFFFFFF) | (M2C_BITWISE(s32, sp8) & 0x7FFFFFFF);
    return M2C_BITWISE(f64, sp8);
}

f64 Cos(f64 farg0) {
    s32 sp18;
    f64 sp10;
    f64 sp8;
    s32 temp_r0;
    s32 temp_r3;

    sp8 = farg0;
    temp_r3 = M2C_BITWISE(s32, sp8) & 0x7FFFFFFF;
    if (temp_r3 <= 0x3FE921FB) {
        return __kernel_cos((double)(lbl_803529D8), (double)(0));
    }
    if (temp_r3 >= 0x7FF00000) {
        return farg0 - farg0;
    }
    temp_r0 = __ieee754_rem_pio2(&sp10) & 3;
    switch (temp_r0) {                              /* irregular */
    case 1:
        return -__kernel_sin(1, sp10, sp18);
    case 2:
        return -__kernel_cos(sp10, sp18);
    case 0:
        return __kernel_cos(sp10, sp18);
    default:
        return __kernel_sin(1, sp10, sp18);
    }
}

f64 Floor(f64 farg0) {
    s32 unkspC;
    f64 sp8;                                        /* compiler-managed */
    int var_r5;
    s32 temp_r4;
    s32 temp_r7;
    u32 temp_r0;
    u32 temp_r4_2;
    f64 var_f1;
    u32 var_r6;

    var_f1 = farg0;
    sp8 = var_f1;
    var_r5 = M2C_BITWISE(u32, (s32)sp8);
    var_r6 = unkspC;
    temp_r7 = ((var_r5 >> 0x14U) & 0x7FF) - 0x3FF;
    if (temp_r7 < 0x14) {
        if (temp_r7 < 0) {
            if ((lbl_803529E0 + var_f1) > lbl_803529E8) {
                if ((s32) var_r5 >= 0) {
                    var_r6 = 0;
                    var_r5 = 0;
                } else if (((var_r5 & 0x7FFFFFFF) | var_r6) != 0) {
                    var_r5 = 0xBFF00000;
                    var_r6 = 0;
                }
            }
            goto block_26;
        }
        temp_r4 = 0xFFFFF >> temp_r7;
        if ((var_r6 | (var_r5 & temp_r4)) == 0) {
            return var_f1;
        }
        if ((lbl_803529E0 + var_f1) > lbl_803529E8) {
            if ((s32) var_r5 < 0) {
                var_r5 += 0x100000 >> temp_r7;
            }
            var_r5 &= ~temp_r4;
            var_r6 = 0;
        }
        goto block_26;
    }
    if (temp_r7 > 0x33) {
        if (temp_r7 == 0x400) {
            return 2.0 * var_f1;
        }
        /* Duplicate return node #27. Try simplifying control flow for better match */
        return var_f1;
    }
    temp_r4_2 = -1U >> (temp_r7 - 0x14);
    if (!(temp_r4_2 & var_r6)) {
        return var_f1;
    }
    if ((lbl_803529E0 + var_f1) > lbl_803529E8) {
        if ((s32) var_r5 < 0) {
            if (temp_r7 == 0x14) {
                var_r5 += 1;
            } else {
                temp_r0 = var_r6;
                temp_r0 += (1 << (0x34 - temp_r7));
                if (temp_r0 < var_r6) {
                    var_r5 += 1;
                }
                var_r6 = temp_r0;
            }
        }
        var_r6 &= ~temp_r4_2;
    }
block_26:
    sp8 = var_r5;
    unkspC = var_r6;
    var_f1 = M2C_BITWISE(f64, sp8);
    return var_f1;
}

f64 fn_801567D0(s32 *arg0, f64 farg0) {
    s32 unkspC;
    f64 sp8;                                        /* compiler-managed */
    s32 var_r4;

    sp8 = farg0;
    *arg0 = 0;
    var_r4 = M2C_BITWISE(s32, sp8) & 0x7FFFFFFF;
    if ((var_r4 >= 0x7FF00000) || ((var_r4 | unkspC) == 0)) {
        return M2C_BITWISE(f64, sp8);
    }
    if (var_r4 < 0x100000) {
        *arg0 = -0x36;
        sp8 = farg0 * lbl_803529F0;
        var_r4 = M2C_BITWISE(s32, sp8) & 0x7FFFFFFF;
    }
    sp8 = (M2C_BITWISE(s32, sp8) & 0x800FFFFF) | 0x3FE00000;
    *arg0 = ((var_r4 >> 0x14) + *arg0) - 0x3FE;
    return M2C_BITWISE(f64, sp8);
}

#pragma push
#pragma dont_inline on
f64 fn_8015685C(s32 arg0, f64 farg0) {
    s32 unkspC;
    s32 unksp14;
    f64 sp10;
    f64 sp8;                                        /* compiler-managed */
    f64 temp_f1;
    f64 var_f1;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r4;
    u32 temp_r5_2;

    var_f1 = farg0;
    sp10 = var_f1;
    temp_r5 = M2C_BITWISE(s32, sp10);
    temp_r4 = temp_r5 & 0x7FF00000;
    sp8 = var_f1;
    switch (temp_r4) {                              /* irregular */
    case 0x7FF00000:
        if ((temp_r5 & 0xFFFFF) || (unksp14 != 0)) {
            var_r0 = 1;
        } else {
            var_r0 = 2;
        }
        break;
    case 0x0:
        if ((temp_r5 & 0xFFFFF) || (unksp14 != 0)) {
            var_r0 = 5;
        } else {
            var_r0 = 3;
        }
        break;
    default:
        var_r0 = 4;
        break;
    }
    if (var_r0 > 2) {
        if (lbl_803529F8 == var_f1) {
            return var_f1;
        }
        temp_r5_2 = M2C_BITWISE(u32, (s32)sp8);
        var_r4 = (temp_r5_2 >> 0x14U) & 0x7FF;
        if (var_r4 == 0) {
            if ((unkspC | (temp_r5_2 & 0x7FFFFFFF)) == 0) {
                return var_f1;
            }
            temp_f1 = sp8 * lbl_80352A00;
            sp8 = temp_f1;
            var_r4 = ((M2C_BITWISE(u32, (s32)sp8) >> 0x14U) & 0x7FF) - 0x36;
            if (arg0 < 0xFFFF3CB0) {
                return lbl_80352A08 * temp_f1;
            }
            goto block_21;
        }
block_21:
        if (var_r4 == 0x7FF) {
            return 2.0 * sp8;
        }
        temp_r4_2 = var_r4 + arg0;
        if (temp_r4_2 > 0x7FE) {
            return lbl_80352A10 * fn_8015658C(lbl_80352A10, sp8);
        }
        if (temp_r4_2 > 0) {
            sp8 = (M2C_BITWISE(u32, sp8) & 0x800FFFFF) | (temp_r4_2 << 0x14);
            return M2C_BITWISE(f64, sp8);
        }
        if (temp_r4_2 <= -0x36) {
            if (arg0 > 0xC350) {
                return lbl_80352A10 * fn_8015658C(lbl_80352A10, M2C_BITWISE(f64, sp8));
            }
            return lbl_80352A08 * fn_8015658C(lbl_80352A08, M2C_BITWISE(f64, sp8));
        }
        sp8 = (M2C_BITWISE(u32, sp8) & 0x800FFFFF) | ((temp_r4_2 + 0x36) << 0x14);
        var_f1 = lbl_80352A18;
        var_f1 *= M2C_BITWISE(f64, sp8);
        /* Duplicate return node #32. Try simplifying control flow for better match */
        return var_f1;
    }
    return var_f1;
}
#pragma pop

f64 fn_80156A20(void *arg0, f64 farg0) {
    s32 unkspC;
    f64 sp8;                                        /* compiler-managed */
    s32 temp_r4;
    s32 temp_r7;
    u32 temp_r4_2;
    u32 temp_r5;

    sp8 = farg0;
    temp_r5 = M2C_BITWISE(u32, sp8);
    temp_r7 = ((temp_r5 >> 0x14U) & 0x7FF) - 0x3FF;
    if (temp_r7 < 0x14) {
        if (temp_r7 < 0) {
            M2C_FIELD(arg0, u32 *, 0) = (u32) (temp_r5 & 0x80000000);
            M2C_FIELD(arg0, s32 *, 4) = 0;
            return farg0;
        }
        temp_r4 = 0xFFFFF >> temp_r7;
        if ((unkspC | (temp_r5 & temp_r4)) == 0) {
            sp8 = temp_r5 & 0x80000000;
            unkspC = 0;
            M2C_FIELD(arg0, u32 *, 0) = farg0;
            return M2C_BITWISE(f64, sp8);
        }
        M2C_FIELD(arg0, u32 *, 0) = (u32) (temp_r5 & ~temp_r4);
        M2C_FIELD(arg0, s32 *, 4) = 0;
        return farg0 - M2C_BITWISE(f64, M2C_FIELD(arg0, u32 *, 0));
    }
    if (temp_r7 > 0x33) {
        sp8 = temp_r5 & 0x80000000;
        unkspC = 0;
        M2C_FIELD(arg0, u32 *, 0) = farg0;
        return M2C_BITWISE(f64, sp8);
    }
    temp_r4_2 = -1U >> (temp_r7 - 0x14);
    if (!(unkspC & temp_r4_2)) {
        sp8 = temp_r5 & 0x80000000;
        unkspC = 0;
        M2C_FIELD(arg0, u32 *, 0) = farg0;
        return M2C_BITWISE(f64, sp8);
    }
    M2C_FIELD(arg0, u32 *, 0) = temp_r5;
    M2C_FIELD(arg0, s32 *, 4) = (s32) (unkspC & ~temp_r4_2);
    return farg0 - M2C_BITWISE(f64, M2C_FIELD(arg0, u32 *, 0));
}

f64 fn_80156B1C(f64 farg0, f64 farg1) {
    s32 unksp14;
    u32 unkspC;
    f64 sp10;                                       /* compiler-managed */
    f64 sp8;                                        /* compiler-managed */
    f64 temp_f0;
    f64 temp_f0_2;
    f64 temp_f1;
    s32 var_r4;
    s32 temp_r3_2;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r3;
    s32 var_r7;

    sp8 = farg0;
    var_r4 = M2C_BITWISE(s32, sp8);
    sp10 = farg1;
    temp_r5 = var_r4 & 0x7FFFFFFF;
    temp_r3 = M2C_BITWISE(s32, sp10);
    temp_r6 = temp_r3 & 0x7FFFFFFF;
    if (((temp_r5 >= 0x7FF00000) && (((temp_r5 + 0x80100000) | unkspC) != 0)) || ((temp_r6 >= 0x7FF00000) && (((temp_r6 + 0x80100000) | unksp14) != 0))) {
        return M2C_BITWISE(f64, sp8) + M2C_BITWISE(f64, sp10);
    }
    if ((f32) sp8 == (f32) sp10) {
        return sp8;
    }
    if ((temp_r5 | unkspC) == 0) {
        sp8 = temp_r3 & 0x80000000;
        unkspC = 1;
        temp_f0 = M2C_BITWISE(f64, sp8);
        temp_f1 = temp_f0 * temp_f0;
        sp10 = temp_f1;
        if (temp_f1 == (f32) temp_f0) {
            return temp_f1;
        }
        return temp_f0;
    }
    if (var_r4 >= 0) {
        if ((var_r4 > temp_r3) || ((var_r4 == temp_r3) && (unkspC > unksp14))) {
            if (unkspC == 0) {
                var_r4 -= 1;
            }
            var_r7 = unkspC - 1;
        } else {
            var_r7 = unkspC + 1;
            if (var_r7 == 0) {
                var_r4 += 1;
            }
        }
    } else if ((temp_r3 >= 0) || (var_r4 > temp_r3) || ((var_r4 == temp_r3) && (unkspC > unksp14))) {
        if (unkspC == 0) {
            var_r4 -= 1;
        }
        var_r7 = unkspC - 1;
    } else {
        var_r7 = unkspC + 1;
        if (var_r7 == 0) {
            var_r4 += 1;
        }
    }
    temp_r3_2 = var_r4 & 0x7FF00000;
    if (temp_r3_2 >= 0x7FF00000) {
        return 2.0 * sp8;
    }
    if (temp_r3_2 < 0x100000) {
        temp_f0_2 = sp8 * sp8;
        sp10 = temp_f0_2;
        if (temp_f0_2 != sp8) {
            sp10 = var_r4;
            unksp14 = var_r7;
            return M2C_BITWISE(f64, sp10);
        }
    }
    sp8 = var_r4;
    unkspC = var_r7;
    return M2C_BITWISE(f64, sp8);
}

f64 Sin(f64 farg0) {
    s32 sp18;
    f64 sp10;
    f64 sp8;
    s32 temp_r0;
    s32 temp_r3;

    sp8 = farg0;
    temp_r3 = M2C_BITWISE(s32, sp8) & 0x7FFFFFFF;
    if (temp_r3 <= 0x3FE921FB) {
        return __kernel_sin((long)(0), (double)(lbl_80352A20), (double)(0));
    }
    if (temp_r3 >= 0x7FF00000) {
        return farg0 - farg0;
    }
    temp_r0 = __ieee754_rem_pio2(&sp10) & 3;
    switch (temp_r0) {                              /* irregular */
    case 1:
        return __kernel_cos(sp10, sp18);
    case 2:
        return -__kernel_sin(1, sp10, sp18);
    case 0:
        return __kernel_sin(1, sp10, sp18);
    default:
        return -__kernel_cos(sp10, sp18);
    }
}

f64 Tan(f64 farg0) {
    s32 sp18;
    f64 sp10;
    f64 sp8;
    s32 temp_r3;

    sp8 = farg0;
    temp_r3 = M2C_BITWISE(s32, sp8) & 0x7FFFFFFF;
    if (temp_r3 <= 0x3FE921FB) {
        return __kernel_tan((long)(1), (double)(lbl_80352A28), (double)(0));
    }
    if (temp_r3 >= 0x7FF00000) {
        return farg0 - farg0;
    }
    return __kernel_tan(1 - ((__ieee754_rem_pio2(&sp10) * 2) & 2), sp10, sp18);
}

void ArcCos(void) {
    fn_80153338();
}

void ArcSin(void) {
    fn_80153648();
}

void ArcTan2(void) {
    __ieee754_atan2();
}

void fn_80156E50(void) {
    fn_80153B3C();
}

void fn_80156E70(void) {
    __ieee754_fmod();
}

void fn_80156E90(void) {
    __ieee754_log();
}

void Log10(void) {
    fn_80154310();
}

void Pow(void) {
    fn_80154420();
}

f32 fn_80156EF0(void) {
    return (f32) Tan((double)(0));
}

f32 fn_80156F14(void) {
    return (f32) Sin((double)(0));
}

f32 fn_80156F38(void) {
    return (f32) Cos((double)(0));
}

f32 fn_80156F5C(void) {
    return 0;
}

void TRKNubMainLoop(void) {
    s32 sp10;
    u8 sp8;
    s32 var_r30;
    s32 var_r31;

    var_r31 = 0;
    var_r30 = 0;
loop_21:
    if (var_r31 == 0) {
        if (TRKGetNextEvent(&sp8) != 0) {
            var_r30 = 0;
            switch ((s32) sp8) {                    /* irregular */
            case 0:
                break;
            case 2:
                TRKGetBuffer(sp10);
                TRKDispatchMessage();
                break;
            case 1:
                var_r31 = 1;
                break;
            default:
                TRKTargetInterrupt(&sp8);
                break;
            case 5:
                TRKTargetSupportRequest();
                break;
            }
            TRKDestructEvent(&sp8);
        } else if ((var_r30 == 0) || ((u8) *gTRKInputPendingPtr != 0)) {
            var_r30 = 1;
            TRKGetInput();
        } else {
            if (TRKTargetStopped() == 0) {
                TRKTargetContinue();
            }
            var_r30 = 0;
        }
        goto loop_21;
    }
}

void TRKDestructEvent(void *arg0) {
    TRKReleaseBuffer(M2C_FIELD(arg0, s32 *, 8));
}

void fn_8015709C(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = -1;
}
