#include <bits/stdc++.h>
using namespace std;

//Prefix Sum
//tc o(n) sc o(n)
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n + 1];
        for(int i = 1; i < n; i++)
            cin >> arr[i];

        int sum = 0;
        int flag = 0;
        unordered_map<int,int>mp;
        for(int i = 1; i < n; i++){
            sum = sum + arr[i];
            if(sum == 0 || mp[sum] || arr[i] == 0){
                flag = 1;
                break;
            }else{
                mp[sum] = 1;
            }
        }
        if(flag == 1)
            cout << "yes\n";
        else cout <<"No\n";
    }
        return 0;
}