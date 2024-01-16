#include <cmath>
#include <iostream>
#include <string>
using namespace std;
// Tìm số lớn nhất trong 3 số
string theLargest(float a, float b, float c)
{
  if (a == b && b == c)
    return "All numbers are equal";
  float max = a;
  if (max < b)
    max = b;
  if (max < c)
    max = c;
  return "The largest: " + to_string(max);
}
