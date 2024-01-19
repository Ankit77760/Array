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

vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int posIndex=0;
        int negIndex=1;

        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[negIndex]=nums[i];
                negIndex += 2;
            }
            else{
                ans[posIndex]=nums[i];
                posIndex+=2;
            }
        }

    for(auto &it:ans){
        cout<<it<<" ";
    }
    return ans;
}

int main(){
    vector<int>arr = {1,2,-1,-2,4,-3};
    rearrangeArray(arr);

}