#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n){

    for(int i=n-1; i>=1; i--){
        int didswap = 0;
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didswap = 1;
            }
        }
        if(didswap == 0){
            break;
        }
    }
}

int main(){
    int n;
    cout<<"Enter Size"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter Array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    BubbleSort(arr, n);

    cout<<"Sorted Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}