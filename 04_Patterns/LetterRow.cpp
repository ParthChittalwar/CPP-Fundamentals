#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=n;j++){
            cout<<char(i + 64)<<" ";
        }
        cout<<endl;
    }

    return 0;
}