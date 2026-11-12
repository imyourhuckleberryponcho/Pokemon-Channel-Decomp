/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_8009C4D4(u32, u32, M2C_UNK);
M2C_UNK fn_800A3A58(void *, void **);
extern M2C_UNK lbl_8022A8B0;
M2C_UNK fn_80005888(void *);
M2C_UNK fn_80020694(M2C_UNK);
M2C_UNK fn_800A3E30(void *, M2C_UNK);
M2C_UNK VIWaitForRetrace();
extern u32 *lbl_80350568;
M2C_UNK fn_800278E0(void *, u16, u16, M2C_UNK);
M2C_UNK fn_800279B8(void *);
M2C_UNK fn_800A41A8();
extern void *lbl_80350564;
M2C_UNK fn_8009DDC8(M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_8022A9F8;
extern M2C_UNK lbl_8022AA30;
u32 get_up_vector_for_viewing_mtx();
M2C_UNK fn_80014844();
M2C_UNK fn_800146F0(s32 **, M2C_UNK);
M2C_UNK fn_80014798(s32 **, M2C_UNK *);
M2C_UNK fn_800208F4(s32, s32 **);
u8 *fn_800317DC(s32 **, s32);
M2C_UNK fn_80078988(s32 **, M2C_UNK, M2C_UNK);
u32 strchr(u8 *, s8);
M2C_UNK fn_8001DF90(void *, s32, s32);
M2C_UNK fn_8001DFDC();
M2C_UNK fn_8001E0D0(void *, M2C_UNK *);
M2C_UNK fn_8001E4A4(void *, u8);
M2C_UNK fn_8001E4AC(void *, u8);
extern M2C_UNK lbl_8034FE18;
extern M2C_UNK lbl_80351C10;
extern M2C_UNK lbl_80351C14;
M2C_UNK fn_8001DFA4(void *);
extern M2C_UNK lbl_801DA6A0;
extern M2C_UNK lbl_801DA6D0;
M2C_UNK fn_8001E014(void *, M2C_UNK *, s32);
extern M2C_UNK lbl_8034FE1C;
extern M2C_UNK lbl_8034FE20;
M2C_UNK fn_8014F694(u8 *, M2C_UNK, M2C_UNK *, f32);
s32 strlen();
extern M2C_UNK lbl_8034FE24;
extern M2C_UNK lbl_8034FE2C;
s32 *fn_80013FB4(s32);
M2C_UNK fn_8014BB98(s32);
s32 fn_8014BCCC();
M2C_UNK strcat(s32, s32);
M2C_UNK strcpy(M2C_UNK *);
extern M2C_UNK lbl_8034FE38;
u32 fn_80014298(void *, M2C_UNK *);
extern M2C_UNK lbl_8034FE40;
extern f32 lbl_80351C30;
u8 fn_80070CFC(f32 *);
M2C_UNK PSVECSubtract(s32, s32, void **, s32, void *);
M2C_UNK PSVECNormalize(f32 *, f32 *);
M2C_UNK PSVECCrossProduct(void **, void **, f32 *, s32, void *);
extern f32 lbl_80351C34;

void fn_800A4CEC(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_800A4D50(void *arg0, s32 arg1);
void *fn_800A4DB4(void *arg0);
void fn_800A4E60(s32 **arg0, s32 **arg1);
void *fn_800A4E84(void *arg0, s16 arg1);
void fn_800A4F1C(void);
void *fn_800A4FB4(void *arg0, s16 arg1);
u32 fn_800A5024(s32 *arg0);
u32 fn_800A50E8(s32 *arg0);
void fn_800A51AC(s32 *arg0, void *arg1);
void fn_800A5220(s32 arg0, s8 arg2, M2C_UNK arg_sp0);
void fn_800A5308(s32 arg0, u8 *arg2, M2C_UNK arg_sp0);
void fn_800A5400(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5, M2C_UNK arg_sp0);
void fn_800A54F8(s32 arg0, s32 arg1, s32 arg2);
void fn_800A5570(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_800A5588(void *arg0, s32 *arg1);
void fn_800A56EC(void *arg0, void *arg1, M2C_UNK arg_sp0);
void fn_800A5858(void *arg0, s32 arg1);
void fn_800A5868();
void fn_800A5B68(void *arg0, void *arg1, M2C_UNK arg_sp0);
void *fn_800A5CD4(void *arg0, s32 arg1);
void **fn_800A5E4C(void **arg0, s16 arg1);
s32 fn_800A5EE8(void *arg0);
s16 fn_800A5F5C(void *arg0, f32 farg0, f32 farg1);
f32 fn_800A6074(void *arg0, s32 arg1, f32 farg0, f32 farg1);
void fn_800A613C(s32 arg0, f32 farg0, f32 farg1);
s16 fn_800A6194(void *arg0, s32 arg1);
void fn_800A61C4(void *arg0, void *arg1, s32 arg2);
u8 fn_800A632C(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0);
void fn_800A65A4(void *arg0);
void fn_800A6654(void *arg0, s32 *arg1);
void fn_800A671C(void *arg0, s32 *arg1);

void fn_800A4CEC(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u32 temp_r9;

    M2C_FIELD(arg0, s32 *, 0x250) = arg1;
    M2C_FIELD(arg0, s32 *, 0x254) = arg3;
    M2C_FIELD(arg0, s32 *, 0x258) = arg4;
    M2C_FIELD(arg0, s32 *, 0x25C) = arg2;
    temp_r9 = M2C_FIELD(arg0, u32 *, 0x1D4);
    if (temp_r9 != 0U) {
        fn_8009C4D4(temp_r9, (arg1 * M2C_FIELD(arg0, s32 *, 0x24C)) / 127, 0x81020409);
    }
}

void fn_800A4D50(void *arg0, s32 arg1) { } /* draft: stub */

#pragma push
#pragma peephole off
void *fn_800A4DB4(void *arg0) {
    void *sp8;

    /* draft: did not compile: fn_800A4E60(&sp8); */
    fn_800A3A58(arg0, &sp8);
    if (sp8 != NULL) {
        M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp8, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    sp8 = NULL;
    M2C_FIELD(arg0, s32 *, 4) = 0x90000;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_8022A8B0;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 0x40000);
    return arg0;
}
#pragma pop

void fn_800A4E60(s32 **arg0, s32 **arg1) {
    s32 *temp_r4;

    *arg0 = *arg1;
    temp_r4 = *arg0;
    if (temp_r4 != NULL) {
        *temp_r4 += 1;
    }
}

void *fn_800A4E84(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_8022A8B0;
        if ((u32 *) lbl_80350568 != NULL) {
loop_4:
            if ((u32) *lbl_80350568 == 0U) {
                VIWaitForRetrace();
                goto loop_4;
            }
            fn_80020694(1);
            lbl_80350568 = NULL;
        }
        fn_800A3E30(arg0, 0);
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_800A4F1C(void) { } /* draft: stub */

void *fn_800A4FB4(void *arg0, s16 arg1) {
    s32 temp_cr0_eq;

    temp_cr0_eq = arg0 == NULL;
    switch (temp_cr0_eq) {
    case 0:
            M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_8022A9F8;
            switch (temp_cr0_eq) {
            case 0:
                    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_8022AA30;
                    fn_8009DDC8(0, &lbl_8022AA30);
                break;
            }
            if (arg1 > 0) {
                fn_80005888(arg0);
            }
        break;
    }
    return arg0;
}

u32 fn_800A5024(s32 *arg0) {
    s8 var_r3;
    s8 var_r30;
    s32 *sp8;

    var_r30 = 0;
    var_r3 = get_up_vector_for_viewing_mtx(0x268);
    if (var_r3 != 0U) {
        sp8 = arg0;
        if (arg0 != NULL) {
            *arg0 += 1;
        }
        var_r30 = 1;
        /* draft: did not compile: var_r3 = fn_800A4DB4(&sp8); */
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

u32 fn_800A50E8(s32 *arg0) {
    s32 *sp8;
    s8 var_r3;
    s8 var_r30;

    var_r30 = 0;
    var_r3 = get_up_vector_for_viewing_mtx(0x268);
    if (var_r3 != 0U) {
        sp8 = arg0;
        if (arg0 != NULL) {
            *arg0 += 1;
        }
        var_r30 = 1;
        var_r3 = fn_800A3A58((void *)(&sp8), (void **)(0));
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

void fn_800A51AC(s32 *arg0, void *arg1) {
    s32 spC;
    M2C_UNK sp10;
    u8 sp8;
    void *var_r5;

    var_r5 = arg1;
loop_1:
    if (M2C_FIELD(var_r5, s8 *, 0) != 0) {
block_4:
        /* draft: did not compile: var_r5 += 1; */
        goto loop_1;
    }
    if ((s8) M2C_FIELD(var_r5, s8 *, 1) != 0) {
        goto block_4;
    }
    *arg0 = 0;
    sp8 = spC;
    /* draft: did not compile: fn_80014844(arg0, var_r5 + 1, &sp10, &sp8); */
}

void fn_800A5220(s32 arg0, s8 arg2, M2C_UNK arg_sp0) {
    s32 *spC;
    M2C_UNK sp8;
    s32 temp_r29;
    s32 var_r28;

    if (arg2 == 0) {
        fn_800A51AC((long *)(0), (void *)(0));
        return;
    }
    fn_80014798(&spC, &sp8);
    var_r28 = 0;
    temp_r29 = *spC;
loop_6:
    if (var_r28 < temp_r29) {
        if (arg2 == (s8) *fn_800317DC(&spC, var_r28)) {
            *fn_800317DC(&spC, var_r28) = 0;
        }
        var_r28 += 1;
        goto loop_6;
    }
    if ((temp_r29 > 0) && ((s8) *fn_800317DC(&spC, temp_r29 - 1) != 0)) {
        fn_80078988(&spC, 1, 0);
    }
    fn_800208F4(arg0, &spC);
    fn_800146F0(&spC, -1);
}

void fn_800A5308(s32 arg0, u8 *arg2, M2C_UNK arg_sp0) {
    s32 *spC;
    M2C_UNK sp8;
    s32 temp_r30;
    s32 var_r29;

    if ((arg2 == NULL) || ((s8) *arg2 == 0)) {
        /* draft: did not compile: fn_800A51AC(arg0); */
        return;
    }
    fn_80014798(&spC, &sp8);
    var_r29 = 0;
    temp_r30 = *spC;
loop_7:
    if (var_r29 < temp_r30) {
        if (strchr(arg2, (s8) *fn_800317DC(&spC, var_r29)) != 0U) {
            *fn_800317DC(&spC, var_r29) = 0;
        }
        var_r29 += 1;
        goto loop_7;
    }
    if ((temp_r30 > 0) && ((s8) *fn_800317DC(&spC, temp_r30 - 1) != 0)) {
        fn_80078988(&spC, 1, 0);
    }
    fn_800208F4(arg0, &spC);
    fn_800146F0(&spC, -1);
}

void fn_800A5400(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5, M2C_UNK arg_sp0) {
    s32 var_r26;
    s32 var_r27;
    u8 temp_r28;
    u8 temp_r29;

    temp_r29 = M2C_FIELD(arg0, u8 *, 0x15);
    temp_r28 = M2C_FIELD(arg0, u8 *, 0x14);
    fn_8001E4AC((void *)1, (unsigned char)(0));
    fn_8001E4A4(arg0, 0U);
    var_r27 = 0;
loop_8:
    if (var_r27 < arg4) {
        fn_8001DF90(arg0, arg1 - 2, arg2 + var_r27);
        fn_8001DFDC(arg0, &lbl_80351C10);
        fn_8001E0D0(arg0, &lbl_8034FE18);
        if ((arg5 == 0) || (var_r27 != 0)) {
            fn_8001DFDC(arg0, &lbl_80351C14);
        }
        var_r26 = -1;
loop_6:
        if (var_r26 < (s32) (arg3 + 1)) {
            fn_8001E0D0(arg0, &lbl_8034FE18);
            var_r26 += 1;
            goto loop_6;
        }
        var_r27 += 1;
        goto loop_8;
    }
    fn_8001E4AC(arg0, temp_r29);
    fn_8001E4A4(arg0, temp_r28);
}

void fn_800A54F8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    void *var_r4;

    temp_r0 = arg1 * 4;
    var_r4 = &lbl_801DA6A0 + 0x10 + temp_r0;
    var_r4 = arg2 != 0 ? var_r4 : &lbl_801DA6A0 + temp_r0;
    fn_8001DFA4(var_r4);
    fn_8001DFDC(arg0, &lbl_801DA6A0 + 0x20 + (arg1 * 4));
}

void fn_800A5570(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = -1;
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, s32 *, 0x10) = arg3;
}

s32 fn_800A5588(void *arg0, s32 *arg1) {
    int temp_cr0_eq;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r5_2;

    if ((s32) M2C_FIELD(arg0, s32 *, 8) < 0) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, s32 *, 4) = (s32) *M2C_FIELD(arg0, s32 **, 0);
    }
    temp_r0 = *arg1;
    temp_cr0_eq = (temp_r0 & 8) == 0;
    *arg1 = 0;
    if ((temp_cr0_eq == 0) || (temp_r0 & 0x10000)) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + *(&lbl_801DA6D0 + (M2C_FIELD(arg0, s32 *, 8) * 4)));
    } else if ((temp_r0 & 4) || (temp_r0 & 0x20000)) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) - *(&lbl_801DA6D0 + (M2C_FIELD(arg0, s32 *, 8) * 4)));
    } else if ((temp_r0 & 2) || (temp_r0 & 0x80000)) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_r4 > 0) {
            M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r4 - 1);
        } else {
            M2C_FIELD(arg0, s32 *, 4) = 0;
        }
    } else if ((temp_r0 & 1) || (temp_r0 & 0x40000)) {
        temp_r4_2 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_r4_2 < 9) {
            M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r4_2 + 1);
        } else {
            M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 4) < (temp_r5 = M2C_FIELD(arg0, s32 *, 0xC))) {
        M2C_FIELD(arg0, s32 *, 4) = temp_r5;
    }
    temp_r5_2 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_r5_2 < (s32) M2C_FIELD(arg0, s32 *, 4)) {
        M2C_FIELD(arg0, s32 *, 4) = temp_r5_2;
    }
    if (temp_r0 & 0x100) {
        *M2C_FIELD(arg0, s32 **, 0) = M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 8) = -1;
        return 0;
    }
    if (temp_r0 & 0x200) {
        M2C_FIELD(arg0, s32 *, 8) = -1;
        return 0;
    }
    return 1;
}

