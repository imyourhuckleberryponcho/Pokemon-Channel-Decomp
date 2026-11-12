/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_802AA6C8;
extern M2C_UNK lbl_803502F8;
M2C_UNK hsdFreeMemPiece(M2C_UNK);
extern M2C_UNK lbl_80350300;
extern M2C_UNK lbl_80350310;
void *hsdAllocMemPiece(M2C_UNK);
extern M2C_UNK lbl_802AA6E0;
extern M2C_UNK lbl_80350308;
extern M2C_UNK lbl_802AA6EC;
extern M2C_UNK lbl_802AA708;
extern M2C_UNK lbl_802AA8FC;
extern M2C_UNK lbl_802AA90C;
extern M2C_UNK lbl_802AA92C;
extern M2C_UNK lbl_802AA96C;
extern M2C_UNK lbl_802AA97C;

s32 HSD_HashSearch(void *arg0, s32 arg1, s32 *arg2);
s32 HSD_TExpGetType(s32 *arg0);
void HSD_TExpRef(void *arg0, u8 arg1);
void HSD_TExpUnref(void *arg0, u8 arg1, M2C_UNK arg_sp0);
void *HSD_TExpFreeList(void *arg0, s32 arg1, s32 arg2);
void *HSD_TExpTev(void **arg0);
void *HSD_TExpCnst(u32 arg0, s8 arg1, s8 arg2, void **arg3, M2C_UNK arg_sp0);
void HSD_TExpColorOp(void *arg0, s8 arg1, s8 arg2, s8 arg3, u8 arg4, M2C_UNK arg_sp0);
void HSD_TExpAlphaOp(void *arg0, s8 arg1, s8 arg2, s8 arg3, u8 arg4, M2C_UNK arg_sp0);
void HSD_TExpColorInSub();
void HSD_TExpColorIn(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, M2C_UNK arg_sp0, s32 arg_sp8);
void HSD_TExpAlphaInSub();
void HSD_TExpAlphaIn(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, M2C_UNK arg_sp0, s32 arg_sp8);
void HSD_TExpOrder(void *arg0, s32 arg1, s8 arg2);
s32 AssignColorReg(s32 arg0, s32 arg1, s32 arg2);
s32 AssignColorKonst(void *arg0, s32 arg1, void *arg2);
s32 AssignAlphaKonst(void *arg0, s32 arg1, void *arg2);

s32 HSD_HashSearch(void *arg0, s32 arg1, s32 *arg2) {
    u8 temp_r3;
    void *temp_r6;
    void *temp_r6_2;
    void *var_r31;

    temp_r6 = M2C_FIELD(arg0, void **, 0);
    temp_r3 = M2C_FIELD(temp_r6, u32 (**)(void *), 0x3C)(temp_r6);
    if (temp_r3 >= (u32) M2C_FIELD(arg0, u32 *, 8)) {
        __assert(&lbl_803502F8, 0x71, &lbl_802AA6C8);
    }
    /* draft: did not compile: var_r31 = *(M2C_FIELD(arg0, s32 *, 4) + (temp_r3 * 4)); */
    if (var_r31 == NULL) {
        var_r31 = NULL;
    } else {
loop_8:
        if (var_r31 == NULL) {
            var_r31 = NULL;
        } else {
            temp_r6_2 = M2C_FIELD(arg0, void **, 0);
            if (M2C_FIELD(temp_r6_2, s32 (**)(void *, s32, s32, void *), 0x40)(arg0, M2C_FIELD(var_r31, s32 *, 4), arg1, temp_r6_2) == 0) {

            } else {
                var_r31 = M2C_FIELD(var_r31, void **, 0);
                goto loop_8;
            }
        }
    }
    if (arg2 != NULL) {
        *arg2 = var_r31 != NULL;
    }
    if (var_r31 != NULL) {
        return M2C_FIELD(var_r31, s32 *, 8);
    }
    return 0;
}

s32 HSD_TExpGetType(s32 *arg0) {
    u32 temp_r0;

    if (arg0 == NULL) {
        return 0;
    }
    /* draft: did not compile: temp_r0 = arg0 + 0x10000; */
    if (temp_r0 == -1U) {
        return 2;
    }
    if (temp_r0 == -2U) {
        return 3;
    }
    return *arg0;
}

