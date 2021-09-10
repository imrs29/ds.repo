#include<bits/stdc++.h>
using namespace std;


int main(){

    int arr[] = {1,3,2,4};
    int n = sizeof(arr)/ sizeof(arr[0]);
        vector<long long>v;
        stack<long long>s;
        
        
        for(int i = 0; i < n; i++){
            if(s.empty()){
                v.push_back(-1);
            }
           else{
                while(s.size() > 0 && s.top() <= arr[i]){
                    s.pop();
                }
                if(s.empty()){
                    v.push_back(-1);
                }
                else{
                    v.push_back(s.top());
                }
            }
            s.push(arr[i]);
        }
       
 
        for(int i = 0; i < n; i++)
            cout << v[i] << " ";
    }


