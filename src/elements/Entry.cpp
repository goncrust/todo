#include "elements/Entry.hpp"
#include "elements/Element.hpp"
#include <string>

Entry::Entry(const char *content) : Element() { this->content = content; }

std::string Entry::internalRender(int depth, int entry_depth) {
    std::string result =
        getDepthTab(depth) + getDepthSymbol(entry_depth) + " " + content + "\n";
    for (Entry *e : this->children) {
        result += e->internalRender(depth + 1, entry_depth + 1);
    }
    return result;
}

void Entry::addEntry(Entry *e) { this->children.push_back(e); }