void HSD_TExpRef(void *arg0, u8 arg1) {
    s32 var_r0;
    u32 temp_r0;

    if (arg0 == NULL) {
        var_r0 = 0;
    } else {
        /* draft: did not compile: temp_r0 = arg0 + 0x10000; */
        if (temp_r0 == -1U) {
            var_r0 = 2;
        } else if (temp_r0 == -2U) {
            var_r0 = 3;
        } else {
            var_r0 = M2C_FIELD(arg0, s32 *, 0);
        }
    }
    switch (var_r0) {                               /* irregular */
    case 1:
        if (arg1 == 1) {
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + 1);
        return;
    case 4:
        M2C_FIELD(arg0, u8 *, 0x10) = (u8) (M2C_FIELD(arg0, u8 *, 0x10) + 1);
        return;
    }
}

void HSD_TExpUnref(void *arg0, u8 arg1, M2C_UNK arg_sp0) { } /* draft: stub */

void *HSD_TExpFreeList(void *arg0, s32 arg1, s32 arg2) { } /* draft: stub */

void *HSD_TExpTev(void **arg0) {
    void *temp_r3;

    if (arg0 == NULL) {
        __assert(&lbl_80350300, 0x127, &lbl_802AA6E0);
    }
    temp_r3 = hsdAllocMemPiece(0x6C);
    if (temp_r3 == NULL) {
        __assert(&lbl_80350300, 0x3F, &lbl_80350308);
    }
    memset(temp_r3, 0xFF, 0x6C);
    M2C_FIELD(temp_r3, s32 *, 0) = 1;
    M2C_FIELD(temp_r3, void **, 4) = (void *) *arg0;
    *arg0 = temp_r3;
    M2C_FIELD(temp_r3, s32 *, 8) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x14) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x64) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x28) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x48) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x30) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x50) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x38) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x58) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x40) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x60) = 0;
    return temp_r3;
}

void *HSD_TExpCnst(u32 arg0, s8 arg1, s8 arg2, void **arg3, M2C_UNK arg_sp0) {
    void *temp_r3;
    void *var_r31;

    if (arg3 == NULL) {
        __assert(&lbl_80350300, 0x16A, &lbl_802AA6E0);
    }
    var_r31 = *arg3;
loop_10:
    if (var_r31 == NULL) {
        if (arg1 == 7) {
            return NULL;
        }
        temp_r3 = hsdAllocMemPiece(0x14);
        if (temp_r3 == NULL) {
            __assert(&lbl_80350300, 0x47, &lbl_80350308);
        }
        M2C_FIELD(temp_r3, s32 *, 0) = 4;
        M2C_FIELD(temp_r3, void **, 4) = (void *) *arg3;
        *arg3 = temp_r3;
        M2C_FIELD(temp_r3, u8 *, 0x10) = 0;
        M2C_FIELD(temp_r3, u32 *, 8) = arg0;
        M2C_FIELD(temp_r3, u8 *, 0xC) = arg1;
        M2C_FIELD(temp_r3, u8 *, 0xD) = arg2;
        M2C_FIELD(temp_r3, u8 *, 0xE) = 0xFF;
        M2C_FIELD(temp_r3, u8 *, 0xF) = 0xFF;
        M2C_FIELD(temp_r3, u8 *, 0x11) = 0;
        return temp_r3;
    }
    if (((s32) (u16)M2C_FIELD(var_r31, s32 *, 0) == 4) && ((u32) M2C_FIELD(var_r31, u32 *, 8) == arg0) && ((s32) M2C_FIELD(var_r31, u8 *, 0xC) == arg1)) {
        if ((s32) M2C_FIELD(var_r31, u8 *, 0xD) != arg2) {
            __assert(&lbl_80350300, 0x171, &lbl_802AA6EC);
        }
        return var_r31;
    }
    var_r31 = M2C_FIELD(var_r31, void **, 4);
    goto loop_10;
}

void HSD_TExpColorOp(void *arg0, s8 arg1, s8 arg2, s8 arg3, u8 arg4, M2C_UNK arg_sp0) {
    s32 var_r0;
    u32 temp_r0;

    if (arg0 == NULL) {
        __assert(&lbl_80350300, 0x19A, &lbl_80350308);
    }
    if (arg0 == NULL) {
        var_r0 = 0;
    } else {
        /* draft: did not compile: temp_r0 = arg0 + 0x10000; */
        if (temp_r0 == -1U) {
            var_r0 = 2;
        } else if (temp_r0 == -2U) {
            var_r0 = 3;
        } else {
            var_r0 = M2C_FIELD(arg0, s32 *, 0);
        }
    }
    if (var_r0 != 1) {
        __assert(&lbl_80350300, 0x19B, &lbl_802AA708);
    }
    M2C_FIELD(arg0, s8 *, 0xD) = arg1;
    M2C_FIELD(arg0, s8 *, 0xE) = (s8) (arg4 != 0);
    if ((arg1 == 0) || (arg1 == 1)) {
        M2C_FIELD(arg0, s8 *, 0x10) = arg3;
        M2C_FIELD(arg0, s8 *, 0xF) = arg2;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0xF) = 0;
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
}

void HSD_TExpAlphaOp(void *arg0, s8 arg1, s8 arg2, s8 arg3, u8 arg4, M2C_UNK arg_sp0) {
    s32 var_r0;
    u32 temp_r0;

    if (arg0 == NULL) {
        __assert(&lbl_80350300, 0x1B4, &lbl_80350308);
    }
    if (arg0 == NULL) {
        var_r0 = 0;
    } else {
        /* draft: did not compile: temp_r0 = arg0 + 0x10000; */
        if (temp_r0 == -1U) {
            var_r0 = 2;
        } else if (temp_r0 == -2U) {
            var_r0 = 3;
        } else {
            var_r0 = M2C_FIELD(arg0, s32 *, 0);
        }
    }
    if (var_r0 != 1) {
        __assert(&lbl_80350300, 0x1B5, &lbl_802AA708);
    }
    M2C_FIELD(arg0, s8 *, 0x19) = arg1;
    M2C_FIELD(arg0, s8 *, 0x1A) = (s8) (arg4 != 0);
    if ((arg1 == 0) || (arg1 == 1)) {
        M2C_FIELD(arg0, s8 *, 0x1C) = arg3;
        M2C_FIELD(arg0, s8 *, 0x1B) = arg2;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x1B) = 0;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
}

void HSD_TExpColorInSub() { } /* draft: stub */

void HSD_TExpColorIn(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, M2C_UNK arg_sp0, s32 arg_sp8) {
    s32 var_r0;
    u32 temp_r0;

    if (arg0 == NULL) {
        __assert(&lbl_80350300, 0x2B5, &lbl_80350308);
    }
    if (arg0 == NULL) {
        var_r0 = 0;
    } else {
        /* draft: did not compile: temp_r0 = arg0 + 0x10000; */
        if (temp_r0 == -1U) {
            var_r0 = 2;
        } else if (temp_r0 == -2U) {
            var_r0 = 3;
        } else {
            var_r0 = *arg0;
        }
    }
    if (var_r0 != 1) {
        __assert(&lbl_80350300, 0x2B6, &lbl_802AA708);
    }
    HSD_TExpColorInSub(arg0, arg1, arg2, 0);
    HSD_TExpColorInSub(arg0, arg3, arg4, 1);
    HSD_TExpColorInSub(arg0, arg5, arg6, 2);
    HSD_TExpColorInSub(arg0, arg7, arg_sp8, 3);
}

void HSD_TExpAlphaInSub() { } /* draft: stub */

void HSD_TExpAlphaIn(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, M2C_UNK arg_sp0, s32 arg_sp8) {
    s32 var_r0;
    u32 temp_r0;

    if (arg0 == NULL) {
        __assert(&lbl_80350300, 0x337, &lbl_80350308);
    }
    if (arg0 == NULL) {
        var_r0 = 0;
    } else {
        /* draft: did not compile: temp_r0 = arg0 + 0x10000; */
        if (temp_r0 == -1U) {
            var_r0 = 2;
        } else if (temp_r0 == -2U) {
            var_r0 = 3;
        } else {
            var_r0 = *arg0;
        }
    }
    if (var_r0 != 1) {
        __assert(&lbl_80350300, 0x338, &lbl_802AA708);
    }
    HSD_TExpAlphaInSub(arg0, arg1, arg2, 0);
    HSD_TExpAlphaInSub(arg0, arg3, arg4, 1);
    HSD_TExpAlphaInSub(arg0, arg5, arg6, 2);
    HSD_TExpAlphaInSub(arg0, arg7, arg_sp8, 3);
}

void HSD_TExpOrder(void *arg0, s32 arg1, s8 arg2) {
    s32 var_r0;
    u32 temp_r0;

    if (arg0 == NULL) {
        __assert(&lbl_80350300, 0x347, &lbl_80350308);
    }
    if (arg0 == NULL) {
        var_r0 = 0;
    } else {
        /* draft: did not compile: temp_r0 = arg0 + 0x10000; */
        if (temp_r0 == -1U) {
            var_r0 = 2;
        } else if (temp_r0 == -2U) {
            var_r0 = 3;
        } else {
            var_r0 = M2C_FIELD(arg0, s32 *, 0);
        }
    }
    if (var_r0 != 1) {
        __assert(&lbl_80350300, 0x348, &lbl_802AA708);
    }
    M2C_FIELD(arg0, s32 *, 0x64) = arg1;
    if (arg2 == -1) {
        M2C_FIELD(arg0, s8 *, 0x68) = -1;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x68) = arg2;
}

