#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        //checking for a
        if((A >= B and A <= C) || (A <= B and A >= C))
        return A;
        
        else if((B >= A and B <= C) || ( B <= A and B >= C))
        return B;
        else if((C >= B && C <= A) || ( C <= B && C >= A))
        return C;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}  // } Driver Code Ends