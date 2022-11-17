#include "elements/Section.hpp"

Section::Section(const char *name) { this->name = name; }

std::string Section::render(int depth) {
    std::string result = getDepthTab(depth) + "# " + this->name + "\n";
    for (Element *e : this->children) {
        result += e->render(depth + 1);
    }
    return result;
}

void Section::addElement(Element *e) { children.push_back(e); }