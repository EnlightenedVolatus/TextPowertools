#ifndef _HEADER_TEXTPOWERTOOLS_FORMATTING_
#define _HEADER_TEXTPOWERTOOLS_FORMATTING_

#include <string>

#include "constants.hpp"
#include "base.hpp"


namespace TextPowertools {
    std::string tagString(
        const std::string &tag, const std::string &str, 
        char tagOpenChar = Constants::TAG_OPEN_CHAR,
        char tagCloseChar = Constants::TAG_CLOSE_CHAR);
    std::string tagString(
        const std::string& tag, const std::string &str, const Config &config);


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
        bool allowLeadingSpaces = Constants::ALLOW_LEADING_SPACES,
        bool allowTrailingSpaces = Constants::ALLOW_TRAILING_SPACES);
    std::string textWrapRaw(
        const std::string &sourceString, const Config &config);
}

#endif
