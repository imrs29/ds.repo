// METHOD 1
/*TC = O(N^2)
SC = O(1)
                          A1 = [11,1,13,2,3,7]
                          A2 = [11,3,7,1] */

// METHOD 2
/*(SORTING + BINARY SEARCH)
TC = O(N*Log n + M LOg m);
SC = O(1);
 

 AFTER SORTING
 [1,2,3,7,11,13]
 [1,3,7,11]


 METHOD 3:
 (SORTING+ TWO PONITER APPROACH) 
 TC = (O(N log n + m log m));
 sc = O(1);

 METHOD 4:
 TC = O(n);
 SC = O(n); */

// program for method 4

#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){
		int m,n;
		cin >> m >> n;
		int a[m], b[n];
		for(int i = 0; i < m ; i++)
			cin >> a[i];
		for(int i = 0;  i < n; i++)
			cin >> b[i];

		unordered_map<int, int> m1;
		for(int i = 0; i < m; i++)
			m1[a[i]]++;

		int count = 0;
		for(int i = 0; i < n; i++){
			if(m1[b[i]]){
				count++;
			}
		}

		if(count != n)
			cout << "No\n";
		else
			cout << "Yes\n";
	}
	return 0;
}
