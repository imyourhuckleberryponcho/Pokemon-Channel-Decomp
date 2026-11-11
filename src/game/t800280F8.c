/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern f32 lbl_8035161C;
M2C_UNK VIWaitForRetrace();
u32 get_up_vector_for_viewing_mtx();
M2C_UNK fn_8001FFF4(void **, s32);
M2C_UNK fn_80020054(s32);
M2C_UNK fn_8002F774(M2C_UNK *, u32, s32 *, void **);
M2C_UNK fn_8002F854();
extern s32 lbl_80222138;
extern s32 lbl_80222174;
extern s32 lbl_8034E828;
M2C_UNK GetMotionEndFrame(void **, M2C_UNK, void *);
void *fn_80023230();
M2C_UNK fn_80027F30();
M2C_UNK SelectSystemMenu(void *, M2C_UNK);
void *fn_80030384();
void *CreateAmbientLight(s32 *, M2C_UNK);
void *CreateInfiniteLight(s32 *);
s32 method_requestMotionUrgently(void *, M2C_UNK, f32);
extern f32 lbl_80351618;
extern f32 lbl_80351620;
M2C_UNK fn_80030B28(s32);
M2C_UNK fn_80030AD4(s32);
M2C_UNK fn_80030A68(s32);
M2C_UNK fn_80030F44(s32);
s32 fn_80030A54(s32);
M2C_UNK fn_80023B40(s32);
M2C_UNK fn_8002420C(s32);
s32 fn_80024D34(s32);
s32 fn_80024D54(s32);
M2C_UNK fn_8002F924(M2C_UNK *, void *, void **, s32 *);
M2C_UNK fn_8002F9FC();
s32 method_requestNextMotion(void *, M2C_UNK);
u32 OSGetTick();
u8 fn_800137D0(s32, s32, s32, M2C_UNK *, s32 *);
M2C_UNK fn_80015570(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_8001E658(void *, u8, u8);
u8 fn_80024DF4(s32);
u8 fn_8002BB24(void *, u8);
M2C_UNK fn_800313CC(s32, M2C_UNK);
M2C_UNK fn_80079510(s32, u32);
void *fn_8007B144();
s32 fn_8007C618(M2C_UNK);
u8 fn_8007C844();
u8 fn_800A3860();
u8 fn_800A3868();
M2C_UNK fn_8010310C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *);
u32 __cvt_fp2unsigned(u32, f32, f32);
extern M2C_UNK lbl_8022225C;
extern s32 lbl_8034EB30;
extern void *lbl_803504F8;
extern f32 lbl_80351624;
extern f32 lbl_80351628;
M2C_UNK fn_8001BADC(void **, void *);
extern f32 lbl_80351638;
extern f64 lbl_80351640;
extern f32 lbl_80351648;
extern f32 lbl_8035164C;
extern f32 lbl_80351650;
M2C_UNK fn_8001E6DC();

void fn_800280F8(void *arg0);
void fn_80028130(s32 arg0);
void RequestLoadInitialModels(void *arg0, s32 arg1);
s32 IsInitialModelsLoaded(void *arg0);
void fn_8002892C(void *arg0);
void RequestNextSystemText(void *arg0);
void fn_8002898C(void *arg0);
void HideSystemText(void *arg0);
s32 IsSystemTextShown(void *arg0);
void fn_80028A24(void *arg0);
void HideDialog(void *arg0);
s32 IsDialogShown(void *arg0);
s32 GetDialogState(void *arg0);
void FineTuneDialog(void *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void fn_80028B0C(void *arg0, s32 arg1);
void HideButtons(void *arg0);
void ShowButtons(void *arg0);
void DisableSystemMenu(void *arg0);
void EnableSystemMenu(void *arg0);
void ShowModoru(void *arg0);
void fn_80028D80(void *arg0);
s32 fn_80028E00(void *arg0);
void fn_80028E24(void *arg0, void *arg1, s32 arg2, M2C_UNK arg_sp0);
void fn_800298E8(void *arg0, s32 arg1, u32 arg2);
void fn_80029B5C(void *arg0, f32 farg0, f32 farg1);
void fn_80029C60(void *arg0, f32 *arg1, f32 *arg2);
void fn_80029CE8(void *arg0, s8 arg1);
u8 fn_80029D04(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3, M2C_UNK arg_sp0);
s32 fn_80029DD4(void *arg0);
s32 fn_80029E60(void *arg0);
s32 fn_80029EEC(void *arg0);
u8 fn_80029F78(void *arg0, s32 *arg1);

void fn_800280F8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_8035161C;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_8035161C;
    M2C_FIELD(arg0, s32 *, 0x10) = -2;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
    M2C_FIELD(arg0, s32 *, 0x24) = -2;
}

