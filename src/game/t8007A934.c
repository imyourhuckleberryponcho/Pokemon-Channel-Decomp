/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern u8 lbl_8034EB4C;
extern u8 lbl_8034EB4D;
void *get_up_vector_for_viewing_mtx(M2C_UNK);
M2C_UNK fn_80021878(void *, s32);
M2C_UNK fn_80030184();
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_80223DB4;
extern M2C_UNK lbl_80223DD0;
extern M2C_UNK lbl_802C44A8;
extern void *lbl_80350664;
extern s32 lbl_80350668;
extern s32 lbl_8035066C;
extern s32 lbl_8034EB50;
extern s32 lbl_80350660;
extern M2C_UNK lbl_802C4958;
M2C_UNK ResetSystem();
s32 PadGetResetSwitch();
M2C_UNK fn_80102CE8();
extern s32 lbl_8031EA64;
extern u8 lbl_8034EB58;
extern M2C_UNK lbl_80350670;
extern u8 lbl_80350674;
extern u8 lbl_80350675;
s32 fn_80135F40(void *, s32);
extern M2C_UNK lbl_802C4980;
extern M2C_UNK lbl_802C4998;
extern f32 lbl_8034EB60;
extern f32 lbl_8034EB5C;
s32 SIProbe();
extern M2C_UNK lbl_802C4968;
extern f32 lbl_80351978;

void fn_8007A934(void *arg0, void *arg1, s32 *arg2);
void *fn_8007A9F0(void *arg0, s32 arg1, u8 arg2, u8 arg3, s32 arg4, M2C_UNK arg_sp0);
void fn_8007AAF8(void *arg0);
void fn_8007AB50(u32 *arg0);
u8 fn_8007ABC0(u32 arg0, u32 arg1);
void fn_8007AD98(void *arg0);
void fn_8007AE38(void *arg0);
void *fn_8007AEC4(u32 arg0, u32 arg1);
void fn_8007AF20();
void fn_8007AF58(void);
s32 fn_8007AFE0(s32 *arg0);
void fn_8007B034(s32 *arg0);
void fn_8007B070(void *arg0);
void fn_8007B0B4(void);
void *fn_8007B144(u32 arg0);
void fn_8007B1B0(void);
void fn_8007B1C0(void);
void fn_8007B1D0(void);
void fn_8007B1EC(u8 arg0, M2C_UNK arg_sp0);
void EnableReset(void);
void DisableReset(void);
s32 fn_8007B37C(s32 arg0);
s32 fn_8007B3F8(s32 arg0);
f32 fn_8007B440(s32 arg0);
f32 fn_8007B470(s32 arg0);
s32 fn_8007B4A0(u8 arg0);
s32 fn_8007B51C(u8 arg0);
s32 fn_8007B5B0(u8 arg0);
s32 fn_8007B608(u8 arg0);
f32 fn_8007B69C(u8 arg0);
f32 fn_8007B6F4(u8 arg0);
f32 fn_8007B74C(u8 arg0);

void fn_8007A934(void *arg0, void *arg1, s32 *arg2) {
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
        /* draft: did not compile: M2C_FIELD(arg0, void **, 0) = fn_8007A9F0(arg1, var_r9, var_r5, var_r6); */
        M2C_FIELD(arg0, u8 *, 4) = (u8) lbl_8034EB4C;
        return;
    }
    M2C_FIELD(arg0, void **, 0) = var_r8;
    M2C_FIELD(arg0, u8 *, 4) = (u8) lbl_8034EB4D;
}

void *fn_8007A9F0(void *arg0, s32 arg1, u8 arg2, u8 arg3, s32 arg4, M2C_UNK arg_sp0) {
    void *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0) > -2U) {
        fn_8014F858(&__files + 0xA0, &lbl_80223DD0, &__files);
        fn_8014BB10();
    }
    temp_r3 = get_up_vector_for_viewing_mtx(0x18);
    if (temp_r3 == NULL) {
        fn_8014F858(&__files + 0xA0, &lbl_80223DB4, &__files);
        fn_8014BB10();
    }
    /* draft: did not compile: fn_80030184(arg0, temp_r3 + 0xC, arg4); */
    M2C_FIELD(temp_r3, s32 *, 4) = 0;
    M2C_FIELD(temp_r3, s32 *, 0) = 0;
    M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg1 | (M2C_FIELD(temp_r3, s32 *, 8) & 1));
    if (arg2 != 0) {
        M2C_FIELD(arg1, void **, 0) = temp_r3;
    } else {
        M2C_FIELD(arg1, void **, 4) = temp_r3;
    }
    M2C_FIELD(arg0, u32 *, 0) = (u32) (M2C_FIELD(arg0, u32 *, 0) + 1);
    fn_80021878(temp_r3, M2C_FIELD(arg0, s32 *, 4));
    if (arg3 != 0) {
        M2C_FIELD(arg0, void **, 0xC) = temp_r3;
    }
    return temp_r3;
}

