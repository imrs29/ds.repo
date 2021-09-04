#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
     unordered_set<int>hashSet;
        for(int num = 0; num < N ; num++){
            hashSet.insert(arr[num]);
        }
        
        int LongestLength = 0;
        
        for(int num = 0; num < N; num++){
            if(!hashSet.count(arr[num]-1)){
                int CurrentNum = arr[num];
                int CurrentLength = 1;
                
                while(hashSet.count(CurrentNum + 1)){
                    CurrentNum += 1;
                    CurrentLength += 1;
                }
                
                LongestLength = max(LongestLength, CurrentLength);
            }
        }
        return LongestLength;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends