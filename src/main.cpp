#include "elements/Entry.hpp"
#include <iostream>

int main() {
    Entry entry = Entry("test");
    std::cout << entry.render() << std::endl;
}
