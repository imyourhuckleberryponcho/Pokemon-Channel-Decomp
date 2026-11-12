/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK OSReport();
extern M2C_UNK gDBCommTable;
extern M2C_UNK lbl_8034BF08;
extern M2C_UNK lbl_8034D024;
M2C_UNK AMC_IsStub();
M2C_UNK DBInitComm();
M2C_UNK DBInitInterrupts();
M2C_UNK DBOpen();
M2C_UNK DBQueryData();
M2C_UNK DBRead();
M2C_UNK DBWrite();
M2C_UNK Hu_IsStub();
extern M2C_UNK DBClose;
extern M2C_UNK EXI2_Unreserve;
M2C_UNK OSEnableScheduler();
M2C_UNK TRKLoadContext(s32, M2C_UNK);
M2C_UNK TRKSwapAndGo();
M2C_UNK TRKTargetSetStopped(M2C_UNK);
extern u8 lbl_8034E130;
s32 fn_8015AD6C();
u8 fn_8015D0B0(M2C_UNK, M2C_UNK, s32 *, s32);
s32 OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts();
M2C_UNK __OSUnmaskInterrupts(u32);
extern void *lbl_803503B8;
M2C_UNK __OSMaskInterrupts(M2C_UNK);
extern M2C_UNK lbl_8034E138;
extern s8 *lbl_803503C0;
extern s32 lbl_80350F70;
M2C_UNK fn_8014F91C(M2C_UNK *);
extern M2C_UNK lbl_802B0F98;
extern s32 lbl_80350F6C;

void TRKUARTInterruptHandler(void);
void TRK_board_display(void);
void UnreserveEXI2Port(void);
void ReserveEXI2Port(void);
s32 fn_8015D6DC(u8 *arg0);
s32 fn_8015D7CC(s8 arg0);
s32 fn_8015D7F4(void);
void fn_8015D8D4(void);
s32 TRKInitializeIntDrivenUART(s32 arg3);
void InitMetroTRKCommTable(s32 arg0);
void TRKEXICallBack(s32 arg1);
s32 TRKTargetContinue(void);
u8 fn_8015DAAC(void);
void fn_8015DABC(s8 arg0);
s32 fn_8015DAC8(s32 arg1, s32 *arg2);
s32 fn_8015DB84(s32 arg1, s32 *arg2);
s32 fn_8015DC40(void *arg0, s32 arg1, u32 arg2, u32 arg3);
void fn_8015DE84(void);
void fn_8015E01C(s32 arg0, s32 arg1);
u32 fn_8015E05C(u32 arg0);
s32 fn_8015E0C8(s32 arg0);
s32 fn_8015E148(void);
void fn_8015E1B0(void);
void fn_8015E200(void);
void fn_8015E240(void);
void fn_8015E280(void);
void EXI2_Init(s32 *arg0, s32 arg1);
void EXI2_EnableInterrupts(void);
s32 EXI2_Poll(void);
s32 EXI2_ReadN(s32 arg0, s32 arg1);
s32 EXI2_WriteN(u32 *arg0, u32 arg1);
void EXI2_Reserve(void);

void TRKUARTInterruptHandler(void) {

}

void TRK_board_display(void) {
    OSReport();
}

void UnreserveEXI2Port(void) {
    M2C_FIELD(&gDBCommTable, M2C_UNK (**)(M2C_UNK *), 0x18)(&gDBCommTable);
}

void ReserveEXI2Port(void) {
    M2C_FIELD(&gDBCommTable, M2C_UNK (**)(M2C_UNK *), 0x14)(&gDBCommTable);
}

