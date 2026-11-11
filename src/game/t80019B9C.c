/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern f32 lbl_803513D4;
M2C_UNK fn_80005888();
void *get_up_vector_for_viewing_mtx(M2C_UNK);
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_80221B1C;
M2C_UNK fn_8009DD68(s32);
extern M2C_UNK lbl_80221CC0;
M2C_UNK fn_800146F0(void **, M2C_UNK);
M2C_UNK fn_80015F5C(void **, M2C_UNK *);
M2C_UNK fn_8001D708(void **, M2C_UNK *, s32);
M2C_UNK fn_8001D988();
s32 fn_80034370();
M2C_UNK fn_80073810(void *, void **);
M2C_UNK method_setItemDesc(void *, s32);
void *fn_80095240(s32);
M2C_UNK fn_8014F694(M2C_UNK *, M2C_UNK, s32, s32, s32);
s32 strlen(M2C_UNK *);
extern M2C_UNK lbl_80221B38;
extern M2C_UNK lbl_80221BFC;
extern f32 lbl_80351458;
extern f32 lbl_8035145C;
M2C_UNK fn_8001D784();
M2C_UNK fn_80073B80(void *, M2C_UNK);
M2C_UNK fn_8007F14C(s32, M2C_UNK);
f32 fn_800A891C(s32, M2C_UNK *);

f32 fn_80019B9C(void *arg0);
s32 fn_80019BBC(void);
s32 fn_80019BC4(void);
s32 fn_80019BCC(void);
void fn_80019BD4(void);
s32 fn_80019BD8(void);
s32 fn_80019BE0(void);
s32 fn_80019BE8(void);
void fn_80019BF0(void ***arg0, s32 *arg1, void ***arg2, void ***arg3);
void fn_80019CA0(void ***arg0, s32 *arg1, void ***arg2);
void fn_80019D1C(void **arg0, s32 *arg1, void ***arg2, void *arg3, M2C_UNK arg_sp0);
void fn_80019E6C(void *arg0);
void fn_80019E84(void ***arg0, s32 *arg1, void ***arg2, void ***arg3);
void fn_80019F34(void ***arg0, s32 *arg1, void ***arg2);
void fn_80019FB0(void **arg0, s32 *arg1, void ***arg2, void *arg3, M2C_UNK arg_sp0);
void fn_8001A0D0(void *arg0);
s32 *fn_8001A0E8(s32 *arg0, s32 arg1);
s32 *fn_8001A114(void *arg0, s32 arg1, s32 arg2);
void *fn_8001A184(s32 arg1, s32 arg2);
s32 fn_8001A220(s32 arg0);
s32 fn_8001A250(s32 arg0);
s32 fn_8001A280(s32 arg0);
void fn_8001A2B0(s32 *arg0);
void fn_8001A2BC(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8001A2CC(void *arg0, void *arg1, s32 arg2, u32 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_8001A354(s32 *arg0);
void fn_8001A374(s32 **arg0, s32 arg1);
void *fn_8001A3F0(void *arg0, M2C_UNK arg_sp0);
void fn_8001A714(s32 **arg0, s32 **arg1);
void *fn_8001A738(void *arg0, s16 arg1);
u32 fn_8001A7E4(void *arg0, u32 arg1);
s32 fn_8001A81C(void *arg0);

f32 fn_80019B9C(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x198);
    if (temp_r3 != NULL) {
        return M2C_FIELD(M2C_FIELD(temp_r3, void **, 0xC), f32 *, 0x14);
    }
    return lbl_803513D4;
}

s32 fn_80019BBC(void) {
    return 0;
}

s32 fn_80019BC4(void) {
    return 0;
}

s32 fn_80019BCC(void) {
    return 0;
}

void fn_80019BD4(void) {

}

s32 fn_80019BD8(void) {
    return 0;
}

s32 fn_80019BE0(void) {
    return 0;
}

s32 fn_80019BE8(void) {
    return 0;
}

void fn_80019BF0(void ***arg0, s32 *arg1, void ***arg2, void ***arg3) {
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
        fn_80005888();
        *arg1 -= 1;
        goto loop_4;
    }
    *arg0 = temp_r0;
}

