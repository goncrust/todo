#include "util/util.hpp"

std::string getDepthTab(int depth) {
    std::string result = "";
    for (int i = 0; i < depth; i++) {
        result += "\t";
    }
    return result;
}
