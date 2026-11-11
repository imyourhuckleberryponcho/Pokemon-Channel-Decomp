/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

void *fn_80034700();
M2C_UNK fn_800058E8();
extern u32 lbl_803504FC;
extern u32 lbl_80350500;
void *get_up_vector_for_viewing_mtx_inner();
s32 OSGetResetCode();
s32 OSGetTick();
void *get_up_vector_for_viewing_mtx();
M2C_UNK fn_8001498C();
M2C_UNK fn_80014BC4();
void *fn_8001573C(s32);
void *fn_8001677C(void *);
M2C_UNK fn_8001E5B8();
void *fn_8001E5BC();
M2C_UNK fn_8001F818();
u8 fn_8001F89C();
M2C_UNK fn_80021B68();
void *fn_800250B8();
void *fn_80027828();
void *fn_8002786C(M2C_UNK);
void *fn_80027F54();
M2C_UNK fn_800372E8(M2C_UNK *, M2C_UNK *, M2C_UNK);
s32 *fn_80038264(M2C_UNK, M2C_UNK);
M2C_UNK fn_8007AF58();
M2C_UNK fn_8007B1D0();
M2C_UNK PadSetMux(M2C_UNK, M2C_UNK);
M2C_UNK fn_80081364(M2C_UNK, s32 *);
M2C_UNK fn_800B6648();
M2C_UNK AIInit(M2C_UNK);
M2C_UNK ARInit(M2C_UNK *, M2C_UNK);
M2C_UNK fn_800D510C();
M2C_UNK ARQInit();
M2C_UNK CARDInit();
M2C_UNK fn_800FFA90();
M2C_UNK fn_801001F0(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK);
M2C_UNK HSD_VISetConfigure(void *);
M2C_UNK fn_80102D10(M2C_UNK, void *, M2C_UNK, void *);
M2C_UNK fn_80135DFC(M2C_UNK *, M2C_UNK);
M2C_UNK fn_801441B8();
extern M2C_UNK fn_80038308;
extern M2C_UNK fn_8003835C;
extern M2C_UNK fn_80038384;
extern M2C_UNK fn_80038388;
extern M2C_UNK fn_80038390;
extern u32 lbl_801E1118;
extern M2C_UNK lbl_80223318;
extern M2C_UNK lbl_802A37E0;
extern M2C_UNK lbl_802A4600;
extern M2C_UNK lbl_802C0248;
extern M2C_UNK lbl_8031E920;
extern s32 *lbl_803502D0;
extern void *lbl_803504EC;
extern void *lbl_803504F0;
extern void *lbl_803504F4;
extern void *lbl_803504F8;
extern M2C_UNK lbl_8035054C;
extern void *lbl_80350554;
extern void *lbl_80350558;
extern s32 *lbl_8035055C;
extern s32 *lbl_80350560;
extern void *lbl_80350564;
extern s8 lbl_8035056D;
extern s8 lbl_8035056E;
M2C_UNK OSResetSystem(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK VIWaitForRetrace();
M2C_UNK VIFlush();
M2C_UNK VISetBlack(M2C_UNK);
M2C_UNK GXDrawDone();
M2C_UNK fn_800278E0();
M2C_UNK fn_80027A34();
M2C_UNK GXSetCopyClear(s32 *, M2C_UNK);
M2C_UNK HSD_ImageDescCopyFromEFB(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 lbl_80352A70;
s32 fn_8009BC78();
s32 fn_8010118C();
M2C_UNK fn_8010129C();
extern M2C_UNK lbl_8031D320;
extern s32 lbl_8034E958;
M2C_UNK fn_80101220();
M2C_UNK fn_80101384();
M2C_UNK fn_80015570(M2C_UNK, M2C_UNK, M2C_UNK);
s32 fn_8001741C(u32);
M2C_UNK method_setHoldObject(u32, s32);
M2C_UNK method_releaseHoldObject(u32);
M2C_UNK fn_8001750C(u32);
u8 IsDialogShown(void *);
M2C_UNK fn_80028B0C(void *, s32);
u8 fn_80029D04(void *, s32 *, s32 *, s32 *);
u8 fn_80029DD4(void *);
u8 fn_80029E60(void *);
u8 fn_80029EEC(void *);
u8 fn_80029F78(void *, s32 *);
u8 fn_8002A080(void *, s32 *);
u8 fn_8002BAC8(void *);
u8 fn_8002BB24(void *);
M2C_UNK OpenSystemMenu(void *);
M2C_UNK CloseSystemMenu(void *);
M2C_UNK fn_8002DA1C(void *, void *, s32);
M2C_UNK fn_800792BC(void *, M2C_UNK, s32);
M2C_UNK fn_800792DC(void *, s32, s32, s32);
M2C_UNK fn_80079498(s32, s32);
M2C_UNK fn_8007963C(void *, M2C_UNK, s32);
s32 fn_8007B144(s32);
s32 PadGetTrigger(M2C_UNK);
f32 PadGetNormalAnalogL(M2C_UNK);
f32 PadGetNormalAnalogR(M2C_UNK);
M2C_UNK method_eraseMessages(u32, M2C_UNK, M2C_UNK);
u8 fn_800A3860();
u8 fn_800A3868();
u32 fn_800A71F8(s32, M2C_UNK);
void *fn_800A7338(s32, M2C_UNK);
s32 GetFocusObjectID(s32);
extern s32 lbl_802CE700;
extern void *lbl_803504E8;
extern s32 lbl_80350570;
extern u8 lbl_80350574;
extern u8 lbl_80350575;
extern u8 lbl_80350576;
extern u8 lbl_80350577;
extern u8 lbl_80350578;
extern f32 lbl_803517E8;
extern f32 lbl_803517EC;
M2C_UNK OSDisableInterrupts();
M2C_UNK OSReport(void *, u16, u16, u32);
M2C_UNK OSRestoreInterrupts();
void *fn_8000E428();
M2C_UNK fn_8000E508(void *, M2C_UNK);
u8 fn_8000E5B0(void *);
M2C_UNK fn_80012ADC(M2C_UNK);
M2C_UNK fn_800146F0(void **, M2C_UNK);
M2C_UNK StackSfxGroup(M2C_UNK);
M2C_UNK fn_80014F18(M2C_UNK);
M2C_UNK fn_80015508(u8);
M2C_UNK fn_80015644(u8);
s32 method_getApproachingObject(u32);
s32 fn_800176F4(u32);
M2C_UNK fn_8001E624(void *, f32 *, f32 *);
M2C_UNK fn_8001F5D8(void *, s32);
M2C_UNK fn_800202C0();
M2C_UNK fn_80027F30(s32 *);
M2C_UNK fn_80029B5C(void *, f32, f32, f32);
M2C_UNK fn_8002A304(void *, s32 *, s32);
M2C_UNK fn_80079CCC(void *);
M2C_UNK PadSetXlatRatio(f32);
M2C_UNK PadSetNormalXlatRatio(f32);
M2C_UNK fn_8008085C(M2C_UNK, M2C_UNK);
M2C_UNK fn_8009BD80(void *, M2C_UNK);
s32 fn_8009BEEC(void *);
M2C_UNK fn_8009C564(void *, s32);
M2C_UNK fn_800A33D0();
M2C_UNK fn_800A48BC();
M2C_UNK fn_800A4D50(s32);
M2C_UNK GXInvalidateTexAll();
M2C_UNK fn_800FF658(s32, s32);
M2C_UNK fn_800FF664(s32 *, s32 *);
extern u8 lbl_80350489;
extern void **lbl_80350504;
extern s32 lbl_8035050C;
extern void *lbl_8035051C;
extern s32 lbl_80350540;
extern u8 lbl_80350579;
extern u8 lbl_8035057A;
extern u8 lbl_8035057B;
extern u8 lbl_8035057C;
extern u8 lbl_8035057D;
extern u8 lbl_8035057E;
extern s32 lbl_80350580;
extern u8 lbl_80350584;
extern u8 lbl_803506B8;
extern f32 lbl_803517F0;
extern f32 lbl_803517F4;

void fn_8003472C(void);
void fn_8003475C(void);
void SetViewport(s16 arg0, s16 arg1, s16 arg2, s16 arg3);
void fn_80034858(M2C_UNK arg_sp0);
void fn_80034C20(void);
void ResetSystem(void);
void fn_80034C64(void);
s32 fn_80034CC8(s32 arg0);
void fn_80034D20(void);
void fn_80034D24(void);
void fn_80034D88(void);
void fn_80034DC8(void *arg0);
u8 fn_80035358(void);

void fn_8003472C(void) {
    M2C_FIELD(fn_80034700(), s8 *, 1) = 1;
}

void fn_8003475C(void) {
    if ((u32) lbl_803504FC != 0U) {
        fn_800058E8();
        lbl_803504FC = 0U;
    }
    if ((u32) lbl_80350500 != 0U) {
        fn_800058E8();
        lbl_80350500 = 0U;
    }
}

void SetViewport(s16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    if ((void *) lbl_803504FC == NULL) {
        /* draft: did not compile: lbl_803504FC = get_up_vector_for_viewing_mtx_inner(8); */
    }
    /* draft: did not compile: lbl_80350500 = get_up_vector_for_viewing_mtx_inner(8); */
    M2C_FIELD(lbl_803504FC, s16 *, 0) = arg0;
    M2C_FIELD(lbl_803504FC, s16 *, 2) = arg2;
    M2C_FIELD(lbl_803504FC, s16 *, 4) = arg1;
    M2C_FIELD(lbl_803504FC, s16 *, 6) = arg3;
    M2C_FIELD(lbl_80350500, s16 *, 0) = arg0;
    M2C_FIELD(lbl_80350500, s16 *, 2) = arg2;
    M2C_FIELD(lbl_80350500, s16 *, 4) = arg1;
    M2C_FIELD(lbl_80350500, s16 *, 6) = arg3;
}

void fn_80034858(M2C_UNK arg_sp0) {
    M2C_UNK *temp_r27;
    s32 *temp_r3_2;
    s32 *temp_r3_3;
    s32 *var_r28_2;
    s32 temp_r3;
    s32 var_r26_2;
    u32 *var_r28;
    u32 temp_r29;
    u8 var_r26;
    u8 var_r29;
    void **var_r29_2;
    void *temp_r26;
    void *temp_r28;
    void *var_r0;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r0_4;
    void *var_r0_5;
    void *var_r0_6;
    void *var_r0_7;
    void *var_r5;

    fn_801001F0(7, &fn_80038308, &fn_8003835C, &fn_80038384, &fn_80038388, &fn_80038390, 0);
    temp_r28 = fn_80034700();
    temp_r3 = OSGetResetCode() == 0x80000000;
    temp_r29 = (u32) (-temp_r3 | temp_r3) >> 0x1FU;
    if (temp_r29 == 0) {
        M2C_FIELD(temp_r28, u8 *, 0) = 0U;
        M2C_FIELD(temp_r28, s8 *, 1) = 0;
    }
    temp_r27 = &lbl_80223318 + 0xCC;
    temp_r26 = &lbl_80223318 + 0x90;
    M2C_FIELD(temp_r27, s16 *, 6) = 0x1E0;
    M2C_FIELD(temp_r27, s16 *, 8) = 0x1E0;
    M2C_FIELD(temp_r27, s16 *, 0xC) = 0;
    M2C_FIELD(temp_r27, s16 *, 0x10) = 0x1E0;
    M2C_FIELD(temp_r26, s16 *, 6) = 0x1E0;
    M2C_FIELD(temp_r26, s16 *, 8) = 0x1E0;
    M2C_FIELD(temp_r26, s16 *, 0xC) = 0;
    M2C_FIELD(temp_r26, s16 *, 0x10) = 0x1E0;
    if ((temp_r29 != 0) && ((u8) M2C_FIELD(temp_r28, u8 *, 0) != 0)) {
        fn_801001F0((long)(4), (long *)(temp_r27), (long *)(0), (long *)(0), (long *)(0), (long *)(0), (long)(0));
        lbl_8035056E = 1;
        lbl_8035056D = 1;
    } else {
        fn_801001F0((long)(4), (long *)(&lbl_80223318 + 0x90), (long *)(0), (long *)(0), (long *)(0), (long *)(0), (long)(0));
    }
    fn_800FFA90();
    M2C_FIELD(temp_r27, s16 *, 6) = 0x1C0;
    M2C_FIELD(temp_r27, s16 *, 8) = 0x1C0;
    M2C_FIELD(temp_r27, s16 *, 0xC) = 0x10;
    M2C_FIELD(temp_r27, s16 *, 0x10) = 0x1C0;
    M2C_FIELD(temp_r26, s16 *, 6) = 0x1C0;
    M2C_FIELD(temp_r26, s16 *, 8) = 0x1C0;
    M2C_FIELD(temp_r26, s16 *, 0xC) = 0x10;
    M2C_FIELD(temp_r26, s16 *, 0x10) = 0x1C0;
    if ((temp_r29 != 0) && ((u8) M2C_FIELD(temp_r28, u8 *, 0) != 0)) {
        HSD_VISetConfigure(&lbl_80223318 + 0xCC);
        lbl_8035056E = 1;
        lbl_8035056D = 1;
    } else {
        HSD_VISetConfigure(&lbl_80223318 + 0x90);
    }
    fn_80102D10(5, &lbl_802C0248 + 0x138, 8, &lbl_802C0248 + 0x23C);
    M2C_FIELD(&lbl_8031E920, s32 *, 0xC) = 0xF;
    M2C_FIELD(&lbl_8031E920, s32 *, 0x10) = 2;
    fn_80135DFC(&lbl_8031E920, 0xF);
    fn_8007B1D0();
    PadSetMux(0, 2);
    fn_800D510C();
    ARInit(&lbl_8035054C, 2);
    ARQInit();
    AIInit(0);
    CARDInit();
    fn_801441B8();
    fn_800B6648();
    fn_8007AF58();
    fn_8001F818();
    fn_8001498C();
    fn_80014BC4();
    fn_80021B68();
    var_r26 = 1;
    var_r28 = &lbl_801E1118;
loop_15:
    if ((u32) *var_r28 != 0U) {
        var_r29 = 0;
        if ((fn_8001F89C() != 0) && (var_r26 != 0)) {
            var_r29 = 1;
        }
        var_r26 = var_r29;
        var_r28 += 4;
        goto loop_15;
    }
    temp_r3_2 = fn_80038264((long)(0x21DE0), (long)(0));
    lbl_8035055C = temp_r3_2;
    *temp_r3_2 = 0;
    temp_r3_3 = fn_80038264(0x21DE0, 0x20000);
    lbl_80350560 = temp_r3_3;
    *temp_r3_3 = 0;
    var_r0 = get_up_vector_for_viewing_mtx((long)(0x48), (void *)(0));
    if (var_r0 != NULL) {
        var_r0 = fn_80027828();
    }
    lbl_80350554 = var_r0;
    var_r0_2 = get_up_vector_for_viewing_mtx((long)(0x48), (void *)(0));
    if (var_r0_2 != NULL) {
        var_r0_2 = fn_8002786C(0x96000);
    }
    lbl_80350558 = var_r0_2;
    var_r5 = get_up_vector_for_viewing_mtx((long)(0x48), (void *)(0));
    if (var_r5 != NULL) {
        var_r5 = fn_8002786C(0x25800);
    }
    lbl_80350564 = var_r5;
    M2C_FIELD(var_r5, s16 *, 0x3C) = 0x140;
    M2C_FIELD(lbl_80350564, s16 *, 0x3E) = 0xF0;
    var_r0_3 = get_up_vector_for_viewing_mtx(0x1F8, lbl_80350564);
    if (var_r0_3 != NULL) {
        var_r0_3 = fn_8001677C(&lbl_80223318 + 0x130);
    }
    lbl_803504F4 = var_r0_3;
    fn_8001E5B8();
    var_r0_4 = get_up_vector_for_viewing_mtx((long)(0x44), (void *)(0));
    if (var_r0_4 != NULL) {
        var_r0_4 = fn_8001E5BC();
    }
    lbl_803504F8 = var_r0_4;
    var_r28_2 = &lbl_80223318 + 0x38;
    /* draft: did not compile: var_r29_2 = &lbl_802C0248 + 0x28; */
    var_r26_2 = 0;
    do {
        var_r0_5 = get_up_vector_for_viewing_mtx((long)(0x24), (void *)(0));
        if (var_r0_5 != NULL) {
            var_r0_5 = fn_8001573C(*var_r28_2);
        }
        var_r26_2 += 1;
        *var_r29_2 = var_r0_5;
        var_r28_2 += 4;
        var_r29_2 += 4;
    } while (var_r26_2 < 4);
    var_r0_6 = get_up_vector_for_viewing_mtx((long)(0x14), (void *)(0));
    if (var_r0_6 != NULL) {
        var_r0_6 = fn_800250B8();
    }
    lbl_803504EC = var_r0_6;
    var_r0_7 = get_up_vector_for_viewing_mtx((long)(0x124), (void *)(0));
    if (var_r0_7 != NULL) {
        var_r0_7 = fn_80027F54();
    }
    lbl_803504F0 = var_r0_7;
    *lbl_803502D0 = OSGetTick();
    fn_80081364(0, lbl_803502D0);
    fn_800372E8(&lbl_802A37E0, &lbl_802A4600, 2);
}

void fn_80034C20(void) {

}

void ResetSystem(void) {
    GXDrawDone();
    VISetBlack(1);
    VIFlush();
    VIWaitForRetrace();
    OSResetSystem(0, 0, 0);
}

void fn_80034C64(void) {
    s32 sp8;

    sp8 = lbl_80352A70;
    GXSetCopyClear(&sp8, 0xFFFFFF);
    fn_800278E0(lbl_80350558, 0x280, 0x1E0, 4);
    fn_80027A34(lbl_80350558);
    HSD_ImageDescCopyFromEFB(0, 0, 1, 1);
}

s32 fn_80034CC8(s32 arg0) {
    s32 var_r0;

    /* draft: did not compile: var_r0 = get_up_vector_for_viewing_mtx((long)(0x298), (void *)(0)); */
    if (var_r0 != 0) {
        var_r0 = fn_8009BC78(arg0, 0x7F, -1, -1, -1);
    }
    return var_r0;
}

void fn_80034D20(void) {

}

void fn_80034D24(void) {
    lbl_8034E958 = fn_8010118C();
    fn_8010129C();
    M2C_FIELD(lbl_80350554, s32 *, 0x40) = 4;
    M2C_FIELD(lbl_80350554, s32 *, 0x30) = (s32) M2C_FIELD((&lbl_8031D320 + (lbl_8034E958 * 0x60)), s32 *, 0x58);
    M2C_FIELD(lbl_80350554, s32 *, 0x34) = 0x96000;
}

void fn_80034D88(void) {
    fn_80101220();
    fn_80101384();
    lbl_8034E958 = -1;
    M2C_FIELD(lbl_80350554, s32 *, 0x30) = 0;
    M2C_FIELD(lbl_80350554, s32 *, 0x34) = 0;
}

void fn_80034DC8(void *arg0) {
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    f32 temp_f1;
    f32 temp_f31;
    u8 var_r28_2;
    s32 temp_r3;
    s32 var_r31;
    s32 var_r3;
    u32 temp_r27_2;
    u32 temp_r30;
    u32 var_r3_2;
    u8 temp_r29;
    u8 var_r28;
    s32 temp_r27;
    void *temp_r3_2;

    temp_r3 = PadGetTrigger(0);
    if ((s8) lbl_80350574 == 0) {
        lbl_80350570 = 0;
        lbl_80350574 = 1;
    }
    var_r31 = temp_r3 & 0xFFFFFF9F;
    temp_f31 = PadGetNormalAnalogL(0);
    temp_f1 = PadGetNormalAnalogR(0);
    if (!(lbl_80350570 & 0x40)) {
        if (temp_f31 >= lbl_803517E8) {
            var_r31 = var_r31 | 0x40;
            lbl_80350570 = lbl_80350570 | 0x40;
        }
    }
    if (!(lbl_80350570 & 0x20)) {
        if (temp_f1 >= lbl_803517E8) {
            var_r31 = var_r31 | 0x20;
            lbl_80350570 = lbl_80350570 | 0x20;
        }
    }
    if ((lbl_80350570 & 0x40) && (temp_f31 < lbl_803517EC)) {
        lbl_80350570 = lbl_80350570 & 0xFFFFFFBF;
    }
    if ((lbl_80350570 & 0x20) && (temp_f1 < lbl_803517EC)) {
        lbl_80350570 = lbl_80350570 & 0xFFFFFFDF;
    }
    if (IsDialogShown(lbl_803504F0) != 0) {
        var_r31 = 0;
    }
    temp_r27 = M2C_FIELD(arg0, s32 *, 0x278);
    temp_r30 = fn_800A71F8(temp_r27, 1);
    if (var_r31 & 0x1000) {
        if (fn_8002BB24(lbl_803504F0) != 0) {
            CloseSystemMenu(lbl_803504F0);
            var_r31 = var_r31 & 0xFFFFEFFF;
        } else if (fn_8002BAC8(lbl_803504F0) != 0) {
            OpenSystemMenu(lbl_803504F0);
            var_r31 = var_r31 & 0xFFFFEFFF;
        }
    }
    if ((var_r31 & 0xB60) && (fn_8002BB24(lbl_803504F0) != 0)) {
        fn_8002DA1C(lbl_803504F0, arg0, var_r31);
        var_r31 = var_r31 & (~0xB60);
    }
    if (var_r31 & 0x100) {
        if (temp_r30 != 0U) {
            var_r3 = fn_8001741C(temp_r30);
        } else {
            var_r3 = 0;
        }
        sp14 = var_r3;
        if ((fn_80029F78(lbl_803504F0, &sp18) != 0) && (temp_r30 != 0U)) {
            s32 tmp1 = fn_8007B144(sp18);
            method_setHoldObject(temp_r30, tmp1);
            fn_80079498(temp_r27, sp18);
            var_r31 = var_r31 & 0xFFFFFEFF;
            fn_80015570(0x3F0, 0x60, 0x40);
        } else if ((fn_8002A080(lbl_803504F0, &sp14) != 0) && (temp_r30 != 0U) && (sp14 == fn_8001741C(temp_r30))) {
            fn_8007B144(sp14);
            fn_8001750C(temp_r30);
            var_r31 = var_r31 & 0xFFFFFEFF;
            fn_80015570(0x3F0, 0x60, 0x40);
        }
    }
    if ((s8) lbl_80350576 == 0) {
        lbl_80350575 = 0;
        lbl_80350576 = 1;
    }
    var_r28 = 0;
    if ((fn_800A3860() != 0) && (fn_800A3868() != 0)) {
        var_r28 = 1;
    }
    if ((var_r28 != 0) || ((u8) lbl_80350575 != 0)) {
        var_r31 = var_r31 & 0xFFFFFEFF;
    }
    lbl_80350575 = var_r28;
    var_r28_2 = 1;
    if ((fn_8002BB24(lbl_803504F0) == 0) && (IsDialogShown(lbl_803504F0) == 0)) {
        var_r28_2 = 0;
    }
    if ((s8) lbl_80350578 == 0) {
        lbl_80350577 = 0;
        lbl_80350578 = 1;
    }
    if (((u8) lbl_80350577 != 0) && (var_r28_2 == 0)) {
        temp_r27_2 = M2C_FIELD(arg0, u32 *, 4);
        method_eraseMessages(temp_r27_2, 1, 8);
        method_eraseMessages(temp_r27_2, 0xC, 0xE);
    }
    lbl_80350577 = var_r28_2;
    if (var_r28_2 == 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 4) != 0U) {
            sp10 = 0;
            if ((u8) M2C_FIELD(lbl_803504F0, u8 *, 0x53) != 0) {
                sp10 = GetFocusObjectID(M2C_FIELD(arg0, s32 *, 0x278));
            }
            if (!(lbl_802CE700 & 0x100) && (var_r31 & 0x100)) {
                temp_r29 = fn_80029D04(lbl_803504F0, &spC, &sp10, &sp8);
                if (sp10 != 0) {
                    fn_80015570(0x3F0, 0x60, 0x40);
                    fn_80028B0C(lbl_803504F0, sp10);
                }
                if ((temp_r29 != 0) && (spC == fn_8001741C(temp_r30))) {
                    method_releaseHoldObject(temp_r30);
                    fn_800792DC(lbl_803504E8, sp8, sp10, spC);
                } else if (fn_80029DD4(lbl_803504F0) != 0) {
                    fn_8007963C(lbl_803504E8, 0xD, sp10);
                } else if (fn_80029E60(lbl_803504F0) != 0) {
                    fn_8007963C(lbl_803504E8, 0xC, sp10);
                } else if (fn_80029EEC(lbl_803504F0) != 0) {
                    fn_8007963C(lbl_803504E8, 0xE, sp10);
                } else {
                    fn_800792BC(lbl_803504E8, 1, sp10);
                }
            }
            if (var_r31 & 0x200) {
                fn_800792BC(lbl_803504E8, 2, sp10);
            }
            if (var_r31 & 0x400) {
                fn_800792BC(lbl_803504E8, 3, sp10);
            }
            if (var_r31 & 0x800) {
                fn_800792BC(lbl_803504E8, 4, sp10);
            }
            if (var_r31 & 0x10) {
                fn_800792BC(lbl_803504E8, 5, sp10);
            }
            if (var_r31 & 0x40) {
                fn_800792BC(lbl_803504E8, 6, sp10);
            }
            if (var_r31 & 0x20) {
                fn_800792BC(lbl_803504E8, 7, sp10);
            }
            if (var_r31 & 0x1000) {
                fn_800792BC(lbl_803504E8, 8, sp10);
            }
        }
        temp_r3_2 = fn_800A7338(M2C_FIELD(lbl_803504E8, s32 *, 0x278), 0);
        if (temp_r3_2 != NULL) {
            var_r3_2 = M2C_FIELD(temp_r3_2, u32 *, 0x1D4);
        } else {
            var_r3_2 = 0U;
        }
        if ((var_r3_2 != 0U) && (lbl_802CE700 & 0x100) && (var_r31 & 0x100)) {
            fn_800792BC((void *)1, (long)(0), (long)(0));
        }
    }
}

