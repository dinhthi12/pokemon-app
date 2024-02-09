#include <iostream>
#include <cmath>

/*
    sqrt(4) = 2.00000 => ép về nguyên = 2 => vì 2.000  == 2 (true) => là số chính phương
    sqrt(5) = 2.23234 => ép về nguyên = 2 => vì 2.4324 != 2 (false) => không là số chính phương
*/
bool checkSquareNumber(int n)
{
  if (n < 0)
    return false; // Số âm không phải là số chính phương
  return sqrt(n) == (int)sqrt(n);
}

void display(int n)
{
  for (int i = 1; i <= n; i++)
  {
    if (checkSquareNumber(i) == true)
      std::cout << i << " ";
  }
}

int main()
{
  int n;
  std::cout << "Nhap n: ";
  std::cin >> n;

  display(n);

  return 0;
}
