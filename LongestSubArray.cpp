#include <bits/stdc++.h>
using namespace std;

// tc-O(N^3) sc-O(1)
int LongestSubarray(vector<int> &arr, int k)
{
    int n = arr.size();
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            long long sum = 0;
            for (int K = i; K <= j; K++)
            {
                sum += arr[K];
            }
            if (sum == k)
            {
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
}

// tc-O(N^2) sc-O(1)
int LongestSubarrayy(vector<int> &arr, int k)
{
    int len = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
}

//tc-O(n^2) sc-O(N)
int longestSubarrayWithSumK(vector<int> a, long long k) {
    map<long long,int>preSumMap;
    long long sum=0;
    int maxlen=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        long long rem=sum-k;
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len=i-preSumMap[rem];
            maxlen=max(maxlen,len);
        }
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxlen;
}

//tc-O(N) sp-O(1)
int longestSubarrayWithSumKk(vector<int>&a,int k){
    int n=a.size();
    int sum=a[0];
    int left=0;
    int right=0;
    int maxlen=0;
    while(right<n){
        while(left <= right && sum>k){
            sum=sum-a[left];
            left++;
        }
        if(sum==k){
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<n){
            sum=sum+a[right];
        }
    }
}

int main()
{

    vector<int> vt = {1, 1, 1, 2, 3};
    cout << LongestSubarray(vt, 3) << endl;

    cout << LongestSubarrayy(vt, 3) << endl;
    cout << longestSubarrayWithSumK(vt, 3);
    return 0;
}