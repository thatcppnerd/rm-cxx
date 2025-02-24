#ifndef __REG_C__
#define __REG_C__

#include "../types.hh"


struct REG_8
{
    virtual volatile void           __mov(const u8_t val) = 0;
    virtual volatile const u8_t     __mov(void) = 0;

    virtual volatile void   __or(const u8_t val) = 0;
    virtual volatile void   __and(const u8_t val) = 0;
    virtual volatile void   __xor(const u8_t val) = 0;
    virtual volatile void   __not(void) = 0;
    virtual volatile void   __shl(const u8_t shift) = 0;
    virtual volatile void   __shr(const u8_t shift) = 0;
    virtual volatile void   __rol(const u8_t shift) = 0;
    virtual volatile void   __ror(const u8_t shift) = 0;
    virtual volatile void   __add(const u8_t addend) = 0;
    virtual volatile void   __sub(const u8_t subtrahend) = 0;
    virtual volatile void   __inc(void) = 0;
    virtual volatile void   __dec(void) = 0;

    volatile const u8_t     get();
    volatile void           set(const u8_t val);

    operator u8_t();
    operator u16_t();

    void   operator=(const u8_t val);
    void   operator|=(const u8_t val);
    void   operator&=(const u8_t val);
    void   operator^=(const u8_t val);
    void   operator~(void);
    void   operator<<=(const u8_t shift);
    void   operator>>=(const u8_t shift);
    void   operator+=(const u8_t addend);
    void   operator-=(const u8_t subtrahend);
    void   operator++(void);
    void   operator--(void);
};

struct REG_16
{
    virtual volatile void           __mov(const u16_t val) = 0;
    virtual volatile const u16_t    __mov(void) = 0;

    virtual volatile void   __or(const u16_t val) = 0;
    virtual volatile void   __and(const u16_t val) = 0;
    virtual volatile void   __xor(const u16_t val) = 0;
    virtual volatile void   __not(void) = 0;
    virtual volatile void   __shl(const u8_t shift) = 0;
    virtual volatile void   __shr(const u8_t shift) = 0;
    virtual volatile void   __rol(const u8_t shift) = 0;
    virtual volatile void   __ror(const u8_t shift) = 0;
    virtual volatile void   __add(const u16_t addend) = 0;
    virtual volatile void   __sub(const u16_t subtrahend) = 0;
    virtual volatile void   __inc(void) = 0;
    virtual volatile void   __dec(void) = 0;

    volatile const u16_t    get(void);
    volatile void           set(const u16_t val);

    operator u8_t();
    operator u16_t();

    void   operator=(const u16_t val);
    void   operator|=(const u16_t val);
    void   operator&=(const u16_t val);
    void   operator^=(const u16_t val);
    void   operator~(void);
    void   operator<<=(const u8_t shift);
    void   operator>>=(const u8_t shift);
    void   operator+=(const u16_t addend);
    void   operator-=(const u16_t subtrahend);
    void   operator++(void);
    void   operator--(void);
};

struct REG_AX : REG_16
{
    volatile void           __mov(const u16_t val) override;
    volatile const u16_t    __mov(void) override;

    volatile void   __or(const u16_t val) override;
    volatile void   __and(const u16_t val) override;
    volatile void   __xor(const u16_t val) override;
    volatile void   __not(void) override;
    volatile void   __shl(const u8_t shift) override;
    volatile void   __shr(const u8_t shift) override;
    volatile void   __rol(const u8_t shift) override;
    volatile void   __ror(const u8_t shift) override;
    volatile void   __add(const u16_t addend) override;
    volatile void   __sub(const u16_t subtrahend) override;
    volatile void   __inc(void) override;
    volatile void   __dec(void) override;

};

struct REG_AH : REG_8
{
    volatile void        __mov(const u8_t val) override;
    volatile const u8_t  __mov(void) override;

