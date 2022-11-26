/*
 * todo (https://github.com/goncrust/todo)
 *
 * Element class (header).
 *
 * Copyright (c) 2022 by goncrust
 * Released under the GPL v3.0
 * https://github.com/goncrust/todo/blob/main/LICENSE
 */

#ifndef __ELEMENT_HPP__
#define __ELEMENT_HPP__
#include <iostream>
#include <string>

class Element {
  private:
  public:
    std::string render();
    virtual std::string internalRender(int depth, int entry_depth) = 0;
};

#endif