void fn_800A56EC(void *arg0, void *arg1, M2C_UNK arg_sp0) {
    s32 var_r28;
    u32 *var_r27_2;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r6;
    u8 var_r26;
    s32 var_r27;
    s32 var_r5;
    M2C_UNK *var_r4;
    s32 var_r25;
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg1, void **, 0);
    var_r27 = M2C_FIELD(arg1, s32 *, 4);
    temp_r3 = M2C_FIELD(temp_r31, s32 *, 0x18);
    if (temp_r3 < (s32) (var_r27 + 0xB)) {
        var_r27 = temp_r3 - 0xB;
    }
    fn_800A5400((void *)(temp_r31), (long)(var_r27), (long)(M2C_FIELD(arg1, s32 *, 8)), (long)(0xB), (long)(1), (unsigned char)(0), (long)(0));
    fn_8001DF90(temp_r31, var_r27, M2C_FIELD(arg1, s32 *, 8));
    /* draft: did not compile: fn_800A54F8(temp_r31, 0, 1); */
    var_r4 = &lbl_8034FE18;
    if ((s32) M2C_FIELD(arg0, s32 *, 4) < 0) {
        var_r4 = &lbl_8034FE1C;
    }
    fn_8001E0D0(temp_r31, var_r4);
    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    var_r28 = -(temp_r4 + 1);
    var_r28 += 1;
    if (temp_r4 >= 0) {
        var_r28 = temp_r4;
    }
    var_r26 = 0;
    /* draft: did not compile: var_r27_2 = &lbl_801DA6D0 + 0x24; */
    var_r25 = 9;
    do {
        if ((s32) M2C_FIELD((s32)arg0, s32 *, 8) == var_r25) {
            /* draft: did not compile: fn_800A54F8(temp_r31, 1, 1); */
        } else {
            /* draft: did not compile: fn_800A54F8(temp_r31, 0, 1); */
        }
        temp_r6 = ((u32) var_r28 / (u32) *var_r27_2) % 10;
        if ((var_r25 <= (s32) M2C_FIELD(arg0, s32 *, 8)) || (temp_r6 > 0)) {
            var_r26 = 1;
        }
        var_r5 = 0x20;
        var_r5 = var_r26 == 0 ? var_r5 : temp_r6 + 0x30;
        fn_8001E014(temp_r31, &lbl_8034FE20, var_r5);
        var_r25 -= 1;
        var_r27_2 -= 4;
    } while (var_r25 >= 0);
}

