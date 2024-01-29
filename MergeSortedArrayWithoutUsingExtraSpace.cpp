#include<bits/stdc++.h>
using namespace std;

//tc-O(mlogm) +nlogn  sc-O(1)
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int m=b.size();
	for(int i=0;i<m;i++){
        a.push_back(b[i]);
    }
	sort(a.begin(),a.end());
	b.clear();
}

int main(){

}