#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,count=0,sum=0;
    cin >> n;

    while(n>0){
        int digit = n % 10;
        sum = sum + digit ;
        n = n / 10;
    }
    cout<<sum;

    return 0;
}