void fn_800A5858(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = -1;
}

void fn_800A5868() { } /* draft: stub */

void fn_800A5B68(void *arg0, void *arg1, M2C_UNK arg_sp0) {
    u8 sp8;
    s32 temp_r3;
    s32 var_r29_2;
    s32 var_r30;
    u8 *var_r29;
    u8 *var_r30_2;
    u8 temp_r4;
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg1, void **, 0);
    var_r30 = M2C_FIELD(arg1, s32 *, 4);
    temp_r3 = M2C_FIELD(temp_r31, s32 *, 0x18);
    if (temp_r3 < (s32) (var_r30 + 0x15)) {
        var_r30 = temp_r3 - 0x15;
    }
    fn_800A5400((void *)(temp_r31), (long)(var_r30), (long)(M2C_FIELD(arg1, s32 *, 8)), (long)(0x14), (long)(2), (unsigned char)(1), (long)(0));
    fn_8014F694(&sp8, 0x28, &lbl_8034FE24, M2C_FIELD(arg0, f32 *, 4));
    fn_8001DF90(temp_r31, var_r30, M2C_FIELD(arg1, s32 *, 8));
    /* draft: did not compile: fn_800A54F8(temp_r31, 3, 1); */
    var_r29 = &sp8;
loop_4:
    temp_r4 = *var_r29;
    if ((s8) temp_r4 != 0) {
        fn_8001E014(temp_r31, &lbl_8034FE20, (s8) temp_r4);
        var_r29 += 1;
        goto loop_4;
    }
    fn_8014F694(&sp8, 0x28, &lbl_8034FE2C, M2C_FIELD(arg0, f32 *, 4));
    var_r29_2 = strlen(&sp8) - 1;
    fn_8001DF90(temp_r31, var_r30, M2C_FIELD(arg1, s32 *, 8) + 1);
    var_r30_2 = &sp8;
