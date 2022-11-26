/*
 * todo (https://github.com/goncrust/todo)
 *
 * Todo.
 * Main class. Bridge for communicating between ui and the actual elements.
 *
 * Copyright (c) 2022 by goncrust
 * Released under the GPL v3.0
 * https://github.com/goncrust/todo/blob/main/LICENSE
 */

#include "Todo.hpp"

Todo::Todo() {
    this->data_manager = DataManager();
    this->todo_list = this->data_manager.importTodoList();
}