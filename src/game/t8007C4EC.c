/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

f32 fn_8007BC24();
extern M2C_UNK lbl_80223DF0;
f32 fn_8007BCCC();
f32 fn_8007BD44();
s32 SIProbe();
u8 GetGlobalFlag(M2C_UNK);
extern f32 lbl_8034EB5C;
extern f32 lbl_8034EB60;
extern f32 lbl_80351998;
M2C_UNK fn_80005888(u32);
M2C_UNK fn_8007EB94(u32, M2C_UNK);
M2C_UNK fn_8007EC30(s32, M2C_UNK);
M2C_UNK PSMTXMultVec();
M2C_UNK PSVECScale(M2C_UNK *, M2C_UNK *, f32);
M2C_UNK HSD_AObjReqAnim(void *, f32);
void *HSD_AObjLoadDesc(void *, s32);
M2C_UNK HSD_AObjRemove(void *);
M2C_UNK HSD_AObjSetRate(f32);
M2C_UNK HSD_JObjSetupMatrixSub(void *);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_8034EB68;
extern M2C_UNK lbl_8034EB70;
extern f32 lbl_803519A8;
extern f32 lbl_803519BC;
extern f32 lbl_803519C0;
M2C_UNK fn_8007E9D0();
M2C_UNK fn_8007EB58();
M2C_UNK fn_8007EBF4();
M2C_UNK fn_8007E31C();
M2C_UNK PSVECSubtract(f32 *, f32 *, f32 *);
extern f32 lbl_803519B8;
extern f32 lbl_803519C4;
extern f32 lbl_803519C8;
extern f32 lbl_803519CC;
extern f32 lbl_803519D0;
extern f32 lbl_803519D4;
extern f32 lbl_803519D8;
M2C_UNK fn_8007ED40();
f32 PSVECMag(f32 *, f32, f32, f32, f32);
extern M2C_UNK lbl_801CDAC8;
M2C_UNK fn_8007EC90(M2C_UNK *, M2C_UNK *, s32 *, M2C_UNK **);
M2C_UNK fn_8007EE30(M2C_UNK *);
f32 PSVECSquareDistance(s32, s32);
void *get_up_vector_for_viewing_mtx(s32);
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_80223E48;
extern M2C_UNK lbl_80223E68;
extern M2C_UNK lbl_80223E84;

