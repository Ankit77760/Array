#include<bits/stdc++.h>
using namespace std;

//tc-O(N*2) sc-O(2)
int MajorityElement(int arr[],int n){
    vector<int>ans;
    for(int i=0;i<n;i++){   
        if(ans.size()==0 || ans[0]!=arr[i]){
            int count=0;
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
                if(count>(n/3)){
                    ans.push_back(arr[i]);
                    break;
                }
            }
        }
        if(ans.size()==2){
            break;
        }
    }
    for(auto &it:ans){
        cout<<it<<" ";
    }
}

//tc-O(N*nlogn) sc-O(N) 
int MajorityElementt(int arr[],int n){
    vector<int>ans;
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]]>(n/3)){
            ans.push_back(arr[i]);
        }
        if(ans.size()==2){
            break;
        }
    }

    for(auto it:ans){
        cout<<it<<" ";
    }
}

//tc-O(N) sc-O(1)
int MajorityElementtt(int arr[],int n){
    int cnt1=0;
    int cnt2=0;
    int el1;
    int el2;
    for(int i=0;i<n;i++){
        if(cnt1==0 && arr[i]!=el2){
            cnt1++;
            el1=arr[i];
        }
        else if(cnt2==0 && arr[i]!=el1){
            cnt2++;
            el2=arr[i];
        }
        else if(el1==arr[i]){
            cnt1++;
        }
        else if(el2==arr[i]){
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }

}

int main(){
    int arr[6]={1,1,2,2,2,1};
    MajorityElement(arr,6);
}