#include<bits/stdc++.h>
using namespace std;

//tc-O(n^3) sc-O(1)
int subarray(int arr[],int n,int target){
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int xorr=0;
            for(int k=i;k<=j;k++){
                xorr=xorr^arr[k];
            }
            if(xorr==target){
                cnt++;
            }
        }
    }
    return cnt;
}

//tc-O(n^2) sc-o(1)
int subarrayy(int arr[],int n,int target){
    int cnt=0;
    for(int i=0;i<n;i++){
        int xorr=0;
        for(int j=i;j<n;j++){
            xorr=xorr^arr[j];
            if(xorr==target){
                cnt++;
            }
        }
    }
    return cnt;
}

//tc-O(N) || NlogN sc-O(N)
int subarrayyy(int arr[],int n,int target){
    map<int,int>mpp;
    int cnt=0;
    int xr=0;
    mpp[xr]++;
    for(int i=0;i<n;i++){
        xr=xr^arr[i];
        int x=xr^target;
        cnt+=mpp[x];
        mpp[xr]++;
    }
    return cnt;
}

int main(){
    int n =4;
    int arr[n]={1,2,3,2};
    cout<<subarrayy(arr,n,2);
}