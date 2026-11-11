/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_8014BCCC();
M2C_UNK fn_8014BB98();
M2C_UNK OSReport(M2C_UNK *, s32);
s32 OSAllocFromHeap(s32, s32);
M2C_UNK fn_800C5B7C(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_801DB360;
extern M2C_UNK lbl_801DB36C;
extern M2C_UNK lbl_8034E160;
extern s32 lbl_8034E9B8;
M2C_UNK OSFreeToHeap(s32, s32);
extern s32 lbl_8034FE78;
M2C_UNK strcpy();
u32 strlen();
extern M2C_UNK lbl_8034E168;

s32 _hsdClassInit(void);
void get_up_vector_for_viewing_mtx(void);
void fn_80005868(void);
void fn_80005888(void);
void fn_800058A8(void);
void get_up_vector_for_viewing_mtx_inner(void);
void fn_800058E8(void);
s32 fn_80005908(s32 arg0);
void fn_800059A4(s32 arg0);
void fn_80005A08(s32 arg0);
void fn_80005A30(s32 arg0);
void fn_80005A58(void *arg0, void *arg1);
void fn_80005A98(void *arg0, u8 arg1, s32 arg2);
void fn_80005AE0(void *arg0, u8 arg1, s32 arg2);
s32 fn_80005B08(void *arg0, s32 arg1);
u16 fn_80005B58(void *arg0, s32 arg1);
s32 fn_80005B88(M2C_UNK *arg0, u32 arg1, s32 *arg2, M2C_UNK arg_sp0);
s32 fn_80005C50(void *arg0, s32 arg1, u16 arg2, M2C_UNK arg_sp0);
void fn_80005CDC(void *arg0);
void fn_80005D04(void *arg0);
void fn_80005D38(void *arg0, u16 arg2, u16 arg3);
void fn_80005E14(void *arg0, u16 arg2, s32 arg3);
void fn_80005EB4(void *arg0, u16 *arg3, M2C_UNK arg_sp0);
void fn_80005F98(void *arg0, u16 arg2);
void fn_8000602C(void *arg0, s32 arg3, s32 arg4);
void fn_800060B8(void *arg0, s32 arg2, u8 *arg3);
void fn_80006344(void *arg0, s32 arg3, u8 *arg4);
void fn_800064C8(s32 arg0, s32 arg1, s32 arg2);
void fn_80006530(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800065A8(void *arg0, s32 arg2, u8 *arg3);
void fn_80006828(void *arg0, s32 arg3, u8 *arg4);
void fn_800069A0(void *arg0);

s32 _hsdClassInit(void) {
    return 0;
}

void get_up_vector_for_viewing_mtx(void) {
    get_up_vector_for_viewing_mtx_inner();
}

void fn_80005868(void) {
    get_up_vector_for_viewing_mtx_inner();
}

void fn_80005888(void) {
    fn_800058E8();
}

void fn_800058A8(void) {
    fn_800058E8();
}

void get_up_vector_for_viewing_mtx_inner(void) {
    fn_8014BCCC();
}

void fn_800058E8(void) {
    fn_8014BB98();
}

s32 fn_80005908(s32 arg0) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r31 = lbl_8034E9B8;
    if ((s32) lbl_8034E9B8 == -1) {
        fn_800C5B7C(&lbl_801DB360, 0x87, &lbl_8034E160);
    }
    temp_r3 = OSAllocFromHeap(temp_r31, arg0);
    switch (temp_r3) {
    case 0:
            OSReport(&lbl_801DB36C, arg0);
            fn_800C5B7C(&lbl_801DB360, 0x8E, &lbl_8034E160);
        break;
    }
    return temp_r3;
}

void fn_800059A4(s32 arg0) {
    s32 temp_r31;

    temp_r31 = lbl_8034E9B8;
    if ((s32) lbl_8034E9B8 == -1) {
        fn_800C5B7C(&lbl_801DB360, 0x9B, &lbl_8034E160);
    }
    OSFreeToHeap(temp_r31, arg0);
}

void fn_80005A08(s32 arg0) {
    OSAllocFromHeap(lbl_8034FE78, arg0);
}

void fn_80005A30(s32 arg0) {
    OSFreeToHeap(lbl_8034FE78, arg0);
}

void fn_80005A58(void *arg0, void *arg1) {
    u8 temp_r3;
    u8 temp_r5;
    u8 temp_r6;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0);
    M2C_FIELD(arg1, s8 *, 0) = (s8) ((temp_r5 & 0xF8) | ((temp_r5 >> 5) & ~0xF8));
    temp_r6 = M2C_FIELD(arg0, u8 *, 0);
    M2C_FIELD(arg1, s8 *, 1) = (s8) (((temp_r6 >> 1U) & 3) | ((((s32) M2C_FIELD(arg0, u8 *, 1) >> 3) & ~0x1FE0) | ((temp_r6 << 5) & 0x1FE0)));
    temp_r3 = M2C_FIELD(arg0, u8 *, 1);
    M2C_FIELD(arg1, s8 *, 2) = (s8) (((temp_r3 << 3) & 0x7F8) | ((temp_r3 >> 2U) & 3 & ~0x7F8));
}

