/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK method_setViewport(f32, f32, f32, f32);
M2C_UNK fn_8008065C();
f32 fn_80080764();
M2C_UNK method_setScissor(s32, s32, s32, s32);
s32 fn_80080738();
M2C_UNK fn_80016FAC(void *, f32 *);
M2C_UNK fn_800173C4(f32 *);
f32 fn_8007119C();
M2C_UNK fn_80080698(s32, f32);
M2C_UNK fn_800CC960(f32 *);
extern f32 lbl_80351A30;
extern f32 lbl_80351A38;
void *fn_8007B144();
M2C_UNK GBAInit();
M2C_UNK CardEInit();
extern s32 lbl_803506BC;
s32 fn_80038264(M2C_UNK);
M2C_UNK fn_800AD554(s32, M2C_UNK *, M2C_UNK, M2C_UNK *, u8, s32);
extern M2C_UNK lbl_8022A028;
extern u8 lbl_8034FC28;
extern M2C_UNK lbl_8034FC2C;
extern s32 lbl_803506C0;
s32 SIProbe(M2C_UNK);
M2C_UNK FreePictureSD();
M2C_UNK fn_800C9448();
extern u8 lbl_803506B8;
extern u32 lbl_803506C4;
M2C_UNK fn_80081350(M2C_UNK);
M2C_UNK fn_8008B6C0(M2C_UNK, M2C_UNK);
M2C_UNK CardECleanup();
void *get_up_vector_for_viewing_mtx(M2C_UNK);
s32 fn_8007EE48(s32);
void *fn_8007F05C(s32);
s32 fn_80080790();
M2C_UNK fn_80081280(void *);
void *fn_800A713C(u32, s32);
M2C_UNK method_setGoalObject(s32);
s32 method_getGoalObject();
M2C_UNK fn_8008ADDC();
M2C_UNK method_setGoal(f32 *);
M2C_UNK method_getGoalDistance();
M2C_UNK method_getGoalDistanceXZ();
u8 fn_8007F61C(s32);
s32 fn_8007FC40();
extern f32 lbl_80351A40;
extern f64 lbl_80351A48;

s32 scr_method_setViewport(s32 arg0, M2C_UNK arg_sp0);
s32 scr_method_setScissor(s32 arg0, M2C_UNK arg_sp0);
s32 fn_8008957C(s32 arg0, s32 arg1);
void scr_method_getCursorDelusivePosX(void);
void scr_method_getCursorDelusivePosY(void);
void scr_method_getCursorDelusivePosZ(void);
void *fn_800896C0(void *arg0);
void *fn_80089738(void *arg0);
s32 scr_GBAInit(s32 arg0);
s32 scr_CardEInit(s32 arg0);
void fn_8008982C(s32 arg0);
s32 scr_MyRunThread(s32 arg0);
s32 scr_MyProbeGBA(s32 arg0);
s32 scr_GetgbaChan(void);
s32 MyCheckThreadResult(void);
s32 scr_MyCheckThreadResult(s32 arg0);
s32 scr_SetgcCancelRequest(s32 arg0);
s32 scr_GetcheckThreadResult(void);
s32 scr_GetlinkStatus(void);
s32 scr_GetgbaButton(void);
s32 scr_GetreadCard(void);
s32 scr_SetPaintPattern(s32 arg0);
s32 scr_CardECleanup(s32 arg0);
s32 scr_method_attachScriptIndeed(void *arg0, M2C_UNK arg_sp0);
s32 scr_method_getPPUStatus(s32 arg0);
s32 scr_GetThisObject(void *arg0);
s32 scr_method_setGoalObject(void *arg0);
s32 scr_method_getGoalObject(s32 arg0);
s32 scr_method_setGoal(void *arg0);
s32 scr_method_getGoalDistance(s32 arg0);
s32 scr_method_getGoalDistanceXZ(s32 arg0);
void fn_80089FF8(s32 arg0, s32 *arg1, void **arg2, s32 *arg3, s32 *arg4, f32 *arg5, M2C_UNK arg_sp0);

s32 scr_method_setViewport(s32 arg0, M2C_UNK arg_sp0) {
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;

    temp_f31 = fn_80080764((long)(0));
    temp_f30 = fn_80080764(arg0);
    temp_f29 = fn_80080764(arg0);
    temp_f28 = fn_80080764(arg0);
    /* draft: did not compile: fn_800896C0(arg0); */
    method_setViewport(temp_f28, temp_f29, temp_f30, temp_f31);
    fn_8008065C(arg0, 0);
    return 0;
}

