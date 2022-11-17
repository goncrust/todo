#ifndef __ELEMENT_HPP__
#define __ELEMENT_HPP__
#include <iostream>
#include <string>

class Element {
  private:
  public:
    virtual std::string render(int depth) = 0;
};

#endif