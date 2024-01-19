#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[n]={5,4,3,2,1};

    int mini=arr[0];
    int profit=0;
    for(int i=0;i<n;i++){
        int cost=arr[i]-mini;
        profit=max(mini,cost);
        mini=min(arr[i],mini);
    }
    cout<<profit;

}