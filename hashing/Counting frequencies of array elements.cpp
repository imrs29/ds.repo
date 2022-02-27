#include<bits/stdc++.h>
using namespace std;

void solve_Hashing(int arr[], int n){
    
    
    unordered_map<int, int>mp;
    for(int i = 0; i <n; i++){
        mp[arr[i]]++;
    }
    
    for(auto it : mp)
    cout <<"key -> " << it.first << " and value -> "<< it.second << "\n";
    
    
}

int main(){
    
    int arr[] = {10, 20, 20, 10, 10, 20, 5, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    solve_Hashing(arr, n);
}


// usinh map
// C++ program to find whether an array
// is subset of another array
#include <bits/stdc++.h>
using namespace std;
/* Return true if arr2[] is a subset of arr1[] */

bool isSubset(int arr1[], int m,
			int arr2[], int n)
{
	// Create a Frequency Table using STL
	map<int, int> frequency;
	
	// Increase the frequency of each element
	// in the frequency table.
	for (int i = 0; i < m; i++)
	{
		frequency[arr1[i]]++;
	}
	// Decrease the frequency if the
	// element was found in the frequency
	// table with the frequency more than 0.
	// else return 0 and if loop is
	// completed return 1.
	for (int i = 0; i < n; i++)
	{
		if (frequency[arr2[i]] > 0)
			frequency[arr2[i]]--;
		else
		{
			return false;
		}
	}
	return true;
}

// Driver Code
int main()
{
	int arr1[] = { 11, 1, 13, 21, 3, 7 };
	int arr2[] = { 11, 3, 7, 1 };
	int m = sizeof(arr1) / sizeof(arr1[0]);
	int n = sizeof(arr2) / sizeof(arr2[0]);

	if (isSubset(arr1, m, arr2, n))
		cout << "arr2[] is subset of arr1[] "
			<< "\n";
	else
		cout << "arr2[] is not a subset of arr1[] "
			<< "\n";
	return 0;
}
// This code is contributed by Dhawal Sarin.