#pragma push
#pragma optimize_for_size on
s32 scr_method_setScissor(s32 arg0, M2C_UNK arg_sp0) {
    s32 temp_r28;
    s32 temp_r31;
    s32 temp_r30;
    s32 temp_r29;

    temp_r28 = fn_80080738(arg0);
    temp_r31 = fn_80080738((long)(0));
    temp_r29 = fn_80080738(arg0);
    temp_r30 = fn_80080738(arg0);
    /* draft: did not compile: fn_800896C0(arg0); */
    method_setScissor(temp_r28, temp_r29, temp_r30, temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}
#pragma pop

s32 fn_8008957C(s32 arg0, s32 arg1) {
    void *temp_r3;
    s32 sp1C;
    s32 spC;
    s32 sp18;
    f32 sp14;
    f32 sp8;
    f32 var_f1;
    s32 sp10;

    temp_r3 = fn_800896C0((void *)(0));
    var_f1 = lbl_80351A30;
    if ((u32) M2C_FIELD(temp_r3, u32 *, 0x1D8) != 0U) {
        fn_800173C4(&sp14);
        fn_80016FAC(temp_r3, &sp8);
        fn_800CC960(&sp14);
        var_f1 = fn_8007119C();
        var_f1 *= lbl_80351A38;
        switch (arg1) {                             /* irregular */
        case 0:
            var_f1 = (var_f1 * sp14) + sp8;
            break;
        case 1:
            var_f1 = (var_f1 * sp18) + spC;
            break;
        case 2:
            var_f1 = (var_f1 * sp1C) + sp10;
            break;
        }
    }
    fn_80080698(arg0, var_f1);
    return 0;
}

void scr_method_getCursorDelusivePosX(void) {
    fn_8008957C((long)(0), (long)(0));
}

void scr_method_getCursorDelusivePosY(void) {
    fn_8008957C((long)(1), (long)(0));
}

void scr_method_getCursorDelusivePosZ(void) {
    fn_8008957C((long)(2), (long)(0));
}

void *fn_800896C0(void *arg0) {
    s32 temp_r4;
    void *var_r3;

    fn_80080738((long)(0));
    var_r3 = fn_8007B144();
    if (var_r3 == NULL) {
        return NULL;
    }
    temp_r4 = M2C_FIELD(var_r3, s32 *, 8);
    if (!(temp_r4 & 0x100)) {
        return NULL;
    }
    if ((temp_r4 & 2) && !(temp_r4 & 0x2000) && ((u32) M2C_FIELD(arg0, u32 *, 0x2E0) != (u32) M2C_FIELD(var_r3, u32 *, 0x24))) {
        var_r3 = NULL;
    }
    return var_r3;
}

void *fn_80089738(void *arg0) {
    s32 temp_cr0_eq;
    s32 temp_r4;
    void *var_r3;

    fn_80080738((long)(0));
    var_r3 = fn_8007B144();
    if (var_r3 == NULL) {
        return NULL;
    }
    temp_r4 = M2C_FIELD(var_r3, s32 *, 8);
    temp_cr0_eq = (temp_r4 & 2) == 0;
    if (temp_cr0_eq != 0) {
        return NULL;
    }
    if ((temp_cr0_eq == 0) && !(temp_r4 & 0x2000) && ((u32) M2C_FIELD(arg0, u32 *, 0x2E0) != (u32) M2C_FIELD(var_r3, u32 *, 0x24))) {
        var_r3 = NULL;
    }
    return var_r3;
}

s32 scr_GBAInit(s32 arg0) {
    GBAInit();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_CardEInit(s32 arg0) {
    CardEInit();
    lbl_803506BC = -1;
    fn_8008065C(arg0, 0);
    return 0;
}

void fn_8008982C(s32 arg0) {
    lbl_803506C0 = fn_80038264(0x33C8);
    fn_800AD554(lbl_803506BC, &lbl_8034FC2C, 0x45, &lbl_8022A028, lbl_8034FC28, arg0);
}

s32 scr_MyRunThread(s32 arg0) {
    fn_80080738((long)(0));
    fn_8008982C((long)(0));
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_MyProbeGBA(s32 arg0) {
    if ((u32) (SIProbe(1) + 0xFFFC0000) == 0U) {
        lbl_803506BC = 1;
        fn_8008982C(7);
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_GetgbaChan(void) {
    fn_8008065C((long)(lbl_803506BC), (long)(0));
    return 0;
}

s32 MyCheckThreadResult(void) {
    s32 sp8;
    u8 temp_r0;

    fn_800C9448(lbl_803506C0 + 0x28, &sp8);
    M2C_FIELD(lbl_803506C0, s8 *, 0x346) = 0;
    if (sp8 == 0) {
        lbl_803506BC = -1;
        FreePictureSD(lbl_803506C0);
        lbl_803506C0 = NULL;
        return 0;
    }
    if ((u32) (SIProbe(lbl_803506BC) + 0xFFFC0000) != 0U) {
        lbl_803506BC = -1;
        FreePictureSD(lbl_803506C0);
        lbl_803506C0 = NULL;
        return 9;
    }
    if (sp8 == 5) {
        temp_r0 = M2C_FIELD(lbl_803506C0, u8 *, 0x388);
        lbl_803506B8 = temp_r0;
        switch ((s32) temp_r0) {                    /* irregular */
        case 1:
            if ((u32) lbl_803506C4 != 0U) {
                FreePictureSD();
            }
            lbl_803506C4 = fn_80038264(0x1040);
            /* draft: did not compile: memcpy(lbl_803506C0 + 0x389, 0x103F); */
            break;
        case 2:
            if ((u32) lbl_803506C4 != 0U) {
                FreePictureSD();
            }
            lbl_803506C4 = fn_80038264(0xB40);
            /* draft: did not compile: memcpy(lbl_803506C0 + 0x389, 0xB40); */
            break;
        }
    }
    FreePictureSD(lbl_803506C0);
    lbl_803506C0 = NULL;
    return sp8;
}

s32 scr_MyCheckThreadResult(s32 arg0) {
    s32 tmp1 = MyCheckThreadResult();

    fn_8008065C(arg0, tmp1);
    return 0;
}

s32 scr_SetgcCancelRequest(s32 arg0) {
    s32 temp_r3;

    temp_r3 = fn_80080738((long)(0));
    if ((void *) lbl_803506C0 != NULL) {
        M2C_FIELD(lbl_803506C0, s8 *, 0x342) = temp_r3;
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_GetcheckThreadResult(void) {
    s32 var_r4;

    if ((void *) lbl_803506C0 != NULL) {
        var_r4 = M2C_FIELD(lbl_803506C0, u8 *, 0x346);
    } else {
        var_r4 = 0;
    }
    fn_8008065C((long)(var_r4), (long)(0));
    return 0;
}

s32 scr_GetlinkStatus(void) {
    s32 var_r4;

    if ((void *) lbl_803506C0 != NULL) {
        var_r4 = M2C_FIELD(lbl_803506C0, u8 *, 0x347);
    } else {
        var_r4 = 0;
    }
    fn_8008065C((long)(var_r4), (long)(0));
    return 0;
}

s32 scr_GetgbaButton(void) {
    u32 var_r4;

    if ((void *) lbl_803506C0 != NULL) {
        var_r4 = M2C_FIELD(lbl_803506C0, u16 *, 0x348);
    } else {
        var_r4 = 0;
    }
    fn_8008065C((long)(var_r4), (long)(0));
    return 0;
}

s32 scr_GetreadCard(void) {
    fn_8008065C((long)(lbl_803506B8), (long)(0));
    return 0;
}

s32 scr_SetPaintPattern(s32 arg0) {
    if ((u32) lbl_803506C4 != 0U) {
        fn_8008B6C0(0x25E, 1);
        fn_80081350(0x9A5);
        /* draft: did not compile: memcpy(lbl_803506C4, 0xB40); */
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_CardECleanup(s32 arg0) {
    if ((void *) lbl_803506C0 != NULL) {
        M2C_FIELD(lbl_803506C0, s8 *, 0x342) = 1;
        do {

        } while ((u8) M2C_FIELD(lbl_803506C0, u8 *, 0x346) == 0);
    }
    CardECleanup();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_attachScriptIndeed(void *arg0, M2C_UNK arg_sp0) {
    s32 temp_r31;
    s32 temp_r3_2;
    s32 temp_r4;
    u32 temp_r30;
    void *temp_r3;
    void *var_r31;
    s32 temp_r28;

    temp_r31 = fn_80080790();
    temp_r4 = fn_80080738(arg0);
    temp_r30 = M2C_FIELD(arg0, u32 *, 0x2E0);
    if (temp_r30 != 0U) {
        temp_r3 = fn_800A713C(temp_r30, temp_r4);
        if ((temp_r3 != NULL) && ((temp_r3_2 = M2C_FIELD(temp_r3, s32 *, 8), (((temp_r3_2 & 0x800) == 0) == 0)) || (temp_r3_2 & 0x10000)) && (M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), u32 (**)(void *), 0x10)(temp_r3) == 0U)) {
            temp_r28 = fn_8007EE48(temp_r31);
            var_r31 = get_up_vector_for_viewing_mtx(0x308);
            if (var_r31 != NULL) {
                var_r31 = fn_8007F05C(temp_r28);
            }
            M2C_FIELD(var_r31, u32 *, 0x2E0) = temp_r30;
            M2C_FIELD(var_r31, void **, 0x2E4) = temp_r3;
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x20), M2C_UNK (**)(void *, void *), 0x14)(temp_r3, var_r31);
            fn_80081280(var_r31);
        }
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getPPUStatus(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, M2C_FIELD(M2C_FIELD(M2C_FIELD(fn_8007B144(), void **, 0x20), void *(**)(), 0x10)(), s32 *, 0xC));
    return 0;
}

s32 scr_GetThisObject(void *arg0) {
    s32 *temp_r5;
    s32 var_r4;

    var_r4 = 0;
    temp_r5 = M2C_FIELD(arg0, s32 **, 0x2E4);
    if (temp_r5 != NULL) {
        var_r4 = *temp_r5;
    }
    fn_8008065C(var_r4);
    return 0;
}

s32 scr_method_setGoalObject(void *arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_800A713C(M2C_FIELD(arg0, s32 *, 0x2E0), fn_80080738(arg0));
    method_setGoalObject(temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getGoalObject(s32 arg0) {
    fn_8008ADDC();
    fn_8008065C(arg0, method_getGoalObject());
    return 0;
}

s32 scr_method_setGoal(void *arg0) {
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f30;
    f32 temp_f31;

    temp_f31 = fn_80080764(arg0);
    temp_f30 = fn_80080764((long)(0));
    sp8 = fn_80080764(arg0);
    spC = temp_f31;
    sp10 = temp_f30;
    sp14 = sp8;
    sp18 = spC;
    sp1C = sp10;
    fn_800A713C(M2C_FIELD(arg0, s32 *, 0x2E0), fn_80080738(arg0, spC, sp8));
    method_setGoal(&sp14);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getGoalDistance(s32 arg0) {
    fn_8008ADDC();
    method_getGoalDistance();
    fn_80080698((long)(arg0), (float)(0));
    return 0;
}

s32 scr_method_getGoalDistanceXZ(s32 arg0) {
    fn_8008ADDC();
    method_getGoalDistanceXZ();
    fn_80080698((long)(arg0), (float)(0));
    return 0;
}

void fn_80089FF8(s32 arg0, s32 *arg1, void **arg2, s32 *arg3, s32 *arg4, f32 *arg5, M2C_UNK arg_sp0) {
    f64 var_f1;
    s32 temp_r0;
    u32 temp_ret;
    u32 temp_ret_2;

    *arg5 = lbl_80351A40;
    *arg4 = 0;
    temp_ret = fn_8007FC40();
    var_f1 = M2C_BITWISE(f64, temp_ret);
    *arg1 = temp_ret;
    temp_r0 = *arg1;
    if (temp_r0 == 4) {
        *arg5 = fn_80080764(arg0);
        temp_ret_2 = fn_80080738(arg0);
        var_f1 = M2C_BITWISE(f64, temp_ret_2);
        *arg4 = temp_ret_2;
    } else if (temp_r0 == 3) {
        if (fn_8007F61C(arg0) != 0) {
            *arg4 = fn_80080738(arg0);
            *arg5 = (f32) *arg4;
            var_f1 = lbl_80351A48;
        } else {
            var_f1 = fn_80080764(arg0);
            *arg5 = (f32) var_f1;
            *arg4 = (s32) *arg5;
        }
    }
    *arg3 = fn_80080738(arg0, (f32) var_f1);
    /* draft: did not compile: *arg2 = fn_80089738(arg0); */
    if (((s32) *arg1 == 2) && (M2C_FIELD(*arg2, s32 *, 8) & 0x800)) {
        *arg4 = 0x50000002;
    }
}
