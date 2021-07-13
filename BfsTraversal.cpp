#include <bits/stdc++.h>
using namespace std;

// bfs is implemented using a queue data structure
//dfs is implemented using stack data structure


class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
    vector<int>bfsOfGraph(int V, vector<int> adj[])
    {
        // Code here
        vector<int> v; //for storing bfs traversal
        queue<int> q;
        q.push(0);
        vector<int> visited(V,0);
        visited[0] = 1;
        
        while(!q.empty()){
            int td = q.front();
            q.pop();
            v.push_back(td);
            for(auto x:adj[td]){
                if(!visited[x]){
                    visited[x] = 1;
                    q.push(x);
                }
            }
        }
        return v;
    }
};

// { Driver Code Starts.
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for(int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
    //      adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.bfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends