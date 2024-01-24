#include<bits/stdc++.h>
using namespace std;


void markRow(vector<vector<int>> &matrix, int n, int m, int i) {
    for (int j = 0; j < m; j++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}

void markCol(vector<vector<int>> &matrix, int n, int m, int j) {
    for (int i = 0; i < m; i++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}

//tc-O(N^3) sc-O(1)
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                markRow(matrix, n, m, i);
                markCol(matrix, n, m, j);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;
}

//tc-O(N^2) sc-O(N+M)
int setMatrix(int arr[][],int n,int m){
    int col[m]={0};
    int row[n]={0};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                col[j]=1;
                row[i]=1;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(col[j]==1 || row[i]==1){
                arr[i][j]=0;
            }
        }
    }
}



int main(){

    return 0;
}