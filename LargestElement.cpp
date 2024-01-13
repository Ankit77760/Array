#include<bits/stdc++.h>
using namespace std;

//using max variable tc-O(n) sc-O(1)
int LargestElement(int arr[],int n){
    int max=0;
    for(int i=0; i<n ; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

//sorting tc-O(N*logN) sp-O(1)
int largestElement(vector<int> &arr, int n) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}



int main(){
    int n;
    cout<<"Enter Size of Array ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<" Element ";
        cin>>array[i];
    }
    cout<<"Largest Element Using Max Variable: "<<LargestElement(array,n)<<endl;
    cout<<"Using Sorting Technique In Vector: ";
    vector<int> arr1 = {2,5,1,3,0};
    cout<<largestElement(arr1, 5);

    return 0;
}