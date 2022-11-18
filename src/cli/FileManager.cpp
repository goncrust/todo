#include "app/FileManager.hpp"

FileManager::FileManager() { resetDir(); }

FileManager::FileManager(const char *dir) { setDir(dir); }

void FileManager::setDir(std::string dir) {
    this->dir = dir;
    create_dir();
}

void FileManager::resetDir() {
    dir = getpwuid(getuid())->pw_dir;
    dir += "/.todo/";
    create_dir();
}

void FileManager::create_dir() {
    struct stat s;
    if (stat(dir.c_str(), &s) != 0) {
        mkdir(dir.c_str(), 644);
    }
}

std::string FileManager::readConfigFile() {
    // TODO: implement
}

std::string FileManager::readDataFile() {
    // TODO: implement
}

void FileManager::writeDataFile(std::string data) {
    // TODO: implement
}