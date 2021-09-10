#include <bits/stdc++.h>
using namespace std;


vector<int> Smallestonleft(int arr[], int n);


int main() {
    
    int t;
    
    cin >> t;
    
    while(t--){
        
        int n;
        cin >> n;
        int arr[n+1];
        
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        
        vector<int> b;
        b = Smallestonleft(arr, n);
        for(int i=0;i<n;i++)
            cout << b[i] << " ";
           
        cout << endl;
        
        
    }
    
    return 0;
}// } Driver Code Ends



vector<int> Smallestonleft(int arr[], int n)
{
    // Complete the function
    vector<int> v;
    stack<int> s;
    
    for(int i = 0; i < n; i++){
        if(s.empty())
        {
            v.push_back(-1);
        }else{
            while(s.size() > 0 && s.top() >= arr[i]){
                s.pop();
            }
            if(s.empty()){
                v.push_back(-1);
            }else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    return v;
}


/*  2nd Implementation */

#include <bits/stdc++.h>
using namespace std;


vector<int> Smallestonleft(int arr[], int n);


int main() {
    
    int t;
    
    cin >> t;
    
    while(t--){
        
        int n;
        cin >> n;
        int arr[n+1];
        
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        
        vector<int> b;
        b = Smallestonleft(arr, n);
        for(int i=0;i<n;i++)
            cout << b[i] << " ";
           
        cout << endl;
        
        
    }
    
    return 0;
}// } Driver Code Ends



vector<int> Smallestonleft(int arr[], int n)
{
    // Complete the function
    vector<int> v;
   set<int> s;
   for(int i=0; i <n; i++){
       s.insert(arr[i]);
       auto it = s.find(arr[i]);
       if(it == s.begin()){
           v.push_back(-1);
       }else{
           it--;
           v.push_back(*it);
       }
   }
   return v;
}