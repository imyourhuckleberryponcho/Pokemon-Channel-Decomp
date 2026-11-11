/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_8034EA80;
extern M2C_UNK lbl_8034EA88;
extern M2C_UNK lbl_8034EA90;
extern M2C_UNK lbl_80223AA0;
extern M2C_UNK lbl_8034EA98;
M2C_UNK fn_80073220(s32, s32);
M2C_UNK fn_80104500();
M2C_UNK HSD_MtxGetTranslate();
extern f32 lbl_80351910;
M2C_UNK fn_800FD7C8(void *);
M2C_UNK fn_80070D60(s32, f32, f32, f32);
M2C_UNK PSMTXTransApply(s32, s32, f32, f32, f32);
f64 fn_80156E70(f64, f64);
extern f32 lbl_80351914;
extern f64 lbl_80351918;
extern f64 lbl_80351920;
extern f64 lbl_80351928;
M2C_UNK fn_800716AC();
M2C_UNK fn_80005888(s32);
s32 get_up_vector_for_viewing_mtx(M2C_UNK);
extern M2C_UNK lbl_80223ADC;
extern M2C_UNK lbl_8034EAA0;

void fn_80071748(void *arg0, void *arg1);
void fn_800717C8(void *arg0, void *arg1);
void fn_800718FC(s32 arg0, s32 arg1);
void fn_80071928(void *arg0, s32 arg1);
void fn_8007198C(void *arg0, void *arg1);
void fn_80071A64(void *arg0, void *arg1);
void fn_80071C00(void *arg0, void *arg1);
void fn_80071E60(void *arg0, s32 arg1);
void fn_80071EC0(f32 *arg0, f32 farg0, f32 farg1, f32 farg2);
f32 fn_80071ED0(f32 farg0);
void fn_80071F24(f32 *arg0, f32 farg1, f32 farg2);
void fn_80072010(s32 arg0, void *arg1, void *arg2, f32 farg0);
void *fn_8007215C(void *arg0, s32 arg1, f32 farg0);
s32 fn_800721C4(s32 arg0, s16 arg1);
void fn_80072214(void *arg0);
void fn_80072264(void *arg0, void *arg1, f32 farg0);
void fn_80072328();
s32 fn_8007247C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_8007250C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_8007259C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_80072624(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_8007268C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_8007271C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_800727AC(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_80072858(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_8007292C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_80072A10(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_80072AA0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_80072B30(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
u8 fn_80072C04(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
u8 fn_80072C9C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
u8 fn_80072D34(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);

void fn_80071748(void *arg0, void *arg1) {
    fn_800717C8((void *)(0), (void *)(0));
    if (arg1 == NULL) {
        __assert(&lbl_8034EA80, 0x351, &lbl_8034EA88);
    }
    if (arg0 == NULL) {
        __assert(&lbl_8034EA80, 0x352, &lbl_8034EA90);
    }
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0x2C);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 0x30);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0x34);
}

void fn_800717C8(void *arg0, void *arg1) {
    if (arg1 == NULL) {
        __assert(&lbl_8034EA80, 0x351, &lbl_8034EA88);
    }
    if (arg0 == NULL) {
        __assert(&lbl_8034EA80, 0x352, &lbl_8034EA90);
    }
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0x2C);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 0x30);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0x34);
    if (arg1 == NULL) {
        __assert(&lbl_8034EA80, 0x2DD, &lbl_8034EA88);
    }
    if (0 /* draft: did not compile */) {
        __assert(&lbl_8034EA80, 0x2DE, &lbl_8034EA98);
    }
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0x28);
    if (arg1 == NULL) {
        __assert(&lbl_8034EA80, 0x3E4, &lbl_8034EA88);
    }
    if (0 /* draft: did not compile */) {
        __assert(&lbl_8034EA80, 0x3E5, &lbl_80223AA0);
    }
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x3C);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg1, f32 *, 0x40);
    if (M2C_FIELD(arg1, s32 *, 0x14) & 0x20000) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0x10000;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
}

void fn_800718FC(s32 arg0, s32 arg1) {
    fn_80073220(arg1, arg0);
}

void fn_80071928(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_80351910;
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_80351910;
    M2C_FIELD(arg0, f32 *, 0) = (f32) lbl_80351910;
    /* draft: did not compile: fn_80104500(arg1, arg0 + 0xC); */
    /* draft: did not compile: HSD_MtxGetTranslate(arg1, arg0 + 0x1C); */
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
}

