#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;i++){
		cin >> arr[i];
	}

	int start = 0 ,end = size-1;
	while(start < end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end]  = temp;
		start++;
		end--;
	}

	for (int i = 0;i<size;i++){
		cout << arr[i]<<" ";
	}
}
