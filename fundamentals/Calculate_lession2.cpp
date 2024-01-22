#include <cmath>
#include <iostream>
#include <string>

// Tính S(n) = 1^2 + 2^2 + … + n^2

int calculateLesson2(int n)
{
  int i = 0;
  long S = 0;
  while (i <= n)
  {
    S = S + (i * i);
    i++;
  }
  return S;
}
