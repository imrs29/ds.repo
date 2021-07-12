#include<bits/stdc++.h>
using namespace std;

//Bipartite graph : its vertices can be divided into two disjoint and independent sets U and V such that every edge connects a vertex in U to one in V.
// This grapg does not contain any odd-length cycles
// This graph is 2 colorable
/*APPROACH Pseudo Code*/
// Traverse the graph.
// If the current node is of red color, paint its neighbours as blue.
//If you are able to color the graph successfully, then the graph is colored.
// colored node is -1

vector<vector<int>> adj;
vector<bool> vis;
vector<int> col;
bool bipart;

void color(int u, int curr){
	if(col[u] != -1 and col[u] != curr){
		bipart = false;
		return;
	}
	col[u] = curr;
	if(vis[u])
		return;
	vis[u] = true;
	for(auto i: adj[u]){

		color(i, curr xor 1);

	}
}

int main(){

	bipart = true;
	int n,m;   // n = vertices, m = edges
	cin >> n >> m;
	adj = vector<vector<int>> (n);
	vis = vector<bool>(n,false);
	col = vector<int>(n,-1);
	for(int i = 0; i < m; i++){
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for(int i = 0; i < n; i++){
		if(!vis[i]){
			color(i,0);
		}
	}

	if(bipart)
		cout << "Graph is bipartite";
	else
		cout << "Graph is not bipartite";
	return 0;
}

/* input
3 3
0 1
1 2
2 0 */