#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    ch = cin.get();
    int num=0;
    int ctch = 0, ctnum=0,ctwsp=0;
    while(ch != '$'){
        if(ch >= 'a' && ch <= 'z'){
            ctch++;
        }else if(ch >= '0' && ch <= '9'){
            ctnum++;
        }else if(ch == ' ' || ch == '\t' || ch == '\n'){
            ctwsp++;
        }
        ch = cin.get();
    }
    cout << ctch << " " << ctnum << " "<<ctwsp;
}