loop_10:
    if ((s8) *var_r30_2 != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 8) == var_r29_2) {
            /* draft: did not compile: fn_800A54F8(temp_r31, 1, 1); */
        } else {
            /* draft: did not compile: fn_800A54F8(temp_r31, 0, 1); */
        }
        fn_8001E014(temp_r31, &lbl_8034FE20, (s8) *var_r30_2);
        var_r30_2 += 1;
        var_r29_2 -= 1;
        goto loop_10;
    }
}

void *fn_800A5CD4(void *arg0, s32 arg1) {
    s32 *sp8;
    s32 *temp_r3;
    s32 *temp_r4;
    s32 *var_r4;
    s32 temp_r31;

    M2C_FIELD(arg0, s32 **, 0) = NULL;
    temp_r31 = fn_8014BCCC(strlen(arg1) + 5);
    strcpy(&lbl_8034FE38);
    strcat(temp_r31, arg1);
    /* draft: did not compile: var_r4 = get_up_vector_for_viewing_mtx(0x2C); */
    if (var_r4 != NULL) {
        var_r4 = fn_80013FB4(temp_r31);
    }
    sp8 = var_r4;
    if (var_r4 != NULL) {
        *var_r4 += 1;
    }
    if ((&sp8 != arg0) && (sp8 != (s32 *) M2C_FIELD(arg0, s32 **, 0))) {
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) += 1;
        }
        temp_r4 = M2C_FIELD(arg0, s32 **, 0);
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, s32 *, 0) -= 1;
            if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                temp_r3 = M2C_FIELD(arg0, s32 **, 0);
                if (temp_r3 != NULL) {
                    M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
        }
        M2C_FIELD(arg0, s32 **, 0) = sp8;
    }
    if (sp8 != NULL) {
        M2C_FIELD(sp8, s32 *, 0) -= 1;
        if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp8, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    sp8 = NULL;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    fn_8014BB98(temp_r31);
    return arg0;
}

