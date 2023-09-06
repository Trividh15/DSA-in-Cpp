//Find the second largest element of the array

//Approach 1: Brute Force Code

// #include<iostream>
// #include<algorithm>

// int main()
// {
//   int a[] = {1,2,4,7,7,5}, max = a[0], slargest;
//   int n = sizeof(a)/sizeof(a[0]);
  
//   //Sorting the array
//   for(int i = 0; i<n-1; i++)
//   {
//     for(int j = 0; j<n-1; j++)
//     {
//       if(a[j]>a[j+1])
//       {
//         std::swap(a[j], a[j+1]);
//       }
//     }
//   }


//   max = a[n-1];

//   for(int i = n-2; i>=0; i--)
//   {
//     if(a[i] != max)
//     {
//       slargest = a[i];
//       break;
//     }
//   }

//   std::cout<<"The second largest element of the array is: "<<slargest;

// }

//Approach 2: Better Code

#include<iostream>

int main()
{
  int a[] = {1,2,4,7,7,5};
  int n = sizeof(a)/sizeof(a[0]), largest = a[0], slargest = -1;

  for(int i = 1; i<=n-1; i++)
  {
   if(a[i]>largest)
   {
    largest = a[i];
   }
  }

  for(int i = 0; i<n; i++)
  {
    if(a[i]>slargest && a[i] != largest)
    {
      slargest = a[i];
    }
  }

  std::cout<<"The second largest element in the array is: "<<slargest;
  return 0;
}