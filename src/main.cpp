// src/main.cpp

#include <iostream>
#include "DSA/my_struct.hpp"

int main() {
    MyStruct s;
    s.data = 42;

    std::cout << "Data: " << s.data << std::endl;

    return 0;
}