void fn_8007AAF8(void *arg0) {
    s32 temp_r5;
    u32 temp_r6;
    u32 temp_r8;

    temp_r8 = M2C_FIELD(arg0, u32 *, 0);
    temp_r6 = temp_r8 >> 0xCU;
    temp_r5 = ((~((temp_r8 >> 4U) ^ (~(temp_r6 | temp_r6) + (temp_r8 >> 8U))) + (temp_r8 * 0x59)) % 299) * 4;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) *(&lbl_802C44A8 + temp_r5);
    /* draft: did not compile: *(&lbl_802C44A8 + temp_r5) = arg0; */
}

void fn_8007AB50(u32 *arg0) { } /* draft: stub */

u8 fn_8007ABC0(u32 arg0, u32 arg1) { return 0; } /* draft: stub */

void fn_8007AD98(void *arg0) { } /* draft: stub */

#pragma push
#pragma dont_inline on
void fn_8007AE38(void *arg0) {
    void *temp_r0;
    void *temp_r30;

    fn_8007ABC0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0));
    temp_r0 = M2C_FIELD(lbl_80350664, void **, 0x1C);
    temp_r30 = M2C_FIELD(lbl_80350664, void **, 0x18);
    if (temp_r0 != NULL) {
        fn_8007ABC0(0, 0);
        M2C_FIELD(lbl_80350664, void **, 0x18) = temp_r30;
        lbl_80350664 = temp_r0;
    } else {
        lbl_80350664 = temp_r30;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
#pragma pop

void *fn_8007AEC4(u32 arg0, u32 arg1) {
    u32 temp_r0;
    u8 var_r5;
    void *var_r6;
    void *var_r7;

    var_r6 = lbl_80350664;
    var_r7 = NULL;
loop_8:
    if (var_r6 != NULL) {
        temp_r0 = M2C_FIELD(var_r6, u32 *, 4);
        var_r5 = 0;
        if ((arg0 > temp_r0) || ((arg0 == temp_r0) && (arg1 >= (u32) M2C_FIELD(var_r6, u32 *, 0)))) {
            var_r5 = 1;
        }
        if (var_r5 == 0) {
            M2C_FIELD(var_r6, void **, 0x14) = var_r7;
            var_r7 = var_r6;
        }
        /* draft: did not compile: var_r6 = *(var_r6 + ((var_r5 * 4) + 0x18)); */
        goto loop_8;
    }
    return var_r7;
}

void fn_8007AF20() { } /* draft: stub */

void fn_8007AF58(void) {
    M2C_UNK *var_r3;
    s32 *var_r4;
    s32 var_ctr;
    s32 var_ctr_2;
    s32 var_r5;

    lbl_80350664 = 0;
    var_r3 = &lbl_802C44A8;
    var_r5 = 0;
    var_ctr = 0x25;
    do {
        M2C_FIELD(var_r3, s32 *, 0) = 0;
        var_r5 += 8;
        M2C_FIELD(var_r3, s32 *, 4) = 0;
        M2C_FIELD(var_r3, s32 *, 8) = 0;
        M2C_FIELD(var_r3, s32 *, 0xC) = 0;
        M2C_FIELD(var_r3, s32 *, 0x10) = 0;
        M2C_FIELD(var_r3, s32 *, 0x14) = 0;
        M2C_FIELD(var_r3, s32 *, 0x18) = 0;
        M2C_FIELD(var_r3, s32 *, 0x1C) = 0;
        var_r3 += 0x20;
        var_ctr -= 1;
    } while (var_ctr != 0);
    var_r4 = &lbl_802C44A8 + (var_r5 * 4);
    var_ctr_2 = 0x12B - var_r5;
    if (var_r5 < 0x12B) {
        do {
            *var_r4 = 0;
            var_r4 += 4;
            var_ctr_2 -= 1;
        } while (var_ctr_2 != 0);
    }
    lbl_80350668 = 0;
    lbl_8035066C = 0;
}

#pragma push
#pragma dont_inline on
s32 fn_8007AFE0(s32 *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = lbl_8034EB50;
    temp_r5 = lbl_80350660 + 1;
    lbl_8034EB50 = temp_r4 + 1;
    lbl_80350660 = temp_r5;
    *arg0 = temp_r4;
    /* draft: did not compile: fn_8007AAF8(temp_r4, temp_r5); */
    fn_8007AD98(arg0);
    return *arg0;
}
#pragma pop

void fn_8007B034(s32 *arg0) {
    fn_8007AB50((unsigned long *)(0));
    fn_8007AE38(arg0);
    *arg0 = 0;
}

#pragma push
#pragma dont_inline on
void fn_8007B070(void *arg0) {
    fn_8007AB50((unsigned long *)(0));
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 0x80);
    M2C_FIELD(arg0, void **, 0x10) = (void *) lbl_80350668;
    /* draft: did not compile: lbl_80350668 = arg0; */
}
#pragma pop

