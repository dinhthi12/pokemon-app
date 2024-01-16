#include <cmath>
#include <iostream>
#include <string>
// Tính S(n) = 1 + 2 + 3 + … + n
int calculateLesson1(int n)
{
  int i = 1;
  long S = 0;
  while (i <= n)
  {
    S = S + i;
    i++;
  }
  return S;
}
