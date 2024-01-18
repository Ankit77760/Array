#include<bits/stdc++.h>
using namespace std;

//tc-O(N^2) sc-O(1)
int maxSubArray(int arr[],int n,int k){
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]+arr[j]==k){
                flag=1;
                cout<<(j+1)-(i+1);
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==0){
        return -1;
    }
    return -1;
}



int main(){
    int arr[5]={1,1,1,1,3};
    maxSubArray(arr,5,4);
}