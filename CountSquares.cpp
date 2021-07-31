#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
   int sq = sqrt(n);
   if(sq * sq == n)
   cout<<sq - 1;
   else
   cout << sq;
   
}