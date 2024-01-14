#include<bits/stdc++.h>
using namespace std;

//set tc-O(nlogn)+O(n2logn)+O(n1+n2) sp-O(N+M);

//tc-O(2N) sp-O(N+M)
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int>unionArr;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(unionArr.size()==0 || unionArr.back()!=a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionArr.size()==0 || unionArr.back()!=b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
        }   
    }
    while(i<n1){
        if(unionArr.size()==0 || unionArr.back()!=a[i]){
            unionArr.push_back(a[i]);
        }
        i++;
    }
    while(j<n2){
        if(unionArr.size()==0 || unionArr.back()!=b[j]){
            unionArr.push_back(b[j]);
        }
        j++;
    }
    return unionArr;
}

int main(){
    int n,m;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter m: ";
    cin>>m; 

    int arr[n];
    int arr2[m];

    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<" Element: ";
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cout<<"Enter "<<i<<" Element: ";
        cin>>arr2[i];
    }

    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }

    for(int i=0;i<m;i++){
        st.insert(arr2[i]);
    }

    for(auto &it:st){
        cout<<it<<" ";
    }


}