void fn_80019CA0(void ***arg0, s32 *arg1, void ***arg2) {
    void **temp_r3;
    void **temp_r4;

    temp_r3 = *arg2;
    *arg2 = M2C_FIELD(temp_r3, void ***, 4);
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0), void ***, 4) = (void **) M2C_FIELD(temp_r3, void ***, 4);
    temp_r4 = M2C_FIELD(temp_r3, void ***, 4);
    *temp_r4 = M2C_FIELD(temp_r3, void **, 0);
    fn_80005888(temp_r3, temp_r4);
    *arg1 -= 1;
    *arg0 = *arg2;
}

void fn_80019D1C(void **arg0, s32 *arg1, void ***arg2, void *arg3, M2C_UNK arg_sp0) {
    void *spC;
    s32 sp8;
    void **temp_r4_2;
    void *temp_r3;
    void *temp_r4;
    void *temp_r5;

    temp_r3 = get_up_vector_for_viewing_mtx(0x50);
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_80221B1C, &__files);
        fn_8014BB10();
    }
    /* draft: did not compile: temp_r4 = temp_r3 + 8; */
    /* draft: did not compile: sp8 = arg1 + 4; */
    spC = temp_r3;
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) M2C_FIELD(arg3, s32 *, 0);
        M2C_FIELD(temp_r4, f32 *, 0xC) = (f32) M2C_FIELD(arg3, f32 *, 0xC);
        M2C_FIELD(temp_r4, s32 *, 0x10) = (s32) M2C_FIELD(arg3, s32 *, 0x10);
        M2C_FIELD(temp_r4, s32 *, 4) = (s32) M2C_FIELD(arg3, s32 *, 4);
        M2C_FIELD(temp_r4, s32 *, 8) = (s32) M2C_FIELD(arg3, s32 *, 8);
        M2C_STRUCT_COPY(temp_r4, arg3, 0xC);
        M2C_STRUCT_COPY(temp_r4, arg3, 0xD);
        M2C_STRUCT_COPY(temp_r4, arg3, 0xC);
        M2C_FIELD(temp_r4, f32 *, 0x3C) = (f32) M2C_FIELD(arg3, f32 *, 0x3C);
        M2C_FIELD(temp_r4, s32 *, 0x40) = (s32) M2C_FIELD(arg3, s32 *, 0x40);
        M2C_FIELD(temp_r4, f32 *, 0x44) = (f32) M2C_FIELD(arg3, f32 *, 0x44);
    }
    temp_r4_2 = *arg2;
    temp_r5 = spC;
    spC = NULL;
    M2C_FIELD(*temp_r4_2, void **, 4) = temp_r5;
    M2C_FIELD(temp_r5, void **, 0) = (void *) *temp_r4_2;
    *temp_r4_2 = temp_r5;
    M2C_FIELD(temp_r5, void ***, 4) = temp_r4_2;
    *arg1 += 1;
    *arg0 = temp_r5;
}

void fn_80019E6C(void *arg0) {
    void *temp_r4;

    /* draft: did not compile: temp_r4 = arg0 + 4; */
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(temp_r4, void **, 4) = temp_r4;
    M2C_FIELD(arg0, void **, 4) = temp_r4;
}

void fn_80019E84(void ***arg0, s32 *arg1, void ***arg2, void ***arg3) {
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
        fn_80005888();
        *arg1 -= 1;
        goto loop_4;
    }
    *arg0 = temp_r0;
}

void fn_80019F34(void ***arg0, s32 *arg1, void ***arg2) {
    void **temp_r3;
    void **temp_r4;

    temp_r3 = *arg2;
    *arg2 = M2C_FIELD(temp_r3, void ***, 4);
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0), void ***, 4) = (void **) M2C_FIELD(temp_r3, void ***, 4);
    temp_r4 = M2C_FIELD(temp_r3, void ***, 4);
    *temp_r4 = M2C_FIELD(temp_r3, void **, 0);
    fn_80005888(temp_r3, temp_r4);
    *arg1 -= 1;
    *arg0 = *arg2;
}

