/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

void *fn_800A713C(s32);
f32 PSVECDistance();
extern f32 lbl_80351460;
M2C_UNK fn_80070EA8(M2C_UNK *, f32, f32, f32);
M2C_UNK fn_80074F54(s32, M2C_UNK *);
M2C_UNK fn_800754E4(s32, f32 *);
M2C_UNK PSMTXMultVecSR(M2C_UNK *, f32 *, f32 *);
M2C_UNK PSVECSubtract(s32, M2C_UNK *, f32 *);
f64 ArcTan2(f32, f32);
extern f32 lbl_80351458;
void *fn_80013144(f32 *, f32 *);
void *fn_8001A184(s32, s32, s32);
u8 fn_8001A354();
u8 fn_8001D640(void *);
M2C_UNK method_setAnitex(void *, s32);
M2C_UNK method_setAnishape(void *, s32);
M2C_UNK method_playSound(void *, s32, u8, f32);
M2C_UNK method_playSoundEnv(void *, s32, u8, f32);
M2C_UNK PlaySound(s32, s32, u8, M2C_UNK);
s32 GetFloorRegionId(void *, M2C_UNK *);
s32 GetFloorAttr(void *, s32);
extern f32 lbl_80351464;
extern f32 lbl_80351468;
extern f32 *lbl_80352A68;
extern void *lbl_80352A6C;
s32 fn_80013284(s32, u32);
M2C_UNK fn_8001A2B0();
M2C_UNK fn_8001D784();
M2C_UNK method_resetAnitex(void *);
M2C_UNK method_resetAnishape(void *);
M2C_UNK method_requestMotionUrgently(void *, s32, f32);
M2C_UNK fn_80074B04(void *, s32, s32, f32);
extern f32 lbl_8035146C;
M2C_UNK *fn_8001A250(M2C_UNK *, s32, u32, s32);
M2C_UNK fn_8001A280(M2C_UNK *, s32, s32, s32, s32);
M2C_UNK fn_8001D834();
u8 method_isMotionLooped(void *);
void *fn_8001A0E8(s32, M2C_UNK);
M2C_UNK fn_8001D3C8(void *);
M2C_UNK fn_800335EC(void *, M2C_UNK, M2C_UNK);
M2C_UNK fn_80070D60(M2C_UNK *, f32, f32, f32);
M2C_UNK fn_80071314(s32 *, f32 *, M2C_UNK);
f32 method_getCurrentFrame(void *);
M2C_UNK method_getEndFrame(void *);
u8 fn_80075AFC(void *);
M2C_UNK PSMTXQuat(M2C_UNK *, M2C_UNK *);
M2C_UNK C_QUATSlerp(M2C_UNK *, M2C_UNK *, M2C_UNK *, f32);
M2C_UNK fn_80104500(M2C_UNK *, f32 *);
M2C_UNK EulerToQuat();
extern M2C_UNK lbl_801CB288;
extern s32 lbl_8034EB30;
extern f32 lbl_8035145C;
void *fn_8001A114(s32, s32, M2C_UNK, void *);
M2C_UNK PSMTXConcat(M2C_UNK *, M2C_UNK *, M2C_UNK *);
M2C_UNK PSMTXTranspose(M2C_UNK *, M2C_UNK *);
M2C_UNK PSMTXTrans(M2C_UNK *, f32, f32, f32);
M2C_UNK PSMTXTransApply(M2C_UNK *, M2C_UNK *, f32, f32, f32);
M2C_UNK PSMTXMultVec();
M2C_UNK HSD_JObjSetupMatrixSub(void *);
M2C_UNK HSD_MtxGetTranslate();
M2C_UNK __assert(M2C_UNK *, M2C_UNK, M2C_UNK *);
extern M2C_UNK lbl_8034E710;
extern M2C_UNK lbl_8034E718;
M2C_UNK method_setCarryingObject(void *, s32);
extern f32 lbl_80351470;
s32 fn_800735A0(s32, M2C_UNK);
M2C_UNK fn_80073D4C(void *);
s32 fn_80016CB8(u32);
void *fn_80016CEC(u32);
M2C_UNK fn_80075574(void *, f32 *, f32 *);
M2C_UNK fn_8007965C(void *, M2C_UNK);
u8 fn_80070CFC(M2C_UNK **);
M2C_UNK PSVECNormalize(M2C_UNK **, M2C_UNK **);
M2C_UNK PSVECCrossProduct(M2C_UNK **, M2C_UNK **, M2C_UNK **, M2C_UNK *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK lbl_801CB294;
extern M2C_UNK lbl_801CB2A0;
M2C_UNK fn_8001C18C(void **, s32, s32, s32);

void method_setGoalObject(void *arg0, u32 arg1);
void method_setGoal(void *arg0, void *arg1);
s32 fn_8001A920(void *arg0, void *arg1);
f32 method_getGoalDistance(void *arg0);
f32 method_getGoalDistanceXZ(void *arg0);
u32 method_getGoalObject(void *arg0);
f32 method_getGoalRelRotY(s32 arg0);
void fn_8001ABEC(void *arg0);
void fn_8001AE78(void *arg0, void *arg1);
void *fn_8001AFEC(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4, s32 *arg5, u32 arg6, s32 arg7, M2C_UNK arg_sp0, s32 *arg_sp8);
void fn_8001B174(void *arg0);
void fn_8001B3D8(f32 *arg0, f32 farg0, f32 farg1, f32 farg2);
void fn_8001B3E8(void *arg0);
void fn_8001B674(void *arg0, void *arg1, void *arg2, void *arg3, M2C_UNK arg_sp0);
void fn_8001BADC(s32 **arg0, void *arg1);
void fn_8001BB00(void *arg0);
f32 fn_8001BD38(void *arg0);
void fn_8001BDB0(void *arg0);
void fn_8001BE58(void *arg0);
s32 fn_8001BFD0(void *arg0);
void fn_8001BFD8(M2C_UNK **arg0, void *arg1, s32 arg2);
void fn_8001C104(void *arg0, void *arg1);

void method_setGoalObject(void *arg0, u32 arg1) { } /* draft: stub */

void method_setGoal(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x1B8) = 1;
    M2C_FIELD(arg0, f32 *, 0x1BC) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x1C0) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x1C4) = (f32) M2C_FIELD(arg1, f32 *, 8);
}

s32 fn_8001A920(void *arg0, void *arg1) { return 0; } /* draft: stub */

f32 method_getGoalDistance(void *arg0) {
    M2C_UNK sp8;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), M2C_UNK (**)(M2C_UNK *), 0x3C)(&sp8);
    if (fn_8001A920(arg0, 0) != 0) {
        return 0;
    }
    return lbl_80351460;
}

f32 method_getGoalDistanceXZ(void *arg0) {
    f32 spC;
    M2C_UNK sp8;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), M2C_UNK (**)(M2C_UNK *), 0x3C)(&sp8);
    if (fn_8001A920(arg0, 0) == 0) {
        return lbl_80351460;
    }
    spC = M2C_FIELD(arg0, f32 *, 0x1C0);
    return 0;
}

u32 method_getGoalObject(void *arg0) {
    u32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u32 *, 0x1B8);
    if (temp_r4 == 0U) {
        return 0U;
    }
    if (temp_r4 == 1U) {
        return M2C_FIELD(arg0, u32 *, 0);
    }
    if (fn_800A713C(M2C_FIELD(arg0, s32 *, 0x24)) != 0U) {
        return M2C_FIELD(arg0, u32 *, 0x1B8);
    }
    M2C_FIELD(arg0, u32 *, 0x1B8) = 1U;
    return 0U;
}

