#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>> t;
	while(t--){
		int n,x;
	cin >> n >> x;

	int arr[n];

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	int res = 0;
	for(int i = 0; i < n-2; i++){
		unordered_set<int> s;
		int curr = x - arr[i];

		for(int j = i + 1; j < n; j++){
			if(s.find(curr - arr[j] ) != s.end()){
				res = 1;
				break;
			}
			s.insert(arr[j]);
		}
	}
	cout << res << endl;
	

	}
	return 0;
	
}