void fn_80005A98(void *arg0, u8 arg1, s32 arg2) {
    if (arg2 == 0) {
        M2C_FIELD(arg0, u8 *, 0) = (u8) (arg1 >> 0x18U);
        M2C_FIELD(arg0, u8 *, 1) = (u8) (arg1 >> 0x10U);
        M2C_FIELD(arg0, u8 *, 2) = (u8) (arg1 >> 8U);
        M2C_FIELD(arg0, u8 *, 3) = arg1;
        return;
    }
    M2C_FIELD(arg0, u8 *, 0) = arg1;
    M2C_FIELD(arg0, u8 *, 1) = (u8) (arg1 >> 8U);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (arg1 >> 0x10U);
    M2C_FIELD(arg0, u8 *, 3) = (u8) (arg1 >> 0x18U);
}

void fn_80005AE0(void *arg0, u8 arg1, s32 arg2) {
    if (arg2 == 0) {
        M2C_FIELD(arg0, u8 *, 0) = (u8) (arg1 >> 8U);
        M2C_FIELD(arg0, u8 *, 1) = arg1;
        return;
    }
    M2C_FIELD(arg0, u8 *, 0) = arg1;
    M2C_FIELD(arg0, u8 *, 1) = (u8) (arg1 >> 8U);
}

s32 fn_80005B08(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        return M2C_FIELD(arg0, u8 *, 3) | (((((M2C_FIELD(arg0, u8 *, 1) << 0x10) & ~0xFF000000) | (M2C_FIELD(arg0, u8 *, 0) << 0x18)) & ~0xFF00) | ((M2C_FIELD(arg0, u8 *, 2) << 8) & 0xFF00));
    }
    return M2C_FIELD(arg0, u8 *, 0) | (((((M2C_FIELD(arg0, u8 *, 2) << 0x10) & ~0xFF000000) | (M2C_FIELD(arg0, u8 *, 3) << 0x18)) & ~0xFF00) | ((M2C_FIELD(arg0, u8 *, 1) << 8) & 0xFF00));
}

u16 fn_80005B58(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        return (u16) ((M2C_FIELD(arg0, u8 *, 1) & ~0xFF00) | ((M2C_FIELD(arg0, u8 *, 0) << 8) & 0xFF00));
    }
    return (u16) ((M2C_FIELD(arg0, u8 *, 0) & ~0xFF00) | ((M2C_FIELD(arg0, u8 *, 1) << 8) & 0xFF00));
}

s32 fn_80005B88(M2C_UNK *arg0, u32 arg1, s32 *arg2, M2C_UNK arg_sp0) {
    M2C_UNK *var_r4;
    s32 temp_r28;
    s32 var_r31;
    s32 var_r3;
    u32 var_r29;
    u8 var_r30;

    if (arg0 != NULL) {
        var_r29 = strlen((unsigned long)(0));
    } else {
        var_r29 = 0U;
    }
    if (arg1 != 0U) {
        var_r30 = strlen(arg1);
    } else {
        var_r30 = 0U;
    }
    /* draft: did not compile: temp_r28 = fn_80005A08(var_r29 + (var_r30 + 8)); */
    if (var_r29 != 0U) {
        var_r4 = arg0;
    } else {
        var_r4 = &lbl_8034E168;
    }
    strcpy((long *)(var_r4), (unsigned long)(0));
    var_r31 = 2;
    var_r31 = var_r29 == 0U ? var_r31 : var_r29 + 1;
    var_r3 = var_r31;
    if (arg1 != 0U) {
        strcpy(temp_r28 + var_r31, arg1);
        var_r3 = var_r30 + var_r31 + 1;
    }
    *arg2 = var_r3;
    return temp_r28;
}

