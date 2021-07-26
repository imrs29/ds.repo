#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    
    void PrintString(string S, int start, int end){
        for(int i = start; i <= end; i++){
            cout << S[i];
        }
    }
    string longestPalin (string S) {
        // code here
        
        int low, high;
        
        int start = 0, end = 1;
        for(int i = 1; i < S.length(); i++)
        {
            // even substring
            
            low = i-1;
            high = i;
            
            while(low >= 0 && high < S.length() && S[low] == S[high]){
                if(high - low + 1 > end){ // end se  wo set kar rahe h ek jo palindrome answer niklega uska length kitna hone wala h
                    start = low;
                    end = high - low + 1;
                }
                low--;
                high++;
            }
            
            // odd part
            low = i-1;
            high = i + 1;
            
            while(low >= 0 && high < S.length() && S[low] == S[high]){
                if(high - low + 1 > end){
                    start = low;
                    end = high - low + 1;
                }
                low--;
                high++;
            }
        }
        PrintString(S, start, start + end - 1);
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}