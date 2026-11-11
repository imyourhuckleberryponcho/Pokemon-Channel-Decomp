/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32);
M2C_UNK fn_800202E4(M2C_UNK *);
M2C_UNK DVDClose(M2C_UNK *);
M2C_UNK DVDCancel(M2C_UNK *);
extern M2C_UNK lbl_802C0208;
extern M2C_UNK *lbl_803504BC;
extern M2C_UNK *lbl_803504C0;
extern u8 lbl_803504C4;
M2C_UNK fn_80005888(void *);
M2C_UNK FreePictureSD();
void *get_up_vector_for_viewing_mtx(s32, s32);
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_80221D64;
extern u8 lbl_8034E789;
extern u8 lbl_8034E78A;
M2C_UNK fn_800146F0();
extern u8 lbl_8034E787;
extern u8 lbl_8034E788;
extern u8 lbl_8034E785;
extern u8 lbl_8034E786;
s32 memcmp(s32, s32, u32);
extern M2C_UNK lbl_80221D80;
extern M2C_UNK lbl_80221D9C;
M2C_UNK fn_800A8D48(M2C_UNK *);
M2C_UNK fn_800A8D50();
extern M2C_UNK fn_80038264;
extern s32 lbl_803504C8;
M2C_UNK fn_80022768(s32, s32, void *);
void *fn_800AAE38(s32);
u32 fn_800AAE40(s32);
M2C_UNK fn_800AAE48(u32, s32);
s32 fn_800AAE6C();
s32 fn_800AAF78(u32);
u64 OSGetTime();
extern s32 lbl_803504D0;
extern u8 lbl_803504D4;
extern s32 lbl_803504D8;
extern u32 lbl_803504DC;
extern u8 lbl_803504E0;
M2C_UNK DCStoreRange(u16 *, s32);

void fn_80020580(u32 arg0);
void *fn_80020694(void *arg0, s16 arg1);
void fn_80020700(void **arg0, void *arg1, s32 *arg2);
void fn_80020764(void **arg0, void *arg1, void **arg2, M2C_UNK arg_sp0);
void fn_8002082C(void **arg0, void *arg1, void **arg2, M2C_UNK arg_sp0);
void **fn_800208F4(void **arg0, void **arg1);
void fn_80020A10(M2C_UNK **arg0);
void fn_80020A64(void *arg0, void *arg1, s32 *arg2);
void fn_80020B20(void *arg0, u8 *arg1);
void fn_80020B40(void *arg0, u8 *arg1);
void fn_80020B60(void *arg0, void **arg1);
void fn_80020C48(void *arg0, void *arg1, void **arg2, M2C_UNK arg_sp0);
void fn_80020D4C(void *arg0, u8 *arg1);
void fn_80020D6C(void *arg0, void **arg1);
void fn_80020E54(void *arg0, void *arg1, void **arg2, M2C_UNK arg_sp0);
void fn_80020F58(void *arg0, u8 *arg1);
s32 fn_80020F78(u32 **arg0, u32 arg1, u32 arg2, s32 arg3, u32 arg4);
void fn_80021078(void *arg0, void *arg1);
void *fn_800214F8(void *arg0, s32 arg1, u8 arg2, u8 arg3, void *arg4, M2C_UNK arg_sp0);
void *fn_80021620(void *arg0, s32 arg1, u8 arg2, u8 arg3, void *arg4, M2C_UNK arg_sp0);
void *fn_8002174C(void *arg0, s32 arg1, u8 arg2, u8 arg3, void *arg4, M2C_UNK arg_sp0);
void fn_80021878(void *arg0, void *arg1);
void fn_80021A68(void *arg0, void **arg1);
void fn_80021AE8(void *arg0, void **arg1);
void fn_80021B68(void);
void fn_80021B9C(s32 arg2);
void fn_80021BA4(s32 arg0, void *arg1);
void fn_80021BD0(void *arg0);
void fn_80021CE0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
u32 fn_80021DA8(void *arg0, u16 *arg1, u32 arg2, u16 *arg3, u32 arg4, M2C_UNK arg_sp0);
void fn_80022004(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
u32 fn_80022044(void *arg0, u16 *arg1, u32 arg2, u16 *arg3, u32 arg4, M2C_UNK arg_sp0);

void fn_80020580(u32 arg0) {
    M2C_UNK *temp_r31;
    M2C_UNK *temp_r3;
    M2C_UNK *var_r3;
    M2C_UNK *var_r4;
    u8 temp_r5;

    temp_r5 = OSDisableInterrupts();
    if ((u8) lbl_803504C4 != 0) {
        temp_r31 = M2C_FIELD(&lbl_802C0208, M2C_UNK **, 0x2C);
        if ((u32) M2C_FIELD(temp_r31, u32 *, 4) == arg0) {
            M2C_FIELD(&lbl_802C0208, M2C_UNK **, 0x2C) = NULL;
            OSRestoreInterrupts((long)(0));
            DVDCancel(&lbl_802C0208);
            DVDClose(&lbl_802C0208);
            M2C_FIELD(temp_r31, s32 *, 4) = 0;
            M2C_FIELD(temp_r31, M2C_UNK **, 0) = lbl_803504C0;
            lbl_803504C0 = temp_r31;
            if ((M2C_UNK *) lbl_803504BC != NULL) {
                temp_r3 = lbl_803504BC;
                /* draft: did not compile: lbl_803504BC = *temp_r3; */
                fn_800202E4(temp_r3);
            }
        } else {
            var_r3 = lbl_803504BC;
            /* draft: did not compile: var_r4 = &lbl_803504BC; */
loop_8:
            if (var_r3 != NULL) {
                if ((u32) M2C_FIELD(var_r3, u32 *, 4) != arg0) {
                    /* draft: did not compile: *var_r4 = M2C_FIELD(var_r3, M2C_UNK **, 0); */
                } else {
                    var_r4 = var_r3;
                    var_r3 = M2C_FIELD(var_r3, M2C_UNK **, 0);
                    goto loop_8;
                }
            }
            if (var_r3 != NULL) {
                M2C_FIELD(var_r3, u32 *, 4) = 0U;
                M2C_FIELD(var_r3, M2C_UNK **, 0) = lbl_803504C0;
                lbl_803504C0 = var_r3;
            }
            OSRestoreInterrupts(temp_r5);
        }
    } else {
        OSRestoreInterrupts((long)(0));
    }
}

void *fn_80020694(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0) == 0U) {
            fn_80020580((unsigned long)(0));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 4) != 0U) {
            FreePictureSD();
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_80020700(void **arg0, void *arg1, s32 *arg2) {
    void *var_r7;
    void *var_r8;

    var_r7 = M2C_FIELD(arg1, void **, 4);
    /* draft: did not compile: var_r8 = arg1 + 4; */
loop_4:
    if (var_r7 != NULL) {
        if ((s32) M2C_FIELD(var_r7, s32 *, 0xC) >= (s32) *arg2) {
            var_r8 = var_r7;
            var_r7 = M2C_FIELD(var_r7, void **, 0);
        } else {
            var_r7 = M2C_FIELD(var_r7, void **, 4);
        }
        goto loop_4;
    }
    if (0 /* draft: did not compile */) {
        /* draft: did not compile: *arg0 = arg1 + 4; */
        return;
    }
    *arg0 = var_r8;
}

void fn_80020764(void **arg0, void *arg1, void **arg2, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8002082C(void **arg0, void *arg1, void **arg2, M2C_UNK arg_sp0) { } /* draft: stub */

void **fn_800208F4(void **arg0, void **arg1) { } /* draft: stub */

void fn_80020A10(M2C_UNK **arg0) {
    M2C_UNK *temp_r0;
    M2C_UNK *temp_r5;
    M2C_UNK *var_r4;
    s8 temp_r4;

    var_r4 = M2C_FIELD(*arg0, M2C_UNK **, 4);
    if (var_r4 != NULL) {
loop_3:
        /* draft: did not compile: temp_r0 = *var_r4; */
        if (temp_r0 != NULL) {
            var_r4 = temp_r0;
            goto loop_3;
        }
        *arg0 = var_r4;
        return;
    }
loop_7:
    temp_r5 = *arg0;
    temp_r4 = M2C_FIELD(temp_r5, s32 *, 8) & 0xFFFFFFFE;
    if (0 /* draft: did not compile */) {
        *arg0 = (M2C_UNK *) temp_r4;
        goto loop_7;
    }
    *arg0 = (M2C_UNK *) temp_r4;
}

void fn_80020A64(void *arg0, void *arg1, s32 *arg2) {
    M2C_UNK var_r5;
    M2C_UNK var_r6;
    void *var_r10;
    void *var_r8;
    void *var_r9;

    /* draft: did not compile: var_r9 = arg1 + 4; */
    var_r8 = NULL;
    var_r5 = 1;
    var_r6 = 1;
    var_r10 = M2C_FIELD(arg1, void **, 4);
loop_4:
    if (var_r10 != NULL) {
        var_r9 = var_r10;
        if ((s32) *arg2 < (s32) M2C_FIELD(var_r10, s32 *, 0xC)) {
            var_r10 = M2C_FIELD(var_r10, void **, 0);
            var_r5 = 1;
        } else {
            var_r8 = var_r10;
            var_r10 = M2C_FIELD(var_r10, void **, 4);
            var_r5 = 0;
            var_r6 = 0;
        }
        goto loop_4;
    }
    if ((var_r8 == NULL) || ((s32) M2C_FIELD(var_r8, s32 *, 0xC) < (s32) *arg2)) {
        /* draft: did not compile: M2C_FIELD(arg0, void **, 0) = fn_800214F8(arg1, var_r9, var_r5, var_r6); */
        M2C_FIELD(arg0, u8 *, 4) = (u8) lbl_8034E789;
        return;
    }
    M2C_FIELD(arg0, void **, 0) = var_r8;
    M2C_FIELD(arg0, u8 *, 4) = (u8) lbl_8034E78A;
}

void fn_80020B20(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u8 *, 8) = (u8) *arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = (s32) (arg0 + 4); */
}

void fn_80020B40(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u8 *, 8) = (u8) *arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = (s32) (arg0 + 4); */
}

void fn_80020B60(void *arg0, void **arg1) {
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;

    temp_r3 = *arg1;
    if (temp_r3 == (void *) M2C_FIELD(arg0, void **, 0xC)) {
        /* draft: did not compile: fn_80020A10(arg1); */
        M2C_FIELD(arg0, void **, 0xC) = (void *) *arg1;
    }
    /* draft: did not compile: fn_80021078(temp_r3, M2C_FIELD(arg0, s32 *, 4)); */
    if (0 /* draft: did not compile */) {
        if (0 /* draft: did not compile */) {
            temp_r4 = M2C_FIELD(temp_r3, void **, 0x10);
            if (temp_r4 != NULL) {
                M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
                if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                    temp_r3_2 = M2C_FIELD(temp_r3, void **, 0x10);
                    if (temp_r3_2 != NULL) {
                        M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            M2C_FIELD(temp_r3, void **, 0x10) = NULL;
        }
        /* draft: did not compile: fn_800146F0(temp_r3 + 0xC, -1); */
    }
    fn_80005888(temp_r3);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
}

void fn_80020C48(void *arg0, void *arg1, void **arg2, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80020D4C(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u8 *, 8) = (u8) *arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = (s32) (arg0 + 4); */
}

void fn_80020D6C(void *arg0, void **arg1) {
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;

    temp_r3 = *arg1;
    if (temp_r3 == (void *) M2C_FIELD(arg0, void **, 0xC)) {
        /* draft: did not compile: fn_80020A10(arg1); */
        M2C_FIELD(arg0, void **, 0xC) = (void *) *arg1;
    }
    /* draft: did not compile: fn_80021078(temp_r3, M2C_FIELD(arg0, s32 *, 4)); */
    if (0 /* draft: did not compile */) {
        if (0 /* draft: did not compile */) {
            temp_r4 = M2C_FIELD(temp_r3, void **, 0x10);
            if (temp_r4 != NULL) {
                M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
                if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                    temp_r3_2 = M2C_FIELD(temp_r3, void **, 0x10);
                    if (temp_r3_2 != NULL) {
                        M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            M2C_FIELD(temp_r3, void **, 0x10) = NULL;
        }
        /* draft: did not compile: fn_800146F0(temp_r3 + 0xC, -1); */
    }
    fn_80005888(temp_r3);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
}

void fn_80020E54(void *arg0, void *arg1, void **arg2, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80020F58(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u8 *, 8) = (u8) *arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = (s32) (arg0 + 4); */
}

s32 fn_80020F78(u32 **arg0, u32 arg1, u32 arg2, s32 arg3, u32 arg4) {
    u32 sp14;
    u32 sp10;
    u32 spC;
    u32 sp8;
    s32 var_r3;
    u32 *var_r3_2;
    u32 *var_r5;
    u32 temp_r3;
    u32 temp_r4;

    sp8 = arg2;
    spC = arg4;
    if (arg1 > (u32) **arg0) {
        fn_8014F858(&__files + 0xA0, &lbl_80221D80, &__files);
        fn_8014BB10();
    }
    var_r3_2 = &sp10;
    temp_r4 = M2C_FIELD(*arg0, u32 *, 0) - arg1;
    sp10 = temp_r4;
    if (sp8 < temp_r4) {
        var_r3_2 = &sp8;
    }
    temp_r3 = *var_r3_2;
    var_r5 = &sp14;
    sp14 = temp_r3;
    if (spC < temp_r3) {
        var_r5 = &spC;
    }
    var_r3 = memcmp(M2C_FIELD(*arg0, s32 *, 0xC) + arg1, arg3, *var_r5);
    if (var_r3 == 0) {
        if (sp14 < spC) {
            return -1;
        }
        var_r3 = sp14 != spC;
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return var_r3;
    }
    return var_r3;
}

void fn_80021078(void *arg0, void *arg1) {
    void *spC;
    void *sp8;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 temp_r3_4;
    s32 temp_r4;
    s32 temp_r4_2;
    s8 temp_r4_4;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r31;
    u8 var_r0;
    u8 var_r30;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_5;
    void *temp_r4_3;
    void *temp_r5_3;
    void *temp_r5_4;
    void *temp_r5_5;
    void *temp_r5_6;
    void *temp_r5_7;
    void *temp_r5_8;
    void *temp_r6;
    void *temp_r6_2;
    void *var_r3;

    sp8 = arg1;
    spC = arg0;
    if (((void *) M2C_FIELD(arg0, void **, 0) != NULL) && ((void *) M2C_FIELD(arg0, void **, 4) != NULL)) {
        /* draft: did not compile: fn_80020A10(&spC); */
    }
    var_r3 = M2C_FIELD(spC, void **, 0);
    if (var_r3 != NULL) {

    } else {
        var_r3 = M2C_FIELD(spC, void **, 4);
    }
    temp_r4 = M2C_FIELD(spC, s32 *, 8) & 0xFFFFFFFE;
    var_r31 = temp_r4;
    if (var_r3 != NULL) {
        M2C_FIELD(var_r3, s32 *, 8) = (s32) (temp_r4 | (M2C_FIELD(var_r3, s32 *, 8) & 1));
    }
    temp_r5 = M2C_FIELD(spC, s32 *, 8) & 0xFFFFFFFE;
    if (spC == (void *) M2C_FIELD(temp_r5, void **, 0)) {
        M2C_FIELD(temp_r5, void **, 0) = var_r3;
        var_r30 = 1;
    } else {
        M2C_FIELD(temp_r5, void **, 4) = var_r3;
        var_r30 = 0;
    }
    var_r0 = (M2C_FIELD(spC, s32 *, 8) & 1) == 0;
    if (spC != arg0) {
        M2C_FIELD(spC, s32 *, 8) = (s32) ((M2C_FIELD(spC, s32 *, 8) & ~0xFFFFFFFE) | (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFFFE));
        temp_r5_2 = M2C_FIELD(spC, s32 *, 8) & 0xFFFFFFFE;
        if (arg0 == (void *) M2C_FIELD(temp_r5_2, void **, 0)) {
            M2C_FIELD(temp_r5_2, void **, 0) = spC;
        } else {
            M2C_FIELD(temp_r5_2, void **, 4) = spC;
        }
        M2C_FIELD(spC, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0);
        temp_r5_3 = M2C_FIELD(spC, void **, 0);
        if (temp_r5_3 != NULL) {
            M2C_FIELD(temp_r5_3, s32 *, 8) = (s32) ((s32) spC | (M2C_FIELD(temp_r5_3, s32 *, 8) & 1));
        } else {
            var_r31 = (s32) spC;
        }
        M2C_FIELD(spC, void **, 4) = (void *) M2C_FIELD(arg0, void **, 4);
        temp_r5_4 = M2C_FIELD(spC, void **, 4);
        if (temp_r5_4 != NULL) {
            M2C_FIELD(temp_r5_4, s32 *, 8) = (s32) ((s32) spC | (M2C_FIELD(temp_r5_4, s32 *, 8) & 1));
        } else {
            var_r31 = (s32) spC;
        }
        if (M2C_FIELD(arg0, s32 *, 8) & 1) {
            M2C_FIELD(spC, s32 *, 8) = (s32) (M2C_FIELD(spC, s32 *, 8) | 1);
        } else {
            M2C_FIELD(spC, s32 *, 8) = (s32) (M2C_FIELD(spC, s32 *, 8) & 0xFFFFFFFE);
        }
        if (sp8 == arg0) {
            sp8 = spC;
        }
    } else if ((var_r3 == NULL) && (arg0 == sp8)) {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
loop_60:
        if ((var_r3 != sp8) && ((var_r3 == NULL) || !(M2C_FIELD(var_r3, s32 *, 8) & 1))) {
            if (var_r30 != 0) {
                temp_r5_5 = M2C_FIELD(var_r31, void **, 4);
                temp_r3 = M2C_FIELD(temp_r5_5, s32 *, 8);
                if ((u32) (temp_r3 & 1) == 1) {
                    M2C_FIELD(temp_r5_5, s32 *, 8) = (s32) (temp_r3 & 0xFFFFFFFE);
                    M2C_FIELD(var_r31, s32 *, 8) = (s32) (M2C_FIELD(var_r31, s32 *, 8) | 1);
                    fn_80021A68((void *) var_r31, &sp8);
                }
                temp_r6 = M2C_FIELD(M2C_FIELD(var_r31, void **, 4), void **, 0);
                if (((temp_r6 == NULL) || !(M2C_FIELD(temp_r6, s32 *, 8) & 1)) && ((temp_r3_2 = M2C_FIELD(M2C_FIELD(var_r31, void **, 4), void **, 4), ((temp_r3_2 == NULL) != 0)) || !(M2C_FIELD(temp_r3_2, s32 *, 8) & 1))) {
                    var_r3 = (void *) var_r31;
                    M2C_FIELD(M2C_FIELD(var_r31, void **, 4), s32 *, 8) = (s32) (M2C_FIELD(M2C_FIELD(var_r31, void **, 4), s32 *, 8) | 1);
                    temp_r4_2 = M2C_FIELD(var_r31, s32 *, 8) & 0xFFFFFFFE;
                    /* draft: did not compile: temp_r0 = *temp_r4_2; */
                    var_r31 = temp_r4_2;
                    /* draft: did not compile: var_r30 = var_r3 == temp_r0; */
                } else {
                    temp_r3_3 = M2C_FIELD(M2C_FIELD(var_r31, void **, 4), void **, 4);
                    if ((temp_r3_3 == NULL) || !(M2C_FIELD(temp_r3_3, s32 *, 8) & 1)) {
                        M2C_FIELD(temp_r6, s32 *, 8) = (s32) (M2C_FIELD(temp_r6, s32 *, 8) & 0xFFFFFFFE);
                        M2C_FIELD(M2C_FIELD(var_r31, void **, 4), s32 *, 8) = (s32) (M2C_FIELD(M2C_FIELD(var_r31, void **, 4), s32 *, 8) | 1);
                        fn_80021AE8(M2C_FIELD(var_r31, void **, 4), &sp8);
                    }
                    if (M2C_FIELD(var_r31, s32 *, 8) & 1) {
                        M2C_FIELD(M2C_FIELD(var_r31, void **, 4), s32 *, 8) = (s32) (M2C_FIELD(M2C_FIELD(var_r31, void **, 4), s32 *, 8) | 1);
                    } else {
                        M2C_FIELD(M2C_FIELD(var_r31, void **, 4), s32 *, 8) = (s32) (M2C_FIELD(M2C_FIELD(var_r31, void **, 4), s32 *, 8) & 0xFFFFFFFE);
                    }
                    M2C_FIELD(var_r31, s32 *, 8) = (s32) (M2C_FIELD(var_r31, s32 *, 8) & 0xFFFFFFFE);
                    temp_r5_6 = M2C_FIELD(M2C_FIELD(var_r31, void **, 4), void **, 4);
                    M2C_FIELD(temp_r5_6, s32 *, 8) = (s32) (M2C_FIELD(temp_r5_6, s32 *, 8) & 0xFFFFFFFE);
                    fn_80021A68((void *) var_r31, (void **)(&sp8));
                    var_r3 = sp8;
                }
            } else {
                temp_r5_7 = M2C_FIELD(var_r31, void **, 0);
                temp_r3_4 = M2C_FIELD(temp_r5_7, s32 *, 8);
                if ((u32) (temp_r3_4 & 1) == 1) {
                    M2C_FIELD(temp_r5_7, s32 *, 8) = (s32) (temp_r3_4 & 0xFFFFFFFE);
                    M2C_FIELD(var_r31, s32 *, 8) = (s32) (M2C_FIELD(var_r31, s32 *, 8) | 1);
                    fn_80021AE8((void *) var_r31, &sp8);
                }
                temp_r3_5 = M2C_FIELD(M2C_FIELD(var_r31, void **, 0), void **, 0);
                if (((temp_r3_5 == NULL) || !(M2C_FIELD(temp_r3_5, s32 *, 8) & 1)) && ((temp_r4_3 = M2C_FIELD(M2C_FIELD(var_r31, void **, 0), void **, 4), ((temp_r4_3 == NULL) != 0)) || !(M2C_FIELD(temp_r4_3, s32 *, 8) & 1))) {
                    var_r3 = (void *) var_r31;
                    M2C_FIELD(M2C_FIELD(var_r31, void **, 0), s32 *, 8) = (s32) (M2C_FIELD(M2C_FIELD(var_r31, void **, 0), s32 *, 8) | 1);
                    temp_r4_4 = M2C_FIELD(var_r31, s32 *, 8) & 0xFFFFFFFE;
                    /* draft: did not compile: temp_r0_2 = *temp_r4_4; */
                    var_r31 = temp_r4_4;
                    /* draft: did not compile: var_r30 = var_r3 == temp_r0_2; */
                } else {
                    if ((temp_r3_5 == NULL) || !(M2C_FIELD(temp_r3_5, s32 *, 8) & 1)) {
                        temp_r6_2 = M2C_FIELD(M2C_FIELD(var_r31, void **, 0), void **, 4);
                        M2C_FIELD(temp_r6_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r6_2, s32 *, 8) & 0xFFFFFFFE);
                        M2C_FIELD(M2C_FIELD(var_r31, void **, 0), s32 *, 8) = (s32) (M2C_FIELD(M2C_FIELD(var_r31, void **, 0), s32 *, 8) | 1);
                        fn_80021A68((void *)(M2C_FIELD(var_r31, void **, 0)), (void **)(&sp8));
                    }
                    if (M2C_FIELD(var_r31, s32 *, 8) & 1) {
                        M2C_FIELD(M2C_FIELD(var_r31, void **, 0), s32 *, 8) = (s32) (M2C_FIELD(M2C_FIELD(var_r31, void **, 0), s32 *, 8) | 1);
                    } else {
                        M2C_FIELD(M2C_FIELD(var_r31, void **, 0), s32 *, 8) = (s32) (M2C_FIELD(M2C_FIELD(var_r31, void **, 0), s32 *, 8) & 0xFFFFFFFE);
                    }
                    M2C_FIELD(var_r31, s32 *, 8) = (s32) (M2C_FIELD(var_r31, s32 *, 8) & 0xFFFFFFFE);
                    temp_r5_8 = M2C_FIELD(M2C_FIELD(var_r31, void **, 0), void **, 0);
                    fn_80021AE8((void *) var_r31, (void **)(&sp8));
                    M2C_FIELD(temp_r5_8, s32 *, 8) = (s32) (M2C_FIELD(temp_r5_8, s32 *, 8) & 0xFFFFFFFE);
                    var_r3 = sp8;
                }
            }
            goto loop_60;
        }
        if (var_r3 != NULL) {
            M2C_FIELD(var_r3, s32 *, 8) = (s32) (M2C_FIELD(var_r3, s32 *, 8) & 0xFFFFFFFE);
        }
    }
}

void *fn_800214F8(void *arg0, s32 arg1, u8 arg2, u8 arg3, void *arg4, M2C_UNK arg_sp0) {
    s32 *temp_r4;
    void *temp_r3;
    void *temp_r3_2;

    if ((u32) M2C_FIELD(arg0, u32 *, 0) > -2U) {
        fn_8014F858(&__files + 0xA0, &lbl_80221D9C, &__files);
        fn_8014BB10();
    }
    temp_r3 = get_up_vector_for_viewing_mtx((long)(0x14), (long)(0));
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_80221D64, &__files);
        fn_8014BB10();
    }
    /* draft: did not compile: temp_r3_2 = temp_r3 + 0xC; */
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) M2C_FIELD(arg4, s32 *, 0);
        M2C_FIELD(temp_r3_2, s32 **, 4) = (s32 *) M2C_FIELD(arg4, s32 **, 4);
        temp_r4 = M2C_FIELD(temp_r3_2, s32 **, 4);
        if (temp_r4 != NULL) {
            *temp_r4 += 1;
        }
    }
    M2C_FIELD(temp_r3, s32 *, 4) = 0;
    M2C_FIELD(temp_r3, s32 *, 0) = 0;
    M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg1 | (M2C_FIELD(temp_r3, s32 *, 8) & 1));
    if (arg2 != 0) {
        M2C_FIELD(arg1, void **, 0) = temp_r3;
    } else {
        M2C_FIELD(arg1, void **, 4) = temp_r3;
    }
    M2C_FIELD(arg0, u32 *, 0) = (u32) (M2C_FIELD(arg0, u32 *, 0) + 1);
    /* draft: did not compile: fn_80021878(temp_r3, M2C_FIELD(arg0, s32 *, 4)); */
    if (arg3 != 0) {
        M2C_FIELD(arg0, void **, 0xC) = temp_r3;
    }
    return temp_r3;
}

#pragma push
#pragma dont_inline on
void *fn_80021620(void *arg0, s32 arg1, u8 arg2, u8 arg3, void *arg4, M2C_UNK arg_sp0) {
    s32 *temp_r4;
    void *temp_r26;
    void *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0) > -2U) {
        fn_8014F858(&__files + 0xA0, &lbl_80221D9C, &__files);
        fn_8014BB10();
    }
    temp_r3 = get_up_vector_for_viewing_mtx((long)(0x14), (long)(0));
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_80221D64, &__files);
        fn_8014BB10();
    }
    /* draft: did not compile: temp_r26 = temp_r3 + 0xC; */
    if (temp_r26 != NULL) {
        fn_800208F4(temp_r26, arg4);
        M2C_FIELD(temp_r26, s32 **, 4) = (s32 *) M2C_FIELD(arg4, s32 **, 4);
        temp_r4 = M2C_FIELD(temp_r26, s32 **, 4);
        if (temp_r4 != NULL) {
            *temp_r4 += 1;
        }
    }
    M2C_FIELD(temp_r3, s32 *, 4) = 0;
    M2C_FIELD(temp_r3, s32 *, 0) = 0;
    M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg1 | (M2C_FIELD(temp_r3, s32 *, 8) & 1));
    if (arg2 != 0) {
        M2C_FIELD(arg1, void **, 0) = temp_r3;
    } else {
        M2C_FIELD(arg1, void **, 4) = temp_r3;
    }
    M2C_FIELD(arg0, u32 *, 0) = (u32) (M2C_FIELD(arg0, u32 *, 0) + 1);
    /* draft: did not compile: fn_80021878(temp_r3, M2C_FIELD(arg0, s32 *, 4)); */
    if (arg3 != 0) {
        M2C_FIELD(arg0, void **, 0xC) = temp_r3;
    }
    return temp_r3;
}
#pragma pop

void *fn_8002174C(void *arg0, s32 arg1, u8 arg2, u8 arg3, void *arg4, M2C_UNK arg_sp0) {
    s32 *temp_r4;
    void *temp_r26;
    void *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0) > -2U) {
        fn_8014F858(&__files + 0xA0, &lbl_80221D9C, &__files);
        fn_8014BB10();
    }
    temp_r3 = get_up_vector_for_viewing_mtx((long)(0x14), (long)(0));
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_80221D64, &__files);
        fn_8014BB10();
    }
    /* draft: did not compile: temp_r26 = temp_r3 + 0xC; */
    if (temp_r26 != NULL) {
        fn_800208F4(temp_r26, arg4);
        M2C_FIELD(temp_r26, s32 **, 4) = (s32 *) M2C_FIELD(arg4, s32 **, 4);
        temp_r4 = M2C_FIELD(temp_r26, s32 **, 4);
        if (temp_r4 != NULL) {
            *temp_r4 += 1;
        }
    }
    M2C_FIELD(temp_r3, s32 *, 4) = 0;
    M2C_FIELD(temp_r3, s32 *, 0) = 0;
    M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg1 | (M2C_FIELD(temp_r3, s32 *, 8) & 1));
    if (arg2 != 0) {
        M2C_FIELD(arg1, void **, 0) = temp_r3;
    } else {
        M2C_FIELD(arg1, void **, 4) = temp_r3;
    }
    M2C_FIELD(arg0, u32 *, 0) = (u32) (M2C_FIELD(arg0, u32 *, 0) + 1);
    /* draft: did not compile: fn_80021878(temp_r3, M2C_FIELD(arg0, s32 *, 4)); */
    if (arg3 != 0) {
        M2C_FIELD(arg0, void **, 0xC) = temp_r3;
    }
    return temp_r3;
}

void fn_80021878(void *arg0, void *arg1) { } /* draft: stub */

void fn_80021A68(void *arg0, void **arg1) {
    s32 temp_r4_2;
    void *temp_r4;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 4);
    if ((void *) *arg1 == arg0) {
        *arg1 = temp_r5;
    }
    M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(temp_r5, void **, 0);
    temp_r4 = M2C_FIELD(temp_r5, void **, 0);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, s32 *, 8) = (s32) ((s32) arg0 | (M2C_FIELD(temp_r4, s32 *, 8) & 1));
    }
    M2C_FIELD(temp_r5, s32 *, 8) = (s32) ((M2C_FIELD(temp_r5, s32 *, 8) & ~0xFFFFFFFE) | (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFFFE));
    temp_r4_2 = M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFFFE;
    if (arg0 == (void *) M2C_FIELD(temp_r4_2, void **, 0)) {
        M2C_FIELD(temp_r4_2, void **, 0) = temp_r5;
    } else {
        M2C_FIELD(temp_r4_2, void **, 4) = temp_r5;
    }
    M2C_FIELD(temp_r5, void **, 0) = arg0;
    M2C_FIELD(arg0, s32 *, 8) = (s32) ((s32) temp_r5 | (M2C_FIELD(arg0, s32 *, 8) & 1));
}

void fn_80021AE8(void *arg0, void **arg1) {
    s32 temp_r4_2;
    void *temp_r4;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0);
    if ((void *) *arg1 == arg0) {
        *arg1 = temp_r5;
    }
    M2C_FIELD(arg0, void **, 0) = (void *) M2C_FIELD(temp_r5, void **, 4);
    temp_r4 = M2C_FIELD(temp_r5, void **, 4);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, s32 *, 8) = (s32) ((s32) arg0 | (M2C_FIELD(temp_r4, s32 *, 8) & 1));
    }
    M2C_FIELD(temp_r5, s32 *, 8) = (s32) ((M2C_FIELD(temp_r5, s32 *, 8) & ~0xFFFFFFFE) | (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFFFE));
    temp_r4_2 = M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFFFE;
    if (arg0 == (void *) M2C_FIELD(temp_r4_2, void **, 0)) {
        M2C_FIELD(temp_r4_2, void **, 0) = temp_r5;
    } else {
        M2C_FIELD(temp_r4_2, void **, 4) = temp_r5;
    }
    M2C_FIELD(temp_r5, void **, 4) = arg0;
    M2C_FIELD(arg0, s32 *, 8) = (s32) ((s32) temp_r5 | (M2C_FIELD(arg0, s32 *, 8) & 1));
}

void fn_80021B68(void) {
    fn_800A8D48(&fn_80038264);
    fn_800A8D50(&FreePictureSD);
}

void fn_80021B9C(s32 arg2) {
    lbl_803504C8 = arg2;
}

void fn_80021BA4(s32 arg0, void *arg1) {
    fn_80022768(M2C_FIELD(arg1, s32 *, 0x2C), arg0, arg1);
}

void fn_80021BD0(void *arg0) {
    s32 temp_r3;
    s32 temp_r6;
    s32 var_r30;
    u16 temp_r0;
    u32 var_r28;
    void *var_r3;

    var_r30 = 1;
loop_14:
    if (var_r30 != 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x18) == 0U) {
            var_r30 = 0;
        } else if ((u32) (M2C_FIELD(arg0, s32 *, 0x2C) - M2C_FIELD(arg0, s32 *, 0x30)) > 0x1000U) {
            var_r30 = 0;
        } else {
            temp_r3 = fn_800AAE6C();
            if (temp_r3 == 0) {
                var_r30 = 0;
            } else {
                if (fn_800AAF78(M2C_FIELD(arg0, u32 *, 0x18)) != 0) {
                    var_r28 = fn_800AAE40(temp_r3);
                    var_r3 = fn_800AAE38(temp_r3);
loop_10:
                    if (var_r28 != 0U) {
                        var_r28 -= 4;
                        temp_r6 = (M2C_FIELD(arg0, s32 *, 0x2C) * 2) & 0x3FFE;
                        /* draft: did not compile: *(M2C_FIELD(arg0, s32 *, 0x3C) + temp_r6) = M2C_FIELD(var_r3, u16 *, 0); */
                        temp_r0 = M2C_FIELD(var_r3, u16 *, 2);
                        /* draft: did not compile: var_r3 += 4; */
                        /* draft: did not compile: *(M2C_FIELD(arg0, s32 *, 0x38) + temp_r6) = temp_r0; */
                        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + 1);
                        goto loop_10;
                    }
                } else {
                    var_r30 = 0;
                }
                fn_800AAE48(M2C_FIELD(arg0, u32 *, 0x18), temp_r3);
            }
        }
        goto loop_14;
    }
}

void fn_80021CE0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) {
    s32 temp_r0;
    u64 temp_ret;

    if ((s8) lbl_803504D4 == 0) {
        lbl_803504D0 = 0;
        lbl_803504D4 = 1;
    }
    if ((s8) lbl_803504E0 == 0) {
        lbl_803504DC = 0;
        lbl_803504D8 = 0;
        lbl_803504E0 = 1;
    }
    if ((s32) lbl_803504D0 == 0) {
        temp_ret = OSGetTime();
        lbl_803504DC = (u32) temp_ret;
        lbl_803504D8 = temp_ret;
    }
    temp_r0 = lbl_803504D0 + 1;
    lbl_803504D0 = temp_r0;
    if (temp_r0 == 1) {
        lbl_803504D0 = 0;
    }
    /* draft: did not compile: fn_80021DA8(arg4, arg0, arg1, arg2, arg3); */
}

u32 fn_80021DA8(void *arg0, u16 *arg1, u32 arg2, u16 *arg3, u32 arg4, M2C_UNK arg_sp0) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r24;
    s32 temp_r3;
    s8 var_ctr_2;
    s32 var_ctr_4;
    s32 var_ctr_6;
    s32 var_r30;
    u16 *var_r12;
    u16 *var_r12_2;
    u16 *var_r4;
    u16 *var_r4_2;
    u16 *var_r4_3;
    u16 *var_r4_4;
    u32 temp_r0;
    u32 temp_r11;
    u32 temp_r11_2;
    u32 temp_r31;
    u32 var_ctr;
    u32 var_ctr_3;
    s8 var_ctr_5;
    u32 var_r24;
    u32 var_r24_2;
    u32 var_r5;
    u32 var_r5_2;

    temp_r31 = arg2 + arg4;
    if ((u32) (M2C_FIELD(arg0, s32 *, 0x2C) - M2C_FIELD(arg0, s32 *, 0x30)) < temp_r31) {
        fn_80021BD0((void *)(0));
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x30);
    temp_r24 = M2C_FIELD(arg0, s32 *, 0x2C);
    var_r30 = temp_r3;
    temp_r0 = temp_r24 - temp_r3;
    if (temp_r0 >= temp_r31) {
        var_r4 = arg1;
        var_r5 = 0;
        var_ctr = temp_r0;
        if (temp_r3 != temp_r24) {
loop_4:
            if (var_r5 != arg2) {
                temp_r0_2 = (var_r30 * 2) & 0x3FFE;
                var_r5 += 1;
                var_r30 += 1;
                /* draft: did not compile: *var_r4 = *(M2C_FIELD(arg0, s32 *, 0x38) + temp_r0_2); */
                var_r4 += 2;
                var_ctr -= 1;
                if (var_ctr != 0U) {
                    goto loop_4;
                }
            }
        }
        DCStoreRange(arg1, var_r5 * 2);
        var_r4_2 = arg3;
        var_r5_2 = 0;
        var_ctr_2 = temp_r24 - var_r30;
        if (var_r30 != temp_r24) {
loop_7:
            if (var_r5_2 != arg4) {
                temp_r0_3 = (var_r30 * 2) & 0x3FFE;
                var_r5_2 += 1;
                var_r30 += 1;
                /* draft: did not compile: *var_r4_2 = *(M2C_FIELD(arg0, s32 *, 0x38) + temp_r0_3); */
                var_r4_2 += 2;
                var_ctr_2 -= 1;
                if (var_ctr_2 != 0) {
                    goto loop_7;
                }
            }
        }
        DCStoreRange(arg3, var_r5_2 * 2);
        M2C_FIELD(arg0, s32 *, 0x30) = var_r30;
    } else {
        var_r24 = 0;
        if (arg2 > 0U) {
            temp_r11 = arg2 - 8;
            if (arg2 > 8U) {
                var_r12 = arg1;
                var_ctr_3 = (u32) (temp_r11 + 7) >> 3U;
                if (temp_r11 > 0U) {
                    do {
                        M2C_FIELD(var_r12, u16 *, 0) = 0;
                        var_r24 += 8;
                        M2C_FIELD(var_r12, s16 *, 2) = 0;
                        M2C_FIELD(var_r12, s16 *, 4) = 0;
                        M2C_FIELD(var_r12, s16 *, 6) = 0;
                        M2C_FIELD(var_r12, s16 *, 8) = 0;
                        M2C_FIELD(var_r12, s16 *, 0xA) = 0;
                        M2C_FIELD(var_r12, s16 *, 0xC) = 0;
                        M2C_FIELD(var_r12, s16 *, 0xE) = 0;
                        var_r12 += 0x10;
                        var_ctr_3 -= 1;
                    } while (var_ctr_3 != 0);
                }
            }
            var_ctr_4 = arg2 - var_r24;
            var_r4_3 = &arg1[var_r24];
            if (var_r24 < arg2) {
                do {
                    *var_r4_3 = 0;
                    var_r4_3 += 2;
                    var_ctr_4 -= 1;
                } while (var_ctr_4 != 0);
            }
        }
        var_r24_2 = 0;
        if (arg4 > 0U) {
            temp_r11_2 = arg4 - 8;
            if (arg4 > 8U) {
                var_r12_2 = arg3;
                var_ctr_5 = (u32) (temp_r11_2 + 7) >> 3U;
                if (temp_r11_2 > 0U) {
                    do {
                        M2C_FIELD(var_r12_2, u16 *, 0) = 0;
                        var_r24_2 += 8;
                        M2C_FIELD(var_r12_2, s16 *, 2) = 0;
                        M2C_FIELD(var_r12_2, s16 *, 4) = 0;
                        M2C_FIELD(var_r12_2, s16 *, 6) = 0;
                        M2C_FIELD(var_r12_2, s16 *, 8) = 0;
                        M2C_FIELD(var_r12_2, s16 *, 0xA) = 0;
                        M2C_FIELD(var_r12_2, s16 *, 0xC) = 0;
                        M2C_FIELD(var_r12_2, s16 *, 0xE) = 0;
                        var_r12_2 += 0x10;
                        var_ctr_5 -= 1;
                    } while (var_ctr_5 != 0);
                }
            }
            var_r4_4 = &arg3[var_r24_2];
            var_ctr_6 = arg4 - var_r24_2;
            if (var_r24_2 < arg4) {
                do {
                    *var_r4_4 = 0;
                    var_r4_4 += 2;
                    var_ctr_6 -= 1;
                } while (var_ctr_6 != 0);
            }
        }
    }
    return temp_r31;
}

