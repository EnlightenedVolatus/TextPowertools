#include "formatting.hpp"

#include <algorithm>
#include <string>

#include "base.hpp"


namespace TextPowertools {


using stringSize = std::string::size_type;


std::string 
tagString(
    const std::string &tag, const std::string &str,
    char tagOpenChar, char tagCloseChar
) {
    return tagOpenChar + tag + tagCloseChar + ' ' + str;
}


std::string 
alignLeftLine(std::string str, int lineWidth)
{
    if (lineWidth > str.length()) {
        str.insert(str.length(), lineWidth - str.length(), ' ');
    }
    
    return str;
}


std::string 
alignCenterLine(std::string str, int lineWidth)
{
    if (lineWidth > str.length()) {
        stringSize paddingAmount {(lineWidth - str.length()) / 2};
        str.insert(0, paddingAmount, ' ');
        str.insert(str.length(), paddingAmount, ' ');
    }

    return str;
}


std::string 
alignRightLine(std::string str, int lineWidth)
{
    if (lineWidth > str.length()) {
        str.insert(0, lineWidth - str.length(), ' ');
    }

    return str;
}


std::string 
textWrapChars(
    const std::string &sourceString, int lineWidth,
    bool allowLeadingSpaces, bool allowTrailingSpaces
) {
    std::string wrappedString;

    int currentLineLength {0};
    for (char character : sourceString) {
        if (character == ' ') {
            if (currentLineLength == 0 && !allowLeadingSpaces) continue;
            else if (
                    currentLineLength == lineWidth - 1
                    && !allowTrailingSpaces) continue;
        }

        if (currentLineLength == lineWidth) {
            wrappedString += '\n';
            currentLineLength = 0;

            if (character == '\n') {
                continue;
            }
        }

        wrappedString += character;
        currentLineLength++;
    }

    return wrappedString;
}


std::string
textWrap(
    const std::string &sourceString, int lineWidth,
    bool allowLeadingSpaces, bool allowTrailingSpaces
) {
}


}  // namespace TextPowertools

