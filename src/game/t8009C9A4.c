/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800A1984(s32, s32, s32, f32, f32, f32, f32);
s32 get_up_vector_for_viewing_mtx();
s32 fn_800A5CD4(s32);
u8 fn_800A5EE8(u32);
extern f32 lbl_80351B28;
extern f32 lbl_80351B2C;
f32 fn_800A613C(u32, f32, f32);
extern f32 lbl_80351B30;
s32 fn_800A5F5C(u32, f32, f32);
f32 fn_800A6074(u32, s32, f32, f32);
s32 fn_800A6194();
M2C_UNK fn_800A61C4(f32 *);
M2C_UNK fn_80005888(void **);
M2C_UNK fn_80073810(void *, void **);
M2C_UNK fn_8007AFE0(void *, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_8022A498;
M2C_UNK fn_8009DD68(s32);
extern M2C_UNK lbl_8022A55C;
M2C_UNK fn_80073B80(void *, M2C_UNK);
M2C_UNK fn_8007B034(void *);
M2C_UNK fn_8009C110();
M2C_UNK fn_8009C094(s32, void *);
M2C_UNK fn_8009DDC8(M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_8022A644;
extern M2C_UNK lbl_8022A67C;
M2C_UNK fn_8009F21C();
u32 fn_8001685C(s32 **);

void fn_8009C9A4(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0, f32 farg1, f32 farg2);
void RequestTzmap(void *arg0, s32 arg1);
s32 IsTzmapLoaded(void *arg0);
f32 fn_8009CB70(void *arg0, void *arg1);
s32 fn_8009CBD4(void *arg0, void *arg1);
f32 fn_8009CC20(void *arg0, void *arg1, s32 arg2);
s32 fn_8009CC88(void *arg0);
void fn_8009CCBC(void *arg0, void *arg1);
s32 *fn_8009CD58(s32 *arg0, s32 arg1);
void *fn_8009CD98(void *arg0);
void **fn_8009CDD8(void **arg0, s16 arg1);
void fn_8009CE50(void *arg0, void *arg1);
void fn_8009CED0(void *arg0, void *arg1, void *arg2, void *arg3);
void *fn_8009CF68(void *arg0);
void fn_8009D02C(s32 **arg0, s32 **arg1);
void fn_8009D050(s32 **arg0, s32 arg1);
void *fn_8009D0CC(void *arg0, s16 arg1);
s32 fn_8009D158(void *arg0);
void fn_8009D16C(void *arg0, s32 arg1);
void *fn_8009D1E4(void *arg0, s16 arg1);
u32 fn_8009D244(s32 *arg0);
s32 fn_8009D308(void);
void fn_8009D310(void);
void fn_8009D314(void);
s32 fn_8009D318(void);
void fn_8009D320(s32 **arg0);
void fn_8009D344(void *arg0, s32 arg1);
void *fn_8009D380(void *arg0, s16 arg1);
u32 fn_8009D45C(s32 *arg0);
void fn_8009D520(s32 **arg0, void *arg1, s32 arg2);
void fn_8009D5E0(s32 **arg0);
void fn_8009D6D4(s32 **arg0, s32 **arg1);

void fn_8009C9A4(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0, f32 farg1, f32 farg2) {
    void *spC;
    void *sp8;
    void *temp_r0;
    void *temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x288) != 0U) {
        fn_800A1984((long)(0), (long)(0), (long)(0), (float)(0), (float)(0), (float)(0), (float)(0));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x284) != 0U) {
        fn_800A1984((long)(arg1), (long)(arg2), (long)(arg3), (float)(farg0), (float)(farg1), (float)(farg2), (float)(0));
    }
    /* draft: did not compile: temp_r31 = arg0 + 0x290; */
    temp_r0 = M2C_FIELD(temp_r31, void **, 4);
    sp8 = temp_r0;
    spC = temp_r0;
loop_6:
    if (spC != temp_r31) {
        fn_800A1984(M2C_FIELD(spC, s32 *, 8), arg1, arg2, M2C_BITWISE(f32, arg3), farg0, farg1, farg2);
        spC = M2C_FIELD(spC, void **, 4);
        goto loop_6;
    }
}

void RequestTzmap(void *arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = get_up_vector_for_viewing_mtx(8);
    if (var_r0 != 0) {
        var_r0 = fn_800A5CD4(arg1);
    }
    M2C_FIELD(arg0, s32 *, 0x268) = var_r0;
}

