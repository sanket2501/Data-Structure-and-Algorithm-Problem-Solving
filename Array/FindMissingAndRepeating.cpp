/*
Difficulty Easy
Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.

Example 1:
Input:
N = 2
Arr[] = {2, 2}
Output: 2 1
Explanation: Repeating number is 2 and 
smallest positive missing number is 1.

Example 2:
Input:
N = 3
Arr[] = {1, 3, 3}
Output: 3 2
Explanation: Repeating number is 3 and 
smallest positive missing number is 2.
*/

#include<bits/stdc++.h>
using namespace std;

int *findTwoElement(int *arr, int n) 
{
    sort(arr,arr+n);
    int j=1;
    int *ans=new int[2];
    int flag=1;
    int temp=0;
    if(arr[0]==j)
    {
        j++;
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]==j)
        {
            j++;
        }
        if(arr[i]==arr[i-1] && flag==1)
        {
            temp=arr[i];
            flag=0;
        }
    }
    ans[0]=temp;
    ans[1]=j;
    return ans;
}

int main()
{
    int N = 2;
    int Arr[] = {2, 2};
    auto ans=findTwoElement(Arr,N);
    cout<<ans[0]<<" "<<ans[1];
}