/*
Difficulty Medium
Given a string S, return the sum of beauty of all its substrings.
The beauty of a string is defined as the difference in frequencies between the most frequent and least frequent characters.

For example, the beauty of string "aaac" is 3 - 1 = 2.
Example 1:

Input:
S = "aaac"
Output:
3
Explanation: The substrings with non - zero beauty are ["aaac","aac"] where beauty of "aaac" is 2 and beauty of "aac" is 1.
 

Example 2:

Input:
S = "accesbility"
Output:
62

*/

#include<bits/stdc++.h>
using namespace std;

int beautySum(string s) {
    // Your code goes here
    int dp[26];
    int sum=0;
    int n=s.length();
    
    for(int i=0;i<n;i++)
    {
        memset(dp,0,sizeof(dp));
        for(int j=i;j<n;j++)
        {
            int minE=INT_MAX;
            int maxE=INT_MIN;
            dp[s[j]-'a']++;
            for(int k=0;k<26;k++)
            {
                if(dp[k])
                    minE=min(minE,dp[k]);
                maxE=max(maxE,dp[k]);
            }
            sum+=maxE-minE;
        }
    }
    return sum;
}

int main()
{
    string S = "accesbility";
    cout<<beautySum(S);
}