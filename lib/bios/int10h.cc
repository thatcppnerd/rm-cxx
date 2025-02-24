#ifndef __INT10H_C__
#define __INT10H_C__

#include "int10h.hh"

volatile const u8_t int10h_SetVideoMode(const u8_t mode)
{
    AX.set(1);
    call_int(0x10);
    return AL.__mov();
}

volatile void int10h_SetCursorShape(const u8_t start, const u8_t end)
{
    AH.__mov(1);
    CH.__mov(start);
    CL.__mov(end);
    call_int(0x10);
}

volatile void int10h_SetCursorPos(const u8_t row, const u8_t column, const u8_t pageno)
{
    AH.__mov(2);
    BH.__mov(pageno);
    DL.__mov(column);
    DH.__mov(row);
    call_int(0x10);
}

volatile const  int10h_GetCursorPosAndShape_Return_t int10h_GetCursorPosAndShape(const u8_t pageno)
{
    AH.set(3);
    BH.set(pageno);
    call_int(0x10);
    return int10h_GetCursorPosAndShape_Return_t{CH, CL, DH, DL};
};

volatile const int10h_GetLightPenPos_Return_t int10h_GetLightPenPos(void)
{
    AH.set(4);
    call_int(0x10);
    return int10h_GetLightPenPos_Return_t{AH, BX, CH, CX, DH, DL};
}

volatile void int10h_SelectActiveDisplayPage(const u8_t pageno)
{
    AH.set(5);
    AL.set(pageno);
    call_int(0x10);
}

volatile void int10h_ScrollUpWindow(const u8_t lines, const u8_t color, const u8_t top_row, const u8_t left_column, const u8_t bottom_row, const u8_t right_column)
{
    AH.set(6);
    AL.set(lines);
    BH.set(color);
    CH.set(top_row);
    CL.set(left_column);
    DH.set(bottom_row);
    DL.set(right_column);
    call_int(0x10);
}

volatile void int10h_ScrollDownWindow(const u8_t lines, const u8_t color, const u8_t top_row, const u8_t left_column, const u8_t bottom_row, const u8_t right_column)
{
    AH.set(7);
    AL.set(lines);
    BH.set(color);
    CH.set(top_row);
    CL.set(left_column);
    DH.set(bottom_row);
    DL.set(right_column);
    call_int(0x10);
}

volatile const int10h_GetCellAtCursor_Return_t int10h_GetCellAtCursor(const u8_t pageno)
{
    AH.set(8);
    BH.set(pageno);
    call_int(0x10);
    return int10h_GetCellAtCursor_Return_t{AH, AL};
}

volatile void int10h_SetCellAtCursor(const u8_t chr, const u8_t pageno, const u8_t color, const u8_t times)
{
    AH.set(9);
    AL.set(chr);
    BH.set(pageno);
    BL.set(color);
    CX.set(times);
    call_int(0x10);
}

volatile void int10h_SetCharAtCursor(const u8_t chr, const u8_t pageno, const u8_t times)
{
    AH.set(10);
    AL.set(chr);
    BH.set(pageno);
    CX.set(times);
    call_int(0x10);
}

volatile void int10h_SetBGColor(const u8_t color)
{
    AH.set(11);
    BH.set(0);
    BL.set(color);
    call_int(0x10);
}

volatile void int10h_SetPalette(const u8_t ID)
{
    AH.set(11);
    BH.set(1);
    BL.set(ID);
    call_int(0x10);
}

volatile void int10h_SetGraphicsPixel(const u8_t color, const u8_t pageno, const u16_t x, const u16_t y)
{
    AH.set(12);
    AL.set(color);
    BH.set(pageno);
    CX.set(x);
    DX.set(y);
    call_int(0x10);
}

volatile const u8_t int10h_GetGraphicsPixel(const u8_t pageno, const u16_t x, const u16_t y)
{
    AH.set(13);
    BH.set(pageno);
    CX.set(x);
    DX.set(y);
    call_int(0x10);
    return AL;
}

volatile void int10h_TTYOutput(const u8_t chr, const u8_t pageno, const u8_t color)
{
    AH.set(14);
    AL.set(chr);
    BH.set(pageno);
    BL.set(color);
    call_int(0x10);
}

volatile const int10h_GetVideoMode_Return_t int10h_GetVideoMode(void)
{
    AH.set(15);
    call_int(0x10);
    return int10h_GetVideoMode_Return_t{AL, AH, BH};
}



#endif