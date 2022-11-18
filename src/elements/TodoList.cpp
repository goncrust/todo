#include "elements/TodoList.hpp"

void TodoList::addSection(Section *s) { this->sections.push_back(s); }

std::string TodoList::internalRender(int depth, int entry_depth) {
    std::string result = "";
    for (Section *s : this->sections) {
        result += s->internalRender(depth, entry_depth);
    }
    return result;
}