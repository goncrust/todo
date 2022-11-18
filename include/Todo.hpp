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