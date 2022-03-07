//maximum distance between two occurrences of same element in array

// example : arr[] = {3,2,1,2,1,4,5,8,6,7,4,2}
// output : 10
// maximum distance for 2 is 11-1 = 10
//pick the elements from the array and find its first and last index
//O(n^2)

//efficient solution is to use hashing technique


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
    int max_distance = 0;
    for(int i = 0; i < n; i++){
        
        if(mp.find(arr[i]) == mp.end())
            mp[arr[i]] = i;

        else
            max_distance = max(max_distance, i - mp[arr[i]]);
    }
    return max_distance;
}

// hashing


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
