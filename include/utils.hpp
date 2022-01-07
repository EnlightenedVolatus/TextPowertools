#ifndef HEADER_TEXTPOWERTOOLS_UTILS_
#define HEADER_TEXTPOWERTOOLS_UTILS_

#include <string>

#include "shortcuts.hpp"


namespace TextPowertools {


bool isWord(const std::string &sourceStr);

bool isWordExtended(const std::string &sourceStr);

bool isNumber(const std::string &sourceStr);

strSize getWordEnd(const std::string &sourceStr, strSize startIndex);


inline bool 
isAlphabetic(char character)
{
    return std::isalpha(static_cast<unsigned char>(character));
}


inline bool 
isDigit(char character)
{
    return std::isdigit(static_cast<unsigned char>(character));
}


inline bool 
isPunctuation(char character)
{
    return std::ispunct(static_cast<unsigned char>(character));
}


inline bool 
isAlphanumeric(char character)
{
    return std::isalnum(static_cast<unsigned char>(character));
}


inline bool 
isGraphical(char character)
{
    return std::isgraph(static_cast<unsigned char>(character));
}


}  // namespace TextPowertools

#endif
