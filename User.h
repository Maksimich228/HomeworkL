#include <string>
#include <fstream>
#include <sys/stat.h>

class User {
    std::string _name;
    std::string _login;
    std::string _pass;
public:
    void saveToFile(const std::string& filename);
};
