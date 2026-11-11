/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_800146F0();
M2C_UNK fn_80015F5C(M2C_UNK *, M2C_UNK *);
M2C_UNK fn_80031578(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK);
s32 fn_8007FC40();
M2C_UNK fn_800806D4();
s32 fn_80080790();
s32 fn_80082598(s32, M2C_UNK *, M2C_UNK);
M2C_UNK fn_80014798(M2C_UNK *, M2C_UNK *);
M2C_UNK fn_800208F4();
s32 fn_80080738();
M2C_UNK fn_800829D4(M2C_UNK, s32);
M2C_UNK strcpy(void *, s8 *);
extern s8 lbl_802CD2CC;
extern s32 lbl_803506B0;
extern u8 lbl_803506B4;
M2C_UNK fn_8008065C();
u8 method_removeLL(s32, s32);
M2C_UNK fn_80005888(void *);
M2C_UNK fn_8002E674(s32);
M2C_UNK fn_8002FCC0(void *, M2C_UNK);
M2C_UNK fn_8002FD20(void *);
M2C_UNK fn_80081364();
extern s32 lbl_803504F0;
extern void *lbl_803506A0;
s32 fn_80005868();
M2C_UNK fn_8007EE48();
u8 fn_800847D4();
M2C_UNK ResetSystem();
M2C_UNK fn_80012D5C(void **, s32, M2C_UNK);
M2C_UNK fn_8014BB10();
M2C_UNK fn_8014F858(void *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK __files;
extern M2C_UNK lbl_80229FDC;
u32 get_up_vector_for_viewing_mtx();
M2C_UNK fn_8002FB00();
extern M2C_UNK lbl_80229FA8;
extern M2C_UNK lbl_80229FC0;
M2C_UNK fn_8002FFB0(void *, u32);
M2C_UNK fn_8002FA14(s32, s32, u8 *);
M2C_UNK fn_8002FEA4(f32);
extern M2C_UNK lbl_8022A004;
M2C_UNK PlayMusic();
M2C_UNK fn_80015448();
M2C_UNK fn_800154A8(M2C_UNK, M2C_UNK);
s32 GetMusicVolume();
s32 PlaySound(s32, s32, s32, s32);
M2C_UNK StopSound(s32, s32, void *);
s32 CheckSound();
M2C_UNK PitchBendSound(u16);
M2C_UNK SetSoundVolume(s32, s32, s32, s32);
M2C_UNK SetSoundPanpot(s32, s32, s32, void *);
M2C_UNK SetStageVolume(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK EnableSfxGroup(s32, s32, void *);
M2C_UNK DisableSfxGroup(s32, s32, void *);

s32 scr_Concat(s32 arg0);
void fn_800866BC(s32 arg0, s32 arg2);
s32 scr_ConcatSS(s32 arg0);
s32 scr_ConcatLL(s32 arg0);
s32 scr_method_removeLL(s32 arg0);
s32 scr_ClearPortableArea(s32 arg0);
s32 scr_Call(s32 arg0);
s32 scr_EnterInitPart(void *arg0);
s32 scr_LeaveInitPart(void *arg0);
s32 scr_RequestScript(s32 arg0);
s32 scr_ResetSystem(s32 arg0);
void **fn_80086B80(void **arg0, u32 **arg1, u32 arg2, u32 arg3, M2C_UNK arg_sp0);
void fn_80086C58(void *arg0, u32 arg1, s32 arg2, M2C_UNK arg_sp0);
void fn_80086D38(void *arg0, u32 arg1);
u32 fn_80086E2C(void *arg0, u32 arg1, u32 arg2, M2C_UNK arg_sp0);
void *fn_80086EE4(void *arg0, u32 arg1, void *arg2, M2C_UNK arg_sp0);
void fn_800870A4(u32 *arg0, u32 *arg1, u32 arg2, u32 *arg3, M2C_UNK arg_sp0);
void *fn_80087534(u32 arg0, void *arg1, void *arg2, M2C_UNK arg_sp0);
s32 scr_PlayMusic(s32 arg0);
s32 scr_StopMusic(s32 arg0);
s32 scr_SetMusicVolume(s32 arg0);
s32 scr_GetMusicVolume(s32 arg0);
s32 scr_PlaySound(void *arg0);
s32 scr_StopSound(void *arg0);
s32 scr_CheckSound(s32 arg0);
s32 scr_PitchBendSound(s32 arg0);
s32 scr_SetSoundVolume(void *arg0);
s32 scr_SetSoundPanpot(void *arg0);
s32 scr_SetStageVolume(void *arg0);
s32 scr_GetStageVolume(void *arg0);
s32 scr_EnableSfxGroup(void *arg0);
s32 scr_DisableSfxGroup(void *arg0);

s32 scr_Concat(s32 arg0) {
    M2C_UNK sp10;
    M2C_UNK spC;
    M2C_UNK sp8;
    s32 temp_r31;
    s32 var_r30;

    temp_r31 = fn_8007FC40();
    fn_80015F5C(&sp10, &sp8);
    var_r30 = 0;
loop_2:
    if (var_r30 < temp_r31) {
        /* draft: did not compile: fn_800866BC(&spC, fn_80080790(arg0), &sp10); */
        fn_80031578(&sp10, &spC, 0, -1);
        fn_800146F0(&spC, -1);
        var_r30 += 1;
        goto loop_2;
    }
    fn_800806D4(arg0, fn_80082598(arg0, &sp10, 0));
    fn_800146F0(&sp10, -1);
    return 0;
}

void fn_800866BC(s32 arg0, s32 arg2) {
    M2C_UNK spC;
    M2C_UNK sp8;

    fn_80014798(&spC, &sp8);
    /* draft: did not compile: fn_800208F4(arg0, fn_80086B80(&spC, arg2, 0, -1)); */
    fn_800146F0(&spC, -1);
}

s32 scr_ConcatSS(s32 arg0) {
    s32 temp_r3;
    s32 var_r30;
    void *temp_r31;

    temp_r3 = fn_8007FC40();
    lbl_802CD2CC = 0;
    var_r30 = 1;
loop_2:
    if (var_r30 < temp_r3) {
        fn_800829D4(0, fn_80080790(arg0));
        var_r30 += 1;
        goto loop_2;
    }
    temp_r31 = &lbl_802CD2CC + (fn_80080738(arg0) * 0x201);
    strcpy(temp_r31, &lbl_802CD2CC);
    fn_800806D4(arg0, temp_r31);
    return 0;
}

s32 scr_ConcatLL(s32 arg0) {
    M2C_UNK sp10;
    M2C_UNK spC;
    M2C_UNK sp8;
    s32 temp_r31;
    s32 var_r30;

    if ((s8) lbl_803506B4 == 0) {
        lbl_803506B0 = 0;
        lbl_803506B4 = 1;
    }
    temp_r31 = fn_8007FC40(arg0);
    fn_80015F5C(&sp10, &sp8);
    var_r30 = 0;
loop_4:
    if (var_r30 < temp_r31) {
        /* draft: did not compile: fn_800866BC(&spC, fn_80080790(arg0), &sp10); */
        fn_80031578(&sp10, &spC, 0, -1);
        fn_800146F0(&spC, -1);
        var_r30 += 1;
        goto loop_4;
    }
    fn_800806D4(arg0, fn_80082598(arg0, &sp10, 1));
    fn_800146F0(&sp10, -1);
    return 0;
}

s32 scr_method_removeLL(s32 arg0) {
    fn_8008065C(arg0, method_removeLL(arg0, fn_80080790()));
    return 0;
}

s32 scr_ClearPortableArea(s32 arg0) {
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_r31;
    u8 temp_r0;
    void *temp_r30;
    void *temp_r31_2;
    void *temp_r31_3;

    temp_r31 = fn_80080738((long)(0));
    fn_80081364();
    if ((temp_r31 == 1) || (temp_r31 == 2)) {
        temp_r30 = lbl_803506A0;
        if (temp_r30 != NULL) {
            temp_r0 = M2C_FIELD(temp_r30, u8 *, 4);
            switch ((s32) temp_r0) {                /* irregular */
            case 3:
                fn_800146F0(M2C_FIELD(temp_r30, void **, 0), 1);
                break;
            case 4:
                temp_r31_2 = M2C_FIELD(temp_r30, void **, 0);
                temp_cr0_eq = temp_r31_2 == NULL;
                if (temp_cr0_eq == 0) {
                    if (temp_cr0_eq == 0) {
                        fn_8002FCC0(temp_r31_2, 0);
                    }
                    fn_80005888(temp_r31_2);
                }
                break;
            case 5:
                temp_r31_3 = M2C_FIELD(temp_r30, void **, 0);
                temp_cr0_eq_2 = temp_r31_3 == NULL;
                if (temp_cr0_eq_2 == 0) {
                    if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(temp_r31_3, u32 *, 4) != 0U)) {
                        fn_8002FD20(temp_r31_3);
                    }
                    fn_80005888(temp_r31_3);
                }
                break;
            }
            M2C_FIELD(temp_r30, s8 *, 4) = 0;
            fn_80005888(temp_r30);
        }
        lbl_803506A0 = NULL;
        fn_8002E674(lbl_803504F0);
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_Call(s32 arg0) {
    s32 *var_r31;
    s32 temp_r3;
    s32 var_r30;

    temp_r3 = fn_8007FC40();
    var_r30 = temp_r3 - 1;
    /* draft: did not compile: var_r31 = fn_80005868(temp_r3 * 4) + (var_r30 * 4); */
loop_2:
    if (var_r30 >= 0) {
        *var_r31 = fn_80080738(arg0);
        var_r31 -= 4;
        var_r30 -= 1;
        goto loop_2;
    }
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_EnterInitPart(void *arg0) {
    M2C_FIELD(arg0, s8 *, 4) = 1;
    fn_8008065C((long)(0), (unsigned char)(0));
    return 0;
}

s32 scr_LeaveInitPart(void *arg0) {
    M2C_FIELD(arg0, s8 *, 4) = 0;
    fn_8008065C((long)(0), (unsigned char)(0));
    return 0;
}

s32 scr_RequestScript(s32 arg0) {
    fn_80080790();
    fn_8007EE48();
    fn_8008065C(arg0, fn_800847D4());
    return 0;
}

s32 scr_ResetSystem(s32 arg0) {
    ResetSystem();
    fn_8008065C(arg0, 0);
    return 0;
}

void **fn_80086B80(void **arg0, u32 **arg1, u32 arg2, u32 arg3, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80086C58(void *arg0, u32 arg1, s32 arg2, M2C_UNK arg_sp0) {
    s32 temp_r28;
    u32 temp_r0;
    u32 temp_r3;
    u32 var_r29;

    if (arg1 != 0) {
        if (arg1 > 0x1FFFFFFFU) {
            fn_8014F858(&__files + 0xA0, &lbl_80229FA8, &__files);
            fn_8014BB10();
        }
        temp_r28 = arg1 * 8;
        temp_r3 = get_up_vector_for_viewing_mtx(temp_r28);
        if (temp_r3 == 0U) {
            fn_8014F858(&__files + 0xA0, &lbl_80229FC0, &__files);
            fn_8014BB10();
        }
        M2C_FIELD(arg0, u32 *, 8) = temp_r3;
        M2C_FIELD(arg0, u32 *, 0) = arg1;
        temp_r0 = M2C_FIELD(arg0, u32 *, 8);
        var_r29 = temp_r0;
loop_7:
        if (var_r29 < (u32) (temp_r0 + temp_r28)) {
            fn_8002FB00(arg0, var_r29, arg2);
            var_r29 += 8;
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
            goto loop_7;
        }
    }
}

void fn_80086D38(void *arg0, u32 arg1) {
    u8 spC;
    void *sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_r5;
    u32 temp_r6;

    temp_r6 = M2C_FIELD(arg0, u32 *, 4);
    if (arg1 > temp_r6) {
        spC = 0;
        /* draft: did not compile: fn_800870A4(M2C_FIELD(arg0, s32 *, 8) + (temp_r6 * 8), arg1 - temp_r6, &sp8); */
        switch ((s32) spC) {                        /* irregular */
        case 3:
            fn_800146F0(sp8, 1);
            break;
        case 4:
            temp_cr0_eq = sp8 == NULL;
            if (temp_cr0_eq == 0) {
                if (temp_cr0_eq == 0) {
                    fn_8002FCC0((void *)(0), (long)(0));
                }
                fn_80005888(sp8);
            }
            break;
        case 5:
            temp_cr0_eq_2 = sp8 == NULL;
            if (temp_cr0_eq_2 == 0) {
                if ((temp_cr0_eq_2 == 0) && ((u32) M2C_FIELD(sp8, u32 *, 4) != 0U)) {
                    fn_8002FD20((void *)(0));
                }
                fn_80005888(sp8);
            }
            break;
        }
        spC = 0;
        return;
    }
    if (arg1 < temp_r6) {
        temp_r5 = M2C_FIELD(arg0, s32 *, 8);
        /* draft: did not compile: fn_80086E2C(temp_r5 + (arg1 * 8), temp_r5 + (temp_r6 * 8)); */
    }
}

u32 fn_80086E2C(void *arg0, u32 arg1, u32 arg2, M2C_UNK arg_sp0) {
    s32 temp_r30;
    u32 temp_r31;
    u32 var_r30;

    if (arg1 == arg2) {
        return arg1;
    }
    temp_r31 = M2C_FIELD(arg0, s32 *, 8) + (M2C_FIELD(arg0, s32 *, 4) * 8);
    temp_r30 = (s32) (temp_r31 - arg2) / 8;
    if (temp_r30 != 0) {
        /* draft: did not compile: fn_80086EE4(arg2, temp_r31, arg1); */
    }
    var_r30 = arg1 + (temp_r30 * 8);
loop_6:
    if (var_r30 < temp_r31) {
        fn_8002FFB0(arg0, var_r30);
        var_r30 += 8;
        goto loop_6;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) - ((s32) (arg2 - arg1) / 8));
    return arg1;
}

void *fn_80086EE4(void *arg0, u32 arg1, void *arg2, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_800870A4(u32 *arg0, u32 *arg1, u32 arg2, u32 *arg3, M2C_UNK arg_sp0) { } /* draft: stub */

void *fn_80087534(u32 arg0, void *arg1, void *arg2, M2C_UNK arg_sp0) { } /* draft: stub */

s32 scr_PlayMusic(s32 arg0) {
    fn_80080738((long)(0));
    PlayMusic();
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_StopMusic(s32 arg0) {
    fn_80015448();
    fn_800154A8(0x7F, 0x64);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_SetMusicVolume(s32 arg0) {
    extern u8 fn_80080738();
    if (fn_8007FC40() > 1) {
        fn_80080738(arg0);
    }
    fn_800154A8(fn_80080738(arg0), 0x64);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_GetMusicVolume(s32 arg0) {
    fn_8008065C(arg0, GetMusicVolume());
    return 0;
}

s32 scr_PlaySound(void *arg0) { return 0; } /* draft: stub */

s32 scr_StopSound(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x2E0);
    StopSound(M2C_FIELD(temp_r5, s32 *, 0x38), fn_80080738(), temp_r5);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_CheckSound(s32 arg0) {
    fn_80080738();
    fn_8008065C(arg0, CheckSound());
    return 0;
}

s32 scr_PitchBendSound(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_80080738();
    fn_80080738(arg0);
    PitchBendSound(temp_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_SetSoundVolume(void *arg0) {
    s32 var_r31;
    s32 temp_r30;

    var_r31 = -1;
    if (fn_8007FC40() > 2) {
        var_r31 = fn_80080738(arg0);
    }
    temp_r30 = fn_80080738(arg0);
    SetSoundVolume(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), s32 *, 0x38), fn_80080738(arg0), temp_r30, var_r31);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_SetSoundPanpot(void *arg0) {
    s32 temp_r31;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg0, void **, 0x2E0);
    temp_r31 = fn_80080738();
    SetSoundPanpot(M2C_FIELD(temp_r6, s32 *, 0x38), fn_80080738(arg0), temp_r31, temp_r6);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_SetStageVolume(void *arg0) {
    SetStageVolume(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), s32 *, 0x38), fn_80080738(), 0, -1, -1, -1);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_GetStageVolume(void *arg0) {
    fn_8008065C(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2E0), void **, 0x38), s32 *, 0x2C));
    return 0;
}

s32 scr_EnableSfxGroup(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x2E0);
    EnableSfxGroup(M2C_FIELD(temp_r5, s32 *, 0x38), fn_80080738(), temp_r5);
    fn_8008065C(arg0, 0);
    return 0;
}

s32 scr_DisableSfxGroup(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x2E0);
    DisableSfxGroup(M2C_FIELD(temp_r5, s32 *, 0x38), fn_80080738(), temp_r5);
    fn_8008065C(arg0, 0);
    return 0;
}
