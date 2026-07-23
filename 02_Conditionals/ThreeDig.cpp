#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    if(n>=100 && n<1000){
        cout<<"Three Digit";
    }else{
        cout<<"Not Three Digit";
    }

    return 0;
}