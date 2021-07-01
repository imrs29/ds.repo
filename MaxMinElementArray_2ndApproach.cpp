#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }

    int minEle;
    int maxEle;
    int i;

    if(n%2 == 0){  //if there's even number of element
        if(a[0] > a[1]){
            maxEle = a[0];
            minEle = a[1];
        }
        else{
            maxEle = a[1];
            minEle = a[0];
        }

        i = 2;
    }
    else{
        maxEle = a[0];
        minEle = a[1];
        i = 1;
    }

    while(i<n-1){
        if(a[i] > a[i+1]){
            if(a[i] > maxEle){
                maxEle = a[i];
            }
            if(a[i+1] < minEle){
                minEle = a[i+1];
            }
        }
        else{
            if(a[i+1] > maxEle){
                maxEle = a[i+1];
            }
            if(a[i] < minEle){
                minEle = a[i];
            }
        }
        i = i + 2;
    }
    cout << maxEle << endl;
    cout << minEle << endl;
}