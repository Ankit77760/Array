#include<bits/stdc++.h>
using namespace std;

vector<int> nextpermutation(vector<int>arr){
    int n=arr.size();
    int index=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            index=i;
            break;
        }
    }
    if(index==-1){
        reverse(arr.begin(),arr.end());
        return arr;
    }
    for(int i=n-1;i>index;i--){
        if(arr[i]>arr[index]){
            swap(arr[i],arr[index]);
            break;
        }
    }
    reverse(arr.begin()+index+1,arr.end());
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    return arr;
}

int main(){
    vector<int>vt={1,3,2};
    nextpermutation(vt);
}