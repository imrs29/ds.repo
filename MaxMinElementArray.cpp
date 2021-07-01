#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	int maxEle;
	int minEle;
	if(n == 1) // if there is only one element then max and min will be same
	{
		maxEle = arr[0];
		minEle = arr[0];
	}
	else{
		if(arr[0] > arr[1]){
			maxEle = arr[0];
			minEle = arr[1];
		}
		else{
			maxEle = arr[1];
			minEle = arr[0];
		}
		
	
		for(int i = 2;i<n;i++){
			if(arr[i] > maxEle){
			maxEle = arr[i];
			}
			if(arr[i] < minEle){
			minEle = arr[i];
			}
		}
	}
	cout<<maxEle<<endl;
	cout<<minEle<<endl;
}
