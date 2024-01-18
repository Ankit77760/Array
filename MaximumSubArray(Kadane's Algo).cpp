#include<bits/stdc++.h>
using namespace std;
int MaxSubArray(int arr[], int n, int k)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout<<(j+1)-(i+1);
                flag=1;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Not Equal";
    }
    return -1;
}

int main()
{
    int arr[5] = {1, 1, 1, 2, 3};
    MaxSubArray(arr, 5, 3);
}