s32 fn_8015D6DC(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r29;
    void *temp_r3_3;

    var_r29 = 4;
    if ((s32) M2C_FIELD(&lbl_8034BF08, s32 *, 4) >= (s32) M2C_FIELD(&lbl_8034BF08, s32 *, 8)) {
        M2C_FIELD(&lbl_8034BF08, s32 *, 4) = 0;
        temp_r3 = M2C_FIELD(&gDBCommTable, s32 (**)(M2C_UNK *), 8)(&gDBCommTable);
        M2C_FIELD(&lbl_8034BF08, s32 *, 8) = temp_r3;
        if (temp_r3 > 0) {
            if (temp_r3 > 0x110A) {
                M2C_FIELD(&lbl_8034BF08, s32 *, 8) = 0x110A;
            }
            temp_r3_2 = M2C_FIELD(&gDBCommTable, s32 (**)(void *, s32, M2C_UNK *), 0xC)(&lbl_8034BF08 + 0x10, M2C_FIELD(&lbl_8034BF08, s32 *, 8), &gDBCommTable);
            temp_r0 = (s32) (-temp_r3_2 | temp_r3_2) >> 0x1F;
            var_r29 = temp_r0;
            if (temp_r0 != 0) {
                M2C_FIELD(&lbl_8034BF08, s32 *, 8) = 0;
            }
        }
    }
    if ((s32) M2C_FIELD(&lbl_8034BF08, s32 *, 4) < (s32) M2C_FIELD(&lbl_8034BF08, s32 *, 8)) {
        temp_r3_3 = &lbl_8034BF08 + M2C_FIELD(&lbl_8034BF08, s32 *, 4);
        M2C_FIELD(&lbl_8034BF08, s32 *, 4) = (s32) (M2C_FIELD(&lbl_8034BF08, s32 *, 4) + 1);
        var_r29 = 0;
        *arg0 = M2C_FIELD(temp_r3_3, u8 *, 0x10);
    }
    return var_r29;
}

s32 fn_8015D7CC(s8 arg0) {
    *(&lbl_8034D024 + lbl_8034BF08) = arg0;
    lbl_8034BF08 += 1;
    return 0;
}

s32 fn_8015D7F4(void) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r3;
    int var_r4;
    u32 temp_r0;
    u32 var_r6;
    u32 temp_r5;
    u32 var_ctr;
    u32 var_ctr_2;
    s8 *var_r8;

    var_r3 = 0;
    var_r4 = lbl_8034BF08;
    /* draft: did not compile: var_r8 = &lbl_8034D024 + var_r4; */
    var_r6 = 0x800 - var_r4;
    if (var_r4 < 0x800) {
        temp_r5 = var_r6 >> 3U;
        temp_r0 = var_r6;
        var_ctr = temp_r5;
        if (temp_r5 != 0) {
            do {
                M2C_FIELD(var_r8, s8 *, 0) = 0;
                M2C_FIELD(var_r8, s8 *, 1) = 0;
                M2C_FIELD(var_r8, s8 *, 2) = 0;
                M2C_FIELD(var_r8, s8 *, 3) = 0;
                M2C_FIELD(var_r8, s8 *, 4) = 0;
                M2C_FIELD(var_r8, s8 *, 5) = 0;
                M2C_FIELD(var_r8, s8 *, 6) = 0;
                M2C_FIELD(var_r8, s8 *, 7) = 0;
                var_r8 = var_r8 + 8;
                var_ctr = var_ctr - 1;
            } while (var_ctr != 0);
            var_r6 = var_r6 & 7;
            if (var_r6 != 0) {
                goto block_4;
            }
        } else {
block_4:
            var_ctr_2 = var_r6;
            do {
                *var_r8 = 0;
                var_r8 = var_r8 + 1;
                var_ctr_2 = var_ctr_2 - 1;
            } while (var_ctr_2 != 0);
        }
        var_r4 = var_r4 + temp_r0;
    }
    lbl_8034BF08 = var_r4;
    if (var_r4 != 0) {
        temp_r3 = M2C_FIELD(&gDBCommTable, s32 (**)(M2C_UNK *, M2C_UNK *), 0x10)(&lbl_8034D024, &lbl_8034D024);
        temp_r3_2 = -temp_r3 | temp_r3;
        var_r3 = temp_r3_2 >> 0x1F;
        lbl_8034BF08 = 0;
    }
    return var_r3;
}

void fn_8015D8D4(void) {
    M2C_FIELD(&gDBCommTable, M2C_UNK (**)(M2C_UNK *), 4)(&gDBCommTable);
}

