#include<bits/stdc++.h>
using namespace std;

//sp-O(N) tc-O(2N)
int moveZerosToEnd(int arr[],int n){
    int temp[n];
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp[j]=arr[i];
            j++;
        }
    }
    for(int i=j;i<n;i++){
        temp[i]=0;
    }
    for(int i=0;i<n;i++){
        cout<<temp[i];
    }
}

//tc-O(N) sp-O(1)
int moveZerosToEndd(int arr[],int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<" Element";
        cin>>arr[i];
    }

    moveZerosToEndd(arr,n);

}