#include <iostream>
#include <unordered_set>
using namespace std;

bool consecutive(int arr[], int n)
{
    
    if (n <= 1) {
        return true;
    }
 
    int min = arr[0], max = arr[0];
 
    for (int i = 1; i < n; i++)
    
    {
        if (arr[i] < min) {
            min = arr[i];
        }
 
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    if (max - min != n - 1) {
        return false;
    }
    unordered_set<int> visited;
    for (int i = 0; i < n; i++)
    {
        if (visited.find(arr[i]) != visited.end()) {
            return false;
        }
 
        visited.insert(arr[i]);
    }
 
    return true;
}
 
int main()
{
    int f;
	
	cout<<"Enter Number of Elements: ";
	cin>>f;
	cout<<f<<endl;
    int arr[f];
    int i;
  for (int i = 0; i < f; ++i) {
    cin >> arr[i];
  } 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    consecutive(arr, n)? cout << "The array contains consecutive integers":cout << "The array does not contain consecutive integers";
 
    return 0;
}