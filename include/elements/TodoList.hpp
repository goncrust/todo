/*
 * todo (https://github.com/goncrust/todo)
 *
 * TodoList (Element) class (header).
 *
 * Copyright (c) 2022 by goncrust
 * Released under the GPL v3.0
 * https://github.com/goncrust/todo/blob/main/LICENSE
 */

#ifndef __TODOLIST_HPP__
#define __TODOLIST_HPP__

#include "elements/Element.hpp"
#include "elements/Section.hpp"
#include <iostream>
#include <vector>

class TodoList : public Element {
  private:
    std::vector<Section *> sections;

  public:
    void addSection(Section *s);
    std::string internalRender(int depth, int entry_depth);
};

#endif