void fn_80028130(s32 arg0) {
    /* draft: did not compile: RequestLoadInitialModels(1); */
loop_2:
    if (0 /* draft: did not compile */) {
        VIWaitForRetrace();
        goto loop_2;
    }
    /* draft: did not compile: RequestLoadInitialModels(arg0, 2); */
loop_5:
    if (0 /* draft: did not compile */) {
        VIWaitForRetrace();
        goto loop_5;
    }
    /* draft: did not compile: RequestLoadInitialModels(arg0, 3); */
loop_8:
    if (0 /* draft: did not compile */) {
        VIWaitForRetrace();
        goto loop_8;
    }
}

void RequestLoadInitialModels(void *arg0, s32 arg1) {
    s32 saved_reg_r31;
    s32 saved_reg_r28;
    void *sp10;
    s32 spC;
    M2C_UNK sp8;
    s32 *var_r28;
    s32 *var_r29;
    s32 var_r28_2;
    s32 var_r31;
    u32 temp_r3;
    u32 temp_r4;

    /* draft: did not compile: var_r28 = saved_reg_r28; */
    var_r31 = saved_reg_r31;
    switch (arg1) {                                 /* irregular */
    case 1:
        if ((u8) M2C_FIELD(arg0, u8 *, 0x50) == 0) {
            var_r31 = 0xF;
            var_r28 = &lbl_80222138;
        default:
block_12:
            if ((u32) M2C_FIELD(arg0, u32 *, 0x20) == 0U) {
                temp_r3 = get_up_vector_for_viewing_mtx(0xC);
                if (temp_r3 != 0U) {
                    fn_8002F854();
                }
                M2C_FIELD(arg0, u32 *, 0x20) = temp_r3;
            }
            var_r29 = var_r28;
            var_r28_2 = 0;
loop_22:
            if (var_r28_2 < var_r31) {
                fn_80020054(*var_r29);
                fn_8001FFF4(&sp10, *var_r29);
                temp_r4 = M2C_FIELD(arg0, u32 *, 0x20);
                spC = temp_r4 + 4;
                fn_8002F774(&sp8, temp_r4, &spC, &sp10);
                if (sp10 != NULL) {
                    M2C_FIELD(sp10, s32 *, 0) = (s32) (M2C_FIELD(sp10, s32 *, 0) - 1);
                    if (((s32) M2C_FIELD(sp10, s32 *, 0) == 0) && (sp10 != NULL)) {
                        M2C_FIELD(M2C_FIELD(sp10, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
                    }
                }
                var_r28_2 += 1;
                sp10 = NULL;
                var_r29 += 4;
                goto loop_22;
            }
        }
        break;
    case 2:
        if ((u8) M2C_FIELD(arg0, u8 *, 0x51) == 0) {
            var_r31 = 0x3A;
            var_r28 = &lbl_80222174;
            goto block_12;
        }
        break;
    case 3:
        if ((u8) M2C_FIELD(arg0, u8 *, 0x52) == 0) {
            var_r28 = &lbl_8034E828;
            var_r31 = 1;
            goto block_12;
        }
        break;
    }
}

s32 IsInitialModelsLoaded(void *arg0) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s32 sp34;
    s8 sp33;
    s8 sp32;
    s8 sp31;
    s8 sp30;
    s32 sp2C;
    s8 sp2B;
    s8 sp2A;
    s8 sp29;
    s8 sp28;
    s32 sp24;
    s8 sp23;
    s8 sp22;
    s8 sp21;
    s8 sp20;
    void *sp1C;
    void *sp18;
    void *sp14;
    void *sp10;
    void *spC;
    void *sp8;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r29_3;
    void *temp_r29_4;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_r3;
    void *temp_r3_10;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r3_8;
    void *temp_r3_9;
    void *temp_r5;
    void *temp_r5_2;
    void *var_r0;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r0_4;
    void *var_r0_5;
    void *var_r29;

    var_r29 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), void **, 8);
