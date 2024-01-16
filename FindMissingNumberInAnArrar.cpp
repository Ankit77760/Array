#include<bits/stdc++.h>
using namespace std;

//tc-O(N^2) sc-O(1)
int FindMissingNumberInAnArratt(int arr[],int n){
    for(int i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }
}

//Hashing tc-O(2n) sp-O(N)
int FindMissingNumberInAnArrattt(int arr[],int n){
    int hash[n+1]={0};
    for(int i=0;i<n-1;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[i]!=1){
            return i;
        }
    }
}

//tc-O(N) sp-O(1)
int FindMissingNumberInAnArrat(int arr[],int n){
    int total=0;
    for(int i=0;i<n;i++){
        total = total+arr[i];
    }
    int missing = (n*(n + 1)/2)-total;
    cout<<missing;   
}

//xor for includeing 0 tc-O(N) sp-O(1)
int FindMissingNumberInAnArratttt(int arr[],int n){
    int xor1=0;
    int xor2=0;
    for(int i=0;i<n-1;i++){
        xor2=xor2^arr[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^n;
    //if you remove the above line it calculates missing number from 0 itself
    int result = xor1^xor2;
    cout<<result;
}

int main(){
    int arr[5]={1,2,3,4};
    FindMissingNumberInAnArratttt(arr,5);


}
