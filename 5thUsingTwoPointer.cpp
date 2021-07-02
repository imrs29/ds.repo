#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++){
		cin >> a[i];
	}

	int arr = sizeof(a)/sizeof(a[0]);
	int left = 0, right = arr-1;
	while(left <= right)
	{
		if(a[left] < 0 && a[right] < 0)
			left++;
		else if(a[left] > 0 && a[right] < 0){
			int temp = a[left];
			a[left] = a[right];
			a[right] = temp;
			left++;
			right--;
		}

		else if(a[left] > 0 && a[right] > 0)
			right--;
		else{
			left++;
			right--;
		}
	}

	for(int i = 0;i<n;i++){
		cout << a[i] << " ";
	}
	return 0;
}

