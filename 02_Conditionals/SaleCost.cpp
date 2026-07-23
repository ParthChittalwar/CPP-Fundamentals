#include<iostream>
using namespace std;

int main(){
    int cost,sale;
    cin>>cost;
    cin>>sale;

    if(cost>sale){
        cout<<"Loss Of : ";
        cout<<cost - sale;
    }else{
        cout<<"Profit Of : ";
        cout<<sale - cost;
    }
}