f32 method_getGoalRelRotY(s32 arg0) {
    s32 sp10;
    s32 sp1C;
    s32 sp18;
    M2C_UNK sp2C;
    M2C_UNK sp20;
    f32 sp14;
    f32 sp8;

    if (fn_8001A920((void *)(0), (void *)(0)) == 0) {
        return lbl_80351458;
    }
    fn_80074F54(arg0, &sp20);
    fn_800754E4(arg0, &sp14);
    PSVECSubtract(arg0 + 0x1BC, &sp20, &sp8);
    fn_80070EA8(&sp2C, sp14, sp18, sp1C);
    PSMTXMultVecSR(&sp2C, &sp8, &sp8);
    return (f32) ArcTan2(sp8, sp10);
}

void fn_8001ABEC(void *arg0) {
    f32 *temp_r31;
    M2C_UNK sp10;
    void *spC;
    f32 *sp8;
    s32 var_r26;
    f32 temp_f31;
    s32 temp_r0;
    f32 **var_r29;
    s32 temp_r28;
    s32 var_r27;
    void *temp_r3;
    void *var_r23;

    sp8 = lbl_80352A68;
    spC = lbl_80352A6C;
    /* draft: did not compile: sp8 = arg0 + 0x1F0; */
    /* draft: did not compile: spC = arg0 + 0x1F8; */
    if ((u8) M2C_FIELD(arg0, u8 *, 0x264) == 0) {
        var_r27 = -1;
        if ((void *) M2C_FIELD(arg0, void **, 0x24) != NULL) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), M2C_UNK (**)(M2C_UNK *), 0x3C)(&sp10);
            var_r27 = GetFloorAttr(M2C_FIELD(arg0, void **, 0x24), GetFloorRegionId(M2C_FIELD(arg0, void **, 0x24), &sp10));
        }
        temp_f31 = lbl_80351464;
        temp_r28 = var_r27 & 0xFFFFFF7F;
        var_r29 = &sp8;
        var_r26 = 0;
        do {
            temp_r31 = *var_r29;
            *temp_r31 += temp_f31;
loop_31:
            temp_r3 = fn_80013144(temp_r31 + 4, temp_r31);
            if (temp_r3 != NULL) {
                temp_r0 = M2C_FIELD(temp_r3, s32 *, 0);
                switch (temp_r0) {                  /* irregular */
                case 1:
                    method_setAnitex(arg0, M2C_FIELD(temp_r3, s32 *, 8));
                    break;
                case 2:
                    method_setAnishape(arg0, M2C_FIELD(temp_r3, s32 *, 8));
                    break;
                case 4:
                    if (fn_8001D640(arg0) != 0) {
                        PlaySound(M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x38), M2C_FIELD(temp_r3, s32 *, 8), (u8) M2C_FIELD(arg0, s32 *, 0x260), 0x40);
                    } else {
                        method_playSound(arg0, M2C_FIELD(temp_r3, s32 *, 8), (u8) M2C_FIELD(arg0, s32 *, 0x260), lbl_80351468);
                    }
                    break;
                case 5:
                    if (fn_8001D640(arg0) != 0) {
                        PlaySound(M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x38), M2C_FIELD(temp_r3, s32 *, 8), (u8) M2C_FIELD(arg0, s32 *, 0x260), 0x40);
                    } else {
                        method_playSoundEnv(arg0, M2C_FIELD(temp_r3, s32 *, 8), (u8) M2C_FIELD(arg0, s32 *, 0x260), lbl_80351468);
                    }
                    break;
                case 6:
                    if (var_r27 != -1) {
                        var_r23 = NULL;
                        if (0 /* draft: did not compile */) {
                            var_r23 = fn_8001A184(M2C_FIELD(M2C_FIELD(arg0, void **, 0x204), s32 *, 0x34), temp_r28, M2C_FIELD(temp_r3, s32 *, 8));
                        }
                        if (var_r23 == NULL) {
                            u16 tmp2 = M2C_FIELD(temp_r3, s32 *, 8);
                            var_r23 = fn_8001A184(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), void **, 8), s32 *, 0x3C), temp_r28, tmp2);
                        }
                        if (var_r23 != NULL) {
                            if (fn_8001D640(arg0) != 0) {
                                PlaySound(M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x38), (s32) M2C_FIELD(var_r23, u16 *, 8), M2C_FIELD(var_r23, u8 *, 0xA), 0x40);
                            } else {
                                method_playSoundEnv(arg0, (s32) M2C_FIELD(var_r23, u16 *, 8), M2C_FIELD(var_r23, u8 *, 0xA), lbl_80351468);
                            }
                        }
                    }
                    break;
                }
                goto loop_31;
            }
            var_r26 += 1;
            var_r29 += 4;
        } while (var_r26 < 2);
    }
}

