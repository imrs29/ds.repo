#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here     
        int min = matrix[0][0], max = matrix[0][0];
        r = matrix.size();
        c = matrix[0].size();
        for(int i = 0; i < matrix.size(); i++){
            if(matrix[i][0] < min){
                min = matrix[i][0];
            }
            if(matrix[i][matrix[i].size()-1] > max){
                max = matrix[i][matrix[i].size()-1];
            }
        }
        
        int desired_element = (1+ r*c)/2;
        while(min < max){
            int mid = (max + min)/2;
            int count = 0;
            for(int i = 0; i < matrix.size(); i++){
            count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            }
            if(count < desired_element){
            min = mid + 1;
            }
            else{
            max = mid;
        }}
        return min;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends