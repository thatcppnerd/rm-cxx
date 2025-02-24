#ifndef __INT_C__
#define __INT_C__

#include "../types.hh"

// Calls an interupt.
volatile inline void call_int(const u8_t vec)
{
    asm volatile
    (
        "int    %0"
        : 
        : "N" (vec)
    );
}



#endif