void fn_8001AE78(void *arg0, void *arg1) {
    void *sp10;
    s32 spC;
    M2C_UNK sp8;
    s32 temp_r0;
    void *temp_r31;
    void *temp_r7;

    if (fn_8001A354(arg1) == 0) {
        method_requestMotionUrgently(arg0, 0x38000000, lbl_80351458);
        /* draft: did not compile: fn_8001A2B0(arg0 + 0x200); */
        /* draft: did not compile: temp_r7 = arg0 + 0x210; */
        sp10 = temp_r7;
        spC = M2C_FIELD(arg0, s32 *, 0x214);
        /* draft: did not compile: fn_8001D784(&sp8, arg0 + 0x20C, &spC, &sp10, temp_r7); */
        fn_8001BDB0(arg0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x200) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, void **, 0x204) = (void *) M2C_FIELD(arg1, void **, 4);
    M2C_FIELD(arg0, s32 *, 0x208) = (s32) M2C_FIELD(arg1, s32 *, 8);
    fn_8001BDB0(arg0);
    temp_r31 = M2C_FIELD(arg0, void **, 0x204);
    temp_r0 = M2C_FIELD(temp_r31, s32 *, 0xC) & 3;
    switch (temp_r0) {                              /* irregular */
    case 2:
        break;
    case 1:
        method_requestMotionUrgently(arg0, M2C_FIELD(temp_r31, s32 *, 0x10), lbl_80351458);
        break;
    case 3:
        fn_80074B04(arg0, M2C_FIELD(temp_r31, s32 *, 0x14), M2C_FIELD(temp_r31, s32 *, 0x18), lbl_8035146C * M2C_FIELD(temp_r31, f32 *, 0x20));
        break;
    }
    if ((u32) M2C_FIELD(temp_r31, u32 *, 0x2C) != 0U) {
        M2C_FIELD(arg0, f32 *, 0x1F0) = (f32) lbl_80351458;
        M2C_FIELD(arg0, s32 *, 0x1F4) = 0;
        M2C_FIELD(arg0, s32 *, 0x1F4) = fn_80013284(M2C_FIELD(arg0, s32 *, 0x208), M2C_FIELD(temp_r31, u32 *, 0x2C));
        method_resetAnitex(arg0);
        method_resetAnishape(arg0);
    }
    if ((u32) M2C_FIELD(temp_r31, u32 *, 0x30) != 0U) {
        M2C_FIELD(arg0, f32 *, 0x1F8) = (f32) lbl_80351458;
        M2C_FIELD(arg0, s32 *, 0x1FC) = 0;
        M2C_FIELD(arg0, s32 *, 0x1FC) = fn_80013284(M2C_FIELD(arg0, s32 *, 0x208), M2C_FIELD(temp_r31, u32 *, 0x30));
    }
}

void *fn_8001AFEC(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4, s32 *arg5, u32 arg6, s32 arg7, M2C_UNK arg_sp0, s32 *arg_sp8) { } /* draft: stub */

