/**
 * @file SimplePointer.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-05-22
 *
 * @copyright Copyright (c) 2024
 *
 * Declare a pointer variable to an integer, assign it the address of an integer variable, and then print the value of the variable through the pointer.
 */

#include <iostream>

int main() {
    int var = 10;
    int* ptr = &var;

    std::cout << "Original value of var: " << var << std::endl;

    *ptr = 20;
    std::cout << "Modified value of var: " << var << std::endl;

    return 0;
}
