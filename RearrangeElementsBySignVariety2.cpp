#include<bits/stdc++.h>
using namespace std;

//tc-O(n)+O(min(pos,neg))+O(leftover)....O(2N)   sc-o(n)
int RearrangeElement(int arr[],int n){
    vector<int>pos;
    vector<int>neg;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }

    for(int i=0;i<n/2;i++){
        arr[i*2]=pos[i];
        arr[i*2+1]=neg[i];
    }

    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        int index=neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
            arr[index]=pos[i];
            index++;
        }
    }   
    else{
        for(int i=0;i<pos.size();i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        int index=pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
            arr[index]=neg[i];
            index++;
        }
    }
}

int main(){

}