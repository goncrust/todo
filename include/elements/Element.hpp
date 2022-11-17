#ifndef __ELEMENT_HPP__
#define __ELEMENT_HPP__
#include <iostream>
#include <string>

class Element {
  private:
  public:
    std::string render();
    virtual std::string internal_render(int depth, int entry_depth) = 0;
};

#endif