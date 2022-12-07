/*
Difficulty Medium

Given an array arr[] of n integers, where each integer is greater than 1. The task is to find the number of Full binary tree from the given integers, such that each non-leaf node value is the product of its children value.

Note: Each integer can be used multiple times in a full binary tree. The answer can be large, return  answer modulo 1000000007

Example 1:
Input:
n = 4
arr[] = {2, 3, 4, 6}
Output:
7
Explanation:
There are 7 full binary tree with
the given product property.
Four trees with single nodes
2  3  4  6
Three trees with three nodes
    4   
   / \
  2   2 ,
   6    
  / \
 2   3 ,
   6
  / \
 3   2
 

Example 2:
Input: 
n = 3
arr[] = {2, 4, 5} 
Output: 4
Explanation: There are 4 full binary tree
with the given product property. 
Three trees with single nodes 2 4 5
One tree with three nodes
   4
  / \
 2  2
*/
#include<bits/stdc++.h>
using namespace std;

long long int numoffbt(long long int arr[], int n){
    // Your code goes here
    const long long int MOD = 1000000007;
    long long int mn = INT_MAX, mx = INT_MIN;
    for(int i = 0; i < n; i++){
        mn = (mn > arr[i]) ? arr[i] : mn;
        mx = (mx < arr[i]) ? arr[i] : mx;
    }
    
    long long int ans = 0;
    int pd;
    vector<bool> vis(mx+1, false);
    vector<long long int> sol(mx+1, 0);
    for(int i = 0; i < n; i++){
        vis[arr[i]] = 1;
        sol[arr[i]] = 1;
    }
    for(int i = mn; i <= mx; i++){
        if(!vis[i]){
            continue;
        }
        for(int j = 2; i*j <= mx && j <= i; j++){
            pd = i*j;
            if(!vis[pd]){
                continue;
            }
            sol[pd] = (sol[pd] + (sol[i]*sol[j])%MOD)%MOD;
            if(i != j){
                sol[pd] = ( sol[pd] + (sol[i]*sol[j])%MOD)%MOD;
            }
        }
        ans = (ans + sol[i])%MOD;
    }
    return ans;
}

int main()
{
    long long int n = 4;
    long long int arr[] = {2, 3, 4, 6};
    cout<<numoffbt(arr, n);
}