void fn_8001B174(void *arg0) { } /* draft: stub */

void fn_8001B3D8(f32 *arg0, f32 farg0, f32 farg1, f32 farg2) {
    *arg0 = (farg2 * (farg1 - farg0)) + farg0;
}

void fn_8001B3E8(void *arg0) { } /* draft: stub */

void fn_8001B674(void *arg0, void *arg1, void *arg2, void *arg3, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8001BADC(s32 **arg0, void *arg1) {
    s32 *temp_r4;

    *arg0 = M2C_FIELD(arg1, s32 **, 0x5C);
    temp_r4 = *arg0;
    if (temp_r4 != NULL) {
        *temp_r4 += 1;
    }
}

void fn_8001BB00(void *arg0) {
    s32 sp1C;
    s32 sp18;
    s32 sp80;
    s32 sp8C;
    s32 sp7C;
    s32 sp88;
    M2C_UNK sp90;
    f32 sp84;
    f32 sp78;
    M2C_UNK sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    M2C_UNK sp54;
    M2C_UNK sp44;
    M2C_UNK sp34;
    M2C_UNK sp24;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f29;
    f32 temp_f29_2;
    f32 temp_f30;
    f32 temp_f31;
    void *temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x1CC) != 0) {
        temp_r3 = fn_800A713C(M2C_FIELD(arg0, s32 *, 0x24));
        if (temp_r3 == NULL) {
            M2C_FIELD(arg0, s32 *, 0x1CC) = 0;
            return;
        }
        if (0 /* draft: did not compile */) {
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(void *, f32 *), 0x3C)(temp_r3, &sp84);
            fn_8001B674((void *)(arg0), (void *)(temp_r3), (void *)(&sp78), (void *)(&sp6C), (long)(0));
            temp_f29 = M2C_FIELD(fn_8001A0E8(M2C_FIELD(M2C_FIELD(arg0, void **, 0x204), s32 *, 0x34), 2), f32 *, 4);
            temp_f30 = method_getCurrentFrame(arg0);
            temp_f31 = method_getEndFrame(arg0);
            if (fn_80075AFC(arg0) != 0) {
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(void *, f32 *), 0x38)(temp_r3, &sp78);
                method_setCarryingObject(arg0, M2C_FIELD(arg0, s32 *, 0x1CC));
                return;
            }
            M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
            if ((temp_f29 == temp_f30) && (temp_f30 < temp_f31)) {
                temp_f29_2 = lbl_8035145C / (temp_f31 - temp_f30);
                fn_8001B3D8(&sp60, sp84, sp78, temp_f29_2);
                fn_8001B3D8(&sp64, sp88, sp7C, temp_f29_2);
                fn_8001B3D8(&sp68, sp8C, sp80, temp_f29_2);
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(void *, f32 *), 0x38)(temp_r3, &sp60);
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(void *, M2C_UNK *), 0x34)(temp_r3, &sp54);
                EulerToQuat(&sp54, &sp44);
                EulerToQuat(&sp6C, &sp34);
                C_QUATSlerp(&sp44, &sp34, &sp24, temp_f29_2);
                PSMTXQuat(&sp90, &sp24);
                fn_80104500(&sp90, &sp14);
                sp8 = sp14;
                spC = sp18;
                sp10 = sp1C;
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(void *, f32 *, f32, f32), 0x30)(temp_r3, &sp8, sp18, sp14);
            }
        }
    }
}

f32 fn_8001BD38(void *arg0) {
    void *var_r3;

    if (0 /* draft: did not compile */) {
        var_r3 = fn_8001A0E8(M2C_FIELD(M2C_FIELD(arg0, void **, 0x204), s32 *, 0x34), 1);
        if (var_r3 == NULL) {
            var_r3 = fn_8001A0E8(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), void **, 8), s32 *, 0x3C), 1);
        }
        if (var_r3 != NULL) {
            return M2C_FIELD(var_r3, f32 *, 4);
        }
        goto block_5;
    }