void fn_80019FB0(void **arg0, s32 *arg1, void ***arg2, void *arg3, M2C_UNK arg_sp0) {
    void *spC;
    s32 sp8;
    void **temp_r4_2;
    void *temp_r3;
    void *temp_r4;
    void *temp_r5;

    temp_r3 = get_up_vector_for_viewing_mtx(0x38);
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_80221B1C, &__files);
        fn_8014BB10();
    }
    /* draft: did not compile: temp_r4 = temp_r3 + 8; */
    /* draft: did not compile: sp8 = arg1 + 4; */
    spC = temp_r3;
    if (temp_r4 != NULL) {
        M2C_STRUCT_COPY(temp_r4, arg3, 0xC);
        M2C_STRUCT_COPY(temp_r4, arg3, 0xD);
        M2C_STRUCT_COPY(temp_r4, arg3, 0xC);
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) M2C_FIELD(arg3, s32 *, 0);
        M2C_FIELD(temp_r4, f32 *, 0x2C) = (f32) M2C_FIELD(arg3, f32 *, 0x2C);
    }
    temp_r4_2 = *arg2;
    temp_r5 = spC;
    spC = NULL;
    M2C_FIELD(*temp_r4_2, void **, 4) = temp_r5;
    M2C_FIELD(temp_r5, void **, 0) = (void *) *temp_r4_2;
    *temp_r4_2 = temp_r5;
    M2C_FIELD(temp_r5, void ***, 4) = temp_r4_2;
    *arg1 += 1;
    *arg0 = temp_r5;
}

void fn_8001A0D0(void *arg0) {
    void *temp_r4;

    /* draft: did not compile: temp_r4 = arg0 + 4; */
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(temp_r4, void **, 4) = temp_r4;
    M2C_FIELD(arg0, void **, 4) = temp_r4;
}

s32 *fn_8001A0E8(s32 *arg0, s32 arg1) {
    s32 *var_r3;
    s32 temp_r0;

    var_r3 = arg0;
loop_3:
    if ((var_r3 == NULL) || (temp_r0 = *var_r3, ((temp_r0 == 0) != 0))) {
        return NULL;
    }
    if (temp_r0 != arg1) {
        var_r3 += 0xC;
        goto loop_3;
    }
    return var_r3;
}

s32 *fn_8001A114(void *arg0, s32 arg1, s32 arg2) {
    s32 *var_r7;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r6;
    void *var_r3;

    var_r3 = arg0;
    var_r7 = NULL;
loop_9:
    if (var_r3 != NULL) {
        temp_r0 = M2C_FIELD(var_r3, s32 *, 0);
        if (temp_r0 != 0) {
            if ((temp_r0 != 7) || ((var_r7 = M2C_FIELD(var_r3, s32 **, 8), temp_r6 = *var_r7, (((u32) (temp_r6 + 0xC8000000) == 0U) == 0)) && (temp_r6 != 0) && ((temp_r0_2 = ((u32) temp_r6 >> 0x1BU) & 0xF, ((temp_r0_2 == 7) == 0)) || (temp_r6 != arg2)) && ((temp_r0_2 != 0) || (temp_r6 != arg1)))) {
                /* draft: did not compile: var_r3 += 0xC; */
                goto loop_9;
            }
        }
    }
    return var_r7;
}

void *fn_8001A184(s32 arg1, s32 arg2) {
    s32 *temp_r5;
    s32 *var_r4;
    s32 var_r3;
    s32 var_r7;
    void *temp_r3;
    void *temp_r6;

    /* draft: did not compile: temp_r3 = fn_8001A0E8(6); */
    if (temp_r3 != NULL) {
        temp_r5 = M2C_FIELD(temp_r3, s32 **, 8);
        var_r7 = 0;
        var_r3 = 0;
        var_r4 = temp_r5;
loop_6:
        if ((s32) *var_r4 == -1) {
            goto block_7;
        }
        temp_r6 = temp_r5 + var_r3;
        if ((arg1 == (s32) M2C_FIELD(temp_r6, s32 *, 0)) && (arg2 == (s32) M2C_FIELD(temp_r6, s32 *, 4))) {
            return temp_r5 + (var_r7 * 0xC);
        }
        var_r3 += 0xC;
        var_r4 += 0xC;
        var_r7 += 1;
        goto loop_6;
    }
block_7:
    return NULL;
}

