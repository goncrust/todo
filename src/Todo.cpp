#include "Todo.hpp"

Todo::Todo() {
    this->data_manager = DataManager();
    this->todo_list = this->data_manager.importTodoList();
}