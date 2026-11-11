/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800A8E88(s32);
s32 fn_800A8FD4(u32);
extern s32 lbl_80350770;
s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32);
void *fn_800A9424(s32);
M2C_UNK fn_800A9F90();
M2C_UNK DVDCancel();
extern s32 lbl_80350788;
extern s32 lbl_8035078C;
s32 DVDGetCommandBlockStatus(void *);
M2C_UNK DCFlushRange(u32, M2C_UNK);
void *fn_800A8CF8(M2C_UNK);
M2C_UNK fn_800A8D20(void *);
s32 DVDOpen(s32, void *);
M2C_UNK DVDClose(void *);
extern s32 lbl_8035079C;
extern s32 lbl_8034FE78;
extern s32 lbl_80350790;
extern s32 lbl_80350794;
extern s32 lbl_80350798;

s32 fn_800AAE38(void *arg0);
s32 fn_800AAE40(void *arg0);
void fn_800AAE48(void *arg0);
s32 fn_800AAE6C(void *arg0);
s32 parseOpCode(void *arg0);
s32 fn_800AAF54(void *arg0, u32 arg1);
s32 fn_800AAF78(void *arg0);
s32 fn_800AAF88(void *arg0);
s32 fn_800AB028(void *arg0);
s32 fn_800AB0E4(void *arg0);
s32 fn_800AB11C(void *arg0);
s32 fn_800AB130(void *arg0);
void fn_800AB138(void);
s32 fn_800AB158(void *arg0);
void fn_800AB268(s32 arg0, void *arg1);
void fn_800AB30C(void *arg0);
void *fn_800AB3A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
s32 fn_800AB574(void *arg0);
s32 fn_800AB5FC(void *arg0);
s32 fn_800AB634(u8 *arg0, s32 arg1, void *arg2, M2C_UNK arg_sp0);
s32 fn_800AB7B0(void *arg0, u32 arg1);
s32 fn_800AB8DC(void *arg0);
void fn_800AB8E4(void);
void fn_800AB904(void);
void fn_800AB910(void);
void *fn_800AB91C(void **arg0, void *arg1);
void **fn_800AB93C(void **arg0, void *arg1);
M2C_UNK *fn_800AB970(M2C_UNK *arg0, M2C_UNK *arg1);
M2C_UNK *OSAllocFromHeap(s32 arg0, s32 arg1);
void OSFreeToHeap(s32 arg0, s32 arg1);
s32 fn_800ABB64(s32 arg0);
void fn_800ABB74(s32 arg0, s32 arg1, s32 arg2);

s32 fn_800AAE38(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 fn_800AAE40(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

void fn_800AAE48(void *arg0) {
    fn_800A8E88(M2C_FIELD(arg0, s32 *, 0x68));
}

#pragma push
#pragma dont_inline on
s32 fn_800AAE6C(void *arg0) {
    s32 var_r31;
    s32 temp_r3;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x3A4) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x39C) == 0)) {
        return 0;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x68) == 0U) {
        return 0;
    }
    if ((s32) lbl_80350770 != 0) {
loop_8:
        var_r31 = fn_800A8FD4(M2C_FIELD(arg0, u32 *, 0x68));
        if (var_r31 != 0) {
            fn_800AAE48((void *)(arg0));
            goto loop_8;
        }
    } else {
        var_r31 = fn_800A8FD4((unsigned long)(0));
        if ((var_r31 != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) != 0)) {
loop_14:
            temp_r3 = fn_800A8FD4(M2C_FIELD(arg0, u32 *, 0x68));
            if (temp_r3 != 0) {
                fn_800AAE48((void *)(arg0));
                var_r31 = temp_r3;
                goto loop_14;
            }
        }
    }
    return var_r31;
}
#pragma pop

s32 parseOpCode(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x43) & 0xF;
}

s32 fn_800AAF54(void *arg0, u32 arg1) {
    if (arg1 <= (u32) (M2C_FIELD(arg0, u8 *, 0x43) & 0xF)) {
        M2C_FIELD(arg0, u32 *, 0x70) = arg1;
        return 1;
    }
    return 0;
}

s32 fn_800AAF78(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3AC) == 0;
}

s32 fn_800AAF88(void *arg0) {
    s32 temp_r30;
    void *temp_r3;

    temp_r30 = OSDisableInterrupts();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
loop_3:
        if (fn_800A8FD4(M2C_FIELD(arg0, u32 *, 0x68)) != 0) {
            fn_800A8E88(M2C_FIELD(arg0, u32 *, 0x68));
            goto loop_3;
        }
    }