    volatile void   __or(const u8_t val) override;
    volatile void   __and(const u8_t val) override;
    volatile void   __xor(const u8_t val) override;
    volatile void   __not(void) override;
    volatile void   __shl(const u8_t shift) override;
    volatile void   __shr(const u8_t shift) override;
    volatile void   __rol(const u8_t shift) override;
    volatile void   __ror(const u8_t shift) override;
    volatile void   __add(const u8_t addend) override;
    volatile void   __sub(const u8_t subtrahend) override;
    volatile void   __inc(void) override;
    volatile void   __dec(void) override;
};

struct REG_AL : REG_8
{
    volatile void   __mov(const u8_t val) override;
    volatile const u8_t   __mov(void) override;

    volatile void   __or(const u8_t val) override;
    volatile void   __and(const u8_t val) override;
    volatile void   __xor(const u8_t val) override;
    volatile void   __not(void) override;
    volatile void   __shl(const u8_t shift) override;
    volatile void   __shr(const u8_t shift) override;
    volatile void   __rol(const u8_t shift) override;
    volatile void   __ror(const u8_t shift) override;
    volatile void   __add(const u8_t addend) override;
    volatile void   __sub(const u8_t subtrahend) override;
    volatile void   __inc(void) override;
    volatile void   __dec(void) override;
};


struct REG_BX : REG_16
{
    volatile void           __mov(const u16_t val) override;
    volatile const u16_t    __mov(void) override;

    volatile void   __or(const u16_t val) override;
    volatile void   __and(const u16_t val) override;
    volatile void   __xor(const u16_t val) override;
    volatile void   __not(void) override;
    volatile void   __shl(const u8_t shift) override;
    volatile void   __shr(const u8_t shift) override;
    volatile void   __rol(const u8_t shift) override;
    volatile void   __ror(const u8_t shift) override;
    volatile void   __add(const u16_t addend) override;
    volatile void   __sub(const u16_t subtrahend) override;
    volatile void   __inc(void) override;
    volatile void   __dec(void) override;
};

struct REG_BH : REG_8
{
    volatile void   __mov(const u8_t val) override;
    volatile const u8_t   __mov(void) override;

    volatile void   __or(const u8_t val) override;
    volatile void   __and(const u8_t val) override;
    volatile void   __xor(const u8_t val) override;
    volatile void   __not(void) override;
    volatile void   __shl(const u8_t shift) override;
    volatile void   __shr(const u8_t shift) override;
    volatile void   __rol(const u8_t shift) override;
    volatile void   __ror(const u8_t shift) override; 
    volatile void   __add(const u8_t addend) override;
    volatile void   __sub(const u8_t subtrahend) override;
    volatile void   __inc(void) override;
    volatile void   __dec(void) override;
};

struct REG_BL : REG_8
{
    volatile void   __mov(const u8_t val) override;
    volatile const u8_t   __mov(void) override;

    volatile void   __or(const u8_t val) override;
    volatile void   __and(const u8_t val) override;
    volatile void   __xor(const u8_t val) override;
    volatile void   __not(void) override;
    volatile void   __shl(const u8_t shift) override;
    volatile void   __shr(const u8_t shift) override;
    volatile void   __rol(const u8_t shift) override;
    volatile void   __ror(const u8_t shift) override; 
    volatile void   __add(const u8_t addend) override;
    volatile void   __sub(const u8_t subtrahend) override;
    volatile void   __inc(void) override;
    volatile void   __dec(void) override;
};


struct REG_CX : REG_16
{
    volatile void   __mov(const u16_t val) override;
    volatile const u16_t  __mov(void) override;

    volatile void   __or(const u16_t val) override;
    volatile void   __and(const u16_t val) override;
    volatile void   __xor(const u16_t val) override;
    volatile void   __not(void) override;
    volatile void   __shl(const u8_t shift) override;
    volatile void   __shr(const u8_t shift) override;
    volatile void   __rol(const u8_t shift) override;
    volatile void   __ror(const u8_t shift) override; 
    volatile void   __add(const u16_t addend) override;
    volatile void   __sub(const u16_t subtrahend) override;
    volatile void   __inc(void) override;
    volatile void   __dec(void) override;
};

