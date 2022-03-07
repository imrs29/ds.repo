//Number of subarrays having sum exactly equal to k


// Brute Force TC --> o(n^2)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cin >>k;
    int count = 0;
    for(int i = 0; i < n; i++){
        int add = 0;
        for(int j = i; j < n; j++){
            add += arr[j];
            
            if(add == k)
            count++;
            
        }
    }
    cout << count << "\n";
}

// ussing hashing

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
   
   unordered_map<int, int> previous_Sum;
   
   int ans = 0, currSum = 0;
   
   for(int i = 0; i < n; i++){
       currSum += arr[i];
       
       if(currSum == k)
       ans++;
       
       if(previous_Sum.find(currSum - k) != previous_Sum.end())
        ans += (previous_Sum[currSum - k]);
        
        previous_Sum[currSum]++;
   }
   cout <<ans;
   
   
}
