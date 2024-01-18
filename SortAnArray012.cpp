#include<bits/stdc++.h>
using namespace std;

int Sort012(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//tc-O(N)+O(N) sc=O(N)  one can also push it in same array optimizing space complexity
int Sort0122(int arr[],int n){
    int count0=0;
    int count1=0;
    int count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }
        if(arr[i]==1){
            count1++;
        }
        if(arr[i]==2){
            count2++;
        }
    }
    vector<int>vt;
    for(int i=0;i<count0;i++){
        vt.push_back(0);
    }
    for(int i=0;i<count1;i++){
        vt.push_back(1);
    }
    for(int i=0;i<count2;i++){
        vt.push_back(2);
    }

    for(auto &it:vt){
        cout<<it<<" ";
    }

}

//dutch national flag algorithm tc-O(N) sc-O(1)
int Sort01222(int arr[],int n){
    int low=0;
    int high=n-1;
    int mid=0;
    while (mid<=high)
    {
        if(arr[mid]==0){
            int temp=arr[low];
            arr[low]=arr[mid];
            arr[mid]=temp;
            low++;
            mid++;
        }
        if(arr[mid]==1){
            mid++;
        }
        if(arr[mid]==2){
            int temp=arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;
            high--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[5]={1,0,1,2,1};
    Sort012(arr,5);
    cout<<endl;
    Sort0122(arr,5);
    cout<<endl;
    Sort01222(arr,5);

}