s32 IsTzmapLoaded(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x26C) != 0U) {
        return 1;
    }
    if (fn_800A5EE8(M2C_FIELD(arg0, u32 *, 0x268)) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, u32 *, 0x26C) = (u32) M2C_FIELD(arg0, u32 *, 0x268);
    M2C_FIELD(arg0, u32 *, 0x268) = 0U;
    M2C_FIELD(arg0, f32 *, 0x270) = (f32) lbl_80351B28;
    M2C_FIELD(arg0, f32 *, 0x274) = (f32) (lbl_80351B2C / M2C_FIELD(arg0, f32 *, 0x270));
    return 1;
}

f32 fn_8009CB70(void *arg0, void *arg1) {
    f32 temp_f2;
    f32 temp_f31;
    u32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0x26C);
    if (temp_r0 == 0U) {
        return lbl_80351B30;
    }
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x274);
    temp_f31 = M2C_FIELD(arg0, f32 *, 0x270);
    return temp_f31 * fn_800A613C(temp_r0, M2C_FIELD(arg1, f32 *, 0) * temp_f2, M2C_FIELD(arg1, f32 *, 8) * temp_f2);
}

s32 fn_8009CBD4(void *arg0, void *arg1) {
    f32 temp_f2;
    u32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0x26C);
    if (temp_r0 == 0U) {
        return -1;
    }
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x274);
    return fn_800A5F5C(temp_r0, M2C_FIELD(arg1, f32 *, 0) * temp_f2, M2C_FIELD(arg1, f32 *, 8) * temp_f2);
}

f32 fn_8009CC20(void *arg0, void *arg1, s32 arg2) {
    f32 temp_f2;
    f32 temp_f31;
    u32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0x26C);
    if (temp_r0 == 0U) {
        return lbl_80351B30;
    }
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x274);
    temp_f31 = M2C_FIELD(arg0, f32 *, 0x270);
    return temp_f31 * fn_800A6074(temp_r0, arg2, M2C_FIELD(arg1, f32 *, 0) * temp_f2, M2C_FIELD(arg1, f32 *, 8) * temp_f2);
}

s32 fn_8009CC88(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x26C) != 0U) {
        return fn_800A6194();
    }
    return 9;
}

void fn_8009CCBC(void *arg0, void *arg1) {
    u32 sp28;
    u32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;

    if ((u32) M2C_FIELD(arg1, u32 *, 0x26C) != 0U) {
        fn_800A61C4(&sp20);
        sp8 = sp20;
        spC = sp24;
        sp10 = sp28;
    } else {
        sp14 = lbl_80351B30;
        sp18 = lbl_80351B2C;
        sp1C = lbl_80351B30;
        sp8 = sp14;
        spC = sp18;
        sp10 = sp1C;
    }
    M2C_FIELD(arg0, f32 *, 0) = sp8;
    M2C_FIELD(arg0, f32 *, 8) = sp10;
    M2C_FIELD(arg0, f32 *, 4) = spC;
}

s32 *fn_8009CD58(s32 *arg0, s32 arg1) {
    M2C_UNK sp8;

    /* draft: did not compile: fn_8009CED0(&sp8, *arg0, arg0, arg1); */
    return arg0;
}

void *fn_8009CD98(void *arg0) {
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(temp_r31, void **, 0x34);
    /* draft: did not compile: fn_8009CE50(M2C_FIELD(arg0, s32 *, 0), temp_r31); */
    return temp_r31;
}

