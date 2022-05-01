/*
Difficulty medium
Given an array Arr[] that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray.

Example 1:
Input:
N = 5
Arr[] = {6, -3, -10, 0, 2}
Output: 180
Explanation: Subarray with maximum product
is [6, -3, -10] which gives product as 180.

Example 2:
Input:
N = 6
Arr[] = {2, 3, 4, 5, -1, 0}
Output: 120
Explanation: Subarray with maximum product
is [2, 3, 4, 5] which gives product as 120.
*/

#include<bits/stdc++.h>
using namespace std;

long long maxProduct(vector<int> arr, int n) {
    // code here
    long long maxprod=1,minprod=1,ans=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            maxprod=1;
            minprod=1;
            continue;
        }
        long long temp1=maxprod*arr[i];
        long long temp2=minprod*arr[i];
        maxprod=max(temp1, temp2);
        maxprod=max((long long)arr[i],maxprod);
        
        minprod=min(temp1, temp2);
        minprod=min((long long)arr[i],minprod);
        ans=max(ans,maxprod);
    }
    return ans;
}

int main()
{
    int N = 5;
    vector<int> Arr {6, -3, -10, 0, 2};
    cout<<maxProduct(Arr,N);
}