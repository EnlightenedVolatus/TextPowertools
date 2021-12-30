#ifndef HEADER_TEXTPOWERTOOLS_BASE
#define HEADER_TEXTPOWERTOOLS_BASE

#include "textpowertools/constants.hpp"


namespace TextPowertools {


struct Config {
    int lineWidth {Constants::LINE_WIDTH};
    bool allowLeadingSpaces {Constants::ALLOW_LEADING_SPACES};
    bool allowTrailingSpaces {Constants::ALLOW_LEADING_SPACES};
    char rulerCharacter {Constants::RULER_CHARACTER};
    char tagOpenChar {Constants::TAG_OPEN_CHAR};
    char tagCloseChar {Constants::TAG_CLOSE_CHAR};
};


}  // namespace TextPowertools

#endif
