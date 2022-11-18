#ifndef __FILEMANAGER_HPP__
#define __FILEMANAGER_HPP__

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
    void resetDir();
    void create_dir();

    std::string readDataFile();
    std::string readConfigFile();

    void writeDataFile(std::string data);
};

#endif