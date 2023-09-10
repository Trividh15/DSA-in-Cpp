// Write a Progam to rotate an array by 1 element

#include <iostream>

int *rotate(int arr[], int n, int temp)
{
  for (int i = 1; i < n; i++)
  {
    arr[i - 1] = arr[i];
  }
  arr[n - 1] = temp;
  return arr;
}

int main()
{
  int arr[] = {1, 2, 5, 8, 3, 6, 7};
  int temp = arr[0], n = sizeof(arr) / sizeof(arr[0]);
  int *rotated_array = rotate(arr, n, temp);
  for (int j = 0; j < n; j++)
  {
    std::cout << rotated_array[j] << "  ";
  }
  std::cout << std::endl;

  return 0;
}
-