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