/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 SIProbe();
extern M2C_UNK lbl_8031EA64;
extern f32 lbl_80351978;
s32 fn_8007B37C(u8);
f32 fn_8007B440(s8);
extern M2C_UNK lbl_802C4980;
f32 fn_8007B470(s8);
extern M2C_UNK lbl_80223DF0;
s32 fn_8007B4A0();
s32 fn_8007B51C();
s32 fn_8007B5B0();
s32 fn_8007B608();
f32 fn_8007B69C(s32);
f32 fn_8007B6F4(s32);
f32 fn_8007B74C(s32);

f32 fn_8007B7A4(u8 arg0);
f32 fn_8007B7FC(u8 arg0);
f32 fn_8007B884(u8 arg0);
f32 fn_8007B90C(u8 arg0);
f32 fn_8007B964(u8 arg0);
f32 fn_8007B9BC(u8 arg0);
f32 fn_8007BA2C(u8 arg0);
f32 fn_8007BA9C(u8 arg0);
f32 fn_8007BB0C(u8 arg0);
f32 fn_8007BB7C(u8 arg0);
f32 fn_8007BC24(u8 arg0);
f32 fn_8007BCCC(u8 arg0);
f32 fn_8007BD44(u8 arg0);
void PadSetMux(s32 arg0, s32 arg1);
void PadResetMux(s32 arg0);
s32 PadGetButton(s32 arg0);
s32 PadGetTrigger(s32 arg0);
s32 PadGetRepeat(s32 arg0);
s32 PadGetRelease(s32 arg0);
f32 PadGetNormalAnalogA(s32 arg0);
f32 PadGetNormalAnalogB(s32 arg0);
f32 PadGetNormalAnalogL(s32 arg0);
f32 PadGetNormalAnalogR(s32 arg0);
f32 PadGetNormalStickX(s32 arg0);
f32 PadGetNormalStickY(s32 arg0);
f32 PadGetNormalSubStickX(s32 arg0);
f32 PadGetNormalSubStickY(s32 arg0);
f32 PadGetAnalogA(s32 arg0);
f32 PadGetAnalogB(s32 arg0);
f32 PadGetAnalogL(s32 arg0);
f32 PadGetAnalogR(s32 arg0);
f32 PadGetStickX(s32 arg0);

f32 fn_8007B7A4(u8 arg0) {
    if ((u32) (SIProbe() + 0xFE000000) == 0U) {
        return lbl_80351978;
    }
    return M2C_FIELD((&lbl_8031EA64 + (arg0 * 0x44)), f32 *, 0x34);
}

f32 fn_8007B7FC(u8 arg0) {
    if ((u32) (SIProbe() + 0xFE000000) == 0U) {
        if (fn_8007B37C(arg0) == 0) {
            return fn_8007B440((s8) M2C_FIELD((&lbl_802C4980 + (arg0 * 6)), u8 *, 2));
        }
        return lbl_80351978;
    }
    return M2C_FIELD((&lbl_8031EA64 + (arg0 * 0x44)), f32 *, 0x20);
}

f32 fn_8007B884(u8 arg0) {
    if ((u32) (SIProbe() + 0xFE000000) == 0U) {
        if (fn_8007B37C(arg0) == 0) {
            return fn_8007B440((s8) M2C_FIELD((&lbl_802C4980 + (arg0 * 6)), u8 *, 3));
        }
        return lbl_80351978;
    }
    return M2C_FIELD((&lbl_8031EA64 + (arg0 * 0x44)), f32 *, 0x24);
}

f32 fn_8007B90C(u8 arg0) {
    if ((u32) (SIProbe() + 0xFE000000) == 0U) {
        return lbl_80351978;
    }
    return M2C_FIELD((&lbl_8031EA64 + (arg0 * 0x44)), f32 *, 0x28);
}

f32 fn_8007B964(u8 arg0) {
    if ((u32) (SIProbe() + 0xFE000000) == 0U) {
        return lbl_80351978;
    }
    return M2C_FIELD((&lbl_8031EA64 + (arg0 * 0x44)), f32 *, 0x2C);
}

f32 fn_8007B9BC(u8 arg0) {
    if ((u32) (SIProbe() + 0xFE000000) == 0U) {
        return lbl_80351978;
    }
    return (f32) M2C_FIELD((&lbl_8031EA64 + (arg0 * 0x44)), u8 *, 0x1E);
}

f32 fn_8007BA2C(u8 arg0) {
    if ((u32) (SIProbe() + 0xFE000000) == 0U) {
        return lbl_80351978;
    }
    return (f32) M2C_FIELD((&lbl_8031EA64 + (arg0 * 0x44)), u8 *, 0x1F);
}

f32 fn_8007BA9C(u8 arg0) {
    if ((u32) (SIProbe() + 0xFE000000) == 0U) {
        return lbl_80351978;
    }
    return (f32) M2C_FIELD((&lbl_8031EA64 + (arg0 * 0x44)), u8 *, 0x1C);
}

