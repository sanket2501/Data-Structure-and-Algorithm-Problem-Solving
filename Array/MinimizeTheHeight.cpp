/*
Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once.
Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.
Note: Assume that height of the tower can be negative.
A slight modification of the problem can be found here. 

Example 1:
Input:
K = 2, N = 4
Arr[] = {1, 5, 8, 10}
Output:
5
Explanation:
The array can be modified as 
{3, 3, 6, 8}. The difference between 
the largest and the smallest is 8-3 = 5.

Example 2:
Input:
K = 3, N = 5
Arr[] = {3, 9, 12, 16, 20}
Output:
11
Explanation:
The array can be modified as
{6, 12, 9, 13, 17}. The difference between 
the largest and the smallest is 17-6 = 11. 

*/

#include<bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k) 
{        
        sort(arr,arr+n);
        int minvalue,maxvalue;
        int ans=arr[n-1]-arr[0];
        for(int i=1;i<n;i++)
        {
            minvalue=min(arr[0]+k,arr[i]-k);
            maxvalue=max(arr[i-1]+k,arr[n-1]-k);
            ans=min(ans,maxvalue-minvalue);
        }
        return ans;
}

int main()
{
  int n,k;
  cin>>k>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  cout<<getMinDiff(arr,n,k);
}
