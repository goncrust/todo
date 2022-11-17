#ifndef __ELEMENT_HPP__
#define __ELEMENT_HPP__
#include <iostream>
#include <string>

class Element {
  public:
  private:
    virtual std::string render() = 0;
};

#endif