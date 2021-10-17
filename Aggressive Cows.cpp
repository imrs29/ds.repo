// arr[] = [1,2,4,8,9] cows = 3
// Binary Search
// tc canPlaceCowss takes O(n) time and BS will takes logn
// total O(n*logn) time // sc = o(1)

#include<bits/stdc++.h>
using namespace std;


bool canPlaceCowss(int arr[],int n,int cows,int dist){
	int coordinate = arr[0],count = 1;
	for(int i = 1; i < n; i++){
		if(arr[i] - coordinate >= dist){
			count++;
			coordinate = arr[i];
		}
		if(count >= cows)
			return true;
	}
	return false;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, cows;
	cin >> n >> cows;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	int low = 1, high = arr[n-1] - arr[0];
	
	while(low <= high){
		int mid = (low + high) >> 1;
		if(canPlaceCowss(arr,n,cows,mid))
		{
			low = mid + 1;
		}
			else{
				high = mid - 1;
			}
	}
	cout << high << endl;
	}
	return 0;
}