#include "utils.hpp"

#include <cctype>
#include <string>


namespace TextPowertools {


bool 
isWord(const std::string &sourceString)
{
    for (char character : sourceString) {
        if (!isAlphabetic(character)) {
            return false;
        }
    }

    return true;
}


bool 
isWordExtended(const std::string &sourceString)
{
    for (char character : sourceString) {
        if (!isGraphical(character)) {
            return false;
        }
    }

    return true;
}


bool 
isNumber(const std::string &sourceString)
{
    for (char character : sourceString) {
        if (!isDigit(character)) {
            return false;
        }
    }

    return true;
}


}  // namespace TextPowertools
