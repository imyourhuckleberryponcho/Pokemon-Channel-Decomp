/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK fragmentinfo_80349B10;
M2C_UNK _ExitProcess();
M2C_UNK __destroy_global_chain();
extern s32 __aborting;
extern s32 __atexit_curr_func_80350F34;
extern M2C_UNK __atexit_funcs_80349B20;
M2C_UNK fn_80151820(M2C_UNK);
M2C_UNK fn_800059A4(u32);
extern void **lbl_80349C20;
extern u8 lbl_80350F40;
extern u32 lbl_801DAD70;
M2C_UNK *fn_80005908(u32);
s32 fn_8014EB4C(M2C_UNK *);
extern M2C_UNK __files;
M2C_UNK fn_8014EC84(M2C_UNK *);
M2C_UNK fn_8014D7BC(s32 *, s32 *, s32 *);
s32 fn_8014DCB8(s32 *, s32 *);
s32 __equals_dec(s32 *, s32 *);
M2C_UNK fn_8014E1FC(s32 *, M2C_UNK *, M2C_UNK);
f64 fn_8015658C(f64, f64);
f64 fn_8015685C(s16);
f64 fn_80156B1C(f32 *, f64, f32, s32, s32, s32, s32, s32, f64, f32);
f64 Pow(f64, f64);
extern M2C_UNK lbl_801DAD88;
extern M2C_UNK lbl_802B0730;
extern M2C_UNK lbl_802B0898;
extern M2C_UNK lbl_802B0998;
extern f32 lbl_8035038C;
extern f64 lbl_80350398;
extern f64 lbl_80352440;
extern f64 lbl_80352448;
extern f64 lbl_80352450;
extern f64 lbl_80352458;
u64 __cvt_dbl_usll(f64);
M2C_UNK fn_8014DEBC(M2C_UNK *, s16);
M2C_UNK fn_8014E2E8(void *, M2C_UNK *, M2C_UNK *);
M2C_UNK fn_8014E574(M2C_UNK *, u64, u32);
s32 fn_8014E684(s32);
f64 fn_801567D0(s32 *, f64);
M2C_UNK fn_80156A20(f64 *);
extern s32 sp;
extern s32 _dtors;
extern s32 __stdio_exit;
extern s32 __console_exit;

s32 fn_8014B7C8(void *arg0);
s32 fn_8014B8CC(void *arg0, s32 arg1);
void __unregister_fragment(s32 arg0);
s32 __register_fragment(s32 arg0, s32 arg1);
void exit(void);
void fn_8014BB10(void);
void fn_8014BB98(void *arg0);
s32 fn_8014BCCC(u32 arg0);
void fn_8014BD64(void ***arg0, s32 arg1, u32 arg2);
void *fn_8014BF60(s32 arg0, u32 arg1);
void fn_8014C124(void *arg0, void *arg1, void **arg2, s32 arg3, void *arg4, u32 arg5);
s32 fn_8014C24C(void **arg0, s32 arg1, u32 *arg2);
s32 fn_8014C324(M2C_UNK **arg0, s32 arg1);
void fn_8014C56C(s32 *arg0, void **arg1);
void fn_8014C628(void *arg0, s32 *arg1);
u32 *fn_8014C7A4(void *arg0, u32 arg1);
s32 __flush_all(void);
void __close_all(void);
f64 fn_8014CA88(void *arg0);
void __num2dec(void *arg0, void *arg1);
void fn_8014D580(void *arg0, f32 farg0);

