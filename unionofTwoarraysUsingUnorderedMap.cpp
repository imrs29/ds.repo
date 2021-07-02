#include <bits/stdc++.h>
using namespace std;

int main(){
	unordered_map<int,int>mp;
	int n,m;
	cin >> n>>m;
	int a[n],b[m];
	for(int i = 0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++;
	}

	for(int i =0;i < m; i++){
		cin>>b[i];
		mp[b[i]]++;
	}
	cout << mp.size() << endl;
}

//time complexity
