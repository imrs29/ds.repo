#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
    int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
    {
        // Code here
        int s1 = KnightPos[0];
        int s2 = TargetPos[0];
        int d1 = KnightPos[1];
        int d2 = TargetPos[1];
        int a[1001][1001];
        if(s1 == s2 && d1 == d2){
            return 0;
        }
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                a[i][j] = 0;
            }
        }
        
        queue<pair<int, int>> q;
        q.push(make_pair(s1 - 1, d1 - 1));
        while(!q.empty()){
            auto cur = q.front();
            int i = cur.first;
            int j = cur.second;
            q.pop();
            
            if((i+1)>=0 and (i+1)<N and (j+2)>=0 and (j+2)<N and a[i+1][j+2] == 0){
                a[i+1][j+2] = a[i][j]+1;
                q.push(make_pair(i+1, j+2));
            }
            if((i-1)>=0 and (i-1)<N and (j+2)>=0 and (j+2)<N and a[i-1][j+2] == 0){
                a[i-1][j+2] = a[i][j]+1;
                q.push(make_pair(i-1, j+2));
            }
            if((i-2)>=0 and (i-2)<N and (j+1)>=0 and (j+1)<N and a[i-2][j+1] == 0){
                a[i-2][j+1] = a[i][j]+1;
                q.push(make_pair(i-2, j+1));
            }
            if((i+2)>=0 and (i+2)<N and (j+1)>=0 and (j+1)<N and a[i+2][j+1] == 0){
                a[i+2][j+1] = a[i][j]+1;
                q.push(make_pair(i+2, j+1));
            }
            if((i-1)>=0 and (i-1)<N and (j-2)>=0 and (j-2)<N and a[i-1][j-2] == 0){
                a[i-1][j-2] = a[i][j]+1;
                q.push(make_pair(i-1, j-2));
            }
            
            if((i+1)>=0 and (i+1)<N and (j-2)>=0 and (j-2)<N and a[i+1][j-2] == 0){
                a[i+1][j-2] = a[i][j]+1;
                q.push(make_pair(i+1, j-2));
            }
            
            if((i-2)>=0 and (i-2)<N and (j-1)>=0 and (j-1)<N and a[i-2][j-1] == 0){
                a[i-2][j-1] = a[i][j]+1;
                q.push(make_pair(i-2, j-1));
            }
            
            if((i+2)>=0 and (i+2)<N and (j-1)>=0 and (j-1)<N and a[i+2][j-1] == 0){
                a[i+2][j-1] = a[i][j]+1;
                q.push(make_pair(i+2, j-1));
            }
        }
        return a[s2 - 1][d2-1];
        
    }
};

// { Driver Code Starts.
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        vector<int>KnightPos(2);
        vector<int>TargetPos(2);
        int N;
        cin >> N;
        cin >> KnightPos[0] >> KnightPos[1];
        cin >> TargetPos[0] >> TargetPos[1];
        Solution obj;
        int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
        cout << ans <<"\n";
    }
    return 0;
}  // } Driver Code Ends