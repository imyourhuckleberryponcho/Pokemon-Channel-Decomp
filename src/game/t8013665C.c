/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern M2C_UNK WriteProc;
extern M2C_UNK lbl_803470C0;
M2C_UNK OSClearContext(M2C_UNK *);
M2C_UNK OSSetCurrentContext(M2C_UNK *);
extern s32 lbl_80350ED0;
M2C_UNK OSWakeupThread(void *, M2C_UNK *);
s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts(s32);
M2C_UNK OSSleepThread();
M2C_UNK __OSReschedule();
M2C_UNK *fn_800C5410();
extern M2C_UNK lbl_803474C0;
extern s32 lbl_80350EE0;

void GBAWrite(s32 arg0, s32 arg1, s32 arg2);
void __GBAHandler(s32 arg0, s32 arg1, M2C_UNK *arg2);
void __GBASyncCallback(s32 arg0);
s32 __GBASync(s32 arg0);
void TypeAndStatusCallback(s32 arg0, u8 arg1);
s32 __GBATransfer(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80136A34();
s32 fn_80137D24(void);

void GBAWrite(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r3;
    void *temp_r31;

    temp_r31 = &lbl_803470C0 + (arg0 << 8);
    if (((M2C_UNK (*)()) M2C_FIELD(temp_r31, M2C_UNK (**)(), 0x1C)) != NULL) {
        var_r3 = 2;
    } else {
        M2C_FIELD(temp_r31, s8 *, 0) = 0x15;
        /* draft: did not compile: memcpy(temp_r31 + 1, arg1, 4); */
        M2C_FIELD(temp_r31, s32 *, 0x18) = arg1;
        M2C_FIELD(temp_r31, s32 *, 0x14) = arg2;
        /* draft: did not compile: M2C_FIELD(temp_r31, M2C_UNK (**)(), 0x1C) = __GBASyncCallback; */
        /* draft: did not compile: var_r3 = __GBATransfer(arg0, 5, 1, &WriteProc); */
    }
    if (var_r3 != 0) {
        return;
    }
    __GBASync(arg0);
}

void __GBAHandler(s32 arg0, s32 arg1, M2C_UNK *arg2) {
    M2C_UNK sp18;
    M2C_UNK (*temp_r12)(s32);
    M2C_UNK (*temp_r12_2)(s32, s32);
    void *temp_r31;

    temp_r31 = &lbl_803470C0 + (arg0 << 8);
    if ((s32) lbl_80350ED0 == 0) {
        if (arg1 & 0xF) {
            M2C_FIELD(temp_r31, s32 *, 0x20) = 1;
        } else {
            M2C_FIELD(temp_r31, s32 *, 0x20) = 0;
        }
        temp_r12 = M2C_FIELD(temp_r31, M2C_UNK (**)(s32), 0x38);
        if (temp_r12 != NULL) {
            M2C_FIELD(temp_r31, M2C_UNK (**)(s32), 0x38) = NULL;
            temp_r12(arg0);
        }
        if (((M2C_UNK (*)(s32, s32)) M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0x1C)) != NULL) {
            OSClearContext(&sp18);
            OSSetCurrentContext(&sp18);
            temp_r12_2 = M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0x1C);
            M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0x1C) = NULL;
            temp_r12_2(arg0, M2C_FIELD(temp_r31, s32 *, 0x20));
            OSClearContext(&sp18);
            OSSetCurrentContext(arg2);
        }
    }
}

void __GBASyncCallback(s32 arg0) {
    OSWakeupThread(&lbl_803470C0 + (arg0 << 8) + 0x24, &lbl_803470C0);
}

s32 __GBASync(s32 arg0) {
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r3;
    void *temp_r31_2;

    temp_r3 = arg0 << 8;
    temp_r31_2 = &lbl_803470C0 + temp_r3;
    temp_r30 = OSDisableInterrupts(temp_r3, &lbl_803470C0);
loop_2:
    if ((u32) M2C_FIELD(temp_r31_2, u32 *, 0x1C) != 0U) {
        /* draft: did not compile: OSSleepThread(temp_r31_2 + 0x24); */
        goto loop_2;
    }
    temp_r31 = M2C_FIELD(temp_r31_2, s32 *, 0x20);
    OSRestoreInterrupts(temp_r30);
    return temp_r31;
}

void TypeAndStatusCallback(s32 arg0, u8 arg1) { } /* draft: stub */

s32 __GBATransfer(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;
    s32 temp_r7;
    void *temp_r30;

    temp_r7 = arg0 << 8;
    temp_r30 = &lbl_803470C0 + temp_r7;
    temp_r3 = OSDisableInterrupts(&lbl_803470C0, temp_r7);
    M2C_FIELD(temp_r30, s32 *, 0x38) = arg3;
    M2C_FIELD(temp_r30, s32 *, 0xC) = arg1;
    M2C_FIELD(temp_r30, s32 *, 0x10) = arg2;
    SIGetTypeAsync(arg0, TypeAndStatusCallback);
    OSRestoreInterrupts(temp_r3);
    return 0;
}

void fn_80136A34() { } /* draft: stub */

