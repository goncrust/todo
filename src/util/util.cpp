#include "util/util.hpp"

std::string getDepthTab(int depth) {
    std::string result = "";
    for (int i = 0; i < depth; i++) {
        result += "\t";
    }
    return result;
}

std::string getDepthH(int depth) {
    std::string result = "";
    for (int i = 0; i < depth + 1; i++) {
        result += "#";
    }
    return result;
}

std::string getDepthSymbol(int depth) {
    if (depth < 1)
        return "-";
    else
        return ".";
}