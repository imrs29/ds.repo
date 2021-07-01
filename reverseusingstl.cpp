#include<bits/stdc++.h>
using namespace std;

int main(){

	vector<int>arr;

	for(int i = 0;i<9;i++){
		int val;
		cin>>val;
		arr.push_back(val);

	}


	reverse(arr.begin(),arr.end());
	for(int i = 0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}

}