/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80005888(void *);
M2C_UNK fn_800146F0();
M2C_UNK fn_800132E0(M2C_UNK *);
void *get_up_vector_for_viewing_mtx(s32);
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_80223C64;
extern M2C_UNK lbl_80223C80;
M2C_UNK fn_8001FCC0(s32 **, s32, M2C_UNK *, void *);
extern M2C_UNK lbl_80223D00;
extern M2C_UNK lbl_80223D10;
extern f32 lbl_80351968;
s32 fn_80014298();
void *fn_8007354C(s32);
s32 fn_8009AA38(void *);
M2C_UNK fn_800716AC();
extern M2C_UNK lbl_80223CCC;
M2C_UNK fn_80073220(void *, f32, f32);
void *fn_8007333C(void *);
void *fn_80073490(void *);
void *fn_8009A8E0(void *, s32, s32);
void *fn_8009A944(void *, s32, s32);
void *fn_8009A9AC(void *, s32, s32);
extern f32 lbl_8035196C;
M2C_UNK fn_80012D5C(void **, s32, M2C_UNK);
extern M2C_UNK lbl_80223D20;
M2C_UNK fn_80005868(s32);
void *fn_800208F4(f32);
M2C_UNK fn_8002FA14(s32, s32, u8 *);
M2C_UNK fn_8002FCC0(void *, M2C_UNK);
M2C_UNK fn_8002FD20(void *);
M2C_UNK fn_8002FEA4(f32);
M2C_UNK fn_80079100(void *);
s32 GetRetraceCount();
extern M2C_UNK fn_8002F3CC;

void fn_80076D4C(s32 arg0, void *arg1);
void fn_80076DC8(void *arg0, u8 *arg1);
void fn_80076DE8(void *arg0);
void *fn_80076E24(void *arg0, s16 arg1);
void fn_80076E84(void *arg0);
void *fn_80076EC0(void *arg0, s16 arg1);
void fn_80076F20(void *arg0, u32 arg1);
void fn_80076FA8(void *arg0, u32 arg1);
void *fn_80077030(void *arg0, void *arg1, void *arg2);
void fn_80077238(void *arg0, s32 *arg1, u32 arg2, void *arg3, M2C_UNK arg_sp0);
void *fn_80077970(void *arg0, void *arg1, void *arg2);
void fn_80077B78(void *arg0, s32 *arg1, u32 arg2, void *arg3, M2C_UNK arg_sp0);
void *fn_800782B0(void *arg0, void *arg1);
void *fn_8007838C(void *arg0, s16 arg1);
s32 fn_8007844C(void *arg0);
void fn_800784B8(void *arg0);
void *fn_80078530(void *arg0, void *arg1);
void *fn_80078624(void *arg0, s16 arg1);
s32 fn_800786E4(void *arg0);
s32 fn_80078768(s32 *arg0);
s32 fn_8007877C(s32 *arg0);
void fn_80078790(void *arg0);
void **fn_80078988(void **arg0, u32 arg1, u8 arg2);
void *fn_80078A48(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6, M2C_UNK arg_sp0);
void fn_80078CAC(void *arg0);

void fn_80076D4C(s32 arg0, void *arg1) {
    if ((u32) M2C_FIELD(arg1, u32 *, 0) != 0U) {
        fn_80076D4C((long)(0), (void *)(0));
    }
    if ((u32) M2C_FIELD(arg1, u32 *, 4) != 0U) {
        fn_80076D4C((long)(arg0), (void *)(0));
    }
    if (0 /* draft: did not compile */) {
        /* draft: did not compile: fn_800146F0(arg1 + 0x1C, -1); */
    }
    fn_80005888(arg1);
}

void fn_80076DC8(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u8 *, 8) = (u8) *arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    /* draft: did not compile: M2C_FIELD(arg0, s32 *, 0xC) = (s32) (arg0 + 4); */
}

