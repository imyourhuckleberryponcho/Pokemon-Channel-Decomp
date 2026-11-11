/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 fn_80017CB8(s32, s32, f32);
s32 fn_8001CF98(s32, s32);
M2C_UNK fn_8008065C();
M2C_UNK fn_80089FF8(M2C_UNK *, void **, s32 *, s32 *, f32 *);
s32 fn_80017D3C(s32, s32, f32);
s32 fn_8001D020(s32, s32);
s32 fn_80017FD8(s32, s32, f32);
s32 fn_8001D0D0(s32, s32);
M2C_UNK method_pauseAction(s32);
s32 fn_80080738();
M2C_UNK fn_8008ADDC(s32);
s32 method_getActionLoopCount();
u8 method_willActionEndNextTime();
M2C_UNK method_setDefaultFeel(s32);
s32 method_getDefaultFeel();
u8 fn_80018060(s32);
u8 fn_8001D244(s32);
void *fn_80089738(s32);
u8 fn_800180A8(s32);
u8 fn_8001D2E0(s32);
M2C_UNK fn_80080790(s32);
s32 fn_8007FC40();
M2C_UNK method_getGoalRelRotY();
M2C_UNK fn_80080698(s32);
M2C_UNK fn_8001A920();
s32 fn_8001D474();
u32 fn_800A713C(s32, s32);
M2C_UNK method_setPickObject(s32);
u32 fn_8001D46C();
M2C_UNK method_setCarryingObject(s32);
M2C_UNK method_setCarryingObjectRelPos(f32 *);
f32 fn_80080764(s32);
f32 *fn_8001D4DC();
M2C_UNK method_setCarryingObjectRelRotate(f32 *);
f32 *fn_8001D500();
s32 method_getActIdByGA(s32);
M2C_UNK method_setAfcSfxVolume(s32);
s32 method_getAfcSfxVolume();

s32 scr_method_requestAction(s32 arg0);
s32 scr_method_requestNextAction(s32 arg0);
s32 scr_method_requestActionUrgently(s32 arg0);
s32 scr_method_pauseAction(s32 arg0);
s32 scr_method_getActionLoopCount(s32 arg0);
s32 scr_method_willActionEndNextTime(s32 arg0);
s32 scr_method_setDefaultFeel(s32 arg0);
s32 scr_method_getDefaultFeel(s32 arg0);
s32 scr_method_isActionStarted(s32 arg0);
s32 scr_method_isActionCompleted(s32 arg0);
s32 scr_method_setMenu(s32 arg0);
s32 scr_method_setActionMenu(s32 arg0);
s32 scr_method_setFeelMenu(s32 arg0);
s32 scr_method_getGoalRelRotY(s32 arg0);
s32 scr_method_getGoalPosX(s32 arg0);
s32 scr_method_getGoalPosY(s32 arg0);
s32 scr_method_getGoalPosZ(s32 arg0);
s32 scr_method_getPickingObject(void *arg0);
s32 scr_method_setPickObject(s32 arg0);
s32 scr_method_getCarryingObject(void *arg0);
s32 scr_method_setCarryingObject(s32 arg0);
s32 scr_method_setCarryingObjectRelPos(s32 arg0);
s32 scr_method_getCarryingObjectRelPosX(s32 arg0);
s32 scr_method_getCarryingObjectRelPosY(s32 arg0);
s32 scr_method_getCarryingObjectRelPosZ(s32 arg0);
s32 scr_method_setCarryingObjectRelRotate(s32 arg0);
s32 scr_method_getCarryingObjectRelRotateX(s32 arg0);
s32 scr_method_getCarryingObjectRelRotateY(s32 arg0);
s32 scr_method_getCarryingObjectRelRotateZ(s32 arg0);
s32 scr_method_getActIdByGA(s32 arg0);
s32 scr_method_setAfcSfxVolume(s32 arg0);
s32 scr_method_getAfcSfxVolume(s32 arg0);

s32 scr_method_requestAction(s32 arg0) {
    M2C_UNK sp18;
    void *sp14;
    s32 sp10;
    s32 spC;
    f32 sp8;
    s32 temp_r4;

    fn_80089FF8(&sp18, &sp14, &sp10, &spC, &sp8);
    temp_r4 = M2C_FIELD(sp14, s32 *, 8);
    if (temp_r4 & 0x100) {
        fn_8008065C(arg0, fn_80017CB8(sp10, spC, sp8));
    } else if (temp_r4 & 0x800) {
        fn_8008065C(arg0, fn_8001CF98(sp10, spC));
    }
    return 0;
}

