#ifndef __INT11H_CC__
#define __INT11H_CC__

#include "int11h.hh"

volatile const u16_t int11h(void)
{
    call_int(0x11);
    return AX;
}

#endif