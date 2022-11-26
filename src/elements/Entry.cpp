/*
 * todo (https://github.com/goncrust/todo)
 *
 * Entry (Element) class.
 *
 * Copyright (c) 2022 by goncrust
 * Released under the GPL v3.0
 * https://github.com/goncrust/todo/blob/main/LICENSE
 */

#include "elements/Entry.hpp"
#include "elements/Element.hpp"
#include <string>

Entry::Entry(const char *content) : Element() { this->content = content; }

std::string Entry::internalRender(int depth, int entry_depth) {
    std::string result =
        getDepthTab(depth) + getDepthSymbol(entry_depth) + " " + content + "\n";
    for (Entry *e : this->children) {
        result += e->internalRender(depth + 1, entry_depth + 1);
    }
    return result;
}

void Entry::addEntry(Entry *e) { this->children.push_back(e); }
