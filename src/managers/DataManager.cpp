/*
 * todo (https://github.com/goncrust/todo)
 *
 * DataManager class.
 *
 * Copyright (c) 2022 by goncrust
 * Released under the GPL v3.0
 * https://github.com/goncrust/todo/blob/main/LICENSE
 */

#include "managers/DataManager.hpp"
#include "elements/TodoList.hpp"

DataManager::DataManager() { this->file_manager = FileManager(); }

TodoList DataManager::importTodoList() {
    TodoList todo_list = TodoList();
    std::string content = this->file_manager.readDataFile();

    // TODO: implement

    return todo_list;
}

void DataManager::saveTodoList(TodoList todo_list) {
    std::string result = "";

    // TODO: implement

    this->file_manager.writeDataFile(result);
}