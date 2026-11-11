/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

u32 get_up_vector_for_viewing_mtx();
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_80223E68;
extern M2C_UNK lbl_80223E84;
extern M2C_UNK lbl_80223EA4;
M2C_UNK fn_80005888(void *);
u32 fn_80071138();
M2C_UNK fn_8008474C(void *, s32);
s32 strcmp(s32, s32);
extern void *lbl_80350678;
M2C_UNK fn_800847D4(M2C_UNK *);
M2C_UNK fn_80084914(M2C_UNK *, M2C_UNK);
M2C_UNK fn_80084358(void *);
s32 fn_80005868(M2C_UNK, s32, s32);
M2C_UNK fn_800250A0();
M2C_UNK fn_8002F854();
M2C_UNK fn_800831EC();
M2C_UNK fn_800834BC();
extern M2C_UNK lbl_802CD2CC;
extern s32 lbl_8034FA7C;
extern u8 lbl_80350698;
M2C_UNK fn_800058A8(s32);
M2C_UNK fn_800058E8(s32);
M2C_UNK fn_80024E80(M2C_UNK *, s32 *, void **, void *);
M2C_UNK fn_8002F67C(M2C_UNK *, s32 *, void ***, void **, void *);
M2C_UNK fn_80078F20(s32, M2C_UNK);
s32 fn_80078F84(s32, M2C_UNK, u32, s32);
M2C_UNK fn_80082BE8(s32 *, s32, void **);
M2C_UNK fn_80082D14(s32, s32 *);
M2C_UNK fn_8008313C(M2C_UNK *, s32 *, void **, void *);
M2C_UNK fn_80083204(M2C_UNK *, s32 *, void **, void *);
M2C_UNK fn_800838DC(M2C_UNK);
M2C_UNK fn_8008499C(void *);
extern s32 lbl_80350688;
s32 get_up_vector_for_viewing_mtx_inner(s32);
M2C_UNK fn_80082D94(M2C_UNK *, u32, void **);
M2C_UNK fn_80082E50(M2C_UNK *, M2C_UNK *);
M2C_UNK fn_80082FAC(M2C_UNK *, M2C_UNK *);
M2C_UNK fn_8008498C(void *);
extern u32 lbl_80350684;
M2C_UNK fn_8014F5B4(M2C_UNK *, M2C_UNK *, s32);
extern M2C_UNK lbl_802CD2AC;
extern M2C_UNK lbl_8034FA80;
extern M2C_UNK lbl_8034FA84;

void fn_8007E31C(void *arg0, void *arg1, u32 arg2, void *arg3, M2C_UNK arg_sp0);
void fn_8007E9D0(void *arg0, u32 arg1);
void fn_8007EB58(void *arg0);
void *fn_8007EB94(void *arg0, s16 arg1);
void fn_8007EBF4(void *arg0);
void *fn_8007EC30(void *arg0, s16 arg1);
void fn_8007EC90(void ***arg0, s32 *arg1, void ***arg2, void ***arg3);
void fn_8007ED40(void **arg0, s32 *arg1, void ***arg2, s32 arg3, M2C_UNK arg_sp0);
void fn_8007EE30(void *arg0);
void *fn_8007EE48(s32 arg0);
void fn_8007EF14(void);
void fn_8007EFB4(void *arg0);
void *fn_8007F05C(void *arg0, s32 arg1);
void *fn_8007F14C(void *arg0, s16 arg1);
void fn_8007F3A4(void *arg0, void *arg1);
void fn_8007F484(void *arg0, void *arg1);
void fn_8007F508(void *arg0, void *arg1);
void fn_8007F58C(void *arg0, s32 arg1, void *arg2);
s32 fn_8007F61C(void *arg0);
u8 fn_8007F65C(void *arg0);
s32 fn_8007F680(void *arg0);
void fn_8007F6C0(void *arg0);
void fn_8007F6E4(void *arg0);
void fn_8007F708(void *arg0);
void fn_8007F72C(void *arg0);
void fn_8007F758(s32 arg0, s32 *arg1);
void fn_8007F794(s32 *arg0, s32 arg1);
s32 fn_8007F7C4(u8 *arg0);
f32 fn_8007F848(u8 *arg0);
s32 fn_8007F8B8(void *arg0, u8 *arg1);
void fn_8007F9C0(s8 *arg0, f32 farg0);
void fn_8007F9FC(s8 *arg0, s32 arg1);

