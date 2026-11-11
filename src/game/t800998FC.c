/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_8008065C();
void *fn_80080738();
f32 fn_80080764();
M2C_UNK fn_80080698();
extern f32 lbl_80351B10;
extern f32 lbl_80351B14;
M2C_UNK method_setTTColSpacing(s32);
M2C_UNK fn_800A1720(s32, M2C_UNK);
void *get_up_vector_for_viewing_mtx(M2C_UNK);
M2C_UNK fn_80012CF8();
s32 fn_80080790(void *);
M2C_UNK fn_80084684(M2C_UNK *, s32, s32 *, void **);
void *fn_800A163C(void *, s32);
M2C_UNK fn_800A17A8(void *);
s32 strlen();
extern M2C_UNK lbl_801CB330;
extern M2C_UNK lbl_802C0270;
extern f32 lbl_80351B18;
extern f32 lbl_80351B1C;
M2C_UNK fn_8008313C(void **, void *, void **, void **);
f32 fn_8007119C();
M2C_UNK fn_800962A4(s32);
void *fn_800A4C60();
M2C_UNK PSVECAdd(f32 *, f32 *, f32 *);
M2C_UNK PSVECScale(f32 *, f32 *, f32);
M2C_UNK fn_800CC960(f32 *);
f32 PSVECMag(f32 *);
f64 Tan(f32, f32);
extern f32 lbl_80351B20;
extern f32 lbl_80351B24;
M2C_UNK fn_8003472C();
extern u8 lbl_8035056C;
M2C_UNK OSSetProgressiveMode(s32);
extern s8 lbl_8035056D;
s32 *fn_80013FB4(s32);
extern M2C_UNK lbl_801DB8B0;
extern M2C_UNK lbl_8022A404;
M2C_UNK fn_80005888(void *);
M2C_UNK fn_8009AB5C();
M2C_UNK fn_8009ABBC();
void *fn_80014298(s32, M2C_UNK *);
M2C_UNK fn_8009AA70();
M2C_UNK fn_8009AAF0();
extern M2C_UNK lbl_8022A3C0;

s32 scr_method_setTTPos(s32 arg0);
s32 scr_method_getTTPosX(s32 arg0);
s32 scr_method_getTTPosY(s32 arg0);
s32 scr_method_setTTTimer(s32 arg0);
s32 scr_method_setTTEffect(s32 arg0);
s32 scr_method_setTTColSpacing(s32 arg0);
s32 scr_method_setTTRowSpacing(s32 arg0);
s32 scr_method_setTTOrder(s32 arg0);
s32 scr_method_showTT(s32 arg0);
s32 scr_method_hideTT(s32 arg0);
s32 scr_method_destroyTT(void *arg0);
s32 scr_ShowTextTelop(void *arg0);
void fn_80099F64(void *arg0, void *arg1);
s32 fn_8009A010(s32 arg0, s32 arg1);
void scr_method_getZoomedCamPosX(void);
void scr_method_getZoomedCamPosY(void);
void scr_method_getZoomedCamPosZ(void);
s32 fn_8009A198(s32 arg0, s32 arg1);
void scr_method_getScreenCenterPosX(void);
void scr_method_getScreenCenterPosY(void);
void scr_method_getScreenCenterPosZ(void);
s32 scr_IsProgressiveQueryNeeded(s32 arg0);
s32 scr_SetProgressiveMode(s32 arg0);
void *fn_8009A314(void *arg0, s32 arg1);
void *fn_8009A49C(void *arg0, s16 arg1);
s32 fn_8009A594(void *arg0);
void fn_8009A60C(void *arg0);
u32 fn_8009A8A8(void *arg0, s32 arg1);
u32 fn_8009A8E0(void *arg0, s32 arg1, s32 arg2);
u32 fn_8009A944(void *arg0, s32 arg1, s32 arg2);
u32 fn_8009A9AC(void *arg0, s32 arg1, s32 arg2);
u32 fn_8009AA14(void *arg0);

