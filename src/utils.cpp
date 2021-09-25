#include <string>
#include <cctype>


namespace TextPowertools {
    bool isAlphabetic(char character) {
        return std::isalpha(static_cast<unsigned char>(character));
    }


    bool isDigit(char character) {
        return std::isdigit(static_cast<unsigned char>(character));
    }


    bool isPunctuation(char character) {
        return std::ispunct(static_cast<unsigned char>(character));
    }


    bool isAlphanumeric(char character) {
        return std::isalnum(static_cast<unsigned char>(character));
    }


    bool isGraphical(char character) {
        return std::isgraph(static_cast<unsigned char>(character));
    }


    bool isWord(const std::string &sourceString) {
        for (char character : sourceString) {
            if (!TextPowertools::isAlphabetic(character)) {
                return false;
            }
        }

        return true;
    }


    bool isExtendedWord(const std::string &sourceString) {
        for (char character : sourceString) {
            if (!TextPowertools::isGraphical(character)) {
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
