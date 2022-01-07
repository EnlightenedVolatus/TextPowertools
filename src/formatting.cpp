#include "formatting.hpp"

#include <algorithm>
#include <string>

#include "base.hpp"
#include "shortcuts.hpp"
#include "utils.hpp"


namespace TextPowertools {


std::string 
alignLeftLine(std::string str, str_size lineWidth)
{
    if (lineWidth > str.length())
        str.insert(str.length(), lineWidth - str.length(), ' ');

    return str;
}


std::string 
alignCenterLine(std::string str, str_size lineWidth)
{
    if (lineWidth > str.length())
    {
        str_size paddingAmount {(lineWidth - str.length()) / 2};
        str.insert(0, paddingAmount, ' ');
        str.insert(str.length(), paddingAmount, ' ');
    }

    return str;
}


std::string 
alignRightLine(std::string str, str_size lineWidth)
{
    if (lineWidth > str.length()) str.insert(0, lineWidth - str.length(), ' ');

    return str;
}


void
wrapInsertChar(
    std::string &str, char character,
    str_size &currentLineLength, str_size lineWidth,
    bool allowLeadingSpaces, bool allowTrailingSpaces
) {
    if (currentLineLength == lineWidth || character == '\n')
    {
        str += '\n';
        currentLineLength = 0;

        if (character == '\n') return;
    }

    if (character == ' ')
    {
        if (currentLineLength == 0)
        {
            if (!allowLeadingSpaces) return;
        }
        else if (currentLineLength == lineWidth - 1)
        {
            if (!allowTrailingSpaces)
            {
                str += '\n';
                currentLineLength = 0;

                return;
            }
        }
    }

    str += character;
    currentLineLength++;
}


void
wrapInsertWord(
    std::string &str, const std::string &word,
    str_size &currentLineLength, str_size lineWidth,
    bool allowTrailingSpaces
) {
    if (currentLineLength + word.length() > lineWidth)
    {
        if (str.back() == ' ' && !allowTrailingSpaces) str.pop_back();

        str += '\n' + word;
        currentLineLength = word.length();
    }
    else
    {
        str += word;
        currentLineLength += word.length();
    }
}


std::string 
textWrapChars(
    const std::string &sourceStr, str_size lineWidth,
    bool allowLeadingSpaces, bool allowTrailingSpaces
) {
    std::string wrappedString;

    str_size currentLineLength {0};
    for (char character : sourceStr)
    {
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
    const std::string &sourceStr, str_size lineWidth,
    bool allowLeadingSpaces, bool allowTrailingSpaces
) {
    std::string wrappedString;

    str_size currentLineLength {0};
    for (str_size i {0}; i < sourceStr.length(); i++)
    {
        if (isAlphabetic(sourceStr[i]))
        {
            str_size wordEndPos {getWordEnd(sourceStr, i)};

            wrapInsertWord(
                wrappedString,
                sourceStr.substr(i, wordEndPos - i + 1),
                currentLineLength, lineWidth,
                allowTrailingSpaces
            );

            i = wordEndPos;
        }
        else
        {
            wrapInsertChar(
                wrappedString, sourceStr[i],
                currentLineLength, lineWidth,
                allowLeadingSpaces, allowTrailingSpaces
            );
        }
    }

    return wrappedString;
}


}  // namespace TextPowertools

