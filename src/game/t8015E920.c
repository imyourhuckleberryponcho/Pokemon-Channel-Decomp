/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"


void EXI2_Unreserve(void);
s32 AMC_IsStub(void);
s32 Hu_IsStub(void);
void DBInitComm(void);
void DBInitInterrupts(void);
s32 DBQueryData(void);
s32 DBRead(void);
s32 DBWrite(void);
void DBOpen(void);
void DBClose(void);

void EXI2_Unreserve(void) {

}

s32 AMC_IsStub(void) {
    return 0;
}

s32 Hu_IsStub(void) {
    return 1;
}

void DBInitComm(void) {

}

void DBInitInterrupts(void) {

}

s32 DBQueryData(void) {
    return 0;
}

s32 DBRead(void) {
    return 0;
}

s32 DBWrite(void) {
    return 0;
}

void DBOpen(void) {

}

void DBClose(void) {

}
