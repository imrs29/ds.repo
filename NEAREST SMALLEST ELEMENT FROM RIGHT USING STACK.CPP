#include<bits/stdc++.h>
using namespace std;

vector<int> NearestSmallerElementFromRight(vector<int>v){
    vector<int> ans;
    stack<int> s;
    int n=v.size();
    for(int i = n-1; i >= 0; i--){
        if(s.size() > 0 && s.top() >= v[i]){
            while(s.size() > 0 && s.top() >= v[i]){
                s.pop();
            }
        }
        if(s.size()==0){
            ans.push_back(-1);
        }else{
            ans.push_back(s.top());
        }
        s.push(v[i]);
    }
    return ans;
}
int main(){
    std::vector<int> v, vec;
    int n, ele;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> ele;
        v.push_back(ele);
    }

    vec = NearestSmallerElementFromRight(v);
    for(int i = n-1; i >= 0; i--){
        cout << vec[i] << " ";
    }
    return 0;
}
