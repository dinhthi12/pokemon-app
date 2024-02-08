#include <iostream>

bool isPrime(int number)
{
  if (number <= 1)
  {
    return false;
  }
  for (int i = 2; i * i <= number; ++i)
  {
    if (number % i == 0)
    {
      return false;
    }
  }
  return true;
}

void printPrimes(int n)
{
  std::cout << "Cac so nguyen to nho hon " << n << " la: ";
  for (int i = 2; i < n; ++i)
  {
    if (isPrime(i))
    {
      std::cout << i << " ";
    }
  }
  std::cout << std::endl;
}

int main()
{
  int n;
  std::cout << "Nhap n: ";
  std::cin >> n;
  printPrimes(n);
  return 0;
}