void **fn_800A5E4C(void **arg0, s16 arg1) {
    s32 temp_cr0_eq;
    void *temp_r3;
    void *temp_r4;

    temp_cr0_eq = arg0 == NULL;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_eq == 0) {
            temp_r4 = *arg0;
            if (temp_r4 != NULL) {
                M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
                if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                    temp_r3 = *arg0;
                    if (temp_r3 != NULL) {
                        M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            *arg0 = NULL;
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

s32 fn_800A5EE8(void *arg0) {
    void *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 4) != 0U) {
        return 1;
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0);
    if (M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), u8 (**)(void *), 0xC)(temp_r3) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, u32 *, 4) = fn_80014298(M2C_FIELD(arg0, void **, 0), &lbl_8034FE40);
    return 1;
}

s16 fn_800A5F5C(void *arg0, f32 farg0, f32 farg1) {
    f32 temp_f0;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    u16 temp_r0;
    s32 temp_r5;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r4;
    void *temp_r6;
    void *temp_r8;
    void *var_r7;

    temp_r6 = M2C_FIELD(arg0, void **, 4);
    temp_f7 = -farg1;
    temp_r4 = M2C_FIELD(temp_r6, void **, 0x14);
    var_r7 = temp_r4;
loop_14:
    temp_r0 = M2C_FIELD(var_r7, s16 *, 0);
    switch (temp_r0) {                              /* irregular */
    case 3:
        break;
    case 1:
        /* draft: did not compile: temp_r3 = M2C_FIELD(temp_r6, s32 *, 4) + (M2C_FIELD(var_r7, s16 *, 2) * 0xC); */
        temp_f0 = M2C_FIELD(temp_r3, f32 *, 0);
        if ((farg0 < temp_f0) || ((farg0 == temp_f0) && (temp_f7 < -M2C_FIELD(temp_r3, f32 *, 8)))) {
            /* draft: did not compile: var_r7 = temp_r4 + (M2C_FIELD(var_r7, s16 *, 4) * 8); */
        } else {
            /* draft: did not compile: var_r7 = temp_r4 + (M2C_FIELD(var_r7, s16 *, 6) * 8); */
        }
        goto loop_14;
    case 2:
        temp_r5 = M2C_FIELD(temp_r6, s32 *, 4);
        /* draft: did not compile: temp_r8 = M2C_FIELD(temp_r6, s32 *, 8) + (M2C_FIELD(var_r7, s16 *, 2) * 0xC); */
        /* draft: did not compile: temp_r3_2 = temp_r5 + (M2C_FIELD(temp_r8, s16 *, 0) * 0xC); */
        temp_f5 = M2C_FIELD(temp_r3_2, f32 *, 0);
        temp_f6 = -M2C_FIELD(temp_r3_2, f32 *, 8);
        /* draft: did not compile: temp_r3_3 = temp_r5 + (M2C_FIELD(temp_r8, s16 *, 2) * 0xC); */
        if (((temp_f7 - temp_f6) * (M2C_FIELD(temp_r3_3, f32 *, 0) - temp_f5)) > ((farg0 - temp_f5) * (-M2C_FIELD(temp_r3_3, f32 *, 8) - temp_f6))) {
            /* draft: did not compile: var_r7 = temp_r4 + (M2C_FIELD(var_r7, s16 *, 4) * 8); */
        } else {
            /* draft: did not compile: var_r7 = temp_r4 + (M2C_FIELD(var_r7, s16 *, 6) * 8); */
        }
        goto loop_14;
    }
    temp_f0 = M2C_FIELD(var_r7, s16 *, 2);
    return temp_f0;}