s32 TRKInitializeIntDrivenUART(s32 arg3) {
    /* draft: did not compile: gDBCommTable(arg3, TRKEXICallBack); */
    return 0;
}

void InitMetroTRKCommTable(s32 arg0) {
    if (arg0 == 1) {
        /* draft: did not compile: OSReport(&@154_801DB300); */
        M2C_FIELD(&gDBCommTable, M2C_UNK (**)(), 0) = DBInitComm;
        Hu_IsStub();
        M2C_FIELD(&gDBCommTable, M2C_UNK (**)(), 4) = DBInitInterrupts;
        M2C_FIELD(&gDBCommTable, M2C_UNK **, 0x18) = &DBClose;
        M2C_FIELD(&gDBCommTable, M2C_UNK (**)(), 8) = DBQueryData;
        M2C_FIELD(&gDBCommTable, M2C_UNK (**)(), 0xC) = DBRead;
        M2C_FIELD(&gDBCommTable, M2C_UNK (**)(), 0x10) = DBWrite;
        M2C_FIELD(&gDBCommTable, M2C_UNK (**)(), 0x14) = DBOpen;
        return;
    }
    /* draft: did not compile: OSReport(&@155_801DB324); */
    AMC_IsStub();
    /* draft: did not compile: M2C_FIELD(&gDBCommTable, M2C_UNK (**)(), 0) = EXI2_Init; */
    /* draft: did not compile: M2C_FIELD(&gDBCommTable, M2C_UNK (**)(), 4) = EXI2_EnableInterrupts; */
    M2C_FIELD(&gDBCommTable, M2C_UNK (**)(), 8) = EXI2_Poll;
    M2C_FIELD(&gDBCommTable, M2C_UNK (**)(), 0xC) = EXI2_ReadN;
    M2C_FIELD(&gDBCommTable, M2C_UNK (**)(), 0x10) = EXI2_WriteN;
    /* draft: did not compile: M2C_FIELD(&gDBCommTable, M2C_UNK (**)(), 0x14) = EXI2_Reserve; */
    M2C_FIELD(&gDBCommTable, M2C_UNK **, 0x18) = &EXI2_Unreserve;
}

void TRKEXICallBack(s32 arg1) {
    OSEnableScheduler();
    TRKLoadContext(arg1, 0x500);
}

#pragma push
#pragma dont_inline on
s32 TRKTargetContinue(void) {
    TRKTargetSetStopped(0);
    UnreserveEXI2Port();
    TRKSwapAndGo();
    ReserveEXI2Port();
    return 0;
}
#pragma pop

u8 fn_8015DAAC(void) {
    return lbl_8034E130;
}

void fn_8015DABC(s8 arg0) {
    lbl_8034E130 = arg0;
}

s32 fn_8015DAC8(s32 arg1, s32 *arg2) {
    s32 sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_lt;
    u8 temp_r0;
    u8 temp_r3;

    if (fn_8015DAAC() == 0) {
        return 1;
    }
    if (fn_8015AD6C() == 0) {
        return 1;
    }
    sp8 = *arg2;
    temp_r3 = fn_8015D0B0(0xD0, 1, &sp8, arg1);
    temp_r0 = temp_r3;
    temp_cr0_eq = (s32) temp_r0 == 1;
    temp_cr0_lt = (s32) temp_r0 < 1;
    *arg2 = sp8;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_lt != 0) {
            if ((s32) temp_r0 < 0) {
                goto block_12;
            }
            return 0;
        }
        if ((s32) temp_r0 < 3) {
            return 2;
        }
        goto block_12;
    }
block_12:
    return 1;
}

s32 fn_8015DB84(s32 arg1, s32 *arg2) {
    s32 sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_lt;
    u8 temp_r0;
    u8 temp_r3;

    if (fn_8015DAAC() == 0) {
        return 1;
    }
    if (fn_8015AD6C() == 0) {
        return 1;
    }
    sp8 = *arg2;
    temp_r3 = fn_8015D0B0(0xD1, 0, &sp8, arg1);
    temp_r0 = temp_r3;
    temp_cr0_eq = (s32) temp_r0 == 1;
    temp_cr0_lt = (s32) temp_r0 < 1;
    *arg2 = sp8;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_lt != 0) {
            if ((s32) temp_r0 < 0) {
                goto block_12;
            }
            return 0;
        }
        if ((s32) temp_r0 < 3) {
            return 2;
        }
        goto block_12;
    }