s32 AssignColorReg(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r7;
    s32 var_ctr;
    s32 var_ctr_2;
    u8 temp_r0;
    void *temp_r6_3;
    s32 var_r8_2;
    void *temp_r4;
    void *temp_r6;
    void *temp_r6_2;
    u16 var_r8;
    void *var_r6;
    void *var_r6_2;

    temp_r7 = arg1 * 8;
    /* draft: did not compile: temp_r6 = arg0 + temp_r7; */
    temp_r4 = M2C_FIELD(temp_r6, void **, 0x28);
    temp_r0 = M2C_FIELD(temp_r4, u8 *, 0xE);
    if (temp_r0 != 0xFF) {
        if (temp_r0 < 4U) {
            return -1;
        }
        M2C_FIELD(temp_r6, s8 *, 0x24) = 5;
        if ((u8) M2C_FIELD(temp_r4, u8 *, 0xC) == 6) {
            M2C_FIELD(temp_r6, s8 *, 0x26) = (s8) M2C_FIELD((&lbl_802AA8FC + (M2C_FIELD(temp_r4, u8 *, 0xE) * 4)), s32 *, -0x10);
        } else {
            M2C_FIELD(temp_r6, s8 *, 0x26) = (s8) M2C_FIELD((&lbl_802AA90C + (M2C_FIELD(temp_r4, u8 *, 0xE) * 4)), s32 *, -0x10);
        }
        return 0;
    }
    if ((u8) M2C_FIELD(temp_r4, u8 *, 0xC) == 6) {
        /* draft: did not compile: var_r6 = arg2 + 8; */
        var_ctr = 4;
        var_r8 = 4;
loop_9:
        if ((u8) M2C_FIELD(var_r6, u8 *, 0xD) == 0) {
            /* draft: did not compile: temp_r6_2 = arg0 + temp_r7; */
            M2C_FIELD((arg2 + (var_r8 * 2)), s8 *, 0xD) = 1;
            M2C_FIELD(temp_r4, u8 *, 0xE) = var_r8;
            M2C_FIELD(temp_r6_2, s8 *, 0x26) = (s8) M2C_FIELD((&lbl_802AA8FC + (var_r8 * 4)), s32 *, -0x10);
            M2C_FIELD(temp_r4, s8 *, 0xF) = 3;
            M2C_FIELD(temp_r6_2, s8 *, 0x24) = 5;
            return 0;
        }
        /* draft: did not compile: var_r6 += 2; */
        var_r8 += 1;
        var_ctr -= 1;
        if (var_ctr == 0) {
            /* Duplicate return node #17. Try simplifying control flow for better match */
            return -1;
        }
        goto loop_9;
    }
    /* draft: did not compile: var_r6_2 = arg2 + 8; */
    var_r8_2 = var_ctr_2 = 4;
loop_14:
    if ((u8) M2C_FIELD(var_r6_2, u8 *, 0xC) == 0) {
        /* draft: did not compile: temp_r6_3 = arg0 + temp_r7; */
        M2C_FIELD((arg2 + (var_r8_2 * 2)), s8 *, 0xC) = 3;
        M2C_FIELD(temp_r6_3, s8 *, 0x26) = (s8) M2C_FIELD((&lbl_802AA90C + (var_r8_2 * 4)), s32 *, -0x10);
        M2C_FIELD(temp_r4, u8 *, 0xE) = var_r8_2;
        M2C_FIELD(temp_r6_3, s8 *, 0x24) = 5;
        M2C_FIELD(temp_r4, s8 *, 0xF) = 0;
        return 0;
    }
    /* draft: did not compile: var_r6_2 += 2; */
    var_r8_2 += 1;
    var_ctr_2 -= 1;
    if (var_ctr_2 == 0) {
        return -1;
    }
    goto loop_14;
}

s32 AssignColorKonst(void *arg0, s32 arg1, void *arg2) { return 0; } /* draft: stub */

s32 AssignAlphaKonst(void *arg0, s32 arg1, void *arg2) { return 0; } /* draft: stub */