f32 fn_800A6074(void *arg0, s32 arg1, f32 farg0, f32 farg1) {
    f32 temp_f10;
    f32 temp_f5_2;
    f32 temp_f4;
    f32 temp_f6_3;
    f32 temp_f11;
    f32 temp_f8;
    f32 temp_f6_2;
    f32 temp_f5;
    f32 temp_f7;
    f32 temp_f6;
    f32 temp_f9;
    s32 temp_r5_2;
    void *temp_r3;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r5;
    void *temp_r6;

    temp_r5 = M2C_FIELD(arg0, void **, 4);
    if (arg1 < 0) {
        return lbl_80351C30;
    }
    temp_r5_2 = M2C_FIELD(temp_r5, s32 *, 4);
    /* draft: did not compile: temp_r6 = M2C_FIELD(temp_r5, s32 *, 8) + (arg1 * 0x24); */
    /* draft: did not compile: temp_r4_2 = temp_r5_2 + (M2C_FIELD(temp_r6, s16 *, 0) * 0xC); */
    temp_f5_2 = M2C_FIELD(temp_r4_2, f32 *, 0);
    temp_f6_2 = -M2C_FIELD(temp_r4_2, f32 *, 8);
    /* draft: did not compile: temp_r3 = temp_r5_2 + (M2C_FIELD(temp_r6, s16 *, 0xC) * 0xC); */
    temp_f11 = -farg1 - temp_f6_2;
    /* draft: did not compile: temp_r4 = temp_r5_2 + (M2C_FIELD(temp_r6, s16 *, 0x18) * 0xC); */
    temp_f7 = M2C_FIELD(temp_r3, f32 *, 0) - temp_f5_2;
    temp_f9 = M2C_FIELD(temp_r4, f32 *, 0) - temp_f5_2;
    temp_f10 = farg0 - temp_f5_2;
    temp_f6_3 = -M2C_FIELD(temp_r4, f32 *, 8) - temp_f6_2;
    temp_f8 = -M2C_FIELD(temp_r3, f32 *, 8) - temp_f6_2;
    temp_f5 = (temp_f6_3 * temp_f7) - (temp_f9 * temp_f8);
    temp_f6 = (temp_f10 * temp_f6_3);
    temp_f6 -= (temp_f11 * temp_f9);
    temp_f4 = (temp_f11 * temp_f7) - (temp_f10 * temp_f8);
    return ((temp_f4 * M2C_FIELD(temp_r4, f32 *, 4)) + ((((temp_f5 - temp_f6) - temp_f4) * M2C_FIELD(temp_r4_2, f32 *, 4)) + (temp_f6 * M2C_FIELD(temp_r3, f32 *, 4)))) / temp_f5;
}

