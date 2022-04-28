/*
Difficulty- Medium
Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
 
Example 1:
Input:
N = 6
arr[] = {3,0,0,2,0,4}
Output:
10

Example 2:
Input:
N = 4
arr[] = {7,4,0,9}
Output:
10
Explanation:
Water trapped by above 
block of height 4 is 3 units and above 
block of height 0 is 7 units. So, the 
total unit of water trapped is 10 units.

Example 3:
Input:
N = 3
arr[] = {6,9,9}
Output:
0
Explanation:
No water will be trapped.
*/

#include<bits/stdc++.h>
using namespace std;

long long trappingWater(int arr[], int n){
    int left[n],right[n];
    int cal[n];
    long long sum=0;
    left[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        left[i]=max(arr[i],left[i-1]);
    }
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        right[i]=max(arr[i],right[i+1]);
    }
    for(int i=0;i<n;i++)
    {
        cal[i]=abs(min(left[i],right[i])-arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=cal[i];
    }
    return sum;
}

int main()
{
    int N = 6;
    int arr[] = {3,0,0,2,0,4};
    cout<<trappingWater(arr,N);
}