struct REG_CH : REG_8
{
    volatile void   __mov(const u8_t val) override;
    volatile const u8_t   __mov(void) override;

    volatile void   __or(const u8_t val) override;
    volatile void   __and(const u8_t val) override;
    volatile void   __xor(const u8_t val) override;
    volatile void   __not(void) override;
    volatile void   __shl(const u8_t shift) override;
    volatile void   __shr(const u8_t shift) override;
    volatile void   __rol(const u8_t shift) override;
    volatile void   __ror(const u8_t shift) override; 
    volatile void   __add(const u8_t addend) override;
    volatile void   __sub(const u8_t subtrahend) override;
    volatile void   __inc(void) override;
    volatile void   __dec(void) override;
};

struct REG_CL : REG_8
{
    volatile void   __mov(const u8_t val) override;
    volatile const u8_t   __mov(void) override;

    volatile void   __or(const u8_t val) override;
    volatile void   __and(const u8_t val) override;
    volatile void   __xor(const u8_t val) override;
    volatile void   __not(void) override;
    volatile void   __shl(const u8_t shift) override;
    volatile void   __shr(const u8_t shift) override;
    volatile void   __rol(const u8_t shift) override;
    volatile void   __ror(const u8_t shift) override; 
    volatile void   __add(const u8_t addend) override;
    volatile void   __sub(const u8_t subtrahend) override;
    volatile void   __inc(void) override;
    volatile void   __dec(void) override;
};


struct REG_DX : REG_16
{
    volatile void   __mov(const u16_t val) override;
    volatile const u16_t  __mov(void) override;

    volatile void   __or(const u16_t val) override;
    volatile void   __and(const u16_t val) override;
    volatile void   __xor(const u16_t val) override;
    volatile void   __not(void) override;
    volatile void   __shl(const u8_t shift) override;
    volatile void   __shr(const u8_t shift) override;
    volatile void   __rol(const u8_t shift) override;
    volatile void   __ror(const u8_t shift) override; 
    volatile void   __add(const u16_t addend) override;
    volatile void   __sub(const u16_t subtrahend) override;
    volatile void   __inc(void) override;
    volatile void   __dec(void) override;
};

struct REG_DH : REG_8
{
    volatile void   __mov(const u8_t val) override;
    volatile const u8_t   __mov(void) override;

    volatile void   __or(const u8_t val) override;
    volatile void   __and(const u8_t val) override;
    volatile void   __xor(const u8_t val) override;
    volatile void   __not(void) override;
    volatile void   __shl(const u8_t shift) override;
    volatile void   __shr(const u8_t shift) override;
    volatile void   __rol(const u8_t shift) override;
    volatile void   __ror(const u8_t shift) override; 
    volatile void   __add(const u8_t addend) override;
    volatile void   __sub(const u8_t subtrahend) override;
    volatile void   __inc(void) override;
    volatile void   __dec(void) override;
};

struct REG_DL : REG_8
{
    volatile void   __mov(const u8_t val) override;
    volatile const u8_t   __mov(void) override;

    volatile void   __or(const u8_t val) override;
    volatile void   __and(const u8_t val) override;
    volatile void   __xor(const u8_t val) override;
    volatile void   __not(void) override;
    volatile void   __shl(const u8_t shift) override;
    volatile void   __shr(const u8_t shift) override;
    volatile void   __rol(const u8_t shift) override;
    volatile void   __ror(const u8_t shift) override; 
    
    volatile void   __add(const u8_t addend) override;
    volatile void   __sub(const u8_t subtrahend) override;
    volatile void   __inc(void) override;
    volatile void   __dec(void);
};

struct REG_SI : REG_16
{
    volatile void   __mov(const u16_t val) override;
    volatile const u16_t  __mov(void) override;

