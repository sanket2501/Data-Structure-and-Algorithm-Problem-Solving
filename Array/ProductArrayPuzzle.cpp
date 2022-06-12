/*
Difficulty Easy
Given an array nums[] of size n, construct a Product Array P (of same size n) such that P[i] is equal to the product of all the elements of nums except nums[i].

Example 1:

Input:
n = 5
nums[] = {10, 3, 5, 6, 2}
Output:
180 600 360 300 900
Explanation: 
For i=0, P[i] = 3*5*6*2 = 180.
For i=1, P[i] = 10*5*6*2 = 600.
For i=2, P[i] = 10*3*6*2 = 360.
For i=3, P[i] = 10*3*5*2 = 300.
For i=4, P[i] = 10*3*5*6 = 900.

Example 2:

Input:
n = 2
nums[] = {12,0}
Output:
0 12

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)
*/

#include<bits/stdc++.h>
using namespace std;

vector<long long int> productExceptSelf(vector<long long int>& nums, int n)
{

    vector<long long int>ans;
    long long int prod=1;
    int zero=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==0)
        {
            zero++;
        }
        else
        {
            prod*=nums[i];
        }
    }
    
    if(zero>1)
    {
        for(int i=0;i<n;i++)
        {
            ans.push_back(0);
        }
    }
    
    else if(zero==1)
    {
            for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                ans.push_back(prod);
            }
            else
            {
                ans.push_back(0);
            }
        }
    }
    
    else
    {
        for(int i=0;i<n;i++)
        {
            ans.push_back(prod/nums[i]);
        }
    }   
    return ans;
}

int main()
{
    int n = 5;
    vector<long long int> nums{10, 3, 5, 6, 2};
    vector<long long int>ans=productExceptSelf(nums, n);
}