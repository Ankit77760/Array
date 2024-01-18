#include<bits/stdc++.h>
using namespace std;

//tc-O(n^2) sc-O(1)
int MajorityElement(int arr[],int n){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>(n/2)){
            cout<<arr[i];
            break;
        }
    }
}

//tc-O(NlogN)+O(N) sc-O(N)
int MajorityElementt(int arr[],int n){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto &it:mpp){
        if(it.second > (n/2)){
            cout<<it.first;
            break;
        }
    }
}

//tc-O(2N) sc-O(1)
int MajorrityElementttt(int arr[],int n){
    int el;
    int count=0;
    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            el=arr[i];
        }
        else if(arr[i]==el){
            count++;
        }
        else{
            count--;
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==el){
            cnt=cnt+1;
        }
    }
    if(cnt>(n/2)){
        cout<<el;
    }
}

int main(){
    int arr[5]={1,1,2,1,1};
    MajorrityElementttt(arr,5);
}