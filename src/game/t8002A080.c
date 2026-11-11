/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

u8 IsDialogShown();
u32 fn_8007B144();
s32 method_requestNextMotion(void *, M2C_UNK);
M2C_UNK method_eraseMessages(s32, M2C_UNK, M2C_UNK);
extern void *lbl_803504E8;
M2C_UNK fn_80024378(s32, f32, f32);
M2C_UNK fn_80028E24();
M2C_UNK fn_8002D8EC(void *);
M2C_UNK fn_800310A0(s32);
u8 method_isMotionCompleted();
M2C_UNK fn_800A1720(M2C_UNK);
M2C_UNK fn_800A1950();
M2C_UNK GetMotionEndFrame(void **, s32);
s32 fn_80027ED0();
extern M2C_UNK lbl_801CB860;
extern M2C_UNK lbl_801CB86C;
extern f32 lbl_80351618;
extern f32 lbl_80351654;
extern f32 lbl_80351658;
extern f32 lbl_8035165C;
M2C_UNK fn_80019808(f32 *, u32, f32 *);
M2C_UNK fn_8002F86C(M2C_UNK *, void *, void **);
s32 method_requestMotionUrgently(void *, M2C_UNK, f32);
u32 fn_800A71F8(s32, M2C_UNK);
M2C_UNK PSMTXMultVec(void *, M2C_UNK *, f32 *);
M2C_UNK PSVECSubtract(f32 *, f32 *, f32 *);
f32 PSVECMag(f32 *, f32, f32);
M2C_UNK HSD_JObjSetupMatrixSub(void *);
M2C_UNK HSD_MtxGetTranslate(void *, f32 *);
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_801CB878;
extern M2C_UNK lbl_8034E82C;
extern M2C_UNK lbl_8034E834;
extern s32 lbl_8034EB30;
extern f32 lbl_80351660;
extern f32 lbl_80351664;
extern s32 lbl_801CBCC0;
extern M2C_UNK lbl_801CBE8C;
extern M2C_UNK lbl_801CBEB4;
extern M2C_UNK lbl_801CBFCC;
M2C_UNK fn_8001FFF4(void **);
M2C_UNK fn_80020054(s32);
M2C_UNK fn_8002F774();
u8 IsModelLoaded(s32);
M2C_UNK fn_80015570(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_8001BADC(void **, void *);
M2C_UNK fn_80028D80(void *);
s8 fn_80028E00(void *);
M2C_UNK method_setAnishape(void *, s32);
M2C_UNK fn_80012CF8();
M2C_UNK fn_800A17A8(void *);
s32 strlen();
extern M2C_UNK lbl_801CB330;
extern M2C_UNK lbl_8034E85C;
extern f32 lbl_80351674;
extern f32 lbl_80351678;

s32 fn_8002A080(void *arg0, s32 *arg1);
void fn_8002A19C(void *arg0, s32 arg1);
void HideFilm(void *arg0);
void fn_8002A304(void *arg0, s32 arg1);
void fn_8002A530(void *arg0, void *arg1, f32 farg0, f32 farg1, f32 farg2);
void fn_8002ABE4(void *arg0);
void fn_8002AF48();
void ForceBalloonModel(void *arg0, s32 arg1);
s32 fn_8002B390(s32 arg0, s32 arg1);
s32 fn_8002B3E0(s32 arg0);
s32 fn_8002B3F4(s32 arg0, s32 arg1);
s32 fn_8002B410(s32 arg0, s32 arg1);
void fn_8002B42C();
void fn_8002B4E0(void *arg0, s32 arg1);
void fn_8002B628(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0);
s32 fn_8002B798(void *arg0, s32 arg1, s32 arg2);
s32 fn_8002B934(void *arg0);
void SelectSystemMenu(void *arg0, s32 arg1);
s32 fn_8002BAC8(void *arg0);
s32 fn_8002BB24(void *arg0);
void OpenSystemMenu(void *arg0);
void fn_8002BD98(void *arg0);
void fn_8002BE60(void *arg0);

s32 fn_8002A080(void *arg0, s32 *arg1) {
    s32 temp_r30;
    u8 var_r31;
    u8 var_r31_2;
    u8 var_r3;
    u8 var_r3_2;
    void *temp_r31;
    void *temp_r3;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x50) == 0) {
        return 0;
    }
    temp_r30 = M2C_FIELD(arg0, s32 *, 0x24);
    var_r31 = 0;
    if ((temp_r30 != 0) && (IsDialogShown() == 0)) {
        var_r31 = 1;
    }
    var_r3 = 0;
    if ((var_r31 != 0) && ((u8) M2C_FIELD(arg0, u8 *, 0x53) != 0)) {
        var_r3 = 1;
    }
    var_r3_2 = 0;
    if ((var_r3 != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x48) == 0)) {
        var_r3_2 = 1;
    }
    var_r31_2 = 0;
    if ((var_r3_2 != 0) && (fn_8007B144(temp_r30) != 0U)) {
        var_r31_2 = 1;
    }
    if (var_r31_2 == 0) {
        return 0;
    }
    if (arg1 != NULL) {
        *arg1 = temp_r30;
    }
    temp_r31 = M2C_FIELD(arg0, void **, 0xC);
    temp_r3 = M2C_FIELD(temp_r31, void **, 0xF0);
    if (temp_r3 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(M2C_UNK), 8)(1);
    }
    M2C_FIELD(temp_r31, void **, 0xF0) = NULL;
    return 1;
}

void fn_8002A19C(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r30_2;
    void *temp_r30;
    void *temp_r30_3;
    void *temp_r3;
    void *temp_r5;
    void *temp_r5_2;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        switch (arg1) {                             /* irregular */
        default:
        case 1:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x58) != 2) {

            } else {
                temp_r30 = M2C_FIELD(arg0, void **, 0xC);
                temp_r5 = M2C_FIELD(temp_r30, void **, 0x28);
                if (temp_r5 != NULL) {
                    M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) & 0xFFDFFFFF);
                    M2C_FIELD(temp_r30, s32 *, 0x40) = method_requestNextMotion(M2C_FIELD(temp_r30, void **, 0x28), 0x381C1001);
                }
            }
            M2C_FIELD(arg0, s32 *, 0x58) = 0;
            if ((void *) lbl_803504E8 != NULL) {
                temp_r30_2 = M2C_FIELD(lbl_803504E8, s32 *, 4);
                method_eraseMessages(temp_r30_2, 1, 8);
                method_eraseMessages(temp_r30_2, 0xC, 0xE);
                return;
            }
            break;
        case 2:
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x58);
            if (temp_r0 < 2) {
                if (temp_r0 < 0) {

                } else {
                    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x28);
                    M2C_FIELD(temp_r3, s32 *, 8) = (s32) (M2C_FIELD(temp_r3, s32 *, 8) & 0xFFDFFFFF);
                    temp_r30_3 = M2C_FIELD(arg0, void **, 0xC);
                    temp_r5_2 = M2C_FIELD(temp_r30_3, void **, 0x28);
                    if (temp_r5_2 != NULL) {
                        M2C_FIELD(temp_r5_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r5_2, s32 *, 8) & 0xFFDFFFFF);
                        M2C_FIELD(temp_r30_3, s32 *, 0x40) = method_requestNextMotion(M2C_FIELD(temp_r30_3, void **, 0x28), 0x381C1000);
                    }
                }
            }
            M2C_FIELD(arg0, s32 *, 0x58) = 2;
            break;
        }
    }
}

void HideFilm(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        fn_8002A19C((void *)(0), (long)(0));
    }
}

void fn_8002A304(void *arg0, s32 arg1) { } /* draft: stub */

