//Write a Program to move all the zeroes of the array to the end of it

// Approach1: Brute Force approach

#include <iostream>

int* move_zeroes(int arr[], int n)
{
  int temp[100];
  int num_of_nonzero = 0;
  

  //This for loop is appending all the non-zero elements of the original array to the temp[] array
  for (int i = 0; i < n; i++) {
    if (arr[i] != 0) {
      temp[num_of_nonzero++] = arr[i];
    }
  }

  //This one is to append the non-zero elements from the temp[] array to the beginning of the original array
  for (int i = 0; i < num_of_nonzero; i++) {
    arr[i] = temp[i];
  }
  
  //This loop is basically filling the rest of the empty places in the array with zeroes
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

//--------------------------------------------------------------------------------------------------------------------------------------------

//Approach2: Optimal Code approach

#include<iostream>
#include<algorithm>
using namespace std;

int* move_zeroes(int arr[], int n)
{
 int j = -1;

 //this for loop is to find the index of the first zero element
 for(int i = 0; i<n; i++)
 {
  if(arr[i] == 0)
  {
    j = i;
    break;
  }
 }

 //This loop iterates through the array and swaps the zeroes with non-zeroes on the way to shift the zeroes to the end of the array
 for(int i = j+1; i<n; i++)
 {
  if(arr[i] != 0)
  {
    swap(arr[i], arr[j]);
    j++;
  }
 }

 return arr;

}

int main()
{
 int arr[] = {1, 2, 0, 3, 5, 2, 0, 0, 5, 3, 8, 0, 6};
 int n = sizeof(arr)/sizeof(arr[0]);

 int* shifted_array = move_zeroes(arr, n);
 for(int i = 0; i<n; i++)
 {
  cout<<shifted_array[i]<<" ";
 }
 cout<<endl;
}

//NOTE: The approach used above is known as two-pointer approach in which two variables (i and j in this case) are taken, one is usually used to iterate continuously and other one sticks to an element to check the respective conditions!!

