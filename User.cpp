#include "User.h"

void User::saveToFile(const std::string& filename) {
    std::ofstream file(filename, std::ios::out);
    if (file.is_open()) {
        file << _name << "\n" << _login << "\n" << _pass << "\n";
        file.close();
    }
    chmod(filename.c_str(), S_IRUSR | S_IWUSR);
}
