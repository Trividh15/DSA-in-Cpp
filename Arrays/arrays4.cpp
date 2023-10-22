//To find if an array is sorted or not
#include<iostream>

bool is_sorted(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    if (arr[i] >= arr[i - 1])
    {
      
    }
    else
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int arr[] = {2,4,1,5,7,23,7};
  int n = sizeof(arr)/sizeof(arr[0]);

  if(is_sorted)
  {
    std::cout<<"The array is sorted.";
  }
  else{
  std::cout<<"The array is not sorted.";
  }

  return 0;
}
