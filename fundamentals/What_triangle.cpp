#include <cmath>
#include <iostream>
#include <string>
using namespace std;
// Write a program to input 3 sides of a triangle and tell what triangle it is

string check_triangle(float a, float b, float c)
{
  if (a + b <= c || a + c <= b || b + c <= a)
  {
    return "Tam giac khong hop le. Xin kiem tra lai !";
  }
  else
  {
    if ((a == b) && (b == c))
    {
      return "Deu";
    }
    else
    {
      if (a * a + b * b == c * c || a * c + c * c == b * b || b * b + c * c == a * c)
      {
        return "Vuong";
      }
      if (a == b || a == c || b == c)
      {
        return "Can";
      }
      else
      {
        return "Thuong";
      }
    }
  }
}
