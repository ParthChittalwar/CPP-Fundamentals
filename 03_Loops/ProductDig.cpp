#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,mul=1;
    cin>>n;

    while(n>0){
        int digit = n % 10;
        mul = mul * digit;
        n = n / 10;
    }
    cout<<mul;

    return 0;
}