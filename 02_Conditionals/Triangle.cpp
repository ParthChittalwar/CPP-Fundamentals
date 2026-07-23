#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin>>a>>b>>c;

    if(a+b>c && a+c>b && b+c>a){
        cout<<"Triangle";
    }else{
        cout<<"Not Triangle";
    }

    return 0;
}