#include "elements/Entry.hpp"
#include "elements/Section.hpp"
#include <iostream>

int main() {
    Section now = Section("Now");
    Section future = Section("Future");

    Section cs = Section("CS");
    Section not_cs = Section("NOT CS");

    now.addElement(&cs);
    now.addElement(&not_cs);

    Entry cpp = Entry("C++ (for java devs)");
    Entry kernel = Entry("start linux kernel development");
    Entry rasp = Entry("raspberry pi kernel modules gpio");
    Entry custom_kernel = Entry("compile custom kernel");
    Entry makefiles = Entry("makefiles");
    Entry cyber = Entry("cybersecurity");
    Entry burp = Entry("bupsuite");
    Entry shell_scripts = Entry("continue learning shell scripting");

    cs.addElement(&cpp);
    cs.addElement(&kernel);
    kernel.addEntry(&rasp);
    kernel.addEntry(&custom_kernel);
    cs.addElement(&makefiles);
    cs.addElement(&cyber);
    cyber.addEntry(&burp);
    cs.addElement(&shell_scripts);

    Entry physics = Entry("review physics 2");
    Entry calc = Entry("study calculus 3");

    not_cs.addElement(&physics);
    not_cs.addElement(&calc);

    Entry opengl = Entry("finish learning opengl");
    Entry webdev = Entry("learn webdev");
    Entry javascript = Entry("javascript");
    Entry react = Entry("react");
    Entry gradle = Entry("gradle (minecraft plugin)");

    future.addElement(&opengl);
    future.addElement(&webdev);
    webdev.addEntry(&javascript);
    webdev.addEntry(&react);
    future.addElement(&gradle);

    std::cout << now.render() << future.render() << std::endl;
}
