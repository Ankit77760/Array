#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>&a,int num){
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]==num){
            return true;
        }
    }
    return false;
}

//tc-O(N^2) sc-O(1);
int longestSuccessiveElements(vector<int>&arr) {
    int n=arr.size();
    int longest=1;
    for(int i=0;i<n;i++){
        int counter=1;
        int x=arr[i];
        while(linearSearch(arr,x+1)==true){
            x=x+1;
            counter=counter+1;
        }
        longest=max(longest,counter);
    }

    cout<<longest;
}

//tc-O(NlogN)+O(N) sc-O(1)
int longestSuccessiveElementss(vector<int>&arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int count=0;
    int smaller=INT_MIN;
    int longest=1;
    for(int i=0;i<n;i++){
        if(arr[i]-1==smaller){
            count++;
            smaller=arr[i];
        }
        else if(arr[i]!=smaller){
            count=0;
            smaller=arr[i];
        }
        longest=max(longest,count);
    }
    return longest;
}

//optimal solution tc-O(3N) sc-O(N)
int longestSuccessiveElementsss(vector<int>&arr){
    int n=arr.size();
    if(n==0) return 0;

    int longest=1;
    unordered_set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }

    for(auto &it:st){
        if(st.find(it-1)==st.end()){
            int cnt=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                x=x+1;
                cnt++;
            }
            longest=max(longest,cnt);
        }
    }
    return longest;

}

int main(){
    vector<int>arr={1,2,2,1};
    longestSuccessiveElements(arr);
}