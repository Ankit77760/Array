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

//kadane's Algorith
int KadaneAlgo(int arr[],int n){
    int max=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum>max){
            max=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<max;
}

int main(){
    int arr[5]={1,1,1,1,3};
    maxSubArray(arr,5,4);
}