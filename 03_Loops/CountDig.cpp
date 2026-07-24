#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,count = 0;
    cin >> n;

    while(n>0){
        int digit = n % 10;
        count++;
        n = n / 10;
    }
    cout<<count;

    return 0;
}