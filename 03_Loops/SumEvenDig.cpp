#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,sum=0;
    cin>>n;

    while (n>0)
    {
        int digit = n % 10;
        if(digit % 2 == 0)
        sum = sum + digit;
        n = n / 10;
    }
    cout<<sum;
    

    return 0;
}