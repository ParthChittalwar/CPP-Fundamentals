#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 10 , m =12;
    for(int i=1;i<=n;i++){ // n = rows
        for(int j=1;j<=m;j++){ //m = columns
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}