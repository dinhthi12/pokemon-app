/*
*
* Basic explanation:
* A pointer is a variable that stores the memory address of another variable.
* Pointers are used for various purposes, including dynamic memory allocation, arrays, and functions.
*
*/

#include <iostream>

int main(){
  int var = 42;
  int* ptr = &var;

 // Output the value of var
  std::cout << "Value of var: " << var << std::endl;
   // Output the address of var
  std::cout << "Address of var: " << &var << std::endl;
  // Output the address of ptr
  std::cout << "Address of ptr: " << &ptr << std::endl;
  // Output the address stored in ptr
  std::cout << "Value stored in ptr: " << ptr << std::endl;
  // Output the value pointed to by ptr
  std::cout << "Value pointed to by ptr: " << *ptr << std::endl;

  *ptr = 50;

  //Output the new value of var
  std::cout << "New value of var: " << var << std::endl;

  return 0;
}
