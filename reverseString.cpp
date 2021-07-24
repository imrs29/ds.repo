#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string str;
	cin >> str;
	
	for(int i = str.length() - 1; i >= 0; i--){
	    cout << str[i];
	}
}

// 2nd approach

class Solution {
public:
    void reverseString(vector<char>& s) {
            
            vector<char>v;
            for(int i = s.size() - 1; i >= 0; i--){
                    v.push_back(s[i]);
            }
            s = v;
        
    }
};


// 3rd approach 
class Solution {
public:
void reverseString(vector& s) {
int start=0,e=s.size()-1;
while(start<e)
{
swap(s[start],s[e]);
start++;
e--;
}
}
};
