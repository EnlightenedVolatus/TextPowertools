#ifndef HEADER_TEXTPOWERTOOLS_ANSI
#define HEADER_TEXTPOWERTOOLS_ANSI

#include <iostream>


namespace TextPowertools {


enum ANSI_COLOR
{
    BLACK = 30,
    RED,
    GREEN,
    YELLOW,
    BLUE,
    MAGENTA,
    CYAN,
    WHITE,

    BRIGHT_BLACK = 90,
    BRIGHT_RED,
    BRIGHT_GREEN,
    BRIGHT_YELLOW,
    BRIGHT_BLUE,
    BRIGHT_MAGENTA,
    BRIGHT_CYAN,
    BRIGHT_WHITE,
};


inline void 
ansiCursorUp(int amount = 1)
{
    std::cout << "\x1b[" << amount << 'A';
}


inline void 
ansiCursorDown(int amount = 1)
{
    std::cout << "\x1b[" << amount << 'B';
}


inline void 
ansiCursorForward(int amount = 1)
{
    std::cout << "\x1b[" << amount << 'C';
}


inline void 
ansiCursorBack(int amount = 1)
{
    std::cout << "\x1b[" << amount << 'D';
}


inline void 
ansiCursorNextLine(int amount = 1)
{
    std::cout << "\x1b[" << amount << 'E';
}


inline void 
ansiCursorPreviousLine(int amount = 1)
{
    std::cout << "\x1b[" << amount << 'F';
}


inline void 
ansiCursorToColumn(int amount = 0)
{
    std::cout << "\x1b[" << amount + 1 << 'G';
}


inline void 
ansiCursorPosition(int row = 0, int column = 0)
{
    std::cout << "\x1b[" << row + 1 << ';' << column + 1 << 'H';
}


inline void 
ansiClearScreenDown()
{
    std::cout << "\x1b[0J";
}


inline void 
ansiClearScreenUp()
{
    std::cout << "\x1b[1J";
}


inline void 
ansiClearScreen()
{
    std::cout << "\x1b[2J";
}


inline void 
ansiClearLineForward()
{
    std::cout << "\x1b[0K";
}


inline void 
ansiClearLineBack()
{
    std::cout << "\x1b[1K";
}


inline void 
ansiClearLine()
{
    std::cout << "\x1b[2K";
}


inline void 
ansiScrollUp(int amount = 1)
{
    std::cout << "\x1b[" << amount << 'S';
}


inline void 
ansiScrollDown(int amount = 1)
{
    std::cout << "\x1b[" << amount << 'T';
}


inline void 
ansiBold()
{
    std::cout << "\x1b[1m";
}


inline void 
ansiDim()
{
    std::cout << "\x1b[2m";
}


inline void 
ansiItalic()
{
    std::cout << "\x1b[3m";
}


inline void 
ansiUnderline()
{
    std::cout << "\x1b[4m";
}


inline void
ansiBlink()
{
    std::cout << "\x1b[5m";
}


inline void 
ansiForegroundColor(int r, int g, int b)
{
    std::cout << "\x1b[38;2;" << r << ';' << g << ';' << b << 'm';
}


inline void 
ansiForegroundColor(ANSI_COLOR color)
{
    std::cout << "\x1b[" << color << 'm';
}


inline void 
ansiBackgroundColor(int r, int g, int b)
{
    std::cout << "\x1b[48;2;" << r << ';' << g << ';' << b << 'm';
}


inline void 
ansiBackgroundColor(ANSI_COLOR color)
{
    std::cout << "\x1b[" << color + 10 << 'm';
}


inline void 
ansiResetForeground()
{
    std::cout << "\x1b[39m";
}


inline void 
ansiResetBackground()
{
    std::cout << "\x1b[49m";
}


inline void 
ansiResetColor()
{
    std::cout << "\x1b[39;49m";
}


inline void 
ansiResetWeight()
{
    std::cout << "\x1b[22m";
}


inline void 
ansiResetStyle()
{
    std::cout << "\x1b[23m";
}


inline void 
ansiReset()
{
    std::cout << "\x1b[0m";
}


}  // namespace TextPowertools

#endif