s32 fn_8014B7C8(void *arg0) {
    s32 saved_reg_f31;
    s32 saved_reg_f30;
    s32 saved_reg_f29;
    s32 saved_reg_f28;
    s32 saved_reg_f27;
    s32 saved_reg_f26;
    s32 saved_reg_f25;
    s32 saved_reg_f24;
    s32 saved_reg_f23;
    s32 saved_reg_f22;
    s32 saved_reg_f21;
    s32 saved_reg_f20;
    s32 saved_reg_f19;
    s32 saved_reg_f18;
    s32 saved_reg_f17;
    s32 saved_reg_f16;
    s32 saved_reg_f15;
    s32 saved_reg_f14;
    s32 saved_reg_r2;
    s32 saved_reg_lr;
    M2C_FIELD(arg0, s32 *, 0) = (s32) saved_reg_lr;
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_ERROR(/* unknown instruction: mfcr $r6 */);
    M2C_FIELD(arg0, void **, 8) = (void *) sp;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) saved_reg_r2;
    M2C_FIELD(arg0, f64 *, 0x60) = (f64) saved_reg_f14;
    M2C_ERROR(/* unknown instruction: psq_stx $f14, $zero, $r4, 0x0, qr0 */);
    M2C_FIELD(arg0, f64 *, 0x70) = (f64) saved_reg_f15;
    M2C_ERROR(/* unknown instruction: psq_stx $f15, $zero, $r4, 0x0, qr0 */);
    M2C_FIELD(arg0, f64 *, 0x80) = (f64) saved_reg_f16;
    M2C_ERROR(/* unknown instruction: psq_stx $f16, $zero, $r4, 0x0, qr0 */);
    M2C_FIELD(arg0, f64 *, 0x90) = (f64) saved_reg_f17;
    M2C_ERROR(/* unknown instruction: psq_stx $f17, $zero, $r4, 0x0, qr0 */);
    M2C_FIELD(arg0, f64 *, 0xA0) = (f64) saved_reg_f18;
    M2C_ERROR(/* unknown instruction: psq_stx $f18, $zero, $r4, 0x0, qr0 */);
    M2C_FIELD(arg0, f64 *, 0xB0) = (f64) saved_reg_f19;
    M2C_ERROR(/* unknown instruction: psq_stx $f19, $zero, $r4, 0x0, qr0 */);
    M2C_FIELD(arg0, f64 *, 0xC0) = (f64) saved_reg_f20;
    M2C_ERROR(/* unknown instruction: psq_stx $f20, $zero, $r4, 0x0, qr0 */);
    M2C_FIELD(arg0, f64 *, 0xD0) = (f64) saved_reg_f21;
    M2C_ERROR(/* unknown instruction: psq_stx $f21, $zero, $r4, 0x0, qr0 */);
    M2C_FIELD(arg0, f64 *, 0xE0) = (f64) saved_reg_f22;
    M2C_ERROR(/* unknown instruction: psq_stx $f22, $zero, $r4, 0x0, qr0 */);
    M2C_FIELD(arg0, f64 *, 0xF0) = (f64) saved_reg_f23;
    M2C_ERROR(/* unknown instruction: psq_stx $f23, $zero, $r4, 0x0, qr0 */);
    M2C_FIELD(arg0, f64 *, 0x100) = (f64) saved_reg_f24;
    M2C_ERROR(/* unknown instruction: psq_stx $f24, $zero, $r4, 0x0, qr0 */);
    M2C_FIELD(arg0, f64 *, 0x110) = (f64) saved_reg_f25;
    M2C_ERROR(/* unknown instruction: psq_stx $f25, $zero, $r4, 0x0, qr0 */);
    M2C_FIELD(arg0, f64 *, 0x120) = (f64) saved_reg_f26;
    M2C_ERROR(/* unknown instruction: psq_stx $f26, $zero, $r4, 0x0, qr0 */);
    M2C_FIELD(arg0, f64 *, 0x130) = (f64) saved_reg_f27;
    M2C_ERROR(/* unknown instruction: psq_stx $f27, $zero, $r4, 0x0, qr0 */);
    M2C_FIELD(arg0, f64 *, 0x140) = (f64) saved_reg_f28;
    M2C_ERROR(/* unknown instruction: psq_stx $f28, $zero, $r4, 0x0, qr0 */);
    M2C_FIELD(arg0, f64 *, 0x150) = (f64) saved_reg_f29;
    M2C_ERROR(/* unknown instruction: psq_stx $f29, $zero, $r4, 0x0, qr0 */);
    M2C_FIELD(arg0, f64 *, 0x160) = (f64) saved_reg_f30;
    M2C_ERROR(/* unknown instruction: psq_stx $f30, $zero, $r4, 0x0, qr0 */);
    M2C_FIELD(arg0, f64 *, 0x170) = (f64) saved_reg_f31;
    M2C_ERROR(/* unknown instruction: psq_stx $f31, $zero, $r4, 0x0, qr0 */);
    M2C_FIELD(arg0, f64 *, 0x180) = (f64) M2C_ERROR(/* unknown instruction: mffs $f0 */);
    return 0;
}

s32 fn_8014B8CC(void *arg0, s32 arg1) {
    M2C_ERROR(/* unknown instruction: mtcrf 0xff, $r6 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f14, $zero, $r7, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f15, $zero, $r7, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f16, $zero, $r7, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f17, $zero, $r7, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f18, $zero, $r7, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f19, $zero, $r7, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f20, $zero, $r7, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f21, $zero, $r7, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f22, $zero, $r7, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f23, $zero, $r7, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f24, $zero, $r7, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f25, $zero, $r7, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f26, $zero, $r7, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f27, $zero, $r7, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f28, $zero, $r7, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f29, $zero, $r7, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f30, $zero, $r7, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f31, $zero, $r7, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: mtfsf 0xff, $f0 */);
    if (arg1 == 0U) {
        return 1;
    }
    return arg1;
}

void __unregister_fragment(s32 arg0) {
    void *temp_r3;

    if ((arg0 >= 0) && (arg0 < 1)) {
        temp_r3 = &fragmentinfo_80349B10 + (arg0 * 0xC);
        M2C_FIELD(temp_r3, s32 *, 0) = 0;
        M2C_FIELD(temp_r3, s32 *, 4) = 0;
        M2C_FIELD(temp_r3, s32 *, 8) = 0;
    }
}

s32 __register_fragment(s32 arg0, s32 arg1) {
    if ((s32) M2C_FIELD(&fragmentinfo_80349B10, s32 *, 8) == 0) {
        M2C_FIELD(&fragmentinfo_80349B10, s32 *, 0) = arg0;
        M2C_FIELD(&fragmentinfo_80349B10, s32 *, 4) = arg1;
        M2C_FIELD(&fragmentinfo_80349B10, s32 *, 8) = 1;
        return 0;
    }
    return -1;
}

void exit(void) {
    M2C_UNK (**var_r31)();
    M2C_UNK (*temp_r12)();
    u8 temp_r3;

    if ((s32) __aborting == 0) {
        __destroy_global_chain();
        /* draft: did not compile: var_r31 = &_dtors; */
loop_3:
        temp_r12 = *var_r31;
        if (temp_r12 != NULL) {
            temp_r12();
            var_r31 += 4;
            goto loop_3;
        }
        if (((M2C_UNK (*)()) __stdio_exit) != NULL) {
            /* draft: did not compile: __stdio_exit(); */
            __stdio_exit = NULL;
        }
    }
loop_8:
    if ((s32) __atexit_curr_func_80350F34 > 0) {
        temp_r3 = __atexit_curr_func_80350F34 - 1;
        __atexit_curr_func_80350F34 = temp_r3;
        /* draft: did not compile: *(&__atexit_funcs_80349B20 + (temp_r3 * 4))(temp_r3); */
        goto loop_8;
    }
    if (((M2C_UNK (*)()) __console_exit) != NULL) {
        /* draft: did not compile: __console_exit(); */
        __console_exit = NULL;
    }
    _ExitProcess();
}

void fn_8014BB10(void) {
    s32 temp_r3;

    fn_80151820(1);
    __aborting = 1;
loop_2:
    if ((s32) __atexit_curr_func_80350F34 > 0) {
        temp_r3 = __atexit_curr_func_80350F34 - 1;
        __atexit_curr_func_80350F34 = temp_r3;
        /* draft: did not compile: *(&__atexit_funcs_80349B20 + (temp_r3 * 4))(temp_r3); */
        goto loop_2;
    }
    if (((M2C_UNK (*)()) __console_exit) != NULL) {
        /* draft: did not compile: __console_exit(); */
        __console_exit = NULL;
    }
    _ExitProcess();
}

