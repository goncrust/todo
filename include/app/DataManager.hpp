#ifndef __DATAMANAGER_HPP__
#define __DATAMANAGER_HPP__

#include "app/FileManager.hpp"
#include "elements/TodoList.hpp"

class DataManager {
  private:
    FileManager file_manager;

  public:
    DataManager();

    TodoList importTodoList();
    void saveTodoList(TodoList todo_list);
};

#endif