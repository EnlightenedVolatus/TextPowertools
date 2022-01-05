#include "utils.hpp"

#include <cctype>
#include <string>


namespace TextPowertools {


bool 
isWord(const std::string &sourceString)
{
    for (char character : sourceString) {
        if (!isAlphabetic(character)) return false;
    }

    return true;
}


bool 
isWordExtended(const std::string &sourceString)
{
    for (char character : sourceString) {
        if (!isGraphical(character)) return false;
    }

    return true;
}


bool 
isNumber(const std::string &sourceString)
{
    for (char character : sourceString) {
        if (!isDigit(character)) return false;
    }

    return true;
}


strSize
getWordEnd(const std::string &sourceString, strSize startIndex)
{
    strSize endIndex {startIndex};
    for (strSize i {startIndex}; i < sourceString.size(); i++) {
        if (!isAlphabetic(sourceString[i])) break;
        endIndex++;
    }

    return endIndex;
}


}  // namespace TextPowertools