void fn_8014BB98(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r5_2;
    u32 temp_r30;
    u32 var_r5;
    void **var_r4;

    if ((u8) lbl_80350F40 == 0) {
        memset(&lbl_80349C20, 0, 0x34);
        lbl_80350F40 = 1;
    }
    if (arg0 != NULL) {
        temp_r3 = M2C_FIELD(arg0, s32 *, -4);
        if (!(temp_r3 & 1)) {
            var_r5 = M2C_FIELD(temp_r3, u32 *, 8);
        } else {
            var_r5 = (M2C_FIELD(arg0, s32 *, -8) & 0xFFFFFFF8) - 8;
        }
        if (var_r5 <= 0x44U) {
            /* draft: did not compile: fn_8014BD64(&lbl_80349C20, arg0); */
            return;
        }
        temp_r30 = M2C_FIELD(arg0, s32 *, -4) & 0xFFFFFFFE;
        /* draft: did not compile: fn_8014C628(temp_r30, arg0 - 8); */
        temp_r3_2 = M2C_FIELD(temp_r30, s32 *, 0x10);
        var_r5_2 = 0;
        if (!(temp_r3_2 & 2) && ((u32) (temp_r3_2 & 0xFFFFFFF8) == (u32) ((M2C_FIELD(temp_r30, s32 *, 0xC) & 0xFFFFFFF8) - 0x18))) {
            var_r5_2 = 1;
        }
        if (var_r5_2 != 0) {
            var_r4 = M2C_FIELD(temp_r30, void ***, 4);
            if (0 /* draft: did not compile */) {
                var_r4 = NULL;
            }
            if (0 /* draft: did not compile */) {
                lbl_80349C20 = var_r4;
            }
            if (var_r4 != NULL) {
                *var_r4 = M2C_FIELD(temp_r30, void **, 0);
                M2C_FIELD(*var_r4, void ***, 4) = var_r4;
            }
            M2C_FIELD(temp_r30, void ***, 4) = NULL;
            M2C_FIELD(temp_r30, void **, 0) = NULL;
            fn_800059A4(temp_r30);
        }
    }
}

#pragma push
#pragma peephole off
s32 fn_8014BCCC(u32 arg0) {
    if ((u8) lbl_80350F40 == 0) {
        memset(&lbl_80349C20, 0, 0x34);
        lbl_80350F40 = 1;
    }
    if (arg0 == 0U) {
        return 0;
    }
    if (arg0 > -0x31U) {
        return 0;
    }
    if (arg0 <= 0x44U) {
        return 0;
    }
    return 0;
}
#pragma pop

