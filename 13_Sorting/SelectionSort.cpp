#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n){
    for(int i=0; i<=n-2; i++){
        int mini = i;
        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
}

int main(){
    int n;
    cout<<"Enter Size : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Array : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    SelectionSort(arr, n);

    cout<<"Sorted Array : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}