loop_4:
    if (0 /* draft: did not compile */) {
        if ((u8) M2C_FIELD(arg0, u8 *, 0x50) == 0) {
            /* draft: did not compile: var_r0 = get_up_vector_for_viewing_mtx(0x7C); */
            if (var_r0 != NULL) {
                var_r0 = fn_80023230();
            }
            M2C_FIELD(arg0, void **, 0x10) = var_r0;
            /* draft: did not compile: var_r0_2 = get_up_vector_for_viewing_mtx(0x40); */
            if (var_r0_2 != NULL) {
                var_r0_2 = fn_80030384();
            }
            M2C_FIELD(arg0, void **, 0x18) = var_r0_2;
            /* draft: did not compile: temp_r3 = get_up_vector_for_viewing_mtx(0x48); */
            if (temp_r3 != NULL) {
                M2C_FIELD(temp_r3, s8 *, 0) = 1;
                M2C_FIELD(temp_r3, s32 *, 4) = 0;
                M2C_FIELD(temp_r3, s32 *, 8) = 0;
                /* draft: did not compile: fn_80027F30(temp_r3 + 0x1C); */
                M2C_FIELD(temp_r3, s32 *, 0x40) = 0;
                M2C_FIELD(temp_r3, s8 *, 0x44) = 0;
                M2C_FIELD(temp_r3, s32 *, 0x14) = 0;
            }
            M2C_FIELD(arg0, void **, 0x1C) = temp_r3;
            /* draft: did not compile: var_r0_3 = get_up_vector_for_viewing_mtx(0x80); */
            if (var_r0_3 != NULL) {
                sp30 = 0xCC;
                sp31 = 0xCC;
                sp32 = 0xCC;
                sp33 = 0xFF;
                sp34 = (s32) sp30;
                var_r0_3 = CreateAmbientLight(&sp34, 0xCC);
            }
            M2C_FIELD(arg0, void **, 0) = var_r0_3;
            /* draft: did not compile: var_r0_4 = get_up_vector_for_viewing_mtx(0x80); */
            if (var_r0_4 != NULL) {
                sp28 = 0xFF;
                sp29 = 0xFF;
                sp2A = 0xFF;
                sp2B = 0xFF;
                sp2C = (s32) sp28;
                var_r0_4 = CreateInfiniteLight(&sp2C);
            }
            M2C_FIELD(arg0, void **, 4) = var_r0_4;
            /* draft: did not compile: var_r0_5 = get_up_vector_for_viewing_mtx(0x80); */
            if (var_r0_5 != NULL) {
                sp20 = 0xFF;
                sp21 = 0xFF;
                sp22 = 0xFF;
                sp23 = 0xFF;
                sp24 = (s32) sp20;
                var_r0_5 = CreateInfiniteLight(&sp24);
            }
            M2C_FIELD(arg0, void **, 8) = var_r0_5;
            sp44 = lbl_8035161C;
            sp48 = lbl_8035161C;
            sp4C = lbl_8035161C;
            temp_r3_2 = M2C_FIELD(arg0, void **, 4);
            M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x20), M2C_UNK (**)(void *, f32 *), 0x38)(temp_r3_2, &sp44);
            sp38 = lbl_80351620;
            sp3C = lbl_80351620;
            sp40 = lbl_80351620;
            temp_r3_3 = M2C_FIELD(arg0, void **, 8);
            M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 0x20), M2C_UNK (**)(void *, f32 *), 0x38)(temp_r3_3, &sp38);
            GetMotionEndFrame((void **)(&sp1C), (long)(0x1EF), (void *)(0));
            sp18 = sp1C;
            if (sp1C != NULL) {
                M2C_FIELD(sp1C, s32 *, 0) = (s32) (M2C_FIELD(sp1C, s32 *, 0) + 1);
            }
            if (sp1C != NULL) {
                M2C_FIELD(sp1C, s32 *, 0) = (s32) (M2C_FIELD(sp1C, s32 *, 0) - 1);
                if (((s32) M2C_FIELD(sp1C, s32 *, 0) == 0) && (sp1C != NULL)) {
                    M2C_FIELD(M2C_FIELD(sp1C, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
            sp1C = NULL;
            temp_r30 = M2C_FIELD(M2C_FIELD(sp18, void **, 4), void *(**)(void *), 0xC)(sp18);
            if (sp18 != NULL) {
                M2C_FIELD(sp18, s32 *, 0) = (s32) (M2C_FIELD(sp18, s32 *, 0) - 1);
                if (((s32) M2C_FIELD(sp18, s32 *, 0) == 0) && (sp18 != NULL)) {
                    M2C_FIELD(M2C_FIELD(sp18, void **, 4), M2C_UNK (**)(void *, M2C_UNK), 8)(sp18, 1);
                }
            }
            temp_r29 = M2C_FIELD(arg0, void **, 0xC);
            sp18 = NULL;
            temp_r3_4 = M2C_FIELD(temp_r29, void **, 0x118);
            if (temp_r3_4 != NULL) {
                M2C_FIELD(M2C_FIELD(temp_r3_4, void **, 0x20), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
            M2C_FIELD(temp_r29, void **, 0x118) = NULL;
            M2C_FIELD(temp_r29, void **, 0x118) = temp_r30;
            temp_r3_5 = M2C_FIELD(temp_r29, void **, 0x118);
            if (temp_r3_5 != NULL) {
                M2C_FIELD(temp_r3_5, s32 *, 8) = (s32) (M2C_FIELD(temp_r3_5, s32 *, 8) & 0xFFDFFFFF);
            }
            temp_r29_2 = M2C_FIELD(arg0, void **, 0xC);
            temp_r5 = M2C_FIELD(temp_r29_2, void **, 0x118);
            if (temp_r5 != NULL) {
                M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) & 0xFFDFFFFF);
                M2C_FIELD(temp_r29_2, s32 *, 0x130) = method_requestMotionUrgently(M2C_FIELD(temp_r29_2, void **, 0x118), 0x381EF000, lbl_80351618);
            }
            M2C_FIELD(arg0, u8 *, 0x50) = 1U;
        } else if ((u8) M2C_FIELD(arg0, u8 *, 0x51) == 0) {
            SelectSystemMenu(arg0, 1);
            GetMotionEndFrame((void **)(&sp14), (long)(0x1C1), (void *)(0));
            sp10 = sp14;
            if (sp14 != NULL) {
                M2C_FIELD(sp14, s32 *, 0) = (s32) (M2C_FIELD(sp14, s32 *, 0) + 1);
            }
            if (sp14 != NULL) {
                M2C_FIELD(sp14, s32 *, 0) = (s32) (M2C_FIELD(sp14, s32 *, 0) - 1);
                if (((s32) M2C_FIELD(sp14, s32 *, 0) == 0) && (sp14 != NULL)) {
                    M2C_FIELD(M2C_FIELD(sp14, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
                }
            }
            sp14 = NULL;
            temp_r30_2 = M2C_FIELD(M2C_FIELD(sp10, void **, 4), void *(**)(void *), 0xC)(sp10);
            if (sp10 != NULL) {
                M2C_FIELD(sp10, s32 *, 0) = (s32) (M2C_FIELD(sp10, s32 *, 0) - 1);
                if (((s32) M2C_FIELD(sp10, s32 *, 0) == 0) && (sp10 != NULL)) {
                    M2C_FIELD(M2C_FIELD(sp10, void **, 4), M2C_UNK (**)(void *, M2C_UNK), 8)(sp10, 1);
                }
            }
            temp_r29_3 = M2C_FIELD(arg0, void **, 0xC);
            sp10 = NULL;
            temp_r3_6 = M2C_FIELD(temp_r29_3, void **, 0x28);
            if (temp_r3_6 != NULL) {
                M2C_FIELD(M2C_FIELD(temp_r3_6, void **, 0x20), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
            M2C_FIELD(temp_r29_3, void **, 0x28) = NULL;
            M2C_FIELD(temp_r29_3, void **, 0x28) = temp_r30_2;
            temp_r3_7 = M2C_FIELD(temp_r29_3, void **, 0x28);
            if (temp_r3_7 != NULL) {
                M2C_FIELD(temp_r3_7, s32 *, 8) = (s32) (M2C_FIELD(temp_r3_7, s32 *, 8) & 0xFFDFFFFF);
            }
            temp_r5_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x28);
            M2C_FIELD(temp_r5_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r5_2, s32 *, 8) | 0x200000);
            GetMotionEndFrame(&spC, 0x1EE, temp_r5_2);
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
            temp_r29_4 = M2C_FIELD(M2C_FIELD(sp8, void **, 4), void *(**)(void *), 0xC)(sp8);
            if (sp8 != NULL) {
                M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
                if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                    M2C_FIELD(M2C_FIELD(sp8, void **, 4), M2C_UNK (**)(void *, M2C_UNK), 8)(sp8, 1);
                }
            }
            temp_r30_3 = M2C_FIELD(arg0, void **, 0xC);
            sp8 = NULL;
            temp_r3_8 = M2C_FIELD(temp_r30_3, void **, 0xA0);
            if (temp_r3_8 != NULL) {
                M2C_FIELD(M2C_FIELD(temp_r3_8, void **, 0x20), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
            M2C_FIELD(temp_r30_3, void **, 0xA0) = NULL;
            M2C_FIELD(temp_r30_3, void **, 0xA0) = temp_r29_4;
            temp_r3_9 = M2C_FIELD(temp_r30_3, void **, 0xA0);
            if (temp_r3_9 != NULL) {
                M2C_FIELD(temp_r3_9, s32 *, 8) = (s32) (M2C_FIELD(temp_r3_9, s32 *, 8) & 0xFFDFFFFF);
            }
            M2C_FIELD(arg0, u8 *, 0x51) = 1U;
        } else if ((u8) M2C_FIELD(arg0, u8 *, 0x52) == 0) {
            M2C_FIELD(arg0, u8 *, 0x52) = 1U;
        }
        return 1;
    }
    temp_r3_10 = M2C_FIELD(var_r29, void **, 8);
    if (M2C_FIELD(M2C_FIELD(temp_r3_10, void **, 4), u8 (**)(void *), 0x24)(temp_r3_10) == 0) {
        return 0;
    }
    var_r29 = M2C_FIELD(var_r29, void **, 4);
    goto loop_4;
}

void fn_8002892C(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        fn_80030B28(M2C_FIELD(arg0, s32 *, 0x18));
    }
}

void RequestNextSystemText(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        fn_80030AD4(M2C_FIELD(arg0, s32 *, 0x18));
    }
}

void fn_8002898C(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        fn_80030A68(M2C_FIELD(arg0, s32 *, 0x18));
    }
}

void HideSystemText(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        fn_80030F44(M2C_FIELD(arg0, s32 *, 0x18));
    }
}

