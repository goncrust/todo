/*
 * todo (https://github.com/goncrust/todo)
 *
 * Todo (header).
 * Main class. Bridge for communicating between ui and the actual elements.
 *
 * Copyright (c) 2022 by goncrust
 * Released under the GPL v3.0
 * https://github.com/goncrust/todo/blob/main/LICENSE
 */

#ifndef __TODO_HPP__
#define __TODO_HPP__

#include "elements/TodoList.hpp"
#include "managers/DataManager.hpp"
#include <iostream>
#include <vector>

class Todo {
  private:
    DataManager data_manager;
    TodoList todo_list;

  public:
    Todo();
};

#endif