void fn_8002A530(void *arg0, void *arg1, f32 farg0, f32 farg1, f32 farg2) {
    void *spC;
    f32 sp14;
    f32 sp10;
    f32 sp18;
    void *sp8;
    f32 var_f1;
    f32 var_f2;
    s32 temp_r0_2;
    u8 temp_r0_3;
    s32 temp_r12;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 var_r5;
    u8 temp_r0;
    u8 temp_r10;
    void *temp_r30;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r5;
    s32 temp_r3;

    temp_r10 = M2C_FIELD(arg1, u8 *, 0x1E);
    temp_r0 = M2C_FIELD(arg1, u8 *, 0x20);
    temp_r3 = M2C_FIELD(arg1, s32 *, 0xC);
    var_r5 = M2C_FIELD(arg0, s32 *, 0x40);
    temp_r12 = M2C_FIELD(arg1, s32 *, 0);
    if ((temp_r10 == 0) && ((u8) M2C_FIELD(arg0, u8 *, 0) != 0) && (var_r5 == 0) && (farg2 == lbl_80351618)) {
        if (temp_r12 != 0) {
            if ((u32) (M2C_FIELD(arg0, s32 *, 0x1C) != temp_r12) != 0) {
                M2C_FIELD(arg0, u8 *, 0x44) = 1U;
            }
            if (M2C_FIELD(arg1, s32 *, 4) & 0x400) {
                var_r5 = 0x1B1;
            }
        } else if ((u8) M2C_FIELD(arg1, u8 *, 0x1F) != 0) {
            if ((u32) (M2C_FIELD(arg0, u8 *, 0x3A) != temp_r10) != 0) {
                M2C_FIELD(arg0, u8 *, 0x44) = 1U;
            }
            var_r5 = 0x1B2;
        } else if (temp_r0 != 0) {
            if ((u32) (M2C_FIELD(arg0, u8 *, 0x3C) != temp_r0) != 0) {
                M2C_FIELD(arg0, u8 *, 0x44) = 1U;
            }
            var_r5 = 0x1B3;
        } else if (temp_r3 != 0) {
            if ((u32) (M2C_FIELD(arg0, s32 *, 0x28) != temp_r3) != 0) {
                M2C_FIELD(arg0, u8 *, 0x44) = 1U;
            }
            temp_r3_2 = M2C_FIELD(arg1, s32 *, 0x10);
            if (temp_r3_2 & 1) {
                var_r5 = 0x1B7;
            } else if (temp_r3_2 & 0x40000) {
                var_r5 = 0x1AE;
            } else if (temp_r3_2 & 0x80000) {
                var_r5 = 0x1B4;
            } else if (temp_r3_2 & 0x2000) {
                var_r5 = 0x1AD;
            } else if (temp_r3_2 & 0x100) {
                var_r5 = 0x1B0;
            } else if (temp_r3_2 & 4) {
                var_r5 = 0x1B6;
            } else if (temp_r3_2 & 8) {
                var_r5 = 0x1AC;
            } else if (temp_r3_2 & 2) {
                var_r5 = 0x1BA;
            } else if (temp_r3_2 & 0x200) {
                var_r5 = 0x1B2;
            } else if (temp_r3_2 & 0x40) {
                var_r5 = 0x1AF;
            } else if (temp_r3_2 & 0x10) {
                var_r5 = 0x1B6;
            } else if (temp_r3_2 & 0x20) {
                var_r5 = 0x1B5;
            } else if (temp_r3_2 & 0x8000) {
                var_r5 = 0x1B9;
            } else if (temp_r3_2 & 0x4000) {
                var_r5 = 0x1B6;
            } else if (temp_r3_2 & 0x10000) {
                var_r5 = 0x1AC;
            } else if (temp_r3_2 & 0x20000) {
                var_r5 = 0x1B8;
            } else if (temp_r3_2 & 0x800) {
                var_r5 = 0x1BB;
            }
        }
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, u8 *, 0x38) = (u8) M2C_FIELD(arg1, u8 *, 0x1C);
    M2C_FIELD(arg0, u8 *, 0x39) = (u8) M2C_FIELD(arg1, u8 *, 0x1D);
    M2C_FIELD(arg0, u8 *, 0x3A) = (u8) M2C_FIELD(arg1, u8 *, 0x1E);
    M2C_FIELD(arg0, u8 *, 0x3B) = (u8) M2C_FIELD(arg1, u8 *, 0x1F);
    M2C_FIELD(arg0, u8 *, 0x3C) = (u8) M2C_FIELD(arg1, u8 *, 0x20);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 8);
    switch (temp_r0_2) {                            /* irregular */
    case 1:
        if ((var_r5 == 0) || ((u8) M2C_FIELD(arg0, u8 *, 0x44) != 0)) {
            M2C_FIELD(arg0, s32 *, 8) = 0;
        case 0:
            if (var_r5 != 0) {
                M2C_FIELD(arg0, s32 *, 0xC) = 0;
                M2C_FIELD(arg0, s32 *, 0x10) = 3;
                M2C_FIELD(arg0, s32 *, 4) = var_r5;
                M2C_FIELD(arg0, s32 *, 8) = 2;
            }
        }
        break;
    case 2:
        temp_r3_3 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_r3_3 == 0) {
            M2C_FIELD(arg0, s32 *, 8) = 0;
        } else if (((u8) M2C_FIELD(arg0, u8 *, 0x44) != 0) || (temp_r3_3 != var_r5)) {
            M2C_FIELD(arg0, s32 *, 0xC) = 0;
            M2C_FIELD(arg0, s32 *, 4) = var_r5;
            M2C_FIELD(arg0, s32 *, 0x10) = 3;
        } else {
            temp_r0_3 = M2C_FIELD(arg0, s32 *, 0xC);
            temp_r0_3 += 1;
            M2C_FIELD(arg0, s32 *, 0xC) = temp_r0_3;
            if ((s32) M2C_FIELD(arg0, s32 *, 0x10) <= temp_r0_3) {
                M2C_FIELD(arg0, s32 *, 4) = var_r5;
                temp_r3_4 = M2C_FIELD(arg0, void **, 0x14);
                if (temp_r3_4 != NULL) {
                    M2C_FIELD(M2C_FIELD(temp_r3_4, void **, 0x20), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
                GetMotionEndFrame(&spC, M2C_FIELD(arg0, s32 *, 4));
                sp8 = spC;
                if (spC != NULL) {
                    M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) + 1);
                }
                if (spC != NULL) {
                    M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) - 1);
                    if (((s32) M2C_FIELD(spC, s32 *, 0) == 0) && (spC != NULL)) {
                        M2C_FIELD(M2C_FIELD(spC, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
                spC = NULL;
                temp_r30 = M2C_FIELD(M2C_FIELD(sp8, void **, 4), void *(**)(void *), 0xC)(sp8);
                if (sp8 != NULL) {
                    M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
                    if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                        M2C_FIELD(M2C_FIELD(sp8, void **, 4), M2C_UNK (**)(void *, M2C_UNK), 8)(sp8, 1);
                    }
                }
                temp_r5 = M2C_FIELD(arg0, void **, 0x14);
                M2C_FIELD(arg0, void **, 0x14) = temp_r30;
                sp8 = NULL;
                M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) & 0xFFDFFFFF);
                M2C_FIELD(arg0, s32 *, 0x18) = fn_80027ED0(M2C_FIELD(arg0, void **, 0x14), 0x381AC000, temp_r5);
                M2C_FIELD(arg0, s32 *, 8) = 3;
            }
        }
        break;
    case 3:
        if (method_isMotionCompleted(M2C_FIELD(arg0, void **, 0x14), M2C_FIELD(arg0, s32 *, 0x18), 0) != 0) {
            M2C_FIELD(arg0, s32 *, 8) = 4;
            M2C_FIELD(arg0, s32 *, 0xC) = 0;
            M2C_FIELD(arg0, s32 *, 0x10) = 0x7FFFFFFF;
        }
        break;
    case 4:
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
        if (((u8) M2C_FIELD(arg0, u8 *, 0x44) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 4) != var_r5) || ((s32) M2C_FIELD(arg0, s32 *, 0x10) <= (s32) M2C_FIELD(arg0, s32 *, 0xC))) {
            M2C_FIELD(arg0, s32 *, 0x18) = fn_80027ED0(M2C_FIELD(arg0, void **, 0x14), 0x381AC001);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x10) <= (s32) M2C_FIELD(arg0, s32 *, 0xC)) {
                M2C_FIELD(arg0, s32 *, 8) = 6;
            } else {
                M2C_FIELD(arg0, s32 *, 8) = 5;
            }
        }
        break;
    default:
        if (method_isMotionCompleted(M2C_FIELD(arg0, void **, 0x14), M2C_FIELD(arg0, s32 *, 0x18), 0) != 0) {
            if ((s32) M2C_FIELD(arg0, s32 *, 8) == 5) {
                M2C_FIELD(arg0, s32 *, 8) = 0;
            } else {
                M2C_FIELD(arg0, s32 *, 8) = 1;
            }
            temp_r3_5 = M2C_FIELD(arg0, void **, 0x14);
            if (temp_r3_5 != NULL) {
                M2C_FIELD(M2C_FIELD(temp_r3_5, void **, 0x20), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
            M2C_FIELD(arg0, void **, 0x14) = NULL;
        }
        break;
    }
    M2C_FIELD(arg0, u8 *, 0x44) = 0U;
    if ((void *) M2C_FIELD(arg0, void **, 0x14) != NULL) {
        var_f2 = farg0 + M2C_FIELD(&lbl_801CB860, f32 *, 4);
        var_f1 = farg1 + M2C_FIELD(&lbl_801CB86C, f32 *, 4);
        if (lbl_80351654 < var_f2) {
            var_f2 = farg0 + M2C_FIELD(&lbl_801CB860, f32 *, 0);
        } else if (var_f2 < lbl_80351658) {
            var_f2 = farg0 + M2C_FIELD(&lbl_801CB860, f32 *, 8);
        }
        if (var_f1 < lbl_8035165C) {
            var_f1 = farg1 + M2C_FIELD(&lbl_801CB86C, f32 *, 8);
        }
        sp10 = var_f2;
        sp14 = var_f1;
        sp18 = lbl_80351618;
        temp_r3_6 = M2C_FIELD(arg0, void **, 0x14);
        M2C_FIELD(M2C_FIELD(temp_r3_6, void **, 0x20), M2C_UNK (**)(void *, f32 *), 0x38)(temp_r3_6, &sp10);
    }
    temp_r3_7 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r3_7 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r3_7, void **, 0x20), M2C_UNK (**)(M2C_UNK), 0x18)(0);
    }
}