void fn_8007198C(void *arg0, void *arg1) {
    s32 temp_cr0_eq;
    s32 temp_r4;
    u8 var_r3;

    if (arg1 == NULL) {
        __assert(&lbl_8034EA80, 0x316, &lbl_8034EA88);
    }
    if (arg0 == NULL) {
        __assert(&lbl_8034EA80, 0x317, &lbl_8034EA90);
    }
    M2C_FIELD(arg1, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(arg1, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(arg1, f32 *, 0x34) = (f32) M2C_FIELD(arg0, f32 *, 8);
    if (!(M2C_FIELD(arg1, s32 *, 0x14) & 0x02000000)) {
        temp_cr0_eq = arg1 == NULL;
        if (temp_cr0_eq == 0) {
            if (temp_cr0_eq != 0) {
                __assert(&lbl_8034EA80, 0x25D, &lbl_8034EA88);
            }
            temp_r4 = M2C_FIELD(arg1, s32 *, 0x14);
            var_r3 = 0;
            if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                var_r3 = 1;
            }
            if (var_r3 == 0) {
                fn_800FD7C8(arg1);
            }
        }
    }
    fn_80071A64(arg0, arg1);
}

void fn_80071A64(void *arg0, void *arg1) {
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    u8 var_r3_2;
    s32 temp_r4_2;
    u8 var_r3;
    s32 temp_r4;

    if (arg1 == NULL) {
        __assert(&lbl_8034EA80, 0x290, &lbl_8034EA88);
    }
    if (0 /* draft: did not compile */) {
        __assert(&lbl_8034EA80, 0x291, &lbl_8034EA98);
    }
    M2C_FIELD(arg1, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(arg1, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(arg1, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
    M2C_FIELD(arg1, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
    if (!(M2C_FIELD(arg1, s32 *, 0x14) & 0x02000000)) {
        temp_cr0_eq = arg1 == NULL;
        if (temp_cr0_eq == 0) {
            if (temp_cr0_eq != 0) {
                __assert(&lbl_8034EA80, 0x25D, &lbl_8034EA88);
            }
            temp_r4 = M2C_FIELD(arg1, s32 *, 0x14);
            var_r3 = 0;
            if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                var_r3 = 1;
            }
            if (var_r3 == 0) {
                fn_800FD7C8(arg1);
            }
        }
    }
    if (arg1 == NULL) {
        __assert(&lbl_8034EA80, 0x3A9, &lbl_8034EA88);
    }
    if (0 /* draft: did not compile */) {
        __assert(&lbl_8034EA80, 0x3AA, &lbl_80223AA0);
    }
    M2C_FIELD(arg1, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
    M2C_FIELD(arg1, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg1, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
    if (!(M2C_FIELD(arg1, s32 *, 0x14) & 0x02000000)) {
        temp_cr0_eq_2 = arg1 == NULL;
        if (temp_cr0_eq_2 == 0) {
            if (temp_cr0_eq_2 != 0) {
                __assert(&lbl_8034EA80, 0x25D, &lbl_8034EA88);
            }
            temp_r4_2 = M2C_FIELD(arg1, s32 *, 0x14);
            var_r3_2 = 0;
            if (!(temp_r4_2 & 0x800000) && (temp_r4_2 & 0x40)) {
                var_r3_2 = 1;
            }
            if (var_r3_2 == 0) {
                fn_800FD7C8(arg1);
            }
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x28) & 0x10000) {
        M2C_FIELD(arg1, s32 *, 0x14) = (s32) (M2C_FIELD(arg1, s32 *, 0x14) | 0x20000);
        return;
    }
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) (M2C_FIELD(arg1, s32 *, 0x14) & 0xFFFDFFFF);
}

void fn_80071C00(void *arg0, void *arg1) {
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 temp_r4;
    u8 var_r3_3;
    s32 temp_r4_3;
    u8 var_r3;
    u8 var_r3_2;
    s32 temp_r4_2;

    if (!(M2C_FIELD(arg0, s32 *, 0x28) & 7)) {
        if (arg1 == NULL) {
            __assert(&lbl_8034EA80, 0x316, &lbl_8034EA88);
        }
        if (arg0 == NULL) {
            __assert(&lbl_8034EA80, 0x317, &lbl_8034EA90);
        }
        M2C_FIELD(arg1, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 0);
        M2C_FIELD(arg1, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 4);
        M2C_FIELD(arg1, f32 *, 0x34) = (f32) M2C_FIELD(arg0, f32 *, 8);
        if (!(M2C_FIELD(arg1, s32 *, 0x14) & 0x02000000)) {
            temp_cr0_eq = arg1 == NULL;
            if (temp_cr0_eq == 0) {
                if (temp_cr0_eq != 0) {
                    __assert(&lbl_8034EA80, 0x25D, &lbl_8034EA88);
                }
                temp_r4 = M2C_FIELD(arg1, s32 *, 0x14);
                var_r3 = 0;
                var_r3 = !(!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) ? var_r3 : 1;
                if (var_r3 == 0) {
                    fn_800FD7C8(arg1);
                }
            }
        }
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x28) & 0x38)) {
        if (arg1 == NULL) {
            __assert(&lbl_8034EA80, 0x290, &lbl_8034EA88);
        }
        if (0 /* draft: did not compile */) {
            __assert(&lbl_8034EA80, 0x291, &lbl_8034EA98);
        }
        M2C_FIELD(arg1, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
        M2C_FIELD(arg1, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
        M2C_FIELD(arg1, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
        M2C_FIELD(arg1, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
        if (!(M2C_FIELD(arg1, s32 *, 0x14) & 0x02000000)) {
            temp_cr0_eq_2 = arg1 == NULL;
            if (temp_cr0_eq_2 == 0) {
                if (temp_cr0_eq_2 != 0) {
                    __assert(&lbl_8034EA80, 0x25D, &lbl_8034EA88);
                }
                temp_r4_2 = M2C_FIELD(arg1, s32 *, 0x14);
                var_r3_2 = 0;
                if (!(temp_r4_2 & 0x800000) && (temp_r4_2 & 0x40)) {
                    var_r3_2 = 1;
                }
                if (var_r3_2 == 0) {
                    fn_800FD7C8(arg1);
                }
            }
        }
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x28) & 0x1C0)) {
        if (arg1 == NULL) {
            __assert(&lbl_8034EA80, 0x3A9, &lbl_8034EA88);
        }
        if (0 /* draft: did not compile */) {
            __assert(&lbl_8034EA80, 0x3AA, &lbl_80223AA0);
        }
        M2C_FIELD(arg1, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
        M2C_FIELD(arg1, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
        M2C_FIELD(arg1, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
        if (!(M2C_FIELD(arg1, s32 *, 0x14) & 0x02000000)) {
            temp_cr0_eq_3 = arg1 == NULL;
            if (temp_cr0_eq_3 == 0) {
                if (temp_cr0_eq_3 != 0) {
                    __assert(&lbl_8034EA80, 0x25D, &lbl_8034EA88);
                }
                temp_r4_3 = M2C_FIELD(arg1, s32 *, 0x14);
                var_r3_3 = 0;
                if (!(temp_r4_3 & 0x800000) && (temp_r4_3 & 0x40)) {
                    var_r3_3 = 1;
                }
                if (var_r3_3 == 0) {
                    fn_800FD7C8(arg1);
                }
            }
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x28) & 0x10000) {
        M2C_FIELD(arg1, s32 *, 0x14) = (s32) (M2C_FIELD(arg1, s32 *, 0x14) | 0x20000);
        return;
    }
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) (M2C_FIELD(arg1, s32 *, 0x14) & 0xFFFDFFFF);
}

void fn_80071E60(void *arg0, s32 arg1) {
    fn_80070D60(arg1, M2C_FIELD(arg0, f32 *, 0xC), M2C_FIELD(arg0, f32 *, 0x10), M2C_FIELD(arg0, f32 *, 0x14));
    PSMTXTransApply(arg1, arg1, M2C_FIELD(arg0, f32 *, 0x1C), M2C_FIELD(arg0, f32 *, 0x20), M2C_FIELD(arg0, f32 *, 0x24));
}

void fn_80071EC0(f32 *arg0, f32 farg0, f32 farg1, f32 farg2) {
    *arg0 = (farg2 * (farg1 - farg0)) + farg0;
}

f32 fn_80071ED0(f32 farg0) {
    if (lbl_80351914 < farg0) {
        return (f32) fn_80156E70((double)(lbl_80351918), (double)(0));
    }
    return (f32) (lbl_80351920 - (f64) (f32) fn_80156E70(-farg0, lbl_80351918));
}

#pragma push
#pragma dont_inline on
void fn_80071F24(f32 *arg0, f32 farg1, f32 farg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f31;

    temp_f31 = fn_80071ED0((float)(0));
    temp_f1 = fn_80071ED0(farg1) - temp_f31;
    if (lbl_80351928 <= temp_f1) {
        temp_f0 = (f32) (lbl_80351920 - (f64) temp_f1);
        if (temp_f1 <= temp_f0) {
            *arg0 = (temp_f1 * farg2) + temp_f31;
            return;
        }
        *arg0 = (-temp_f0 * farg2) + temp_f31;
        return;
    }
    temp_f0_2 = (f32) -(lbl_80351920 + (f64) temp_f1);
    if (temp_f0_2 <= temp_f1) {
        *arg0 = (temp_f1 * farg2) + temp_f31;
        return;
    }
    *arg0 = (-temp_f0_2 * farg2) + temp_f31;
}
#pragma pop

void fn_80072010(s32 arg0, void *arg1, void *arg2, f32 farg0) { } /* draft: stub */

void *fn_8007215C(void *arg0, s32 arg1, f32 farg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    /* draft: did not compile: fn_800716AC(arg0 + 8); */
    /* draft: did not compile: fn_80072264(arg0, arg1, farg0); */
    return arg0;
}

s32 fn_800721C4(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        fn_80072214((void *)(0));
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_80072214(void *arg0) {
    fn_800721C4(M2C_FIELD(arg0, s32 *, 0), 1);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    fn_800721C4(M2C_FIELD(arg0, s32 *, 4), 1);
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

#pragma push
#pragma peephole off
void fn_80072264(void *arg0, void *arg1, f32 farg0) {
    u8 var_r0;
    u8 var_r0_2;

    /* draft: did not compile: fn_800718FC(arg0 + 8, M2C_FIELD(arg1, s32 *, 8)); */
    fn_800721C4(M2C_FIELD(arg0, s32 *, 0), 1);
    if ((u32) M2C_FIELD(arg1, u32 *, 0) != 0U) {
        var_r0 = get_up_vector_for_viewing_mtx(0x34);
        if (var_r0 != 0) {
            /* draft: did not compile: var_r0 = fn_8007215C(M2C_FIELD(arg1, u32 *, 0), farg0); */
        }
        M2C_FIELD(arg0, s32 *, 0) = var_r0;
    }
    fn_800721C4(M2C_FIELD(arg0, s32 *, 4), 1);
    if ((u32) M2C_FIELD(arg1, u32 *, 4) != 0U) {
        var_r0_2 = get_up_vector_for_viewing_mtx(0x34);
        if (var_r0_2 != 0) {
            /* draft: did not compile: var_r0_2 = fn_8007215C(M2C_FIELD(arg1, u32 *, 4), farg0); */
        }
        M2C_FIELD(arg0, s32 *, 4) = var_r0_2;
    }
}
#pragma pop

void fn_80072328() { } /* draft: stub */

s32 fn_8007247C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 fn_8007250C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 fn_8007259C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) {
    if (arg0 != NULL) {
        if (0 /* draft: did not compile */) {
            return 0;
        }
        if (0 /* draft: did not compile */) {
            return 0;
        }
        goto block_5;
    }
block_5:
    return 1;
}

s32 fn_80072624(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) { return 0; } /* draft: stub */

s32 fn_8007268C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 fn_8007271C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 fn_800727AC(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 fn_80072858(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 fn_8007292C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 fn_80072A10(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 fn_80072AA0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

s32 fn_80072B30(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

u8 fn_80072C04(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) {
    void *var_r27;

    if (0 /* draft: did not compile */) {
        return 0U;
    }
    var_r27 = M2C_FIELD(arg0, void **, 0);
loop_6:
    if (var_r27 == NULL) {
        return 1U;
    }
    if (fn_80072C04((void *)(var_r27), (long)(arg1), (long)(arg2), (long)(arg3), (long)(arg4), (long)(0)) == 0) {
        return 0U;
    }
    var_r27 = M2C_FIELD(var_r27, void **, 4);
    goto loop_6;
}

u8 fn_80072C9C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) {
    void *var_r27;

    if (0 /* draft: did not compile */) {
        return 0U;
    }
    var_r27 = M2C_FIELD(arg0, void **, 0);
loop_6:
    if (var_r27 == NULL) {
        return 1U;
    }
    if (fn_80072C9C((void *)(var_r27), (long)(arg1), (long)(arg2), (long)(arg3), (long)(arg4), (long)(0)) == 0) {
        return 0U;
    }
    var_r27 = M2C_FIELD(var_r27, void **, 4);
    goto loop_6;
}

u8 fn_80072D34(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) { return 0; } /* draft: stub */
