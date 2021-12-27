#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int first = 0, second = 1;
    int temp;
    if(n == first || n == second)
        cout<<"Fibonacci member";
        temp = first + second;
        
        while(temp < n){
            first = second;
            second = temp;
            temp = first + second;
        }
    
    if(temp == n)
    cout << "Fibonacci member";
    else
    cout <<"not a Fibonacci member";
    
}
