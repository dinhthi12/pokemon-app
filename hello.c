#include <stdio.h>

int main()
{
  int i = 2, j = 5;
  {
    int i = 4, j = 5;
     printf("%d%d", i, j);
  }
  printf("%d%d", i, j);
}