void fn_800A613C(s32 arg0, f32 farg0, f32 farg1) { } /* draft: stub */

s16 fn_800A6194(void *arg0, s32 arg1) { return 0; } /* draft: stub */

void fn_800A61C4(void *arg0, void *arg1, s32 arg2) {
    s32 sp40;
    s32 sp3C;
    s32 sp10;
    s8 spC;
    s32 sp1C;
    s8 sp18;
    s32 sp58;
    s32 sp54;
    void *sp50;
    s32 sp4C;
    s32 sp48;
    void *sp44;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    void *sp14;
    void *sp8;
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r6;
    void *temp_r4;
    void *temp_r7;

    temp_r4 = M2C_FIELD(arg1, void **, 4);
    if (arg2 < 0) {
        sp2C = lbl_80351C30;
        sp30 = lbl_80351C34;
        sp34 = lbl_80351C30;
        M2C_FIELD(arg0, f32 *, 0) = sp2C;
        M2C_FIELD(arg0, f32 *, 4) = sp30;
        M2C_FIELD(arg0, f32 *, 8) = sp34;
        return;
    }
    temp_r6 = M2C_FIELD(temp_r4, s32 *, 4);
    /* draft: did not compile: temp_r7 = M2C_FIELD(temp_r4, s32 *, 8) + (arg2 * 0x24); */
    sp50 = sp14;
    temp_r30 = temp_r6 + (M2C_FIELD(temp_r7, s16 *, 0) * 0xC);
    temp_r29 = temp_r6 + (M2C_FIELD(temp_r7, s16 *, 0x18) * 0xC);
    PSVECSubtract(temp_r6 + (M2C_FIELD(temp_r7, s16 *, 0xC) * 0xC), temp_r30, &sp14, temp_r6, temp_r7);
    sp54 = sp18;
    sp58 = sp1C;
    PSVECSubtract(temp_r29, temp_r30, &sp8, sp18, sp14);
    sp44 = sp8;
    sp48 = spC;
    sp4C = sp10;
    PSVECCrossProduct(&sp50, &sp44, &sp38, spC, sp8);
    if (fn_80070CFC(&sp38) != 0) {
        sp20 = lbl_80351C30;
        sp24 = lbl_80351C34;
        M2C_FIELD(arg0, f32 *, 0) = sp20;
        M2C_FIELD(arg0, f32 *, 4) = sp24;
        sp28 = lbl_80351C30;
        M2C_FIELD(arg0, f32 *, 8) = sp28;
        return;
    }
    M2C_FIELD(arg0, f32 *, 0) = sp38;
    PSVECNormalize(&sp38, &sp38);
    M2C_FIELD(arg0, f32 *, 4) = sp3C;
    M2C_FIELD(arg0, f32 *, 8) = sp40;
}