void fn_8002ABE4(void *arg0) {
    s32 sp1C;
    s32 sp20;
    s32 sp5C;
    s32 sp58;
    f32 sp78;
    s32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp18;
    M2C_UNK sp14;
    void *sp10;
    M2C_UNK spC;
    void *sp8;
    M2C_UNK *var_r26;
    f32 temp_f1;
    f32 temp_f31;
    f32 var_f30;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_r4;
    s32 var_r25;
    u32 var_r29;
    u8 var_r0;
    u8 var_r3;
    void *temp_r27;
    void *temp_r27_2;
    void *temp_r30;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r3_8;
    void *var_r31;

    temp_r3 = M2C_FIELD(arg0, void **, 0x4C);
    if (temp_r3 != NULL) {
        var_r31 = M2C_FIELD(temp_r3, void **, 8);
        var_r29 = 0U;
loop_38:
        if (0 /* draft: did not compile */) {
            temp_r30 = var_r31;
            var_r31 = M2C_FIELD(var_r31, void **, 4);
            temp_r3_2 = M2C_FIELD(temp_r30, void **, 0x10);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x20), M2C_UNK (**)(M2C_UNK), 0x18)(0);
            }
            if (((s32) M2C_FIELD(temp_r30, s32 *, 0xC) != 0) && (method_isMotionCompleted(M2C_FIELD(temp_r30, void **, 0x10), 0) != 0)) {
                sp10 = temp_r30;
                fn_8002F86C(&sp14, M2C_FIELD(arg0, void **, 0x4C), &sp10);
            } else {
                /* draft: did not compile: temp_r3_3 = fn_8007B144(M2C_FIELD(temp_r30, s32 *, 8)); */
                if ((temp_r3_3 == NULL) || (M2C_FIELD(temp_r3_3, s32 *, 0xC) & lbl_8034EB30 & 0x20000000)) {
                    sp8 = temp_r30;
                    fn_8002F86C(&spC, M2C_FIELD(arg0, void **, 0x4C), &sp8);
                } else {
                    if (var_r29 == 0U) {
                        var_r29 = fn_800A71F8(M2C_FIELD(temp_r3_3, s32 *, 0x24), 1);
                    }
                    temp_r3_4 = M2C_FIELD(temp_r30, void **, 0x10);
                    M2C_FIELD(temp_r3_4, s32 *, 8) = (s32) (M2C_FIELD(temp_r3_4, s32 *, 8) | 0x200000);
                    temp_r27 = M2C_FIELD(temp_r3_3, void **, 0x68);
                    if (var_r29 != 0U) {
                        temp_cr0_eq = temp_r27 == NULL;
                        if (temp_cr0_eq == 0) {
                            if (temp_cr0_eq != 0) {
                                __assert(&lbl_8034E82C, 0x47C, &lbl_8034E834);
                            }
                            temp_cr0_eq_2 = temp_r27 == NULL;
                            if (temp_cr0_eq_2 == 0) {
                                if (temp_cr0_eq_2 != 0) {
                                    __assert(&lbl_8034E82C, 0x25D, &lbl_8034E834);
                                }
                                temp_r4 = M2C_FIELD(temp_r27, s32 *, 0x14);
                                var_r3 = 0;
                                if (!(temp_r4 & 0x800000) && (temp_r4 & 0x40)) {
                                    var_r3 = 1;
                                }
                                if (var_r3 != 0) {
                                    HSD_JObjSetupMatrixSub(temp_r27);
                                }
                            }
                            /* draft: did not compile: temp_r27_2 = temp_r27 + 0x44; */
                            HSD_MtxGetTranslate(temp_r27_2, &sp78);
                            fn_80019808(&sp54, var_r29, &sp78);
                            var_f30 = lbl_80351618;
                            var_r26 = &lbl_801CB878;
                            temp_f31 = var_f30;
                            var_r25 = 0;
                            sp6C = sp54;
                            sp70 = sp58;
                            sp74 = sp5C;
                            do {
                                PSMTXMultVec(temp_r27_2, var_r26, &sp60);
                                fn_80019808(&sp3C, var_r29, &sp60);
                                PSVECSubtract(&sp3C, &sp6C, &sp18);
                                sp50 = sp20;
                                sp48 = sp18;
                                sp4C = sp1C;
                                sp68 = sp50;
                                sp60 = sp48;
                                sp64 = sp4C;
                                sp68 = temp_f31;
                                temp_f1 = PSVECMag(&sp60, sp18, sp48);
                                var_r25 += 1;
                                var_r26 += 0xC;
                                var_f30 = ((var_f30 - temp_f1) >= 0.0f) ? var_f30 : temp_f1;
                            } while (var_r25 < 3);
                            if (var_f30 < lbl_80351660) {
                                var_f30 = lbl_80351660;
                            } else if (lbl_80351664 < var_f30) {
                                var_f30 = lbl_80351664;
                            }
                            sp30 = var_f30;
                            sp34 = var_f30;
                            sp38 = var_f30;
                            temp_r3_5 = M2C_FIELD(temp_r30, void **, 0x10);
                            M2C_FIELD(M2C_FIELD(temp_r3_5, void **, 0x20), M2C_UNK (**)(void *, f32 *), 0x28)(temp_r3_5, &sp30);
                            sp24 = sp6C;
                            sp28 = sp70;
                            sp2C = lbl_80351618;
                            temp_r3_6 = M2C_FIELD(temp_r30, void **, 0x10);
                            M2C_FIELD(M2C_FIELD(temp_r3_6, void **, 0x20), M2C_UNK (**)(void *, f32 *, f32, f32), 0x38)(temp_r3_6, &sp24, sp70, sp6C);
                            if ((s32) M2C_FIELD(temp_r30, s32 *, 0xC) == 0) {
                                M2C_FIELD(temp_r30, s32 *, 0xC) = method_requestMotionUrgently(M2C_FIELD(temp_r30, void **, 0x10), 0x381A0000, lbl_80351618);
                            }
                            if (IsDialogShown(arg0) == 0) {
                                temp_r3_7 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x118);
                                if (temp_r3_7 != NULL) {
                                    var_r0 = (M2C_FIELD(temp_r3_7, s32 *, 8) & 0x200000) == 0;
                                } else {
                                    var_r0 = 0;
                                }
                                if (var_r0 != 0) {
                                    temp_r3_8 = M2C_FIELD(temp_r30, void **, 0x10);
                                    M2C_FIELD(temp_r3_8, s32 *, 8) = (s32) (M2C_FIELD(temp_r3_8, s32 *, 8) & 0xFFDFFFFF);
                                }
                            }
                        }
                    }
                }
            }
            goto loop_38;
        }
    }
}

