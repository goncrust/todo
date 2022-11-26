/*
 * todo (https://github.com/goncrust/todo)
 *
 * FileManager class (header).
 *
 * Copyright (c) 2022 by goncrust
 * Released under the GPL v3.0
 * https://github.com/goncrust/todo/blob/main/LICENSE
 */

#ifndef __FILEMANAGER_HPP__
#define __FILEMANAGER_HPP__

#include <fstream>
#include <iostream>
#include <pwd.h>
#include <string>
#include <sys/stat.h>
#include <unistd.h>

class FileManager {
  private:
    std::string dir;

  public:
    FileManager();
    FileManager(const char *dir);

    void setDir(std::string dir);
    std::string getDataFile();
    std::string getConfigFile();

    void resetDir();
    void create_dir();

    std::string readFile(std::string path);
    std::string readDataFile();
    std::string readConfigFile();

    void writeDataFile(std::string data);
};

#endif