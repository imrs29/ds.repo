#include<bits/stdc++.h>
using namespace std;

int main(){

	vector<int>arr;
	int size;
	int a;
	cin>>size;
	for(int i = 0;i<size;i++){
	
		cin>>a;
		arr.push_back(a);

	}


	reverse(arr.begin(),arr.end());
	for(int i = 0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}

}
