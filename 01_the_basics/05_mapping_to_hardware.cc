#include <iostream>

int main() {
    int x {1};
    int y {2};
    std::cout << "x is " << x << " and y is " << y << std::endl;

    int* p;
    p = &x;
    int* q = &y;
    std::cout << "p is " << p << " and its content is " << *p << std::endl;
    std::cout << "q is " << q << " and its content is " << *q << std::endl;

    p = q;
    std::cout << "now p is q" << std::endl;
    std::cout << "x is " << x << " and y is " << y << std::endl;
    std::cout << "p is " << p << " and its content is " << *p << std::endl;
    std::cout << "q is " << q << " and its content is " << *q << std::endl;

    // reference accesses the values directly
    // unlike pointers, references must be initialized
    // this binds r to x, but doesn't copy the value to r
    int& r = x;
    int& r2 = y;
    std::cout << "r is " << r << " and r2 is " << r2 << std::endl;

    // now y will become x as we operate on the value directly
    r2 = r;
    std::cout << "now r2 is r" << std::endl;
    std::cout << "x is " << x << " and y is " << y << std::endl;
    std::cout << "r is " << r << " and r2 is " << r2 << std::endl;
    std::cout << "p is " << p << " and its content is " << *p << std::endl;
    std::cout << "q is " << q << " and its content is " << *q << std::endl;
}