u8 fn_80035358(void) {
    u8 sp3C;
    s32 sp34;
    s32 sp2C;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    f32 spC;
    f32 sp8;
    s32 temp_r0_2;
    s32 temp_r29;
    s32 var_r3_2;
    s32 var_r3_4;
    u32 temp_r0;
    u32 temp_r29_2;
    u8 temp_r3_2;
    u8 var_r30;
    u8 var_r3;
    u8 var_r3_3;
    void *temp_r3;
    void *var_r0;
    void *var_r0_2;
    void *var_r31;

    var_r3 = 0;
    var_r30 = 1;
    if (((u8) M2C_FIELD(lbl_803504EC, u8 *, 0x11) != 0) || ((s32) M2C_FIELD(lbl_803504EC, s32 *, 0xC) != 0)) {
        var_r3 = 1;
    }
    if (var_r3 != 0) {
        return 1U;
    }
    if (((s32) lbl_8035050C > 2) && ((u8) lbl_803506B8 == 1)) {
        fn_800FF664(&sp1C, &sp18);
        fn_80012ADC(1);
        fn_80014F18(0x27D1);
        fn_800FF658(sp1C, sp18);
        lbl_8035050C = 0;
        fn_8000E508(lbl_8035051C, 1);
        lbl_8035051C = NULL;
        PadSetXlatRatio(lbl_803517F0);
        PadSetNormalXlatRatio(lbl_803517F0);
        lbl_803506B8 = 0;
        OSDisableInterrupts();
        lbl_80350540 = 0;
        OSRestoreInterrupts();
    } else if ((s32) lbl_8035050C > 2) {
        temp_r29 = M2C_FIELD(fn_800A7338(M2C_FIELD(lbl_803504E8, s32 *, 0x278), 0), s32 *, 0x24C);
        fn_800A7338((long)(M2C_FIELD(lbl_803504E8, s32 *, 0x278)), (long)(0));
        fn_800A4D50(0);
        OSReport(&lbl_80223318 + 0x168, M2C_FIELD(lbl_80350554, u16 *, 0x38), M2C_FIELD(lbl_80350554, u16 *, 0x3A), M2C_FIELD(lbl_80350554, u32 *, 0x40));
        temp_r0 = M2C_FIELD(lbl_80350554, u32 *, 0x40);
        if ((temp_r0 == 0x80U) || (temp_r0 == 4U)) {
            fn_800FF664(&sp14, &sp10);
            OSReport((void *)(&lbl_80223318 + 0x180), (unsigned short)((u16) sp14), (unsigned short)((u16) sp10), (unsigned long)(0));
            OSReport((void *)(&lbl_80223318 + 0x19C), (unsigned short)(0), (unsigned short)(0), (unsigned long)(0));
            fn_80012ADC(1);
            fn_80014F18(0x27D1);
            OSReport((void *)(&lbl_80223318 + 0x1AC), (unsigned short)(0), (unsigned short)(0), (unsigned long)(0));
            fn_800FF658(sp14, sp10);
            lbl_8035050C = 0;
            fn_8000E508(lbl_8035051C, 1);
            lbl_8035051C = NULL;
            PadSetXlatRatio(lbl_803517F0);
            PadSetNormalXlatRatio(lbl_803517F0);
            fn_80079CCC(lbl_803504E8);
            OSDisableInterrupts();
            lbl_80350540 = 0;
            OSRestoreInterrupts();
        }
        fn_800A7338(M2C_FIELD(lbl_803504E8, s32 *, 0x278), 0);
        fn_800A4D50(temp_r29);
    }
    switch ((s32) lbl_8035050C) {                   /* irregular */
    case 1:
        lbl_8035050C = 2;
        var_r0 = get_up_vector_for_viewing_mtx(0x10);
        if (var_r0 != NULL) {
            var_r0 = fn_8000E428();
        }
        lbl_8035051C = var_r0;
        StackSfxGroup(0x27D1);
block_22:
    default:
        return 1U;
    case 2:
        if ((fn_8000E5B0(lbl_8035051C) != 0) && ((u8) lbl_80350489 == 0)) {
            lbl_8035050C = 3;
            PadSetXlatRatio(lbl_803517F4);
            PadSetNormalXlatRatio(lbl_803517F4);
        }
        goto block_22;
    case 0:
        if ((void **) lbl_80350504 != NULL) {
            fn_8009BD80(lbl_803504E8, 1);
            fn_800202C0();
            var_r0_2 = get_up_vector_for_viewing_mtx(0x298);
            if (var_r0_2 != NULL) {
                /* draft: did not compile: var_r0_2 = fn_8009BC78(M2C_FIELD(*lbl_80350504, s32 *, 0xC), 0x7F, -1, -1, -1); */
            }
            lbl_803504E8 = var_r0_2;
            fn_800146F0(lbl_80350504, 1);
            lbl_80350504 = NULL;
        }
        fn_8001F5D8(lbl_803504F8, M2C_FIELD(lbl_803504E8, s32 *, 0x278));
        temp_r3 = fn_800A7338(M2C_FIELD(lbl_803504E8, s32 *, 0x278), 0);
        if (temp_r3 != NULL) {
            fn_800A48BC();
        }
        if (temp_r3 != NULL) {
            var_r31 = M2C_FIELD(temp_r3, void **, 0x1D4);
        } else {
            var_r31 = NULL;
        }
        if ((s8) lbl_8035057A == 0) {
            lbl_80350579 = 0;
            lbl_8035057A = 1;
        }
        if ((s8) lbl_8035057C == 0) {
            lbl_8035057B = 0;
            lbl_8035057C = 1;
        }
        if ((s8) lbl_8035057E == 0) {
            lbl_8035057D = 0;
            lbl_8035057E = 1;
        }
        temp_r3_2 = fn_8002BB24(lbl_803504F0);
        if ((u8) lbl_80350579 != temp_r3_2) {
            if (temp_r3_2 != 0) {
                lbl_8035057B = 0;
                lbl_8035057D = 1;
                lbl_80350580 = 0x7E;
                lbl_80350584 = M2C_FIELD(lbl_803504F8, u8 *, 0x41);
                M2C_FIELD(lbl_803504F8, s8 *, 0x3E) = 0;
                M2C_FIELD(lbl_803504F8, u8 *, 0x41) = 0U;
                M2C_FIELD(lbl_803504F0, s8 *, 0x10B) = 0;
            } else {
                lbl_8035057B = 1;
                lbl_8035057D = 0;
                lbl_80350580 = 1;
                if ((u8) lbl_80350584 != 0) {
                    M2C_FIELD(lbl_803504F8, u8 *, 0x41) = 1U;
                } else {
                    M2C_FIELD(lbl_803504F8, s8 *, 0x3E) = 0;
                    M2C_FIELD(lbl_803504F8, u8 *, 0x41) = 0U;
                    M2C_FIELD(lbl_803504F0, s8 *, 0x10B) = 0;
                }
            }
            lbl_80350579 = temp_r3_2;
        } else if (((u8) lbl_8035057B != 0) || ((u8) lbl_8035057D != 0)) {
            temp_r0_2 = lbl_80350580 + ((lbl_8035057B * 3) - (lbl_8035057D * 2));
            lbl_80350580 = temp_r0_2;
            if (temp_r0_2 > 0x7F) {
                lbl_80350580 = 0x7F;
            }
            if ((s32) lbl_80350580 < 0) {
                lbl_80350580 = 0;
            }
            if (var_r31 != NULL) {
                fn_8009C564(var_r31, lbl_80350580);
            }
            if ((void *) lbl_803504E8 != NULL) {
                fn_8009C564((void *) lbl_80350580, (long)(0));
            }
            if ((s32) M2C_FIELD(lbl_803504F0, s32 *, 0x104) != -1) {
                fn_80015644((u8) (((0x7F - lbl_80350580) * 0x50) / 127));
            }
            fn_80015508((u8) lbl_80350580);
            if ((s32) lbl_80350580 == 0x7F) {
                lbl_8035057B = 0;
            }
            if ((s32) lbl_80350580 == 0) {
                lbl_8035057D = 0;
            }
        }
        if (var_r31 != NULL) {
            fn_8008085C(0xD48, 0);
            if (fn_8002BB24(lbl_803504F0) == 0) {
                var_r30 = 1 & fn_8009BEEC(var_r31);
            }
            fn_800A33D0();
        }
        if ((void *) lbl_803504E8 != NULL) {
            fn_80034DC8((void *)(0));
            if (fn_8002BB24(lbl_803504F0) == 0) {
                var_r30 &= fn_8009BEEC(lbl_803504E8);
            }
        }
        fn_8001E624(lbl_803504F8, &spC, &sp8);
        fn_80029B5C(lbl_803504F0, spC + M2C_FIELD(lbl_803504F8, f32 *, 0x10), sp8 + M2C_FIELD(lbl_803504F8, f32 *, 0x14), spC);
        temp_r29_2 = fn_800A71F8(M2C_FIELD(lbl_803504E8, s32 *, 0x278), 1);
        fn_80027F30(&sp20);
        if (temp_r29_2 != 0U) {
            var_r3_2 = fn_8001741C(temp_r29_2);
        } else {
            var_r3_2 = 0;
        }
        sp20 = var_r3_2;
        sp2C = GetFocusObjectID(M2C_FIELD(lbl_803504E8, s32 *, 0x278));
        if (temp_r29_2 != 0U) {
            var_r3_3 = fn_800176F4(temp_r29_2) != 0;
        } else {
            var_r3_3 = 0;
        }
        sp3C = var_r3_3;
        if (var_r3_3 != 0) {
            var_r3_4 = method_getApproachingObject(temp_r29_2);
        } else {
            var_r3_4 = 0;
        }
        sp34 = var_r3_4;
        fn_8002A304(lbl_803504F0, &sp20, M2C_FIELD(lbl_803504E8, s32 *, 0x14));
        GXInvalidateTexAll();
        return var_r30;
    }
}
