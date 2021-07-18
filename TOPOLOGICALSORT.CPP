#include<bits/stdc++.h>
using namespace std;



int main(){

    int n,m;
    cin >> n >> m;
    int cnt = 0;
    vector<vector<int>> adj_list(n);
    vector<int> indeg(n,0);
    for(int i = 0; i < m; i++){
        int u,v;
        cin >> u >> v;

        //directed edges u -->v;
        adj_list[u].push_back(v);
        indeg[v]++;
    }

    queue<int> q;
    for(auto i = 0; i < n; i++){
        if(indeg[i] == 0){
            q.push(i); //if indegree of a vertex is zero push them in answer
        }
    }
    while(!q.empty()){
        cnt++;
        int x = q.front();
        q.pop();
        cout << x << " ";
        // x-->v;
        for(auto it : adj_list[x]){
            indeg[it]--;
            if(indeg[it] == 0)
                q.push(it);
        }
    }
    return 0;
}