f32 fn_8007BB0C(u8 arg0) {
    if ((u32) (SIProbe() + 0xFE000000) == 0U) {
        return lbl_80351978;
    }
    return (f32) M2C_FIELD((&lbl_8031EA64 + (arg0 * 0x44)), u8 *, 0x1D);
}

f32 fn_8007BB7C(u8 arg0) {
    if ((u32) (SIProbe() + 0xFE000000) == 0U) {
        if (fn_8007B37C(arg0) == 0) {
            return fn_8007B470((s8) M2C_FIELD((&lbl_802C4980 + (arg0 * 6)), u8 *, 2));
        }
        return lbl_80351978;
    }
    return (f32) (s8) M2C_FIELD((&lbl_8031EA64 + (arg0 * 0x44)), u8 *, 0x18);
}

f32 fn_8007BC24(u8 arg0) {
    if ((u32) (SIProbe() + 0xFE000000) == 0U) {
        if (fn_8007B37C(arg0) == 0) {
            return fn_8007B470((s8) M2C_FIELD((&lbl_802C4980 + (arg0 * 6)), u8 *, 3));
        }
        return lbl_80351978;
    }
    return (f32) (s8) M2C_FIELD((&lbl_8031EA64 + (arg0 * 0x44)), u8 *, 0x19);
}

f32 fn_8007BCCC(u8 arg0) {
    if ((u32) (SIProbe() + 0xFE000000) == 0U) {
        return lbl_80351978;
    }
    return (f32) (s8) M2C_FIELD((&lbl_8031EA64 + (arg0 * 0x44)), u8 *, 0x1A);
}

f32 fn_8007BD44(u8 arg0) {
    if ((u32) (SIProbe() + 0xFE000000) == 0U) {
        return lbl_80351978;
    }
    return (f32) (s8) M2C_FIELD((&lbl_8031EA64 + (arg0 * 0x44)), u8 *, 0x1B);
}

void PadSetMux(s32 arg0, s32 arg1) {
    *(&lbl_80223DF0 + (arg0 * 4)) = arg1;
}

void PadResetMux(s32 arg0) {
    *(&lbl_80223DF0 + (arg0 * 4)) = -1;
}

s32 PadGetButton(s32 arg0) {
    s32 var_r31;

    var_r31 = fn_8007B4A0();
    if ((s32) *(&lbl_80223DF0 + (arg0 * 4)) >= 0) {
        var_r31 += fn_8007B4A0();
    }
    return var_r31;
}

s32 PadGetTrigger(s32 arg0) {
    s32 var_r31;

    var_r31 = fn_8007B51C();
    if ((s32) *(&lbl_80223DF0 + (arg0 * 4)) >= 0) {
        var_r31 += fn_8007B51C();
    }
    return var_r31;
}

s32 PadGetRepeat(s32 arg0) {
    s32 var_r31;

    var_r31 = fn_8007B5B0();
    if ((s32) *(&lbl_80223DF0 + (arg0 * 4)) >= 0) {
        var_r31 += fn_8007B5B0();
    }
    return var_r31;
}

s32 PadGetRelease(s32 arg0) {
    s32 var_r31;

    var_r31 = fn_8007B608();
    if ((s32) *(&lbl_80223DF0 + (arg0 * 4)) >= 0) {
        var_r31 += fn_8007B608();
    }
    return var_r31;
}

f32 PadGetNormalAnalogA(s32 arg0) {
    f32 var_f1;
    f32 var_f31;
    s32 temp_r31;

    var_f31 = fn_8007B69C((long)(0));
    temp_r31 = *(&lbl_80223DF0 + (arg0 * 4));
    if (temp_r31 >= 0) {
        if (var_f31 > fn_8007B69C(temp_r31)) {
            var_f1 = var_f31;
        } else {
            var_f1 = fn_8007B69C(temp_r31);
        }
        var_f31 = var_f1;
    }
    return var_f31;
}

f32 PadGetNormalAnalogB(s32 arg0) {
    f32 var_f1;
    f32 var_f31;
    s32 temp_r31;

    var_f31 = fn_8007B6F4((long)(0));
    temp_r31 = *(&lbl_80223DF0 + (arg0 * 4));
    if (temp_r31 >= 0) {
        if (var_f31 > fn_8007B6F4(temp_r31)) {
            var_f1 = var_f31;
        } else {
            var_f1 = fn_8007B6F4(temp_r31);
        }
        var_f31 = var_f1;
    }
    return var_f31;
}

