#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
    // your code here
    int len = s.length();
    if(len % 2)
    return -1;
    
    stack<char> st;
    for(int i = 0; i < len; i++){
        if(s[i] == '}' && !st.empty()){
            
            if(st.top() == '{')
            st.pop();
            else
            st.push(s[i]);
        }
        else 
        st.push(s[i]);
    }
    
    int dec_len = st.size();
    
    int ct = 0;
    while(!st.empty() && st.top() == '{')
    {
        st.pop();
        ct++;
    }
    
    return (dec_len/2 + ct%2);
    
}