#include <iostream>
#include <string>

class Console {
 public:
  Console& operator<<(const std::string& str) {
    std::cout << str;
    return *this;
  }

  Console& operator<<(int num) {
    std::cout << num;
    return *this;
  }

  Console& operator<<(double num) {
    std::cout << num;
    return *this;
  }

  Console& operator<<(char c) {
    std::cout << c;
    return *this;
  }

  Console& operator<<(std::ostream& (*pf)(std::ostream&)) {
    std::cout << pf;
    return *this;
  }
} console;
