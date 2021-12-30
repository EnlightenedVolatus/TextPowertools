#ifndef HEADER_TEXTPOWERTOOLS_BASE
#define HEADER_TEXTPOWERTOOLS_BASE

#include "textpowertools/ansi.hpp"


namespace TextPowertools {
namespace Constants {


inline constexpr int LINE_WIDTH {79};
inline constexpr int ALLOW_LEADING_SPACES {false};
inline constexpr int ALLOW_TRAILING_SPACES {false};
inline constexpr char RULER_CHARACTER {'-'};
inline constexpr char TAG_OPEN_CHAR {'['};
inline constexpr char TAG_CLOSE_CHAR {']'};
inline constexpr ANSI_COLOR COLORED_TAG_FOREGROUND {ANSI_COLOR::BLACK};
inline constexpr ANSI_COLOR COLORED_TAG_BACKGROUND {ANSI_COLOR::WHITE};


}  // namespace Constants


struct Config {
    int lineWidth {Constants::LINE_WIDTH};
    bool allowLeadingSpaces {Constants::ALLOW_LEADING_SPACES};
    bool allowTrailingSpaces {Constants::ALLOW_LEADING_SPACES};
    char rulerCharacter {Constants::RULER_CHARACTER};
    char tagOpenChar {Constants::TAG_OPEN_CHAR};
    char tagCloseChar {Constants::TAG_CLOSE_CHAR};
    ANSI_COLOR coloredTagForeground {Constants::COLORED_TAG_FOREGROUND};
    ANSI_COLOR coloredTagBackground {Constants::COLORED_TAG_BACKGROUND};
};


}  // namespace TextPowertools

#endif