u8 fn_800A632C(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0) { return 0; } /* draft: stub */

void fn_800A65A4(void *arg0) {
    u32 sp8;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r5_2;
    u32 *var_r9;
    u32 temp_r7;
    unsigned int temp_r8;
    u32 var_r6;
    void *temp_r4;
    void *temp_r5_3;

    sp8 = 0U;
    var_r9 = &sp8;
    var_r6 = M2C_FIELD(arg0, u32 *, 0);
loop_1:
    temp_r5 = M2C_FIELD(arg0, s32 *, 4);
    /* draft: did not compile: temp_r4 = var_r6 + temp_r5; */
    temp_r7 = M2C_FIELD(temp_r4, u32 *, 4);
    if (temp_r7 == 0U) {
        *var_r9 = M2C_FIELD(temp_r4, u32 *, 8);
    } else {
        /* draft: did not compile: temp_r8 = *(temp_r7 + (temp_r5 + 4)); */
        if (temp_r8 == 0U) {
            *var_r9 = var_r6;
            temp_r5_2 = M2C_FIELD(arg0, s32 *, 4);
            /* draft: did not compile: *(var_r6 + (temp_r5_2 + 4)) = *(temp_r7 + (temp_r5_2 + 8)); */
            var_r6 = temp_r7;
        } else {
            *var_r9 = temp_r7;
            temp_r4_2 = M2C_FIELD(arg0, s32 *, 4);
            /* draft: did not compile: temp_r5_3 = temp_r7 + temp_r4_2; */
            /* draft: did not compile: var_r9 = temp_r5_3 + 4; */
            /* draft: did not compile: *(var_r6 + (temp_r4_2 + 4)) = M2C_FIELD(temp_r5_3, s32 *, 8); */
            /* draft: did not compile: *(temp_r7 + (M2C_FIELD(arg0, s32 *, 4) + 8)) = var_r6; */
            var_r6 = temp_r8;
            goto loop_1;
        }
    }
    M2C_FIELD(arg0, u32 *, 0) = var_r6;
    /* draft: did not compile: *(var_r6 + (M2C_FIELD(arg0, s32 *, 4) + 8)) = sp8; */
}

void fn_800A6654(void *arg0, s32 *arg1) { } /* draft: stub */

void fn_800A671C(void *arg0, s32 *arg1) {
    u32 temp_r0;
    u32 temp_r31;
    u32 temp_r4;
    void *temp_r3;

    fn_800A632C((void *)(arg1 + M2C_FIELD(arg0, s32 *, 8)), (long)(*arg1), (long)(0), (long)(0));
    /* draft: did not compile: temp_r3 = M2C_FIELD(arg0, u32 *, 0) + M2C_FIELD(arg0, s32 *, 4); */
    temp_r0 = M2C_FIELD(temp_r3, u32 *, 8);
    temp_r31 = M2C_FIELD(temp_r3, u32 *, 4);
    if (temp_r0 != 0U) {
        M2C_FIELD(arg0, u32 *, 0) = temp_r0;
        fn_800A65A4(arg0);
        /* draft: did not compile: *(M2C_FIELD(arg0, u32 *, 0) + (M2C_FIELD(arg0, s32 *, 4) + 4)) = temp_r31; */
    } else {
        M2C_FIELD(arg0, u32 *, 0) = temp_r31;
    }
    *(arg1 + (M2C_FIELD(arg0, s32 *, 4) + 8)) = 0;
    *(arg1 + (M2C_FIELD(arg0, s32 *, 4) + 4)) = 0;
    *(arg1 + M2C_FIELD(arg0, s32 *, 4)) = 0;
    temp_r4 = M2C_FIELD(arg0, u32 *, 0);
    if (temp_r4 != 0U) {
        /* draft: did not compile: *(temp_r4 + M2C_FIELD(arg0, s32 *, 4)) = -1; */
    }
}
