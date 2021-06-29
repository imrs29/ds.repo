#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    stack<char>st;
    for(int i=0;i<str.size();i++){
        char ch = str.at(i);
        cout << ch<<" ";
        if(ch == ')'){
            if(st.top() == '('){
                cout<<"true";
                
            }else{
                while(st.top() != '('){
                    st.pop();
                }
                st.pop();
            }
        }else{
            st.push(ch);
        }
    }

    cout<<"false";
    return 0;
}