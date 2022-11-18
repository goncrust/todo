#ifndef __TODO_HPP__
#define __TODO_HPP__

#include "app/DataManager.hpp"
#include "elements/TodoList.hpp"
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