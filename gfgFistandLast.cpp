#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends


vector<int> find(int arr[], int n , int x )
{
    // code here
    int first = -1;
    int last = -1;
    int left = 0, mid, right = n-1;
    while(left <= right){
        mid = left+(right - left)/2;
        if(arr[mid] == x){
            first = mid;
            right = mid - 1;
        }
        else if(arr[mid] < x)
        left = mid + 1;
        else
        right = mid - 1;
    }
    
    left = 0 , right = n - 1;
    while(left <= right){
         mid = left+(right - left)/2;
         if(arr[mid] == x){
             last = mid;
             left = mid + 1;
         }
         else if(arr[mid] < x)
         left = mid + 1;
         else
         right = mid - 1;
        
    }
    return vector<int>({first,last});
}