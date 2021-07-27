#include <bits/stdc++.h> 
using namespace std; 

int maxSubstring(string s)
{
    int n = s.length(); //Store the length

    int count0 = 0;
    int count1 = 0;

    int count;
    for(int i = 0; i < n; i++){ // traverse the entire string

        if(s[i] == '0') //if string 0 then increment of count 0
            count0++;
        else
            count1++; // else increment of count 1

        if(count0 == count1) // if count of 0 and count of 1 are equal 
            count++;  // increment the counter answer
    }

    if(count0 != count1) // if not equal return -1
        return -1;

    return count; // if everything goes right return counter as answer
}

int main(){

    string s = "0100110101";

    cout << maxSubstring(s);

    return 0;
}