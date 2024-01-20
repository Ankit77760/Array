#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>&a,int num){
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]==num){
            return true;
        }
    }
    return false;
}

int longestSuccessiveElements(vector<int>&arr) {
    int n=arr.size();
    int longest=1;
    for(int i=0;i<n;i++){
        int counter=1;
        int x=arr[i];
        while(linearSearch(arr,x+1)==true){
            x=x+1;
            counter=counter+1;
        }
        longest=max(longest,counter);
    }

    cout<<longest;
}

int main(){
    vector<int>arr={1,2,2,1};
    longestSuccessiveElements(arr);
}