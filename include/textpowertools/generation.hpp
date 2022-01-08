#ifndef TEXTPOWERTOOLS_GENERATION_HPP_
#define TEXTPOWERTOOLS_GENERATION_HPP_

#include <string>

#include "textpowertools/base.hpp"


namespace TextPowertools {


std::string generateRuler(
    int width = Constants::LINE_WIDTH,
    char rulerCharacter = Constants::RULER_CHARACTER
);


inline std::string
generateRuler(const Config &config)
{
    return generateRuler(config.lineWidth, config.rulerCharacter);
}


}  // namespace TextPowertools

#endif  // TEXTPOWERTOOLS_GENERATION_HPP_
