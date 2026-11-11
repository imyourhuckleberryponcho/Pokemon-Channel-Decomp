/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800704AC(void *);
M2C_UNK fn_800708D4(s32);
M2C_UNK fn_80070A98(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_80070984(void *, M2C_UNK, M2C_UNK, u8);
M2C_UNK fn_80070B40(void *, M2C_UNK, M2C_UNK, u8);
M2C_UNK fn_80070BEC(void *, M2C_UNK, M2C_UNK, s32);

void fn_8006EB64(void *arg0, M2C_UNK arg_sp0);
void fn_8006F258(void);
void fn_8006F25C(void);
void fn_8006F260(s32 *arg0, s32 arg1, u8 *arg2);
void fn_8006F364(void *arg0, s32 arg1, u8 arg2);
void fn_8006F508(void *arg0);
void fn_8006F520(void);
void fn_8006F524(void);
void fn_8006F528(void *arg0, u32 arg1, u8 *arg2);
void fn_800700D8(void *arg0, u32 arg1, u8 arg2);

void fn_8006EB64(void *arg0, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8006F258(void) {

}

void fn_8006F25C(void) {

}

void fn_8006F260(s32 *arg0, s32 arg1, u8 *arg2) {
    s32 temp_r0;
    s32 var_r0;
    u32 temp_r0_2;
    u32 temp_r10;
    u8 temp_r6;
    u32 temp_r7;
    u8 var_r6;
    u8 var_r9;
    void *var_r9_2;

    var_r9 = 0;
    temp_r10 = arg1 & 1;
    temp_r7 = temp_r10 == 0;
    temp_r0 = (u8) (temp_r10 == 0) == 0;
    if ((temp_r0 >= 0) && (temp_r0 < 8)) {
        var_r9 = 1;
    }
    if (var_r9 != 0) {
        /* draft: did not compile: var_r9_2 = *arg0 + (((temp_r7 == 0) * 0x58) + 0x58); */
    } else {
        var_r9_2 = NULL;
    }
    var_r6 = 3;
    var_r6 = temp_r7 == 0 ? var_r6 : 0xFF;
    temp_r0_2 = (u32) (arg1 - 0x50) >> 1U;
    switch ((s32) temp_r0_2) {                      /* irregular */
    case 0:    default:
        *arg2 |= M2C_FIELD(var_r9_2, u8 *, 4) & var_r6;
        return;
    case 1:
        temp_r6 = M2C_FIELD(var_r9_2, u8 *, 2);
        *arg2 |= var_r6 & (u8) ((M2C_FIELD(var_r9_2, u8 *, 0) & ~temp_r6) | (M2C_FIELD(var_r9_2, u8 *, 1) & temp_r6));
        return;
    case 2:
        var_r0 = 0x77;
        var_r0 = temp_r10 == 0 ? var_r0 : 7;
        *arg2 |= M2C_FIELD((arg0 + temp_r10), u8 *, 8) & var_r0;
        return;
    }
}

void fn_8006F364(void *arg0, s32 arg1, u8 arg2) {
    s32 temp_r0;
    u8 temp_r3_6;
    s32 temp_r4_6;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r28;
    s32 var_r28_2;
    s32 var_r29;
    s32 var_r29_2;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r3_5;
    s32 temp_r4_5;
    u8 temp_r4;
    u8 temp_r4_2;
    u8 temp_r4_3;
    u8 temp_r4_4;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;

    temp_r0 = arg1 - 0x50;
    switch (temp_r0) {                              /* irregular */
    default:
        temp_r3 = M2C_FIELD(arg0, void **, 0);
        var_r28 = 0x15;
        var_r29 = 0x80;
        temp_r0_2 = M2C_FIELD(temp_r3, u8 *, 0x5C);
        temp_r4 = arg2 ^ temp_r0_2;
        M2C_FIELD(temp_r3, u8 *, 0x5C) = (u8) (temp_r0_2 ^ temp_r4);
loop_12:
        if (var_r29 != 0) {
            if (temp_r4 & var_r29) {
                temp_r3_2 = M2C_FIELD(arg0, void **, 0);
                temp_r5 = var_r28 + 0x2C;
                /* draft: did not compile: temp_r4_2 = *(temp_r3_2 + temp_r5); */
                if (!(temp_r4_2 & 8)) {
                    /* draft: did not compile: *(temp_r3_2 + temp_r5) = temp_r4_2 | 8; */
                    fn_800708D4(var_r28);
                }
            }
            var_r29 = var_r29 >> 1;
            var_r28 += 1;
            goto loop_12;
        }
        return;
    case 1:
        temp_r3_3 = M2C_FIELD(arg0, void **, 0);
        var_r29_2 = 0x13;
        var_r28_2 = 2;
        temp_r0_3 = M2C_FIELD(temp_r3_3, u8 *, 0xB4);
        temp_r4_3 = (arg2 & 3) ^ temp_r0_3;
        M2C_FIELD(temp_r3_3, u8 *, 0xB4) = (u8) (temp_r0_3 ^ temp_r4_3);
loop_19:
        if (var_r28_2 != 0) {
            if (temp_r4_3 & var_r28_2) {
                temp_r3_4 = M2C_FIELD(arg0, void **, 0);
                temp_r5_2 = var_r29_2 + 0x2C;
                /* draft: did not compile: temp_r4_4 = *(temp_r3_4 + temp_r5_2); */
                if (!(temp_r4_4 & 8)) {
                    /* draft: did not compile: *(temp_r3_4 + temp_r5_2) = temp_r4_4 | 8; */
                    fn_800708D4(var_r29_2);
                }
            }
            var_r28_2 = var_r28_2 >> 1;
            var_r29_2 += 1;
            goto loop_19;
        }
        return;
    case 4:
        temp_r3_5 = M2C_FIELD(arg0, u8 *, 8);
        temp_r4_5 = (u8) (arg2 & 0x77) ^ temp_r3_5;
        M2C_FIELD(arg0, u8 *, 8) = (u8) (temp_r3_5 ^ temp_r4_5);
        if (temp_r4_5 & 7) {
            fn_80070A98(M2C_FIELD(arg0, void **, 0), 0x15, 0x1C, -1);
            return;
        }
        return;
    case 5:
        temp_r3_6 = M2C_FIELD(arg0, u8 *, 9);
        temp_r4_6 = (arg2 & 7) ^ temp_r3_6;
        M2C_FIELD(arg0, u8 *, 9) = (u8) (temp_r3_6 ^ temp_r4_6);
        if (temp_r4_6 & 7) {
            fn_80070A98(M2C_FIELD(arg0, void **, 0), 0x13, 0x14, -1);
        }
        break;
    }
}

void fn_8006F508(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xA) = 0;
    M2C_FIELD(arg0, s8 *, 9) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

void fn_8006F520(void) {

}

void fn_8006F524(void) {

}

void fn_8006F528(void *arg0, u32 arg1, u8 *arg2) { } /* draft: stub */

void fn_800700D8(void *arg0, u32 arg1, u8 arg2) { } /* draft: stub */
