#include <iostream>

void print() {
  int v[] = {0,1,2,3,4,5,6,7,8,9};

  std::cout << "Old for loop syntax:\n";
  for (auto i = 0; i < 10; i++) {
    std::cout << v[i] << ", ";
  }
  std::cout << std::endl;

  std::cout << "New for loop syntax:\n";
  for (auto x : v) {  // for x in v
    std::cout << x << ", ";
  }
  std::cout << std::endl;
}

void increment() {
  int v[] = {0,1,2,3,4,5,6,7,8,9};

  std::cout << "Increment the contents of the array and print it: ";
  for(auto& x : v) {  // doesn't copy v in x, but operates directly on it
    ++x;
  }

  for (auto x : v) {  // for x in v
    std::cout << x << ", ";
  }
  std::cout << std::endl;
}

int main() {
  print();
  increment();
}