f32 PadGetStickY(s32 arg0);
f32 PadGetSubStickX(s32 arg0);
f32 PadGetSubStickY(s32 arg0);
void fn_8007C618();
s32 PadGetDevClass(void);
s32 fn_8007C844(void);
void PadSetXlatRatio(f32 farg0);
void PadSetNormalXlatRatio(f32 farg0);
void fn_8007C884(void *arg0);
u32 fn_8007C8AC(u32 arg0, s16 arg1);
void fn_8007C92C();
void fn_8007C9E4(s32 arg0, void *arg1, f32 farg0, f32 farg1);
void fn_8007CB84(void *arg0, s32 arg1);
void fn_8007CBE0(void *arg0, void *arg1);
s32 fn_8007CC38(void *arg0, u8 arg1, f32 farg0, f32 farg1, f32 farg2);
void fn_8007CFA8(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void fn_8007D1B0(f32 *arg0, f32 *arg1, void *arg2, s32 arg3, f32 farg0);
void fn_8007D3E8(void *arg0, f32 farg0);
void fn_8007D660(void *arg0, void *arg1, void *arg2, f32 farg0);
void fn_8007D7FC(void *arg0, s32 arg1, void *arg2, void *arg3, f32 *arg4);
void fn_8007D9A4(void *arg0, void **arg1, u32 *arg2);
void fn_8007DD80(void *arg0, u32 arg1, u32 arg2, u32 arg3, M2C_UNK arg_sp0);

f32 PadGetStickY(s32 arg0) {
    f32 var_f31;

    var_f31 = fn_8007BC24();
    if ((s32) *(&lbl_80223DF0 + (arg0 * 4)) >= 0) {
        var_f31 += fn_8007BC24();
    }
    return var_f31;
}

f32 PadGetSubStickX(s32 arg0) {
    f32 var_f31;

    var_f31 = fn_8007BCCC();
    if ((s32) *(&lbl_80223DF0 + (arg0 * 4)) >= 0) {
        var_f31 += fn_8007BCCC();
    }
    return var_f31;
}

f32 PadGetSubStickY(s32 arg0) {
    f32 var_f31;

    var_f31 = fn_8007BD44();
    if ((s32) *(&lbl_80223DF0 + (arg0 * 4)) >= 0) {
        var_f31 += fn_8007BD44();
    }
    return var_f31;
}

void fn_8007C618() { } /* draft: stub */

s32 PadGetDevClass(void) {
    s32 temp_r3;

    temp_r3 = SIProbe();
    switch (temp_r3) {                              /* irregular */
    case 0x9000000:
    case 0x5000000:
    case 0x8B100000:
    case 0x88000000:
        return 1;
    case 0x20000:
    case 0x8200000:
        return 2;
    case 0x2000000:
        return 3;
    case 0x8000000:
        return 4;
    case 0x10000:
        return 5;
    case 0x40000:
        return 6;
    case 0x8:
        return 0;
    case 0x40:
        return 7;
    case 0x80:
        return -1;
    default:
        return 0;
    }
}

s32 fn_8007C844(void) {
    return GetGlobalFlag(0x20C) == 0;
}

void PadSetXlatRatio(f32 farg0) {
    lbl_8034EB5C = farg0;
}

void PadSetNormalXlatRatio(f32 farg0) {
    lbl_8034EB60 = farg0;
}

void fn_8007C884(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_80351998;
}

u32 fn_8007C8AC(u32 arg0, s16 arg1) {
    s32 temp_cr0_eq;

    if (arg0 != 0U) {
        if (((arg0 + 0xC) != 0) && ((arg0 + 0xC) != 0)) {
            fn_8007EC30(arg0 + 0xC, 0);
        }
        temp_cr0_eq = arg0 == 0U;
        if ((temp_cr0_eq == 0) && (temp_cr0_eq == 0)) {
            fn_8007EB94(arg0, 0);
        }
        if (arg1 > 0) {
            fn_80005888(arg0);
        }
    }
    return arg0;
}

void fn_8007C92C() { } /* draft: stub */

void fn_8007C9E4(s32 arg0, void *arg1, f32 farg0, f32 farg1) {
    u32 sp18;
    s32 sp14;
    M2C_UNK sp8;
    f32 var_f31;
    s32 temp_cr0_eq;
    s32 temp_r3;
    s32 temp_r4;
    u8 var_r3;
    void *temp_r27;
    s32 temp_r4_2;
    void *temp_r28;

    var_f31 = lbl_803519BC;
loop_1:
    /* draft: did not compile: fn_8007CB84(arg0, 0); */
    sp18 = 0;
    temp_r4 = M2C_FIELD(arg1, s32 *, 0xC);
    sp14 = temp_r4;
    temp_r27 = HSD_AObjLoadDesc(arg1, temp_r4);
    HSD_AObjSetRate(var_f31);
    HSD_AObjReqAnim(temp_r27, lbl_803519A8);
loop_2:
    HSD_AObjInterpretAnim(temp_r27, &sp8, fn_8007C92C);
    temp_r3 = M2C_FIELD(temp_r27, s32 *, 0);
    if (!(temp_r3 & 0x04000000) && !(temp_r3 & 0x40000000)) {
        if (sp18 != 0) {
            temp_r28 = M2C_FIELD(temp_r27, void **, 0x18);
            temp_cr0_eq = temp_r28 == NULL;
            if (temp_cr0_eq == 0) {
                if (temp_cr0_eq == 0) {
                    if (temp_cr0_eq != 0) {
                        __assert(&lbl_8034EB68, 0x25D, &lbl_8034EB70);
                    }
                    temp_r4_2 = M2C_FIELD(temp_r28, s32 *, 0x14);
                    var_r3 = 0;
                    if (!(temp_r4_2 & 0x800000) && (temp_r4_2 & 0x40)) {
                        var_r3 = 1;
                    }
                    if (var_r3 != 0) {
                        HSD_JObjSetupMatrixSub(temp_r28);
                    }
                }
                /* draft: did not compile: PSMTXMultVec(M2C_FIELD(temp_r27, void **, 0x18) + 0x44, &sp8, &sp8); */
            }
        }
        sp18 = 0;
        PSVECScale(&sp8, &sp8, (s32)farg0);
        /* draft: did not compile: fn_8007CBE0(arg0, &sp8); */
        goto loop_2;
    }
    HSD_AObjRemove(temp_r27);
    if (0 /* draft: did not compile */) {
        var_f31 = lbl_803519C0;
        goto loop_1;
    }
}

void fn_8007CB84(void *arg0, s32 arg1) {
    fn_8007EB58();
    /* draft: did not compile: fn_8007EBF4(arg0 + 0xC); */
    if (arg1 > 0) {
        /* draft: did not compile: fn_8007E9D0(arg0 + 0xC, arg1); */
    }
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_80351998;
}

void fn_8007CBE0(void *arg0, void *arg1) { } /* draft: stub */

s32 fn_8007CC38(void *arg0, u8 arg1, f32 farg0, f32 farg1, f32 farg2) { return 0; } /* draft: stub */

void fn_8007CFA8(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) -((lbl_803519C4 * M2C_FIELD(arg4, f32 *, 0)) - (M2C_FIELD(arg3, f32 *, 0) + ((lbl_803519C4 * M2C_FIELD(arg1, f32 *, 0)) + M2C_FIELD(arg2, f32 *, 0))));
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) -((lbl_803519C4 * M2C_FIELD(arg4, f32 *, 4)) - (M2C_FIELD(arg3, f32 *, 4) + ((lbl_803519C4 * M2C_FIELD(arg1, f32 *, 4)) + M2C_FIELD(arg2, f32 *, 4))));
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) -((lbl_803519C4 * M2C_FIELD(arg4, f32 *, 8)) - (M2C_FIELD(arg3, f32 *, 8) + ((lbl_803519C4 * M2C_FIELD(arg1, f32 *, 8)) + M2C_FIELD(arg2, f32 *, 8))));
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) ((lbl_803519C8 * M2C_FIELD(arg4, f32 *, 0)) + (((lbl_803519CC * M2C_FIELD(arg1, f32 *, 0)) - (lbl_803519C4 * M2C_FIELD(arg2, f32 *, 0))) - M2C_FIELD(arg3, f32 *, 0)));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) ((lbl_803519C8 * M2C_FIELD(arg4, f32 *, 4)) + (((lbl_803519CC * M2C_FIELD(arg1, f32 *, 4)) - (lbl_803519C4 * M2C_FIELD(arg2, f32 *, 4))) - M2C_FIELD(arg3, f32 *, 4)));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) ((lbl_803519C8 * M2C_FIELD(arg4, f32 *, 8)) + (((lbl_803519CC * M2C_FIELD(arg1, f32 *, 8)) - (lbl_803519C4 * M2C_FIELD(arg2, f32 *, 8))) - M2C_FIELD(arg3, f32 *, 8)));
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) -((lbl_803519D0 * M2C_FIELD(arg4, f32 *, 0)) - ((lbl_803519C8 * M2C_FIELD(arg3, f32 *, 0)) + ((lbl_803519D0 * M2C_FIELD(arg1, f32 *, 0)) + (lbl_803519C8 * M2C_FIELD(arg2, f32 *, 0)))));
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) -((lbl_803519D0 * M2C_FIELD(arg4, f32 *, 4)) - ((lbl_803519C8 * M2C_FIELD(arg3, f32 *, 4)) + ((lbl_803519D0 * M2C_FIELD(arg1, f32 *, 4)) + (lbl_803519C8 * M2C_FIELD(arg2, f32 *, 4)))));
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) -((lbl_803519D0 * M2C_FIELD(arg4, f32 *, 8)) - ((lbl_803519C8 * M2C_FIELD(arg3, f32 *, 8)) + ((lbl_803519D0 * M2C_FIELD(arg1, f32 *, 8)) + (lbl_803519C8 * M2C_FIELD(arg2, f32 *, 8)))));
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) ((lbl_803519D0 * M2C_FIELD(arg4, f32 *, 0)) + -((lbl_803519C4 * M2C_FIELD(arg3, f32 *, 0)) - ((lbl_803519D4 * M2C_FIELD(arg1, f32 *, 0)) - (lbl_803519D8 * M2C_FIELD(arg2, f32 *, 0)))));
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) ((lbl_803519D0 * M2C_FIELD(arg4, f32 *, 4)) + -((lbl_803519C4 * M2C_FIELD(arg3, f32 *, 4)) - ((lbl_803519D4 * M2C_FIELD(arg1, f32 *, 4)) - (lbl_803519D8 * M2C_FIELD(arg2, f32 *, 4)))));
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) ((lbl_803519D0 * M2C_FIELD(arg4, f32 *, 8)) + -((lbl_803519C4 * M2C_FIELD(arg3, f32 *, 8)) - ((lbl_803519D4 * M2C_FIELD(arg1, f32 *, 8)) - (lbl_803519D8 * M2C_FIELD(arg2, f32 *, 8)))));
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg2, f32 *, 8);
}

