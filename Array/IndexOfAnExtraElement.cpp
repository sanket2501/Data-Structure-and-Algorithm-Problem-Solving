/*
Difficulty Easy

Given two sorted arrays of distinct elements. There is only 1 difference between the arrays. First array has one element extra added in between. Find the index of the extra element.

Example 1:

Input:
N = 7
A[] = {2,4,6,8,9,10,12}
B[] = {2,4,6,8,10,12}
Output: 4
Explanation: In the second array, 9 is
missing and it's index in the first array
is 4.

Example 2:

Input:
N = 6
A[] = {3,5,7,9,11,13}
B[] = {3,5,7,11,13}
Output: 3

T.C. O(n)
T.C. O(1);

int findExtra(int a[], int b[], int n) 
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            return i;
        }
    }
}
*/

/*
T.C. O(log n)
*/

#include<bits/stdc++.h>
using namespace std;

int findExtra(int a[], int b[], int n)
{
    int l=0;
    int h=n-1;
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==b[mid])
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    return l;
}

int main()
{
    int N = 7;
    int A[] = {2,4,6,8,9,10,12};
    int B[] = {2,4,6,8,10,12};
    cout<<findExtra(A,B,N);
}
