#include "reg.hh"

#pragma region REG_8

volatile inline ALWAYS_INLINE const u8_t   REG_8::get(void)
{
    return __mov();
}
volatile inline ALWAYS_INLINE void          REG_8::set(const u8_t val)
{
    __mov(val);
}
inline ALWAYS_INLINE    REG_8::operator u8_t()
{
    return __mov();
}
inline ALWAYS_INLINE    REG_8::operator u16_t()
{
    return (u16_t)__mov();
}
inline ALWAYS_INLINE void  REG_8::operator=(const u8_t val)
{
    __mov(val);
}
inline ALWAYS_INLINE void  REG_8::operator|=(const u8_t val)
{
    __or(val);
}
inline ALWAYS_INLINE void  REG_8::operator&=(const u8_t val)
{
    __and(val);
}
inline ALWAYS_INLINE void  REG_8::operator^=(const u8_t val)
{
    __xor(val);
}
inline ALWAYS_INLINE void  REG_8::operator~(void)
{
    __not();
}
inline ALWAYS_INLINE void  REG_8::operator<<=(const u8_t shift)
{
    __shl(shift);
}
inline ALWAYS_INLINE void  REG_8::operator>>=(const u8_t shift)
{
    __shr(shift);
}
inline ALWAYS_INLINE void  REG_8::operator+=(const u8_t addend)
{
    __add(addend);
}
inline ALWAYS_INLINE void  REG_8::operator-=(const u8_t subtrahend)
{
    __sub(subtrahend);
}
inline ALWAYS_INLINE void  REG_8::operator++(void)
{
    __inc();
}
inline ALWAYS_INLINE void  REG_8::operator--(void)
{
    __dec();
}
#pragma endregion REG_8

#pragma region REG_16
volatile inline ALWAYS_INLINE const u16_t   REG_16::get(void)
{
    return __mov();
}
volatile inline ALWAYS_INLINE void          REG_16::set(const u16_t val)
{
    __mov(val);
}
inline ALWAYS_INLINE    REG_16::operator u8_t()
{
    return (u8_t)__mov();
}
inline ALWAYS_INLINE    REG_16::operator u16_t()
{
    return __mov();
}
inline ALWAYS_INLINE void  REG_16::operator=(const u16_t val)
{
    __mov(val);
}
inline ALWAYS_INLINE void  REG_16::operator|=(const u16_t val)
{
    __or(val);
}
inline ALWAYS_INLINE void  REG_16::operator&=(const u16_t val)
{
    __and(val);
}
inline ALWAYS_INLINE void  REG_16::operator^=(const u16_t val)
{
    __xor(val);
}
inline ALWAYS_INLINE void  REG_16::operator~(void)
{
    __not();
}
inline ALWAYS_INLINE void  REG_16::operator<<=(const u8_t shift)
{
    __shl(shift);
}
inline ALWAYS_INLINE void  REG_16::operator>>=(const u8_t shift)
{
    __shr(shift);
}
inline ALWAYS_INLINE void  REG_16::operator+=(const u16_t addend)
{
    __add(addend);
}
inline ALWAYS_INLINE void  REG_16::operator-=(const u16_t subtrahend)
{
    __sub(subtrahend);
}
inline ALWAYS_INLINE void  REG_16::operator++(void)
{
    __inc();
}
inline ALWAYS_INLINE void  REG_16::operator--(void)
{
    __dec();
}
#pragma endregion REG_16

