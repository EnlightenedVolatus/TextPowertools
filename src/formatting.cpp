#include "formatting.hpp"

#include <string>
#include <algorithm>


namespace TextPowertools {
    std::string alignLeft(std::string str, int maxWidth) {
        str.insert(0, std::max(0, maxWidth - str.length()), ' ');
        return str;
    }


    std::string alignCenter(std::string str, int maxWidth) {
        int paddingAmount{ std::max(0, (maxWidth - str.length()) / 2) };
        str.insert(0, paddingAmount, ' ');
        str.insert(str.length(), paddingAmount, ' ');
        return str;
    }


    std::string alignRight(std::string str, int maxWidth) {
        str.insert(str.length(), std::max(0, maxWidth - str.length()), ' ');
        return str;
    }


    std::string textWrapRaw(
            const std::string &sourceString, int maxWidth,
            bool allowLeadingSpaces) {
        std::string wrappedString;
        int currentLineLength{ 0 };

        for (char character : sourceString) {
            if (currentLineLength == maxWidth-1) {
                bool notNewline{ character != '\n' };
                if (notNewline) {
                    wrappedString += '\n';
                }
                currentLineLength = 0;
            } else {
                currentLineLength++;
            }

            if (!allowLeadingSpaces && currentLineLength == 0
                && character == ' ') {
                continue;
            }
    
            wrappedString += character;
        }
    
        return wrappedString;
    }
}

