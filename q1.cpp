#include <iostream>
#include <unordered_set>
using namespace std;
 

int minimum(int arr[], int n)
{
    int minindex = n;
 
    
    unordered_set<int> set;
 
    
    for (int i = n - 1; i >= 0; i--)
    {
        
        if (set.find(arr[i]) != set.end()) {
            minindex = i;
        }
        
        else {
            set.insert(arr[i]);
        }
    }
 
    
    if (minindex == n) {
        cout<<"invalid input";
    }
 
    
    return minindex;
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
 
    int minindex = minimum(arr, n);
 
    if (minindex != n) {
        cout << "The minimum index of the repeating element is " << minindex;
    }
    else {
        cout << "";
    }
 
    return 0;
}