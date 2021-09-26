#ifndef _HEADER_TEXTPOWERTOOLS_FORMATTING_
#define _HEADER_TEXTPOWERTOOLS_FORMATTING_

#include <string>

#include "constants.hpp"
#include "base.hpp"


namespace TextPowertools {
    std::string alignLeftLine(
        std::string str, int lineWidth = Constants::LINE_WIDTH);
    std::string alignLeftLine(std::string str, const Config &config);


    std::string alignCenterLine(
        std::string str, int lineWidth = Constants::LINE_WIDTH);
    std::string alignCenterLine(std::string str, const Config &config);


    std::string alignRightLine(
        std::string str, int lineWidth = Constants::LINE_WIDTH);
    std::string alignRightLine(std::string str, const Config &config);


    std::string textWrapRaw(
        const std::string &sourceString, int lineWidth = Constants::LINE_WIDTH,
        bool allowLeadingSpaces = Constants::ALLOW_LEADING_SPACES);
    std::string textWrapRaw(
        const std::string &sourceString, const Config &config);
}

#endif
