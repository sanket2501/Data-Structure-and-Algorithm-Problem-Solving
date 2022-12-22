/*
Given an integer N. Find maximum LCM (Least Common Multiple) that can be obtained from four numbers less than or equal to N.
Note: Duplicate numbers can be used.

Example 1:

Input:
N = 4
Output: 12
Explanation:
The four numbers can be [4,4,3,2] or
[4,4,4,3], etc. It can be shown that 12 is
the maximum LCM of four numbers that can
be obtained from numbers less than or equal 
to 4.
Example 2:

Input:
N = 5
Output: 60
Explanation:
The four numbers can be [5,5,4,3] or
[5,4,3,2], etc. 60 is the maximum that can
be obtained.

*/

#include<bits/stdc++.h>
using namespace std;

long long solve(int n)
{
    int count=3;
    long long ans=n;
    
    for(long long i=n-1;i>0;i--)
    {
        if(count==0)
            break;
        
        if(__gcd(ans,i)==1)
        {
            ans*=i;
            count--;
        }
    }
    return ans;
}

long long maxGcd(int n) {
    // code here
    return max(solve(n), solve(n-1));
}

int main(){
    int n=5;
    cout<<maxGcd(n);
}