void fn_80022004(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    /* draft: did not compile: fn_80022044(arg4, arg0, arg1, arg2, arg3, arg2, arg1); */
}

u32 fn_80022044(void *arg0, u16 *arg1, u32 arg2, u16 *arg3, u32 arg4, M2C_UNK arg_sp0) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r26;
    u32 var_ctr_5;
    s8 var_ctr_2;
    s32 var_ctr_4;
    s32 var_ctr_6;
    s32 var_r30;
    u16 *var_r12;
    u16 *var_r30_2;
    u16 *var_r4;
    u16 *var_r4_2;
    u16 *var_r4_3;
    u16 *var_r6;
    u32 temp_r0;
    u32 temp_r11;
    u32 temp_r27;
    u32 temp_r31;
    u32 var_ctr;
    u32 var_ctr_3;
    s32 temp_r3;
    u32 var_r26;
    u32 var_r26_2;
    u32 var_r5;
    u32 var_r7;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x34);
    temp_r26 = M2C_FIELD(arg0, s32 *, 0x2C);
    temp_r31 = arg2 + arg4;
    temp_r0 = temp_r26 - temp_r3;
    var_r30 = temp_r3;
    if (temp_r0 >= temp_r31) {
        var_r6 = arg1;
        var_r7 = 0;
        var_ctr = temp_r0;
        if (temp_r3 != temp_r26) {
loop_2:
            if (var_r7 != arg2) {
                temp_r0_2 = (var_r30 * 2) & 0x3FFE;
                var_r7 += 1;
                var_r30 += 1;
                /* draft: did not compile: *var_r6 = *(M2C_FIELD(arg0, s32 *, 0x3C) + temp_r0_2); */
                var_r6 += 2;
                var_ctr -= 1;
                if (var_ctr != 0U) {
                    goto loop_2;
                }
            }
        }
        DCStoreRange(arg1, var_r7 * 2);
        var_r4 = arg3;
        var_r5 = 0;
        var_ctr_2 = temp_r26 - var_r30;
        if (var_r30 != temp_r26) {
loop_5:
            if (var_r5 != arg4) {
                temp_r0_3 = (var_r30 * 2) & 0x3FFE;
                var_r5 += 1;
                var_r30 += 1;
                /* draft: did not compile: *var_r4 = *(M2C_FIELD(arg0, s32 *, 0x3C) + temp_r0_3); */
                var_r4 += 2;
                var_ctr_2 -= 1;
                if (var_ctr_2 != 0) {
                    goto loop_5;
                }
            }
        }
        DCStoreRange(arg3, var_r5 * 2);
        M2C_FIELD(arg0, s32 *, 0x34) = var_r30;
    } else {
        var_r26 = 0;
        if (arg2 > 0U) {
            temp_r27 = arg2 - 8;
            if (arg2 > 8U) {
                var_r30_2 = arg1;
                var_ctr_3 = (u32) (temp_r27 + 7) >> 3U;
                if (temp_r27 > 0U) {
                    do {
                        M2C_FIELD(var_r30_2, u16 *, 0) = 0;
                        var_r26 += 8;
                        M2C_FIELD(var_r30_2, s16 *, 2) = 0;
                        M2C_FIELD(var_r30_2, s16 *, 4) = 0;
                        M2C_FIELD(var_r30_2, s16 *, 6) = 0;
                        M2C_FIELD(var_r30_2, s16 *, 8) = 0;
                        M2C_FIELD(var_r30_2, s16 *, 0xA) = 0;
                        M2C_FIELD(var_r30_2, s16 *, 0xC) = 0;
                        M2C_FIELD(var_r30_2, s16 *, 0xE) = 0;
                        var_r30_2 += 0x10;
                        var_ctr_3 -= 1;
                    } while (var_ctr_3 != 0);
                }
            }
            var_r4_2 = &arg1[var_r26];
            var_ctr_4 = arg2 - var_r26;
            if (var_r26 < arg2) {
                do {
                    *var_r4_2 = 0;
                    var_r4_2 += 2;
                    var_ctr_4 -= 1;
                } while (var_ctr_4 != 0);
            }
        }
        var_r26_2 = 0;
        if (arg4 > 0U) {
            temp_r11 = arg4 - 8;
            if (arg4 > 8U) {
                var_r12 = arg3;
                var_ctr_5 = (u32) (temp_r11 + 7) >> 3U;
                if (temp_r11 > 0U) {
                    do {
                        M2C_FIELD(var_r12, u16 *, 0) = 0;
                        var_r26_2 += 8;
                        M2C_FIELD(var_r12, s16 *, 2) = 0;
                        M2C_FIELD(var_r12, s16 *, 4) = 0;
                        M2C_FIELD(var_r12, s16 *, 6) = 0;
                        M2C_FIELD(var_r12, s16 *, 8) = 0;
                        M2C_FIELD(var_r12, s16 *, 0xA) = 0;
                        M2C_FIELD(var_r12, s16 *, 0xC) = 0;
                        M2C_FIELD(var_r12, s16 *, 0xE) = 0;
                        var_r12 += 0x10;
                        var_ctr_5 -= 1;
                    } while (var_ctr_5 != 0);
                }
            }
            var_r4_3 = &arg3[var_r26_2];
            var_ctr_6 = arg4 - var_r26_2;
            if (var_r26_2 < arg4) {
                do {
                    *var_r4_3 = 0;
                    var_r4_3 += 2;
                    var_ctr_6 -= 1;
                } while (var_ctr_6 != 0);
            }
        }
    }
    return temp_r31;
}
