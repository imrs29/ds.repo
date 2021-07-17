#include<bits/stdc++.h>
using namespace std;


int solve(int a[], int n, int x, int tog  ){
    int start = 0;
    int end = n - 1;
    int result = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(a[mid] < x){
            start = mid + 1;
        }
        else if(a[mid] > x){
            end = mid - 1;
        }else{
            result = mid;
            if(tog == -1)
                end = mid + tog;
            else start = mid + tog;
        }
    }
    return result;
}
int main(){

    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int index1 = solve(a, n, x, -1);
        int index2 = solve(a, n, x,1);
        if(index1 == 1) //if value not found
            cout << "-1\n";
        else
            cout <<index1 << " " <<index2 << endl;
    }
    return 0;
}