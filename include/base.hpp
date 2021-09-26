#ifndef _HEADER_TEXTPOWERTOOLS_BASE_
#define _HEADER_TEXTPOWERTOOLS_BASE_

#include "constants.hpp"


namespace TextPowertools {
    struct Config {
        int lineWidth{ TextPowertools::Constants::LINE_WIDTH };
        bool allowLeadingSpaces{
            TextPowertools::Constants::ALLOW_LEADING_SPACES };
        char rulerCharacter{ TextPowertools::Constants::RULER_CHARACTER };
    };
}

#endif
