#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


 // } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
  
  int MAH(vector<int> &arr){
      int n = arr.size();
      vector<int>nsl,nsr;
      stack<int>st;
      for(int i = 0; i < n; i++){
          while(!st.empty() && arr[st.top()] >= arr[i])
          st.pop();
          if(st.empty())
          nsl.push_back(-1);
          else
          nsl.push_back(st.top());
          st.push(i);
      }
      
      while(!st.empty())
      st.pop();
      for(int i = n-1; i >= 0; i--){
          while(!st.empty() && arr[st.top()] >= arr[i])
          st.pop();
          if(st.empty())
          nsr.push_back(n);
          else
          nsr.push_back(st.top());
          st.push(i);
      }
      
      reverse(nsr.begin(), nsr.end());
      int mx = INT_MIN;
      for(int i=0; i < n; i++){
          mx = max(mx,(nsr[i]-nsl[i] - 1)*arr[i]);
      }
      return mx;
  }
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        vector<int>v;
        for(int i = 0; i < m; i++){
            v.push_back(M[0][i]);
        }
        
        int mx = MAH(v);
        for(int i = 1; i < n; i++){
            for(int j = 0; j < m; j++){
                if(M[i][j] == 0)
                v[j] = 0;
                else
                v[j] = v[j] + M[i][j];
            }
            mx = max(mx, MAH(v));
        }
        return mx;
    }
};


// { Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}
  // } Driver Code Ends