void fn_8007B0B4(void) {
    s32 temp_r4;
    void *temp_r30;
    void *var_r31;

loop_6:
    if ((void *) lbl_80350668 != NULL) {
        /* draft: did not compile: var_r31 = lbl_80350668; */
        lbl_80350668 = NULL;
loop_5:
        if (var_r31 != NULL) {
            temp_r4 = lbl_80350660;
            lbl_80350660 = temp_r4 - 1;
            temp_r30 = M2C_FIELD(var_r31, void **, 0x10);
            fn_8007AE38((void *)(var_r31));
            if (var_r31 != NULL) {
                M2C_FIELD(M2C_FIELD(var_r31, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK), 8)(var_r31, 1);
            }
            var_r31 = temp_r30;
            goto loop_5;
        }
        goto loop_6;
    }
}

void *fn_8007B144(u32 arg0) { } /* draft: stub */

void fn_8007B1B0(void) {
    lbl_8035066C += 1;
}

void fn_8007B1C0(void) {
    lbl_8035066C -= 1;
}

void fn_8007B1D0(void) {
    M2C_FIELD(&lbl_802C4958, s32 *, 0) = 0;
    M2C_FIELD(&lbl_802C4958, s32 *, 4) = 0;
    M2C_FIELD(&lbl_802C4958, s32 *, 8) = 0;
    M2C_FIELD(&lbl_802C4958, s32 *, 0xC) = 0;
}

void fn_8007B1EC(u8 arg0, M2C_UNK arg_sp0) {
    u32 temp_r0;
    void *temp_r23;
    void *temp_r25;

    if (lbl_80350675 == 0) {
        lbl_80350674 = 0;
        lbl_80350675 = 1;
    }
    fn_80102CE8();
    temp_r23 = &lbl_802C4958 + 0x28;
    temp_r25 = &lbl_802C4958 + 0x10;
    M2C_FIELD(&lbl_802C4958, u16 *, 0x10) = (u16) M2C_FIELD(&lbl_802C4958, u16 *, 0x28);
    M2C_FIELD(temp_r25, u16 *, 6) = (u16) M2C_FIELD(temp_r23, u16 *, 6);
    M2C_FIELD(temp_r25, u8 *, 2) = (u8) M2C_FIELD(temp_r23, u8 *, 2);
    M2C_FIELD(temp_r25, u16 *, 0xC) = (u16) M2C_FIELD(temp_r23, u16 *, 0xC);
    M2C_FIELD(temp_r25, u8 *, 3) = (u8) M2C_FIELD(temp_r23, u8 *, 3);
    M2C_FIELD(temp_r25, u8 *, 4) = (u8) M2C_FIELD(temp_r23, u8 *, 4);
    M2C_FIELD(temp_r25, u8 *, 8) = (u8) M2C_FIELD(temp_r23, u8 *, 8);
    M2C_FIELD(temp_r25, u8 *, 9) = (u8) M2C_FIELD(temp_r23, u8 *, 9);
    M2C_FIELD(temp_r25, u8 *, 0xA) = (u8) M2C_FIELD(temp_r23, u8 *, 0xA);
    M2C_FIELD(&lbl_80350670, s8 *, 1) = 0;
    M2C_FIELD(temp_r25, u8 *, 0xE) = (u8) M2C_FIELD(temp_r23, u8 *, 0xE);
    M2C_FIELD(&lbl_80350670, s8 *, 0) = 0;
    M2C_FIELD(temp_r25, u8 *, 0xF) = (u8) M2C_FIELD(temp_r23, u8 *, 0xF);
    M2C_FIELD(temp_r25, u8 *, 0x10) = (u8) M2C_FIELD(temp_r23, u8 *, 0x10);
    M2C_FIELD(&lbl_80350670, s8 *, 2) = 0;
    M2C_FIELD(temp_r25, u8 *, 0x14) = (u8) M2C_FIELD(temp_r23, u8 *, 0x14);
    M2C_FIELD(temp_r25, u8 *, 0x15) = (u8) M2C_FIELD(temp_r23, u8 *, 0x15);
    M2C_FIELD(temp_r25, u16 *, 0x12) = (u16) M2C_FIELD(temp_r23, u16 *, 0x12);
    M2C_FIELD(&lbl_80350670, s8 *, 3) = 0;
    M2C_FIELD(temp_r25, u8 *, 0x16) = (u8) M2C_FIELD(temp_r23, u8 *, 0x16);
    if (arg0 != 0) {
        if ((u32) (lbl_8031EA64 & 0x1600) != 0x1600) {
            M2C_FIELD(&lbl_802C4958, u32 *, 0) = 1U;
        } else if ((u32) M2C_FIELD(&lbl_802C4958, u32 *, 0) != 0U) {
            temp_r0 = M2C_FIELD(&lbl_802C4958, u32 *, 0) + 1;
            M2C_FIELD(&lbl_802C4958, u32 *, 0) = temp_r0;
            if (temp_r0 > 0x1EU) {
                lbl_80350674 = 1;
            }
        }
    }
    if (PadGetResetSwitch() != 0) {
        lbl_80350674 = 1;
    }
    if (((u8) lbl_8034EB58 != 0) && ((u8) lbl_80350674 != 0)) {
        ResetSystem();
    }
}

