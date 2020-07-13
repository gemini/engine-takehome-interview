#include <iostream>
#include <stdio.h>

int main() {
  std::cerr << "====== Match Engine =====" << std::endl;
  std::cerr << "Enter 'exit' to quit" << std::endl;
  std::string line;
  while (getline(std::cin, line) && line != "exit") {
    std::cout << "Received: '" << line << "'" << std::endl;
  }
  return 0;
}
