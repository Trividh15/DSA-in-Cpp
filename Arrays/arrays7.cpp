#include <iostream>

int* move_zeroes(int arr[], int n)
{
  int temp[100];
  int num_of_nonzero = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] != 0) {
      temp[num_of_nonzero++] = arr[i];
    }
  }

  for (int i = 0; i < num_of_nonzero; i++) {
    arr[i] = temp[i];
  }

  for (int i = num_of_nonzero; i < n; i++) {
    arr[i] = 0;
  }

  return arr;
}

int main() {
  int arr[] = {1, 2, 0, 3, 5, 2, 0, 0, 5, 3, 8, 0, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  int* shifted_arr = move_zeroes(arr, n);
  std::cout << "The array after zeroes are shifted to the end will be: ";
  for (int i = 0; i < n; i++) {
    std::cout << shifted_arr[i] << " ";
  }
  std::cout << std::endl;
}
