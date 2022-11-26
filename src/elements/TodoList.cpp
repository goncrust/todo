/*
 * todo (https://github.com/goncrust/todo)
 *
 * TodoList (Element) class (header).
 *
 * Copyright (c) 2022 by goncrust
 * Released under the GPL v3.0
 * https://github.com/goncrust/todo/blob/main/LICENSE
 */

#include "elements/TodoList.hpp"

void TodoList::addSection(Section *s) { this->sections.push_back(s); }

std::string TodoList::internalRender(int depth, int entry_depth) {
    std::string result = "";
    for (Section *s : this->sections) {
        result += s->internalRender(depth, entry_depth);
    }
    return result;
}