void fn_8014BD64(void ***arg0, s32 arg1, u32 arg2) {
    M2C_UNK *temp_r3;
    M2C_UNK *temp_r5;
    s32 temp_r0;
    s32 temp_r3_2;
    s32 var_r5;
    s32 var_r6;
    u32 *var_r3;
    u32 temp_r30;
    void **var_r4;
    void *temp_r4;
    void *temp_r7;

    var_r3 = &lbl_801DAD70;
    var_r6 = 0;
loop_2:
    if (arg2 > (u32) *var_r3) {
        var_r3 += 4;
        var_r6 += 1;
        goto loop_2;
    }
    /* draft: did not compile: temp_r7 = arg1 - 4; */
    temp_r3 = M2C_FIELD(temp_r7, M2C_UNK **, 0);
    temp_r4 = arg0 + ((var_r6 * 8) + 4);
    if ((void *) M2C_FIELD(temp_r3, void **, 0xC) == NULL) {
        temp_r5 = M2C_FIELD(temp_r4, M2C_UNK **, 4);
        if (temp_r5 != temp_r3) {
            if ((M2C_UNK *) M2C_FIELD(temp_r4, M2C_UNK **, 0) == temp_r3) {
                M2C_FIELD(temp_r4, M2C_UNK **, 4) = (M2C_UNK *) *temp_r5;
                M2C_FIELD(temp_r4, M2C_UNK **, 0) = (M2C_UNK *) *M2C_FIELD(temp_r4, M2C_UNK **, 0);
            } else {
                M2C_FIELD(M2C_FIELD(temp_r3, M2C_UNK **, 0), M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(temp_r3, M2C_UNK **, 4);
                /* draft: did not compile: *M2C_FIELD(temp_r3, M2C_UNK **, 4) = M2C_FIELD(temp_r3, M2C_UNK **, 0); */
                M2C_FIELD(temp_r3, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(temp_r4, M2C_UNK **, 4);
                /* draft: did not compile: M2C_FIELD(temp_r3, M2C_UNK **, 0) = *M2C_FIELD(temp_r3, M2C_UNK **, 4); */
                M2C_FIELD(M2C_FIELD(temp_r3, M2C_UNK **, 0), M2C_UNK **, 4) = temp_r3;
                /* draft: did not compile: *M2C_FIELD(temp_r3, M2C_UNK **, 4) = temp_r3; */
                M2C_FIELD(temp_r4, M2C_UNK **, 4) = temp_r3;
            }
        }
    }
    M2C_FIELD(temp_r7, void **, 4) = (void *) M2C_FIELD(temp_r3, void **, 0xC);
    M2C_FIELD(temp_r3, void **, 0xC) = temp_r7;
    temp_r0 = M2C_FIELD(temp_r3, s32 *, 0x10) - 1;
    M2C_FIELD(temp_r3, s32 *, 0x10) = temp_r0;
    if (temp_r0 == 0) {
        if ((M2C_UNK *) M2C_FIELD(temp_r4, M2C_UNK **, 4) == temp_r3) {
            M2C_FIELD(temp_r4, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(temp_r3, M2C_UNK **, 4);
        }
        if ((M2C_UNK *) M2C_FIELD(temp_r4, M2C_UNK **, 0) == temp_r3) {
            M2C_FIELD(temp_r4, M2C_UNK **, 0) = (M2C_UNK *) M2C_FIELD(temp_r3, M2C_UNK **, 0);
        }
        M2C_FIELD(M2C_FIELD(temp_r3, M2C_UNK **, 0), M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(temp_r3, M2C_UNK **, 4);
        /* draft: did not compile: *M2C_FIELD(temp_r3, M2C_UNK **, 4) = M2C_FIELD(temp_r3, M2C_UNK **, 0); */
        if ((M2C_UNK *) M2C_FIELD(temp_r4, M2C_UNK **, 4) == temp_r3) {
            M2C_FIELD(temp_r4, M2C_UNK **, 4) = NULL;
        }
        if ((M2C_UNK *) M2C_FIELD(temp_r4, M2C_UNK **, 0) == temp_r3) {
            M2C_FIELD(temp_r4, M2C_UNK **, 0) = NULL;
        }
        temp_r30 = M2C_FIELD(temp_r3, s32 *, -4) & 0xFFFFFFFE;
        /* draft: did not compile: fn_8014C628(temp_r30, temp_r3 - 8); */
        temp_r3_2 = M2C_FIELD(temp_r30, s32 *, 0x10);
        var_r5 = 0;
        if (!(temp_r3_2 & 2) && ((u32) (temp_r3_2 & 0xFFFFFFF8) == (u32) ((M2C_FIELD(temp_r30, s32 *, 0xC) & 0xFFFFFFF8) - 0x18))) {
            var_r5 = 1;
        }
        if (var_r5 != 0) {
            var_r4 = M2C_FIELD(temp_r30, void ***, 4);
            if (0 /* draft: did not compile */) {
                var_r4 = NULL;
            }
            if (0 /* draft: did not compile */) {
                *arg0 = var_r4;
            }
            if (var_r4 != NULL) {
                *var_r4 = M2C_FIELD(temp_r30, void **, 0);
                M2C_FIELD(*var_r4, void ***, 4) = var_r4;
            }
            M2C_FIELD(temp_r30, void ***, 4) = NULL;
            M2C_FIELD(temp_r30, void **, 0) = NULL;
            fn_800059A4(temp_r30);
        }
    }
}

void *fn_8014BF60(s32 arg0, u32 arg1) { } /* draft: stub */

void fn_8014C124(void *arg0, void *arg1, void **arg2, s32 arg3, void *arg4, u32 arg5) { } /* draft: stub */

s32 fn_8014C24C(void **arg0, s32 arg1, u32 *arg2) {
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 var_r29;
    void *var_r31;

    var_r29 = (arg1 + 0xF) & 0xFFFFFFF8;
    if (var_r29 < 0x50U) {
        var_r29 = 0x50;
    }
    *arg2 = 0U;
    var_r31 = *arg0;
    if (var_r31 == NULL) {
        return 0;
    }
loop_4:
    if (var_r29 <= (u32) M2C_FIELD(var_r31, u32 *, 8)) {
        /* draft: did not compile: temp_r3 = fn_8014C7A4(var_r31, var_r29); */
        if (temp_r3 != 0U) {
            *arg0 = var_r31;
            return temp_r3 + 8;
        }
    }
    temp_r3_2 = M2C_FIELD(var_r31, u32 *, 8);
    if (temp_r3_2 > 8U) {
        temp_r3_3 = temp_r3_2 - 8;
        if ((u32) *arg2 < temp_r3_3) {
            *arg2 = temp_r3_3;
        }
    }
    var_r31 = M2C_FIELD(var_r31, void **, 4);
    if (var_r31 == (void *) *arg0) {
        return 0;
    }
    goto loop_4;
}

s32 fn_8014C324(M2C_UNK **arg0, s32 arg1) {
    M2C_UNK *temp_r3;
    M2C_UNK *temp_r3_2;
    M2C_UNK *temp_r4;
    M2C_UNK *temp_r4_2;
    M2C_UNK *var_r28_2;
    M2C_UNK *var_r28_3;
    M2C_UNK *var_r31;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r5;
    s8 temp_r5_2;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 temp_r8;
    s32 temp_r8_2;
    s32 temp_r9;
    s32 temp_r9_2;
    u32 var_r28;
    u32 var_r31_2;
    u32 var_r3;
    u32 var_r30;

    var_r30 = (arg1 + 0xF) & 0xFFFFFFF8;
    if (var_r30 < 0x50U) {
        var_r30 = 0x50;
    }
    var_r31 = *arg0;
    if (var_r31 != NULL) {

    } else {
        var_r28 = (var_r30 + 0x1F) & 0xFFFFFFF8;
        var_r28 = var_r28 >= 0x10000U ? var_r28 : 0x10000;
        var_r31 = fn_80005908(var_r28);
        if (var_r31 == NULL) {
            var_r31 = NULL;
        } else {
            temp_r4 = var_r31 + 0x10;
            M2C_FIELD(var_r31, s32 *, 0xC) = (s32) (var_r28 | 3);
            temp_r7 = (s32) var_r31 | 1;
            temp_r0 = var_r28;
            temp_r0 -= 0x18;
            temp_r9 = M2C_FIELD(var_r31, s32 *, 0xC);
            *(var_r31 + temp_r8) = temp_r9;
            temp_r8 = var_r28 - 8;
            M2C_FIELD(var_r31, s32 *, 0x14) = temp_r7;
            M2C_FIELD(var_r31, s32 *, 0x10) = temp_r0;
            M2C_FIELD((var_r28 + temp_r4), s32 *, -0x1C) = temp_r0;
            M2C_FIELD(var_r31, s32 *, 8) = temp_r0;
            temp_r5 = M2C_FIELD(var_r31, s32 *, 0xC) & 0xFFFFFFF8;
            *(var_r31 + (temp_r5 - 4)) = 0;
            /* draft: did not compile: fn_8014C628(temp_r4, temp_r5, 0, temp_r7, temp_r8, temp_r9); */
            temp_r3 = *arg0;
            if (temp_r3 != NULL) {
                /* draft: did not compile: M2C_FIELD(var_r31, M2C_UNK **, 0) = *temp_r3; */
                M2C_FIELD(M2C_FIELD(var_r31, M2C_UNK **, 0), M2C_UNK **, 4) = var_r31;
                M2C_FIELD(var_r31, M2C_UNK **, 4) = (M2C_UNK *) *arg0;
                /* draft: did not compile: **arg0 = var_r31; */
                *arg0 = var_r31;
            } else {
                *arg0 = var_r31;
                M2C_FIELD(var_r31, M2C_UNK **, 0) = var_r31;
                M2C_FIELD(var_r31, M2C_UNK **, 4) = var_r31;
            }
        }
    }
    var_r28_2 = var_r31;
    if (var_r31 == NULL) {
        return 0;
    }
loop_13:
    if (var_r30 <= (u32) M2C_FIELD(var_r28_2, u32 *, 8)) {
        /* draft: did not compile: var_r3 = fn_8014C7A4(var_r28_2, var_r30); */
        if (var_r3 != 0U) {
            *arg0 = var_r28_2;
            goto block_27;
        }
    }
    var_r28_2 = M2C_FIELD(var_r28_2, M2C_UNK **, 4);
    if (var_r28_2 == (M2C_UNK *) *arg0) {
        var_r31_2 = (var_r30 + 0x1F) & 0xFFFFFFF8;
        var_r31_2 = var_r31_2 >= 0x10000U ? var_r31_2 : 0x10000;
        var_r28_3 = fn_80005908(var_r31_2);
        if (var_r28_3 == NULL) {
            var_r28_3 = NULL;
        } else {
            temp_r4_2 = var_r28_3 + 0x10;
            M2C_FIELD(var_r28_3, s32 *, 0xC) = (s32) (var_r31_2 | 3);
            temp_r7_2 = (s32) var_r28_3 | 1;
            temp_r0_2 = var_r31_2;
            temp_r0_2 -= 0x18;
            temp_r9_2 = M2C_FIELD(var_r28_3, s32 *, 0xC);
            *(var_r28_3 + temp_r8_2) = temp_r9_2;
            temp_r8_2 = var_r31_2 - 8;
            M2C_FIELD(var_r28_3, s32 *, 0x14) = temp_r7_2;
            M2C_FIELD(var_r28_3, s32 *, 0x10) = temp_r0_2;
            M2C_FIELD((var_r31_2 + temp_r4_2), s32 *, -0x1C) = temp_r0_2;
            M2C_FIELD(var_r28_3, s32 *, 8) = temp_r0_2;
            temp_r5_2 = M2C_FIELD(var_r28_3, s32 *, 0xC) & 0xFFFFFFF8;
            *(var_r28_3 + (temp_r5_2 - 4)) = 0;
            /* draft: did not compile: fn_8014C628(temp_r4_2, temp_r5_2, 0, temp_r7_2, temp_r8_2, temp_r9_2); */
            temp_r3_2 = *arg0;
            if (temp_r3_2 != NULL) {
                /* draft: did not compile: M2C_FIELD(var_r28_3, M2C_UNK **, 0) = *temp_r3_2; */
                M2C_FIELD(M2C_FIELD(var_r28_3, M2C_UNK **, 0), M2C_UNK **, 4) = var_r28_3;
                M2C_FIELD(var_r28_3, M2C_UNK **, 4) = (M2C_UNK *) *arg0;
                /* draft: did not compile: **arg0 = var_r28_3; */
                *arg0 = var_r28_3;
            } else {
                *arg0 = var_r28_3;
                M2C_FIELD(var_r28_3, M2C_UNK **, 0) = var_r28_3;
                M2C_FIELD(var_r28_3, M2C_UNK **, 4) = var_r28_3;
            }
        }
        if (var_r28_3 == NULL) {
            return 0;
        }
        /* draft: did not compile: var_r3 = fn_8014C7A4(var_r28_3, var_r30); */
block_27:
        return var_r3 + 8;
    }
    goto loop_13;
}

void fn_8014C56C(s32 *arg0, void **arg1) {
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 temp_r8;
    void *temp_r3;
    void *temp_r5;

    temp_r6 = *arg0;
    temp_r8 = temp_r6 & 0xFFFFFFF8;
    temp_r5 = arg0 + temp_r8;
    temp_r7 = M2C_FIELD(temp_r5, s32 *, 0);
    if (!(temp_r7 & 2)) {
        temp_r7_2 = temp_r8 + (temp_r7 & 0xFFFFFFF8);
        *arg0 = temp_r6 & 7;
        *arg0 |= temp_r7_2 & 0xFFFFFFF8;
        if (!(*arg0 & 2)) {
            *(arg0 + (temp_r7_2 - 4)) = temp_r7_2;
        }
        if (!(*arg0 & 2)) {
            *(arg0 + temp_r7_2) = *(arg0 + temp_r7_2) & ~4;
        } else {
            *(arg0 + temp_r7_2) = *(arg0 + temp_r7_2) | 4;
        }
        temp_r3 = *arg1;
        if (temp_r3 == temp_r5) {
            *arg1 = M2C_FIELD(temp_r3, void **, 0xC);
        }
        if ((void *) *arg1 == temp_r5) {
            *arg1 = NULL;
        }
        M2C_FIELD(M2C_FIELD(temp_r5, void **, 0xC), void **, 8) = (void *) M2C_FIELD(temp_r5, void **, 8);
        M2C_FIELD(M2C_FIELD(temp_r5, void **, 8), void **, 0xC) = (void *) M2C_FIELD(temp_r5, void **, 0xC);
    }
}

void fn_8014C628(void *arg0, s32 *arg1) {
    s32 temp_r3_2;
    s32 *temp_r3;
    s32 *temp_r3_3;
    s32 *temp_r5_3;
    s32 *temp_r6_3;
    s32 *var_r4;
    s32 **temp_r31;
    s32 temp_r5_2;
    s32 temp_r6;
    u32 temp_r0;
    void *temp_r5;
    u8 temp_r6_2;

    temp_r6 = M2C_FIELD(arg1, s32 *, 0);
    temp_r6_2 = temp_r6 & 0xFFFFFFF8;
    M2C_FIELD(arg1, s32 *, 0) = temp_r6 & ~2;
    temp_r5 = arg1 + temp_r6_2;
    M2C_FIELD(temp_r5, s32 *, 0) = (s32) (M2C_FIELD(temp_r5, s32 *, 0) & ~4);
    M2C_FIELD(temp_r5, s32 *, -4) = temp_r6_2;
    /* draft: did not compile: temp_r31 = arg0 + ((M2C_FIELD(arg0, s32 *, 0xC) & 0xFFFFFFF8) - 4); */
    temp_r3 = *temp_r31;
    if (temp_r3 != NULL) {
        M2C_FIELD(arg1, s32 **, 8) = (s32 *) M2C_FIELD(temp_r3, s32 **, 8);
        M2C_FIELD(M2C_FIELD(arg1, s32 **, 8), s32 **, 0xC) = arg1;
        M2C_FIELD(arg1, s32 **, 0xC) = (s32 *) *temp_r31;
        M2C_FIELD(*temp_r31, s32 **, 8) = arg1;
        *temp_r31 = arg1;
        temp_r6_3 = *temp_r31;
        if (!(M2C_FIELD(temp_r6_3, s32 *, 0) & 4)) {
            temp_r5_2 = M2C_FIELD(temp_r6_3, s32 *, -4);
            if (temp_r5_2 & 2) {
                var_r4 = temp_r6_3;
            } else {
                var_r4 = temp_r6_3 - temp_r5_2;
                *var_r4 &= 7;
                *var_r4 |= (temp_r5_2 + (M2C_FIELD(temp_r6_3, s32 *, 0) & 0xFFFFFFF8)) & 0xFFFFFFF8;
                if (!(*var_r4 & 2)) {
                    temp_r3_2 = temp_r5_2 + (M2C_FIELD(temp_r6_3, s32 *, 0) & 0xFFFFFFF8);
                    *(var_r4 + (temp_r3_2 - 4)) = temp_r3_2;
                }
                temp_r3_3 = *temp_r31;
                if (temp_r3_3 == temp_r6_3) {
                    *temp_r31 = M2C_FIELD(temp_r3_3, s32 **, 0xC);
                }
                M2C_FIELD(M2C_FIELD(temp_r6_3, s32 **, 0xC), s32 **, 8) = (s32 *) M2C_FIELD(temp_r6_3, s32 **, 8);
                temp_r5_3 = M2C_FIELD(temp_r6_3, s32 **, 0xC);
                M2C_FIELD(M2C_FIELD(temp_r5_3, s32 **, 8), s32 **, 0xC) = temp_r5_3;
            }
        } else {
            var_r4 = temp_r6_3;
        }
        *temp_r31 = var_r4;
        /* draft: did not compile: fn_8014C56C(*temp_r31, temp_r31); */
    } else {
        *temp_r31 = arg1;
        M2C_FIELD(arg1, s32 **, 8) = arg1;
        M2C_FIELD(arg1, s32 **, 0xC) = arg1;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 8) < (temp_r0 = M2C_FIELD(*temp_r31, s32 *, 0) & 0xFFFFFFF8)) {
        M2C_FIELD(arg0, u32 *, 8) = temp_r0;
    }
}

u32 *fn_8014C7A4(void *arg0, u32 arg1) {
    u32 temp_r4;
    s32 temp_cr0_eq;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r7;
    s32 temp_r8;
    u32 temp_r9;
    u32 *temp_r5;
    u32 *temp_r5_2;
    u32 *var_r6;
    s32 temp_r9_2;
    u32 temp_r4_2;
    s32 temp_r10;
    u8 var_r0;
    u32 var_r7;

    /* draft: did not compile: temp_r5 = *(arg0 + ((M2C_FIELD(arg0, s32 *, 0xC) & 0xFFFFFFF8) - 4)); */
    if (temp_r5 == NULL) {
        return NULL;
    }
    var_r6 = temp_r5;
    var_r0 = *temp_r5 & 0xFFFFFFF8;
    var_r7 = var_r0;
loop_7:
    if (var_r0 >= arg1) {
        if ((u32) (var_r0 - arg1) >= 0x50U) {
            temp_r5_2 = var_r6 + arg1;
            temp_r9 = M2C_FIELD(var_r6, u32 *, 0);
            temp_cr0_eq = (temp_r9 & 4) == 0;
            temp_r10 = (M2C_FIELD(var_r6, s32 *, 4) & 0xFFFFFFFE) | 1;
            M2C_FIELD(var_r6, s32 *, 4) = temp_r10;
            temp_r9_2 = temp_r9 & 0xFFFFFFF8;
            temp_r8 = (temp_r9 & 2) == 0;
            M2C_FIELD(var_r6, u32 *, 0) = arg1;
            temp_r7 = temp_r8 == 0;
            if (temp_cr0_eq == 0) {
                M2C_FIELD(var_r6, u32 *, 0) |= 4;
            }
            if (temp_r7 != 0) {
                M2C_FIELD(temp_r5_2, u32 *, 0) |= 4;
                M2C_FIELD(var_r6, u32 *, 0) |= 2;
            } else {
                M2C_FIELD(temp_r5_2, u32 *, -4) = arg1;
            }
            M2C_FIELD(temp_r5_2, s32 *, 4) = temp_r10;
            temp_r4 = temp_r9_2 - arg1;
            M2C_FIELD(temp_r5_2, u32 *, 0) = temp_r4;
            if (temp_r7 != 0) {
                M2C_FIELD(temp_r5_2, u32 *, 0) |= 4;
            }
            if (temp_r7 != 0) {
                M2C_FIELD(temp_r5_2, u32 *, 0) |= 2;
                *(temp_r5_2 + temp_r4) = *(temp_r5_2 + temp_r4) | 4;
            } else {
                *(temp_r5_2 + (temp_r4 - 4)) = temp_r4;
            }
            if (temp_r8 != 0) {
                M2C_FIELD(temp_r5_2, u32 **, 0xC) = (u32 *) M2C_FIELD(var_r6, u32 **, 0xC);
                M2C_FIELD(M2C_FIELD(temp_r5_2, u32 **, 0xC), u32 **, 8) = temp_r5_2;
                M2C_FIELD(var_r6, u32 **, 0xC) = temp_r5_2;
                M2C_FIELD(temp_r5_2, u32 **, 8) = var_r6;
            }
        }
        /* draft: did not compile: *(arg0 + ((M2C_FIELD(arg0, s32 *, 0xC) & 0xFFFFFFF8) - 4)) = M2C_FIELD(var_r6, u32 **, 0xC); */
        temp_r4_2 = M2C_FIELD(var_r6, u32 *, 0);
        temp_r4_3 = temp_r4_2 & 0xFFFFFFF8;
        M2C_FIELD(var_r6, u32 *, 0) = temp_r4_2 | 2;
        *(var_r6 + temp_r4_3) = *(var_r6 + temp_r4_3) | 4;
        temp_r4_4 = (M2C_FIELD(arg0, s32 *, 0xC) & 0xFFFFFFF8) - 4;
        if (0 /* draft: did not compile */) {
            /* draft: did not compile: *(arg0 + temp_r4_4) = M2C_FIELD(var_r6, u32 **, 0xC); */
        }
        if (0 /* draft: did not compile */) {
            /* draft: did not compile: *(arg0 + temp_r4_4) = 0; */
            M2C_FIELD(arg0, u32 *, 8) = 0U;
        } else {
            M2C_FIELD(M2C_FIELD(var_r6, void **, 8), u32 **, 0xC) = (u32 *) M2C_FIELD(var_r6, u32 **, 0xC);
            M2C_FIELD(M2C_FIELD(var_r6, u32 **, 0xC), void **, 8) = (void *) M2C_FIELD(var_r6, void **, 8);
        }
        return var_r6;
    }
    var_r6 = M2C_FIELD(var_r6, u32 **, 0xC);
    var_r0 = M2C_FIELD(var_r6, u32 *, 0) & 0xFFFFFFF8;
    if (var_r0 > var_r7) {
        var_r7 = var_r0;
    }
    if (var_r6 == temp_r5) {
        M2C_FIELD(arg0, u32 *, 8) = var_r7;
        return NULL;
    }
    goto loop_7;
}

s32 __flush_all(void) {
    M2C_UNK *var_r30;
    s32 var_r31;

    var_r31 = 0;
    var_r30 = &__files;
loop_5:
    if (var_r30 != NULL) {
        if ((((u16) M2C_FIELD(var_r30, u16 *, 4) >> 6U) & 7) && (fn_8014EB4C(var_r30) != 0)) {
            var_r31 = -1;
        }
        var_r30 = M2C_FIELD(var_r30, M2C_UNK **, 0x4C);
        goto loop_5;
    }
    return var_r31;
}

void __close_all(void) {
    M2C_UNK *temp_r3;
    M2C_UNK *var_r31;

    var_r31 = &__files;
loop_8:
    if (var_r31 != NULL) {
        if (((u16) M2C_FIELD(var_r31, u16 *, 4) >> 6U) & 7) {
            fn_8014EC84(var_r31);
        }
        temp_r3 = var_r31;
        var_r31 = M2C_FIELD(var_r31, M2C_UNK **, 0x4C);
        if ((u8) M2C_FIELD(temp_r3, u8 *, 0xC) != 0) {
            fn_8014BB98((void *)(0));
        } else {
            M2C_FIELD(temp_r3, u16 *, 4) = (u16) ((M2C_FIELD(temp_r3, u16 *, 4) & ~0x1C0) | 0xC0);
            if ((var_r31 != NULL) && ((u8) M2C_FIELD(var_r31, u8 *, 0xC) != 0)) {
                M2C_FIELD(temp_r3, s32 *, 0x4C) = 0;
            }
        }
        goto loop_8;
    }
}

f64 fn_8014CA88(void *arg0) { return 0; } /* draft: stub */

void __num2dec(void *arg0, void *arg1) {
    s16 var_r30;
    s32 temp_r4_2;
    s32 var_ctr;
    s32 var_r0;
    s32 var_r5;
    u8 *var_r4;
    u8 *var_r4_2;
    u8 temp_r0;
    u8 temp_r3_2;
    u8 temp_r3_3;
    u8 temp_r4;
    void *temp_r3;
    void *temp_r5;
    void *temp_r5_2;

    var_r30 = M2C_FIELD(arg0, s16 *, 2);
    fn_8014D580((void *)(arg1), (float)(0));
    if ((u8) M2C_FIELD(arg1, u8 *, 5) <= 9U) {
        if (var_r30 > 0x24) {
            var_r30 = 0x24;
        }
        if ((var_r30 > 0) && (var_r30 < (s32) M2C_FIELD(arg1, u8 *, 4))) {
            /* draft: did not compile: temp_r5 = arg1 + var_r30; */
            temp_r0 = M2C_FIELD(temp_r5, u8 *, 5);
            if (temp_r0 > 5U) {
                var_r0 = 1;
            } else if (temp_r0 < 5U) {
                var_r0 = -1;
            } else {
                /* draft: did not compile: var_r4 = temp_r5 + 6; */
                /* draft: did not compile: temp_r3 = arg1 + (M2C_FIELD(arg1, u8 *, 4) + 5); */
                /* draft: did not compile: var_ctr = temp_r3 - var_r4; */
                if (var_r4 < temp_r3) {
loop_10:
                    if ((u8) *var_r4 != 0) {
                        var_r0 = 1;
                    } else {
                        var_r4 += 1;
                        var_ctr -= 1;
                        if (var_ctr == 0) {
                            goto block_13;
                        }
                        goto loop_10;
                    }
                } else {
block_13:
                    if (M2C_FIELD(temp_r5, u8 *, 4) & 1) {
                        var_r0 = 1;
                    } else {
                        var_r0 = -1;
                    }
                }
            }
            M2C_FIELD(arg1, u8 *, 4) = (u8) var_r30;
            if (var_r0 >= 0) {
                /* draft: did not compile: temp_r5_2 = arg1 + 5; */
                /* draft: did not compile: var_r4_2 = temp_r5_2 + (var_r30 - 1); */
loop_18:
                temp_r3_2 = *var_r4_2;
                if (temp_r3_2 < 9U) {
                    *var_r4_2 = temp_r3_2 + 1;
                } else if (var_r4_2 == temp_r5_2) {
                    *var_r4_2 = 1;
                    M2C_FIELD(arg1, s16 *, 2) = (s16) (M2C_FIELD(arg1, s16 *, 2) + 1);
                } else {
                    *var_r4_2 = 0;
                    var_r4_2 -= 1;
                    goto loop_18;
                }
            }
        }
loop_25:
        temp_r3_3 = M2C_FIELD(arg1, u8 *, 4);
        if ((s32) temp_r3_3 < var_r30) {
            temp_r4 = M2C_FIELD(arg1, u8 *, 4);
            M2C_FIELD(arg1, u8 *, 4) = (u8) (temp_r4 + 1);
            /* draft: did not compile: *(arg1 + (temp_r4 + 5)) = 0; */
            goto loop_25;
        }
        var_r5 = 0;
        M2C_FIELD(arg1, s16 *, 2) = (s16) (M2C_FIELD(arg1, s16 *, 2) - (temp_r3_3 - 1));
loop_28:
        if (var_r5 < (s32) M2C_FIELD(arg1, u8 *, 4)) {
            temp_r4_2 = var_r5 + 5;
            var_r5 += 1;
            /* draft: did not compile: *(arg1 + temp_r4_2) = *(arg1 + temp_r4_2) + 0x30; */
            goto loop_28;
        }
    }
}

void fn_8014D580(void *arg0, f32 farg0) {
    s32 sp10;
    s32 temp_r4;
    s32 unksp2C;
    M2C_UNK sp64;
    M2C_UNK sp38;
    f64 sp30;
    f64 sp28;
    f64 sp20;
    f64 sp18;
    f64 sp8;
    f64 temp_f1;
    s16 temp_r3_3;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 unksp1C;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r3;
    s8 var_r0_3;
    s16 temp_r0;
    u64 temp_ret;
    s32 unksp24;

    sp8 = (f64) farg0;
    temp_r0 = M2C_BITWISE(u32, (s32)sp8) >> 0x1FU;
    if (lbl_80352440 == farg0) {
        M2C_FIELD(arg0, s8 *, 0) = (s8) temp_r0;
        M2C_FIELD(arg0, s16 *, 2) = 0;
        M2C_FIELD(arg0, s8 *, 4) = 1;
        M2C_FIELD(arg0, s8 *, 5) = 0;
        return;
    }
    sp28 = (f64) farg0;
    temp_r4 = M2C_BITWISE(s32, sp28);
    temp_r3 = temp_r4 & 0x7FF00000;
    switch (temp_r3) {                              /* switch 1; irregular */
    case 0x7FF00000:                                /* switch 1 */
        if ((temp_r4 & 0xFFFFF) || (unksp2C != 0)) {
            var_r0 = 1;
        } else {
            var_r0 = 2;
        }
        break;
    case 0x0:                                       /* switch 1 */
        if ((temp_r4 & 0xFFFFF) || (unksp2C != 0)) {
            var_r0 = 5;
        } else {
            var_r0 = 3;
        }
        break;
    default:                                        /* switch 1 */
        var_r0 = 4;
        break;
    }
    if (var_r0 <= 2) {
        sp20 = sp8;
        temp_r5 = M2C_BITWISE(s32, sp20);
        M2C_FIELD(arg0, s16 *, 2) = 0;
        M2C_FIELD(arg0, s8 *, 0) = (s8) temp_r0;
        temp_r3_2 = temp_r5 & 0x7FF00000;
        M2C_FIELD(arg0, s8 *, 4) = 1;
        switch (temp_r3_2) {                        /* switch 2; irregular */
        case 0x7FF00000:                            /* switch 2 */
            if ((temp_r5 & 0xFFFFF) || (unksp24 != 0)) {
                var_r0_2 = 1;
            } else {
                var_r0_2 = 2;
            }
            break;
        case 0x0:                                   /* switch 2 */
            if ((temp_r5 & 0xFFFFF) || (unksp24 != 0)) {
                var_r0_2 = 5;
            } else {
                var_r0_2 = 3;
            }
            break;
        default:                                    /* switch 2 */
            var_r0_2 = 4;
            break;
        }
        var_r0_3 = 0x49;
        if (var_r0_2 == 1) {
            var_r0_3 = 0x4E;
        }
        M2C_FIELD(arg0, s8 *, 5) = var_r0_3;
        return;
    }
    if ((s8) temp_r0 != 0) {
        sp8 = -farg0;
    }
    temp_f1 = fn_801567D0(&sp10, sp8);
    sp18 = temp_f1;
    if (unksp1C != 0U) {
        var_r3 = fn_8014E684((long)(0));
    } else {
        var_r3 = fn_8014E684(M2C_BITWISE(s32, sp18) | 0x100000) + 0x20;
    }
    temp_r3_3 = 0x35 - var_r3;
    fn_8014DEBC(&sp38, (s16) (sp10 - temp_r3_3));
    fn_8015685C((short)(temp_r3_3));
    fn_80156A20(&sp30);
    temp_ret = __cvt_dbl_usll(sp30);
    fn_8014E574(&sp64, (s32)temp_ret, (u32) temp_ret);
    fn_8014E2E8(arg0, &sp64, &sp38);
    M2C_FIELD(arg0, s8 *, 0) = (s8) temp_r0;
}