s32 fn_80005C50(void *arg0, s32 arg1, u16 arg2, M2C_UNK arg_sp0) {
    s32 var_r28;
    s32 var_r29;
    u16 temp_r30;

    /* draft: did not compile: temp_r30 = fn_80005B58(arg1, M2C_FIELD(arg0, s32 *, 0xB4)); */
    var_r29 = 0;
    var_r28 = arg1 + 2;
loop_4:
    if (var_r29 >= (s32) temp_r30) {
        return 0;
    }
    if (0 /* draft: did not compile */) {
        return var_r28;
    }
    var_r28 += 0xC;
    var_r29 += 1;
    goto loop_4;
}

void fn_80005CDC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) M2C_FIELD(arg0, s32 *, 0x50);
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(arg0, s32 *, 0x50);
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) + 2);
}

void fn_80005D04(void *arg0) { } /* draft: stub */

void fn_80005D38(void *arg0, u16 arg2, u16 arg3) { } /* draft: stub */

void fn_80005E14(void *arg0, u16 arg2, s32 arg3) { } /* draft: stub */

void fn_80005EB4(void *arg0, u16 *arg3, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80005F98(void *arg0, u16 arg2) { } /* draft: stub */

void fn_8000602C(void *arg0, s32 arg3, s32 arg4) { } /* draft: stub */

#pragma push
#pragma dont_inline on
void fn_800060B8(void *arg0, s32 arg2, u8 *arg3) {
    s32 temp_r4;
    s32 var_ctr_2;
    s32 var_r3;
    u32 temp_r0;
    u32 var_ctr;
    u32 var_ctr_3;
    u32 var_ctr_4;
    u32 var_r3_2;
    u8 *temp_r4_10;
    u8 *temp_r4_11;
    u8 *temp_r4_12;
    u8 *temp_r4_13;
    u8 *temp_r4_14;
    u8 *temp_r4_15;
    u8 *temp_r4_16;
    u8 *temp_r4_17;
    u8 *temp_r4_18;
    u8 *temp_r4_19;
    u8 *temp_r4_2;
    u8 *temp_r4_3;
    u8 *temp_r4_4;
    u8 *temp_r4_5;
    u8 *temp_r4_6;
    u8 *temp_r4_7;
    u8 *temp_r4_8;
    u8 *temp_r4_9;
    u8 *var_r31;
    u8 temp_r5;
    u8 temp_r5_2;

    var_r31 = arg3;
    if (arg2 != 0) {
        if (var_r31 == NULL) {
            return;
        }
        fn_80005AE0((void *)(M2C_FIELD(arg0, u8 **, 0x50)), (unsigned char)(M2C_FIELD(arg0, s32 *, 0xB4)), (long)(0));
        fn_80005AE0(M2C_FIELD(arg0, u8 **, 0x50) + 2, 2, M2C_FIELD(arg0, s32 *, 0xB4));
        fn_80005A98(M2C_FIELD(arg0, u8 **, 0x50) + 4, arg2, M2C_FIELD(arg0, s32 *, 0xB4));
        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (M2C_FIELD(arg0, u8 **, 0x50) + 8);
        if (arg2 <= 4) {
            var_r3 = 0;
            if (arg2 > 0) {
                temp_r4 = arg2 - 8;
                if (arg2 > 8) {
                    var_ctr = (u32) (temp_r4 + 7) >> 3U;
                    if (temp_r4 > 0) {
                        do {
                            temp_r4_2 = M2C_FIELD(arg0, u8 **, 0x50);
                            var_r3 += 8;
                            M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_2 + 1);
                            *temp_r4_2 = M2C_FIELD(var_r31, u8 *, 0);
                            temp_r4_3 = M2C_FIELD(arg0, u8 **, 0x50);
                            M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_3 + 1);
                            *temp_r4_3 = M2C_FIELD(var_r31, u8 *, 1);
                            temp_r4_4 = M2C_FIELD(arg0, u8 **, 0x50);
                            M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_4 + 1);
                            *temp_r4_4 = M2C_FIELD(var_r31, u8 *, 2);
                            temp_r4_5 = M2C_FIELD(arg0, u8 **, 0x50);
                            M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_5 + 1);
                            *temp_r4_5 = M2C_FIELD(var_r31, u8 *, 3);
                            temp_r4_6 = M2C_FIELD(arg0, u8 **, 0x50);
                            M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_6 + 1);
                            *temp_r4_6 = M2C_FIELD(var_r31, u8 *, 4);
                            temp_r4_7 = M2C_FIELD(arg0, u8 **, 0x50);
                            M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_7 + 1);
                            *temp_r4_7 = M2C_FIELD(var_r31, u8 *, 5);
                            temp_r4_8 = M2C_FIELD(arg0, u8 **, 0x50);
                            M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_8 + 1);
                            *temp_r4_8 = M2C_FIELD(var_r31, u8 *, 6);
                            temp_r4_9 = M2C_FIELD(arg0, u8 **, 0x50);
                            temp_r5 = M2C_FIELD(var_r31, u8 *, 7);
                            var_r31 += 8;
                            M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_9 + 1);
                            *temp_r4_9 = temp_r5;
                            var_ctr -= 1;
                        } while (var_ctr != 0);
                    }
                }
                var_ctr_2 = arg2 - var_r3;
                if (var_r3 < arg2) {
                    do {
                        temp_r4_10 = M2C_FIELD(arg0, u8 **, 0x50);
                        var_r3 += 1;
                        temp_r5_2 = *var_r31;
                        var_r31 += 1;
                        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_10 + 1);
                        *temp_r4_10 = temp_r5_2;
                        var_ctr_2 -= 1;
                    } while (var_ctr_2 != 0);
                }
            }
            var_r3_2 = 4 - var_r3;
            if (var_r3 < 4) {
                temp_r0 = var_r3_2 >> 3U;
                var_ctr_3 = temp_r0;
                if (temp_r0 != 0) {
                    do {
                        temp_r4_11 = M2C_FIELD(arg0, u8 **, 0x50);
                        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_11 + 1);
                        *temp_r4_11 = 0;
                        temp_r4_12 = M2C_FIELD(arg0, u8 **, 0x50);
                        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_12 + 1);
                        *temp_r4_12 = 0;
                        temp_r4_13 = M2C_FIELD(arg0, u8 **, 0x50);
                        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_13 + 1);
                        *temp_r4_13 = 0;
                        temp_r4_14 = M2C_FIELD(arg0, u8 **, 0x50);
                        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_14 + 1);
                        *temp_r4_14 = 0;
                        temp_r4_15 = M2C_FIELD(arg0, u8 **, 0x50);
                        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_15 + 1);
                        *temp_r4_15 = 0;
                        temp_r4_16 = M2C_FIELD(arg0, u8 **, 0x50);
                        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_16 + 1);
                        *temp_r4_16 = 0;
                        temp_r4_17 = M2C_FIELD(arg0, u8 **, 0x50);
                        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_17 + 1);
                        *temp_r4_17 = 0;
                        temp_r4_18 = M2C_FIELD(arg0, u8 **, 0x50);
                        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_18 + 1);
                        *temp_r4_18 = 0;
                        var_ctr_3 -= 1;
                    } while (var_ctr_3 != 0);
                    var_r3_2 &= 7;
                    if (var_r3_2 != 0) {
                        goto block_14;
                    }
                } else {
block_14:
                    var_ctr_4 = var_r3_2;
                    do {
                        temp_r4_19 = M2C_FIELD(arg0, u8 **, 0x50);
                        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_19 + 1);
                        *temp_r4_19 = 0;
                        var_ctr_4 -= 1;
                    } while (var_ctr_4 != 0);
                }
            }
        } else {
            fn_80005A98(M2C_FIELD(arg0, u8 **, 0x50), 0, M2C_FIELD(arg0, s32 *, 0xB4));
            M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (M2C_FIELD(arg0, u8 **, 0x50) + 4);
        }
        M2C_FIELD(arg0, s32 *, 0x58) = (s32) (M2C_FIELD(arg0, s32 *, 0x58) + 1);
    }
}
#pragma pop

