#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n], mul = 1;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mul = mul*arr[i];
        }

        int product[n];
        for(int i = 0; i < n; i++){
            product[i] = mul/arr[i];
        }

        for(int i = 0; i < n; i++){
            cout << product[i] << " ";
        }cout << endl;
    }
    return 0;
}