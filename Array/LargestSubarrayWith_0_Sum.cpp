/*
Difficulty Easy
Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.

Example 1:

Input:
N = 8
A[] = {15,-2,2,-8,1,7,10,23}
Output: 5
Explanation: The largest subarray with
sum 0 will be -2 2 -8 1 7.

T.C. O(N)

UTube https://www.youtube.com/watch?v=_yGf2rxwZlA&t=743s
*/

#include<bits/stdc++.h>
using namespace std;

int maxLen(vector<int>&A, int n)
{   
    unordered_map<int, int>mp;
    int sum=0;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
        if(sum==0)
        {
            maxi=i+1;
        }
        else
        {
            if(mp.find(sum)!=mp.end())
            {
                maxi=max(maxi, i-mp[sum]);
            }
            else
            {
                mp[sum]=i;
            }
        }
    }
    return maxi;
}

int main()
{
    int N = 8;
    vector<int> A{15,-2,2,-8,1,7,10,23};
    cout<<maxLen(A,N);
}