#pragma push
#pragma optimize_for_size on
void fn_80076DE8(void *arg0) {
    u32 temp_r5;
    u32 temp_r6;
    u32 var_ctr;

    temp_r5 = M2C_FIELD(arg0, u32 *, 8);
    temp_r6 = temp_r5 + (M2C_FIELD(arg0, s32 *, 4) * 0x1C);
    var_ctr = (u32) ((temp_r6 + 0x1B) - temp_r5) / 28U;
    if (temp_r6 > temp_r5) {
        do {
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#pragma pop

#pragma push
#pragma optimize_for_size on
void *fn_80076E24(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_80076DE8((void *)(0));
        if ((u32) M2C_FIELD(arg0, u32 *, 8) != 0U) {
            fn_80005888((void *)(0));
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}
#pragma pop

#pragma push
#pragma optimize_for_size on
void fn_80076E84(void *arg0) {
    u32 temp_r5;
    u32 temp_r6;
    u32 var_ctr;

    temp_r5 = M2C_FIELD(arg0, u32 *, 8);
    temp_r6 = temp_r5 + (M2C_FIELD(arg0, s32 *, 4) * 0x1C);
    var_ctr = (u32) ((temp_r6 + 0x1B) - temp_r5) / 28U;
    if (temp_r6 > temp_r5) {
        do {
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#pragma pop

#pragma push
#pragma optimize_for_size on
void *fn_80076EC0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_80076E84((void *)(0));
        if ((u32) M2C_FIELD(arg0, u32 *, 8) != 0U) {
            fn_80005888((void *)(0));
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}
#pragma pop

void fn_80076F20(void *arg0, u32 arg1) { } /* draft: stub */

void fn_80076FA8(void *arg0, u32 arg1) { } /* draft: stub */

void *fn_80077030(void *arg0, void *arg1, void *arg2) { } /* draft: stub */

void fn_80077238(void *arg0, s32 *arg1, u32 arg2, void *arg3, M2C_UNK arg_sp0) { } /* draft: stub */

void *fn_80077970(void *arg0, void *arg1, void *arg2) { } /* draft: stub */

void fn_80077B78(void *arg0, s32 *arg1, u32 arg2, void *arg3, M2C_UNK arg_sp0) { } /* draft: stub */

void *fn_800782B0(void *arg0, void *arg1) {
    s32 *sp8;
    s32 *temp_r4;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_80223D10;
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_80351968;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_80223D00;
    M2C_FIELD(arg0, void **, 0xC) = arg1;
    fn_8001FCC0(&sp8, M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 8), &lbl_80223D10, arg0);
    M2C_FIELD(arg0, s32 **, 0x10) = sp8;
    temp_r4 = M2C_FIELD(arg0, s32 **, 0x10);
    if (temp_r4 != NULL) {
        *temp_r4 += 1;
    }
    if (sp8 != NULL) {
        M2C_FIELD(sp8, s32 *, 0) -= 1;
        if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp8, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    sp8 = NULL;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    return arg0;
}

void *fn_8007838C(void *arg0, s16 arg1) {
    void *temp_r3;
    void *temp_r4;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_80223D00;
        if (0 /* draft: did not compile */) {
            temp_r4 = M2C_FIELD(arg0, void **, 0x10);
            if (temp_r4 != NULL) {
                M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
                if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                    temp_r3 = M2C_FIELD(arg0, void **, 0x10);
                    if (temp_r3 != NULL) {
                        M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            M2C_FIELD(arg0, void **, 0x10) = NULL;
        }
        if (arg0 != NULL) {
            M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_80223D10;
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

s32 fn_8007844C(void *arg0) {
    void *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x14) != 0U) {
        return 1;
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x10);
    if (M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), u8 (**)(void *), 0xC)(temp_r3) == 0) {
        return 0;
    }
    fn_800784B8(arg0);
    return 1;
}

void fn_800784B8(void *arg0) {
    s32 temp_r4;
    void *temp_r3;

    temp_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0xC);
    if (temp_r4 <= -2) {
        M2C_FIELD(arg0, s32 *, 0x14) = fn_80014298(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0xC));
    } else if (temp_r4 >= 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = fn_8009AA38(M2C_FIELD(arg0, void **, 0x10));
    }
    temp_r3 = fn_8007354C(M2C_FIELD(arg0, s32 *, 0x14));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(temp_r3, f32 *, 4);
    }
}

#pragma push
#pragma peephole off
void *fn_80078530(void *arg0, void *arg1) {
    s32 *sp8;
    s32 *temp_r4;

    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_80351968;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_80223CCC;
    M2C_FIELD(arg0, void **, 0xC) = arg1;
    fn_8001FCC0(&sp8, M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 8), &lbl_80223D10, arg0);
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_80223D10;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 **, 0x10) = sp8;
    temp_r4 = M2C_FIELD(arg0, s32 **, 0x10);
    if (temp_r4 != NULL) {
        *temp_r4 += 1;
    }
    if (sp8 != NULL) {
        M2C_FIELD(sp8, s32 *, 0) -= 1;
        if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp8, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    sp8 = NULL;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    /* draft: did not compile: fn_800716AC(arg0 + 0x20); */
    /* draft: did not compile: fn_800716AC(arg0 + 0x4C); */
    return arg0;
}
#pragma pop

void *fn_80078624(void *arg0, s16 arg1) {
    void *temp_r3;
    void *temp_r4;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_80223CCC;
        if (0 /* draft: did not compile */) {
            temp_r4 = M2C_FIELD(arg0, void **, 0x10);
            if (temp_r4 != NULL) {
                M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
                if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                    temp_r3 = M2C_FIELD(arg0, void **, 0x10);
                    if (temp_r3 != NULL) {
                        M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            M2C_FIELD(arg0, void **, 0x10) = NULL;
        }
        if (arg0 != NULL) {
            M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_80223D10;
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

s32 fn_800786E4(void *arg0) {
    void *temp_r3;

    if (((u32) M2C_FIELD(arg0, u32 *, 0x14) != 0U) || ((u32) M2C_FIELD(arg0, u32 *, 0x18) != 0U) || ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U)) {
        return 1;
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x10);
    if (M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), u8 (**)(void *), 0xC)(temp_r3) == 0) {
        return 0;
    }
    fn_80078790(arg0);
    return 1;
}

s32 fn_80078768(s32 *arg0) {
    *arg0 |= 0x20000000;
    return 1;
}

s32 fn_8007877C(s32 *arg0) {
    *arg0 &= (u8)0xDFFFFFFF;
    return 1;
}

void fn_80078790(void *arg0) { } /* draft: stub */

void **fn_80078988(void **arg0, u32 arg1, u8 arg2) {
    u8 temp_r31;

    if (arg1 != 0U) {
        if ((arg1 > -2U) || ((u32) M2C_FIELD(*arg0, u32 *, 0) > (u32) (-2 - arg1))) {
            fn_8014F858(&__files + 0xA0, &lbl_80223D20, &__files);
            fn_8014BB10();
        }
        temp_r31 = M2C_FIELD(*arg0, u32 *, 0);
        fn_80012D5C(arg0, temp_r31 + arg1, 1);
        /* draft: did not compile: memset(M2C_FIELD(*arg0, s32 *, 0xC) + temp_r31, arg2, arg1); */
    }
    return arg0;
}

void *fn_80078A48(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80078CAC(void *arg0) {
    M2C_FIELD(arg0, s8 *, 4) = 0;
}
