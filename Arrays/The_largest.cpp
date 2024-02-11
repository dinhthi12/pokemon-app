#include <iostream>

// Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực
#define MAX 100
void import(float array[], int &n)
{
  do
  {
    std::cout << "\nNhap so phan tu: ";
    std::cin >> n;
    if (n <= 0 || n > MAX)
    {
      std::cout << "\nSo phan tu khong hop le";
    }
  } while (n <= 0 || n > MAX);
  for (int i = 0; i < n; i++)
  {
    std::cout << "\nNhap a[" << i << "]: ";
    std::cin >> array[i];
  }
}

void display(float array[], int n)
{
  for (int i = 0; i < n; i++)
  {
    std::cout << "\na[" << i << "] = " << array[i] << std::endl;
  }
}

float theLargest(float array[], int n)
{
  float ln = array[0];
  for (int i = 1; i < n; i++)
  {
    if (array[i] > ln)
    {
      ln = array[i];
    }
  }
  return ln;
}

int main()
{
  int n;
  float a[MAX];

  import(a, n);
  display(a, n);

  float ln = theLargest(a, n);

  std::cout << "\nPhan tu lon nhat trong mang la: " << ln << std::endl;
  return 0;
}
