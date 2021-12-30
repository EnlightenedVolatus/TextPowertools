#ifndef HEADER_TEXTPOWERTOOLS_UTILS
#define HEADER_TEXTPOWERTOOLS_UTILS

#include <string>


namespace TextPowertools {


bool isAlphabetic(char character);


bool isDigit(char character);


bool isPunctuation(char character);


bool isAlphanumeric(char character);


bool isGraphical(char character);


bool isWord(const std::string &sourceString);


bool isWordExtended(const std::string &sourceString);


bool isNumber(const std::string &sourceString);


}  // namespace TextPowertools

#endif
