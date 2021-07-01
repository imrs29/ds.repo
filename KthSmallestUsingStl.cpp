#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }

        int k;
        cin >> k;

        priority_queue<int, vector<int>, greater<int>> q;
        for(int i = 0;i<n;i++){
            q.push(a[i]);
        }

        int ans, i = 1;
        while(!q.empty()){
            if(i == k){
                ans = q.top();
                break;
            }

            i++;
            q.pop();
        }
        cout << ans << "\n";
    }

    return 0;

}