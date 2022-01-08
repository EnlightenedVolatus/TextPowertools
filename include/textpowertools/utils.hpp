#ifndef TEXTPOWERTOOLS_UTILS_HPP_
#define TEXTPOWERTOOLS_UTILS_HPP_

#include <string>

#include "textpowertools/aliases.hpp"


namespace TextPowertools {


bool isWord(const std::string &sourceStr);

bool isWordExtended(const std::string &sourceStr);

bool isNumber(const std::string &sourceStr);

str_size getWordEnd(const std::string &sourceStr, str_size startIndex);


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

#endif  // TEXTPOWERTOOLS_UTILS_HPP_
