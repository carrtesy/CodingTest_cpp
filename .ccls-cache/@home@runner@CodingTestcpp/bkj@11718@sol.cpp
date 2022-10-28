#include <cstdio>
#include <iostream>
using namespace std;
int main(void) {
  string line;
  while (std::getline(std::cin, line)) {
    std::cout << line << std::endl;
  }
}