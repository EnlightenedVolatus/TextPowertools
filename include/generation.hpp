#ifndef HEADER_TEXTPOWERTOOLS_GENERATION_
#define HEADER_TEXTPOWERTOOLS_GENERATION_

#include <string>

#include "base.hpp"


namespace TextPowertools {


std::string generateRuler(
    int width = Constants::LINE_WIDTH,
    char rulerCharacter = Constants::RULER_CHARACTER
);


std::string generateRuler(const Config &config);


}  // namespace TextPowertools

#endif
