// TIME COMPLEXITY O(NLOGN)
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr;
    int size;
    cin>>size;
    int val;
    for(int i = 0;i<size;i++){
        cin >> val;
        arr.push_back(val);
    }

    int k;
    cin>>k;
    sort(arr.begin(),arr.end());
    cout << arr[k-1];
}
