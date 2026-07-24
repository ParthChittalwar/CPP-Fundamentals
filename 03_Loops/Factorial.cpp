#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,fact=1;
    cin>>n;

    for(int i=1;i<=n;i++){
        fact = fact  * i;
    }
    cout<<fact;
    

    return 0;
}