loop_6:
    temp_r3 = fn_800A9424(M2C_FIELD(arg0, s32 *, 0x64));
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0x18) = 0;
        goto loop_6;
    }
    M2C_FIELD(arg0, s32 *, 0x3A4) = 1;
    OSRestoreInterrupts(temp_r30);
    M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
    return 1;
}

s32 fn_800AB028(void *arg0) {
    s32 temp_r30;
    void *temp_r3;

    temp_r30 = OSDisableInterrupts();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3AC) != 0U) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
loop_4:
            if (fn_800A8FD4(M2C_FIELD(arg0, u32 *, 0x68)) != 0) {
                fn_800A8E88(M2C_FIELD(arg0, u32 *, 0x68));
                goto loop_4;
            }
        }
loop_7:
        temp_r3 = fn_800A9424(M2C_FIELD(arg0, s32 *, 0x64));
        if (temp_r3 != NULL) {
            M2C_FIELD(temp_r3, s32 *, 0x18) = 0;
            goto loop_7;
        }
        M2C_FIELD(arg0, s32 *, 0x3A4) = 1;
    }
    M2C_FIELD(arg0, u32 *, 0x3AC) = 0U;
    OSRestoreInterrupts(temp_r30);
    M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
    fn_800A9F90(arg0);
    return 1;
}

s32 fn_800AB0E4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3AC) = 1;
    M2C_FIELD(arg0, s32 *, 0x3B8) = 1;
    M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
    fn_800A9F90(1);
    return 1;
}

s32 fn_800AB11C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C8) = 1;
    M2C_FIELD(arg0, s32 *, 0x3BC) = 1;
    return 1;
}

s32 fn_800AB130(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x45C);
}

void fn_800AB138(void) {
    DVDCancel();
}

s32 fn_800AB158(void *arg0) {
    s32 var_r5;
    u32 temp_r5_2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x68) != 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        return 0;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x60) >= (M2C_FIELD(arg0, u32 *, 0x50))) {
        M2C_FIELD(arg0, s32 *, 0x64) = 2;
        return 0;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x60) >= (u32) ((M2C_FIELD(arg0, s32 *, 0x54) & 0xFFFF0000) + 0x40000)) {
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        return 0;
    }
    temp_r5_2 = (M2C_FIELD(arg0, u32 *, 0x50)) - M2C_FIELD(arg0, u32 *, 0x60);
    if (temp_r5_2 > 0x10000U) {
        var_r5 = 0x10000;
    } else {
        var_r5 = (temp_r5_2 + 0x1F) & 0xFFFFFFE0;
    }
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) + (M2C_FIELD((s32)arg0, u32 *, 0x60) & 0x3FFFF));
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (M2C_FIELD(arg0, u32 *, 0x60) + var_r5);
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    if (DVDReadAsyncPrio(arg0, M2C_FIELD(arg0, s32 *, 0x5C), M2C_FIELD(arg0, u32 *, 0x60), fn_800AB268, 2) == 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = -1;
        return 0;
    }
    return 1;
}

void fn_800AB268(s32 arg0, void *arg1) {
    fn_800AB30C(arg1);
    if ((s32) M2C_FIELD(arg1, s32 *, 0x64) == 0) {
        if (arg0 < 0) {
            M2C_FIELD(arg1, s32 *, 0x64) = -1;
            return;
        }
        if ((u32) arg0 == (u32) (M2C_FIELD(arg1, s32 *, 0x58) - M2C_FIELD(arg1, s32 *, 0x60))) {
            if (((s32) lbl_80350788 != 0) || ((s32) lbl_8035078C != 0)) {
                M2C_FIELD(arg1, s32 *, 0x64) = -1;
                return;
            }
            M2C_FIELD(arg1, s32 *, 0x60) = (s32) M2C_FIELD(arg1, s32 *, 0x58);
            fn_800AB158(arg1);
        }
    }
}

void fn_800AB30C(void *arg0) {
    M2C_UNK (*temp_r12)(s32, s32, s32);
    s32 temp_r3;
    s32 temp_r30;

    temp_r30 = OSDisableInterrupts();
    temp_r3 = DVDGetCommandBlockStatus(arg0);
    if (temp_r3 == (s32) M2C_FIELD(arg0, s32 *, 0x4C)) {
        OSRestoreInterrupts(temp_r30);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x4C) = temp_r3;
    OSRestoreInterrupts(temp_r30);
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32, s32, s32), 0x6C);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x70), M2C_FIELD(arg0, s32 *, 0x74), temp_r3);
    }
}

void *fn_800AB3A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) { } /* draft: stub */

s32 fn_800AB574(void *arg0) {
    fn_800AB30C((void *)(0));
loop_5:
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) == 0) {
        if (((s32) lbl_80350788 != 0) || ((s32) lbl_8035078C != 0)) {
            fn_800AB138();
        }
        fn_800AB30C(arg0);
        goto loop_5;
    }
    DVDClose(arg0);
    fn_800A8D20(M2C_FIELD(arg0, void **, 0x3C));
    fn_800A8D20(arg0);
    return lbl_80350788 == 0;
}