block_12:
    return 1;
}

s32 fn_8015DC40(void *arg0, s32 arg1, u32 arg2, u32 arg3) {
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r4;
    s32 var_ctr_2;
    s32 var_r11;
    s32 var_r12;
    u8 var_r6;
    u8 var_ctr;
    u8 *var_r4;
    void *var_r10;

    temp_r31 = OSDisableInterrupts();
    if ((M2C_FIELD(lbl_803503B8, s32 *, 0xC) & 3) || !(M2C_FIELD(lbl_803503B8, s32 *, 0xC) & 4)) {
        OSRestoreInterrupts((long)(temp_r31), (long)(0), (void *)(0));
        return 0;
    }
    M2C_FIELD(lbl_803503B8, u32 *, 4) = arg3;
    if ((u32) M2C_FIELD(lbl_803503B8, u32 *, 4) != 0U) {
        fn_8015E01C(0, 1);
        __OSUnmaskInterrupts(0x200000U >> (2 * 3));
    }
    M2C_FIELD(lbl_803503B8, s32 *, 0xC) = (s32) (M2C_FIELD(lbl_803503B8, s32 *, 0xC) | 2);
    if (arg2 != 0) {
        var_r12 = 0;
        var_r11 = 0;
        if (arg1 > 0) {
            temp_r3 = arg1 - 8;
            if (arg1 > 8) {
                var_ctr = (u32) (temp_r3 + 7) >> 3U;
                var_r10 = arg0;
                if (temp_r3 > 0) {
                    do {
                        var_r11 = var_r11 | (M2C_FIELD(var_r10, s8 *, 0) << ((3 - var_r12) * 8)) | (M2C_FIELD(var_r10, s8 *, 1) << ((3 - (var_r12 + 1)) * 8)) | (M2C_FIELD(var_r10, s8 *, 2) << ((3 - (var_r12 + 2)) * 8)) | (M2C_FIELD(var_r10, s8 *, 3) << (var_r12 * -8)) | (M2C_FIELD(var_r10, s8 *, 4) << ((3 - (var_r12 + 4)) * 8)) | (M2C_FIELD(var_r10, s8 *, 5) << ((3 - (var_r12 + 5)) * 8)) | (M2C_FIELD(var_r10, s8 *, 6) << ((3 - (var_r12 + 6)) * 8)) | (M2C_FIELD(var_r10, s8 *, 7) << ((3 - (var_r12 + 7)) * 8));
                        /* draft: did not compile: var_r10 += 8; */
                        var_r12 += 8;
                        var_ctr -= 1;
                    } while (var_ctr != 0);
                }
            }
            /* draft: did not compile: var_r4 = arg0 + var_r12; */
            var_ctr_2 = arg1 - var_r12;
            if (var_r12 < arg1) {
                do {
                    var_r11 |= *var_r4 << ((3 - var_r12) * 8);
                    var_r4 += 1;
                    var_r12 += 1;
                    var_ctr_2 -= 1;
                } while (var_ctr_2 != 0);
            }
        }
        *(s32 *)0xCC006838 = var_r11;
    }
    M2C_FIELD(lbl_803503B8, void **, 0x14) = arg0;
    if (arg2 != 1) {
        var_r6 = arg1;
    } else {
        var_r6 = 0;
    }
    M2C_FIELD(lbl_803503B8, s32 *, 0x10) = var_r6;
    temp_r4 = (arg2 * 4) | 1;
    *(s32 *)0xCC006834 = temp_r4 | ((arg1 - 1) * 0x10);
    OSRestoreInterrupts(temp_r31, temp_r4, lbl_803503B8);
    return 1;
}

