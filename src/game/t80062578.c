/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

M2C_UNK fn_80045D8C(s32);
M2C_UNK fn_80045A0C();
M2C_UNK fn_80045A54(void *, u8);
M2C_UNK fn_80045D44(s32, s32);
M2C_UNK fn_800465BC(s32, s32);
M2C_UNK fn_800469DC(s32, s32 *);

void fn_80062578(s32 arg0);
void fn_8006259C(void *arg0);
void fn_800625FC(void *arg0);
void fn_80062680(s32 arg0);
void fn_800626E0(s32 arg0);
void fn_80062764(s32 arg0);
void fn_80062788(void *arg0, s32 arg1);
void fn_800627B0(s32 arg0);
void fn_800627D4(s32 arg0);
void fn_800627F8(s32 arg0);
void fn_8006281C(void *arg0);
void fn_80062848(void *arg0, s32 *arg1);
void fn_80062878(void *arg0);
void fn_800628A4(void *arg0);
void fn_800628D0(void *arg0);
void fn_800628FC(s32 arg0);
void fn_80062920(void *arg0, s32 arg1);
void fn_80062948(s32 arg0);
void fn_8006296C(s32 arg0);
void fn_80062990(s32 arg0);
void fn_800629B4(void *arg0);
void fn_800629E0(void *arg0, s32 *arg1);
void fn_80062A10(void *arg0);
void fn_80062A3C(void *arg0);
void fn_80062A68(void *arg0);
void fn_80062A94(s32 arg0);
void fn_80062AB8(void *arg0, s32 arg1);
void fn_80062AE0(s32 arg0);
void fn_80062B04(s32 arg0);
void fn_80062B28(s32 arg0);
void fn_80062B4C(void *arg0);
void fn_80062B78(void *arg0, s32 *arg1);

void fn_80062578(s32 arg0) {
    fn_80045D8C(arg0 + 0x12);
}

void fn_8006259C(void *arg0) {
    /* draft: did not compile: fn_80045A0C(arg0 + 0xC); */
    /* draft: did not compile: fn_80045A0C(arg0, arg0 + 0x10); */
    /* draft: did not compile: fn_80045A0C(arg0, arg0 + 0x14); */
    /* draft: did not compile: fn_80045A0C(arg0, arg0 + 0x18); */
    fn_80045A54(arg0, M2C_FIELD(arg0, u8 *, 0x2A));
}

void fn_800625FC(void *arg0) {
    /* draft: did not compile: fn_80045A0C(arg0 + 0xC); */
    /* draft: did not compile: fn_80045A0C(arg0, arg0 + 0x10); */
    /* draft: did not compile: fn_80045A0C(arg0, arg0 + 0x14); */
    /* draft: did not compile: fn_80045A0C(arg0, arg0 + 0x18); */
    fn_80045A54(arg0, M2C_FIELD(arg0, u8 *, 0x2A));
    fn_80045A54(arg0, M2C_FIELD(arg0, u8 *, 0x11));
    fn_80045A54(arg0, M2C_FIELD(arg0, u8 *, 0x15));
    fn_80045A54(arg0, M2C_FIELD(arg0, u8 *, 0x19));
}

void fn_80062680(s32 arg0) {
    fn_80045D8C(arg0 + 0x2A);
    fn_80045D44(arg0, arg0 + 0x18);
    fn_80045D44(arg0, arg0 + 0x14);
    fn_80045D44(arg0, arg0 + 0x10);
    fn_80045D44(arg0, arg0 + 0xC);
}

void fn_800626E0(s32 arg0) {
    fn_80045D8C(arg0 + 0x19);
    fn_80045D8C((long)(arg0));
    fn_80045D8C((long)(arg0));
    fn_80045D8C((long)(arg0));
    fn_80045D44(arg0, arg0 + 0x18);
    fn_80045D44(arg0, arg0 + 0x14);
    fn_80045D44(arg0, arg0 + 0x10);
    fn_80045D44(arg0, arg0 + 0xC);
}