s32 fn_8001A220(s32 arg0) {
    fn_8001A2B0((long *)(0));
    return arg0;
}

s32 fn_8001A250(s32 arg0) {
    fn_8001A2BC((void *)(0), (long)(0), (long)(0), (long)(0));
    return arg0;
}

s32 fn_8001A280(s32 arg0) {
    fn_8001A2CC((void *)(0), (void *)(0), (long)(0), (unsigned long)(0), (long)(0), (long)(0));
    return arg0;
}

void fn_8001A2B0(s32 *arg0) {
    *arg0 = -1;
}

void fn_8001A2BC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = arg3;
}

void fn_8001A2CC(void *arg0, void *arg1, s32 arg2, u32 arg3, s32 arg4, M2C_UNK arg_sp0) {
    s32 temp_r4;

    fn_8001A2B0((long *)(0));
    temp_r4 = arg3 & 0xFFF;
    if (((u32) (arg3 + 0xF8000000) != 0U) && (temp_r4 < (s32) M2C_FIELD(arg1, s32 *, 0x70)) && ((s32) ((arg3 >> 0xCU) & 0x7FFF) == (s32) M2C_FIELD(arg1, s32 *, 4))) {
        M2C_FIELD(arg0, s32 *, 0) = arg2;
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 0x6C) + (temp_r4 * 0x38));
        M2C_FIELD(arg0, s32 *, 8) = arg4;
    }
}

s32 fn_8001A354(s32 *arg0) {
    return *arg0 > 0;
}

void fn_8001A374(s32 **arg0, s32 arg1) {
    s32 *temp_r3;
    s32 *temp_r4;

    temp_r3 = get_up_vector_for_viewing_mtx(0x3C);
    if (temp_r3 != NULL) {
        fn_8009DD68(arg1);
        M2C_FIELD(temp_r3, M2C_UNK **, 4) = &lbl_80221CC0;
    }
    *arg0 = temp_r3;
    temp_r4 = *arg0;
    if (temp_r4 != NULL) {
        *temp_r4 += 1;
    }
}

void *fn_8001A3F0(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8001A714(s32 **arg0, s32 **arg1) {
    s32 *temp_r4;

    *arg0 = *arg1;
    temp_r4 = *arg0;
    if (temp_r4 != NULL) {
        *temp_r4 += 1;
    }
}

void *fn_8001A738(void *arg0, s16 arg1) {
    void *sp10;
    s32 spC;
    M2C_UNK sp8;
    void *temp_r7;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_80221BFC;
        fn_8007F14C(M2C_FIELD(arg0, s32 *, 0x1C8), 1);
        if (0 /* draft: did not compile */) {
            /* draft: did not compile: temp_r7 = arg0 + 0x210; */
            sp10 = temp_r7;
            spC = M2C_FIELD(arg0, s32 *, 0x214);
            /* draft: did not compile: fn_8001D784(&sp8, arg0 + 0x20C, &spC, &sp10, temp_r7); */
        }
        fn_80073B80(arg0, 0);
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

u32 fn_8001A7E4(void *arg0, u32 arg1) {
    u32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u32 *, 0x1C8);
    M2C_FIELD(arg0, u32 *, 0x1C8) = arg1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C8) != 0U) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 0x1000);
    } else {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFEFFF);
    }
    return temp_r5;
}

s32 fn_8001A81C(void *arg0) {
    f32 spC;
    M2C_UNK sp8;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), M2C_UNK (**)(M2C_UNK *), 0x3C)(&sp8);
    spC = fn_800A891C(M2C_FIELD(arg0, s32 *, 0x24), &sp8);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK *), 0x38)(arg0, &sp8);
    return 1;
}
