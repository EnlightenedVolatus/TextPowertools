#ifndef _HEADER_TEXTPOWERTOOLS_ANSI_
#define _HEADER_TEXTPOWERTOOLS_ANSI_

namespace TextPowertools {
    inline void ansiCursorUp(int amount = 1);
    inline void ansiCursorDown(int amount = 1);
    inline void ansiCursorForward(int amount = 1);
    inline void ansiCursorBack(int amount = 1);
    inline void ansiCursorNextLine(int amount = 1);
    inline void ansiCursorPreviousLine(int amount = 1);
    inline void ansiCursorToColumn(int amount = 0);
    inline void ansiCursorPosition(int row = 0, int column = 0);
    inline void ansiClearScreenDown();
    inline void ansiClearScreenUp();
    inline void ansiClearScreen();
    inline void ansiClearLineForward();
    inline void ansiClearLineBack();
    inline void ansiClearLine();
    inline void ansiScrollUp(int amount = 1);
    inline void ansiScrollDown(int amount = 1);
    inline void ansiReset();
    inline void ansiBold();
    inline void ansiItalic();
    inline void ansiUnderline();
    inline void ansiBlink();
}

#endif