void fn_8002AF48() { } /* draft: stub */

void ForceBalloonModel(void *arg0, s32 arg1) {
    void *temp_r3;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0x1C);
        M2C_FIELD(temp_r3, s32 *, 0x40) = arg1;
        M2C_FIELD(temp_r3, s8 *, 0x44) = 1;
    }
}

s32 fn_8002B390(s32 arg0, s32 arg1) {
    s32 *var_r5;
    s32 temp_r0;
    s32 var_r6;

    var_r6 = 0;
    var_r5 = &lbl_801CBCC0;
loop_4:
    temp_r0 = *var_r5;
    if (temp_r0 == 0) {
        return 0;
    }
    if (arg0 == temp_r0) {
        return *(&lbl_801CBCC0 + (var_r6 * 0x14) + (arg1 * 4));
    }
    var_r5 += 0x14;
    var_r6 += 1;
    goto loop_4;
}

s32 fn_8002B3E0(s32 arg0) {
    return *(&lbl_801CBE8C + (arg0 * 4));
}

s32 fn_8002B3F4(s32 arg0, s32 arg1) {
    return *(&lbl_801CBEB4 + (arg0 * 0x1C) + (arg1 * 4));
}

s32 fn_8002B410(s32 arg0, s32 arg1) {
    return *(&lbl_801CBFCC + (arg0 * 0xC) + (arg1 * 4));
}

