#ifndef _HEADER_TEXTPOWERTOOLS_GENERATION_
#define _HEADER_TEXTPOWERTOOLS_GENERATION_

#include <string>

#include "base.hpp"


namespace TextPowertools {
    std::string generateRuler(
        TextPowertools::Config &config, char rulerCharacter = '-');
}

#endif
