#include<bits/stdc++.h>
using namespace std;

//sort and find tc-O(n*logn+n) sp-O(1)
int secondLargest(vector<int>&arr ,int n){
    sort(arr.begin(),arr.end());
    int max=arr[n-1];
    int smax=0;
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=max){
            smax=arr[i];
            break;
        }
    }
    return smax;
}

//first largest and then second largest tc-O(2N) sp-O(1)
int secondLargestE(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int slargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>slargest && arr[i]!=max){
            slargest = arr[i];
        }   
    }
    return slargest;
}

//optimal approach tc- O(n) sp-O(1)
int secondLargestEE(int arr[],int n){
    int slargest = -1;
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            slargest=max;
            max=arr[i];
        }
        else if(arr[i]<max && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    return slargest;
}


int main(){
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;

    int arr1[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<" Element: ";
        cin>>arr1[i];
    }

    cout<<"Second Largest Optimal Approach: "<<secondLargestEE(arr1,n)<<endl;

    cout<<"Second Largest Using Largest: "<<secondLargestE(arr1,n)<<endl;
  
    vector<int> arr = {2,5,1,1};
    cout<<"Second Largest by sorting: "<<secondLargest(arr, 4); 
} 