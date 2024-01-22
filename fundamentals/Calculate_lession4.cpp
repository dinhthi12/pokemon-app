#include <cmath>
#include <iostream>
#include <string>

// Tính S(n) =1/2 + 1/4 + … + 1/2n
int calculateLesson4(int n)
{
  int i = 0;
  float S = 0;

  if (i < 1)
  {
    return 0;
  }

  while (i <= n)
  {
    S = S + 1.0 / (2 * i);
    i++;
  }
  return S;
}
