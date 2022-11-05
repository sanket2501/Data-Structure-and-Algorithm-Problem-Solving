/*
Difficulty Medium
One day Jim came across array arr[] of N numbers. He decided to divide these N numbers into different groups. Each group contains numbers in which sum of any two numbers should not be divisible by an integer K. Print the size of the group containing maximum numbers.

Example 1:

Input:
N = 4, K = 8
arr[] = {1, 7, 2, 6}
Output:
2
Explanation:
The  group of numbers which can be formed
are: (1),(2),(7),(6),(1,2),(1,6),(7,2),(7,6).
So,the maximum possible size of the group is 2.
Example 2:

Input:
N = 2, K = 3
arr[] = {1, 2}
Output:
1
Explanation:
The  group of numbers which can be formed
are: (1),(2). So,the maximum possible size
of the group is 1.
*/


#include<bits/stdc++.h>
using namespace std;

int maxGroupSize(int arr[], int N, int K) {
    // code here
    map<int, int>mp;
    for(int i=0;i<N;i++)
    {
        mp[arr[i]%K]++;
    }
    int low=1;
    int high=K-1;
    int ans=0;
    while(low<=high)
    {
        if(low==high and mp[low]>0)
        {
            ans++;
            break;
        }
        ans+=max(mp[low],mp[high]);
        low++;
        high--;
    }
    if(mp[0]>0) ans++;
    return ans;
}

int main()
{
    int N = 4, K = 8;
    int arr[] = {1, 7, 2, 6};
    cout<<maxGroupSize(arr,N,K);
}