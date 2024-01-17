#include<bits/stdc++.h>
using namespace std;

//tc-O(N^2) sc-O(1)
int sum(int arr[],int n,int k){
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==k){
                flag=1;
                cout<<arr[i]<<" "<<arr[j]<<endl;
                cout<<i<<" "<<j;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==0){
        cout<<"Not Found";
    }
}

//tc-O(<N^2)  but yet brute force
int summ(int arr[],int n,int k){
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                flag=1;
                cout<<arr[i]<<" "<<arr[j]<<" ";
                cout<<endl<<i<<j;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==0){
        cout<<"Element Not Found";
    }
}

//tc-O(NlogN) sc-O(N)
int summm(int arr[],int n,int k){
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int a=arr[i];
        int more=k-a;
        if(mp.find(more)!=mp.end()){
            return 1;
        }
        mp[a] = i;
    }
    return -1;
}

//2pointer aproach tc-O(N) sc-O(1)
int summmm(int arr[],int n,int k){
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int left=0;
    int right=n-1;
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==k){
            cout<<arr[left]<<" "<<arr[right];
            break;
        }
        else if(sum<k){
            left++;
        }
        else {
            right--;
        }
    }
    
}

int main(){
    int arr[5]={2,6,5,8,11};
    summmm(arr,5,14);
    return 0;
}