void fn_80006344(void *arg0, s32 arg3, u8 *arg4) { } /* draft: stub */

void fn_800064C8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_cr0_eq;

    temp_cr0_eq = arg2 == 0;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_eq != 0) {
            return;
        }
        /* draft: did not compile: fn_800060B8(arg0, arg1, strlen(arg2) + 1, arg2); */
    }
}

void fn_80006530(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_cr0_eq;

    temp_cr0_eq = arg3 == 0;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_eq != 0) {
            return;
        }
        /* draft: did not compile: fn_80006344(arg0, arg1, arg2, strlen(arg3) + 1, arg3); */
    }
}

#pragma push
#pragma dont_inline on
void fn_800065A8(void *arg0, s32 arg2, u8 *arg3) {
    s32 temp_r4;
    s32 var_ctr_2;
    s32 var_r3;
    u32 temp_r0;
    u32 var_ctr;
    u32 var_ctr_3;
    u32 var_ctr_4;
    u32 var_r3_2;
    u8 *temp_r4_10;
    u8 *temp_r4_11;
    u8 *temp_r4_12;
    u8 *temp_r4_13;
    u8 *temp_r4_14;
    u8 *temp_r4_15;
    u8 *temp_r4_16;
    u8 *temp_r4_17;
    u8 *temp_r4_18;
    u8 *temp_r4_19;
    u8 *temp_r4_2;
    u8 *temp_r4_3;
    u8 *temp_r4_4;
    u8 *temp_r4_5;
    u8 *temp_r4_6;
    u8 *temp_r4_7;
    u8 *temp_r4_8;
    u8 *temp_r4_9;
    u8 *var_r31;
    u8 temp_r5;
    u8 temp_r5_2;

    var_r31 = arg3;
    if (arg2 != 0) {
        fn_80005AE0((void *)(M2C_FIELD(arg0, u8 **, 0x50)), (unsigned char)(M2C_FIELD(arg0, s32 *, 0xB4)), (long)(0));
        fn_80005AE0(M2C_FIELD(arg0, u8 **, 0x50) + 2, 7, M2C_FIELD(arg0, s32 *, 0xB4));
        fn_80005A98(M2C_FIELD(arg0, u8 **, 0x50) + 4, arg2, M2C_FIELD(arg0, s32 *, 0xB4));
        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (M2C_FIELD(arg0, u8 **, 0x50) + 8);
        if (arg2 <= 4) {
            var_r3 = 0;
            if (arg2 > 0) {
                temp_r4 = arg2 - 8;
                if (arg2 > 8) {
                    var_ctr = (u32) (temp_r4 + 7) >> 3U;
                    if (temp_r4 > 0) {
                        do {
                            temp_r4_2 = M2C_FIELD(arg0, u8 **, 0x50);
                            var_r3 += 8;
                            M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_2 + 1);
                            *temp_r4_2 = M2C_FIELD(var_r31, u8 *, 0);
                            temp_r4_3 = M2C_FIELD(arg0, u8 **, 0x50);
                            M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_3 + 1);
                            *temp_r4_3 = M2C_FIELD(var_r31, u8 *, 1);
                            temp_r4_4 = M2C_FIELD(arg0, u8 **, 0x50);
                            M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_4 + 1);
                            *temp_r4_4 = M2C_FIELD(var_r31, u8 *, 2);
                            temp_r4_5 = M2C_FIELD(arg0, u8 **, 0x50);
                            M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_5 + 1);
                            *temp_r4_5 = M2C_FIELD(var_r31, u8 *, 3);
                            temp_r4_6 = M2C_FIELD(arg0, u8 **, 0x50);
                            M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_6 + 1);
                            *temp_r4_6 = M2C_FIELD(var_r31, u8 *, 4);
                            temp_r4_7 = M2C_FIELD(arg0, u8 **, 0x50);
                            M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_7 + 1);
                            *temp_r4_7 = M2C_FIELD(var_r31, u8 *, 5);
                            temp_r4_8 = M2C_FIELD(arg0, u8 **, 0x50);
                            M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_8 + 1);
                            *temp_r4_8 = M2C_FIELD(var_r31, u8 *, 6);
                            temp_r4_9 = M2C_FIELD(arg0, u8 **, 0x50);
                            temp_r5 = M2C_FIELD(var_r31, u8 *, 7);
                            var_r31 += 8;
                            M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_9 + 1);
                            *temp_r4_9 = temp_r5;
                            var_ctr -= 1;
                        } while (var_ctr != 0);
                    }
                }
                var_ctr_2 = arg2 - var_r3;
                if (var_r3 < arg2) {
                    do {
                        temp_r4_10 = M2C_FIELD(arg0, u8 **, 0x50);
                        var_r3 += 1;
                        temp_r5_2 = *var_r31;
                        var_r31 += 1;
                        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_10 + 1);
                        *temp_r4_10 = temp_r5_2;
                        var_ctr_2 -= 1;
                    } while (var_ctr_2 != 0);
                }
            }
            var_r3_2 = 4 - var_r3;
            if (var_r3 < 4) {
                temp_r0 = var_r3_2 >> 3U;
                var_ctr_3 = temp_r0;
                if (temp_r0 != 0) {
                    do {
                        temp_r4_11 = M2C_FIELD(arg0, u8 **, 0x50);
                        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_11 + 1);
                        *temp_r4_11 = 0;
                        temp_r4_12 = M2C_FIELD(arg0, u8 **, 0x50);
                        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_12 + 1);
                        *temp_r4_12 = 0;
                        temp_r4_13 = M2C_FIELD(arg0, u8 **, 0x50);
                        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_13 + 1);
                        *temp_r4_13 = 0;
                        temp_r4_14 = M2C_FIELD(arg0, u8 **, 0x50);
                        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_14 + 1);
                        *temp_r4_14 = 0;
                        temp_r4_15 = M2C_FIELD(arg0, u8 **, 0x50);
                        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_15 + 1);
                        *temp_r4_15 = 0;
                        temp_r4_16 = M2C_FIELD(arg0, u8 **, 0x50);
                        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_16 + 1);
                        *temp_r4_16 = 0;
                        temp_r4_17 = M2C_FIELD(arg0, u8 **, 0x50);
                        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_17 + 1);
                        *temp_r4_17 = 0;
                        temp_r4_18 = M2C_FIELD(arg0, u8 **, 0x50);
                        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_18 + 1);
                        *temp_r4_18 = 0;
                        var_ctr_3 -= 1;
                    } while (var_ctr_3 != 0);
                    var_r3_2 &= 7;
                    if (var_r3_2 != 0) {
                        goto block_12;
                    }
                } else {
block_12:
                    var_ctr_4 = var_r3_2;
                    do {
                        temp_r4_19 = M2C_FIELD(arg0, u8 **, 0x50);
                        M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (temp_r4_19 + 1);
                        *temp_r4_19 = 0;
                        var_ctr_4 -= 1;
                    } while (var_ctr_4 != 0);
                }
            }
        } else {
            fn_80005A98(M2C_FIELD(arg0, u8 **, 0x50), 0, M2C_FIELD(arg0, s32 *, 0xB4));
            M2C_FIELD(arg0, u8 **, 0x50) = (u8 *) (M2C_FIELD(arg0, u8 **, 0x50) + 4);
        }
        M2C_FIELD(arg0, s32 *, 0x58) = (s32) (M2C_FIELD(arg0, s32 *, 0x58) + 1);
    }
}
#pragma pop

void fn_80006828(void *arg0, s32 arg3, u8 *arg4) { } /* draft: stub */

void fn_800069A0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) M2C_FIELD(arg0, s32 *, 0x50);
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) + 4);
}
