/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK lbl_8031D320;
u32 VIGetTvFormat(M2C_UNK *);
M2C_UNK VISetPreRetraceCallback();
M2C_UNK VISetPostRetraceCallback(M2C_UNK *);
M2C_UNK VIInit();
M2C_UNK VIConfigure(M2C_UNK *);
M2C_UNK VIFlush();
M2C_UNK VISetBlack(s32);
M2C_UNK GXSetDrawDoneCallback(M2C_UNK *, M2C_UNK *);
M2C_UNK HSD_VICopyEFB2XFBPtr(M2C_UNK *, s32, M2C_UNK);
extern M2C_UNK HSD_VIPreRetraceCB;
extern M2C_UNK HSD_VIPostRetraceCB;
extern M2C_UNK HSD_VIGXDrawDoneCB;
extern M2C_UNK lbl_8031E920;
s32 fn_800C7DB8();
M2C_UNK fn_800D34DC();
s32 fn_800D37F4(u16 *);
extern M2C_UNK lbl_801DA8E8;
extern f32 lbl_80351FE8;
extern f64 lbl_80351FF0;
extern f64 lbl_80351FF8;
extern f32 lbl_80352000;
f64 ArcTan2(f64, f64);
extern f32 lbl_80352010;
extern f32 lbl_80352014;
extern f32 lbl_80352018;
extern f64 lbl_80352020;
extern f64 lbl_80352028;
extern f64 lbl_80352030;
extern f64 lbl_80352038;
s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts();
extern M2C_UNK lbl_8031E954;
M2C_UNK fn_800D35DC();
M2C_UNK fn_801034BC(s32, s32, M2C_UNK *, s32, s32, s32);
extern M2C_UNK lbl_802A9EE0;
extern M2C_UNK lbl_802A9F24;
extern M2C_UNK lbl_8031EB78;
M2C_UNK fn_800D3BA0(s32, M2C_UNK);

