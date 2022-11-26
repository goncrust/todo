/*
 * todo (https://github.com/goncrust/todo)
 *
 * Section (Element) class.
 *
 * Copyright (c) 2022 by goncrust
 * Released under the GPL v3.0
 * https://github.com/goncrust/todo/blob/main/LICENSE
 */

#include "elements/Section.hpp"

Section::Section(const char *name) : Element() { this->name = name; }

std::string Section::internalRender(int depth, int entry_depth) {
    std::string result =
        getDepthTab(depth) + getDepthH(depth) + " " + this->name + "\n";
    for (Element *e : this->children) {
        result += e->internalRender(depth + 1, 0);
    }
    return result;
}

void Section::addElement(Element *e) { children.push_back(e); }