s32 IsSystemTextShown(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        return fn_80030A54(M2C_FIELD(arg0, s32 *, 0x18));
    }
    return 0;
}

void fn_80028A24(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        fn_80023B40(M2C_FIELD(arg0, s32 *, 0x10));
    }
}

void HideDialog(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        fn_8002420C(M2C_FIELD(arg0, s32 *, 0x10));
    }
}

s32 IsDialogShown(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        return fn_80024D34(M2C_FIELD(arg0, s32 *, 0x10));
    }
    return 0;
}

s32 GetDialogState(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        return fn_80024D54(M2C_FIELD(arg0, s32 *, 0x10));
    }
    return 0;
}

void FineTuneDialog(void *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xC);
    M2C_FIELD(temp_r3, f32 *, 0x58) = farg0;
    M2C_FIELD(temp_r3, f32 *, 0x5C) = farg1;
    M2C_FIELD(temp_r3, s32 *, 0x60) = arg1;
    M2C_FIELD(temp_r3, s32 *, 0x64) = arg2;
}

void fn_80028B0C(void *arg0, s32 arg1) {
    void *sp20;
    s32 sp1C;
    void *temp_r3;
    void *sp14;
    M2C_UNK sp10;
    void *spC;
    void *sp8;
    s32 temp_cr0_eq;
    void *temp_r30;
    void *temp_r31;
    s32 sp18;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r5;

    if ((void *) M2C_FIELD(arg0, void **, 0x4C) == NULL) {
        /* draft: did not compile: temp_r3 = get_up_vector_for_viewing_mtx(0xC); */
        if (temp_r3 != NULL) {
            fn_8002F9FC();
        }
        M2C_FIELD(arg0, void **, 0x4C) = temp_r3;
    }
    sp1C = 0;
    sp20 = NULL;
    temp_r4 = M2C_FIELD(arg0, void **, 0x4C);
    sp18 = 0;
    /* draft: did not compile: sp14 = temp_r4 + 4; */
    fn_8002F924(&sp10, temp_r4, &sp14, &sp18);
    temp_cr0_eq = sp20 == NULL;
    if ((temp_cr0_eq == 0) && (temp_cr0_eq == 0)) {
        M2C_FIELD(M2C_FIELD(sp20, void **, 0x20), M2C_UNK (**)(M2C_UNK), 8)(1);
    }
    temp_r5 = M2C_FIELD(arg0, void **, 0x4C);
    temp_r30 = M2C_FIELD(temp_r5, void **, 4);
    M2C_FIELD(temp_r30, s32 *, 8) = arg1;
    GetMotionEndFrame(&spC, 0x1A0, temp_r5);
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
    temp_r31 = M2C_FIELD(M2C_FIELD(sp8, void **, 4), void *(**)(void *), 0xC)(sp8);
    if (sp8 != NULL) {
        M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
        if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
            M2C_FIELD(M2C_FIELD(sp8, void **, 4), M2C_UNK (**)(void *, M2C_UNK), 8)(sp8, 1);
        }
    }
    M2C_FIELD(temp_r30, void **, 0x10) = temp_r31;
    temp_r3_2 = M2C_FIELD(temp_r30, void **, 0x10);
    sp8 = NULL;
    M2C_FIELD(temp_r3_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 8) | 0x200000);
}

void HideButtons(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x55) = 0;
}

void ShowButtons(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x55) = 1;
}

void DisableSystemMenu(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x54) = 0;
}

void EnableSystemMenu(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x54) = 1;
}

void ShowModoru(void *arg0) {
    s32 temp_r0;
    void *temp_r31;
    void *temp_r3;
    void *temp_r5;

    temp_r31 = M2C_FIELD(arg0, void **, 0xC);
    temp_r0 = M2C_FIELD(temp_r31, s32 *, 0xBC);
    if ((temp_r0 == 0) || (temp_r0 == 3)) {
        temp_r5 = M2C_FIELD(temp_r31, void **, 0xA0);
        if (temp_r5 != NULL) {
            M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) & 0xFFDFFFFF);
            M2C_FIELD(temp_r31, s32 *, 0xB8) = method_requestNextMotion(M2C_FIELD(temp_r31, void **, 0xA0), 0x381EE000);
        }
        temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0xA0);
        if (temp_r3 != NULL) {
            M2C_FIELD(temp_r3, s32 *, 8) = (s32) (M2C_FIELD(temp_r3, s32 *, 8) & 0xFFDFFFFF);
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0xBC) = 1;
    }
}

void fn_80028D80(void *arg0) {
    s32 temp_r0;
    void *temp_r31;
    void *temp_r5;

    temp_r31 = M2C_FIELD(arg0, void **, 0xC);
    temp_r0 = M2C_FIELD(temp_r31, s32 *, 0xBC);
    if ((temp_r0 == 2) || (temp_r0 == 1)) {
        temp_r5 = M2C_FIELD(temp_r31, void **, 0xA0);
        if (temp_r5 != NULL) {
            M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) & 0xFFDFFFFF);
            M2C_FIELD(temp_r31, s32 *, 0xB8) = method_requestNextMotion(M2C_FIELD(temp_r31, void **, 0xA0), 0x381EE001);
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0xBC) = 3;
    }
}

