/*

Two numbers with odd occurrences
MediumAccuracy: 49.49%Submissions: 13724Points: 4
Given an unsorted array, Arr[] of size N and that contains even number of occurrences for all numbers except two numbers. Find the two numbers in decreasing order which has odd occurrences.

Example 1:

Input:
N = 8
Arr = {4, 2, 4, 5, 2, 3, 3, 1}
Output: {5, 1} 
Explaination: 5 and 1 have odd occurrences.

Example 2:

Input:
N = 8
Arr = {1 7 5 7 5 4 7 4}
Output: {7, 1}
Explaination: 7 and 1 have odd occurrences.

*/

#include<bits/stdc++.h>
using namespace std;

vector<long long int> twoOddNum(long long int Arr[], long long int N)  
{
    // code here
    int xxory=0;
    for(int i=0;i<N;i++)
    {
        xxory=xxory^Arr[i];
    }
    
    int rsbm=xxory & -xxory;
    int x=0,y=0;
    
    for(int i=0;i<N;i++)
    {
        if((Arr[i] & rsbm)==0)
        {
            x^=Arr[i];
        }
        else
        {
            y^=Arr[i];
        }
    }
    
    return {max(x,y),min(x,y)};
}

int main()
{
    int N = 8;
    long long int Arr[] = {4, 2, 4, 5, 2, 3, 3, 1};
    vector<long long int>ans=twoOddNum(Arr,N);
    cout<<ans[0]<<" "<<ans[1];
}