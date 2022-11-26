/*
 * todo (https://github.com/goncrust/todo)
 *
 * DataManager class (header).
 *
 * Copyright (c) 2022 by goncrust
 * Released under the GPL v3.0
 * https://github.com/goncrust/todo/blob/main/LICENSE
 */

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