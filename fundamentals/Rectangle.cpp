#include <iostream>

/*
Viết chương trình in ra hình chữ nhật có kích thước m x n
a.Hình chữ nhật đặc
b.Hình chữ nhật rỗng
*/

int main()
{
  int i, j, m, n;

  std::cout << "\nNhap m: ";
  std::cin >> m;

  std::cout << "\nNhap n: ";
  std::cin >> n;
  // Câu a
  for (i = 0; i <= m; i++)
  {
    for (j = 1; j <= n; ++j)
    {
      std::cout << "*";
    }
    std::cout << "\n";
  }
  // Câu b
  for (i = 1; i <= m; ++i)
  {
    for (j = 1; j <= n; ++j)
    {
      if (i == 1 || i == m || j == 1 || j == n)
      {
        std::cout << "*";
        if (j == n)
          std::cout << "\n";
      }
      else
        std::cout << " ";
    }
  }
  return 0;
}
