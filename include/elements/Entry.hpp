#ifndef __ENTRY_HPP__
#define __ENTRY_HPP__
#include "Element.hpp"
#include <iostream>
#include <string>

class Entry : public Element {
  private:
    std::string content = "";

  public:
    Entry(const char *content);
    std::string render();
};

#endif