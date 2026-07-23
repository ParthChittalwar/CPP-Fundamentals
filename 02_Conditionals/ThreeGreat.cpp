#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"a Greatest";
        }else{
            cout<<"c Greatest";
        }
    }else{
        if(b>c){
            cout<<"b Greatest";
        }else{
            cout<<"c Greatest";
        }
    }

    return 0;
}