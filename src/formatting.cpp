#include "formatting.hpp"

#include <string>
#include <algorithm>


namespace TextPowertools {
    using stringSize = std::string::size_type;


    std::string alignLeft(std::string str, int maxWidth) {
        str.insert(str.length(), std::max(static_cast<stringSize>(0),
            static_cast<stringSize>(maxWidth - str.length())), ' ');
        return str;
    }


    std::string alignCenter(std::string str, int maxWidth) {
        stringSize paddingAmount{
            std::max(static_cast<stringSize>(0),
            (static_cast<stringSize>(maxWidth) - str.length()) / 2) };
        str.insert(0, paddingAmount, ' ');
        str.insert(str.length(), paddingAmount, ' ');
        return str;
    }


    std::string alignRight(std::string str, int maxWidth) {
        str.insert(
            0, std::max(static_cast<stringSize>(0),
            static_cast<stringSize>(maxWidth) - str.length()), ' ');
        return str;
    }


    std::string textWrapRaw(
            const std::string &sourceString, int maxWidth,
            bool allowLeadingSpaces) {
        std::string wrappedString;
        int currentLineLength{ 0 };

        for (char character : sourceString) {
            if (character == '\n') {
                wrappedString += '\n';
                currentLineLength = 0;
                continue;
            }

            if (currentLineLength == 0 && character == ' ') {
                continue;
            }

            if (currentLineLength == maxWidth) {
                if (character == ' ') {
                    continue;
                }

                wrappedString += '\n';
                currentLineLength = 0;
            }

            wrappedString += character;
            currentLineLength++;
        }
    
        return wrappedString;
    }
}

