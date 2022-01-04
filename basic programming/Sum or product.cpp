#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    int ch;
    cin >> ch;
    int sum= 0;
    int prod = 1;
    if(ch == 1){
        int i;
        for(i = 0; i <= n; i++){
            sum = sum + i;
            
        }
        cout << sum;
        
    }else if(ch == 2){
        int i;
        for(i = 1; i <= n; i++){
            prod = prod * i;
          
        }
          cout << prod;
        
    }else
    cout << "-1";
    
}
