#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int memo[100000];
int findNthFibonacci(int n)
{
    int res;
    if(memo[n]==-1)
    {
        if(n==0 || n==1)
            return n;
        else
            res=findNthFibonacci(n-1)+findNthFibonacci(n-2);
        memo[n]=res;
    }
    return memo[n];
}
int main()
{
    int n;
    cin>>n;
    memset(memo,-1,sizeof(memo));
    cout<<findNthFibonacci(n);
}