#pragma region AX
volatile inline ALWAYS_INLINE void           REG_AX::__mov(const u16_t val)
{
    asm
    (
        "mov   %%ax, %0;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE const u16_t    REG_AX::__mov(void)
{
    register u16_t __tmp__ asm("%ax");
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_AX::__or(const u16_t val)
{
    asm
    (
        "orw    %%ax, %0;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_AX::__and(const u16_t val)
{
    asm
    (
        "and    %%ax, %0;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_AX::__xor(const u16_t val)
{
    asm
    (
        "xor    %%ax, %0;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_AX::__not(void)
{
    asm
    (
        "notw   %%ax;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_AX::__shl(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shl    %%cl, %%ax;"
        :
        : "mi" (shift)
        : "%cl"
    );
}
volatile inline ALWAYS_INLINE void           REG_AX::__shr(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shr    %%cl, %%ax;"
        :
        : "mi" (shift)
        : "%cl"
    );
}
volatile inline ALWAYS_INLINE void           REG_AX::__rol(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "rol    %%cl, %%ax;"
        :
        : "mi" (shift)
        : "%cl"
    );
}
volatile inline ALWAYS_INLINE void           REG_AX::__ror(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "rorw   %%cl, %%ax;"
        :
        : "mi" (shift)
        : "%cl"
    );
}
volatile inline ALWAYS_INLINE void           REG_AX::__add(const u16_t addend)
{
    asm
    (
        "add     %0, %%ax;"
        :
        : "mi" (addend)
    );
}
volatile inline ALWAYS_INLINE void           REG_AX::__sub(const u16_t subtrahend)
{
    asm
    (
        "sub     %0, %%ax;"
        :
        : "mi" (subtrahend)
    );
}
volatile inline ALWAYS_INLINE void           REG_AX::__inc(void)
{
    asm
    (
        "inc    %%ax;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_AX::__dec(void)
{
    asm
    (
        "dec    %%ax;"
        :
        :
    );
}
#pragma endregion AX

#pragma region AH
volatile inline ALWAYS_INLINE void           REG_AH::__mov(const u8_t val)
{
    asm
    (
        "movb  %0, %%ah;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE const u8_t     REG_AH::__mov(void)
{
    register u8_t __tmp__ asm("%ah");
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_AH::__or(const u8_t val)
{
    asm
    (
        "orb    %0, %%ah;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_AH::__and(const u8_t val)
{
    asm
    (
        "and    %0, %%ah;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_AH::__xor(const u8_t val)
{
    asm
    (
        "xor    %0, %%ah;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_AH::__not(void)
{
    asm
    (
        "not    %%ah;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_AH::__shl(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shl    %%cl, %%ah;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_AH::__shr(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shr    %%cl, %%ah;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_AH::__rol(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "rol    %%cl, %%ah;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_AH::__ror(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "rorb   %%cl, %%ah;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_AH::__add(const u8_t addend)
{
    asm
    (
        "add     %0, %%ah;"
        :
        : "mi" (addend)
    );
}
volatile inline ALWAYS_INLINE void           REG_AH::__sub(const u8_t subtrahend)
{
    asm
    (
        "sub     %0, %%ah;"
        :
        : "mi" (subtrahend)
    );
}
volatile inline ALWAYS_INLINE void           REG_AH::__inc(void)
{
    asm
    (
        "inc    %%ah;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_AH::__dec(void)
{
    asm
    (
        "dec    %%ah;"
        :
        :
    );
}
#pragma endregion AH

#pragma region AL
volatile inline ALWAYS_INLINE void           REG_AL::__mov(const u8_t val)
{
    asm
    (
        "movb  %0, %%al;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE const u8_t     REG_AL::__mov(void)
{
    register u8_t __tmp__ asm("%al");
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_AL::__or(const u8_t val)
{
    asm
    (
        "orb    %0, %%al;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_AL::__and(const u8_t val)
{
    asm
    (
        "and    %0, %%al;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_AL::__xor(const u8_t val)
{
    asm
    (
        "xor    %0, %%al;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_AL::__not(void)
{
    asm
    (
        "not    %%al;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_AL::__shl(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shl    %%cl, %%al;"

        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_AL::__shr(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shr    %%cl, %%al;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_AL::__rol(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "rol    %%cl, %%al;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_AL::__ror(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "rorb   %%cl, %%al;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_AL::__add(const u8_t addend)
{
    asm
    (
        "add     %0, %%al;"
        :
        : "mi" (addend)
    );
}
volatile inline ALWAYS_INLINE void           REG_AL::__sub(const u8_t subtrahend)
{
    asm
    (
        "sub     %0, %%al;"
        :
        : "mi" (subtrahend)
    );
}
volatile inline ALWAYS_INLINE void           REG_AL::__inc(void)
{
    asm
    (
        "inc    %%al;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_AL::__dec(void)
{
    asm
    (
        "dec    %%al;"
        :
        :
    );
}
#pragma endregion AL


#pragma region BX
volatile inline ALWAYS_INLINE void           REG_BX::__mov(const u16_t val)
{
    asm
    (
        "mov   %0, %%bx;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE const u16_t    REG_BX::__mov(void)
{
    register u16_t __tmp__ asm("%bx");
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_BX::__or(const u16_t val)
{
    asm
    (
        "orw    %0, %%bx;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_BX::__and(const u16_t val)
{
    asm
    (
        "and    %0, %%bx;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_BX::__xor(const u16_t val)
{
    asm
    (
        "xor    %0, %%bx;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_BX::__not(void)
{
    asm
    (
        "not    %%bx;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_BX::__shl(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shl    %%cl, %%bx;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_BX::__shr(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shr    %%cl, %%bx;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_BX::__rol(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "rol    %%cl, %%bx;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_BX::__ror(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "rorw   %%cl, %%bx;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_BX::__add(const u16_t addend)
{
    asm
    (
        "add     %0, %%bx;"
        :
        : "mi" (addend)
    );
}
volatile inline ALWAYS_INLINE void           REG_BX::__sub(const u16_t subtrahend)
{
    asm
    (
        "sub     %0, %%bx;"
        :
        : "mi" (subtrahend)
    );
}
volatile inline ALWAYS_INLINE void           REG_BX::__inc(void)
{
    asm
    (
        "inc    %%bx;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_BX::__dec(void)
{
    asm
    (
        "dec    %%bx;"
        :
        :
    );
}
#pragma endregion BX

#pragma region BH
volatile inline ALWAYS_INLINE void           REG_BH::__mov(const u8_t val)
{
    asm
    (
        "movb  %0, %%bh;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE const u8_t     REG_BH::__mov(void)
{
    register u8_t __tmp__ asm("%bh");
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_BH::__or(const u8_t val)
{
    asm
    (
        "orb    %0, %%bh;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_BH::__and(const u8_t val)
{
    asm
    (
        "and    %0, %%bh;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_BH::__xor(const u8_t val)
{
    asm
    (
        "xor    %0, %%bh;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_BH::__not(void)
{
    asm
    (
        "not    %%bh;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_BH::__shl(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shl    %%cl, %%bh;"

        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_BH::__shr(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shr    %%cl, %%bh;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_BH::__rol(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "rol    %%cl, %%bh;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_BH::__ror(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "rorb   %%cl, %%bh;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_BH::__add(const u8_t addend)
{
    asm
    (
        "add     %0, %%bh;"
        :
        : "mi" (addend)
    );
}
volatile inline ALWAYS_INLINE void           REG_BH::__sub(const u8_t subtrahend)
{
    asm
    (
        "sub     %0, %%bh;"
        :
        : "mi" (subtrahend)
    );
}
volatile inline ALWAYS_INLINE void           REG_BH::__inc(void)
{
    asm
    (
        "inc    %%bh;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_BH::__dec(void)
{
    asm
    (
        "dec    %%bh;"
        :
        :
    );
}
#pragma endregion AH

#pragma region BL
volatile inline ALWAYS_INLINE void           REG_BL::__mov(const u8_t val)
{
    asm
    (
        "movb  %0, %%bl;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE const u8_t     REG_BL::__mov(void)
{
    register u8_t __tmp__ asm("%bl");
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_BL::__or(const u8_t val)
{
    asm
    (
        "orb    %0, %%bl;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_BL::__and(const u8_t val)
{
    asm
    (
        "and    %0, %%bl;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_BL::__xor(const u8_t val)
{
    asm
    (
        "xor    %0, %%bl;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_BL::__not(void)
{
    asm
    (
        "not    %%bl;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_BL::__shl(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shl    %%cl, %%bl;"

        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_BL::__shr(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shr    %%cl, %%bl;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_BL::__rol(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "rol    %%cl, %%bl;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_BL::__ror(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "rorb   %%cl, %%bl;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_BL::__add(const u8_t addend)
{
    asm
    (
        "add     %0, %%bl;"
        :
        : "mi" (addend)
    );
}
volatile inline ALWAYS_INLINE void           REG_BL::__sub(const u8_t subtrahend)
{
    asm
    (
        "sub     %0, %%bl;"
        :
        : "mi" (subtrahend)
    );
}
volatile inline ALWAYS_INLINE void           REG_BL::__inc(void)
{
    asm
    (
        "inc    %%bl;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_BL::__dec(void)
{
    asm
    (
        "dec    %%bl;"
        :
        :
    );
}
#pragma endregion BL


#pragma region CX
volatile inline ALWAYS_INLINE void           REG_CX::__mov(const u16_t val)
{
    asm
    (
        "mov   %0, %%cx;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE const u16_t    REG_CX::__mov(void)
{
    register u16_t __tmp__ asm("%cx");
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_CX::__or(const u16_t val)
{
    asm
    (
        "orw    %0, %%cx;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_CX::__and(const u16_t val)
{
    asm
    (
        "and    %0, %%cx;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_CX::__xor(const u16_t val)
{
    asm
    (
        "xor    %0, %%cx;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_CX::__not(void)
{
    asm
    (
        "not    %%cx;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_CX::__shl(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shl    %%cl, %%cx;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_CX::__shr(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shr    %%cl, %%cx;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_CX::__rol(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "rol    %%cl, %%cx;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_CX::__ror(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "rorw   %%cl, %%cx;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_CX::__add(const u16_t addend)
{
    asm
    (
        "add     %0, %%cx;"
        :
        : "mi" (addend)
    );
}
volatile inline ALWAYS_INLINE void           REG_CX::__sub(const u16_t subtrahend)
{
    asm
    (
        "sub     %0, %%cx;"
        :
        : "mi" (subtrahend)
    );
}
volatile inline ALWAYS_INLINE void           REG_CX::__inc(void)
{
    asm
    (
        "inc    %%cx;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_CX::__dec(void)
{
    asm
    (
        "dec    %%cx;"
        :
        :
    );
}
#pragma endregion CX

#pragma region CH
volatile inline ALWAYS_INLINE void           REG_CH::__mov(const u8_t val)
{
    asm
    (
        "movb  %0, %%ch;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE const u8_t     REG_CH::__mov(void)
{
    register u8_t __tmp__ asm("%ch");
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_CH::__or(const u8_t val)
{
    asm
    (
        "orb    %0, %%ch;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_CH::__and(const u8_t val)
{
    asm
    (
        "and    %0, %%ch;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_CH::__xor(const u8_t val)
{
    asm
    (
        "xor    %0, %%ch;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_CH::__not(void)
{
    asm
    (
        "not    %%ch;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_CH::__shl(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shl    %%cl, %%ch;"

        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_CH::__shr(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shr    %%cl, %%ch;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_CH::__rol(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "rol    %%cl, %%ch;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_CH::__ror(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "rorb   %%cl, %%ch;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_CH::__add(const u8_t addend)
{
    asm
    (
        "add     %0, %%ch;"
        :
        : "mi" (addend)
    );
}
volatile inline ALWAYS_INLINE void           REG_CH::__sub(const u8_t subtrahend)
{
    asm
    (
        "sub     %0, %%ch;"
        :
        : "mi" (subtrahend)
    );
}
volatile inline ALWAYS_INLINE void           REG_CH::__inc(void)
{
    asm
    (
        "inc    %%ch;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_CH::__dec(void)
{
    asm
    (
        "dec    %%ch;"
        :
        :
    );
}
#pragma endregion CH

#pragma region CL
volatile inline ALWAYS_INLINE void           REG_CL::__mov(const u8_t val)
{
    asm
    (
        "movb  %0, %%cl;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE const u8_t     REG_CL::__mov(void)
{
    register u8_t __tmp__ asm("%cl");
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_CL::__or(const u8_t val)
{
    asm
    (
        "orb    %0, %%cl;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_CL::__and(const u8_t val)
{
    asm
    (
        "and    %0, %%cl;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_CL::__xor(const u8_t val)
{
    asm
    (
        "xor    %0, %%cl;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_CL::__not(void)
{
    asm
    (
        "not    %%cl;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_CL::__shl(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shl    %%cl, %%cl;"

        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_CL::__shr(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shr    %%cl, %%cl;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_CL::__rol(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "rol    %%cl, %%cl;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_CL::__ror(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "rorb   %%cl, %%cl;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_CL::__add(const u8_t addend)
{
    asm
    (
        "add     %0, %%cl;"
        :
        : "mi" (addend)
    );
}
volatile inline ALWAYS_INLINE void           REG_CL::__sub(const u8_t subtrahend)
{
    asm
    (
        "sub     %0, %%cl;"
        :
        : "mi" (subtrahend)
    );
}
volatile inline ALWAYS_INLINE void           REG_CL::__inc(void)
{
    asm
    (
        "inc    %%cl;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_CL::__dec(void)
{
    asm
    (
        "dec    %%cl;"
        :
        :
    );
}
#pragma endregion CL


#pragma region DX
volatile inline ALWAYS_INLINE void           REG_DX::__mov(const u16_t val)
{
    asm
    (
        "mov   %0, %%dx;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE const u16_t    REG_DX::__mov(void)
{
    register u16_t __tmp__ asm("%dx");
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_DX::__or(const u16_t val)
{
    asm
    (
        "orw    %0, %%dx;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_DX::__and(const u16_t val)
{
    asm
    (
        "and    %0, %%dx;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_DX::__xor(const u16_t val)
{
    asm
    (
        "xor    %0, %%dx;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_DX::__not(void)
{
    asm
    (
        "not    %%dx;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_DX::__shl(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shl    %%cl, %%dx;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_DX::__shr(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shr    %%cl, %%dx;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_DX::__rol(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "rol    %%cl, %%dx;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_DX::__ror(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "rorw   %%cl, %%dx;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_DX::__add(const u16_t addend)
{
    asm
    (
        "add     %0, %%dx;"
        :
        : "mi" (addend)
    );
}
volatile inline ALWAYS_INLINE void           REG_DX::__sub(const u16_t subtrahend)
{
    asm
    (
        "sub     %0, %%dx;"
        :
        : "mi" (subtrahend)
    );
}
volatile inline ALWAYS_INLINE void           REG_DX::__inc(void)
{
    asm
    (
        "inc    %%dx;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_DX::__dec(void)
{
    asm
    (
        "dec    %%dx;"
        :
        :
    );
}
#pragma endregion DX

#pragma region DH
volatile inline ALWAYS_INLINE void           REG_DH::__mov(const u8_t val)
{
    asm
    (
        "movb  %0, %%dh;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE const u8_t     REG_DH::__mov(void)
{
    register u8_t __tmp__ asm("%dh");
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_DH::__or(const u8_t val)
{
    asm
    (
        "orb    %0, %%dh;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_DH::__and(const u8_t val)
{
    asm
    (
        "and    %0, %%dh;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_DH::__xor(const u8_t val)
{
    asm
    (
        "xor    %0, %%dh;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_DH::__not(void)
{
    asm
    (
        "not    %%dh;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_DH::__shl(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shl    %%cl, %%dh;"

        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_DH::__shr(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shr    %%cl, %%dh;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_DH::__rol(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "rol    %%cl, %%dh;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_DH::__ror(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "rorb   %%cl, %%dh;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_DH::__add(const u8_t addend)
{
    asm
    (
        "add     %0, %%dh;"
        :
        : "mi" (addend)
    );
}
volatile inline ALWAYS_INLINE void           REG_DH::__sub(const u8_t subtrahend)
{
    asm
    (
        "sub     %0, %%dh;"
        :
        : "mi" (subtrahend)
    );
}
volatile inline ALWAYS_INLINE void           REG_DH::__inc(void)
{
    asm
    (
        "inc    %%dh;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_DH::__dec(void)
{
    asm
    (
        "dec    %%dh;"
        :
        :
    );
}
#pragma endregion DH

#pragma region DL
volatile inline ALWAYS_INLINE void           REG_DL::__mov(const u8_t val)
{
    asm
    (
        "movb  %0, %%dl;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE const u8_t     REG_DL::__mov(void)
{
    register u8_t __tmp__ asm("%dl");
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_DL::__or(const u8_t val)
{
    asm
    (
        "orb    %0, %%dl;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_DL::__and(const u8_t val)
{
    asm
    (
        "and    %0, %%dl;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_DL::__xor(const u8_t val)
{
    asm
    (
        "xor    %0, %%dl;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_DL::__not(void)
{
    asm
    (
        "not    %%dl;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_DL::__shl(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shl    %%cl, %%dl;"

        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_DL::__shr(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "shr    %%cl, %%dl;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_DL::__rol(const u8_t shift)
{
    asm
    (
        "mov    %0, %%cl;"
        "rol    %%cl, %%dl;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_DL::__ror(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "rorb   %%cl, %%dl;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_DL::__add(const u8_t addend)
{
    asm
    (
        "add     %0, %%dl;"
        :
        : "mi" (addend)
    );
}
volatile inline ALWAYS_INLINE void           REG_DL::__sub(const u8_t subtrahend)
{
    asm
    (
        "sub     %0, %%dl;"
        :
        : "mi" (subtrahend)
    );
}
volatile inline ALWAYS_INLINE void           REG_DL::__inc(void)
{
    asm
    (
        "inc    %%dl;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_DL::__dec(void)
{
    asm
    (
        "dec    %%dl;"
        :
        :
    );
}
#pragma endregion DL



#pragma region SI
volatile inline ALWAYS_INLINE void           REG_SI::__mov(const u16_t val)
{
    asm
    (
        "mov   %0, %%si;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE const u16_t    REG_SI::__mov(void)
{
    register u16_t __tmp__ asm("%si");
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_SI::__or(const u16_t val)
{
    asm
    (
        "orw    %0, %%si;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_SI::__and(const u16_t val)
{
    asm
    (
        "and    %0, %%si;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_SI::__xor(const u16_t val)
{
    asm
    (
        "xor    %0, %%si;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_SI::__not(void)
{
    asm
    (
        "not    %%si;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_SI::__shl(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "shlw   %%cl, %%si;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_SI::__shr(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "shrw   %%cl, %%si;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_SI::__rol(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "rolw   %%cl, %%si;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_SI::__ror(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "rorw   %%cl, %%si;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_SI::__add(const u16_t addend)
{
    asm
    (
        "add     %0, %%si;"
        :
        : "mi" (addend)
    );
}
volatile inline ALWAYS_INLINE void           REG_SI::__sub(const u16_t subtrahend)
{
    asm
    (
        "sub     %0, %%si;"
        :
        : "mi" (subtrahend)
    );
}
volatile inline ALWAYS_INLINE void           REG_SI::__inc(void)
{
    asm
    (
        "inc    %%si;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_SI::__dec(void)
{
    asm
    (
        "dec    %%si;"
        :
        :
    );
}
#pragma endregion SI

#pragma region DI
volatile inline ALWAYS_INLINE void           REG_DI::__mov(const u16_t val)
{
    asm
    (
        "mov   %0, %%di;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE const u16_t    REG_DI::__mov(void)
{
    register u16_t __tmp__ asm("%di");
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_DI::__or(const u16_t val)
{
    asm
    (
        "orw    %0, %%di;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_DI::__and(const u16_t val)
{
    asm
    (
        "and    %0, %%di;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_DI::__xor(const u16_t val)
{
    asm
    (
        "xor    %0, %%di;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_DI::__not(void)
{
    asm
    (
        "not    %%di;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_DI::__shl(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "shlw   %%cl, %%di;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_DI::__shr(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "shrw   %%cl, %%di;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_DI::__rol(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "rolw   %%cl, %%di;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_DI::__ror(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "rorw   %%cl, %%di;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_DI::__add(const u16_t addend)
{
    asm
    (
        "add     %0, %%di;"
        :
        : "mi" (addend)
    );
}
volatile inline ALWAYS_INLINE void           REG_DI::__sub(const u16_t subtrahend)
{
    asm
    (
        "sub     %0, %%di;"
        :
        : "mi" (subtrahend)
    );
}
volatile inline ALWAYS_INLINE void           REG_DI::__inc(void)
{
    asm
    (
        "inc    %%di;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_DI::__dec(void)
{
    asm
    (
        "dec    %%di;"
        :
        :
    );
}
#pragma endregion DI

#pragma region BP
volatile inline ALWAYS_INLINE void           REG_BP::__mov(const u16_t val)
{
    asm
    (
        "mov   %0, %%bp;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE const u16_t    REG_BP::__mov(void)
{
    register u16_t __tmp__ asm("%bp");
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_BP::__or(const u16_t val)
{
    asm
    (
        "orw    %0, %%bp;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_BP::__and(const u16_t val)
{
    asm
    (
        "and    %0, %%bp;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_BP::__xor(const u16_t val)
{
    asm
    (
        "xor    %0, %%bp;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_BP::__not(void)
{
    asm
    (
        "not    %%bp;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_BP::__shl(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "shlw   %%cl, %%bp;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_BP::__shr(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "shrw   %%cl, %%bp;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_BP::__rol(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "rolw   %%cl, %%bp;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_BP::__ror(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "rorw   %%cl, %%bp;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_BP::__add(const u16_t addend)
{
    asm
    (
        "add     %0, %%bp;"
        :
        : "mi" (addend)
    );
}
volatile inline ALWAYS_INLINE void           REG_BP::__sub(const u16_t subtrahend)
{
    asm
    (
        "sub     %0, %%bp;"
        :
        : "mi" (subtrahend)
    );
}
volatile inline ALWAYS_INLINE void           REG_BP::__inc(void)
{
    asm
    (
        "inc    %%bp;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_BP::__dec(void)
{
    asm
    (
        "dec    %%bp;"
        :
        :
    );
}
#pragma endregion BP

#pragma region SP
volatile inline ALWAYS_INLINE void           REG_SP::__mov(const u16_t val)
{
    asm
    (
        "mov   %0, %%sp;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE const u16_t    REG_SP::__mov(void)
{
    register u16_t __tmp__ asm("%sp");
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_SP::__or(const u16_t val)
{
    asm
    (
        "orw    %0, %%sp;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_SP::__and(const u16_t val)
{
    asm
    (
        "and    %0, %%sp;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_SP::__xor(const u16_t val)
{
    asm
    (
        "xor    %0, %%sp;"
        :
        : "mi" (val)
    );
}
volatile inline ALWAYS_INLINE void           REG_SP::__not(void)
{
    asm
    (
        "not    %%sp;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_SP::__shl(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "shlw   %%cl, %%sp;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_SP::__shr(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "shrw   %%cl, %%sp;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_SP::__rol(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "rolw   %%cl, %%sp;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_SP::__ror(const u8_t shift)
{
    asm
    (
        "movb   %0, %%cl;"
        "rorw   %%cl, %%sp;"
        :
        : "mi" (shift)
    );
}
volatile inline ALWAYS_INLINE void           REG_SP::__add(const u16_t addend)
{
    asm
    (
        "add     %0, %%sp;"
        :
        : "mi" (addend)
    );
}
volatile inline ALWAYS_INLINE void           REG_SP::__sub(const u16_t subtrahend)
{
    asm
    (
        "sub     %0, %%sp;"
        :
        : "mi" (subtrahend)
    );
}
volatile inline ALWAYS_INLINE void           REG_SP::__inc(void)
{
    asm
    (
        "inc    %%sp;"
        :
        :
    );
}
volatile inline ALWAYS_INLINE void           REG_SP::__dec(void)
{
    asm
    (
        "dec    %%sp;"
        :
        :
    );
}
#pragma endregion SP

#pragma region DS
volatile inline ALWAYS_INLINE const u16_t    REG_DS::get(void)
{
    u16_t __tmp__;
    asm
    (
        "mov    %%ds, %0;"
        : "=X" (__tmp__)
    );
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_DS::set(const u16_t val)
{
    asm
    (
        "push   %%ax;"
        "mov    %0, %%ax;"
        "mov    %%ds, %%ax;"
        "pop    %%ax;"
        :
        : "mi" (val)
    );
}
#pragma endregion DS

#pragma region ES
volatile inline ALWAYS_INLINE const u16_t    REG_ES::get(void)
{
    u16_t __tmp__;
    asm
    (
        "mov    %%ds, %0;"
        : "=m" (__tmp__)
    );
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_ES::set(const u16_t val)
{
    asm
    (
        "push   %%ax;"
        "mov    %0, %%ax;"
        "mov    %%ds, %%ax;"
        "pop    %%ax;"
        :
        : "mi" (val)
    );
}
#pragma endregion ES

#pragma region REG_FS
volatile inline ALWAYS_INLINE const u16_t    REG_FS::get(void)
{
    u16_t __tmp__;
    asm
    (
        "mov    %%fs, %0;"
        : "=m" (__tmp__)
    );
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_FS::set(const u16_t val)
{
    asm
    (
        "push   %%ax;"
        "mov    %0, %%ax;"
        "mov    %%fs, %%ax;"
        "pop    %%ax;"
        :
        : "mi" (val)
    );
}
#pragma endregion FS

#pragma region GS
volatile inline ALWAYS_INLINE const u16_t    REG_GS::get(void)
{
    u16_t __tmp__;
    asm
    (
        "mov    %%gs, %0;"
        : "=m" (__tmp__)
    );
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_GS::set(const u16_t val)
{
    asm
    (
        "push   %%ax;"
        "mov    %0, %%ax;"
        "mov    %%gs, %%ax;"
        "pop    %%ax;"
        :
        : "mi" (val)
    );
}
#pragma endregion GS

#pragma region SS
volatile inline ALWAYS_INLINE const u16_t    REG_SS::get(void)
{
    u16_t __tmp__;
    asm
    (
        "mov    %%ss, %0;"
        : "=m" (__tmp__)
    );
    return __tmp__;
}
volatile inline ALWAYS_INLINE void           REG_SS::set(const u16_t val)
{
    asm
    (
        "push   %%ax;"
        "mov    %0, %%ax;"
        "mov    %%ss, %%ax;"
        "pop    %%ax;"
        :
        : "mi" (val)
    );
}
#pragma endregion SS












