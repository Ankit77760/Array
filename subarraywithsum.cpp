#include<bits/stdc++.h>
using namespace std;

int subarr(int arr[],int n,int k){
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int K=i;K<=j;K++){
                sum=sum+arr[K];
            }
            if(sum==k){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return cnt;
}

int main(){
    int arr[5]={1,2,2,3,2};
    subarr(arr,5,3);
}