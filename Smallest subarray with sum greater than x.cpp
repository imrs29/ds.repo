#include <bits/stdc++.h>
using namespace std;

 // { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here 
        int current = 0;
        int min_length = INT_MAX;
        int start = 0;
        int end = 0;
        while(end < n)
        {
            while(current <= x && end < n)
            current += arr[end++];
            
            while(current > x && start < n){
                if(end - start < min_length)
                min_length = end - start;
                
                current -= arr[start++];
            }
        }
        return min_length;
    }
};

// { Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        Solution obj;
        cout<<obj.smallestSubWithSum(a,n,x)<<endl;
    }
    return 0;
}  // } Driver Code Ends