void fn_8002B42C() { } /* draft: stub */

#pragma push
#pragma peephole off
void fn_8002B4E0(void *arg0, s32 arg1) {
    void *sp14;
    void *sp10;
    u32 spC;
    M2C_UNK sp8;
    u32 temp_r31;
    void *var_r3;

    sp14 = sp10;
    fn_8001FFF4(&sp10);
    if (sp10 != NULL) {
        M2C_FIELD(sp10, s32 *, 0) = (s32) (M2C_FIELD(sp10, s32 *, 0) + 1);
    }
    if (sp10 != NULL) {
        M2C_FIELD(sp10, s32 *, 0) = (s32) (M2C_FIELD(sp10, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(sp10, s32 *, 0) == 0) && (sp10 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp10, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    /* draft: did not compile: temp_r31 = arg0 + 0xC8; */
    sp10 = NULL;
    var_r3 = M2C_FIELD(arg0, void **, 0xCC);
loop_8:
    if (0 /* draft: did not compile */) {
        var_r3 = M2C_FIELD(var_r3, void **, 4);
        goto loop_8;
    }
    if (0 /* draft: did not compile */) {
        fn_80020054(arg1);
        spC = temp_r31;
        /* draft: did not compile: fn_8002F774(&sp8, arg0 + 0xC4, &spC, &sp14); */
    }
    if (sp14 != NULL) {
        M2C_FIELD(sp14, s32 *, 0) = (s32) (M2C_FIELD(sp14, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(sp14, s32 *, 0) == 0) && (sp14 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp14, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    sp14 = NULL;
}
#pragma pop

void fn_8002B628(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0) { } /* draft: stub */

#pragma push
#pragma dont_inline on
s32 fn_8002B798(void *arg0, s32 arg1, s32 arg2) {
    void *var_r31;
    s32 var_r31_2;
    s32 var_r31_3;
    void *var_r29_2;
    void *var_r29_3;
    s32 var_r29;

    switch (arg1) {                                 /* switch 1; irregular */
    case 10:                                        /* switch 1 */
        var_r31 = M2C_FIELD(arg0, void **, 0x98);
        var_r29 = 0;
loop_15:
        if (0 /* draft: did not compile */) {
        case 7:                                     /* switch 1 */
block_38:
        default:                                    /* switch 1 */
            return 1;
        }
        switch (arg2) {                             /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            if (var_r29 >= 7) {
                if ((arg2 == 2) && (var_r29 >= 7)) {
                    goto block_12;
                }
                goto block_14;
            }
        case 0:                                     /* switch 2 */
block_12:
            if (IsModelLoaded(M2C_FIELD(var_r31, s32 *, 8)) == 0) {
                return 0;
            }
        case -1:        default:                                    /* switch 2 */
block_14:
            var_r31 = M2C_FIELD(var_r31, void **, 4);
            var_r29 += 1;
            goto loop_15;
        }
        break;
    case 9:                                         /* switch 1 */
        var_r29_2 = M2C_FIELD(arg0, void **, 0xB0);
        var_r31_2 = 0;
loop_26:
        if (0 /* draft: did not compile */) {
            goto block_38;
        }
        switch (arg2 - 1) {                             /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            if (var_r31_2 >= 7) {
                if ((arg2 == 2) && (var_r31_2 >= 7)) {
                    goto block_23;
                }
                goto block_25;
            }
        case -1:                                     /* switch 3 */
block_23:
            fn_8002B390(M2C_FIELD(var_r29_2, s32 *, 8), 4);
            if (IsModelLoaded((long)(0)) == 0) {
                return 0;
            }
        default:                                    /* switch 3 */
block_25:
            var_r29_2 = M2C_FIELD(var_r29_2, void **, 4);
            var_r31_2 += 1;
            goto loop_26;
        }
        break;
    case 8:                                         /* switch 1 */
        var_r29_3 = M2C_FIELD(arg0, void **, 0xA4);
        var_r31_3 = 0;
loop_37:
        if (0 /* draft: did not compile */) {
            goto block_38;
        }
        switch (arg2 - 1) {                             /* switch 4; irregular */
        case 0:                                     /* switch 4 */
            if (var_r31_3 >= 7) {
                if ((arg2 == 2) && (var_r31_3 >= 7)) {
                    goto block_34;
                }
                goto block_36;
            }
        case -1:                                     /* switch 4 */
block_34:
            fn_8002B42C(M2C_FIELD(var_r29_3, s32 *, 8));
            if (IsModelLoaded((long)(0)) == 0) {
                return 0;
            }
        default:                                    /* switch 4 */
block_36:
            var_r29_3 = M2C_FIELD(var_r29_3, void **, 4);
            var_r31_3 += 1;
            goto loop_37;
        }
        break;
    }
}
#pragma pop

s32 fn_8002B934(void *arg0) {
    return 0;
}

#pragma push
#pragma dont_inline on
void SelectSystemMenu(void *arg0, s32 arg1) {
    void *spC;
    void *sp8;
    void *temp_r30;
    void *temp_r31;
    void *temp_r3;
    void *temp_r3_2;

    M2C_FIELD(arg0, s32 *, 0xE4) = arg1;
    GetMotionEndFrame(&spC, fn_8002B3E0(M2C_FIELD(arg0, s32 *, 0xE4)));
    sp8 = spC;
    if (spC != NULL) {
        M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) + 1);
    }
    if (spC != NULL) {
        M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(spC, s32 *, 0) == 0) && (spC != NULL)) {
            M2C_FIELD(M2C_FIELD(spC, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
    spC = NULL;
    temp_r30 = M2C_FIELD(M2C_FIELD(sp8, void **, 4), void *(**)(void *), 0xC)(sp8);
    if (sp8 != NULL) {
        M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp8, void **, 4), M2C_UNK (**)(void *, M2C_UNK), 8)(sp8, 1);
        }
    }
    temp_r31 = M2C_FIELD(arg0, void **, 0xC);
    sp8 = NULL;
    temp_r3 = M2C_FIELD(temp_r31, void **, 0xC8);
    if (temp_r3 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(M2C_UNK), 8)(1);
    }
    M2C_FIELD(temp_r31, void **, 0xC8) = NULL;
    M2C_FIELD(temp_r31, void **, 0xC8) = temp_r30;
    temp_r3_2 = M2C_FIELD(temp_r31, void **, 0xC8);
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 8) & 0xFFDFFFFF);
    }
}
#pragma pop

