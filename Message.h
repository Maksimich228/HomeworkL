#include <string>
#include <fstream>
#include <sys/stat.h>

class Message {
    std::string _text;
    std::string _sender;
    std::string _receiver;
public:
    void saveToFile(const std::string& filename);
};
