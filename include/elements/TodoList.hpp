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