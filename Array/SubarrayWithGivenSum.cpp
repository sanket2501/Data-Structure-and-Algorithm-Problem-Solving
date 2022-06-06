/*
Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.

In case of multiple subarrays, return the subarray which comes first on moving from left to right.

Example 1:

Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.
 
Example 2:

Input:
N = 10, S = 15
A[] = {1,2,3,4,5,6,7,8,9,10}
Output: 1 5
Explanation: The sum of elements 
from 1st position to 5th position
is 15.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> subarraySum(int arr[], int n, long long s)
{
    vector<int>ans;
    int head=1;
    int tail=0;
    int sum=0;
    // Your code here
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i ; j<n ; j++)
        {
            sum=sum+arr[j];
            if(sum==s)
            {
                return {i+1,j+1};
            }
            else
            {
                if(sum>s)
                {
                    break;
                }
            }
            
        }
    }
    return {-1};
}

int main()
{
    int N = 10, S = 15;
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    vector<int> res=subarraySum(A,N,S);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i];
    }
}