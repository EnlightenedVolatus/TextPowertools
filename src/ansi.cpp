#include "ansi.hpp"

#include <iostream>
#include <string>


namespace TextPowertools {
    namespace Constants {
        inline constexpr char CSI[3]{ '\x1b', '[', '\x0' };
    }


    inline void ansiCursorUp(int amount) {
        std::cout << Constants::CSI << amount << 'A';
    }


    inline void ansiCursorDown(int amount) {
        std::cout << Constants::CSI << amount << 'B';
    }


    inline void ansiCursorForward(int amount) {
        std::cout << Constants::CSI << amount << 'C';
    }


    inline void ansiCursorBack(int amount) {
        std::cout << Constants::CSI << amount << 'D';
    }


    inline void ansiCursorNextLine(int amount) {
        std::cout << Constants::CSI << amount << 'E';
    }


    inline void ansiCursorPreviousLine(int amount) {
        std::cout << Constants::CSI << amount << 'F';
    }


    inline void ansiCursorToColumn(int amount) {
        std::cout << Constants::CSI << amount + 1 << 'G';
    }


    inline void ansiCursorPosition(int row, int column) {
        std::cout << Constants::CSI << row + 1 << ';' << column + 1 << 'H';
    }


    inline void ansiClearScreenDown() {
        std::cout << Constants::CSI << "0J";
    }


    inline void ansiClearScreenUp() {
        std::cout << Constants::CSI << "1J";
    }


    inline void ansiClearScreen() {
        std::cout << Constants::CSI << "2J";
    }


    inline void ansiClearLineForward() {
        std::cout << Constants::CSI << "0K";
    }


    inline void ansiClearLineBack() {
        std::cout << Constants::CSI << "1K";
    }


    inline void ansiClearLine() {
        std::cout << Constants::CSI << "2K";
    }


    inline void ansiScrollUp(int amount) {
        std::cout << Constants::CSI << amount << 'S';
    }


    inline void ansiScrollDown(int amount) {
        std::cout << Constants::CSI << amount << 'T';
    }


    inline void ansiReset() {
        std::cout << Constants::CSI << "0m";
    }


    inline void ansiBold() {
        std::cout << Constants::CSI << "1m";
    }


    inline void ansiItalic() {
        std::cout << Constants::CSI << "3m";
    }


    inline void ansiUnderline() {
        std::cout << Constants::CSI << "4m";
    }


    inline void ansiBlink() {
        std::cout << Constants::CSI << "5m";
    }
}
