#include<bits/stdc++.h>
using namespace std;

/** using hashing **/
bool isSubset(int arr1[], int m, int arr2[], int n){
    map<int, int> freq;
    for(int  i = 0; i < m ; i++){
        freq[arr1[i]] = 1;
    }
    for(int i = 0; i < n; i++){
        if(freq[arr2[i]] != 1)
        return false;
    }
    return true;
}

int main(){
    int arr1[] = {11,1,13,21,3,7};
    int arr2[] = {11,3,7,1};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n= sizeof(arr2) / sizeof(arr2[0]);
    
    if(isSubset(arr1,m,arr2,n))
    cout << "arr2[] is subset of arr1[]" << "\n";
    else
    cout << "arr2[] is not subset of arr1[]" <<"\n";
    return 0;
}



