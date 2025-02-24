#ifndef __INT13H_HH__
#define __INT13H_HH__

#include "../types.hh"
#include "../asm/call_int.hh"
#include "../asm/reg.hh"


typedef struct PACKED int13h_SectorWiseFunction_Return
{
    u8_t    ret;
    u8_t    actual_sectors;
} int13h_SectorWiseFunction_Return_t;

typedef int13h_SectorWiseFunction_Return    int13h_ReadSectors_Return_t;
typedef int13h_SectorWiseFunction_Return_t  int13h_WriteSectors_Return_t;
typedef int13h_SectorWiseFunction_Return_t  int13h_VerifySectors_Return_t;


volatile const u8_t int13h_Reset(const u8_t drvno);
volatile const u8_t int13h_GetStatus(const u8_t drvno);
volatile const int13h_ReadSectors_Return_t int13h_ReadSectors(const u8_t count, const u8_t track, const u8_t sector, const u8_t head, const u8_t drvno, const farptr_t buf);
volatile const int13h_WriteSectors_Return_t int13h_WriteSectors(const u8_t count, const u8_t track, const u8_t sector, const u8_t head, const u8_t drvno, const farptr_t buf);
volatile const int13h_VerifySectors_Return_t int13h_VerifySectors(const u8_t count, const u8_t track, const u8_t sector, const u8_t head, const u8_t drvno, const farptr_t buf);
volatile const u8_t int13h_FormatTrack(const u8_t count, const u8_t track, const u8_t sector, const u8_t head, const u8_t drvno, const farptr_t buf);



#endif