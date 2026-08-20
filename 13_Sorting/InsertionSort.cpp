#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

int main(){
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    int arr[n];

    cout<<"Enter Array : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    InsertionSort(arr, n);

    cout<<"Sorted Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}