s32 fn_8002BAC8(void *arg0) {
    u8 var_r0;
    void *temp_r3;
    void *temp_r4;

    temp_r3 = M2C_FIELD(arg0, void **, 0xC);
    if ((u32) M2C_FIELD(temp_r3, u32 *, 0xF0) != 0U) {
        return 0;
    }
    temp_r4 = M2C_FIELD(temp_r3, void **, 0xC8);
    if (temp_r4 != NULL) {
        var_r0 = (M2C_FIELD(temp_r4, s32 *, 8) & 0x200000) == 0;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return 0;
    }
    return M2C_FIELD(temp_r3, s32 *, 0xE4) == 0;
}

s32 fn_8002BB24(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0xE4) != 0;
}

#pragma push
#pragma dont_inline on
void OpenSystemMenu(void *arg0) {
    void *sp10;
    void *spC;
    void *sp8;
    s32 temp_r29;
    u32 var_r28;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r3;

    temp_r30 = M2C_FIELD(arg0, void **, 0xC);
    var_r28 = fn_8002B3F4(M2C_FIELD(arg0, s32 *, 0xE4), 0);
    if ((M2C_FIELD(temp_r30, void **, 0xC8)) != NULL) {
        M2C_FIELD((M2C_FIELD(temp_r30, void **, 0xC8)), s32 *, 8) = (s32) (M2C_FIELD((M2C_FIELD(temp_r30, void **, 0xC8)), s32 *, 8) & 0xFFDFFFFF);
        if (!((var_r28 >> 0x1BU) & 0xF)) {
            fn_8001BADC(&sp10, M2C_FIELD(temp_r30, void **, 0xC8));
            temp_r29 = M2C_FIELD(M2C_FIELD(sp10, void **, 8), s32 *, 4);
            if (sp10 != NULL) {
                M2C_FIELD(sp10, s32 *, 0) = (s32) (M2C_FIELD(sp10, s32 *, 0) - 1);
                if (((s32) M2C_FIELD(sp10, s32 *, 0) == 0) && (sp10 != NULL)) {
                    M2C_FIELD(M2C_FIELD(sp10, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
            sp10 = NULL;
            var_r28 = ((temp_r29 << 0xC) & 0x07FFF000) | 0x38000000 | (var_r28 & 0xFFF);
        }
        M2C_FIELD(temp_r30, s32 *, 0xE0) = method_requestMotionUrgently(M2C_FIELD(temp_r30, void **, 0xC8), var_r28, lbl_80351618);
    }
    method_setAnishape(M2C_FIELD(temp_r30, void **, 0xC8), fn_8002B410(M2C_FIELD(arg0, s32 *, 0xE4), 0));
    M2C_FIELD(temp_r30, s32 *, 0xE4) = 1;
    M2C_FIELD(arg0, s8 *, 0x108) = 1;
    M2C_FIELD(arg0, s8 *, 0x109) = fn_80028E00(arg0);
    fn_80028D80(arg0);
    if ((void *) M2C_FIELD(arg0, void **, 0xE0) == NULL) {
        GetMotionEndFrame(&spC, 0x27AB);
        sp8 = spC;
        if (spC != NULL) {
            M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) + 1);
        }
        if (spC != NULL) {
            M2C_FIELD(spC, s32 *, 0) = (s32) (M2C_FIELD(spC, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(spC, s32 *, 0) == 0) && (spC != NULL)) {
                M2C_FIELD(M2C_FIELD(spC, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
        }
        spC = NULL;
        temp_r30_2 = M2C_FIELD(M2C_FIELD(sp8, void **, 4), void *(**)(void *), 0xC)(sp8);
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp8, void **, 4), M2C_UNK (**)(void *, M2C_UNK), 8)(sp8, 1);
            }
        }
        M2C_FIELD(arg0, void **, 0xE0) = temp_r30_2;
        temp_r3 = M2C_FIELD(arg0, void **, 0xE0);
        sp8 = NULL;
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) (M2C_FIELD(temp_r3, s32 *, 8) & 0xFFDFFFFF);
    }
    method_requestMotionUrgently(M2C_FIELD(arg0, void **, 0xE0), 0x3A7AB000U, lbl_80351618);
    fn_8002B628((void *)(arg0), (long)(M2C_FIELD(arg0, s32 *, 0xEC)), (long)(0), (long)(0));
    fn_80015570(0x3F0, 0x60, 0x40);
}
#pragma pop

