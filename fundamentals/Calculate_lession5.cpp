#include <cmath>
#include <iostream>
#include <string>

// Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)

int calculateLesson5(int n)
{
  int i = 0;
  float S = 0;

  if (i < 1)
  {
    return 1;
  }

  while (i <= n)
  {
    S = S + 1.0 / ((2 * i) + 1);
    i++;
  }

  return S;
}