s32 fn_80028E00(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0xBC);
    if ((temp_r0 == 2) || (temp_r0 == 1)) {
        return 1;
    }
    return 0;
}

void fn_80028E24(void *arg0, void *arg1, s32 arg2, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_800298E8(void *arg0, s32 arg1, u32 arg2) {
    void *sp10;
    void *spC;
    void *sp8;
    s32 temp_r28_2;
    u32 var_r4;
    void *temp_r28;
    void *temp_r29;
    void *temp_r30;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r5;
    M2C_UNK sp14;

    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x118);
    if (arg1 != M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), s32 (**)(void *), 0xC)(temp_r3)) {
        temp_r3_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x118);
        M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK *), 0x3C)(temp_r3_2, &sp14);
        GetMotionEndFrame((void **)(&spC), (long)(arg1), (void *)(0));
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
        temp_r28 = M2C_FIELD(M2C_FIELD(sp8, void **, 4), void *(**)(void *), 0xC)(sp8);
        if (sp8 != NULL) {
            M2C_FIELD(sp8, s32 *, 0) = (s32) (M2C_FIELD(sp8, s32 *, 0) - 1);
            if (((s32) M2C_FIELD(sp8, s32 *, 0) == 0) && (sp8 != NULL)) {
                M2C_FIELD(M2C_FIELD(sp8, void **, 4), M2C_UNK (**)(void *, M2C_UNK), 8)(sp8, 1);
            }
        }
        temp_r29 = M2C_FIELD(arg0, void **, 0xC);
        sp8 = NULL;
        temp_r3_3 = M2C_FIELD(temp_r29, void **, 0x118);
        if (temp_r3_3 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 0x20), M2C_UNK (**)(M2C_UNK), 8)(1);
        }
        M2C_FIELD(temp_r29, void **, 0x118) = NULL;
        M2C_FIELD(temp_r29, void **, 0x118) = temp_r28;
        temp_r3_4 = M2C_FIELD(temp_r29, void **, 0x118);
        if (temp_r3_4 != NULL) {
            M2C_FIELD(temp_r3_4, s32 *, 8) = (s32) (M2C_FIELD(temp_r3_4, s32 *, 8) & 0xFFDFFFFF);
        }
        temp_r3_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x118);
        M2C_FIELD(M2C_FIELD(temp_r3_5, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK *), 0x38)(temp_r3_5, &sp14);
        if ((u32) (arg2 + 0xC8000000) != 0U) {
            temp_r30 = M2C_FIELD(arg0, void **, 0xC);
            var_r4 = arg2;
            temp_r5 = M2C_FIELD(temp_r30, void **, 0x118);
            if (temp_r5 != NULL) {
                M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) & 0xFFDFFFFF);
                if (!((arg2 >> 0x1BU) & 0xF)) {
                    fn_8001BADC(&sp10, M2C_FIELD(temp_r30, void **, 0x118));
                    temp_r28_2 = M2C_FIELD(M2C_FIELD(sp10, void **, 8), s32 *, 4);
                    if (sp10 != NULL) {
                        M2C_FIELD(sp10, s32 *, 0) = (s32) (M2C_FIELD(sp10, s32 *, 0) - 1);
                        if (((s32) M2C_FIELD(sp10, s32 *, 0) == 0) && (sp10 != NULL)) {
                            M2C_FIELD(M2C_FIELD(sp10, void **, 4), M2C_UNK (**)(M2C_UNK), 8)(1);
                        }
                    }
                    sp10 = NULL;
                    var_r4 = ((temp_r28_2 << 0xC) & 0x07FFF000) | 0x38000000 | (arg2 & 0xFFF);
                }
                M2C_FIELD(temp_r30, s32 *, 0x130) = method_requestMotionUrgently(M2C_FIELD(temp_r30, void **, 0x118), var_r4, lbl_80351618);
            }
        }
    }
}

