//Que1} Find the largest element of the array

//Approach 1: Brute Force -> Using Sorting

//Appoach 2: Optimal Method-> Using loop

//Implementation of Approach 2

#include<iostream>
int main ()
{
  int arr[10]={1,2,3,15,31,12,22,8,9,10}, temp;
  int max = arr[0];

  for(int i = 1; i<10; i++)
  {
    if(arr[i]>max)
    {
      temp = max;
      max = arr[i];
      arr[i] = max;
    }
  }

  std::cout<<"The largest element of the array is: "<<max; 
  return 0;
}
