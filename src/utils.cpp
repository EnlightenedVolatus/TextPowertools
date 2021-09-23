#include <string>
#include <cctype>


namespace TextPowertools {
    bool isAlpha(char character) {
        return std::isalpha(static_cast<unsigned char>(character));
    }


    bool isDigit(char character) {
        return std::isdigit(static_cast<unsigned char>(character));
    }


    bool isWord(const std::string &sourceString) {
        for (char character : sourceString) {
            if (!TextPowertools::isAlpha(character)) {
                return false;
            }
        }

        return true;
    }


    bool isNumber(const std::string &sourceString) {
        for (char character : sourceString) {
            if (!TextPowertools::isDigit(character)) {
                return false;
            }
        }

        return true;
    }
}
