/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK lbl_80346460;
extern M2C_UNK lbl_80346660;

void fn_80131310(void *arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, M2C_UNK arg_sp0);
void fn_801314C0(void *arg0, void *arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5, M2C_UNK arg_sp0);
s32 fn_80131AAC(void *arg0, void *arg1, s32 *arg2, s32 arg3);
s32 fn_80131D4C(void *arg0);
void fn_80131DBC(void *arg1, s32 arg2, void *arg3);
void fn_80131F00(s32 arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4, M2C_UNK arg_sp0);
void fn_80131FDC(s32 *arg0, s32 arg1, s32 *arg2, M2C_UNK arg_sp0);
void fn_801320D0(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_8013215C(s32 *arg0, s32 arg1, s32 *arg2, s32 arg3);
void fn_80132180(s32 *arg0, s32 arg1, void *arg2, s32 arg3);
void fn_801322A4(s32 *arg0, s32 arg1, u32 *arg2, s32 arg3);
void fn_801323B8(s32 *arg0, s32 arg1, void *arg2, s32 arg3);
void fn_8013252C(void *arg0, void *arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
void fn_8013262C(void *arg0, void *arg1, s32 arg2, s32 arg3);

void fn_80131310(void *arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_801314C0(void *arg0, void *arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5, M2C_UNK arg_sp0) { } /* draft: stub */

s32 fn_80131AAC(void *arg0, void *arg1, s32 *arg2, s32 arg3) { return 0; } /* draft: stub */

s32 fn_80131D4C(void *arg0) { return 0; } /* draft: stub */

void fn_80131DBC(void *arg1, s32 arg2, void *arg3) { } /* draft: stub */

void fn_80131F00(s32 arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4, M2C_UNK arg_sp0) {
    s32 var_r28;
    s32 var_r31;
    u16 *temp_r7;
    u16 *temp_r7_2;
    u16 *temp_r7_3;

    var_r28 = arg1;
    var_r31 = arg4 - 1;
    M2C_FIELD(arg3, u16 *, 0x10) = (u16) *M2C_FIELD(arg3, u16 **, 8);
    M2C_FIELD(arg3, u8 *, 0x14) = (u8) *M2C_FIELD(arg3, u16 **, 8);
loop_2:
    if (var_r31 > 0) {
        M2C_FIELD(arg3, u16 *, 0x12) = (u16) M2C_FIELD(arg3, u16 *, 0x10);
        temp_r7 = M2C_FIELD(arg3, u16 **, 8);
        temp_r7_2 = temp_r7 + 2;
        M2C_FIELD(arg3, u16 **, 8) = temp_r7_2;
        M2C_FIELD(arg3, u16 *, 0x10) = (u16) M2C_FIELD(temp_r7, u16 *, 2);
        /* draft: did not compile: fn_80131DBC(arg0, var_r28, arg2, arg3, temp_r7_2); */
        var_r28 += 4;
        var_r31 -= 1;
        goto loop_2;
    }
    M2C_FIELD(arg3, u16 *, 0x12) = (u16) M2C_FIELD(arg3, u16 *, 0x10);
    temp_r7_3 = M2C_FIELD(arg3, u16 **, 8);
    M2C_FIELD(arg3, u16 **, 8) = (u16 *) (temp_r7_3 + 6);
    /* draft: did not compile: fn_80131DBC(arg0, var_r28, arg2, arg3, temp_r7_3); */
    M2C_FIELD(arg3, s32 *, 4) = (s32) (M2C_FIELD(arg3, s32 *, 4) + 4);
    M2C_FIELD(arg3, s32 *, 0xC) = (s32) (M2C_FIELD(arg3, s32 *, 0xC) + 4);
}

void fn_80131FDC(s32 *arg0, s32 arg1, s32 *arg2, M2C_UNK arg_sp0) {
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 *var_r31;
    s32 temp_r25;
    s32 temp_r4;
    u16 temp_r27;
    u16 temp_r5;
    u16 var_r24;
    void *temp_r29;

    var_r31 = arg2;
    temp_r29 = arg0 + (arg1 * 0x38);
    temp_r5 = M2C_FIELD(temp_r29, u16 *, 0x28);
    var_r24 = M2C_FIELD(temp_r29, u16 *, 0xA);
    temp_r27 = M2C_FIELD(temp_r29, u16 *, 8);
    temp_r25 = temp_r5 * 4;
    sp8 = arg1;
    temp_r4 = M2C_FIELD(temp_r29, s32 *, 4);
    spC = temp_r4;
    sp10 = temp_r4;
    sp14 = temp_r4 + (M2C_FIELD(temp_r29, u16 *, 0xC) * 2);
    if ((s32) var_r24 > 0) {
        /* draft: did not compile: fn_80131F00(var_r31, &sp8, temp_r27); */
        var_r31 += temp_r25;
        var_r24 -= 1;
    }
    spC = M2C_FIELD(temp_r29, s32 *, 4);
loop_4:
    if ((s32) var_r24 > 1) {
        /* draft: did not compile: fn_80131F00(arg0, var_r31, temp_r5, &sp8, temp_r27); */
        var_r31 += temp_r25;
        var_r24 -= 1;
        goto loop_4;
    }
    if ((s32) var_r24 > 0) {
        sp14 = sp10;
        /* draft: did not compile: fn_80131F00(arg0, var_r31, temp_r5, &sp8, temp_r27); */
    }
}

void fn_801320D0(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;
    u8 temp_r0_2;
    s32 var_ctr;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    void *var_r3;
    void *var_r4;

    var_r3 = arg0;
    var_r4 = arg1;
    var_r5 = arg2;
    var_r6 = arg3;
    var_r7 = arg4;
    var_ctr = 3;
    do {
        M2C_FIELD(var_r4, s32 *, 0) = 0;
        M2C_FIELD(var_r4, s32 *, 4) = 0x7F;
        M2C_FIELD(var_r4, s32 *, 0x10) = var_r5;
        M2C_FIELD(var_r4, s32 *, 0x1C) = var_r6;
        M2C_FIELD(var_r4, s32 *, 0x20) = var_r7;
        temp_r0 = M2C_FIELD(var_r3, s32 *, 4);
        M2C_FIELD(var_r4, s32 *, 8) = temp_r0;
        M2C_FIELD(var_r4, s32 *, 0xC) = temp_r0;
        M2C_FIELD(var_r4, s16 *, 0x24) = (s16) (8 >> M2C_FIELD(var_r3, u8 *, 0x30));
        M2C_FIELD(var_r4, s32 *, 0x28) = (s32) ((8 >> M2C_FIELD(var_r3, u8 *, 0x31)) * M2C_FIELD(var_r3, u16 *, 0x28));
        M2C_FIELD(var_r4, s32 *, 0x2C) = (s32) M2C_FIELD(var_r3, u8 *, 0x32);
        M2C_FIELD(var_r4, s32 *, 0x30) = (s32) (M2C_FIELD(var_r3, u16 *, 0xC) * M2C_FIELD(var_r3, u8 *, 0x33));
        /* draft: did not compile: var_r4 += 0x34; */
        temp_r0_2 = M2C_FIELD(var_r3, s32 *, 0x2C);
        /* draft: did not compile: var_r3 += 0x38; */
        var_r5 += temp_r0_2;
        var_r6 += temp_r0_2;
        var_r7 += temp_r0_2;
        var_ctr -= 1;
    } while (var_ctr != 0);
}

void fn_8013215C(s32 *arg0, s32 arg1, s32 *arg2, s32 arg3) {
    void *temp_r3;
    void *temp_r5;

    *arg0 = *arg2;
    temp_r5 = arg2 + arg3;
    temp_r3 = arg0 + arg1;
    *(arg0 + arg1) = *(arg2 + arg3);
    /* draft: did not compile: *(temp_r3 + arg1) = *(temp_r5 + arg3); */
    /* draft: did not compile: *(temp_r3 + arg1 + arg1) = *(temp_r5 + arg3 + arg3); */
}

void fn_80132180(s32 *arg0, s32 arg1, void *arg2, s32 arg3) { } /* draft: stub */

void fn_801322A4(s32 *arg0, s32 arg1, u32 *arg2, s32 arg3) { } /* draft: stub */

void fn_801323B8(s32 *arg0, s32 arg1, void *arg2, s32 arg3) { } /* draft: stub */

void fn_8013252C(void *arg0, void *arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) {
    s32 temp_r21;
    s32 temp_r22;
    s32 temp_r23;
    s32 temp_r6;
    s32 temp_r7;
    s32 var_r28;
    s32 var_r29;
    u16 temp_r4;
    u8 temp_r26;
    void *var_r30;
    void *var_r31;

    var_r31 = arg1;
    var_r30 = arg0;
    var_r29 = 0;
    do {
        var_r28 = 0;
        temp_r6 = arg2 >> M2C_FIELD(var_r30, u8 *, 0x30);
        temp_r7 = arg3 >> M2C_FIELD(var_r30, u8 *, 0x31);
        temp_r26 = M2C_FIELD(var_r30, u8 *, 0x34);
        temp_r23 = temp_r6 & 1;
        temp_r22 = temp_r7 & 1;
        temp_r21 = (temp_r6 >> 1) + (((temp_r7 >> 1) * M2C_FIELD(var_r30, u16 *, 0x28)) + M2C_FIELD(var_r31, s32 *, 0x18));
loop_10:
        if (var_r28 < (s32) temp_r26) {
            temp_r4 = M2C_FIELD(var_r30, u16 *, 0x28);
            if (temp_r22 != 0) {
                if (temp_r23 != 0) {
                    /* draft: did not compile: fn_801323B8(temp_r4); */
                } else {
                    /* draft: did not compile: fn_801322A4(temp_r4); */
                }
            } else if (temp_r23 != 0) {
                /* draft: did not compile: fn_80132180(temp_r4); */
            } else {
                /* draft: did not compile: fn_8013215C(temp_r4); */
            }
            var_r28 += 1;
            goto loop_10;
        }
        var_r29 += 1;
        /* draft: did not compile: var_r30 += 0x38; */
        /* draft: did not compile: var_r31 += 0x34; */
    } while (var_r29 < 3);
}

void fn_8013262C(void *arg0, void *arg1, s32 arg2, s32 arg3) { } /* draft: stub */
