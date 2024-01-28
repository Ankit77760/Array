#include<bits/stdc++.h>
using namespace std;

//tc-O(N^4) sc-O(no of quads)*2
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    set<vector<int>>st;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    if(nums[i]+nums[j]+nums[k]+nums[l]==target && i!=j && j!=k && k!=l && l!=i)
                    {
                        vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}

//tc-O(n*4logm) sc-O(N) +O(quads)*2
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n=nums.size();
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            set<int>hashset;
            for(int k=j+1;k<n;k++){
                long long sum = nums[i]+nums[j];
                sum+=nums[k];
                long long fourth=target-(sum);
                if(hashset.find(fourth)!=hashset.end()){
                    vector<int>temp={nums[i],nums[j],nums[k],int(fourth)};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[k]);
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}

//tc-O(n^3) sc-O(1)
vector<vector<int>> fourSum(vector<int>& nums, int target) {
       int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < n; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
           int k = j + 1;
            int l = n - 1;
            while (k < l) {
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];
                if (sum == target) {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++; l--;

                    //skip the duplicates:
                    while (k < l && nums[k] == nums[k - 1]) k++;
                    while (k < l && nums[l] == nums[l + 1]) l--;
                }
                else if (sum < target) k++;
                else l--;
            }
        }
    }
    return ans;
}


int main(){

}