s32 fn_800AB5FC(void *arg0) {
    fn_800AB30C((void *)(0));
    return M2C_FIELD(arg0, s32 *, 0x64) == 0;
}

s32 fn_800AB634(u8 *arg0, s32 arg1, void *arg2, M2C_UNK arg_sp0) {
    s32 temp_r4;
    s32 var_ctr;
    s32 var_r27;
    s32 var_r31;
    u32 temp_r4_2;
    u32 temp_r6;
    u8 *var_r0;
    u8 *var_r28;
    u8 *var_r3;
    u8 temp_r0;

    var_r31 = 0;
    var_r28 = arg0;
loop_21:
    if (var_r31 >= arg1) {
        if ((s32) M2C_FIELD(arg2, s32 *, 0x64) == 1) {
            fn_800AB158(arg2);
        }
        if ((s32) M2C_FIELD(arg2, s32 *, 0x64) == -1) {
            return -1;
        }
        fn_800AB30C(arg2);
        return var_r31;
    }
    temp_r4 = arg1 - var_r31;
    var_r27 = M2C_FIELD(arg2, s32 *, 0x60) - M2C_FIELD(arg2, s32 *, 0x54);
    if (var_r27 > temp_r4) {
        var_r27 = temp_r4;
    }
    fn_800AB30C(arg2);
    if ((s32) M2C_FIELD(arg2, s32 *, 0x64) == 1) {
        fn_800AB158(arg2);
    }
    if ((s32) M2C_FIELD(arg2, s32 *, 0x64) == -1) {
        return -1;
    }
    if (((s32) lbl_80350788 != 0) || ((s32) lbl_8035078C != 0)) {
        fn_800AB138();
        return -1;
    }
    if (var_r27 > 0) {
        if (var_r28 == NULL) {
            temp_r4_2 = M2C_FIELD(arg2, u32 *, 0x48);
            var_r0 = M2C_FIELD(arg2, u8 **, 0x44) + var_r27;
            if (0 /* draft: did not compile */) {
                /* draft: did not compile: var_r0 = M2C_FIELD(arg2, u8 **, 0x40) + (var_r0 - temp_r4_2); */
            }
            M2C_FIELD(arg2, u8 **, 0x44) = var_r0;
        } else {
            /* draft: did not compile: temp_r6 = var_r28 + var_r27; */
            var_r3 = M2C_FIELD(arg2, u8 **, 0x44);
            /* draft: did not compile: var_ctr = temp_r6 - var_r28; */
            if (0 /* draft: did not compile */) {
                do {
                    temp_r0 = *var_r3;
                    var_r3 += 1;
                    *var_r28 = temp_r0;
                    var_r28 += 1;
                    if (0 /* draft: did not compile */) {
                        var_r3 = M2C_FIELD(arg2, u8 **, 0x40);
                    }
                    var_ctr -= 1;
                } while (var_ctr != 0);
            }
            M2C_FIELD(arg2, u8 **, 0x44) = var_r3;
        }
        var_r31 += var_r27;
        M2C_FIELD(arg2, s32 *, 0x54) = (s32) (M2C_FIELD(arg2, s32 *, 0x54) + var_r27);
    }
    goto loop_21;
}

s32 fn_800AB7B0(void *arg0, u32 arg1) {
    s32 temp_r31;
    s32 temp_r31_2;
    u32 temp_r6;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) == -1) {
        return 0;
    }
    if (arg1 == (u32) M2C_FIELD(arg0, u32 *, 0x54)) {
        return 1;
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x60) > arg1) && (arg1 >= (u32) M2C_FIELD(arg0, u32 *, 0x54))) {
        temp_r31 = arg1 - M2C_FIELD(arg0, u32 *, 0x54);
        return temp_r31 == fn_800AB634((unsigned char *)(0), (long)(temp_r31), (void *)(arg0), (long)(0));
    }
    M2C_FIELD(arg0, s32 *, 0x68) = 1;
    fn_800AB138();
loop_9:
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) == 0) {
        fn_800AB30C(arg0);
        goto loop_9;
    }
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    temp_r6 = arg1 & 0xFFFF0000;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) + (arg1 & 0x30000));
    M2C_FIELD(arg0, u32 *, 0x54) = temp_r6;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, u32 *, 0x60) = temp_r6;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) == 2) {
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
    }
    temp_r31_2 = arg1 - temp_r6;
    if (temp_r31_2 != fn_800AB634((unsigned char *)(0), (long)(temp_r31_2), (void *)(arg0), (long)(0))) {
        return 0;
    }
    return 1;
}

