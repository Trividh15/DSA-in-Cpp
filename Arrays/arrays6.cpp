// Write a Program to rotate an array by x elements

#include <iostream>

int *rotate_by_x(int arr[], int n, int x, int temp[])
{
  x%=n;

  if(x==0)
  {
    return arr;
  }
 
  //This for loop copying the elements from the original array to the temp array upto element at index "x"
  for(int i = 0; i<x; i++)
  {
   temp[i] = arr[i];
  }

  //This one is to shift the remaining elements to left i.e. towards the beginning of the array
  for (int i = x; i < n; i++)
  {
    arr[i - x] = arr[i];
  }

  //This for loop appends the elements which were removed from the front of the array and were stored in temp[] array earlier
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

//--------------------------------------------------------------------------------------------------------------------------------------------

//If the value of x comes out to be greater than or equal to the size of the array then remember that if the size of the array is n, then the array after n rotations will be the same array as before. Also, if the size of the array is n and the user asks to rotate the array by n+3 places, then you just have to rotate the array by 3 places, i.e. x%n , now assign this value to some variable and use it on place of x in the above program!


//The above program takes O(x) extra space. We can get rid of that extra space allocation by writing an optimal code. 
//NOTE: The code below is the optimal code. Although, it has greated time complexity than the above  code but it is not using any extra space. 

//--------------------------------------------------------------------------------------------------------------------------------------------

//Approach2: Optimal Code

#include<bits/stdc++.h>
#include<iostream>
using namespace std;



int* leftrotate(int arr[], int n, int x)
{
 reverse(arr, arr+x);
 reverse(arr+x, arr+n);
 reverse(arr, arr+n);

 return arr;
}

int main()
{
  int arr[] = {6, 2, 3, 7, 1, 7, 3, 5, 8},x;
  int n = sizeof(arr)/sizeof(arr[0]);

  cout<<"Enter the numbeer of elements you want to left rotate the arrray by: ";
  cin>>x;

  int* rotated_arr = leftrotate(arr, n, x);
  for(int i = 0; i<n; i++)
  {
    cout<<rotated_arr[i]<<" ";
  }
  cout<<endl;
}
