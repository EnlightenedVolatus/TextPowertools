#ifndef _HEADER_TEXTPOWERTOOLS_FORMATTING_
#define _HEADER_TEXTPOWERTOOLS_FORMATTING_

#include <string>

#include "base.hpp"


namespace TextPowertools {
    std::string alignLeft(
        std::string str,
        TextPowertools::Config &config);

    std::string alignCenter(
        std::string str,
        TextPowertools::Config &config);

    std::string alignRight(
        std::string str,
        TextPowertools::Config &config);

    std::string textWrapRaw(
        const std::string &sourceString,
        TextPowertools::Config &config,
        bool allowLeadingSpaces = false);
}

#endif
