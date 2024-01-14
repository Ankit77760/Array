#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[],int n,int num){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return 0;    
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];  

    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<" Element ";
        cin>>arr[i]; 
    }

    cout<<LinearSearch(arr,n,4);
}