void fn_80062764(s32 arg0) {
    /* draft: did not compile: fn_80062788(arg0 + 0xC); */
}

void fn_80062788(void *arg0, s32 arg1) {
    fn_800465BC(M2C_FIELD(arg0, s32 *, 0x10), arg1);
}

void fn_800627B0(s32 arg0) {
    /* draft: did not compile: fn_80062788(arg0 + 0x10); */
}

void fn_800627D4(s32 arg0) {
    /* draft: did not compile: fn_80062788(arg0 + 0x14); */
}

void fn_800627F8(s32 arg0) {
    /* draft: did not compile: fn_80062788(arg0 + 0x18); */
}

void fn_8006281C(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0xC);
    fn_80062848((void *)(&sp8), (long *)(0));
}

void fn_80062848(void *arg0, s32 *arg1) {
    s32 sp8;

    sp8 = *arg1;
    fn_800469DC(M2C_FIELD(arg0, s32 *, 0x10), &sp8);
}

#pragma push
#pragma dont_inline on
void fn_80062878(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0x10);
    fn_80062848((void *)(&sp8), (long *)(0));
}
#pragma pop

void fn_800628A4(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0x14);
    fn_80062848((void *)(&sp8), (long *)(0));
}

#pragma push
#pragma dont_inline on
void fn_800628D0(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0x18);
    fn_80062848((void *)(&sp8), (long *)(0));
}
#pragma pop

void fn_800628FC(s32 arg0) {
    /* draft: did not compile: fn_80062920(arg0 + 0xC); */
}

void fn_80062920(void *arg0, s32 arg1) {
    fn_800465BC(M2C_FIELD(arg0, s32 *, 0x14), arg1);
}

void fn_80062948(s32 arg0) {
    /* draft: did not compile: fn_80062920(arg0 + 0x10); */
}

void fn_8006296C(s32 arg0) {
    /* draft: did not compile: fn_80062920(arg0 + 0x14); */
}

void fn_80062990(s32 arg0) {
    /* draft: did not compile: fn_80062920(arg0 + 0x18); */
}

void fn_800629B4(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0xC);
    fn_800629E0((void *)(&sp8), (long *)(0));
}

void fn_800629E0(void *arg0, s32 *arg1) {
    s32 sp8;

    sp8 = *arg1;
    fn_800469DC(M2C_FIELD(arg0, s32 *, 0x14), &sp8);
}

#pragma push
#pragma dont_inline on
void fn_80062A10(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0x10);
    fn_800629E0((void *)(&sp8), (long *)(0));
}
#pragma pop

void fn_80062A3C(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0x14);
    fn_800629E0((void *)(&sp8), (long *)(0));
}

#pragma push
#pragma dont_inline on
void fn_80062A68(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0x18);
    fn_800629E0((void *)(&sp8), (long *)(0));
}
#pragma pop

void fn_80062A94(s32 arg0) {
    /* draft: did not compile: fn_80062AB8(arg0 + 0xC); */
}

void fn_80062AB8(void *arg0, s32 arg1) {
    fn_800465BC(M2C_FIELD(arg0, s32 *, 0x18), arg1);
}

void fn_80062AE0(s32 arg0) {
    /* draft: did not compile: fn_80062AB8(arg0 + 0x10); */
}

void fn_80062B04(s32 arg0) {
    /* draft: did not compile: fn_80062AB8(arg0 + 0x14); */
}

void fn_80062B28(s32 arg0) {
    /* draft: did not compile: fn_80062AB8(arg0 + 0x18); */
}

void fn_80062B4C(void *arg0) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 0xC);
    fn_80062B78((void *)(&sp8), (long *)(0));
}

void fn_80062B78(void *arg0, s32 *arg1) {
    s32 sp8;

    sp8 = *arg1;
    fn_800469DC(M2C_FIELD(arg0, s32 *, 0x18), &sp8);
}
