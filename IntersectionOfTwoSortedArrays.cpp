#include<bits/stdc++.h>
using namespace std;

//tc-O(2N) sp-O(N)
vector<int> interSectionOfTwoSortedArrays(vector<int>arr1, vector<int>arr2){
    int n1=arr1.size();
    int n2=arr2.size();
    int i=0;
    int j=0;
    vector<int>intersection;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr1[i]){
            j++;
        }
        else if(arr1[i]==arr2[j]){
            intersection.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(auto &it: intersection){
        cout<<it<<" ";   
    }    
    
}

//tc-O(N^2) sc-O(N)
int interSectionOfTwoSortedArrays(int arr1[],int arr2[],int n,int m){
    int vis[m];
    for(int i=0;i<m;i++){
        vis[i]=0;
    }
    vector<int>vt;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j] && vis[j]!=1){
                vt.push_back(arr1[i]);
                vis[j]=1;
                break;
            }
            if(arr2[j]>arr1[i]){
                break;
            }
        }
    }
    for(auto &it: vt){
        cout<<it<<" ";
    }
}

int main(){
    int n;
    int m;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter M: ";
    cin>>m;

    int arr1[n];
    int arr2[m];

    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<" Element: ";
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cout<<"Enter "<<i<<" Element: ";
        cin>>arr2[i];
    }

    interSectionOfTwoSortedArrays(arr1,arr2,n,m);
    
}