void **fn_8009CDD8(void **arg0, s16 arg1) {
    void *temp_r3;

    if (arg0 != NULL) {
loop_4:
        temp_r3 = *arg0;
        if (temp_r3 != NULL) {
            if (temp_r3 != NULL) {
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
            goto loop_4;
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_8009CE50(void *arg0, void *arg1) {
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg1, void **, 0x34);
    if (temp_r6 != NULL) {
        temp_r5 = M2C_FIELD(arg1, void **, 0x30);
        if (temp_r5 != NULL) {
            M2C_FIELD(temp_r5, void **, 0x34) = temp_r6;
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x34), void **, 0x30) = (void *) M2C_FIELD(arg1, void **, 0x30);
        } else {
            M2C_FIELD(temp_r6, void **, 0x30) = NULL;
            M2C_FIELD(arg0, void **, 0) = (void *) M2C_FIELD(arg1, void **, 0x34);
        }
    } else {
        temp_r5_2 = M2C_FIELD(arg1, void **, 0x30);
        if (temp_r5_2 != NULL) {
            M2C_FIELD(temp_r5_2, void **, 0x34) = NULL;
            M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(arg1, void **, 0x30);
        } else {
            M2C_FIELD(arg0, void **, 4) = NULL;
            M2C_FIELD(arg0, void **, 0) = NULL;
        }
    }
    M2C_FIELD(arg1, s32 *, 0x2C) = 0;
    M2C_FIELD(arg1, void **, 0x30) = NULL;
    M2C_FIELD(arg1, void **, 0x34) = NULL;
}

void fn_8009CED0(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *temp_r5;
    void *temp_r7;

    temp_r7 = M2C_FIELD(arg2, void **, 4);
    if (temp_r7 == NULL) {
        temp_r5 = M2C_FIELD(arg1, void **, 4);
        if (temp_r5 != NULL) {
            M2C_FIELD(temp_r5, void **, 0x34) = arg3;
            M2C_FIELD(arg3, void **, 0x30) = (void *) M2C_FIELD(arg1, void **, 4);
            M2C_FIELD(arg3, void **, 0x34) = NULL;
            M2C_FIELD(arg1, void **, 4) = arg3;
        } else {
            M2C_FIELD(arg1, void **, 0) = arg3;
            M2C_FIELD(arg1, void **, 4) = arg3;
            M2C_FIELD(arg3, void **, 0x30) = NULL;
            M2C_FIELD(arg3, void **, 0x34) = NULL;
        }
    } else if ((void *) M2C_FIELD(temp_r7, void **, 0x30) != NULL) {
        M2C_FIELD(arg3, void **, 0x34) = temp_r7;
        M2C_FIELD(arg3, void **, 0x30) = (void *) M2C_FIELD(temp_r7, void **, 0x30);
        M2C_FIELD(M2C_FIELD(temp_r7, void **, 0x30), void **, 0x34) = arg3;
        M2C_FIELD(temp_r7, void **, 0x30) = arg3;
    } else {
        M2C_FIELD(arg3, void **, 0x34) = temp_r7;
        M2C_FIELD(arg3, void **, 0x30) = NULL;
        M2C_FIELD(temp_r7, void **, 0x30) = arg3;
        M2C_FIELD(arg1, void **, 0) = arg3;
    }
    M2C_FIELD(arg3, void **, 0x2C) = arg1;
    M2C_FIELD(arg0, void **, 0) = arg1;
    M2C_FIELD(arg0, void **, 4) = arg3;
}

void *fn_8009CF68(void *arg0) {
    void *sp8;

    /* draft: did not compile: fn_8009D02C(&sp8); */
    fn_80073810(arg0, &sp8);
    if (sp8 != NULL) {
        M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp8, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    sp8 = NULL;
    M2C_FIELD(arg0, s32 *, 4) = 0xA0000;
    M2C_FIELD(arg0, s32 *, 0x1B8) = 5;
    M2C_FIELD(arg0, s32 *, 0x1BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_8022A498;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 0x2000);
    fn_8007AFE0(arg0, 5, 0);
    return arg0;
}

void fn_8009D02C(s32 **arg0, s32 **arg1) {
    s32 *temp_r4;

    *arg0 = *arg1;
    temp_r4 = *arg0;
    if (temp_r4 != NULL) {
        *temp_r4 += 1;
    }
}

#pragma push
#pragma peephole off
void fn_8009D050(s32 **arg0, s32 arg1) {
    s32 *temp_r3;
    s32 *temp_r4;

    /* draft: did not compile: temp_r3 = get_up_vector_for_viewing_mtx(0x3C); */
    if (temp_r3 != NULL) {
        fn_8009DD68(arg1);
        M2C_FIELD(temp_r3, M2C_UNK **, 4) = &lbl_8022A55C;
    }
    *arg0 = temp_r3;
    temp_r4 = *arg0;
    if (temp_r4 != NULL) {
        *temp_r4 += 1;
    }
}
#pragma pop

void *fn_8009D0CC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_8022A498;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x1BC) != 0U) {
            fn_8009C110(arg0);
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0) != 0U) {
            fn_8007B034(arg0);
        }
        fn_80073B80(arg0, 0);
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

s32 fn_8009D158(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 8) & 0x200000) == 0;
}

void fn_8009D16C(void *arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r31;
    s32 temp_r30;

    var_r0 = 0xA;
    if (arg1 < 0xA) {
        var_r0 = arg1;
    }
    var_r31 = -0xA;
    if (var_r0 > -0xA) {
        var_r31 = var_r0;
    }
    temp_r30 = M2C_FIELD(arg0, s32 *, 0x1BC);
    fn_8009C110(temp_r30, arg0);
    M2C_FIELD(arg0, s32 *, 0x1B8) = var_r31;
    fn_8009C094(temp_r30, arg0);
}

void *fn_8009D1E4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_8022A55C;
        fn_8009DDC8(0, &lbl_8022A55C);
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

