//Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 1, curr = 1;
    
    while(count <= n){
        int num = 3*curr+2;
        if(num % 4 != 0){
            cout << num << " ";
            count++;
        }
        curr++;
    }
}
