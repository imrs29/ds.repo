#include<bits/stdc++.h>
using namespace std;

int main(){

    string str[] = {"2" , "22" , "222" , "3" , "33" , "333" , "4" ,"44" , "444" , "5" , "55" , "555" , "6" , "66" , "666" , "7" , "77" ,"777" , "7777" , "8" , "88" , "888" , "9" , "99" , "999" , "9999"};

    string s;
    cin >> s;

    string ans = "";

    for(int i = 0; i < s.length(); i++){
        if(s[i]  == ' ') // if current element is space

            ans += '0';
        else{

            int j = s[i] - 'A';
            ans += str[j];
        }
    }
    cout << ans << endl;
    return 0;
}
      