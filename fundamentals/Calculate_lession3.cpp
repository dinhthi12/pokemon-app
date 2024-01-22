#include <cmath>
#include <iostream>
#include <string>

//S(n) = 1 + 1/2 + 1/3 + … + 1/n

int calculateLesson3(int n)
{
  int i = 1;
  float S = 0;

  if (n < 1)
  {
    return 0;
  }

  while (i <= n)
  {
    S = S + 1.0 / i;
    i++;
  }
  return S;
}