#pragma push
#pragma peephole off
void fn_80029B5C(void *arg0, f32 farg0, f32 farg1) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f31;
    f32 temp_f3;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        temp_f3 = farg1 - (f32) lbl_80351640;
        temp_f31 = (temp_f3 >= 0.0f) ? farg1 : lbl_80351638;
        M2C_FIELD(arg0, f32 *, 0x60) = temp_f31;
        M2C_FIELD(arg0, f32 *, 0x5C) = farg0;
        sp20 = farg0;
        sp24 = temp_f31;
        sp28 = lbl_80351618;
        temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x118);
        M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(void *, f32 *, f32, f32), 0x38)(temp_r3, &sp20, lbl_80351638, temp_f3);
        temp_r3_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0xF0);
        if (temp_r3_2 != NULL) {
            temp_f1 = temp_f31 - lbl_80351648;
            sp14 = farg0;
            sp1C = lbl_8035164C;
            sp18 = temp_f1;
            M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x20), M2C_UNK (**)(f32 *, f32), 0x38)(&sp14, temp_f1);
            sp8 = lbl_80351650;
            spC = lbl_80351650;
            sp10 = lbl_80351650;
            temp_r3_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0xF0);
            M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 0x20), M2C_UNK (**)(void *, f32 *), 0x28)(temp_r3_3, &sp8);
        }
    }
}
#pragma pop

