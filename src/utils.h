#ifndef APPLE_PIE_UTILS_H
#define APPLE_PIE_UTILS_H

#include <string>

int stringToInt(const std::string& str) {
    int ret = 0;
    for (const auto& ch : str) {
        ret = ret * 10 + ch - '0';
    }
    return ret;
}

bool validateVarName(const std::string& str) {
    for (const auto& ch : str) {
        if (!(ch >= 'a' && ch <= 'z') && !(ch >= 'A' && ch <= 'Z')) {
            return false;
        }
    }
    return true;
}

#endif //APPLE_PIE_UTILS_H