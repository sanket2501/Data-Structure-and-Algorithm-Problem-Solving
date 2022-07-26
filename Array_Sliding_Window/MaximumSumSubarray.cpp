/*
Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.

Example 1:
Input:
N = 4, K = 2
Arr = [100, 200, 300, 400]
Output:
700
Explanation:
Arr3  + Arr4 =700,
which is maximum.
 
Example 2:
Input:
N = 4, K = 4
Arr = [100, 200, 300, 400]
Output:
1000
Explanation:
Arr1 + Arr2 + Arr3  
+ Arr4 =1000,
which is maximum.

*/

#include<bits/stdc++.h>
using namespace std;

long maximumSumSubarray(int K, vector<int> &Arr , int N){
    long sum=0;
    long maxSum=0;
    int index=0;
    for(int i=0;i<K;i++)
    {
        sum+=Arr[i];
    }
    maxSum=sum;
    for(int i=K;i<N;i++)
    {
        sum=sum+Arr[i]-Arr[index];
        index++;
        maxSum=max(maxSum,sum);
    }
    return maxSum;
}

int main()
{
    int N = 4, K = 4;
    vector<int> Arr{100, 200, 300, 400};
    cout<<maximumSumSubarray(K,Arr,N);

}