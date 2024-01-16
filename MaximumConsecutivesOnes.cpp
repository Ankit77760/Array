#include<bits/stdc++.h>
using namespace std;

//tc-O(N) sp-O(1)
int maximumConsecutiveOnes(int arr[],int n){
    int count=0;
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1)
        {
            count++;
        }
        else if(arr[i]==0){
            count=0;
        }
        if(max<count){
            max=count;
        }
    }
    cout<<max;
}


int main(){
    int arr[5]={0,0,0,0,0};
    maximumConsecutiveOnes(arr,5);
}