void fn_8007E31C(void *arg0, void *arg1, u32 arg2, void *arg3, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8007E9D0(void *arg0, u32 arg1) {
    u8 sp10;
    u32 sp8;
    s32 temp_r3_4;
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r4;
    u32 var_ctr;
    u32 var_r6;
    s32 spC;

    if (arg1 > (u32) M2C_FIELD(arg0, u32 *, 0)) {
        if (arg1 > 0x0AAAAAAAU) {
            fn_8014F858(&__files + 0xA0, &lbl_80223EA4, &__files);
            fn_8014BB10();
        }
        sp8 = spC = 0;
        sp10 = 0U;
        temp_r3 = get_up_vector_for_viewing_mtx(arg1 * 0x18);
        if (temp_r3 == 0U) {
            fn_8014F858(&__files + 0xA0, &lbl_80223E68, &__files);
            fn_8014BB10();
        }
        sp10 = temp_r3;
        var_r6 = temp_r3;
        sp8 = arg1;
        temp_r4 = (M2C_FIELD(arg0, u32 *, 8)) + (M2C_FIELD(arg0, s32 *, 4) * 0x18);
        var_ctr = (u32) ((temp_r4 + 0x17) - (M2C_FIELD(arg0, u32 *, 8))) / 24U;
        if ((M2C_FIELD(arg0, u32 *, 8)) < temp_r4) {
            do {
                if (var_r6 != 0U) {
                    /* draft: did not compile: M2C_STRUCT_COPY(var_r6, (M2C_FIELD(arg0, u32 *, 8)), 0x18); */
                }
                (M2C_FIELD(arg0, u32 *, 8)) += 0x18;
                var_r6 += 0x18;
                spC += 1;
                var_ctr -= 1;
            } while (var_ctr != 0);
        }
        if (&sp8 != arg0) {
            temp_r3_2 = sp8;
            sp8 = M2C_FIELD(arg0, u32 *, 0);
            M2C_FIELD(arg0, u32 *, 0) = temp_r3_2;
            temp_r3_3 = sp10;
            sp10 = M2C_FIELD(arg0, u32 *, 8);
            M2C_FIELD(arg0, u32 *, 8) = temp_r3_3;
            temp_r3_4 = spC;
            spC = M2C_FIELD(arg0, s32 *, 4);
            M2C_FIELD(arg0, s32 *, 4) = temp_r3_4;
        }
        fn_8007EC30(&sp8, -1);
    }
}

#pragma push
#pragma optimize_for_size on
void fn_8007EB58(void *arg0) {
    u32 temp_r5;
    u32 temp_r6;
    u32 var_ctr;

    temp_r5 = M2C_FIELD(arg0, u32 *, 8);
    temp_r6 = temp_r5 + (M2C_FIELD(arg0, s32 *, 4) * 0x5C);
    var_ctr = (u32) ((temp_r6 + 0x5B) - temp_r5) / 92U;
    if (temp_r6 > temp_r5) {
        do {
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#pragma pop

void *fn_8007EB94(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_8007EB58((void *)(0));
        if ((u32) M2C_FIELD(arg0, u32 *, 8) != 0U) {
            fn_80005888((void *)(0));
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma optimize_for_size on
void fn_8007EBF4(void *arg0) {
    u32 temp_r5;
    u32 temp_r6;
    u32 var_ctr;

    temp_r5 = M2C_FIELD(arg0, u32 *, 8);
    temp_r6 = temp_r5 + (M2C_FIELD(arg0, s32 *, 4) * 0x18);
    var_ctr = (u32) ((temp_r6 + 0x17) - temp_r5) / 24U;
    if (temp_r6 > temp_r5) {
        do {
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#pragma pop

void *fn_8007EC30(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_8007EBF4((void *)(0));
        if ((u32) M2C_FIELD(arg0, u32 *, 8) != 0U) {
            fn_80005888((void *)(0));
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_8007EC90(void ***arg0, s32 *arg1, void ***arg2, void ***arg3) {
    void **temp_r0;
    void **temp_r3;
    void **temp_r3_2;
    void **temp_r5;
    void *temp_r4;

    temp_r5 = *arg2;
    temp_r3 = *arg3;
    if (temp_r5 == temp_r3) {
        *arg0 = temp_r3;
        return;
    }
    temp_r4 = *temp_r3;
    M2C_FIELD(*temp_r5, void ***, 4) = (void **) M2C_FIELD(temp_r4, void ***, 4);
    *M2C_FIELD(temp_r4, void ***, 4) = *temp_r5;
loop_4:
    temp_r3_2 = *arg2;
    temp_r0 = *arg3;
    if (temp_r3_2 != temp_r0) {
        *arg2 = M2C_FIELD(temp_r3_2, void ***, 4);
        fn_80005888((void *)(0));
        *arg1 -= 1;
        goto loop_4;
    }
    *arg0 = temp_r0;
}

#pragma push
#pragma peephole off
void fn_8007ED40(void **arg0, s32 *arg1, void ***arg2, s32 arg3, M2C_UNK arg_sp0) {
    void *temp_r3;
    s32 sp8;
    void **temp_r4_2;
    void *spC;
    void *temp_r4;
    void *temp_r5;

    /* draft: did not compile: temp_r3 = get_up_vector_for_viewing_mtx(0x20); */
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_80223E68, &__files);
        fn_8014BB10();
    }
    /* draft: did not compile: temp_r4 = temp_r3 + 8; */
    /* draft: did not compile: sp8 = arg1 + 4; */
    spC = temp_r3;
    if (temp_r4 != NULL) {
        /* draft: did not compile: M2C_STRUCT_COPY(temp_r4, arg3, 0x18); */
    }
    temp_r5 = spC;
    spC = NULL;
    M2C_FIELD(*temp_r4_2, void **, 4) = temp_r5;
    temp_r4_2 = *arg2;
    *arg0 = temp_r5;
    M2C_FIELD(temp_r5, void **, 0) = (void *) *temp_r4_2;
    *temp_r4_2 = temp_r5;
    M2C_FIELD(temp_r5, void ***, 4) = temp_r4_2;
    *arg1 += 1;
}
#pragma pop

void fn_8007EE30(void *arg0) {
    void *temp_r4;

    /* draft: did not compile: temp_r4 = arg0 + 4; */
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(temp_r4, void **, 4) = temp_r4;
    M2C_FIELD(arg0, void **, 4) = temp_r4;
}

void *fn_8007EE48(s32 arg0) {
    u32 temp_r31;
    void *var_r30;
    void *temp_r3;

    var_r30 = lbl_80350678;
    temp_r31 = fn_80071138();
loop_4:
    if (var_r30 != NULL) {
        if (((u32) M2C_FIELD(var_r30, u32 *, 4) != temp_r31) || (strcmp(M2C_FIELD(var_r30, s32 *, 0x2C), arg0) != 0)) {
            var_r30 = M2C_FIELD(var_r30, void **, 0);
            goto loop_4;
        }
    }
    if (var_r30 == NULL) {
        /* draft: did not compile: temp_r3 = get_up_vector_for_viewing_mtx(0x30); */
        if (temp_r3 != NULL) {
            M2C_FIELD(temp_r3, void **, 0) = NULL;
            M2C_FIELD(temp_r3, s32 *, 8) = 0;
            M2C_FIELD(temp_r3, s32 *, 0xC) = 0;
            M2C_FIELD(temp_r3, s32 *, 0x20) = 0;
            M2C_FIELD(temp_r3, s32 *, 0x24) = 0;
            M2C_FIELD(temp_r3, s16 *, 0x28) = 0;
            M2C_FIELD(temp_r3, s32 *, 0x2C) = 0;
        }
        var_r30 = temp_r3;
        fn_8008474C(temp_r3, arg0);
        M2C_FIELD(temp_r3, void **, 0) = (void *) lbl_80350678;
        lbl_80350678 = temp_r3;
    }
    return var_r30;
}

void fn_8007EF14(void) {
    M2C_UNK *temp_r29;
    M2C_UNK *var_r30;
    M2C_UNK *var_r31;

    /* draft: did not compile: var_r31 = &lbl_80350678; */
    var_r30 = lbl_80350678;
loop_9:
    if (var_r30 != NULL) {
        temp_r29 = M2C_FIELD(var_r30, M2C_UNK **, 0);
        if (((s16) M2C_FIELD(var_r30, s16 *, 0x28) == 0) && ((u32) M2C_FIELD(var_r30, u32 *, 0x24) == 0U)) {
            fn_800847D4(var_r30);
        }
        if (((s16) M2C_FIELD(var_r30, s16 *, 0x28) == 0) && ((u32) M2C_FIELD(var_r30, u32 *, 0x24) != 0U)) {
            fn_80084914(var_r30, 1);
            /* draft: did not compile: *var_r31 = temp_r29; */
        } else {
            var_r31 = var_r30;
        }
        var_r30 = temp_r29;
        goto loop_9;
    }
}

void fn_8007EFB4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = 1;
    M2C_FIELD(arg0, s32 *, 0x2E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    memset(M2C_FIELD(arg0, void **, 0x18), 0, M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x14) * 5);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    /* draft: did not compile: memset(arg0 + 0x20, 0, 0x100); */
    M2C_FIELD(arg0, s32 *, 0x120) = 0;
    /* draft: did not compile: memset(arg0 + 0x124, 0, 0x100); */
    /* draft: did not compile: memset(arg0 + 0x224, 0, 0x80); */
    fn_80084358(arg0);
    M2C_FIELD(arg0, s32 *, 0x2D0) = 0;
}

void *fn_8007F05C(void *arg0, s32 arg1) {
    s32 temp_r4;
    u8 temp_r5;

    temp_r5 = lbl_8034FA7C;
    temp_r4 = temp_r5 + 1;
    lbl_8034FA7C = temp_r4;
    M2C_FIELD(arg0, s8 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2A4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2A8) = fn_80005868(0x800, temp_r4, temp_r5);
    M2C_FIELD(arg0, s32 *, 0x2B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x2AC) = 0;
    M2C_FIELD(arg0, s32 *, 0x2B4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = temp_r5;
    /* draft: did not compile: fn_800250A0(arg0 + 0x2B8); */
    /* draft: did not compile: fn_800831EC(arg0 + 0x2C4); */
    /* draft: did not compile: fn_800834BC(arg0 + 0x2D4); */
    M2C_FIELD(arg0, s32 *, 0x2E4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2F0) = 0;
    M2C_FIELD(arg0, s32 *, 0x2E0) = 0;
    /* draft: did not compile: fn_8002F854(arg0 + 0x2F4); */
    if ((u8) lbl_80350698 == 0) {
        M2C_FIELD(&lbl_802CD2CC, s8 *, 0x201) = 0;
        M2C_FIELD(&lbl_802CD2CC, s8 *, 0x402) = 0;
        M2C_FIELD(&lbl_802CD2CC, s8 *, 0x603) = 0;
        M2C_FIELD(&lbl_802CD2CC, s8 *, 0x804) = 0;
        M2C_FIELD(&lbl_802CD2CC, s8 *, 0xA05) = 0;
        M2C_FIELD(&lbl_802CD2CC, s8 *, 0xC06) = 0;
        M2C_FIELD(&lbl_802CD2CC, s8 *, 0xE07) = 0;
        M2C_FIELD(&lbl_802CD2CC, s8 *, 0x1008) = 0;
        M2C_FIELD(&lbl_802CD2CC, s8 *, 0x1209) = 0;
        lbl_80350698 = 1;
        M2C_FIELD(&lbl_802CD2CC, s8 *, 0) = 0;
    }
    /* draft: did not compile: fn_8007F3A4(arg0, arg1); */
    return arg0;
}

void *fn_8007F14C(void *arg0, s16 arg1) { } /* draft: stub */

#pragma push
#pragma dont_inline on
void fn_8007F3A4(void *arg0, void *arg1) {
    M2C_UNK sp1C;
    M2C_UNK sp18;
    M2C_UNK sp14;
    M2C_UNK sp10;
    M2C_UNK spC;
    void *sp8;
    u32 temp_r3;
    u32 temp_r3_2;

    sp8 = arg0;
    if ((u32) lbl_80350684 == 0U) {
        temp_r3 = get_up_vector_for_viewing_mtx(0x10);
        if (temp_r3 != 0U) {
            fn_80082FAC(&sp14, &sp18);
        }
        lbl_80350684 = temp_r3;
    }
    if ((u32) lbl_80350688 == 0U) {
        temp_r3_2 = get_up_vector_for_viewing_mtx(0xC);
        if (temp_r3_2 != 0U) {
            fn_80082E50(&spC, &sp10);
        }
        lbl_80350688 = temp_r3_2;
    }
    fn_80082D94(&sp1C, lbl_80350688, &sp8);
    if (arg1 != NULL) {
        fn_8008498C(arg1);
        M2C_FIELD(sp8, void **, 8) = arg1;
        M2C_FIELD(sp8, s32 *, 0x2EC) = 0;
        M2C_FIELD(sp8, s32 *, 0x18) = get_up_vector_for_viewing_mtx_inner(M2C_FIELD(arg1, s32 *, 0x14) * 5);
        M2C_FIELD(sp8, s32 *, 0xC) = 1;
        fn_8007EFB4((void *)(sp8));
    }
}
#pragma pop

void fn_8007F484(void *arg0, void *arg1) {
    /* draft: did not compile: *(M2C_FIELD(arg0, s32 *, 0x18) + (M2C_FIELD(arg0, s32 *, 0x14) * 5)) = M2C_FIELD(arg1, u8 *, 0); */
    /* draft: did not compile: *(M2C_FIELD(arg0, s32 *, 0x18) + ((M2C_FIELD(arg0, s32 *, 0x14) * 5) + 1)) = M2C_FIELD(arg1, u8 *, 1); */
    /* draft: did not compile: *(M2C_FIELD(arg0, s32 *, 0x18) + ((M2C_FIELD(arg0, s32 *, 0x14) * 5) + 2)) = M2C_FIELD(arg1, u8 *, 2); */
    /* draft: did not compile: *(M2C_FIELD(arg0, s32 *, 0x18) + ((M2C_FIELD(arg0, s32 *, 0x14) * 5) + 3)) = M2C_FIELD(arg1, u8 *, 3); */
    /* draft: did not compile: *(M2C_FIELD(arg0, s32 *, 0x18) + ((M2C_FIELD(arg0, s32 *, 0x14) * 5) + 4)) = M2C_FIELD(arg1, u8 *, 4); */
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + 1);
}

void fn_8007F508(void *arg0, void *arg1) { } /* draft: stub */

void fn_8007F58C(void *arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, u8 *, 0) = (u8) M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x18) + ((M2C_FIELD(arg0, s32 *, 0x14) - arg1) * 5)), u8 *, -5);
    M2C_FIELD(arg2, u8 *, 1) = (u8) M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x18) + ((M2C_FIELD(arg0, s32 *, 0x14) - arg1) * 5)), u8 *, -4);
    M2C_FIELD(arg2, u8 *, 2) = (u8) M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x18) + ((M2C_FIELD(arg0, s32 *, 0x14) - arg1) * 5)), u8 *, -3);
    M2C_FIELD(arg2, u8 *, 3) = (u8) M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x18) + ((M2C_FIELD(arg0, s32 *, 0x14) - arg1) * 5)), u8 *, -2);
    M2C_FIELD(arg2, u8 *, 4) = (u8) M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x18) + ((M2C_FIELD(arg0, s32 *, 0x14) - arg1) * 5)), u8 *, -1);
}

