#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++){
		cin >> a[i];
	}
	int pivot = 0; //using quick sort partition
	int i,j;
	i = -1;
	for(int j = 0;j<n;j++){
		if(a[j] < pivot){
			i++;
			swap(a[i],a[j]);
		}
	}
	for(int i = 0;i < n;i++){
		cout << a[i]<<" ";
	}
	return 0;
}

// Time complexity = O(n)
// Space complexity = O(1)