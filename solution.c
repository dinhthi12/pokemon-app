#include<stdio.h>

int main (){
  int n;
  long S = 0;
  int i = 1;

  printf("\nEnter number n: ");
  scanf("%d", &n);

  for (int i = 0; i <= n; i++)
  {
    S += i;
  }

  printf("\nSum 1 + 2 + ... + %d is: %ld \n",n ,S);

}
