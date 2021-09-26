#ifndef _HEADER_TEXTPOWERTOOLS_GENERATION_
#define _HEADER_TEXTPOWERTOOLS_GENERATION_

#include <string>

#include "constants.hpp"
#include "base.hpp"


namespace TextPowertools {
    std::string generateRuler(
        int width = Constants::LINE_WIDTH,
        char rulerCharacter = Constants::RULER_CHARACTER);
    std::string generateRuler(const Config &config);
}

#endif
