#include<bits/stdc++.h>
using namespace std;

//tc-O(2N) sc-O(N)
int RearrangeElement(int arr[],int n){
    vector<int>vt;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            vt.push_back(arr[i]);
        }
    }
    vector<int>vtt;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            vtt.push_back(arr[i]);
        }
    }
    for(int i=0;i<n/2;i++){
        arr[2*i]=vt[i];
        arr[2*i+1]=vtt[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int RearrangeElementt(int arr[],int n){
    int posIndex=0;
    int negIndex=1;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            arr[posIndex]=arr[i];
            posIndex++;
        }
        else{
            arr[negIndex]=arr[i];
            negIndex--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
}

int main(){
    int n=6;
    int arr[n]={1,2,-1,-2,4,-3};

    RearrangeElementt(arr,6);
}