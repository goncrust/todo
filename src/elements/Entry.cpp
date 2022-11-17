#include "elements/Entry.hpp"
#include <string>

Entry::Entry(const char *content) { this->content = content; }

std::string Entry::render(int depth) {
    std::string result = getDepthTab(depth) + content + "\n";
    for (Entry *e : this->children) {
        result += e->render(depth + 1);
    }
    return result;
}

void Entry::addEntry(Entry *e) { this->children.push_back(e); }
