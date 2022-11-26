/*
 * todo (https://github.com/goncrust/todo)
 *
 * Util.
 * Useful functions used to select the appropriate ammount of space/symbol
 * of each line.
 * Note: Will likely be replaced by the Renderer(s).
 *
 * Copyright (c) 2022 by goncrust
 * Released under the GPL v3.0
 * https://github.com/goncrust/todo/blob/main/LICENSE
 */

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