#ifndef _HEADER_FORMATTING_
#define _HEADER_FORMATTING_

#include <string>


namespace TextPowertools {
    namespace Constants {
        inline constexpr int DEFAULT_MAX_LINE_WIDTH = 79;
    }
    
    
    std::string alignLeft(
        std::string str,
        int maxWidth = Constants::DEFAULT_MAX_LINE_WIDTH);

    std::string alignCenter(
        std::string str,
        int maxWidth = Constants::DEFAULT_MAX_LINE_WIDTH);

    std::string alignRight(
        std::string str,
        int maxWidth = Constants::DEFAULT_MAX_LINE_WIDTH);

    std::string textWrapRaw(
        const std::string &sourceString,
        int maxWidth = Constants::DEFAULT_MAX_LINE_WIDTH,
        bool allowLeadingSpaces = false);
}

#endif
