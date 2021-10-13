#include "formatting.hpp"

#include <string>
#include <algorithm>

#include "base.hpp"


namespace TextPowertools {
    using stringSize = std::string::size_type;


    std::string tagString(
            const std::string &tag, const std::string &str,
            char tagOpenChar, char tagCloseChar) {
        return tagOpenChar + tag + tagCloseChar + ' ' + str;
    }


    std::string tagString(
            const std::string &tag, const std::string &str,
            const Config &config) {
        return config.tagOpenChar + tag + config.tagCloseChar + ' ' + str;
    }


    std::string alignLeftLine(std::string str, int lineWidth) {
        if (lineWidth > str.length()) {
            str.insert(str.length(), lineWidth - str.length(), ' ');
        }
        
        return str;
    }


    std::string alignLeftLine(std::string str, const Config &config) {
        if (config.lineWidth > str.length()) {
            str.insert(str.length(), config.lineWidth - str.length(), ' ');
        }

        return str;
    }


    std::string alignCenterLine(std::string str, int lineWidth) {
        if (lineWidth > str.length()) {
            stringSize paddingAmount{ (lineWidth - str.length()) / 2 };
            str.insert(0, paddingAmount, ' ');
            str.insert(str.length(), paddingAmount, ' ');
        }

        return str;
    }


    std::string alignCenterLine(std::string str, const Config &config) {
        if (config.lineWidth > str.length()) {
            stringSize paddingAmount{ (config.lineWidth - str.length()) / 2 };
            str.insert(0, paddingAmount, ' ');
            str.insert(str.length(), paddingAmount, ' ');
        }

        return str;
    }


    std::string alignRightLine(std::string str, int lineWidth) {
        if (lineWidth > str.length()) {
            str.insert(0, lineWidth - str.length(), ' ');
        }

        return str;
    }


    std::string alignRightLine(std::string str, const Config &config) {
        if (config.lineWidth > str.length()) {
            str.insert(0, config.lineWidth - str.length(), ' ');
        }

        return str;
    }


    std::string textWrapRaw(
            const std::string &sourceString, int lineWidth,
            bool allowLeadingSpaces, bool allowTrailingSpaces) {
        std::string wrappedString;

        int currentLineLength{ 0 };
        for (char character : sourceString) {
            if (!allowLeadingSpaces && currentLineLength == 0
                    && character == ' ') {
                continue;
            }

            if (currentLineLength == lineWidth) {
                if (!allowTrailingSpaces && character == ' ') {
                    continue;
                }

                wrappedString += '\n';
                currentLineLength = 0;

                if (character == '\n') {
                    continue;
                }
            }

            wrappedString += character;
            currentLineLength++;
        }
    
        return wrappedString;
    }


    std::string textWrapRaw(
            const std::string &sourceString, const Config &config) {
        std::string wrappedString;
        int currentLineLength{ 0 };

        for (char character : sourceString) {
            if (!config.allowLeadingSpaces && currentLineLength == 0
                    && character == ' ') {
                continue;
            }

            if (currentLineLength == config.lineWidth) {
                if (!config.allowTrailingSpaces && character == ' ') {
                    continue;
                }

                wrappedString += '\n';
                currentLineLength = 0;

                if (character == '\n') {
                    continue;
                }
            }

            wrappedString += character;
            currentLineLength++;
        }
    
        return wrappedString;
    }
}

