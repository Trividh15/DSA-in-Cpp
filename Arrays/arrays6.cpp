// Write a Program to rotate an array by x elements

#include <iostream>

int *rotate_by_x(int arr[], int n, int x, int temp[])
{
  x%=n;

  if(x==0)
  {
    return arr;
  }


  for(int i = 0; i<x; i++)
  {
   temp[i] = arr[i];
  }


  for (int i = x; i < n; i++)
  {
    arr[i - x] = arr[i];
  }


  for (int j = n - x; j < n; j++)
  {
    arr[j] = temp[j - (n - x)];
  }

  // The given below is an alternative method for appending the elements from the temp array to the end of the arr array. We are preffering the above method because it saves us from 1 unit time complexity of incrementing j by j++ and also, because it is more mathematically inclined.

  //  int j = 0;
  //  for(int k = n-x; k<n; k++)
  //  {
  //   arr[k] = temp[j];
  //   j++;
  //  }

  return arr;
}

int main()
{
  int arr[] = {6, 2, 3, 7, 1, 7, 3, 5, 8}, x;
  int n = sizeof(arr) / sizeof(arr[0]);

  std::cout << "Enter the number of places you want to rotate the array by: ";
  std::cin >> x;
  

  int temp[x];

  int *rotated_arr = rotate_by_x(arr, n, x, temp);
  for (int i = 0; i < n; i++)
  {
    std::cout << rotated_arr[i]<<"  ";
  }
  std::cout << std::endl;
}

//If the value of x comes out to be greater than or equal to the size of the array then remember that if the size of the array is n, then the array after n rotations will be the same array as before. Also, if the size of the array is n and the user asks to rotate the array by n+3 places, then you just have to rotate the array by 3 places, i.e. x%n , now assign this value to some variable and use it on place of x in the above program!