void fn_8002BD98(void *arg0) {
    u8 temp_r31;
    u8 temp_r30;
    s32 var_r25;
    u8 temp_r28;
    u8 temp_r29;
    f32 temp_f31;
    f32 temp_f30;
    void *temp_r27;
    void *temp_r3;
    void *temp_r3_2;
    void *var_r26;

    temp_r28 = M2C_FIELD(&lbl_801CB330, u8 *, 0x20);
    var_r26 = arg0;
    temp_r29 = M2C_FIELD(&lbl_801CB330, u8 *, 0x21);
    temp_f31 = lbl_80351678;
    temp_f30 = lbl_80351674;
    var_r25 = 0;
    temp_r30 = M2C_FIELD(&lbl_801CB330, u8 *, 0x22);
    temp_r31 = M2C_FIELD(&lbl_801CB330, u8 *, 0x23);
    do {
        temp_r27 = M2C_FIELD(var_r26, void **, 0x68);
        /* draft: did not compile: fn_80012CF8(temp_r27 + 0x50, &lbl_8034E85C, strlen(&lbl_8034E85C)); */
        fn_800A17A8(temp_r27);
        temp_r3 = M2C_FIELD(var_r26, void **, 0x68);
        var_r25 += 1;
        M2C_FIELD(temp_r3, f32 *, 0x48) = temp_f30;
        M2C_FIELD(temp_r3, f32 *, 0x4C) = temp_f31;
        temp_r3_2 = M2C_FIELD(var_r26, void **, 0x68);
        /* draft: did not compile: var_r26 += 4; */
        M2C_FIELD(temp_r3_2, u8 *, 4) = temp_r28;
        M2C_FIELD(temp_r3_2, u8 *, 5) = temp_r29;
        M2C_FIELD(temp_r3_2, u8 *, 6) = temp_r30;
        M2C_FIELD(temp_r3_2, u8 *, 7) = temp_r31;
    } while (var_r25 < 7);
}

void fn_8002BE60(void *arg0) {
    s32 var_r29;
    void *var_r30;

    var_r30 = arg0;
    var_r29 = 0;
    do {
        fn_800A1720((long)(M2C_FIELD(var_r30, s32 *, 0x68)));
        var_r29 += 1;
        M2C_FIELD(var_r30, s32 *, 0x68) = 0;
        /* draft: did not compile: var_r30 += 4; */
    } while (var_r29 < 7);
}