void EnableReset(void) {
    lbl_8034EB58 = 1;
}

void DisableReset(void) {
    lbl_8034EB58 = 0;
}

s32 fn_8007B37C(s32 arg0) {
    s32 temp_r3;
    s32 temp_r5;

    if ((u8) *(&lbl_80350670 + arg0) == 0) {
        temp_r5 = arg0 * 6;
        temp_r3 = fn_80135F40(&lbl_802C4980 + temp_r5, temp_r5);
        *(&lbl_80350670 + arg0) = 1;
        *(&lbl_802C4998 + (arg0 * 4)) = temp_r3;
    }
    return *(&lbl_802C4998 + (arg0 * 4));
}

s32 fn_8007B3F8(s32 arg0) {
    s32 var_r5;

    var_r5 = 0;
    if ((u32) (arg0 & 0xC000) == -0x4000U) {
        var_r5 = 0x04001000;
    } else {
        if (arg0 & 0x8000) {
            var_r5 = 0x01000100;
        }
        if (arg0 & 0x4000) {
            var_r5 = var_r5 | 0x02000000 | 0x200;
        }
    }
    return var_r5;
}

f32 fn_8007B440(s32 arg0) {
    return (f32) arg0 * lbl_8034EB60;
}

f32 fn_8007B470(s32 arg0) {
    return (f32) arg0 * lbl_8034EB5C;
}

s32 fn_8007B4A0(u8 arg0) {
    if ((u32) (SIProbe() + 0xFE000000) == 0U) {
        if (fn_8007B37C(arg0) == 0) {
            return fn_8007B3F8(*(&lbl_802C4980 + (arg0 * 6)));
        }
        return 0;
    }
    return *(&lbl_8031EA64 + (arg0 * 0x44));
}

s32 fn_8007B51C(u8 arg0) {
    s32 temp_r0;
    u16 temp_r4;

    if ((u32) (SIProbe() + 0xFE000000) == 0U) {
        if (fn_8007B37C(arg0) == 0) {
            temp_r0 = arg0 * 6;
            temp_r4 = *(&lbl_802C4980 + temp_r0);
            return fn_8007B3F8((long)(temp_r4 & (*(&lbl_802C4968 + temp_r0) ^ temp_r4)));
        }
        return 0;
    }
    return M2C_FIELD((&lbl_8031EA64 + (arg0 * 0x44)), s32 *, 8);
}

s32 fn_8007B5B0(u8 arg0) {
    if ((u32) (SIProbe() + 0xFE000000) == 0U) {
        return 0;
    }
    return M2C_FIELD((&lbl_8031EA64 + (arg0 * 0x44)), s32 *, 0xC);
}

s32 fn_8007B608(u8 arg0) {
    s32 temp_r0;
    u16 temp_r4;

    if ((u32) (SIProbe() + 0xFE000000) == 0U) {
        if (fn_8007B37C(arg0) == 0) {
            temp_r0 = arg0 * 6;
            temp_r4 = *(&lbl_802C4968 + temp_r0);
            return fn_8007B3F8((long)(temp_r4 & (temp_r4 ^ *(&lbl_802C4980 + temp_r0))));
        }
        return 0;
    }
    return M2C_FIELD((&lbl_8031EA64 + (arg0 * 0x44)), s32 *, 0x10);
}

f32 fn_8007B69C(u8 arg0) {
    if ((u32) (SIProbe() + 0xFE000000) == 0U) {
        return lbl_80351978;
    }
    return M2C_FIELD((&lbl_8031EA64 + (arg0 * 0x44)), f32 *, 0x38);
}

f32 fn_8007B6F4(u8 arg0) {
    if ((u32) (SIProbe() + 0xFE000000) == 0U) {
        return lbl_80351978;
    }
    return M2C_FIELD((&lbl_8031EA64 + (arg0 * 0x44)), f32 *, 0x3C);
}

f32 fn_8007B74C(u8 arg0) {
    if ((u32) (SIProbe() + 0xFE000000) == 0U) {
        return lbl_80351978;
    }
    return M2C_FIELD((&lbl_8031EA64 + (arg0 * 0x44)), f32 *, 0x30);
}