    volatile void   __or(const u16_t val) override;
    volatile void   __and(const u16_t val) override;
    volatile void   __xor(const u16_t val) override;
    volatile void   __not(void) override;
    volatile void   __shl(const u8_t shift) override;
    volatile void   __shr(const u8_t shift) override;
    volatile void   __rol(const u8_t shift) override;
    volatile void   __ror(const u8_t shift) override; 
    volatile void   __add(const u16_t addend) override;
    volatile void   __sub(const u16_t subtrahend) override;
    volatile void   __inc(void) override;
    volatile void   __dec(void) override;
};

struct REG_DI : REG_16
{
    volatile void   __mov(const u16_t val) override;
    volatile const u16_t  __mov(void) override;

    volatile void   __or(const u16_t val) override;
    volatile void   __and(const u16_t val) override;
    volatile void   __xor(const u16_t val) override;
    volatile void   __not(void) override;
    volatile void   __shl(const u8_t shift) override;
    volatile void   __shr(const u8_t shift) override;
    volatile void   __rol(const u8_t shift) override;
    volatile void   __ror(const u8_t shift) override; 
    volatile void   __add(const u16_t addend) override;
    volatile void   __sub(const u16_t subtrahend) override;
    volatile void   __inc(void) override;
    volatile void   __dec(void) override;
};

struct REG_BP : REG_16
{
    volatile void   __mov(const u16_t val) override;
    volatile const u16_t  __mov(void) override;

    volatile void   __or(const u16_t val) override;
    volatile void   __and(const u16_t val) override;
    volatile void   __xor(const u16_t val) override;
    volatile void   __not(void) override;
    volatile void   __shl(const u8_t shift) override;
    volatile void   __shr(const u8_t shift) override;
    volatile void   __rol(const u8_t shift) override;
    volatile void   __ror(const u8_t shift) override; 
    volatile void   __add(const u16_t addend) override;
    volatile void   __sub(const u16_t subtrahend) override;
    volatile void   __inc(void) override;
    volatile void   __dec(void) override;
};

struct REG_SP : REG_16
{
    volatile void   __mov(const u16_t val) override;
    volatile const u16_t  __mov(void) override;

    volatile void   __or(const u16_t val) override;
    volatile void   __and(const u16_t val) override;
    volatile void   __xor(const u16_t val) override;
    volatile void   __not(void) override;
    volatile void   __shl(const u8_t shift) override;
    volatile void   __shr(const u8_t shift) override;
    volatile void   __rol(const u8_t shift) override;
    volatile void   __ror(const u8_t shift) override; 
    volatile void   __add(const u16_t addend) override;
    volatile void   __sub(const u16_t subtrahend) override;
    volatile void   __inc(void) override;
    volatile void   __dec(void) override;
};


struct REG_DS
{
    volatile const u16_t    get(void);
    volatile void           set(const u16_t val);
};

struct REG_ES
{
    volatile const u16_t    get(void);
    volatile void           set(const u16_t val);
};

struct REG_FS
{
    volatile const u16_t    get(void);
    volatile void           set(const u16_t val);
};

struct REG_GS
{
    volatile const u16_t    get(void);
    volatile void           set(const u16_t val);
};

struct REG_SS
{
    volatile const u16_t    get(void);
    volatile void           set(const u16_t val);
};


struct REG_AX AX;
struct REG_AH AH;
struct REG_AL AL;
struct REG_BX BX;
struct REG_BH BH;
struct REG_BL BL;
struct REG_CX CX;
struct REG_CH CH;
struct REG_CL CL;
struct REG_DX DX;
struct REG_DH DH;
struct REG_DL DL;
struct REG_SI SI;
struct REG_DI DI;
struct REG_BP BP;
struct REG_SP SP;

struct REG_DS DS;
struct REG_ES ES;
struct REG_FS FS;
struct REG_GS GS;
struct REG_SS SS;


#endif