void fn_8015DE84(void) {
    s32 temp_r4;
    s32 temp_r8;
    s32 var_ctr_2;
    s32 var_r5;
    u32 temp_r6;
    s8 var_ctr;
    s8 *var_r7;

loop_14:
    if (!(M2C_FIELD(lbl_803503B8, s32 *, 0xC) & 4)) {
        return;
    }
    if (!(M2C_FIELD((void *)0xCC006800, s32 *, 0x34) & 1)) {
        OSDisableInterrupts();
        if (M2C_FIELD(lbl_803503B8, s32 *, 0xC) & 3) {
            if (M2C_FIELD(lbl_803503B8, s32 *, 0xC) & 2) {
                temp_r4 = M2C_FIELD(lbl_803503B8, s32 *, 0x10);
                if (temp_r4 != 0) {
                    var_r7 = M2C_FIELD(lbl_803503B8, s8 **, 0x14);
                    temp_r6 = *(u32 *)0xCC006838;
                    var_r5 = 0;
                    if (temp_r4 > 0) {
                        temp_r8 = temp_r4 - 8;
                        if (temp_r4 > 8) {
                            var_ctr = (u32) (temp_r8 + 7) >> 3U;
                            if (temp_r8 > 0) {
                                do {
                                    M2C_FIELD(var_r7, s8 *, 1) = (s8) (temp_r6 >> ((3 - (var_r5 + 1)) * 8));
                                    M2C_FIELD(var_r7, s8 *, 3) = (s8) (temp_r6 >> (var_r5 * -8));
                                    M2C_FIELD(var_r7, s8 *, 2) = (s8) (temp_r6 >> ((3 - (var_r5 + 2)) * 8));
                                    M2C_FIELD(var_r7, s8 *, 4) = (s8) (temp_r6 >> ((3 - (var_r5 + 4)) * 8));
                                    M2C_FIELD(var_r7, s8 *, 5) = (s8) (temp_r6 >> ((3 - (var_r5 + 5)) * 8));
                                    M2C_FIELD(var_r7, s8 *, 0) = (s8) (temp_r6 >> ((3 - var_r5) * 8));
                                    M2C_FIELD(var_r7, s8 *, 6) = (s8) (temp_r6 >> ((3 - (var_r5 + 6)) * 8));
                                    M2C_FIELD(var_r7, s8 *, 7) = (s8) (temp_r6 >> ((3 - (var_r5 + 7)) * 8));
                                    var_r7 += 8;
                                    var_r5 += 8;
                                    var_ctr -= 1;
                                } while (var_ctr != 0);
                            }
                        }
                        var_ctr_2 = temp_r4 - var_r5;
                        if (var_r5 < temp_r4) {
                            do {
                                *var_r7 = (s8) (temp_r6 >> ((3 - var_r5) * 8));
                                var_r7 += 1;
                                var_r5 += 1;
                                var_ctr_2 -= 1;
                            } while (var_ctr_2 != 0);
                        }
                    }
                }
            }
            M2C_FIELD(lbl_803503B8, s32 *, 0xC) = (s32) (M2C_FIELD(lbl_803503B8, s32 *, 0xC) & 0xFFFFFFFC);
        }
        OSRestoreInterrupts((long)(0), (long)(0), (void *)(0));
        return;
    }
    goto loop_14;
}

void fn_8015E01C(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        *(s32 *)0xCC003000 = (*(s32 *)0xCC003000 & 0x1000) | 0x1000;
    }
    if (arg1 != 0) {
        M2C_FIELD((void *)0xCC006800, s32 *, 0x28) = (s32) ((M2C_FIELD((void *)0xCC006800, s32 *, 0x28) & 0x7F5) | 8);
    }
}

u32 fn_8015E05C(u32 arg0) {
    u32 temp_r31;
    s32 temp_r31_2;

    temp_r31_2 = OSDisableInterrupts();
    if (arg0 != 0U) {
        __OSUnmaskInterrupts(0x40);
    } else {
        __OSMaskInterrupts(0x40);
    }
    /* draft: did not compile: temp_r31 = *lbl_803503B8; */
    /* draft: did not compile: *lbl_803503B8 = arg0; */
    OSRestoreInterrupts(temp_r31_2, lbl_803503B8);
    return temp_r31;
}

s32 fn_8015E0C8(s32 arg0) {
    s32 temp_r5;

    OSDisableInterrupts();
    if (M2C_FIELD((s32)lbl_803503B8, s32 *, 0xC) & 4) {
        OSRestoreInterrupts();
        return 0;
    }
    M2C_FIELD(lbl_803503B8, s32 *, 0xC) = (s32) (M2C_FIELD(lbl_803503B8, s32 *, 0xC) | 4);
    temp_r5 = (M2C_FIELD((void *)0xCC006800, s32 *, 0x28) & 0x405) | ((arg0 * 0x10) | 0x80);
    M2C_FIELD((void *)0xCC006800, s32 *, 0x28) = temp_r5;
    OSRestoreInterrupts(0xCC006800, temp_r5);
    return 1;
}

s32 fn_8015E148(void) {
    OSDisableInterrupts();
    if (!(M2C_FIELD((s32)lbl_803503B8, s32 *, 0xC) & 4)) {
        OSRestoreInterrupts();
        return 0;
    }
    M2C_FIELD(lbl_803503B8, s32 *, 0xC) = (s32) (M2C_FIELD(lbl_803503B8, s32 *, 0xC) & 0xFFFFFFFB);
    M2C_FIELD((void *)0xCC006800, s32 *, 0x28) = (s32) (M2C_FIELD((void *)0xCC006800, s32 *, 0x28) & 0x405);
    OSRestoreInterrupts(0xCC006800);
    return 1;
}

void fn_8015E1B0(void) {
    M2C_UNK (*temp_r3)(M2C_UNK);

    *(s32 *)0xCC003000 = (*(s32 *)0xCC003000 & 0x1000) | 0x1000;
    /* draft: did not compile: temp_r3 = *lbl_803503B8; */
    if (temp_r3 != NULL) {
        temp_r3(2);
    }
}

void fn_8015E200(void) {
    __OSMaskInterrupts(0x8000);
    __OSSetInterruptHandler(0x19, fn_8015E1B0);
    __OSUnmaskInterrupts(0x40);
}

void fn_8015E240(void) {
    *(s32 *)0xCC006828 = 0;
    memset(&lbl_8034E138, 0, 0x18);
    *(s32 *)0xCC00643C = 0;
}

void fn_8015E280(void) {
    *lbl_803503C0 = 1;
    if (((M2C_UNK (*)(M2C_UNK)) lbl_80350F70) != NULL) {
        /* draft: did not compile: lbl_80350F70(0); */
    }
}

void EXI2_Init(s32 *arg0, s32 arg1) {
    s32 sp20;
    s32 sp1C;
    s32 sp10;
    s32 var_r3;

    /* draft: did not compile: *arg0 = lbl_803503C0; */
    OSDisableInterrupts();
    lbl_80350F70 = arg1;
    OSRestoreInterrupts();
    fn_8015E240();
    var_r3 = 0;
    sp20 = 0;
    sp1C = 0x01000003;
loop_2:
    if (var_r3 == 0) {
        var_r3 = fn_8015E0C8(5);
        goto loop_2;
    }
    sp10 = 0x80000000;
    fn_8015DC40(&sp10, 2, 1, 0);
    fn_8015DE84();
    fn_8015DC40(&sp1C, 4, 1, 0);
    fn_8015DE84();
    fn_8015DC40(&sp20, 4, 1, 0);
    fn_8015DE84();
    fn_8015E148();
}

#pragma push
#pragma dont_inline on
void EXI2_EnableInterrupts(void) {
    /* draft: did not compile: fn_8015E05C(fn_8015E280); */
    fn_8015E200();
}
#pragma pop

#pragma push
#pragma dont_inline on
s32 EXI2_Poll(void) {
    s32 sp18;
    s32 sp14;
    s32 sp8;
    s32 temp_cr0_eq;
    s32 var_r3;

    if (!(*(s32 *)0xCC003000 & 0x1000) && ((u8) *lbl_803503C0 == 0)) {
        sp18 = 0;
    } else {
        if ((s32) lbl_80350F6C == 0) {
            var_r3 = 0;
loop_6:
            temp_cr0_eq = var_r3 == 0;
            if (temp_cr0_eq != 0) {
                var_r3 = fn_8015E0C8(5);
                goto loop_6;
            }
            if (temp_cr0_eq != 0) {
                fn_8014F91C(&lbl_802B0F98);
            } else {
                lbl_80350F6C = 1;
                sp8 = 0;
                fn_8015DC40(&sp8, 2, 1, 0);
                fn_8015DE84();
                fn_8015DC40(&sp14, 2, 0, 0);
                fn_8015DE84();
            }
        }
        fn_8015DC40(&sp18, 4, 0, 0);
        fn_8015DE84();
        if ((u8) *lbl_803503C0 == 0) {
            *lbl_803503C0 = 1;
            /* draft: did not compile: *(void *)0xCC003000 = (s32) (*(void *)0xCC003000 & 0x1000); */
        }
    }
    return sp18;
}
#pragma pop

s32 EXI2_ReadN(s32 arg0, s32 arg1) {
    u32 sp20;
    u32 sp1C;
    u32 sp14;
    M2C_UNK var_r4;
    s32 temp_cr0_eq;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r6;
    s32 var_ctr_2;
    s32 var_r27;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r4_2;
    s32 var_r5;
    s8 *var_r6;
    u32 var_ctr;
    u32 var_r27_2;
    u32 var_r30;
    void *var_r3_3;

    if ((s32) lbl_80350F6C != 0) {
        var_r27 = 1;
    } else {
        var_r3 = 0;
loop_4:
        temp_cr0_eq = var_r3 == 0;
        if (temp_cr0_eq != 0) {
            var_r3 = fn_8015E0C8(5);
            goto loop_4;
        }
        var_r27 = var_r3;
        if (temp_cr0_eq != 0) {
            fn_8014F91C(&lbl_802B0F98);
            var_r27 = 0;
        } else {
            lbl_80350F6C = 1;
            sp14 = 0;
            fn_8015DC40(&sp14, 2, 1, 0);
            fn_8015DE84();
            fn_8015DC40(&sp1C, 2, 0, 0);
            fn_8015DE84();
        }
    }
    if (var_r27 == 0) {
        return 1;
    }
    temp_r4 = arg1 & 3;
    if (temp_r4 != 0) {
        var_r3_2 = 1;
    } else {
        var_r3_2 = 0;
    }
    var_r27_2 = 0U;
    var_r30 = 0U;
loop_30:
    if (var_r27_2 < (u32) arg1) {
        if (var_r30 < (u32) (((arg1 >> 2U) + var_r3_2) - 1)) {
            var_r4 = 4;
        } else if ((u32) (temp_r4 + (arg1 & 1)) == 2U) {
            var_r4 = 2;
        } else {
            var_r4 = 4;
        }
        fn_8015DC40(&sp20, var_r4, 0, 0);
        fn_8015DE84();
        if ((u32) (arg1 - var_r27_2) >= 4U) {
            var_r5 = 4;
        } else {
            var_r5 = arg1 % 4;
        }
        var_r4_2 = 0;
        if (var_r5 > 0) {
            temp_r3 = var_r5 - 8;
            if (var_r5 > 8) {
                var_ctr = (u32) (temp_r3 + 7) >> 3U;
                /* draft: did not compile: var_r3_3 = arg0 + var_r27_2; */
                if (temp_r3 > 0) {
                    do {
                        M2C_FIELD(var_r3_3, s8 *, 0) = (s8) (sp20 >> ((3 - var_r4_2) * 8));
                        M2C_FIELD(var_r3_3, s8 *, 1) = (s8) (sp20 >> ((3 - (var_r4_2 + 1)) * 8));
                        M2C_FIELD(var_r3_3, s8 *, 2) = (s8) (sp20 >> ((3 - (var_r4_2 + 2)) * 8));
                        M2C_FIELD(var_r3_3, s8 *, 3) = (s8) (sp20 >> (var_r4_2 * -8));
                        M2C_FIELD(var_r3_3, s8 *, 4) = (s8) (sp20 >> ((3 - (var_r4_2 + 4)) * 8));
                        temp_r6 = (3 - (var_r4_2 + 6)) * 8;
                        temp_r0 = (3 - (var_r4_2 + 7)) * 8;
                        M2C_FIELD(var_r3_3, s8 *, 5) = (s8) (sp20 >> ((3 - (var_r4_2 + 5)) * 8));
                        var_r4_2 += 8;
                        M2C_FIELD(var_r3_3, s8 *, 6) = (s8) (sp20 >> temp_r6);
                        M2C_FIELD(var_r3_3, s8 *, 7) = (s8) (sp20 >> temp_r0);
                        /* draft: did not compile: var_r3_3 += 8; */
                        var_ctr -= 1;
                    } while (var_ctr != 0);
                }
            }
            /* draft: did not compile: var_r6 = arg0 + (var_r27_2 + var_r4_2); */
            var_ctr_2 = var_r5 - var_r4_2;
            if (var_r4_2 < var_r5) {
                do {
                    *var_r6 = (s8) (sp20 >> ((3 - var_r4_2) * 8));
                    var_r6 += 1;
                    var_r4_2 += 1;
                    var_ctr_2 -= 1;
                } while (var_ctr_2 != 0);
            }
        }
        var_r30 += 1;
        var_r27_2 += 4;
        goto loop_30;
    }
    fn_8015E148();
    lbl_80350F6C = 0;
    *lbl_803503C0 = 0;
    return 0;
}

