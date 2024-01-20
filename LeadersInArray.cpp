#include<bits/stdc++.h>
using namespace std;

//tc-O(n^2) sc-O(n)
int leaders(int arr[],int n){
    vector<int>ans;
    for(int i=0;i<n;i++){
        int leader=1;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                leader=0;
                break;
            }
            if(arr[j]==arr[i]){
                leader=false;
                break;
            }
        }
        if(leader){
            ans.push_back(arr[i]);
        }
    }

    for(auto &it:ans){
        cout<<it<<" ";
    }
}

//tc-O(N) sc-O(N)
int leaderss(int arr[],int n){
    vector<int>ans;
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
            maxi=arr[i];
        }
    }
    for(auto &it: ans){
        cout<<it<<" ";
    }
}

int main(){
    int n=6;
    int arr[n]={10,22,12,3,0,6};
    leaders(arr,n);
    cout<<endl;
    leaderss(arr,n);

}
