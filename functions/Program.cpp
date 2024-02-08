#include "iostream"

// Viết chương trình nhập n và tính tổng S = 1 + 2 + 3 + … + n

long total(int n)
{
  long s = 0;
  int i = 1;
  while (i <= n)
  {
    s = s + i;
    i++;
  }
  return s;
}

int main()
{
  int n;
  std::cout << "\nNhap n: ";
  std::cin >> n;

  long result = total(n);
  std::cout << "\nTong = " << result;

  return 0;
}
