#include "Message.h"

void Message::saveToFile(const std::string& filename) {
    std::ofstream file(filename, std::ios::out);
    if (file.is_open()) {
        file << _text << "\n" << _sender << "\n" << _receiver << "\n";
        file.close();
    }
    chmod(filename.c_str(), S_IRUSR | S_IWUSR);
}
