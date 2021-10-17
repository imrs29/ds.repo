// (1,5) (10,15) k=9
//1,2,3,4,5,10,11,12,13,14,15
//answer = 13

// (1,5) (3,7)
// 1 2 3 4 5 6 7

//algo --->>step 1: sort()
// step 2: merge common intervals
// step 3: searching

#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int t;
	cin >> t;
	while(t--){
		long long int n,q;
		cin >> n >> q;
		vector<pair<long long int,long long int>> v;
		
		for(	long long int i = 0; i < n; i++){
				long long int x,y;
			cin >> x >> y;
			v.push_back({x,y});
		}
		sort(v.begin(), v.end());
			long long int index = 0;
		for(int i = 1; i < v.size(); i++){
			if(v[index].second >= v[i].first){
				v[index].second = max(v[index].second, v[i].second);
			}
			else{
				index++;
				v[index] = v[i];
			}
		}

		while(q--){
				long long int k;
			cin >> k;
				long long int ans = -1;
			for(	long long int i = 0; i <= index; i++){
				if((v[i].second-v[i].first+1) >= k){
					ans = v[i].first + k - 1;
					break;
				}
				else{
					k = k - (v[i].second - v[i].first+1);
				}
			}
			cout << ans << endl;
		}

	}
}