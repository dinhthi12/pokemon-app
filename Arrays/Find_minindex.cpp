#include <iostream>

// Viết hàm tìm 1 vị trí mà giá trị tại vị trí đó là giá trị nhỏ nhất trong mảng 1 chiều các số nguyên

int findMinIndex(int array[], int size)
{
  if (size <= 0)
  {
    return -1;
  }

  int minIndex = 0;

  for (int i = 0; i < size; i++)
  {
    if (array[i] < array[minIndex])
    {
      minIndex = i;
    }
  }

  return minIndex;
}
int main()
{
  int arr[] = {3, 1, 4, 2, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  int minIndex = findMinIndex(arr, size);

  if (minIndex != -1)
  {
    std::cout << "Vi tri cua gia tri nho nhat trong mang: " << minIndex << std::endl;
    std::cout << "Gia tri nho nhat trong mang: " << arr[minIndex] << std::endl;
  }
  else
  {
    std::cout << "Mang rong hoac khong hop le!" << std::endl;
  }
  return 0;
}
