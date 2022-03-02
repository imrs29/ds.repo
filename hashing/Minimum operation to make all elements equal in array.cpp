#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    unordered_map<int,int>mp;
    for(int  i = 0; i < n; i++)
        mp[arr[i]]++;
        
        int max_freq = 0;
        
        unordered_map<int,int>::iterator it;
        for(it = mp.begin(); it != mp.end(); ++it){
            if(max_freq < it->second)
            max_freq = it->second;
        }
        
    cout << (n - max_freq);
}
