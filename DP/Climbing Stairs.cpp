/*
Easy
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
*/

#include<bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
    vector<int> dp(n+1);
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}

/*
public int climbStairs(int n) {
    int firstStep = 0;
    int secondStep = 1;
    while (n-- > 0) {
        int temp = firstStep + secondStep;
        firstStep = secondStep;
        secondStep = temp;
    }
    return secondStep;
}
*/

int main()
{
    int n=5;
    cout<<climbStairs(n);
}