block_5:
    return lbl_80351470;
}

#pragma push
#pragma peephole off
void fn_8001BDB0(void *arg0) {
    s32 temp_r31;
    void *var_r31;

    var_r31 = NULL;
    if (0 /* draft: did not compile */) {
        var_r31 = fn_8001A0E8(M2C_FIELD(M2C_FIELD(arg0, void **, 0x204), s32 *, 0x34), 5);
    }
    if (var_r31 == NULL) {
        var_r31 = fn_8001A0E8(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), void **, 8), s32 *, 0x3C), 5);
    }
    if (var_r31 == NULL) {
        M2C_FIELD(arg0, s32 *, 0x1EC) = 0;
        return;
    }
    temp_r31 = M2C_FIELD(var_r31, s32 *, 8);
    fn_80073D4C(arg0);
    M2C_FIELD(arg0, s32 *, 0x1EC) = fn_800735A0(temp_r31, 0x4A);
}
#pragma pop

void fn_8001BE58(void *arg0) {
    s32 temp_r29;
    s32 sp14;
    f32 spC;
    f32 sp8;
    s32 sp10;
    u32 temp_r31;
    s8 var_r30;
    void *temp_r31_2;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x24);
    temp_r31 = M2C_FIELD(temp_r4, u32 *, 0x3C);
    if ((M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), u32 (**)(void *), 0x10)(temp_r4) == 0U) || (temp_r31 == 0U) || (M2C_FIELD(arg0, s32 *, 8) & 0x200000)) {
        M2C_FIELD(arg0, s32 *, 0x258) = 0;
        return;
    }
    temp_r29 = fn_80016CB8(temp_r31);
    temp_r31_2 = fn_80016CEC(temp_r31);
    fn_80075574(arg0, &spC, &sp8);
    var_r30 = 1;
    PSMTXMultVec(temp_r29, &spC, &spC);
    if ((sp8 + ((sp14 * -M2C_FIELD(temp_r31_2, f32 *, 0)) + (-M2C_FIELD(temp_r31_2, f32 *, 4) * (f32) fabs(spC)))) < lbl_80351458) {
        var_r30 = 0;
    }
    if ((sp8 + ((sp14 * -M2C_FIELD(temp_r31_2, f32 *, 8)) + (-M2C_FIELD(temp_r31_2, f32 *, 0xC) * (f32) fabs(sp10)))) < lbl_80351458) {
        var_r30 = 0;
    }
    if (var_r30 != 0) {
        M2C_FIELD(arg0, s32 *, 0x258) = (s32) (M2C_FIELD(arg0, s32 *, 0x258) + 1);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x258) > 0x2D) {
        fn_8007965C(arg0, 0xF);
    }
    M2C_FIELD(arg0, s32 *, 0x258) = 0;
}

s32 fn_8001BFD0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C8);
}

void fn_8001BFD8(M2C_UNK **arg0, void *arg1, s32 arg2) { } /* draft: stub */

void fn_8001C104(void *arg0, void *arg1) {
    s32 sp14;
    s32 sp10;
    s32 spC;
    void *sp8;
    s32 temp_r5;
    s32 temp_r6;

    if (0 /* draft: did not compile */) {
        if (M2C_FIELD(arg0, s32 *, 8) & 0x200000) {
            return;
        }
        temp_r6 = M2C_FIELD(arg1, s32 *, 0);
        temp_r5 = M2C_FIELD(arg1, s32 *, 4);
        sp8 = arg0;
        spC = temp_r6;
        sp10 = temp_r5;
        sp14 = M2C_FIELD(arg1, s32 *, 8);
        fn_8001C18C(&sp8, ((u32) (M2C_FIELD(arg0, s32 *, 0xC) & lbl_8034EB30) >> 0x16U) & 1, temp_r5, temp_r6);
    }
}