void HSD_VISetBlack(s32 arg0);
void HSD_VIInit(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 PadGetResetSwitch(void);
void fn_80101754(void);
void fn_80101A00(void *arg0);
void fn_801021B4(void *arg0);
void fn_801026BC(M2C_UNK arg_sp0);
void fn_80102B40(void);
void fn_80102CE8(void);
void fn_80102D10(s8 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
void fn_80102F7C(u8 arg0);
void PadRumbleOffN(u8 arg0);
void PadRumbleOffH(u8 arg0);
void fn_80103060(u8 arg0, u32 arg1);
s32 fn_8010310C(u8 arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_80103204(void *arg0, u8 *arg1);
void fn_80103394(M2C_UNK arg_sp0);

void HSD_VISetBlack(s32 arg0) {
    M2C_FIELD(&lbl_8031D320, s32 *, 0x3C) = arg0;
    M2C_FIELD(&lbl_8031D320, s8 *, 0x54) = 1;
}

void HSD_VIInit(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK *var_r9;
    s32 var_r0;
    s32 var_r10;
    s32 var_r11;
    s32 var_r4;
    void *temp_r4;
    void *temp_r5;
    void *temp_r7;

    VIInit();
    /* draft: did not compile: M2C_STRUCT_COPY(&lbl_8031D320, arg0, 0x54); */
    M2C_FIELD(&lbl_8031D320, s32 *, 0x118) = arg3;
    var_r9 = &lbl_8031D320;
    var_r10 = 0;
    var_r11 = 0;
    M2C_FIELD(&lbl_8031D320, s8 *, 0x54) = 0;
    M2C_FIELD(&lbl_8031D320, s32 *, 0x58) = arg1;
    M2C_FIELD(&lbl_8031D320, s32 *, 0xB8) = arg2;
    do {
        temp_r7 = var_r9 + 0x5C;
        /* draft: did not compile: M2C_STRUCT_COPY((s32) temp_r7 + 4, (s32) (&lbl_8031D320 - 4) + 4, 0x58); */
        if ((u32) M2C_FIELD(var_r9, u32 *, 0x58) != 0U) {
            M2C_FIELD(var_r9, s32 *, 0x5C) = 2;
            var_r11 += 1;
        } else {
            M2C_FIELD(var_r9, s32 *, 0x5C) = 0;
        }
        var_r10 += 1;
        var_r9 += 0x60;
    } while (var_r10 < 3);
    M2C_FIELD(&lbl_8031D320, s32 *, 0x1D4) = var_r11;
    temp_r5 = &lbl_8031D320 + 0x178;
    temp_r4 = &lbl_8031D320 - 4;
    M2C_FIELD(&lbl_8031D320, s32 *, 0x178) = 0;
    /* draft: did not compile: M2C_STRUCT_COPY((s32) temp_r5 + 4, (s32) temp_r4 + 4, 0x58); */
    /* draft: did not compile: VISetPreRetraceCallback(&HSD_VIPreRetraceCB, temp_r4 + 0x58, temp_r5 + 0x58, &lbl_8031D320, temp_r7 + 0x58); */
    GXSetDrawDoneCallback(&HSD_VIGXDrawDoneCB, &lbl_8031D320);
    VISetPostRetraceCallback(&HSD_VIPostRetraceCB);
    M2C_FIELD(&lbl_8031D320, s32 *, 0x1D8) = 0;
    M2C_FIELD(&lbl_8031D320, s32 *, 0x1DC) = 0;
    M2C_FIELD(&lbl_8031D320, s32 *, 0x1E0) = 0;
    M2C_FIELD(&lbl_8031D320, s32 *, 0x1E4) = 0;
    M2C_FIELD(&lbl_8031D320, s32 *, 0x1E8) = 0;
    var_r4 = 0x32;
    var_r4 = VIGetTvFormat(&lbl_8031D320) != 0U ? var_r4 : 0x3C;
    M2C_FIELD(&lbl_8031D320, s32 *, 0x1EC) = var_r4;
    M2C_FIELD(&lbl_8031D320, s32 *, 0x1F0) = 0;
    VIConfigure(&lbl_8031D320);
    VIFlush();
    VISetBlack(M2C_FIELD(&lbl_8031D320, s32 *, 0x3C));
    if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0x5C) == 2) {
        var_r0 = 0;
    } else if ((s32) M2C_FIELD(&lbl_8031D320, s32 *, 0xBC) == 2) {
        var_r0 = 1;
    } else if ((s32) M2C_FIELD((&lbl_8031D320 + 0x60), s32 *, 0xBC) == 2) {
        var_r0 = 2;
    } else {
        var_r0 = -1;
    }
    HSD_VICopyEFB2XFBPtr(&lbl_8031D320, M2C_FIELD((&lbl_8031D320 + (var_r0 * 0x60)), s32 *, 0x58), 0);
}

s32 PadGetResetSwitch(void) {
    return M2C_FIELD(&lbl_8031E920, u8 *, 0x2B) != 0;
}

void fn_80101754(void) { } /* draft: stub */

void fn_80101A00(void *arg0) {
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 var_f0;
    f32 var_f0_2;
    f64 temp_f2;
    f64 temp_f2_10;
    f64 temp_f2_11;
    f64 temp_f2_12;
    f64 temp_f2_2;
    f64 temp_f2_3;
    f64 temp_f2_4;
    f64 temp_f2_5;
    f64 temp_f2_6;
    f64 temp_f2_7;
    f64 temp_f2_8;
    f64 temp_f2_9;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_4;
    u8 temp_r0_5;
    u8 temp_r0_6;
    u8 temp_r6;
    u8 temp_r6_2;
    u8 temp_r6_3;
    u8 temp_r6_4;
    u8 temp_r7;
    u8 temp_r7_2;
    u8 temp_r7_3;
    u8 temp_r7_4;
    u8 temp_r7_5;
    u8 temp_r7_6;

    if (M2C_FIELD(&lbl_8031E920, u8 *, 0x1C) != 0) {

    } else {
        temp_r0 = M2C_FIELD(arg0, u8 *, 0x18);
        temp_r7 = M2C_FIELD(arg0, u8 *, 0x19);
        var_f0 = ((f32) (s8) temp_r0 * (f32) (s8) temp_r0) + ((f32) (s8) temp_r7 * (f32) (s8) temp_r7);
        if (var_f0 > lbl_80351FE8) {
            temp_f2 = __frsqrte(var_f0);
            temp_f2_2 = lbl_80351FF0 * temp_f2 * -(((f64) var_f0 * (temp_f2 * temp_f2)) - lbl_80351FF8);
            temp_f2_3 = lbl_80351FF0 * temp_f2_2 * -(((f64) var_f0 * (temp_f2_2 * temp_f2_2)) - lbl_80351FF8);
            temp_f0 = (f32) ((f64) var_f0 * (lbl_80351FF0 * temp_f2_3 * -(((f64) var_f0 * (temp_f2_3 * temp_f2_3)) - lbl_80351FF8)));
            sp14 = temp_f0;
            var_f0 = temp_f0;
        }
        if (var_f0 < (f32) M2C_FIELD(&lbl_8031E920, u8 *, 0x1F)) {
            M2C_FIELD(arg0, u8 *, 0x19) = 0U;
            M2C_FIELD(arg0, u8 *, 0x18) = 0U;
        } else {
            if (var_f0 > (f32) (s8) M2C_FIELD(&lbl_8031E920, u8 *, 0x1E)) {
                M2C_FIELD(arg0, u8 *, 0x18) = (u8) (s32) (((f32) (s8) M2C_FIELD(arg0, u8 *, 0x18) * (f32) (s8) M2C_FIELD(&lbl_8031E920, u8 *, 0x1E)) / var_f0);
                M2C_FIELD(arg0, u8 *, 0x19) = (u8) (s32) (((f32) M2C_FIELD(arg0, u8 *, 0x19) * (f32) M2C_FIELD(&lbl_8031E920, u8 *, 0x1E)) / var_f0);
                temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x18);
                temp_r6 = M2C_FIELD(arg0, u8 *, 0x19);
                var_f0 = ((f32) (s8) temp_r0_2 * (f32) (s8) temp_r0_2) + ((f32) (s8) temp_r6 * (f32) (s8) temp_r6);
                if (var_f0 > lbl_80351FE8) {
                    temp_f2_4 = __frsqrte(var_f0);
                    temp_f2_5 = lbl_80351FF0 * temp_f2_4 * -(((f64) var_f0 * (temp_f2_4 * temp_f2_4)) - lbl_80351FF8);
                    temp_f2_6 = lbl_80351FF0 * temp_f2_5 * -(((f64) var_f0 * (temp_f2_5 * temp_f2_5)) - lbl_80351FF8);
                    temp_f0_2 = (f32) ((f64) var_f0 * (lbl_80351FF0 * temp_f2_6 * -(((f64) var_f0 * (temp_f2_6 * temp_f2_6)) - lbl_80351FF8)));
                    sp10 = temp_f0_2;
                    var_f0 = temp_f0_2;
                }
            }
            if (((u8) M2C_FIELD(&lbl_8031E920, u8 *, 0x1D) == 1) && (var_f0 > lbl_80352000)) {
                temp_r6_2 = M2C_FIELD(arg0, u8 *, 0x18);
                M2C_FIELD(arg0, u8 *, 0x18) = (u8) (s32) ((f32) (s8) temp_r6_2 - (((f32) temp_r6_2 * (f32) M2C_FIELD(&lbl_8031E920, u8 *, 0x1F)) / var_f0));
                temp_r0_3 = M2C_FIELD(arg0, u8 *, 0x19);
                M2C_FIELD(arg0, u8 *, 0x19) = (u8) (s32) ((f32) temp_r0_3 - (((f32) temp_r0_3 * (f32) (s8) M2C_FIELD(&lbl_8031E920, u8 *, 0x1F)) / var_f0));
            }
        }
        temp_r0_4 = M2C_FIELD(arg0, u8 *, 0x1A);
        temp_r7_2 = M2C_FIELD(arg0, u8 *, 0x1B);
        var_f0_2 = ((f32) (s8) temp_r0_4 * (f32) (s8) temp_r0_4) + ((f32) (s8) temp_r7_2 * (f32) (s8) temp_r7_2);
        if (var_f0_2 > lbl_80351FE8) {
            temp_f2_7 = __frsqrte(var_f0_2);
            temp_f2_8 = lbl_80351FF0 * temp_f2_7 * -(((f64) var_f0_2 * (temp_f2_7 * temp_f2_7)) - lbl_80351FF8);
            temp_f2_9 = lbl_80351FF0 * temp_f2_8 * -(((f64) var_f0_2 * (temp_f2_8 * temp_f2_8)) - lbl_80351FF8);
            temp_f0_3 = (f32) ((f64) var_f0_2 * (lbl_80351FF0 * temp_f2_9 * -(((f64) var_f0_2 * (temp_f2_9 * temp_f2_9)) - lbl_80351FF8)));
            spC = temp_f0_3;
            var_f0_2 = temp_f0_3;
        }
        if (var_f0_2 < (f32) (s8) M2C_FIELD(&lbl_8031E920, u8 *, 0x1F)) {
            M2C_FIELD(arg0, u8 *, 0x1B) = 0U;
            M2C_FIELD(arg0, u8 *, 0x1A) = 0U;
        } else {
            if (var_f0_2 > (f32) (s8) M2C_FIELD(&lbl_8031E920, u8 *, 0x1E)) {
                M2C_FIELD(arg0, u8 *, 0x1A) = (u8) (s32) (((f32) (s8) M2C_FIELD(arg0, u8 *, 0x1A) * (f32) (s8) M2C_FIELD(&lbl_8031E920, u8 *, 0x1E)) / var_f0_2);
                M2C_FIELD(arg0, u8 *, 0x1B) = (u8) (s32) (((f32) (s8) M2C_FIELD(arg0, u8 *, 0x1B) * (f32) M2C_FIELD(&lbl_8031E920, u8 *, 0x1E)) / var_f0_2);
                temp_r0_5 = M2C_FIELD(arg0, u8 *, 0x1A);
                temp_r6_3 = M2C_FIELD(arg0, u8 *, 0x1B);
                var_f0_2 = ((f32) (s8) temp_r0_5 * (f32) (s8) temp_r0_5);
                var_f0_2 += ((f32) (s8) temp_r6_3 * (f32) (s8) temp_r6_3);
                if (var_f0_2 > lbl_80351FE8) {
                    temp_f2_10 = __frsqrte(var_f0_2);
                    temp_f2_11 = lbl_80351FF0 * temp_f2_10 * -(((f64) var_f0_2 * (temp_f2_10 * temp_f2_10)) - lbl_80351FF8);
                    temp_f2_12 = lbl_80351FF0 * temp_f2_11 * -(((f64) var_f0_2 * (temp_f2_11 * temp_f2_11)) - lbl_80351FF8);
                    temp_f0_4 = (f32) ((f64) var_f0_2 * (lbl_80351FF0 * temp_f2_12 * -(((f64) var_f0_2 * (temp_f2_12 * temp_f2_12)) - lbl_80351FF8)));
                    sp8 = temp_f0_4;
                    var_f0_2 = temp_f0_4;
                }
            }
            if (((u8) M2C_FIELD(&lbl_8031E920, u8 *, 0x1D) == 1) && (var_f0_2 > lbl_80352000)) {
                temp_r6_4 = M2C_FIELD(arg0, u8 *, 0x1A);
                M2C_FIELD(arg0, u8 *, 0x1A) = (u8) (s32) ((f32) (s8) temp_r6_4 - (((f32) temp_r6_4 * (f32) M2C_FIELD(&lbl_8031E920, u8 *, 0x1F)) / var_f0_2));
                temp_r0_6 = M2C_FIELD(arg0, u8 *, 0x1B);
                M2C_FIELD(arg0, u8 *, 0x1B) = (u8) (s32) ((f32) (s8) temp_r0_6 - (((f32) temp_r0_6 * (f32) (s8) M2C_FIELD(&lbl_8031E920, u8 *, 0x1F)) / var_f0_2));
            }
        }
    }
    temp_r7_3 = M2C_FIELD(arg0, u8 *, 0x1C);
    if (temp_r7_3 < (u8) M2C_FIELD(&lbl_8031E920, u8 *, 0x22)) {
        M2C_FIELD(arg0, u8 *, 0x1C) = 0U;
    } else {
        if (temp_r7_3 > (u8) M2C_FIELD(&lbl_8031E920, u8 *, 0x21)) {
            M2C_FIELD(arg0, u8 *, 0x1C) = (u8) M2C_FIELD(&lbl_8031E920, u8 *, 0x21);
        }
        if ((u8) M2C_FIELD(&lbl_8031E920, u8 *, 0x20) == 1) {
            M2C_FIELD(arg0, u8 *, 0x1C) = (u8) (M2C_FIELD(arg0, u8 *, 0x1C) - M2C_FIELD(&lbl_8031E920, u8 *, 0x22));
        }
    }
    temp_r7_4 = M2C_FIELD(arg0, u8 *, 0x1D);
    if (temp_r7_4 < (u8) M2C_FIELD(&lbl_8031E920, u8 *, 0x22)) {
        M2C_FIELD(arg0, u8 *, 0x1D) = 0U;
    } else {
        if (temp_r7_4 > (u8) M2C_FIELD(&lbl_8031E920, u8 *, 0x21)) {
            M2C_FIELD(arg0, u8 *, 0x1D) = (u8) M2C_FIELD(&lbl_8031E920, u8 *, 0x21);
        }
        if ((u8) M2C_FIELD(&lbl_8031E920, u8 *, 0x20) == 1) {
            M2C_FIELD(arg0, u8 *, 0x1D) = (u8) (M2C_FIELD(arg0, u8 *, 0x1D) - M2C_FIELD(&lbl_8031E920, u8 *, 0x22));
        }
    }
    temp_r7_5 = M2C_FIELD(arg0, u8 *, 0x1E);
    if (temp_r7_5 < (u8) M2C_FIELD(&lbl_8031E920, u8 *, 0x25)) {
        M2C_FIELD(arg0, u8 *, 0x1E) = 0U;
    } else {
        if (temp_r7_5 > (u8) M2C_FIELD(&lbl_8031E920, u8 *, 0x24)) {
            M2C_FIELD(arg0, u8 *, 0x1E) = (u8) M2C_FIELD(&lbl_8031E920, u8 *, 0x24);
        }
        if ((u8) M2C_FIELD(&lbl_8031E920, u8 *, 0x23) == 1) {
            M2C_FIELD(arg0, u8 *, 0x1E) = (u8) (M2C_FIELD(arg0, u8 *, 0x1E) - M2C_FIELD(&lbl_8031E920, u8 *, 0x25));
        }
    }
    temp_r7_6 = M2C_FIELD(arg0, u8 *, 0x1F);
    if (temp_r7_6 < (u8) M2C_FIELD(&lbl_8031E920, u8 *, 0x25)) {
        M2C_FIELD(arg0, u8 *, 0x1F) = 0U;
        return;
    }
    if (temp_r7_6 > (u8) M2C_FIELD(&lbl_8031E920, u8 *, 0x24)) {
        M2C_FIELD(arg0, u8 *, 0x1F) = (u8) M2C_FIELD(&lbl_8031E920, u8 *, 0x24);
    }
    if ((u8) M2C_FIELD(&lbl_8031E920, u8 *, 0x23) == 1) {
        M2C_FIELD(arg0, u8 *, 0x1F) = (u8) (M2C_FIELD(arg0, u8 *, 0x1F) - M2C_FIELD(&lbl_8031E920, u8 *, 0x25));
    }
}

