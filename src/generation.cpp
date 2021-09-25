#include <string>

#include "base.hpp"


namespace TextPowertools {
    std::string generateRuler(int width, char rulerCharacter) {
        std::string ruler;
        ruler.insert(0, width, rulerCharacter);
        return ruler;
    }
}
