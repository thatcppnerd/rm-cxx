#ifndef __TYPES_HH__
#define __TYPES_HH__


typedef unsigned char   u8_t;
typedef unsigned short  u16_t;
typedef unsigned int    u32_t;
typedef unsigned long   u64_t;

typedef signed char   i8_t;
typedef signed short  i16_t;
typedef signed int    i32_t;
typedef signed long   i64_t;

typedef u8_t        m8_t;
typedef u16_t       m16_t;
typedef u32_t       m32_t;
typedef u64_t       m64_t;

typedef u64_t   lba_t;       

typedef struct farptr
{
    u16_t   off;
    u16_t   seg;
} farptr_t;


#define PACKED          __attribute__((packed))
#define NAKED           __attribute__((naked))
#define INTERRUPT       __attribute__((interrupt))
#define ALWAYS_INLINE   __attribute__((__always_inline__))
#define HOT             __attribute__((hot))

#define NEAR            __attribute__((near))
#define FAR             __attribute__((far))
#define HUGE            __attribute__((huge))

#endif