f32 PadGetNormalAnalogL(s32 arg0) {
    f32 var_f1;
    f32 var_f31;
    s32 temp_r31;

    var_f31 = fn_8007B74C((long)(0));
    temp_r31 = *(&lbl_80223DF0 + (arg0 * 4));
    if (temp_r31 >= 0) {
        if (var_f31 > fn_8007B74C(temp_r31)) {
            var_f1 = var_f31;
        } else {
            var_f1 = fn_8007B74C(temp_r31);
        }
        var_f31 = var_f1;
    }
    return var_f31;
}

f32 PadGetNormalAnalogR(s32 arg0) {
    f32 var_f1;
    f32 var_f31;
    s32 temp_r31;

    var_f31 = fn_8007B7A4((unsigned char)(0));
    temp_r31 = *(&lbl_80223DF0 + (arg0 * 4));
    if (temp_r31 >= 0) {
        if (var_f31 > fn_8007B7A4(temp_r31)) {
            var_f1 = var_f31;
        } else {
            var_f1 = fn_8007B7A4(temp_r31);
        }
        var_f31 = var_f1;
    }
    return var_f31;
}

f32 PadGetNormalStickX(s32 arg0) {
    f32 var_f31;

    var_f31 = fn_8007B7FC((unsigned char)(0));
    if ((s32) *(&lbl_80223DF0 + (arg0 * 4)) >= 0) {
        var_f31 += fn_8007B7FC((unsigned char)(0));
    }
    return var_f31;
}

f32 PadGetNormalStickY(s32 arg0) {
    f32 var_f31;

    var_f31 = fn_8007B884((unsigned char)(0));
    if ((s32) *(&lbl_80223DF0 + (arg0 * 4)) >= 0) {
        var_f31 += fn_8007B884((unsigned char)(0));
    }
    return var_f31;
}

f32 PadGetNormalSubStickX(s32 arg0) {
    f32 var_f31;

    var_f31 = fn_8007B90C((unsigned char)(0));
    if ((s32) *(&lbl_80223DF0 + (arg0 * 4)) >= 0) {
        var_f31 += fn_8007B90C((unsigned char)(0));
    }
    return var_f31;
}

f32 PadGetNormalSubStickY(s32 arg0) {
    f32 var_f31;

    var_f31 = fn_8007B964((unsigned char)(0));
    if ((s32) *(&lbl_80223DF0 + (arg0 * 4)) >= 0) {
        var_f31 += fn_8007B964((unsigned char)(0));
    }
    return var_f31;
}

f32 PadGetAnalogA(s32 arg0) {
    f32 var_f1;
    f32 var_f31;
    s32 temp_r31;

    var_f31 = fn_8007B9BC((unsigned char)(0));
    temp_r31 = *(&lbl_80223DF0 + (arg0 * 4));
    if (temp_r31 >= 0) {
        if (var_f31 > fn_8007B9BC(temp_r31)) {
            var_f1 = var_f31;
        } else {
            var_f1 = fn_8007B9BC(temp_r31);
        }
        var_f31 = var_f1;
    }
    return var_f31;
}

f32 PadGetAnalogB(s32 arg0) {
    f32 var_f1;
    f32 var_f31;
    s32 temp_r31;

    var_f31 = fn_8007BA2C((unsigned char)(0));
    temp_r31 = *(&lbl_80223DF0 + (arg0 * 4));
    if (temp_r31 >= 0) {
        if (var_f31 > fn_8007BA2C(temp_r31)) {
            var_f1 = var_f31;
        } else {
            var_f1 = fn_8007BA2C(temp_r31);
        }
        var_f31 = var_f1;
    }
    return var_f31;
}

f32 PadGetAnalogL(s32 arg0) {
    f32 var_f1;
    f32 var_f31;
    s32 temp_r31;

    var_f31 = fn_8007BA9C((unsigned char)(0));
    temp_r31 = *(&lbl_80223DF0 + (arg0 * 4));
    if (temp_r31 >= 0) {
        if (var_f31 > fn_8007BA9C(temp_r31)) {
            var_f1 = var_f31;
        } else {
            var_f1 = fn_8007BA9C(temp_r31);
        }
        var_f31 = var_f1;
    }
    return var_f31;
}

f32 PadGetAnalogR(s32 arg0) {
    f32 var_f1;
    f32 var_f31;
    s32 temp_r31;

    var_f31 = fn_8007BB0C((unsigned char)(0));
    temp_r31 = *(&lbl_80223DF0 + (arg0 * 4));
    if (temp_r31 >= 0) {
        if (var_f31 > fn_8007BB0C(temp_r31)) {
            var_f1 = var_f31;
        } else {
            var_f1 = fn_8007BB0C(temp_r31);
        }
        var_f31 = var_f1;
    }
    return var_f31;
}

f32 PadGetStickX(s32 arg0) {
    f32 var_f31;

    var_f31 = fn_8007BB7C((unsigned char)(0));
    if ((s32) *(&lbl_80223DF0 + (arg0 * 4)) >= 0) {
        var_f31 += fn_8007BB7C((unsigned char)(0));
    }
    return var_f31;
}
