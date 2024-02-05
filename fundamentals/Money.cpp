
#include <iostream>
/*
Cần có tổng 200000 đồng từ 3 loại giấy bạc 1000 đồng, 2000 đồng, 5000 đồng.
Lập chương trình để tìm ra tất cả các phương án có thể.

Solution:
x * 1000 + y * 2000 + z * 5000 = 200.000
200 * 1000 = 200000 => x thuộc [0, 200]
100 * 2000 = 200000 => y thuộc [0, 100]
40 * 5000 = 200000 => z thuộc [0, 40]
*/

int main()
{
  for (int i = 0; i <= 200; ++i)
  {
    for (int j = 0; j <= 100; ++j)
    {
      for (int k = 0; k <= 40; ++k)
      {
        if (i * 1000 + j * 2000 + k * 5000 == 200000)
        {
          std::cout << "\nCombination: " << i << " to 1000(VND) - " << j << " to 2000(VND) - " << k << " to 5000(VND)";
        }
      }
    }
  }
  return 0;
}
