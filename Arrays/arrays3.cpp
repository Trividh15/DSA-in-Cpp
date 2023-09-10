// To remove the duplicate elements of an array

// Approach 1: Brute Force

#include <iostream>
#include <set>

using namespace std;

int main()
{
  set<int> st; // Set named st is defined

  int a[] = {1, 1, 2, 2, 2, 3, 3, 4, 5, 6, 7, 7};
  int n = sizeof(a) / sizeof(a[0]);
  for (int i = 0; i < n; i++)
  {
    st.insert(a[i]);
  }
  int arr[st.size()];

  // Appending the elements of the set (which are our unique elements) in the new array arr
  int i = 0;
  for (auto element : st)
  {
    arr[i++] = element;
  }

  // Printing the array with unique elements
  for (int i = 0; i < st.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// Approach 2: Optimal Code

#include <iostream>
using namespace std;

int removeduplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 0; j < n; j++)
  {
    if (arr[i] != arr[j])
    {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}

int main()
{
  int arr[] = {1, 1, 2, 2, 2, 3, 4, 5, 5, 6, 6,7};
  int n = sizeof(arr) / sizeof(arr[0]);

  int k = removeduplicates(arr, n);
  cout << "The array after removing the duplicate elements from it is: " << endl;
  for (int i = 0; i < k; i++)
  {
    cout << arr[i] << " ";
  }
}

//Please note that array MUST be sorted before using the above codes, if the elements of the array are dynamically assigned with values from user, then it is suggested to first check if the array is sorted or not. 
// - > If NOT: Then sort the array
// - > If YES: Continue
