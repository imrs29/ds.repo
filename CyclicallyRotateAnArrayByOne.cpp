#include <bits/stdc++.h>
using namespace std;

//idea
//store the last element and then shift all others right by one position
//the last element will be updated at the first position

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n; i++){
		cin >> a[i];
	}

	int last_Element = a[n-1];
	//iterate from the end
	for(int i = n-1;i>=0;i--){
		a[i] = a[i-1];
	}

	a[0] = last_Element;
	for(int i = 0;i < n;i++){
		cout << a[i] << " ";
	}
	return 0;
}

//Time Complexity = O(N)
//Space Complexity = O(1)
