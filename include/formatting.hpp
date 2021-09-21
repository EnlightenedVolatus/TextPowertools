#ifndef HEADER_FORMATTING
#define HEADER_FORMATTING

#include <string>


namespace TextPowertools {
    namespace Constants {
        inline constexpr int DEFAULT_MAX_LINE_WIDTH = 79;
    }
    
    
    std::string textWrapRaw(
        const std::string &sourceString,
        int maxWidth = TextPowertools::Constants::DEFAULT_MAX_LINE_WIDTH);
}

#endif