s32 fn_80137D24(void) {
    M2C_UNK (*temp_r12)(s32, s32);
    M2C_UNK (*temp_r12_2)(s32, s32);
    M2C_UNK (*temp_r12_3)(s32, s32);
    M2C_UNK (*temp_r12_4)(s32, s32);
    M2C_UNK (*temp_r12_5)(s32, s32);
    M2C_UNK (*temp_r12_6)(s32, s32);
    s32 temp_cr0_eq;
    s32 temp_cr0_lt;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    u8 temp_r3_5;
    s32 temp_r3_8;
    s32 var_r30;
    u32 temp_r3_6;
    u32 temp_r3_7;
    u32 temp_r5;
    void *temp_r31;

    temp_r3_6 = lbl_80350EE0 + 1;
    temp_r31 = &lbl_803474C0 + (lbl_80350EE0 * 0x18);
    temp_r5 = temp_r3_6 >> 0x1FU;
    temp_r3_7 = (temp_r3_6 << 0x1B) - temp_r5;
    temp_r0 = M2C_FIELD(temp_r31, s32 *, 0);
    temp_r3_8 = M2C_FIELD(temp_r31, s32 *, 4);
    temp_cr0_eq = temp_r0 == 4;
    temp_cr0_lt = temp_r0 < 4;
    lbl_80350EE0 = ((temp_r3_7 << 5) | (temp_r3_7 >> 0x1BU)) + temp_r5;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_lt != 0) {
            if (temp_r0 != 2) {
                if (temp_r0 < 2) {
                    if (temp_r0 < 1) {
                        goto block_42;
                    }
                    temp_r3_5 = fn_8013D328(M2C_FIELD(temp_r31, s32 *, 8), M2C_FIELD(temp_r31, s32 *, 0xC), 1, M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0x14));
                    if (temp_r3_5 < 0) {
                        temp_r12 = M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0x14);
                        if (temp_r12 != NULL) {
                            temp_r12(M2C_FIELD(temp_r31, s32 *, 8), temp_r3_5);
                        }
                    }
                    M2C_FIELD(temp_r31, s32 *, 0) = 0;
                    return temp_r3_5;
                }
                temp_r3_4 = fn_80143B88(M2C_FIELD(temp_r31, s32 *, 8), M2C_FIELD(temp_r31, s32 *, 0xC), M2C_FIELD(temp_r31, s32 *, 0x10), M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0x14));
                if (temp_r3_4 < 0) {
                    temp_r12_2 = M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0x14);
                    if (temp_r12_2 != NULL) {
                        temp_r12_2(0, temp_r3_4);
                    }
                }
                M2C_FIELD(temp_r31, s32 *, 0) = 0;
                return temp_r3_4;
            }
            temp_r0_2 = M2C_FIELD((temp_r3_8 + (M2C_FIELD(temp_r31, s32 *, 8) * 4)), s32 *, 0x28);
            if (temp_r0_2 != 3) {
                if (temp_r0_2 < 3) {
                    if (temp_r0_2 != 0) {
                        if (temp_r0_2 < 0) {
                            goto block_21;
                        }
                        var_r30 = fn_8013F170(M2C_FIELD(temp_r31, s32 *, 0xC), 1, M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0x14));
                    } else {
                        var_r30 = fn_8013DE4C(M2C_FIELD(temp_r31, s32 *, 0xC), 1, M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0x14));
                    }
                } else {
block_21:
                    var_r30 = -0x101;
                }
            } else {
                var_r30 = fn_8014068C(M2C_FIELD(temp_r31, s32 *, 0xC), 1, M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0x14));
            }
            if (var_r30 < 0) {
                temp_r12_3 = M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0x14);
                if (temp_r12_3 != NULL) {
                    temp_r12_3(M2C_FIELD(temp_r31, s32 *, 8), var_r30);
                }
            }
            M2C_FIELD(temp_r31, s32 *, 0) = 0;
            return var_r30;
        }
        if (temp_r0 != 6) {
            if (temp_r0 < 6) {
                temp_r3_3 = fn_8013D0F4(M2C_FIELD(temp_r31, s32 *, 8), M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0x14));
                if (temp_r3_3 < 0) {
                    temp_r12_4 = M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0x14);
                    if (temp_r12_4 != NULL) {
                        temp_r12_4(0, temp_r3_3);
                    }
                }
                M2C_FIELD(temp_r31, s32 *, 0) = 0;
                return temp_r3_3;
            }
block_42:
            return -0x101;
        }
        temp_r3_2 = fn_801448E0(M2C_FIELD(temp_r31, s32 *, 8), M2C_FIELD(temp_r31, s32 *, 0xC), M2C_FIELD(temp_r31, s32 *, 0x10), M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0x14));
        if (temp_r3_2 < 0) {
            temp_r12_5 = M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0x14);
            if (temp_r12_5 != NULL) {
                temp_r12_5(0, temp_r3_2);
            }
        }
        M2C_FIELD(temp_r31, s32 *, 0) = 0;
        return temp_r3_2;
    }
    temp_r3 = fn_80143F78(M2C_FIELD(temp_r31, s32 *, 0xC), M2C_FIELD(temp_r31, s32 *, 0x10), M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0x14));
    if (temp_r3 < 0) {
        temp_r12_6 = M2C_FIELD(temp_r31, M2C_UNK (**)(s32, s32), 0x14);
        if (temp_r12_6 != NULL) {
            temp_r12_6(0, temp_r3);
        }
    }
    M2C_FIELD(temp_r31, s32 *, 0) = 0;
    return temp_r3;
}