void fn_801021B4(void *arg0) {
    f32 spC;
    f32 sp8;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f31;
    f32 var_f31_2;
    f32 var_f4;
    f32 var_f4_2;
    f64 temp_f1;
    f64 temp_f1_2;
    f64 temp_f1_3;
    f64 temp_f1_4;
    f64 temp_f1_5;
    f64 temp_f1_6;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r6_2;

    if ((s32) M2C_FIELD(&lbl_8031E920, u8 *, 0x14) != 0) {
        return;
    }
    temp_r6 = M2C_FIELD(arg0, u8 *, 0x19);
    temp_r5 = M2C_FIELD(arg0, u8 *, 0x18);
    var_f31 = ((f32) (s8) temp_r5 * (f32) (s8) temp_r5) + ((f32) (s8) temp_r6 * (f32) (s8) temp_r6);
    if (var_f31 > lbl_80351FE8) {
        temp_f1 = __frsqrte(var_f31);
        temp_f1_2 = lbl_80351FF0 * temp_f1 * -(((f64) var_f31 * (temp_f1 * temp_f1)) - lbl_80351FF8);
        temp_f1_3 = lbl_80351FF0 * temp_f1_2 * -(((f64) var_f31 * (temp_f1_2 * temp_f1_2)) - lbl_80351FF8);
        spC = (f32) ((f64) var_f31 * (lbl_80351FF0 * temp_f1_3 * -(((f64) var_f31 * (temp_f1_3 * temp_f1_3)) - lbl_80351FF8)));
        var_f31 = spC;
    }
    if (lbl_80351FE8 == (f32) (s8) temp_r5) {
        if ((f32) (s8) temp_r6 >= lbl_80351FE8) {
            var_f4 = lbl_80352010;
        } else {
            var_f4 = lbl_80352014;
        }
    } else {
        var_f4 = (f32) ArcTan2((f64) (s8) temp_r6, (f64) (s8) temp_r5);
    }
    temp_f2 = lbl_80352018 * M2C_FIELD(&lbl_8031E920, f32 *, 0x18);
    if (!(var_f31 < (f32) (s8) M2C_FIELD(&lbl_8031E920, u8 *, 0x15))) {
        if (var_f4 < (f32) (lbl_80352020 + (f64) temp_f2)) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x40000);
        }
        if (var_f4 >= (f32) (lbl_80352020 - (f64) temp_f2)) {
            if (var_f4 <= (f32) (lbl_80352028 + (f64) temp_f2)) {
                M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x20000);
            }
        }
        if ((var_f4 > (lbl_80352028 - (f64) temp_f2)) && (var_f4 < (f32) (lbl_80352030 + (f64) temp_f2))) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80000);
        }
        if (var_f4 >= (lbl_80352030 - (f64) temp_f2)) {
            if (var_f4 <= (lbl_80352038 + (f64) temp_f2)) {
                M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x10000);
            }
        }
        if (var_f4 > (lbl_80352038 - (f64) temp_f2)) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x40000);
        }
    }
    temp_r7 = M2C_FIELD(arg0, u8 *, 0x1B);
    temp_r6_2 = M2C_FIELD(arg0, u8 *, 0x1A);
    var_f31_2 = ((f32) (s8) temp_r6_2 * (f32) (s8) temp_r6_2) + ((f32) (s8) temp_r7 * (f32) (s8) temp_r7);
    if (var_f31_2 > lbl_80351FE8) {
        temp_f1_4 = __frsqrte(var_f31_2);
        temp_f1_5 = lbl_80351FF0 * temp_f1_4 * -(((f64) var_f31_2 * (temp_f1_4 * temp_f1_4)) - lbl_80351FF8);
        temp_f1_6 = lbl_80351FF0 * temp_f1_5 * -(((f64) var_f31_2 * (temp_f1_5 * temp_f1_5)) - lbl_80351FF8);
        sp8 = (f32) ((f64) var_f31_2 * (lbl_80351FF0 * temp_f1_6 * -(((f64) var_f31_2 * (temp_f1_6 * temp_f1_6)) - lbl_80351FF8)));
        var_f31_2 = sp8;
    }
    if (lbl_80351FE8 == (f32) (s8) temp_r6_2) {
        if ((f32) (s8) temp_r7 >= lbl_80351FE8) {
            var_f4_2 = lbl_80352010;
        } else {
            var_f4_2 = lbl_80352014;
        }
    } else {
        var_f4_2 = (f32) ArcTan2((f64) (s8) temp_r7, (f64) (s8) temp_r6_2);
    }
    temp_f2_2 = lbl_80352018 * M2C_FIELD(&lbl_8031E920, f32 *, 0x18);
    if (!(var_f31_2 < (f32) (s8) M2C_FIELD(&lbl_8031E920, u8 *, 0x15))) {
        if (var_f4_2 < (f32) (lbl_80352020 + (f64) temp_f2_2)) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x400000);
        }
        if (var_f4_2 >= (f32) (lbl_80352020 - (f64) temp_f2_2)) {
            if (var_f4_2 <= (f32) (lbl_80352028 + (f64) temp_f2_2)) {
                M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x200000);
            }
        }
        if ((var_f4_2 > (f32) (lbl_80352028 - (f64) temp_f2_2)) && (var_f4_2 < (f32) (lbl_80352030 + (f64) temp_f2_2))) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x800000);
        }
        if (var_f4_2 >= (f32) (lbl_80352030 - (f64) temp_f2_2)) {
            if (var_f4_2 <= (f32) (lbl_80352038 + (f64) temp_f2_2)) {
                M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x100000);
            }
        }
        if (var_f4_2 > (lbl_80352038 - (f64) temp_f2_2)) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x400000);
        }
    }
}

