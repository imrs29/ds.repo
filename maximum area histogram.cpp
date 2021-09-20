#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<long long>LeftIndex;
        stack<long long>st;
        for(int i = 0; i < n; i++){
            while(!st.empty() && arr[st.top()] >= arr[i])
            st.pop();
            if(st.empty())
            LeftIndex.push_back(-1);
            else
            LeftIndex.push_back(st.top());
            st.push(i);
        }
        
        vector<long long>RightIndex;
        stack<long long>st2;
        
        for(int i = n-1; i >= 0; i--){
            while(!st2.empty() && arr[st2.top()] >= arr[i])
            st2.pop();
            if(st2.empty())
            RightIndex.push_back(n);
            else
            RightIndex.push_back(st2.top());
            st2.push(i);
        }
        reverse(RightIndex.begin(), RightIndex.end());
        long long MaxArea = 0;
        for(int i = 0; i < n; i++){
            MaxArea = max(MaxArea,arr[i]*(RightIndex[i]-LeftIndex[i]-1));
        }
        return MaxArea;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends
