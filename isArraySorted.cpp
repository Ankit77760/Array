#include<bits/stdc++.h>
using namespace std;

//tc-O(n) sc-O(1) 
string isArraySorted(int arr[],int n){
    for(int i=1;i<n-1;i++){
        if(arr[i-1]<=arr[i]){

        }
        else{
            return "Not Sorted";
        }
    }
    return "Sorted";
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<" Element: ";
        cin>>arr[i];
    }

    cout<<isArraySorted(arr,n);

}