void fn_8007D1B0(f32 *arg0, f32 *arg1, void *arg2, s32 arg3, f32 farg0) { } /* draft: stub */

void fn_8007D3E8(void *arg0, f32 farg0) {
    s32 sp34;
    s32 spC;
    f32 sp64;
    u32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    u32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    M2C_UNK sp30;
    M2C_UNK sp2C;
    M2C_UNK *sp28;
    M2C_UNK sp24;
    M2C_UNK *sp20;
    s32 sp1C;
    M2C_UNK *sp18;
    s32 sp14;
    M2C_UNK sp10;
    u8 sp8;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f3;
    f32 temp_f4;
    s32 temp_r0;
    s32 temp_r3_2;
    s32 var_r31;
    u32 var_r30;
    void *temp_r3;
    void *temp_r5;

    fn_8007EE30(&sp2C);
    temp_r3 = M2C_FIELD(arg0, void **, 8);
    temp_f30 = lbl_803519A8;
    var_r30 = 0U;
    var_r31 = 0;
    temp_f31 = lbl_803519B8;
    temp_f28 = lbl_80351998;
    sp50 = M2C_FIELD(temp_r3, f32 *, 0) + ((temp_f30 * M2C_FIELD(temp_r3, f32 *, 0xC)) + ((temp_f30 * M2C_FIELD(temp_r3, f32 *, 0x24)) + (temp_f30 * M2C_FIELD(temp_r3, f32 *, 0x18))));
    sp54 = M2C_FIELD(temp_r3, f32 *, 4) + ((temp_f30 * M2C_FIELD(temp_r3, f32 *, 0x10)) + ((temp_f30 * M2C_FIELD(temp_r3, f32 *, 0x28)) + (temp_f30 * M2C_FIELD(temp_r3, f32 *, 0x1C))));
    sp5C = temp_f30;
    sp58 = M2C_FIELD(temp_r3, f32 *, 8) + ((temp_f30 * M2C_FIELD(temp_r3, f32 *, 0x14)) + ((temp_f30 * M2C_FIELD(temp_r3, f32 *, 0x2C)) + (temp_f30 * M2C_FIELD(temp_r3, f32 *, 0x20))));
loop_2:
    if (var_r30 < (u32) M2C_FIELD(arg0, u32 *, 4)) {
        sp38 = sp50;
        sp3C = sp54;
        sp40 = sp58;
        sp44 = sp5C;
        sp48 = var_r30;
        sp4C = temp_f30;
        /* draft: did not compile: temp_r5 = M2C_FIELD(arg0, void **, 8) + var_r31; */
        sp50 = M2C_FIELD(temp_r5, f32 *, 0) + ((temp_f31 * M2C_FIELD(temp_r5, f32 *, 0xC)) + ((temp_f31 * M2C_FIELD(temp_r5, f32 *, 0x24)) + (temp_f31 * M2C_FIELD(temp_r5, f32 *, 0x18))));
        sp54 = M2C_FIELD(temp_r5, f32 *, 4) + ((temp_f31 * M2C_FIELD(temp_r5, f32 *, 0x10)) + ((temp_f31 * M2C_FIELD(temp_r5, f32 *, 0x28)) + (temp_f31 * M2C_FIELD(temp_r5, f32 *, 0x1C))));
        temp_f2 = M2C_FIELD(temp_r5, f32 *, 0x2C);
        temp_f3 = M2C_FIELD(temp_r5, f32 *, 0x14);
        temp_f4 = M2C_FIELD(temp_r5, f32 *, 8);
        sp5C = temp_f28;
        sp60 = var_r30;
        sp64 = temp_f31;
        sp58 = temp_f4 + ((temp_f31 * temp_f3) + ((temp_f31 * temp_f2) + (temp_f31 * M2C_FIELD(temp_r5, f32 *, 0x20))));
        /* draft: did not compile: fn_8007D1B0(&sp38, &sp50, temp_r5, &sp2C, farg0, temp_f2, temp_f3, temp_f4); */
        temp_r3_2 = var_r31 + 0x54;
        temp_r0 = var_r31 + 0x58;
        var_r30 += 1;
        var_r31 += 0x5C;
        /* draft: did not compile: *(M2C_FIELD(arg0, void **, 8) + temp_r3_2) = sp44; */
        /* draft: did not compile: *(M2C_FIELD(arg0, void **, 8) + temp_r0) = sp5C; */
        goto loop_2;
    }
    sp28 = &sp30;
    fn_8007ED40(&sp24, &sp2C, &sp28, &sp50);
    sp20 = &sp30;
    sp8 = spC;
    sp1C = sp34;
    /* draft: did not compile: fn_8007D9A4(arg0 + 0xC, &sp1C, &sp20, &sp8, sp34); */
    M2C_FIELD(arg0, f32 *, 0x18) = sp5C;
    sp18 = &sp30;
    sp14 = sp34;
    fn_8007EC90(&sp10, &sp2C, &sp14, &sp18);
}

