#include <iostream>

int countEvenNumbers(int array[], int size)
{
  int count = 0;

  for (int i = 0; i < size; i++)
  {
    if (array[i] % 2 == 0)
    {
      count++;
    }
  }
  return count;
}

int main()
{
  int arr[] = {3, 1, 4, 2, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  int evenCount = countEvenNumbers(arr, size);

  std::cout << "So luong so chan trong mang: " << evenCount << std::endl;

  return 0;
}
