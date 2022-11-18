#ifndef __DATAMANAGER_HPP__
#define __DATAMANAGER_HPP__

#include "elements/TodoList.hpp"
#include "managers/FileManager.hpp"

class DataManager {
  private:
    FileManager file_manager;

  public:
    DataManager();

    TodoList importTodoList();
    void saveTodoList(TodoList todo_list);
};

#endif