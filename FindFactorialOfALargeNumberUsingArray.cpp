// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int>res;
        int num = N;
        while(num > 0){
            res.push_back(num % 10);
            num /= 10;
        }
        for(int i = N-1; i >= 1; i--){
            int carry = 0;
            for(int j = 0; j <res.size(); j++){
                int product = res[j] * i + carry;
                res[j] = product % 10;
                carry = product / 10;
            }
            while(carry){
                res.push_back(carry % 10);
                carry /= 10;
            }
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends