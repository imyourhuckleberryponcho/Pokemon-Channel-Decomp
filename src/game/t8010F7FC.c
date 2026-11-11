/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

s32 HSD_TExpGetType(s32);
M2C_UNK order_dag();
extern M2C_UNK lbl_802AAA48;
M2C_UNK HSD_TExpRef(void *, u8);
M2C_UNK HSD_TExpUnref(void *, u8, s32);
s32 HSD_TExpSimplify(void *);
extern s32 lbl_80350330;
extern void *lbl_80350334;

void HSD_TExpSchedule(s32 arg0, void *arg1, void **arg2, s32 arg3, M2C_UNK arg_sp0);
s32 fn_8010FB64(void *arg0, M2C_UNK arg_sp0);
void SimplifyThis();

void HSD_TExpSchedule(s32 arg0, void *arg1, void **arg2, s32 arg3, M2C_UNK arg_sp0) { } /* draft: stub */

s32 fn_8010FB64(void *arg0, M2C_UNK arg_sp0) {
    void *temp_r27_2;
    s32 temp_r5_2;
    u8 temp_r27;
    s32 var_r30;
    s32 var_r30_2;
    u32 temp_r3;
    u32 temp_r3_5;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_4;
    u8 temp_r0_5;
    u8 temp_r0_6;
    u8 temp_r0_7;
    s32 var_r29;
    u8 temp_r28_2;
    u8 temp_r3_2;
    u8 temp_r3_3;
    u8 temp_r3_4;
    u8 temp_r3_6;
    s32 temp_r5;
    void *temp_r28;
    void *var_r31;
    void *var_r31_2;

    var_r29 = 0;
    var_r31 = arg0;
    var_r30 = 0;
    do {
        if ((u8) M2C_FIELD(var_r31, u8 *, 0x24) == 1) {
            temp_r28 = M2C_FIELD(var_r31, void **, 0x28);
            temp_r27 = M2C_FIELD(var_r31, u8 *, 0x25);
            if (HSD_TExpSimplify(temp_r28) != 0) {
                var_r29 = 1;
            }
            if (temp_r27 == 1) {
                temp_r0 = M2C_FIELD(temp_r28, u8 *, 0xD);
                switch ((s32) temp_r0) {            /* switch 1; irregular */
                case 0xFF:                          /* switch 1 */
                    HSD_TExpUnref((void *)(temp_r28), (unsigned char)(temp_r27), (long)(0));
                    var_r29 = 1;
                    M2C_FIELD(var_r31, u8 *, 0x24) = (s32) lbl_80350330;
                    M2C_FIELD(var_r31, void **, 0x28) = (void *) lbl_80350334;
                    break;
                case 0x0:                           /* switch 1 */
                    if (((u8) M2C_FIELD(temp_r28, u8 *, 0x25) == 7) && ((u8) M2C_FIELD(temp_r28, u8 *, 0x2D) == 7) && ((u8) M2C_FIELD(temp_r28, u8 *, 0xF) == 0) && ((u8) M2C_FIELD(temp_r28, u8 *, 0x10) == 0)) {
                        temp_r0_2 = M2C_FIELD(temp_r28, u8 *, 0x3C);
                        switch ((s32) temp_r0_2) {  /* switch 2; irregular */
                        case 5:                     /* switch 2 */
                            M2C_FIELD(var_r31, u8 *, 0x24) = (s32) M2C_FIELD(temp_r28, u8 *, 0x3C);
                            M2C_FIELD(var_r31, void **, 0x28) = (void *) M2C_FIELD(temp_r28, void **, 0x40);
                            HSD_TExpRef(M2C_FIELD(var_r31, void **, 0x28), M2C_FIELD(var_r31, u8 *, 0x25));
                            HSD_TExpUnref((void *)(temp_r28), (unsigned char)(temp_r27), (long)(0));
                            var_r29 = 1;
                            break;
                        case 1:                     /* switch 2 */
                            if ((var_r30 != 3) || ((u8) M2C_FIELD(temp_r28, u8 *, 0xE) == 0) || ((u8) M2C_FIELD(temp_r28, u8 *, 0x11) != 1)) {
                                M2C_FIELD(var_r31, u8 *, 0x24) = (s32) M2C_FIELD(temp_r28, u8 *, 0x3C);
                                M2C_FIELD(var_r31, void **, 0x28) = (void *) M2C_FIELD(temp_r28, void **, 0x40);
                                HSD_TExpRef(M2C_FIELD(var_r31, void **, 0x28), M2C_FIELD(var_r31, u8 *, 0x25));
                                HSD_TExpUnref((void *)(temp_r28), (unsigned char)(temp_r27), (long)(0));
                                var_r29 = 1;
                            }
                            break;
                        case 2:                     /* switch 2 */
                            temp_r3 = M2C_FIELD(arg0, u32 *, 0x64);
                            if (((temp_r3 == 0U) || (temp_r3 == (u32) M2C_FIELD(temp_r28, u32 *, 0x64))) && ((temp_r3_2 = M2C_FIELD(arg0, u8 *, 0x1E), ((temp_r3_2 == 0xFF) != 0)) || (temp_r0_3 = M2C_FIELD(temp_r28, u8 *, 0x1E), ((temp_r0_3 == 0xFF) != 0)) || (temp_r3_2 == temp_r0_3))) {
                                M2C_FIELD(var_r31, u8 *, 0x24) = (s32) M2C_FIELD(temp_r28, u8 *, 0x3C);
                                M2C_FIELD(var_r31, void **, 0x28) = (void *) M2C_FIELD(temp_r28, void **, 0x40);
                                M2C_FIELD(arg0, u32 *, 0x64) = (u32) M2C_FIELD(temp_r28, u32 *, 0x64);
                                if ((u8) M2C_FIELD(arg0, u8 *, 0x1E) == 0xFF) {
                                    M2C_FIELD(arg0, u8 *, 0x1E) = (u8) M2C_FIELD(temp_r28, u8 *, 0x1E);
                                }
                                HSD_TExpUnref((void *)(temp_r28), (unsigned char)(temp_r27), (long)(0));
                                var_r29 = 1;
                            }
                            break;
                        case 3:                     /* switch 2 */
                            temp_r3_3 = M2C_FIELD(arg0, u8 *, 0x68);
                            if (((temp_r3_3 == 0xFF) || (temp_r3_3 == (u8) M2C_FIELD(temp_r28, u8 *, 0x68))) && ((temp_r3_4 = M2C_FIELD(arg0, u8 *, 0x1F), ((temp_r3_4 == 0xFF) != 0)) || (temp_r0_4 = M2C_FIELD(temp_r28, u8 *, 0x1F), ((temp_r0_4 == 0xFF) != 0)) || (temp_r3_4 == temp_r0_4))) {
                                M2C_FIELD(var_r31, u8 *, 0x24) = (s32) M2C_FIELD(temp_r28, u8 *, 0x3C);
                                M2C_FIELD(var_r31, void **, 0x28) = (void *) M2C_FIELD(temp_r28, void **, 0x40);
                                M2C_FIELD(arg0, u8 *, 0x68) = (u8) M2C_FIELD(temp_r28, u8 *, 0x68);
                                if ((u8) M2C_FIELD(arg0, u8 *, 0x1F) == 0xFF) {
                                    M2C_FIELD(arg0, u8 *, 0x1F) = (u8) M2C_FIELD(temp_r28, u8 *, 0x1F);
                                }
                                HSD_TExpUnref((void *)(temp_r28), (unsigned char)(temp_r27), (long)(0));
                                var_r29 = 1;
                            }
                            break;
                        }
                    }
                    break;
                }
            } else {
                temp_r0_5 = M2C_FIELD(temp_r28, u8 *, 0x19);
                switch ((s32) temp_r0_5) {          /* switch 3; irregular */
                case 0x0:                           /* switch 3 */
                    break;
                case 0xFF:                          /* switch 3 */
                    HSD_TExpUnref((void *)(temp_r28), (unsigned char)(temp_r27), (long)(0));
                    var_r29 = 1;
                    M2C_FIELD(var_r31, u8 *, 0x24) = (s32) lbl_80350330;
                    M2C_FIELD(var_r31, void **, 0x28) = (void *) lbl_80350334;
                    break;
                }
            }
        }
        var_r30 += 1;
        /* draft: did not compile: var_r31 += 8; */
    } while (var_r30 < 4);
    var_r30_2 = 0;
    var_r31_2 = arg0;
    do {
        if ((u8) M2C_FIELD(var_r31_2, u8 *, 0x44) == 1) {
            temp_r27_2 = M2C_FIELD(var_r31_2, void **, 0x48);
            temp_r28_2 = M2C_FIELD(var_r31_2, u8 *, 0x45);
            HSD_TExpSimplify(temp_r27_2);
            temp_r0_6 = M2C_FIELD(temp_r27_2, u8 *, 0x19);
            switch ((s32) temp_r0_6) {              /* switch 4; irregular */
            case 0xFF:                              /* switch 4 */
                HSD_TExpUnref((void *)(temp_r27_2), (unsigned char)(temp_r28_2), (long)(0));
                var_r29 = 1;
                M2C_FIELD(var_r31_2, u8 *, 0x44) = (s32) lbl_80350330;
                M2C_FIELD(var_r31_2, void **, 0x48) = (void *) lbl_80350334;
                break;
            case 0x0:                               /* switch 4 */
                if (((u8) M2C_FIELD(temp_r27_2, u8 *, 0x45) == 7) && ((u8) M2C_FIELD(temp_r27_2, u8 *, 0x4D) == 7) && ((u8) M2C_FIELD(temp_r27_2, u8 *, 0x1B) == 0) && ((u8) M2C_FIELD(temp_r27_2, u8 *, 0x1C) == 0)) {
                    temp_r0_7 = M2C_FIELD((s32)temp_r27_2, u8 *, 0x5C);
                    switch ((s32) temp_r0_7) {      /* switch 5; irregular */
                    case 5:                         /* switch 5 */
                        M2C_FIELD(var_r31_2, u8 *, 0x44) = (s32) M2C_FIELD(temp_r27_2, u8 *, 0x5C);
                        M2C_FIELD(var_r31_2, void **, 0x48) = (void *) M2C_FIELD(temp_r27_2, void **, 0x60);
                        HSD_TExpRef(M2C_FIELD(var_r31_2, void **, 0x48), M2C_FIELD(var_r31_2, u8 *, 0x45));
                        HSD_TExpUnref((void *)(temp_r27_2), (unsigned char)(temp_r28_2), (long)(0));
                        var_r29 = 1;
                        /* fallthrough */
                    case 1:                         /* switch 5 */
                        if ((var_r30_2 != 3) || ((u8) M2C_FIELD(temp_r27_2, u8 *, 0x1A) == 0) || ((u8) M2C_FIELD(temp_r27_2, u8 *, 0x1D) != 1)) {
                            M2C_FIELD(var_r31_2, u8 *, 0x44) = (s32) M2C_FIELD(temp_r27_2, u8 *, 0x5C);
                            M2C_FIELD(var_r31_2, void **, 0x48) = (void *) M2C_FIELD(temp_r27_2, void **, 0x60);
                            HSD_TExpRef(M2C_FIELD(var_r31_2, void **, 0x48), M2C_FIELD(var_r31_2, u8 *, 0x45));
                            HSD_TExpUnref((void *)(temp_r27_2), (unsigned char)(temp_r28_2), (long)(0));
                            var_r29 = 1;
                        }
                        break;
                    case 2:                         /* switch 5 */
                        temp_r3_5 = M2C_FIELD(arg0, u32 *, 0x64);
                        if ((temp_r3_5 == 0U) || (temp_r3_5 == (u32) M2C_FIELD(temp_r27_2, u32 *, 0x64))) {
                            temp_r5 = (s32) M2C_FIELD(temp_r27_2, u8 *, 0x5C);
                            M2C_FIELD(var_r31_2, void **, 0x48) = (void *) M2C_FIELD(temp_r27_2, void **, 0x60);
                            M2C_FIELD(var_r31_2, u8 *, 0x44) = temp_r5;
                            M2C_FIELD(arg0, u32 *, 0x64) = (u32) M2C_FIELD(temp_r27_2, u32 *, 0x64);
                            HSD_TExpUnref(temp_r27_2, temp_r28_2, temp_r5);
                            var_r29 = 1;
                        }
                        break;
                    case 3:                         /* switch 5 */
                        temp_r3_6 = M2C_FIELD(arg0, u8 *, 0x68);
                        if ((temp_r3_6 == 0xFF) || (temp_r3_6 == (u8) M2C_FIELD(temp_r27_2, u8 *, 0x68))) {
                            temp_r5_2 = (s32) M2C_FIELD(temp_r27_2, u8 *, 0x5C);
                            M2C_FIELD(var_r31_2, void **, 0x48) = (void *) M2C_FIELD(temp_r27_2, void **, 0x60);
                            M2C_FIELD(arg0, u8 *, 0x68) = (u8) M2C_FIELD(temp_r27_2, u8 *, 0x68);
                            HSD_TExpUnref(temp_r27_2, temp_r28_2, temp_r5_2);
                            var_r29 = 1;
                            M2C_FIELD(var_r31_2, u8 *, 0x44) = temp_r5_2;
                        }
                        break;
                    }
                }
                break;
            }
        }
        var_r30_2 += 1;
        /* draft: did not compile: var_r31_2 += 8; */
    } while (var_r30_2 < 4);
    return var_r29;
}

void SimplifyThis() { } /* draft: stub */
