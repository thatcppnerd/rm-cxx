#ifndef __INT12H_C__
#define __INT12H_C__

#include "int13h.hh"

volatile const u8_t int13h_Reset(const u8_t drvno)
{
    AH.set(0);
    DL.set(drvno);
    call_int(0x13);
    return AH;
}

volatile const u8_t int13h_GetStatus(const u8_t drvno)
{
    AH.set(1);
    DL.set(drvno);
    call_int(0x13);
    return AH;
}

volatile const int13h_ReadSectors_Return_t int13h_ReadSectors(const u8_t count, const u8_t track, const u8_t sector, const u8_t head, const u8_t drvno, const farptr_t buf)
{
    ES.set(buf.seg);
    BX.set(buf.off);
    AH.set(2);
    AL.set(count);
    CH.set(track);
    CL.set(sector);
    DH.set(head);
    DL.set(drvno);
    call_int(0x13);
    return int13h_ReadSectors_Return_t{AH, AL};
}

volatile const int13h_WriteSectors_Return_t int13h_WriteSectors(const u8_t count, const u8_t track, const u8_t sector, const u8_t head, const u8_t drvno, const farptr_t buf)
{
    ES.set(buf.seg);
    BX.set(buf.off);
    AH.set(3);
    AL.set(count);
    CH.set(track);
    CL.set(sector);
    DH.set(head);
    DL.set(drvno);
    call_int(0x13);
    return int13h_WriteSectors_Return_t{AH, AL};
}

volatile const int13h_VerifySectors_Return_t int13h_VerifySectors(const u8_t count, const u8_t track, const u8_t sector, const u8_t head, const u8_t drvno, const farptr_t buf)
{
    ES.set(buf.seg);
    BX.set(buf.off);
    AH.set(4);
    AL.set(count);
    CH.set(track);
    CL.set(sector);
    DH.set(head);
    DL.set(drvno);
    call_int(0x13);
    return int13h_VerifySectors_Return_t{AH, AL};
}

volatile const u8_t int13h_FormatTrack(const u8_t count, const u8_t track, const u8_t sector, const u8_t head, const u8_t drvno, const farptr_t buf)
{
    AH.set(5);
    AL.set(count);
    CH.set(track);
    CL.set(sector);
    DH.set(head);
    DL.set(drvno);
    ES.set(buf.seg);
    BX.set(buf.off);
    call_int(0x13);
    return AH;
}






#endif  