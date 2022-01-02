#include<iostream>
using namespace std;


int main(){

  	int n;
    cin >> n;
    int first = 0 , second = 1;
    
    for(int i = 0; i < n; i++){
        int temp = first + second;
        
        first = second;
        second = temp;
        
        
    }
    cout << first;
}
