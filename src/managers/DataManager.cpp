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