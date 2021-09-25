#ifndef _HEADER_TEXTPOWERTOOLS_FORMATTING_
#define _HEADER_TEXTPOWERTOOLS_FORMATTING_

#include <string>

#include "constants.hpp"


namespace TextPowertools {
    std::string alignLeft(
        std::string str,
        int maxWidth = TextPowertools::Constants::DEFAULT_MAX_LINE_WIDTH);

    std::string alignCenter(
        std::string str,
        int maxWidth = TextPowertools::Constants::DEFAULT_MAX_LINE_WIDTH);

    std::string alignRight(
        std::string str,
        int maxWidth = TextPowertools::Constants::DEFAULT_MAX_LINE_WIDTH);

    std::string textWrapRaw(
        const std::string &sourceString,
        int maxWidth = TextPowertools::Constants::DEFAULT_MAX_LINE_WIDTH,
        bool allowLeadingSpaces = false);
}

#endif
