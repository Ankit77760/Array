#include<bits/stdc++.h>
using namespace std;

//tc-O(n*m) sc-O(n)
int spiral(int arr[],int n,int m){
    int left=0;
    int right=m-1;
    int top=0;
    int bottom=n-1;
    vector<int>ans;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right){
            ans.push_back(arr[i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(arr[i]);
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(arr[i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(arr[i]);
            }
            left++;
        }
    }
    
}

int main(){

}