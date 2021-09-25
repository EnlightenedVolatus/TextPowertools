#ifndef _HEADER_TEXTPOWERTOOLS_GENERATION_
#define _HEADER_TEXTPOWERTOOLS_GENERATION_

#include <string>


namespace TextPowertools {
    std::string generateRuler(
        int width = TextPowertools::Constants::DEFAULT_MAX_LINE_WIDTH,
        char rulerCharacter = '-');
}

#endif
