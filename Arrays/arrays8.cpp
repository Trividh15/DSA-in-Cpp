//Two Sum Problem

//----------------------------------------------------------------------------

//Brute Force Method


#include<iostream>
using namespace std;
int main() {
    int target;
    cout << "Enter the value of target" << endl;
    cin >> target;

    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                continue;
            if (arr[i] + arr[j] == target) {
                cout << "The target can be obtained by adding " << arr[i] << " and " << arr[j] << endl;
                return 0;
            }
        }
    }

    cout << "No elements found in the array whose sum would be equal to target" << endl;
    return 0;
}


//-------------------------------------------------------------------------------------

//Better Approach

#include<iostream>
using namespace std;
int main() {
    int target;
    cout << "Enter the value of target" << endl;
    cin >> target;

    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (i == j)
                continue;
            if (arr[i] + arr[j] == target) {
                cout << "The target can be obtained by adding " << arr[i] << " and " << arr[j] << endl;
                return 0;
            }
        }
    }

    cout << "No elements found in the array whose sum would be equal to target" << endl;
    return 0;
}


//-----------------------------------------------------------------------------------------------------------------

//Better Solution using maps

#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
using namespace std;
int main()
{
  int target;
  cin>>target;
  vector<int> vec = {1,2,3,4,5};
  unordered_map<int, int> map;
  for(int i = 0; i<vec.size(); i++)
  {
    int a = vec[i];
    int more = target - a;
    if(map.find(more) != map.end())
    {
      cout<<"Elements Found!\n"<<endl;
    }
    map[a] = i;
  }
  
  cout<<"No two elements found such that there sum is equal to the targer"<<endl;

}

//---------------------------------------------------------------------------------------

//Better solution without using map

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

  vector <int> arr = {2,1,3,5,4};
  sort(arr.begin(), arr.end());
  int j = arr.size()-1;
  int i = 0, target;
  cin >> target; 
  while(i<j)
  {
    if(arr[i]+arr[j] == target)
    {
      cout<<"Elements Found\n"<<endl;
      break;
    }
    i++;
    j--;
  }

  cout<<"No two elements found such that their  sum would be equal to target\n";
  return 0;

}

//------------------------------------------------------------------------------------------------
