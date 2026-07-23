#include<iostream>
using namespace std;

int main(){
    int l,b;
    cin>>l;
    cin>>b;
    int para = 2 * (l + b);
    int area = l * b;
    if(area>para){
        cout<<"Area Greater";
    }else{
        cout<<"Parameter Greater";
    }

}