s32 fn_8007F61C(void *arg0) {
    u8 temp_r0;
    u8 var_r4;

    var_r4 = 0;
    temp_r0 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x18) + (M2C_FIELD(arg0, s32 *, 0x14) * 5)), u8 *, -5);
    if ((temp_r0 == 0) || (temp_r0 == 2)) {
        var_r4 = 1;
    }
    return var_r4 != 0;
}

u8 fn_8007F65C(void *arg0) {
    return (u8) (M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x18) + (M2C_FIELD(arg0, s32 *, 0x14) * 5)), u8 *, -5) == 1);
}

s32 fn_8007F680(void *arg0) {
    u8 temp_r0;
    u8 var_r4;

    var_r4 = 0;
    temp_r0 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x18) + (M2C_FIELD(arg0, s32 *, 0x14) * 5)), u8 *, -5);
    if ((temp_r0 == 3) || (temp_r0 == 4)) {
        var_r4 = 1;
    }
    return var_r4 != 0;
}

void fn_8007F6C0(void *arg0) { } /* draft: stub */

void fn_8007F6E4(void *arg0) { } /* draft: stub */

void fn_8007F708(void *arg0) { } /* draft: stub */

void fn_8007F72C(void *arg0) { } /* draft: stub */

void fn_8007F758(s32 arg0, s32 *arg1) {
    u8 sp8;

    /* draft: did not compile: memcpy(&sp8, arg0); */
    *arg1 = sp8;
}

