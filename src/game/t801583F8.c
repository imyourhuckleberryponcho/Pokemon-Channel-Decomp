/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK OSReport(s8 *);
M2C_UNK fn_8015AD60(s32);
s32 fn_8015AD6C();
M2C_UNK fn_801579EC();
M2C_UNK TRKSetBufferPosition(M2C_UNK);
extern M2C_UNK lbl_802B0E48;
extern u32 lbl_8034B968;
s32 fn_80157420(void *);
M2C_UNK fn_80157E1C(void *, M2C_UNK);
M2C_UNK fn_8015DABC(u8);
s32 fn_8015BDE0();
s32 TRKTargetStopped();
s32 fn_8015786C(void *, u32 *);
u32 fn_8015C05C();
M2C_UNK fn_8015C06C(u32, u32, s32);
M2C_UNK fn_8015C0E8(u8, s32);
M2C_UNK TRKTargetContinue();
s32 fn_8015BE18(u8);
s32 fn_80157934(void *, u16 *);
s32 fn_8015C668(void *, M2C_UNK *, M2C_UNK);
s32 TRKTargetAccessExtended1(void *, M2C_UNK *, M2C_UNK);
s32 fn_8015CC10(void *, M2C_UNK *, M2C_UNK);
s32 TRKTargetAccessDefault(void *, M2C_UNK *, M2C_UNK);

void fn_801583F8(u8 *arg0);
s32 TRKDispatchMessage(s32 arg0);
s32 TRKInitializeDispatcher(void);
void fn_8015851C(void *arg0);
void fn_801586C0(void *arg0);
void fn_801587C0(void *arg0);
void fn_80158CF0(void *arg0);
void fn_80158E44(void *arg0);
void fn_8015913C(void *arg0);
void fn_80159504(void *arg0);
void fn_801598D0();
void fn_80159CF0();

void fn_801583F8(u8 *arg0) {
    s8 sp9;
    s8 sp8;
    s32 temp_r3;
    u8 *var_r29;
    u8 temp_r0;

    var_r29 = arg0;
loop_2:
    if (0 == 0) {
        temp_r0 = *var_r29;
        var_r29 += 1;
        if ((s8) temp_r0 != 0) {
            temp_r3 = fn_8015AD6C();
            sp8 = (s8) temp_r0;
            sp9 = 0;
            fn_8015AD60(0);
            OSReport(&sp8);
            fn_8015AD60(temp_r3);
            goto loop_2;
        }
    }
}

s32 TRKDispatchMessage(s32 arg0) {
    u8 sp8;
    s32 var_r31;

    var_r31 = 0x500;
    TRKSetBufferPosition(0);
    fn_801579EC(arg0, &sp8);
    if (sp8 < (u32) lbl_8034B968) {
        /* draft: did not compile: var_r31 = *(&lbl_802B0E48 + ((sp8 * 4) & 0x3FC))(arg0, &lbl_802B0E48); */
    }
    return var_r31;
}

s32 TRKInitializeDispatcher(void) {
    lbl_8034B968 = 0x20;
    return 0;
}

void fn_8015851C(void *arg0) { } /* draft: stub */

void fn_801586C0(void *arg0) { } /* draft: stub */

void fn_801587C0(void *arg0) { } /* draft: stub */

void fn_80158CF0(void *arg0) { } /* draft: stub */

void fn_80158E44(void *arg0) { } /* draft: stub */

void fn_8015913C(void *arg0) { } /* draft: stub */

void fn_80159504(void *arg0) { } /* draft: stub */

void fn_801598D0() { } /* draft: stub */

void fn_80159CF0() { } /* draft: stub */
