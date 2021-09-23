#ifndef _HEADER_UTILS_
#define _HEADER_UTILS_

#include <string>


namespace TextPowertools {
    bool isAlpha(char character);
    
    bool isDigit(char character);

    bool isWord(const std::string &sourceString);

    bool isNumber(const std::string &sourceString);
}

#endif
