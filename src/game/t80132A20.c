/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_8013215C();
M2C_UNK fn_80132180();
M2C_UNK fn_801322A4();
M2C_UNK fn_801323B8();
extern M2C_UNK lbl_80346460;
extern M2C_UNK lbl_803466A0;
extern M2C_UNK lbl_80346660;
M2C_UNK fn_80131310(void *, u16, u8, u8, u8, u8, u8);
M2C_UNK fn_801314C0(void *, u16, s32);
M2C_UNK fn_8013262C(void *, void *, s32, s32);
extern M2C_UNK lbl_801DAB88;
M2C_UNK fn_801320D0(void *, M2C_UNK *, s32, s32, s32);
M2C_UNK fn_8013252C(void *, M2C_UNK *, s32, s32);
M2C_UNK fn_8012FFBC();

void fn_80132A20(u8 *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 *arg5, s32 *arg6, s32 *arg7, M2C_UNK arg_sp0, s32 arg_sp8, s32 arg_spC);
s32 fn_80133420(void *arg0, void *arg1, s32 *arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_8013380C(void *arg0, void *arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
void fn_80133A14(void *arg0, void *arg1, M2C_UNK arg_sp0);
void fn_80133BC4(void *arg0, void *arg1, M2C_UNK arg_sp0);
void fn_8013418C(void *arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
void fn_80134630(void);
void fn_80134650(void *arg0, void *arg1);
s32 fn_80134674(void *arg0);

void fn_80132A20(u8 *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 *arg5, s32 *arg6, s32 *arg7, M2C_UNK arg_sp0, s32 arg_sp8, s32 arg_spC) { } /* draft: stub */

s32 fn_80133420(void *arg0, void *arg1, s32 *arg2, s32 arg3, s32 arg4, s32 arg5) { return 0; } /* draft: stub */

void fn_8013380C(void *arg0, void *arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80133A14(void *arg0, void *arg1, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80133BC4(void *arg0, void *arg1, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_8013418C(void *arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) { } /* draft: stub */

void fn_80134630(void) {
    fn_8012FFBC();
}

void fn_80134650(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u16 *, 4) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, u16 *, 6) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(arg0, u8 *, 8) = (u8) M2C_FIELD(arg1, u8 *, 4);
    M2C_FIELD(arg0, u8 *, 9) = (u8) M2C_FIELD(arg1, u8 *, 5);
}

s32 fn_80134674(void *arg0) {
    u32 temp_r5;
    u32 temp_r6;
    u32 var_r3;
    u32 var_r4;

    temp_r5 = (u16) M2C_FIELD(arg0, u16 *, 4) >> 2U;
    var_r4 = temp_r5;
    if ((u8) M2C_FIELD(arg0, u8 *, 8) == 2) {
        var_r4 = (u32) ((s32) temp_r5 >> 1);
    }
    temp_r6 = (u16) M2C_FIELD(arg0, u16 *, 6) >> 2U;
    var_r3 = temp_r6;
    if ((u8) M2C_FIELD(arg0, u8 *, 9) == 2) {
        var_r3 = (u32) ((s32) temp_r6 >> 1);
    }
    return ((((temp_r5 + 2) * (temp_r6 + 2)) + ((var_r4 + 2) * (var_r3 + 2) * 2)) * 2) + 0x81A0;
}
