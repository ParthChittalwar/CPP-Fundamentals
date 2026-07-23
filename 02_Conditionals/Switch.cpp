#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    switch(n){
        case 1 : 
        cout<<"Monday";
        break;

        case 2 : 
        cout<<"Tuesday";
        break;

        case 3 : 
        cout<<"Wednesday";
        break;

        default :
        cout<<"Invalid";
    }

    return 0;
}