void fn_8007D660(void *arg0, void *arg1, void *arg2, f32 farg0) { } /* draft: stub */

void fn_8007D7FC(void *arg0, s32 arg1, void *arg2, void *arg3, f32 *arg4) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f6;
    f32 var_f31;
    s32 var_r31;
    u32 var_r29;
    u32 var_r30;
    void *temp_r3;
    void *temp_r4;

    var_r30 = 0;
    var_f31 = PSVECSquareDistance((long)(M2C_FIELD(arg0, s32 *, 0x14)), (long)(0));
    var_r29 = 0;
    var_r31 = 0;
loop_4:
    if (var_r29 < (u32) M2C_FIELD(arg0, u32 *, 0x10)) {
        temp_f1 = PSVECSquareDistance(M2C_FIELD(arg0, s32 *, 0x14) + var_r31, arg1);
        if (temp_f1 < var_f31) {
            var_r30 = var_r29;
            var_f31 = temp_f1;
        }
        var_r29 += 1;
        var_r31 += 0x18;
        goto loop_4;
    }
    /* draft: did not compile: temp_r4 = M2C_FIELD(arg0, s32 *, 0x14) + (var_r30 * 0x18); */
    temp_f1_2 = M2C_FIELD(temp_r4, f32 *, 0x14);
    temp_f0 = temp_f1_2 * temp_f1_2;
    temp_f6 = temp_f1_2 * temp_f0;
    /* draft: did not compile: temp_r3 = M2C_FIELD(arg0, s32 *, 8) + (M2C_FIELD(temp_r4, s32 *, 0x10) * 0x5C); */
    if (arg2 != NULL) {
        M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(temp_r3, f32 *, 0) + ((temp_f1_2 * M2C_FIELD(temp_r3, f32 *, 0xC)) + ((temp_f6 * M2C_FIELD(temp_r3, f32 *, 0x24)) + (temp_f0 * M2C_FIELD(temp_r3, f32 *, 0x18)))));
        M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(temp_r3, f32 *, 4) + ((temp_f1_2 * M2C_FIELD(temp_r3, f32 *, 0x10)) + ((temp_f6 * M2C_FIELD(temp_r3, f32 *, 0x28)) + (temp_f0 * M2C_FIELD(temp_r3, f32 *, 0x1C)))));
        M2C_FIELD(arg2, f32 *, 8) = (f32) (M2C_FIELD(temp_r3, f32 *, 8) + ((temp_f1_2 * M2C_FIELD(temp_r3, f32 *, 0x14)) + ((temp_f6 * M2C_FIELD(temp_r3, f32 *, 0x2C)) + (temp_f0 * M2C_FIELD(temp_r3, f32 *, 0x20)))));
    }
    if (arg3 != NULL) {
        M2C_FIELD(arg3, f32 *, 0) = (f32) (M2C_FIELD(temp_r3, f32 *, 0x30) + ((temp_f0 * M2C_FIELD(temp_r3, f32 *, 0x48)) + (temp_f1_2 * M2C_FIELD(temp_r3, f32 *, 0x3C))));
        M2C_FIELD(arg3, f32 *, 4) = (f32) (M2C_FIELD(temp_r3, f32 *, 0x34) + ((temp_f0 * M2C_FIELD(temp_r3, f32 *, 0x4C)) + (temp_f1_2 * M2C_FIELD(temp_r3, f32 *, 0x40))));
        M2C_FIELD(arg3, f32 *, 8) = (f32) (M2C_FIELD(temp_r3, f32 *, 0x38) + ((temp_f0 * M2C_FIELD(temp_r3, f32 *, 0x50)) + (temp_f1_2 * M2C_FIELD(temp_r3, f32 *, 0x44))));
    }
    if (arg4 != NULL) {
        *arg4 = M2C_FIELD(temp_r4, f32 *, 0xC);
    }
}

void fn_8007D9A4(void *arg0, void **arg1, u32 *arg2) { } /* draft: stub */

void fn_8007DD80(void *arg0, u32 arg1, u32 arg2, u32 arg3, M2C_UNK arg_sp0) { } /* draft: stub */
