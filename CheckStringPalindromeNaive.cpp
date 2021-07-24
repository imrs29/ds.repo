#include <bits/stdc++.h>
using namespace std;
 

string isPalindrome(string S)
{
    
    string P = S;
 
   
    reverse(P.begin(), P.end());
 
    
    if (S == P) {
        // Return "Yes"
        return "Yes";
    }
    // Otherwise
    else {
        // return "No"
        return "No";
    }
}
 
// Driver Code
int main()
{
    string S = "ABCDCBA";
    cout << isPalindrome(S);
 
    return 0;
}