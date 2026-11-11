/* Automatic first draft: m2c output made compilable. Not matching yet. */
#include "draft.h"

extern void *__global_destructor_chain;

void __register_global_object(s32 arg0, s32 arg1, void *arg2);

void __register_global_object(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, void **, 0) = (void *) __global_destructor_chain;
    M2C_FIELD(arg2, s32 *, 4) = arg1;
    M2C_FIELD(arg2, s32 *, 8) = arg0;
    __global_destructor_chain = arg2;
}
