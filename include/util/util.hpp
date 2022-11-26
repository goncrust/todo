/*
 * todo (https://github.com/goncrust/todo)
 *
 * Util (header).
 * Useful functions used to select the appropriate ammount of space/symbol
 * of each line.
 * Note: Will likely be replaced by the Renderer(s).
 *
 * Copyright (c) 2022 by goncrust
 * Released under the GPL v3.0
 * https://github.com/goncrust/todo/blob/main/LICENSE
 */

#ifndef __UTIL_HPP__
#define __UTIL_HPP__
#include <iostream>
#include <string>

// TODO: just use this concepts to make the renderer or implement a visitor
// pattern?
std::string getDepthTab(int depth);
std::string getDepthH(int depth);
std::string getDepthSymbol(int depth);

#endif