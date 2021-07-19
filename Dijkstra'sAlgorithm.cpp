#include<bits/stdc++.h>
using namespace std;

/*Given a weighted graph. Find the single source shortest path from a vertex u to all the vertices in the graph. If the node is unreachable, then print -1 */
// not work on negative edge cycle. 
// the wts of edges must be positive.
const int inf = 1e7;

int main(){

    int n,m;
    cin >> n >>m;
    vector<int> dist(n+1,inf);
    vector<vector<pair<int,int>>> graph(n+1);
    for(int i = 0; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }

    int source;
    cin >> source;
    dist[source] = 0;
    set<pair<int,int>> s;
    s.insert({0,source});
    while(!s.empty()){
        auto x = *(s.begin());
        s.erase(x);
        for(auto it : graph[x.second]){
            if(dist[it.first] > dist[x.second] + it.second){
                s.erase({dist[it.first],it.first});
                dist[it.first] = dist[x.second] + it.second;
                s.insert({dist[it.first],it.first});
            }
        }
    }
    for(int i = 1; i <= n; i++){
        if(dist[i] < inf){
            cout << dist[i] << " ";
        }
        else{
            cout << -1 << " ";
        }
    }
}

// input cases
/* 4 4
1 2 24
1 4 20
3 1 3
4 3 12
1 */

// output: 0 24 3 15