void fn_801026BC(M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80102B40(void) {
    s32 temp_r0;
    s32 temp_r6;
    s32 temp_r6_2;
    void *var_r4;
    void *var_r5;
    s32 var_ctr;

    var_r4 = &lbl_8031E920 + 0x34;
    var_r5 = &lbl_8031E920 + 0x144;
    var_ctr = 4;
    do {
        M2C_FIELD(var_r5, s32 *, 4) = (s32) M2C_FIELD(var_r5, s32 *, 0);
        M2C_FIELD(var_r5, u8 *, 0x42) = (u8) M2C_FIELD(var_r4, u8 *, 0x42);
        M2C_FIELD(var_r5, u8 *, 0x43) = (u8) M2C_FIELD(var_r4, u8 *, 0x43);
        M2C_FIELD(var_r5, u8 *, 0x41) = (u8) M2C_FIELD(var_r4, u8 *, 0x41);
        if ((s8) M2C_FIELD(var_r5, u8 *, 0x42) == 0) {
            M2C_FIELD(var_r5, s32 *, 0) = (s32) M2C_FIELD(var_r4, s32 *, 0);
            M2C_FIELD(var_r5, u8 *, 0x18) = (u8) M2C_FIELD(var_r4, u8 *, 0x18);
            M2C_FIELD(var_r5, u8 *, 0x19) = (u8) M2C_FIELD(var_r4, u8 *, 0x19);
            M2C_FIELD(var_r5, u8 *, 0x1A) = (u8) M2C_FIELD(var_r4, u8 *, 0x1A);
            M2C_FIELD(var_r5, u8 *, 0x1B) = (u8) M2C_FIELD(var_r4, u8 *, 0x1B);
            M2C_FIELD(var_r5, u8 *, 0x1C) = (u8) M2C_FIELD(var_r4, u8 *, 0x1C);
            M2C_FIELD(var_r5, u8 *, 0x1D) = (u8) M2C_FIELD(var_r4, u8 *, 0x1D);
            M2C_FIELD(var_r5, u8 *, 0x1E) = (u8) M2C_FIELD(var_r4, u8 *, 0x1E);
            M2C_FIELD(var_r5, u8 *, 0x1F) = (u8) M2C_FIELD(var_r4, u8 *, 0x1F);
            M2C_FIELD(var_r5, f32 *, 0x20) = (f32) M2C_FIELD(var_r4, f32 *, 0x20);
            M2C_FIELD(var_r5, f32 *, 0x24) = (f32) M2C_FIELD(var_r4, f32 *, 0x24);
            M2C_FIELD(var_r5, f32 *, 0x28) = (f32) M2C_FIELD(var_r4, f32 *, 0x28);
            M2C_FIELD(var_r5, f32 *, 0x2C) = (f32) M2C_FIELD(var_r4, f32 *, 0x2C);
            M2C_FIELD(var_r5, f32 *, 0x30) = (f32) M2C_FIELD(var_r4, f32 *, 0x30);
            M2C_FIELD(var_r5, f32 *, 0x34) = (f32) M2C_FIELD(var_r4, f32 *, 0x34);
            M2C_FIELD(var_r5, f32 *, 0x38) = (f32) M2C_FIELD(var_r4, f32 *, 0x38);
            M2C_FIELD(var_r5, f32 *, 0x3C) = (f32) M2C_FIELD(var_r4, f32 *, 0x3C);
        } else {
            M2C_FIELD(var_r5, s32 *, 0) = 0;
            M2C_FIELD(var_r5, u8 *, 0x1B) = 0U;
            M2C_FIELD(var_r5, u8 *, 0x1A) = 0U;
            M2C_FIELD(var_r5, u8 *, 0x19) = 0U;
            M2C_FIELD(var_r5, u8 *, 0x18) = 0U;
            M2C_FIELD(var_r5, u8 *, 0x1F) = 0U;
            M2C_FIELD(var_r5, u8 *, 0x1E) = 0U;
            M2C_FIELD(var_r5, u8 *, 0x1D) = 0U;
            M2C_FIELD(var_r5, u8 *, 0x1C) = 0U;
            M2C_FIELD(var_r5, f32 *, 0x2C) = (f32) lbl_80351FE8;
            M2C_FIELD(var_r5, f32 *, 0x28) = (f32) lbl_80351FE8;
            M2C_FIELD(var_r5, f32 *, 0x24) = (f32) lbl_80351FE8;
            M2C_FIELD(var_r5, f32 *, 0x20) = (f32) lbl_80351FE8;
            M2C_FIELD(var_r5, f32 *, 0x3C) = (f32) lbl_80351FE8;
            M2C_FIELD(var_r5, f32 *, 0x38) = (f32) lbl_80351FE8;
            M2C_FIELD(var_r5, f32 *, 0x34) = (f32) lbl_80351FE8;
            M2C_FIELD(var_r5, f32 *, 0x30) = (f32) lbl_80351FE8;
        }
        temp_r6 = M2C_FIELD(var_r5, s32 *, 0);
        M2C_FIELD(var_r5, s32 *, 8) = (s32) (temp_r6 & (M2C_FIELD(var_r5, s32 *, 4) ^ temp_r6));
        temp_r6_2 = M2C_FIELD(var_r5, s32 *, 4);
        M2C_FIELD(var_r5, s32 *, 0x10) = (s32) (temp_r6_2 & (temp_r6_2 ^ M2C_FIELD(var_r5, s32 *, 0)));
        if ((M2C_FIELD(var_r5, s32 *, 4) ^ M2C_FIELD(var_r5, s32 *, 0)) != 0) {
            M2C_FIELD(var_r5, s32 *, 0xC) = (s32) M2C_FIELD(var_r5, s32 *, 8);
            M2C_FIELD(var_r5, s32 *, 0x14) = (s32) M2C_FIELD(&lbl_8031E920, s32 *, 0xC);
        } else {
            temp_r0 = M2C_FIELD(var_r5, s32 *, 0x14) - 1;
            M2C_FIELD(var_r5, s32 *, 0x14) = temp_r0;
            if (temp_r0 != 0) {
                M2C_FIELD(var_r5, s32 *, 0xC) = 0;
            } else {
                M2C_FIELD(var_r5, s32 *, 0xC) = (s32) M2C_FIELD(var_r5, s32 *, 0);
                M2C_FIELD(var_r5, s32 *, 0x14) = (s32) M2C_FIELD(&lbl_8031E920, s32 *, 0x10);
            }
        }
        /* draft: did not compile: var_r4 += 0x44; */
        /* draft: did not compile: var_r5 += 0x44; */
        var_ctr -= 1;
    } while (var_ctr != 0);
}

#pragma push
#pragma dont_inline on
void fn_80102CE8(void) {
    fn_80101754();
    fn_801026BC((long)(0));
    fn_80102B40();
}
#pragma pop

void fn_80102D10(s8 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80102F7C(u8 arg0) {
    s32 temp_r5;
    void *temp_r4;

    OSDisableInterrupts((long *)(0), (long *)(0));
    temp_r5 = arg0 * 0xC;
    temp_r4 = &lbl_8031EB78 + temp_r5;
    M2C_FIELD(temp_r4, s8 *, 2) = 2;
    OSRestoreInterrupts(temp_r4, temp_r5, 2);
}

void PadRumbleOffN(u8 arg0) {
    s32 temp_r5;
    void *temp_r4;

    OSDisableInterrupts((long *)(0), (long *)(0));
    temp_r5 = arg0 * 0xC;
    temp_r4 = &lbl_8031EB78 + temp_r5;
    M2C_FIELD(temp_r4, s8 *, 2) = 1;
    OSRestoreInterrupts(temp_r4, temp_r5, 1);
}

void PadRumbleOffH(u8 arg0) {
    s32 temp_r5;
    void *temp_r4;

    OSDisableInterrupts((long *)(0), (long *)(0));
    temp_r5 = arg0 * 0xC;
    temp_r4 = &lbl_8031EB78 + temp_r5;
    M2C_FIELD(temp_r4, s8 *, 2) = 0;
    OSRestoreInterrupts(temp_r4, temp_r5, 0);
}

void fn_80103060(u8 arg0, u32 arg1) {
    M2C_UNK *temp_r0;
    M2C_UNK *temp_r6;
    M2C_UNK *var_r4;
    M2C_UNK *var_r7;
    s32 temp_r5;
    void *temp_r31;

    temp_r5 = arg0 * 0xC;
    temp_r31 = &lbl_8031EB78 + temp_r5;
    OSDisableInterrupts(&lbl_8031EB78, temp_r5);
    var_r7 = M2C_FIELD(temp_r31, M2C_UNK **, 8);
loop_7:
    if (var_r7 != NULL) {
        temp_r6 = M2C_FIELD(var_r7, M2C_UNK **, 0);
        if ((u32) M2C_FIELD(var_r7, u32 *, 4) == arg1) {
            /* draft: did not compile: var_r4 = temp_r31 + 8; */
loop_4:
            /* draft: did not compile: temp_r0 = *var_r4; */
            if (temp_r0 != var_r7) {
                var_r4 = temp_r0;
                goto loop_4;
            }
            /* draft: did not compile: *var_r4 = temp_r6; */
            M2C_FIELD(temp_r31, u16 *, 4) = (u16) (M2C_FIELD(temp_r31, u16 *, 4) - 1);
            M2C_FIELD(var_r7, M2C_UNK **, 0) = M2C_FIELD(&lbl_8031E920, M2C_UNK **, 0x30);
            M2C_FIELD(&lbl_8031E920, M2C_UNK **, 0x30) = var_r7;
        }
        var_r7 = temp_r6;
        goto loop_7;
    }
    OSRestoreInterrupts();
}

s32 fn_8010310C(u8 arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4, M2C_UNK arg_sp0) {
    M2C_UNK *temp_r5;
    M2C_UNK *temp_r7;
    M2C_UNK *var_r6;
    s32 temp_r8;
    void *temp_r30;
    s32 var_r29;

    temp_r8 = arg0 * 0xC;
    temp_r30 = &lbl_8031EB78 + temp_r8;
    var_r29 = 0;
    OSDisableInterrupts(&lbl_8031EB78, temp_r8, &lbl_8031E920);
    temp_r7 = M2C_FIELD(&lbl_8031E920, M2C_UNK **, 0x30);
    if ((temp_r7 != NULL) && ((u16) M2C_FIELD(temp_r30, u16 *, 4) < (u16) M2C_FIELD(&lbl_8031E920, u16 *, 0x2C))) {
        /* draft: did not compile: var_r6 = temp_r30 + 8; */
        M2C_FIELD(&lbl_8031E920, M2C_UNK **, 0x30) = (M2C_UNK *) M2C_FIELD(temp_r7, M2C_UNK **, 0);
        M2C_FIELD(temp_r7, s32 *, 4) = arg1;
        M2C_FIELD(temp_r7, s8 *, 8) = 0;
        M2C_FIELD(temp_r7, u8 *, 9) = arg3;
        M2C_FIELD(temp_r7, s8 *, 0xA) = 0;
        M2C_FIELD(temp_r7, s16 *, 0xC) = 0;
        M2C_FIELD(temp_r7, s16 *, 0xE) = 0;
        M2C_FIELD(temp_r7, s32 *, 0x10) = arg2;
        M2C_FIELD(temp_r7, s32 *, 0x14) = 0;
        M2C_FIELD(temp_r7, s32 *, 0x1C) = arg4;
        M2C_FIELD(temp_r7, s32 *, 0x18) = arg4;
loop_4:
        /* draft: did not compile: temp_r5 = *var_r6; */
        if ((temp_r5 != NULL) && ((u8) M2C_FIELD(temp_r5, u8 *, 9) <= (u8) M2C_FIELD(temp_r7, u8 *, 9))) {
            var_r6 = temp_r5;
            goto loop_4;
        }
        M2C_FIELD(temp_r7, M2C_UNK **, 0) = temp_r5;
        var_r29 = 1;
        /* draft: did not compile: *var_r6 = temp_r7; */
        M2C_FIELD(temp_r30, u16 *, 4) = (u16) (M2C_FIELD(temp_r30, u16 *, 4) + 1);
    }
    OSRestoreInterrupts();
    return var_r29;
}

s32 fn_80103204(void *arg0, u8 *arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    u16 temp_r5_2;
    u8 *temp_r5;

    if ((u8) M2C_FIELD(arg0, u8 *, 8) == 1) {
        return 0;
    }
loop_22:
    if ((u16) M2C_FIELD(arg0, u16 *, 0xE) != 0) {
        *arg1 = M2C_FIELD(arg0, u8 *, 0xA);
        M2C_FIELD(arg0, u16 *, 0xE) = (u16) (M2C_FIELD(arg0, u16 *, 0xE) - 1);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x10);
        if ((temp_r4 != -1) && (temp_r4 != -2)) {
            temp_r0 = temp_r4 - 1;
            M2C_FIELD(arg0, s32 *, 0x10) = temp_r0;
            if (temp_r0 == 0) {
                return 1;
            }
        }
        return 0;
    }
    temp_r5 = M2C_FIELD(arg0, u8 **, 0x18);
    temp_r0_2 = ((u8) *temp_r5 >> 5U) & 7;
    switch (temp_r0_2) {                            /* irregular */
    case 0:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x10) == -2) {
            return 1;
        }
        M2C_FIELD(arg0, u8 **, 0x18) = (u8 *) M2C_FIELD(arg0, u8 **, 0x1C);
        goto loop_22;
    case 1:
        M2C_FIELD(arg0, u8 *, 0xA) = 2U;
        M2C_FIELD(arg0, u16 *, 0xE) = (u16) ((u16) *M2C_FIELD(arg0, u8 **, 0x18) & 0x1FFF);
        M2C_FIELD(arg0, u8 **, 0x18) = (u8 *) (M2C_FIELD(arg0, u8 **, 0x18) + 2);
        goto loop_22;
    case 2:
        M2C_FIELD(arg0, u8 *, 0xA) = 1U;
        M2C_FIELD(arg0, u16 *, 0xE) = (u16) ((u16) *M2C_FIELD(arg0, u8 **, 0x18) & 0x1FFF);
        M2C_FIELD(arg0, u8 **, 0x18) = (u8 *) (M2C_FIELD(arg0, u8 **, 0x18) + 2);
        goto loop_22;
    case 3:
        M2C_FIELD(arg0, u8 *, 0xA) = 0U;
        M2C_FIELD(arg0, u16 *, 0xE) = (u16) ((u16) *M2C_FIELD(arg0, u8 **, 0x18) & 0x1FFF);
        M2C_FIELD(arg0, u8 **, 0x18) = (u8 *) (M2C_FIELD(arg0, u8 **, 0x18) + 2);
        goto loop_22;
    case 4:
        M2C_FIELD(arg0, u16 *, 0xC) = (u16) ((u16) *temp_r5 & 0x1FFF);
        M2C_FIELD(arg0, u8 **, 0x18) = (u8 *) (M2C_FIELD(arg0, u8 **, 0x18) + 2);
        M2C_FIELD(arg0, u8 **, 0x14) = (u8 *) M2C_FIELD(arg0, u8 **, 0x18);
        goto loop_22;
    case 5:
        temp_r5_2 = M2C_FIELD(arg0, u16 *, 0xC) - 1;
        M2C_FIELD(arg0, u16 *, 0xC) = temp_r5_2;
        if (temp_r5_2 != 0) {
            M2C_FIELD(arg0, u8 **, 0x18) = (u8 *) M2C_FIELD(arg0, u8 **, 0x14);
        } else {
            M2C_FIELD(arg0, u8 **, 0x18) = (u8 *) (M2C_FIELD(arg0, u8 **, 0x18) + 2);
        }
        goto loop_22;
    }
}

