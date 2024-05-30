#include <string>
#include <fstream>
#include <sys/stat.h>

class User {
    std::string _name;
    std::string _login;
    std::string _pass;
public:
    // Конструкторы, методы доступа и другие функции класса User...
    void saveToFile(const std::string& filename);
};
