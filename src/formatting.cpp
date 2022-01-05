#include "formatting.hpp"

#include <algorithm>
#include <string>

#include "base.hpp"
#include "utils.hpp"


namespace TextPowertools {


using stringSize = std::string::size_type;


std::string 
alignLeftLine(std::string str, int lineWidth)
{
    if (lineWidth > str.length())
        str.insert(str.length(), lineWidth - str.length(), ' ');

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
    if (lineWidth > str.length()) str.insert(0, lineWidth - str.length(), ' ');

    return str;
}


void
wrapInsertChar(
    std::string &str, char character,
    int &currentLineLength, int lineWidth,
    bool allowLeadingSpaces, bool allowTrailingSpaces
) {
    if (character == ' ') {
        if (currentLineLength == 0) {
            if (!allowLeadingSpaces) return;
        } else if (currentLineLength == lineWidth - 1)
            if (!allowTrailingSpaces) return;
    }

    if (currentLineLength == lineWidth) {
        str += '\n';
        currentLineLength = 0;

        if (character == '\n') return;
    }

    str += character;
    currentLineLength++;
}


void
wrapInsertWord(
    std::string &str, const std::string &word,
    int &currentLineLength, int lineWidth
) {
    if (word.length() > lineWidth) {
        str += '\n' + word + '\n';
        currentLineLength = 0;
    } else if (word.length() > lineWidth - currentLineLength + 1) {
        str += '\n' + word;
        currentLineLength = word.length();
    } else {
        str += word;
        currentLineLength += word.length();
    }
}


std::string 
textWrapChars(
    const std::string &sourceStr, int lineWidth,
    bool allowLeadingSpaces, bool allowTrailingSpaces
) {
    std::string wrappedString;

    int currentLineLength {0};
    for (char character : sourceStr) {
        wrapInsertChar(
            wrappedString, character,
            currentLineLength, lineWidth,
            allowLeadingSpaces, allowTrailingSpaces
        );
    }

    return wrappedString;
}


std::string
textWrap(
    const std::string &sourceStr, int lineWidth,
    bool allowLeadingSpaces, bool allowTrailingSpaces
) {
    std::string wrappedString;

    int currentLineLength {0};
    for (stringSize i {0}; i < sourceStr.size(); i++) {
        if (!isAlphabetic(sourceStr[i])) {
            wrapInsertChar(
                wrappedString, sourceStr[i],
                currentLineLength, lineWidth,
                allowLeadingSpaces, allowTrailingSpaces
            );

            continue;
        }

        stringSize wordEndPos {i};
        for (stringSize _i {i+1}; i < sourceStr.size(); _i++) {
            if (!isAlphabetic(sourceStr[i])) break;
            wordEndPos++;
        }

        wrapInsertWord(
            wrappedString,
            sourceStr.substr(i, wordEndPos - i - 1),
            currentLineLength, lineWidth
        );

        i = wordEndPos;
    }

    return wrappedString;
}


}  // namespace TextPowertools

