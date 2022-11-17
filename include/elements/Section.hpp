#ifndef __SECTION_HPP__
#define __SECTION_HPP__
#include "elements/Element.hpp"
#include "util/util.hpp"
#include <iostream>
#include <string>
#include <vector>

class Section : public Element {
  private:
    std::vector<Element *> children;
    std::string name;

  public:
    Section(const char *name);
    std::string render(int depth);
    void addElement(Element *e);
};

#endif