s32 scr_method_requestNextAction(s32 arg0) {
    M2C_UNK sp18;
    void *sp14;
    s32 sp10;
    s32 spC;
    f32 sp8;
    s32 temp_r4;

    fn_80089FF8(&sp18, &sp14, &sp10, &spC, &sp8);
    temp_r4 = M2C_FIELD(sp14, s32 *, 8);
    if (temp_r4 & 0x100) {
        fn_8008065C(arg0, fn_80017D3C(sp10, spC, sp8));
    } else if (temp_r4 & 0x800) {
        fn_8008065C(arg0, fn_8001D020(sp10, spC));
    }
    return 0;
}

s32 scr_method_requestActionUrgently(s32 arg0) {
    M2C_UNK sp18;
    void *sp14;
    s32 sp10;
    s32 spC;
    f32 sp8;
    s32 temp_r4;

    fn_80089FF8(&sp18, &sp14, &sp10, &spC, &sp8);
    temp_r4 = M2C_FIELD(sp14, s32 *, 8);
    if (temp_r4 & 0x100) {
        fn_8008065C(arg0, fn_80017FD8(sp10, spC, sp8));
    } else if (temp_r4 & 0x800) {
        fn_8008065C(arg0, fn_8001D0D0(sp10, spC));
    }
    return 0;
}

