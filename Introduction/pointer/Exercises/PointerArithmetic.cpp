/**
 * @file PointerArithmetic.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-05-22
 *
 * @copyright Copyright (c) 2024
 *
 * Write a program that uses pointer arithmetic to iterate over an array of integers and print out each element.
 */

#include <iostream>
#include <iterator>

using namespace std;

/**
 * total_size_of_arr = number_of_elements * size_of_each_element
                  = 5 * sizeof(int)
                  = 5 * 4
                  = 20 bytes
 * sizeof(arr) = 20
 * 1 byte = 8 bit
 * int = 4byte | char = 1byte | string usually implemented as a dynamic array
 * The & operator (address of the operator) is placed before the variable name and knows the address of the first memory cell in the memory area of that variable.
 * The * operator (referencing operator or indirection operator) is placed before an address to retrieve the value stored at that address.
 * *&a ~ a
 * <data_type> *<pointer_variable_name>;
 * void *p;
 */

int main(int argc, char **argv){
  int arr[] = {1,2,3,4,5};

  int* beginPtr = begin(arr);
  int* endPtr = end(arr);

  for (int* ptr = beginPtr; ptr != endPtr; ++ptr)
  {
    cout << "Element " << *ptr << endl;
  }

  return 0;
}
