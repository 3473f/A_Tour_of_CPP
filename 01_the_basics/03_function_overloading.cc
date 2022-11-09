#include <iostream>

void print(int x) {
  std::cout << "Integer: " << x << "\n";
}

void print(double x) {
  std::cout << "Double: " << x << "\n";
}

void print(std::string x) {
  std::cout << "String: " << x << "\n";
}

int main() {
  // The compiler will choose the most appropriate function
  // to call based on the argument type
  print(42);  // Integer: 42
  print(9.65);  // Double: 9.65
  print("Barcelona");  // String: Barcelona
}