s32 scr_method_pauseAction(s32 arg0) {
    s8 temp_r31;

    temp_r31 = fn_80080738() != 0;
    fn_8008ADDC(arg0);
    method_pauseAction(temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getActionLoopCount(s32 arg0) {
    fn_8008ADDC((long)(0));
    fn_8008065C(arg0, method_getActionLoopCount());
    return 0;
}

s32 scr_method_willActionEndNextTime(s32 arg0) {
    fn_8008ADDC((long)(0));
    fn_8008065C(arg0, method_willActionEndNextTime());
    return 0;
}

s32 scr_method_setDefaultFeel(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_8008ADDC(arg0);
    method_setDefaultFeel(temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getDefaultFeel(s32 arg0) {
    fn_8008ADDC((long)(0));
    fn_8008065C(arg0, method_getDefaultFeel());
    return 0;
}

s32 scr_method_isActionStarted(s32 arg0) {
    s32 temp_r31;
    s32 temp_r4;

    temp_r31 = fn_80080738();
    temp_r4 = M2C_FIELD(fn_80089738(arg0), s32 *, 8);
    if (temp_r4 & 0x100) {
        fn_8008065C(arg0, fn_80018060(temp_r31));
    } else if (temp_r4 & 0x800) {
        fn_8008065C(arg0, fn_8001D244(temp_r31));
    }
    return 0;
}

s32 scr_method_isActionCompleted(s32 arg0) {
    s32 temp_r31;
    s32 temp_r4;

    temp_r31 = fn_80080738();
    temp_r4 = M2C_FIELD(fn_80089738(arg0), s32 *, 8);
    if (temp_r4 & 0x100) {
        fn_8008065C(arg0, fn_800180A8(temp_r31));
    } else if (temp_r4 & 0x800) {
        fn_8008065C(arg0, fn_8001D2E0(temp_r31));
    }
    return 0;
}

s32 scr_method_setMenu(s32 arg0) {
    fn_80080738();
    fn_80080790(arg0);
    fn_8008ADDC(arg0);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setActionMenu(s32 arg0) {
    if (fn_8007FC40() == 4) {
        fn_80080738(arg0);
    }
    fn_80080738(arg0);
    fn_80080790(arg0);
    fn_8008ADDC(arg0);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setFeelMenu(s32 arg0) {
    if (fn_8007FC40() == 4) {
        fn_80080738(arg0);
    }
    fn_80080738(arg0);
    fn_80080790(arg0);
    fn_8008ADDC(arg0);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getGoalRelRotY(s32 arg0) {
    fn_8008ADDC((long)(0));
    method_getGoalRelRotY();
    fn_80080698(arg0);
    return 0;
}

s32 scr_method_getGoalPosX(s32 arg0) {
    f32 sp8;

    fn_8008ADDC((long)(0));
    fn_8001A920(&sp8);
    fn_80080698((long)(arg0));
    return 0;
}

s32 scr_method_getGoalPosY(s32 arg0) {
    s32 spC;
    M2C_UNK sp8;

    fn_8008ADDC((long)(0));
    fn_8001A920(&sp8);
    fn_80080698((long)(arg0));
    return 0;
}

s32 scr_method_getGoalPosZ(s32 arg0) {
    s32 sp10;
    M2C_UNK sp8;

    fn_8008ADDC((long)(0));
    fn_8001A920(&sp8);
    fn_80080698((long)(arg0));
    return 0;
}

s32 scr_method_getPickingObject(void *arg0) {
    s32 temp_r3;

    fn_8008ADDC((long)(0));
    temp_r3 = fn_8001D474();
    if ((temp_r3 != 0) && (fn_800A713C(M2C_FIELD(arg0, s32 *, 0x2E0), temp_r3) != 0U)) {
        fn_8008065C(arg0, temp_r3);
    } else {
        fn_8008065C(arg0, 0);
    }
    return 0;
}

s32 scr_method_setPickObject(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_8008ADDC(arg0);
    method_setPickObject(temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getCarryingObject(void *arg0) {
    s32 temp_r31;
    u32 var_r30;
    s32 temp_r29;

    temp_r31 = fn_8008ADDC((long)(0));
    var_r30 = fn_8001D46C();
    temp_r29 = M2C_FIELD(arg0, s32 *, 0x2E0);
    if ((var_r30 == 0U) || (fn_800A713C(temp_r29, var_r30) == 0U)) {
        var_r30 = fn_8001D474(temp_r31);
    }
    if ((var_r30 != 0U) && (fn_800A713C(temp_r29, var_r30) != 0U)) {
        fn_8008065C(arg0, var_r30);
    } else {
        fn_8008065C(arg0, 0U);
    }
    return 0;
}

s32 scr_method_setCarryingObject(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_8008ADDC(arg0);
    method_setCarryingObject(temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_setCarryingObjectRelPos(s32 arg0) {
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f30;
    f32 temp_f31;

    temp_f30 = fn_80080764((long)(0));
    temp_f31 = fn_80080764(arg0);
    sp8 = fn_80080764(arg0);
    spC = temp_f31;
    sp10 = temp_f30;
    sp14 = sp8;
    sp18 = spC;
    sp1C = sp10;
    fn_8008ADDC((long)(arg0));
    method_setCarryingObjectRelPos(&sp14);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getCarryingObjectRelPosX(s32 arg0) {
    fn_8008ADDC((long)(0));
    fn_80080698((long)(arg0));
    return 0;
}

s32 scr_method_getCarryingObjectRelPosY(s32 arg0) {
    fn_8008ADDC((long)(0));
    fn_80080698((long)(arg0));
    return 0;
}

s32 scr_method_getCarryingObjectRelPosZ(s32 arg0) {
    fn_8008ADDC((long)(0));
    fn_80080698((long)(arg0));
    return 0;
}

s32 scr_method_setCarryingObjectRelRotate(s32 arg0) {
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f30;
    f32 temp_f31;

    temp_f30 = fn_80080764((long)(0));
    temp_f31 = fn_80080764(arg0);
    sp8 = fn_80080764(arg0);
    spC = temp_f31;
    sp10 = temp_f30;
    sp14 = sp8;
    sp18 = spC;
    sp1C = sp10;
    fn_8008ADDC((long)(arg0));
    method_setCarryingObjectRelRotate(&sp14);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getCarryingObjectRelRotateX(s32 arg0) {
    fn_8008ADDC((long)(0));
    fn_80080698((long)(arg0));
    return 0;
}

s32 scr_method_getCarryingObjectRelRotateY(s32 arg0) {
    fn_8008ADDC((long)(0));
    fn_80080698((long)(arg0));
    return 0;
}

s32 scr_method_getCarryingObjectRelRotateZ(s32 arg0) {
    fn_8008ADDC((long)(0));
    fn_80080698((long)(arg0));
    return 0;
}

s32 scr_method_getActIdByGA(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_8008ADDC(arg0);
    fn_8008065C(arg0, method_getActIdByGA(temp_r31));
    return 0;
}

s32 scr_method_setAfcSfxVolume(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_8008ADDC(arg0);
    method_setAfcSfxVolume(temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_method_getAfcSfxVolume(s32 arg0) {
    fn_8008ADDC((long)(0));
    fn_8008065C(arg0, method_getAfcSfxVolume());
    return 0;
}
