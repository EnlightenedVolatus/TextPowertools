#include "formatting.hpp"

#include <string>


namespace TextPowertools {
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

