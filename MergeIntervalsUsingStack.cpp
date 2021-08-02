#include <bits/stdc++.h>
using namespace std;
 
// sort first
// end >= start --> merge 
// let stack
// tc O(nlogn)
// sc O(n)
int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> a;
    for(int i = 0; i < n; i++){
        int x,y;
        cin>>x>>y;
        a.push_back({x,y});
    }

    sort(a.begin(), a.end());
    stack<pair<int,int>> st;
    st.push({a[0].first,a[0].second});
    for(int i = 1; i < n; i++){
        int start1 = st.top().first; // top of stack elements
        int end1 = st.top().second; // those which are comparing with the top of stack
        int start2 = a[i].first;
        int end2 = a[i].second;

        if(end1 < start2){
            st.push({start2, end2});
        }
        else{
            st.pop();
            end1 = max(end1, end2);
            st.push({start1, end1});
        }
    }

    while(!st.empty()){
        cout << st.top().first << " " << st.top().second << endl;
        st.pop();
    }

}

// input 
// 5
//1 2
//2 4 
// 5 8
//7 10
//11 12