void fn_80029C60(void *arg0, f32 *arg1, f32 *arg2) {
    f32 spC;
    f32 sp8;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x50) == 0) {
        *arg2 = lbl_80351618;
        *arg1 = lbl_80351618;
    }
    fn_8001E6DC(lbl_803504F8, &spC, &sp8);
    *arg1 = M2C_FIELD(arg0, f32 *, 0x5C) / spC;
    *arg2 = M2C_FIELD(arg0, f32 *, 0x60) / sp8;
}

void fn_80029CE8(void *arg0, s8 arg1) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        M2C_FIELD(arg0, s8 *, 0x53) = arg1;
        M2C_FIELD(arg0, s8 *, 0x54) = arg1;
        M2C_FIELD(arg0, s8 *, 0x55) = arg1;
    }
}

u8 fn_80029D04(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3, M2C_UNK arg_sp0) {
    u8 var_r31;
    u8 var_r31_2;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x50) == 0) {
        return 0U;
    }
    var_r31_2 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x48) != 0) && (fn_8007B144(M2C_FIELD(arg0, s32 *, 0x24)) != 0U)) {
        var_r31_2 = 1;
    }
    var_r31 = 0;
    if ((var_r31_2 != 0) && (fn_8007B144(M2C_FIELD(arg0, s32 *, 0x30)) != 0U)) {
        var_r31 = 1;
    }
    if (var_r31 != 0) {
        if (arg1 != NULL) {
            *arg1 = M2C_FIELD(arg0, s32 *, 0x24);
        }
        if (arg2 != NULL) {
            *arg2 = M2C_FIELD(arg0, s32 *, 0x30);
        }
        if (arg3 != NULL) {
            *arg3 = M2C_FIELD(arg0, s32 *, 0x48);
        }
    }
    return var_r31;
}

s32 fn_80029DD4(void *arg0) { return 0; } /* draft: stub */

s32 fn_80029E60(void *arg0) { return 0; } /* draft: stub */

s32 fn_80029EEC(void *arg0) { return 0; } /* draft: stub */

#pragma push
#pragma dont_inline on
u8 fn_80029F78(void *arg0, s32 *arg1) {
    s32 temp_r29;
    u8 var_r0;
    u8 var_r30;
    u8 var_r30_2;
    u8 var_r3;
    u8 var_r3_2;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x50) == 0) {
        return 0U;
    }
    temp_r29 = M2C_FIELD(arg0, s32 *, 0x30);
    var_r0 = 0;
    if ((temp_r29 != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0)) {
        var_r0 = 1;
    }
    var_r3 = 0;
    if ((var_r0 != 0) && (M2C_FIELD(arg0, s32 *, 0x34) & 0x40)) {
        var_r3 = 1;
    }
    var_r30_2 = 0;
    if ((var_r3 != 0) && ((u8)IsDialogShown(arg0) == 0)) {
        var_r30_2 = 1;
    }
    var_r3_2 = 0;
    if ((var_r30_2 != 0) && ((u8) M2C_FIELD(arg0, u8 *, 0x53) != 0)) {
        var_r3_2 = 1;
    }
    var_r30 = 0;
    if ((var_r3_2 != 0) && (fn_8007B144(temp_r29) != 0U)) {
        var_r30 = 1;
    }
    if ((var_r30 != 0) && (arg1 != NULL)) {
        *arg1 = temp_r29;
    }
    return var_r30;
}
#pragma pop
