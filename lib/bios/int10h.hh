#ifndef __INT10H_HH__
#define __INT10H_HH__

#include "../types.hh"
#include "../asm/call_int.hh"
#include "../asm/reg.hh"

typedef struct PACKED int10h_GetCursorPosAndShape_Return
{
    u8_t    start;
    u8_t    end;
    u8_t    row;
    u8_t    column;
} int10h_GetCursorPosAndShape_Return_t;

typedef struct PACKED int10h_GetLightPenPos_Return
{
    u8_t    status;
    u16_t   pixel_x;
    u8_t    pixel_y;
    u16_t   pixel_line;
    u8_t    char_x;
    u8_t    char_y;
} int10h_GetLightPenPos_Return_t;

typedef struct PACKED  int10h_GetCellAtCursor_Return
{
    u8_t color;
    u8_t chr;
} int10h_GetCellAtCursor_Return_t;

typedef struct PACKED int10h_GetVideoMode_Return
{
    u8_t    mode;
    u8_t    columns;
    u8_t    pageno;
} int10h_GetVideoMode_Return_t;


volatile const u8_t                                 int10h_SetVideoMode(const u8_t mode);
volatile void                                       int10h_SetCursorShape(const u8_t start, const u8_t end);
volatile void                                       int10h_SetCursorPos(const u8_t row, const u8_t column, const u8_t pageno);
volatile const int10h_GetCursorPosAndShape_Return_t int10h_GetCursorPosAndShape(const u8_t pageno);
volatile const int10h_GetLightPenPos_Return_t       int10h_GetLightPenPos(void);
volatile void                                       int10h_SelectActiveDisplayPage(const u8_t pageno);
volatile void                                       int10h_ScrollUpWindow(const u8_t lines, const u8_t color, const u8_t top_row, const u8_t left_column, const u8_t bottom_row, const u8_t right_column);
volatile void                                       int10h_ScrollDownWindow(const u8_t lines, const u8_t color, const u8_t top_row, const u8_t left_column, const u8_t bottom_row, const u8_t right_column);
volatile const int10h_GetCellAtCursor_Return_t      int10h_GetCellAtCursor(const u8_t pageno);
volatile void                                       int10h_SetCellAtCursor(const u8_t chr, const u8_t pageno, const u8_t color, const u8_t times);
volatile void                                       int10h_SetCharAtCursor(const u8_t chr, const u8_t pageno, const u8_t times);
volatile void                                       int10h_SetBGColor(const u8_t color);
volatile void                                       int10h_SetPalette(const u8_t ID);
volatile void                                       int10h_SetGraphicsPixel(const u8_t color, const u8_t pageno, const u16_t x, const u16_t y);
volatile const u8_t                                 int10h_GetGraphicsPixel(const u8_t pageno, const u16_t x, const u16_t y);
volatile void                                       int10h_TTYOutput(const u8_t chr, const u8_t pageno, const u8_t color);
volatile const int10h_GetVideoMode_Return_t         int10h_GetVideoMode(void);

#endif