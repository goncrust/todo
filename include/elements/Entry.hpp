#ifndef __ENTRY_HPP__
#define __ENTRY_HPP__
#include "Element.hpp"
#include "util/util.hpp"
#include <iostream>
#include <string>
#include <vector>

class Entry : public Element {
  private:
    std::string content = "";
    std::vector<Entry *> children;

  public:
    Entry(const char *content);
    void addEntry(Entry *e);
    std::string internalRender(int depth, int entry_depth);
};

#endif