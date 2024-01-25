#include<bits/stdc++.h>
using namespace std;

//given r and c find element
int ncr(int n,int r){
    long long res=1;

    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return (int)(res);
}
int pascal(int r,int c){
    int element = ncr(r-1,c-1);
    return element;

}

//given n tc-O(N*r) sc-O(1)
int pascall(int n){
    for(int c=1;c<n;c++){
        cout<<ncr(n-1,c-1)<<" ";
    }
}
//better tc-O(n) sc-O(1) 
int pascalll(int n){
    int ans=1;
    cout<<ans;
    for(int c=1;c<n;c++){
        ans=ans*(n-c);
        ans=ans/c;
        cout<<ans;
    }
}

//print pascal triangle tc-O(n^3) sc-O(N)
vector<vector<int>> pascallll(int n){
    vector<vector<int>>ans;
    for(int row=1;row<=n;row++){
        vector<int>templat;
        for(int col=1;col<=row;col++){
            templat.push_back(ncr(row-1,col-1));
        }
        ans.push_back(templat);
    }
    return ans;
}



int main(){
    vector<vector<int>> ans = pascallll(5);
    for(auto it:ans){
        for(auto el:it){
            cout<<el<<" ";
        }
        cout<<endl;
    }
}