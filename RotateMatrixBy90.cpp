#include<bits/stdc++.h>
using namespace std;

//brute tc-O(n^4) sc-O(N)
void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
         vector < vector < int >> rotated(n, vector < int > (n, 0));
         for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
                 rotated[j][n-1-i]=matrix[i][j];
             }
         }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=rotated[i][j];
            }
        }
}

int rotatee(int arr[][],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=arr[j][i];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            reverse(arr[i].begin(),arr[i].end());
        }
    }
}

int main(){


}