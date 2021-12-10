#ifndef HEADER_TEXTPOWERTOOLS_GENERATION
#define HEADER_TEXTPOWERTOOLS_GENERATION

#include <string>

#include "textpowertools/constants.hpp"
#include "textpowertools/base.hpp"


namespace TextPowertools {


std::string generateRuler(
    int width = Constants::LINE_WIDTH,
    char rulerCharacter = Constants::RULER_CHARACTER);

std::string generateRuler(const Config &config);


}  // namespace TextPowertools

#endif