void fn_8007F794(s32 *arg0, s32 arg1) {
    s32 sp8;

    sp8 = *arg0;
    /* draft: did not compile: memcpy(arg1, &sp8); */
}

s32 fn_8007F7C4(u8 *arg0) {
    f32 spC;
    f32 sp8;
    u8 var_r0;
    u8 temp_r4;

    var_r0 = 0;
    temp_r4 = *arg0;
    if ((temp_r4 == 0) || (temp_r4 == 2)) {
        var_r0 = 1;
    }
    if (((u32) (-(s32) var_r0 | var_r0) >> 0x1FU) != 0) {
        /* draft: did not compile: fn_8007F758(arg0 + 1, &spC, 4); */
        return M2C_BITWISE(s32, spC);
    }
    /* draft: did not compile: fn_8007F758(arg0 + 1, &sp8, 4); */
    return (s32) sp8;
}

f32 fn_8007F848(u8 *arg0) {
    f32 spC;
    f32 sp8;

    switch ((u8) *arg0) {

    case 1:
            /* draft: did not compile: fn_8007F758(arg0 + 1, &spC, 4); */
            return spC;

        break;

    }
    /* draft: did not compile: fn_8007F758(arg0 + 1, &sp8, 4); */
    return (f32) sp8;
}

#pragma push
#pragma dont_inline on
s32 fn_8007F8B8(void *arg0, u8 *arg1) {
    s8 spC;
    s32 sp8;
    u8 var_r0;
    u8 var_r0_2;

    var_r0 = 0;
    if (((*arg1) == 3) || ((*arg1) == 4)) {
        var_r0 = 1;
    }
    if (((u32) (-(s32) var_r0 | var_r0) >> 0x1FU) != 0) {
        switch ((*arg1)) {
        case 4:
                /* draft: did not compile: fn_8007F758(arg1 + 1, &spC, 4); */
                return spC;
            break;
        }
        /* draft: did not compile: fn_8007F758(arg1 + 1, &sp8, 4); */
        return 0;
    }
    var_r0_2 = 0;
    if (((*arg1) == 0) || ((*arg1) == 2)) {
        var_r0_2 = 1;
    }
    if (var_r0_2 != 0) {
        fn_8014F5B4(&lbl_802CD2AC, &lbl_8034FA80, fn_8007F7C4(arg1));
    } else {
        fn_8007F848(arg1);
        fn_8014F5B4((long *)(&lbl_802CD2AC), (long *)(&lbl_8034FA84), (long)(0));
    }
    return (s32) &lbl_802CD2AC;
}
#pragma pop

void fn_8007F9C0(s8 *arg0, f32 farg0) {
    f32 sp8;

    sp8 = farg0;
    *arg0 = 1;
    /* draft: did not compile: fn_8007F794(&sp8, arg0 + 1, 4); */
}

void fn_8007F9FC(s8 *arg0, s32 arg1) {
    s32 sp8;

    sp8 = arg1;
    *arg0 = 0;
    /* draft: did not compile: fn_8007F794(&sp8, arg0 + 1, 4); */
}