s32 EXI2_WriteN(u32 *arg0, u32 arg1) {
    u32 sp28;
    u32 sp24;
    u32 sp18;
    u32 sp10;
    M2C_UNK var_r4;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r3_3;
    u32 *temp_r3;
    u32 *var_r29;
    u32 temp_r28;
    u32 var_r30;

    var_r29 = arg0;
    var_r3 = 0;
    sp28 = arg1;
loop_2:
    temp_cr0_eq = var_r3 == 0;
    if (temp_cr0_eq != 0) {
        var_r3 = fn_8015E0C8(5);
        goto loop_2;
    }
    if (temp_cr0_eq != 0) {
        return 1;
    }
    sp18 = 0x80000000;
    fn_8015DC40(&sp18, 2, 1, 0);
    fn_8015DE84();
    fn_8015DC40(&sp28, 4, 1, 0);
    fn_8015DE84();
    if (sp28 & 3) {
        var_r3_2 = 1;
    } else {
        var_r3_2 = 0;
    }
    temp_r28 = (sp28 >> 2U) + var_r3_2;
    var_r30 = 0U;
loop_15:
    if (var_r30 < temp_r28) {
        if (var_r30 < (u32) (temp_r28 - 1)) {
            var_r4 = 4;
        } else if ((u32) ((sp28 & 3) + (sp28 & 1)) == 2U) {
            var_r4 = 2;
        } else {
            var_r4 = 4;
        }
        temp_r3 = var_r29;
        var_r29 += 4;
        fn_8015DC40(temp_r3, var_r4, 1, 0);
        fn_8015DE84();
        var_r30 += 1;
        goto loop_15;
    }
    fn_8015E148();
    var_r3_3 = 0;
loop_18:
    temp_cr0_eq_2 = var_r3_3 == 0;
    if (temp_cr0_eq_2 != 0) {
        var_r3_3 = fn_8015E0C8(5);
        goto loop_18;
    }
    if (temp_cr0_eq_2 != 0) {
        return 1;
    }
    sp10 = 0x10000;
    fn_8015DC40(&sp10, 2, 1, 0);
    fn_8015DE84();
    fn_8015DC40(&sp24, 2, 0, 0);
    fn_8015DE84();
    do {
        fn_8015DC40(&sp24, 2, 0, 0);
        fn_8015DE84();
    } while (!((sp24 >> 0x10U) & 1));
    fn_8015E148();
    return 0;
}

void EXI2_Reserve(void) {

}
