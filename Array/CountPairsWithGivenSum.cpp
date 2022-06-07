/*
Difficulty Easy
Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.

Example 1:
Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2
Explanation: 
arr[0] + arr[1] = 1 + 5 = 6 
and arr[1] + arr[3] = 5 + 1 = 6.

Example 2:
Input:
N = 4, K = 2
arr[] = {1, 1, 1, 1}
Output: 6
Explanation: 
Each 1 will produce sum 2 with any 1.
*/

/*
Approach 1st Brute Force
T.C O(n^2)
 int getPairsCount(int arr[], int n, int k) 
 {
    int pair=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==k)
            {
                pair++;
            }
        }
    }
    return pair;
}
*/

/*
Approach 2nd Dynamic programming algorithm
*/

#include <bits/stdc++.h>
using namespace std;

 int getPairsCount(int arr[], int n, int k) {
    unordered_map<int, int>mp;
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]])
        {
            count+=mp[arr[i]];
        }
        mp[k-arr[i]]++;
    }
    return count;
}

int main()
{
    int N = 4, K = 6;
    int arr[] = {1, 5, 7, 1};
    cout<<getPairsCount(arr,N,K);
}

