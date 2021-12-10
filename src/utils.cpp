#include "textpowertools/utils.hpp"

#include <string>
#include <cctype>


namespace TextPowertools {


bool 
isAlphabetic(char character)
{
    return std::isalpha(static_cast<unsigned char>(character));
}


bool 
isDigit(char character)
{
    return std::isdigit(static_cast<unsigned char>(character));
}


bool 
isPunctuation(char character)
{
    return std::ispunct(static_cast<unsigned char>(character));
}


bool 
isAlphanumeric(char character)
{
    return std::isalnum(static_cast<unsigned char>(character));
}


bool 
isGraphical(char character)
{
    return std::isgraph(static_cast<unsigned char>(character));
}


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
