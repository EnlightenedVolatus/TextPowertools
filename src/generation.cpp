#include <string>

#include "base.hpp"


namespace TextPowertools {
    std::string generateRuler(
            TextPowertools::Config &config, char rulerCharacter) {
        std::string ruler;
        ruler.insert(0, config.maxWidth, rulerCharacter);
        return ruler;
    }
}
