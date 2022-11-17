#include "elements/Entry.hpp"

Entry::Entry(const char *content) { this->content = content; }

std::string Entry::render() { return content; }
