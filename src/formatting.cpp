#include "formatting.hpp"

#include <string>


std::string textWrapRaw(
        const std::string &sourceString,
        int maxWidth)
{
    std::string wrappedString;
    int currentLineLength{ 0 };
    for (char character : sourceString) {
        if (currentLineLength == maxWidth) {
            bool notNewline{ character != '\n' };
            if (notNewline) {
                wrappedString += '\n';
            }
            currentLineLength = static_cast<int>(notNewline);
        } else {
            currentLineLength++;
        }

        wrappedString += character;
    }

    return wrappedString;
}

