#include<bits/stdc++.h>
using namespace std;

//set Data Structure tc-O(nlogn+n) sp-O(n)
int removeDuplicate(int arr[],int n){
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(auto &str: st){
        cout<<str<<" ";
    }
}

//tc-O(nlogn+n) sp-O(n)
int removeDuplicatee(int arr[],int n){
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int index=0;
    for(auto &it : st){
        arr[index]=it;
        index++;
    }
    return index;
}

//2Pointer Approach
int removeDuplicateee(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<" Element";
        cin>>arr[i];
    }

    cout<<"2 Pointer Approach"<<removeDuplicateee(arr,n)<<endl;
    removeDuplicate(arr,n);
    cout<<endl;
    int index=removeDuplicatee(arr,n);
    for(int i=0;i<index;i++){
        cout<<arr[i];
    }
    return 0;
}