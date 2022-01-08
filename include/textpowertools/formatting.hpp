#ifndef TEXTPOWERTOOLS_FORMATTING_HPP_
#define TEXTPOWERTOOLS_FORMATTING_HPP_

#include <string>

#include "textpowertools/base.hpp"
#include "textpowertools/aliases.hpp"


namespace TextPowertools {


std::string alignLeftLine(
    std::string str,
    str_size lineWidth = Constants::LINE_WIDTH
);


std::string alignCenterLine(
    std::string str,
    str_size lineWidth = Constants::LINE_WIDTH
);


std::string alignRightLine(
    std::string str,
    str_size lineWidth = Constants::LINE_WIDTH
);


std::string textWrapChars(
    const std::string &sourceStr,
    str_size lineWidth = Constants::LINE_WIDTH,
    bool allowLeadingSpaces = Constants::ALLOW_LEADING_SPACES,
    bool allowTrailingSpaces = Constants::ALLOW_TRAILING_SPACES
);


std::string
textWrap(
    const std::string &sourceStr,
    str_size lineWidth = Constants::LINE_WIDTH,
    bool allowLeadingSpaces = Constants::ALLOW_LEADING_SPACES,
    bool allowTrailingSpaces = Constants::ALLOW_TRAILING_SPACES
);


inline std::string 
tagString(
    const std::string &tag, const std::string &str,
    char tagOpenChar, char tagCloseChar
) {
    return tagOpenChar + tag + tagCloseChar + ' ' + str;
}


inline std::string 
tagString(const std::string &tag, const std::string &str, const Config &config)
{
    return tagString(tag, str, config.tagOpenChar, config.tagCloseChar);
}


inline std::string 
alignLeftLine(const std::string &str, const Config &config)
{
    return alignLeftLine(str, config.lineWidth);
}


inline std::string 
alignCenterLine(const std::string &str, const Config &config)
{
    return alignCenterLine(str, config.lineWidth);
}


inline std::string 
alignRightLine(const std::string &str, const Config &config)
{
    return alignRightLine(str, config.lineWidth);
}


inline std::string 
textWrapChars(const std::string &sourceStr, const Config &config)
{
    return textWrapChars(
        sourceStr, config.lineWidth,
        config.allowLeadingSpaces, config.allowTrailingSpaces
    );
}


inline std::string
textWrap(const std::string &sourceStr, const Config &config)
{
    return textWrap(
        sourceStr, config.lineWidth,
        config.allowLeadingSpaces, config.allowTrailingSpaces
    );
}


}  // namespace TextPowertools

#endif  // TEXTPOWERTOOLS_FORMATTING_HPP_