s32 scr_method_setTTPos(s32 arg0) {
    f32 temp_f30;
    f32 temp_f31;
    void *temp_r3;

    temp_f31 = fn_80080764(arg0);
    temp_f30 = fn_80080764((long)(0));
    temp_r3 = fn_80080738(arg0);
    M2C_FIELD(temp_r3, f32 *, 0x44) = temp_f30;
    M2C_FIELD(temp_r3, f32 *, 0x40) = temp_f31;
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getTTPosX(s32 arg0) {
    f32 sp8;
    void *temp_r3;

    temp_r3 = fn_80080738((long)(0));
    if (&sp8 != NULL) {
        sp8 = M2C_FIELD(temp_r3, f32 *, 0x40);
    }
    fn_80080698(arg0, sp8);
    return 0;
}

s32 scr_method_getTTPosY(s32 arg0) {
    f32 sp8;
    void *temp_r3;

    temp_r3 = fn_80080738((long)(0));
    if (&sp8 != NULL) {
        sp8 = M2C_FIELD(temp_r3, f32 *, 0x44);
    }
    fn_80080698(arg0, sp8);
    return 0;
}

s32 scr_method_setTTTimer(s32 arg0) {
    f32 temp_f31;
    void *temp_r3;

    temp_f31 = fn_80080764((long)(0));
    temp_r3 = fn_80080738(arg0);
    if (temp_f31 < lbl_80351B10) {
        M2C_FIELD(temp_r3, s32 *, 0x58) = -1;
    } else {
        M2C_FIELD(temp_r3, s32 *, 0x58) = (s32) (lbl_80351B14 * temp_f31);
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setTTEffect(s32 arg0) {
    void *temp_r31;

    temp_r31 = fn_80080738((long)(0));
    M2C_FIELD(fn_80080738(arg0), void **, 0x74) = temp_r31;
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setTTColSpacing(s32 arg0) {
    s32 temp_r31;

    /* draft: did not compile: temp_r31 = fn_80080738((long)(0)); */
    fn_80080738(arg0);
    method_setTTColSpacing(temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setTTRowSpacing(s32 arg0) {
    void *temp_r31;

    temp_r31 = fn_80080738();
    M2C_FIELD(fn_80080738(arg0), void **, 0x78) = temp_r31;
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setTTOrder(s32 arg0) {
    void *temp_r31;
    void *temp_r3;

    temp_r31 = fn_80080738();
    temp_r3 = fn_80080738(arg0);
    if (0 /* draft: did not compile */) {
        M2C_FIELD(temp_r3, void **, 0x80) = temp_r31;
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_showTT(s32 arg0) {
    void *temp_r3;

    temp_r3 = fn_80080738();
    M2C_FIELD(temp_r3, u8 *, 0x10) = 1U;
    if ((u8) M2C_FIELD(temp_r3, u8 *, 0x10) == 0) {
        M2C_FIELD(temp_r3, s32 *, 0x58) = -1;
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_hideTT(s32 arg0) {
    void *temp_r3;

    temp_r3 = fn_80080738();
    M2C_FIELD(temp_r3, u8 *, 0x10) = 0U;
    if ((u8) M2C_FIELD(temp_r3, u8 *, 0x10) == 0) {
        M2C_FIELD(temp_r3, s32 *, 0x58) = -1;
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_destroyTT(void *arg0) {
    s32 sp8;
    s32 sp18;
    u8 sp14;
    s32 sp10;
    s32 spC;
    s32 temp_r31;
    void *temp_r5;

    /* draft: did not compile: temp_r31 = fn_80080738(); */
    temp_r5 = M2C_FIELD(arg0, void **, 0x2E0);
    sp14 = sp8;
    sp18 = temp_r31;
    spC = (s32) sp14;
    sp10 = temp_r31;
    /* draft: did not compile: fn_80099F64(M2C_FIELD(temp_r5, s32 *, 0x38) + 0x28C, &spC, temp_r5); */
    fn_800A1720(temp_r31, 1);
    fn_8008065C(arg0, 0);
    return 0;
}

#pragma push
#pragma optimize_for_size on
s32 scr_ShowTextTelop(void *arg0) {
    s32 sp24;
    s32 sp20;
    void *sp10;
    s32 spC;
    M2C_UNK sp8;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    s32 temp_r25;
    s32 temp_r26;
    s32 temp_r27;
    s32 temp_r28;
    s32 temp_r31;
    s32 temp_r4;
    void *temp_r5;
    void *temp_r6;
    void *var_r30;

    temp_f29 = fn_80080764((long)(0));
    temp_f30 = fn_80080764(arg0);
    temp_f31 = fn_80080764(arg0);
    /* draft: did not compile: temp_r26 = fn_80080738(arg0); */
    /* draft: did not compile: temp_r27 = fn_80080738(arg0); */
    /* draft: did not compile: temp_r31 = fn_80080738(arg0); */
    /* draft: did not compile: temp_r28 = fn_80080738(arg0); */
    temp_r25 = fn_80080790(arg0);
    var_r30 = get_up_vector_for_viewing_mtx(0x88);
    if (var_r30 != NULL) {
        var_r30 = fn_800A163C(M2C_FIELD(arg0, void **, 0x2E0), M2C_FIELD(&lbl_802C0270, s32 *, 8));
    }
    /* draft: did not compile: fn_80012CF8(var_r30 + 0x50, temp_r25, strlen(temp_r25)); */
    fn_800A17A8(var_r30);
    sp24 = temp_r26 ^ 0x80000000;
    sp20 = 0x43300000;
    M2C_FIELD(var_r30, f32 *, 0x40) = (f32) temp_r27;
    M2C_FIELD(var_r30, f32 *, 0x44) = (f32) temp_r26;
    M2C_FIELD(var_r30, f32 *, 0x48) = (f32) (lbl_80351B18 * temp_f31 * lbl_80351B1C);
    M2C_FIELD(var_r30, f32 *, 0x4C) = (f32) (lbl_80351B18 * temp_f30 * lbl_80351B1C);
    M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
    if (temp_f29 == lbl_80351B10) {
        M2C_FIELD(var_r30, s32 *, 0x58) = (s32) (lbl_80351B14 * temp_f29);
    }
    temp_r6 = &lbl_801CB330 + (temp_r28 * 4);
    temp_r5 = &lbl_801CB330 + (temp_r31 * 4);
    M2C_FIELD(var_r30, u8 *, 4) = (u8) M2C_FIELD(temp_r6, u8 *, 0);
    M2C_FIELD(var_r30, u8 *, 5) = (u8) M2C_FIELD(temp_r6, u8 *, 1);
    M2C_FIELD(var_r30, u8 *, 6) = (u8) M2C_FIELD(temp_r6, u8 *, 2);
    M2C_FIELD(var_r30, u8 *, 7) = (u8) M2C_FIELD(temp_r6, u8 *, 3);
    M2C_FIELD(var_r30, u8 *, 0xC) = (u8) M2C_FIELD(temp_r5, u8 *, 0);
    M2C_FIELD(var_r30, u8 *, 0xD) = (u8) M2C_FIELD(temp_r5, u8 *, 1);
    M2C_FIELD(var_r30, u8 *, 0xE) = (u8) M2C_FIELD(temp_r5, u8 *, 2);
    M2C_FIELD(var_r30, u8 *, 0xF) = (u8) M2C_FIELD(temp_r5, u8 *, 3);
    M2C_FIELD(var_r30, u8 *, 0x10) = 1U;
    if ((u8) M2C_FIELD(var_r30, u8 *, 0x10) == 0) {
        M2C_FIELD(var_r30, s32 *, 0x58) = -1;
    }
    sp10 = var_r30;
    temp_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), s32 *, 0x38);
    spC = temp_r4 + 0x290;
    fn_80084684(&sp8, temp_r4 + 0x28C, &spC, &sp10);
    fn_8008065C(arg0, var_r30);
    return 0;
}
#pragma pop

void fn_80099F64(void *arg0, void *arg1) {
    void *sp10;
    void *spC;
    void *sp8;
    u32 temp_r31;
    u32 temp_r4;
    void *var_r3;
    void *var_r6;

    /* draft: did not compile: temp_r31 = arg0 + 4; */
    var_r6 = M2C_FIELD(arg0, void **, 8);
loop_8:
    if (0 /* draft: did not compile */) {
        temp_r4 = M2C_FIELD(arg1, u32 *, 4);
        if ((u32) M2C_FIELD(var_r6, u32 *, 8) == temp_r4) {
            var_r3 = M2C_FIELD(var_r6, void **, 4);
loop_5:
            if (0 /* draft: did not compile */) {
                if ((u32) M2C_FIELD(var_r3, u32 *, 8) == temp_r4) {
                    var_r3 = M2C_FIELD(var_r3, void **, 4);
                    goto loop_5;
                }
            }
            sp8 = var_r3;
            spC = var_r6;
            fn_8008313C(&sp10, arg0, &spC, &sp8);
            var_r6 = sp10;
            if (0 /* draft: did not compile */) {
                goto block_7;
            }
        } else {
block_7:
            var_r6 = M2C_FIELD(var_r6, void **, 4);
            goto loop_8;
        }
    }
}

s32 fn_8009A010(s32 arg0, s32 arg1) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f31;
    void *temp_r3;

    temp_f30 = fn_80080764();
    fn_800962A4(arg0);
    temp_r3 = fn_800A4C60();
    sp20 = M2C_FIELD(temp_r3, f32 *, 0xC);
    sp24 = M2C_FIELD(temp_r3, f32 *, 0x1C);
    sp28 = M2C_FIELD(temp_r3, f32 *, 0x2C);
    sp14 = M2C_FIELD(temp_r3, f32 *, 8);
    sp18 = M2C_FIELD(temp_r3, f32 *, 0x18);
    sp1C = M2C_FIELD(temp_r3, f32 *, 0x28);
    sp8 = M2C_FIELD(temp_r3, f32 *, 4);
    spC = M2C_FIELD(temp_r3, f32 *, 0x14);
    sp10 = M2C_FIELD(temp_r3, f32 *, 0x24);
    temp_f31 = PSVECMag(&sp8);
    temp_f30_2 = (f32) Tan(temp_f30 * lbl_80351B20 * lbl_80351B24, lbl_80351B20);
    fn_800CC960(&sp14);
    PSVECScale(&sp14, &sp14, (temp_f31 / temp_f30_2) * fn_8007119C());
    PSVECAdd(&sp20, &sp14, &sp20);
    fn_80080698(arg0, (&sp20)[arg1]);
    return 0;
}

void scr_method_getZoomedCamPosX(void) {
    fn_8009A010((long)(0), (long)(0));
}

void scr_method_getZoomedCamPosY(void) {
    fn_8009A010((long)(1), (long)(0));
}

void scr_method_getZoomedCamPosZ(void) {
    fn_8009A010((long)(2), (long)(0));
}

s32 fn_8009A198(s32 arg0, s32 arg1) {
    void *temp_r4;

    fn_800962A4((long)(0));
    /* draft: did not compile: temp_r4 = fn_800A4C60() + (arg1 * 0x10); */
    fn_80080698(arg0, temp_r4, M2C_FIELD(temp_r4, f32 *, 0xC));
    return 0;
}

void scr_method_getScreenCenterPosX(void) {
    fn_8009A198((long)(0), (long)(0));
}

void scr_method_getScreenCenterPosY(void) {
    fn_8009A198((long)(1), (long)(0));
}

void scr_method_getScreenCenterPosZ(void) {
    fn_8009A198((long)(2), (long)(0));
}

s32 scr_IsProgressiveQueryNeeded(s32 arg0) {
    if ((u8) lbl_8035056C == 0) {
        fn_8003472C();
    }
    fn_8008065C(arg0, lbl_8035056C);
    return 0;
}

s32 scr_SetProgressiveMode(s32 arg0) {
    s32 temp_r3;

    lbl_8035056C = 0;
    /* draft: did not compile: temp_r3 = fn_80080738(); */
    OSSetProgressiveMode(temp_r3 != 0);
    lbl_8035056D = temp_r3 != 0;
    fn_8003472C();
    fn_8008065C(arg0, 0);
    return 0;
}

void *fn_8009A314(void *arg0, s32 arg1) {
    s32 *sp8;
    s32 *temp_r3;
    s32 *temp_r4;
    s32 *var_r4;

    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_801DB8B0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_8022A404;
    M2C_FIELD(arg0, s32 **, 0xC) = NULL;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    var_r4 = get_up_vector_for_viewing_mtx((long)(0x2C));
    var_r4 = var_r4 == NULL ? var_r4 : fn_80013FB4(arg1);
    sp8 = var_r4;
    if (var_r4 != NULL) {
        *var_r4 += 1;
    }
    if (0 /* draft: did not compile */) {
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) += 1;
        }
        temp_r4 = M2C_FIELD(arg0, s32 **, 0xC);
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, s32 *, 0) -= 1;
            if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                temp_r3 = M2C_FIELD(arg0, s32 **, 0xC);
                if (temp_r3 != NULL) {
                    M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
        }
        M2C_FIELD(arg0, s32 **, 0xC) = sp8;
    }
    if (sp8 != NULL) {
        M2C_FIELD(sp8, s32 *, 0) -= 1;
        if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp8, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    sp8 = NULL;
    return arg0;
}

void *fn_8009A49C(void *arg0, s16 arg1) {
    void *temp_r3;
    void *temp_r4;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_8022A404;
        if (0 /* draft: did not compile */) {
            /* draft: did not compile: fn_8009ABBC(arg0 + 0x24, 0); */
        }
        if (0 /* draft: did not compile */) {
            /* draft: did not compile: fn_8009AB5C(arg0 + 0x14, 0); */
        }
        if (0 /* draft: did not compile */) {
            temp_r4 = M2C_FIELD(arg0, void **, 0xC);
            if (temp_r4 != NULL) {
                M2C_FIELD(temp_r4, s32 *, 0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0) - 1);
                if ((s32) M2C_FIELD(temp_r4, s32 *, 0) == 0) {
                    temp_r3 = M2C_FIELD(arg0, void **, 0xC);
                    if (temp_r3 != NULL) {
                        M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
            }
            M2C_FIELD(arg0, void **, 0xC) = NULL;
        }
        if (arg0 != NULL) {
            M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_801DB8B0;
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

s32 fn_8009A594(void *arg0) {
    void *temp_r3;

    if (M2C_FIELD(arg0, u16 *, 6) & 1) {
        return 1;
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0xC);
    if (M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), u8 (**)(void *), 0xC)(temp_r3) == 0) {
        return 0;
    }
    fn_8009A60C(arg0);
    M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) | 1);
    return 1;
}

void fn_8009A60C(void *arg0) { } /* draft: stub */

u32 fn_8009A8A8(void *arg0, s32 arg1) { return 0; } /* draft: stub */

u32 fn_8009A8E0(void *arg0, s32 arg1, s32 arg2) { return 0; } /* draft: stub */

u32 fn_8009A944(void *arg0, s32 arg1, s32 arg2) { return 0; } /* draft: stub */

u32 fn_8009A9AC(void *arg0, s32 arg1, s32 arg2) { return 0; } /* draft: stub */

u32 fn_8009AA14(void *arg0) {
    u32 *temp_r3_2;
    u32 temp_r3;

    temp_r3_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), u32 **, 4);
    if ((temp_r3_2 == NULL) || (temp_r3 = *temp_r3_2, ((temp_r3 == 0U) != 0))) {
        return 0U;
    }
    return temp_r3;
}