u32 fn_8009D244(s32 *arg0) {
    s8 var_r3;
    s8 var_r30;
    s32 *sp8;

    var_r30 = 0;
    var_r3 = get_up_vector_for_viewing_mtx(0x1C4);
    if (var_r3 != 0U) {
        sp8 = arg0;
        if (arg0 != NULL) {
            *arg0 += 1;
        }
        var_r30 = 1;
        /* draft: did not compile: var_r3 = fn_8009CF68(&sp8); */
    }
    if (var_r30 != 0) {
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) -= 1;
            if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp8, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp8 = NULL;
    }
    return var_r3;
}

s32 fn_8009D308(void) {
    return 0;
}

void fn_8009D310(void) {

}

void fn_8009D314(void) {

}

s32 fn_8009D318(void) {
    return 0;
}

void fn_8009D320(s32 **arg0) {
    s32 *temp_r4;

    *arg0 = NULL;
    temp_r4 = *arg0;
    if (temp_r4 != NULL) {
        *temp_r4 += 1;
    }
}

void fn_8009D344(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_8022A67C;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_8022A644;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

void *fn_8009D380(void *arg0, s16 arg1) {
    void *temp_r3;
    void *temp_r4;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_8022A644;
        if (0 /* draft: did not compile */) {
            /* draft: did not compile: fn_8009F21C(arg0 + 0x10, 0); */
        }
        if (0 /* draft: did not compile */) {
            temp_r4 = M2C_FIELD(arg0, void **, 0xC);
            if (temp_r4 != NULL) {
                M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
                if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                    temp_r3 = M2C_FIELD(arg0, void **, 0xC);
                    if (temp_r3 != NULL) {
                        M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            M2C_FIELD(arg0, void **, 0xC) = NULL;
        }
        if (arg0 != NULL) {
            M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_8022A67C;
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

u32 fn_8009D45C(s32 *arg0) {
    s32 *sp8;
    s8 var_r3;
    s8 var_r30;

    var_r30 = 0;
    var_r3 = get_up_vector_for_viewing_mtx(0x1F8);
    if (var_r3 != 0U) {
        sp8 = arg0;
        if (arg0 != NULL) {
            *arg0 += 1;
        }
        var_r30 = 1;
        var_r3 = fn_8001685C(&sp8);
    }
    if (var_r30 != 0) {
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) -= 1;
            if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp8, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        sp8 = NULL;
    }
    return var_r3;
}

void fn_8009D520(s32 **arg0, void *arg1, s32 arg2) {
    s32 *temp_r0;
    s32 *temp_r4;
    s32 *temp_r4_2;
    s32 *temp_r4_3;
    s32 *temp_r4_4;
    s32 temp_r5;

    if ((u32) (arg2 + 0xC8000000) == 0U) {
        *arg0 = NULL;
        temp_r4 = *arg0;
        if (temp_r4 != NULL) {
            *temp_r4 += 1;
        }
    } else {
        temp_r5 = arg2 & 0xFFF;
        if ((temp_r5 < 0) || ((u32) temp_r5 >= (u32) M2C_FIELD(arg1, u32 *, 0x14))) {
            *arg0 = NULL;
            temp_r4_2 = *arg0;
            if (temp_r4_2 != NULL) {
                *temp_r4_2 += 1;
            }
        } else {
            /* draft: did not compile: temp_r0 = *(M2C_FIELD(arg1, s32 *, 0x18) + (temp_r5 * 4)); */
            if (temp_r0 == NULL) {
                *arg0 = NULL;
                temp_r4_3 = *arg0;
                if (temp_r4_3 != NULL) {
                    *temp_r4_3 += 1;
                }
            } else {
                *arg0 = temp_r0;
                temp_r4_4 = *arg0;
                if (temp_r4_4 != NULL) {
                    *temp_r4_4 += 1;
                }
            }
        }
    }
}

void fn_8009D5E0(s32 **arg0) {
    void *spC;
    s32 *sp8;

    /* draft: did not compile: fn_8009D520(&spC); */
    /* draft: did not compile: fn_8009D6D4(&sp8, &spC); */
    *arg0 = sp8;
    if ((*arg0) != NULL) {
        *(*arg0) += 1;
    }
    if (sp8 != NULL) {
        M2C_FIELD(sp8, s32 *, 0) -= 1;
        if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp8, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    sp8 = NULL;
    if (spC != NULL) {
        M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(spC, s32 *, 0) == 0) && (spC != NULL)) {
            M2C_FIELD(M2C_FIELD(spC, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    spC = NULL;
}

void fn_8009D6D4(s32 **arg0, s32 **arg1) {
    s32 *temp_r4;

    *arg0 = *arg1;
    temp_r4 = *arg0;
    if (temp_r4 != NULL) {
        *temp_r4 += 1;
    }
}
