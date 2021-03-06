#include<bits/stdc++.h>
using namespace std;


// tc = O(n1 + n2 + n3)
// sc = O(n1 + n2 + n3)
int main(){

	int n1,n2,n3;
	cin >> n1 >> n2 >> n3;
	int a[n1], b[n2], c[n3];
	for(int i = 0; i < n1; i++)
		cin >> a[i];
	for(int i = 0; i < n2; i++)
		cin >> b[i];
	for(int i = 0; i < n3; i++)
		cin >> c[i];

	unordered_map<int,int> m1, m2,m3;
	for(int i = 0; i < n1; i++)
		m1[a[i]]++;
	for(int i = 0; i < n2; i++)
		m2[b[i]]++;
	for(int i = 0; i < n3; i++)
		m3[c[i]]++;

	std::vector<int> v;
	for(int i = 0; i < n1; i++){
		if(m1[a[i]] and m2[a[i]] and m3[a[i]]){
			v.push_back(a[i]);
			m1[a[i]] = 0;
		}
	}
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	

	return 0;
}

//Input: 3, 4, 15,