void fn_80103394(M2C_UNK arg_sp0) {
    M2C_UNK *temp_r0;
    M2C_UNK *temp_r28;
    M2C_UNK *var_r29;
    M2C_UNK *var_r30;
    M2C_UNK *var_r3;
    s32 var_r27;
    u8 temp_r3;

    var_r27 = 0;
    var_r30 = &lbl_8031EB78;
    do {
        M2C_FIELD(var_r30, u8 *, 1) = (u8) M2C_FIELD(var_r30, u8 *, 2);
        var_r29 = M2C_FIELD(var_r30, M2C_UNK **, 8);
loop_8:
        if (var_r29 != NULL) {
            /* draft: did not compile: temp_r28 = *var_r29; */
            if (0 /* draft: did not compile */) {
                var_r3 = var_r30 + 8;
loop_5:
                /* draft: did not compile: temp_r0 = *var_r3; */
                if (temp_r0 != var_r29) {
                    var_r3 = temp_r0;
                    goto loop_5;
                }
                *var_r3 = *var_r29;
                M2C_FIELD(var_r30, u16 *, 4) = (u16) (M2C_FIELD(var_r30, u16 *, 4) - 1);
                /* draft: did not compile: *var_r29 = M2C_FIELD(&lbl_8031E920, M2C_UNK **, 0x30); */
                M2C_FIELD(&lbl_8031E920, M2C_UNK **, 0x30) = var_r29;
            }
            var_r29 = temp_r28;
            goto loop_8;
        }
        temp_r3 = M2C_FIELD(var_r30, u8 *, 1);
        if (temp_r3 != (u8) M2C_FIELD(var_r30, u8 *, 0)) {
            switch ((s32) temp_r3) {                /* irregular */
            case 0:
                fn_800D3BA0(var_r27, 2);
                break;
            case 1:
                fn_800D3BA0(var_r27, 0);
                break;
            case 2:
                fn_800D3BA0(var_r27, 1);
                break;
            }
            M2C_FIELD(var_r30, u8 *, 0) = (u8) M2C_FIELD(var_r30, u8 *, 1);
        }
        var_r27 += 1;
        var_r30 += 0xC;
    } while (var_r27 < 4);
}
