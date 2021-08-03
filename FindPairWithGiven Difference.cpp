#include<bits/stdc++.h>
using namespace std;

// approach -1 tc--> O(N^2) sc --> O(1)
/*int main(){

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>> a[i];
    }

    int x;
    cin>> x;
    int ans = -1;
    for(int i=0; i < n; i++){
        int y = a[i] + x;
        for(int j = 0; j < n; j++){
            if(a[j] == y){
                ans = j;
                break;
            }
        }
    }
    cout << ans;
    
}*/

/* Method-2 
TC = O(n)
SC = O(1)

using map 

arr = [5,20,3,2,5,80]
x = 78

5 --> 1
20-->1
3-->1
2-->1
80-->1

for(int i = 0; i < n;i++){

int y = a[i] +x;
if(m[y]){
    ans = 1;
    break;
}
}
 code

 int main(){
    int t;
    cin >> t;
    while(t--){
    int n,x;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++)
    cin >> a[i];
    unordered_map<int,int>m;
    int f = -1;
    for(int i = 0; i < n; i++)
    m[a[i]] = 1;
    for(int i = 0; i < n; i++){
    if(m[a[i] + x]){
    f = 1;
    break;
    }
    }
    cout << f << endl;
    }
    return 0;
 }

 method - 3 
 tc --> o(nlogn)
 sc= o(1) */


 #include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    //code
    sort(arr, arr + size);
    int i = 0;
    int j = 1;
    
    while(i < size && j < size){
        if(i != j && arr[j] - arr[i] == n){
            
            return 1;
        }
        else if(arr[j] - arr[i]  < n)
        j++;
        else 
        i++;
    }
    return 0;
    
}
