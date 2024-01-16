#include<bits/stdc++.h>
using namespace std;

//tc-O(N^2) sp-O(1)
int NumberAppearOnce(int arr[],int n){
    for(int i=0;i<n;i++){
        int num=arr[i];
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==num){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i];
        }
    }
}

//hashing tc-O(3N) sp-O(N)
int NumberAppearOncee(int arr[],int n){
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }

    int hash[maxi]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        if(hash[arr[i]]==1){
            cout<<arr[i];
        }
    }

}

//tc-O(NlogM m->N/2+1  +n/2+1) sp-O((n/2)+1)
int NumberAppearOnceeee(int arr[],int n){
    map<long long,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it:mp){
        if(it.second==1){
            cout<<it.first;
        }
    }
}

int NumberAppearOnceeeee(int arr[],int n){
    int xor1=0;
    for(int i=0;i<n;i++){
        xor1=xor1^arr[i];
    }
    cout<<xor1;
}

int main(){
    int arr[5]={1,2,2,3,3};
    NumberAppearOnceeeee(arr,5);
}