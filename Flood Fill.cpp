// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    void dfs(vector<vector<int>>&image, int sr, int sc, int newColor, int rows, int column,int src){
        if(sr < 0 || sr >= rows || sc < 0 || sc >= column)
            return;
        else if(image[sr][sc] != src)
            return;
        
        image[sr][sc] = newColor;
        
        dfs(image, sr - 1, sc, newColor, rows, column, src);
        dfs(image, sr + 1, sc, newColor, rows, column, src);
        dfs(image, sr , sc - 1, newColor, rows, column, src);
        dfs(image, sr , sc + 1, newColor, rows, column, src);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        
          if(newColor == image[sr][sc])
            return image;
        int rows = image.size();
        int column = image[0].size();
        int src = image[sr][sc];
        dfs(image, sr, sc, newColor, rows, column, src);
        return image; 
    }
};

// { Driver Code Starts.
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>>image(n, vector<int>(m,0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++)
                cin >> image[i][j];
        }
        int sr, sc, newColor;
        cin >> sr >> sc >> newColor;
        Solution obj;
        vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
        for(auto i: ans){
            for(auto j: i)
                cout << j << " ";
            cout << "\n";
        }
    }
    return 0;
}  // } Driver Code Ends