#include "managers/FileManager.hpp"
#include <fstream>
#include <string>

FileManager::FileManager() { resetDir(); }

FileManager::FileManager(const char *dir) { setDir(dir); }

void FileManager::setDir(std::string dir) {
    this->dir = dir;
    create_dir();
}

std::string FileManager::getDataFile() { return this->dir + "/data"; }

std::string FileManager::getConfigFile() { return this->dir + "/config"; }

void FileManager::resetDir() {
    dir = getpwuid(getuid())->pw_dir;
    dir += "/.todo";
    create_dir();
}

void FileManager::create_dir() {
    struct stat s;
    if (stat(dir.c_str(), &s) != 0) {
        mkdir(dir.c_str(), 644);
    }
}

std::string FileManager::readFile(std::string path) {
    std::ifstream file = std::ifstream(path);

    file.seekg(0, std::ios_base::end);
    int end = file.tellg();
    // initialize string memory
    std::string result = std::string(end, ' ');

    file.seekg(0);
    file.read(&result[0], end);

    return result;
}

std::string FileManager::readConfigFile() { return readFile(getConfigFile()); }

std::string FileManager::readDataFile() { return readFile(getDataFile()); }

void FileManager::writeDataFile(std::string data) {
    std::ofstream file = std::ofstream(getDataFile());
    file << data;
    file.close();
}