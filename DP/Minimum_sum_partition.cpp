/*
Given an array arr of size n containing non-negative integers, the task is to divide it into two sets S1 and S2 such that the absolute difference between their sums is minimum and find the minimum difference


Example 1:

Input: N = 4, arr[] = {1, 6, 11, 5} 
Output: 1
Explanation: 
Subset1 = {1, 5, 6}, sum of Subset1 = 12 
Subset2 = {11}, sum of Subset2 = 11   
Example 2:
Input: N = 2, arr[] = {1, 4}
Output: 3
Explanation: 
Subset1 = {1}, sum of Subset1 = 1
Subset2 = {4}, sum of Subset2 = 4
*/



#include<bits/stdc++.h>
using namespace std;

int minDifference(int arr[], int n)  { 
    // Your code goes here
    int ans=INT_MAX;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    
    bool t[n+1][sum+1];
    
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(i==0) t[i][j]=false;
            if(j==0) t[i][j]=true;
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
            {
                t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
            }
            else {
                t[i][j]=t[i-1][j];
            }
        }
    }
    
    vector<int> s1;
    
    for(int i=0;i<sum/2+1;i++)
    {
        if(t[n][i]) s1.push_back(i);
    }
    
    for(int it:s1)
    {
        ans=min(ans,sum-(2*it));
    }
    return ans;
} 

int main()
{
    int N = 4, arr[] = {1, 6, 11, 5};
    cout<<minDifference(arr,N);
}