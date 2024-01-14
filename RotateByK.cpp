#include<bits/stdc++.h>
using namespace std;

//rotate by 1 position tc-O(N) sp-O(N)
int rotateByK(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

//sp-O(N) tc-O(n+k)
int rotateByKK(int arr[],int n,int k){
    k=k%n;
    int arrr[k];
    for(int i=0;i<k;i++){
        arrr[i]=arr[i];
    }
    int index=0;
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
        index++;
    }
    int j=0;
    for(int i=index;i<n;i++){
        arr[i]=arrr[j];
        j++;
    }
}

// void reverseA(int arr[],int start, int end){
//     while(start<=end){
//         int temp=arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;
//         start++;
//         end--;
//     }
// }

//reversal sp-O(N) tc-O(d+(n-d)+n)=O(2N)
int rotateByKKK(int arr[],int n,int k){
    k=k%n;
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);
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
    //rotateByK
    rotateByKKK(arr,n,7);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}