s32 fn_800AB8DC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x54);
}

void fn_800AB8E4(void) {
    DVDGetCommandBlockStatus((void *)(0));
}

void fn_800AB904(void) {
    lbl_8035078C = 1;
}

void fn_800AB910(void) {
    lbl_8035078C = 0;
}

void *fn_800AB91C(void **arg0, void *arg1) {
    M2C_FIELD(arg1, void ***, 4) = arg0;
    M2C_FIELD(arg1, s32 *, 0) = 0;
    if (arg0 != NULL) {
        *arg0 = arg1;
    }
    return arg1;
}

void **fn_800AB93C(void **arg0, void *arg1) {
    void **temp_r5;
    void *temp_r5_2;

    temp_r5 = M2C_FIELD(arg1, void ***, 4);
    if (temp_r5 != NULL) {
        *temp_r5 = M2C_FIELD(arg1, void **, 0);
    }
    temp_r5_2 = M2C_FIELD(arg1, void **, 0);
    if (temp_r5_2 == NULL) {
        return M2C_FIELD(arg1, void ***, 4);
    }
    M2C_FIELD(temp_r5_2, void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
    return arg0;
}

M2C_UNK *fn_800AB970(M2C_UNK *arg0, M2C_UNK *arg1) {
    M2C_UNK *var_r6;
    M2C_UNK *var_r7;
    s32 temp_r5;
    s32 temp_r5_2;

    var_r7 = arg0;
    var_r6 = NULL;
loop_3:
    if (var_r7 != NULL) {
        if (arg1 > var_r7) {
            var_r6 = var_r7;
            var_r7 = M2C_FIELD(var_r7, M2C_UNK **, 4);
            goto loop_3;
        }
    }
    M2C_FIELD(arg1, M2C_UNK **, 4) = var_r7;
    M2C_FIELD(arg1, M2C_UNK **, 0) = var_r6;
    if (var_r7 != NULL) {
        M2C_FIELD(var_r7, M2C_UNK **, 0) = arg1;
        temp_r5 = M2C_FIELD(arg1, s32 *, 8);
        if ((void *) (arg1 + temp_r5) == var_r7) {
            M2C_FIELD(arg1, s32 *, 8) = (s32) (temp_r5 + M2C_FIELD(var_r7, s32 *, 8));
            var_r7 = M2C_FIELD(var_r7, M2C_UNK **, 4);
            M2C_FIELD(arg1, M2C_UNK **, 4) = var_r7;
            if (var_r7 != NULL) {
                /* draft: did not compile: *var_r7 = arg1; */
            }
        }
    }
    if (var_r6 != NULL) {
        M2C_FIELD(var_r6, M2C_UNK **, 4) = arg1;
        temp_r5_2 = M2C_FIELD(var_r6, s32 *, 8);
        if ((void *) (var_r6 + temp_r5_2) == arg1) {
            M2C_FIELD(var_r6, s32 *, 8) = (s32) (temp_r5_2 + M2C_FIELD(arg1, s32 *, 8));
            M2C_FIELD(var_r6, M2C_UNK **, 4) = var_r7;
            if (var_r7 != NULL) {
                /* draft: did not compile: *var_r7 = var_r6; */
                return arg0;
            }
        }
        return arg0;
    }
    return arg1;
}

M2C_UNK *OSAllocFromHeap(s32 arg0, s32 arg1) { return 0; } /* draft: stub */

void OSFreeToHeap(s32 arg0, s32 arg1) { } /* draft: stub */

s32 fn_800ABB64(s32 arg0) {
    s32 temp_r0;

    temp_r0 = lbl_8034FE78;
    lbl_8034FE78 = arg0;
    return temp_r0;
}

void fn_800ABB74(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r6;
    s32 var_r8;
    void *temp_r9;

    var_r6 = 0;
    lbl_8035079C = arg0;
    var_r8 = 0;
    lbl_80350798 = arg2;
loop_2:
    if (var_r8 < (s32) lbl_80350798) {
        var_r8 += 1;
        /* draft: did not compile: temp_r9 = lbl_8035079C + var_r6; */
        var_r6 += 0xC;
        M2C_FIELD(temp_r9, s32 *, 0) = -1;
        M2C_FIELD(temp_r9, s32 *, 8) = 0;
        M2C_FIELD(temp_r9, s32 *, 4) = 0;
        goto loop_2;
    }
    lbl_80350790 = arg1 & 0xFFFFFFE0;
    lbl_8034FE78 = -1;
    lbl_80350794 = (lbl_8035079C + (arg2 * 0xC) + 0x1F) & 0xFFFFFFE0;
}
