#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int index1 = lower_bound(arr, arr+n, x) - arr;
        int index2 = upper_bound(arr, arr+n, x) - arr - 1;
        if(index1 == n) //if value not found
            cout << "-1\n";
        else
            cout <<index1 << " " <<index2 << endl;
    }
    return 0;
}