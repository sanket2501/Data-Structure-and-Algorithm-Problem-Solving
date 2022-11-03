/*

Difficulty Medium

Given an array arr[] of size N and an integer K. The task is to find the minimum number of elements that should be removed, such that Amax-Amin<=K. After the removal of elements, Amax and Amin is considered among the remaining elements. 

Note: Can you solve the probelm without using any extra space and O(N*log(N)) time complexity?

Example 1:

Input: N = 9, K = 4  
arr[] = {1,3,4,9,10,11,12,17,20}
Output: 5
Explanation: Remove 1, 3, 4 from beginning
and 17, 20 from the end.
Example 2:

Input: N = 5, K = 2 
arr[] = {1, 5, 6, 2, 8} 
Output: 3
Explanation: There are multiple ways to
remove elements in this case.
One among them is to remove 5, 6, 8.
The other is to remove 1, 2, 5
*/

#include<bits/stdc++.h>
using namespace std;

int removals(vector<int>& arr, int k){
    //Code here
    int i=0 , j=0, cnt=0;
    int maxVal=INT_MIN;
    int n=arr.size();
    sort(arr.begin(),arr.end());
    while(i<arr.size() and j<arr.size())
    {
        if(arr[j]-arr[i]<=k)
        {
            maxVal=max(maxVal,(j-i+1));
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    return (n-maxVal);
}

int main()
{
    int N = 5, K = 2 ;
    vector<int> arr = {1, 5, 6, 2, 8};
    cout<<removals(arr,K);
}