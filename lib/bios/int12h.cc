#ifndef __INT12H_C__
#define __INT12H_C__

#include "int12h.hh"

volatile const u16_t int12h(void)
{
    call_int(0x12);
    return AX;
}

#endif