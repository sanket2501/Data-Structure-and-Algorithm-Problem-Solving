/*
Difficulty Medium 
Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.
Note: Modify the original array itself.

Example 1:

Input:
N = 6
arr[] = {1,2,3,4,5,6}
Output: 6 1 5 2 4 3
Explanation: Max element = 6, min = 1, 
second max = 5, second min = 2, and 
so on... Modified array is : 6 1 5 2 4 3.

Example 2:

Input:
N = 11
arr[]={10,20,30,40,50,60,70,80,90,100,110}
Output:110 10 100 20 90 30 80 40 70 50 60
Explanation: Max element = 110, min = 10, 
second max = 100, second min = 20, and 
so on... Modified array is : 
110 10 100 20 90 30 80 40 70 50 60

T.C. O(n)
S.C. O(n)

void rearrange(long long *arr, int n) 
{ 
    vector<int>v;
    int i=0, j=n-1;
    while(i<=j) 
    {
        v.push_back(arr[j]);
        v.push_back(arr[i]);
        j--;
        i++;
    }
    for(int i=0; i<n; i++)
    {
        arr[i] = v[i];
    }
}

T.C. O(n)
S.C. O(1)
*/

#include<bits/stdc++.h>
using namespace std;

void rearrange(long long *arr, int n) 
{ 
    int maxElement = arr[n-1]+1;
    int minIndex=0;
    int maxIndex=n-1;
    for(int i=0;i<n;i++)
    {
        if(i&1)
        {
            arr[i]=arr[i]+arr[minIndex]%maxElement*maxElement;
            minIndex++;
        }
        else
        {
            arr[i]=arr[i]+arr[maxIndex]%maxElement*maxElement;
            maxIndex--;
        }
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]/maxElement;
    }      
}

int main()
{
    int N = 6;
    long long int arr[] = {1,2,3,4,5,6};
    rearrange(arr,N);
    for(int i=0;i<N;i++)
    {
        cout<<arr[i];
    }
}