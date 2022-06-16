/*
Given two arrays a[] and b[] respectively of size n and m, the task is to print the count of elements in the intersection (or common elements) of the two arrays.

For this question, the intersection of two arrays can be defined as the set containing distinct common elements between the two arrays. 

Example 1:
Input:
n = 5, m = 3
a[] = {89, 24, 75, 11, 23}
b[] = {89, 2, 4}

Output: 1

Explanation: 
89 is the only element 
in the intersection of two arrays.

Example 2:
Input:
n = 6, m = 5
a[] = {1, 2, 3, 4, 5, 6}
b[] = {3, 4, 5, 6, 7} 

Output: 4

Explanation: 
3 4 5 and 6 are the elements 
in the intersection of two arrays.
*/ 
 #include<bits/stdc++.h>
 using namespace std;

 int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
    if(n>m)
    {
        swap(n,m);
        swap(a,b);
    }
    int count=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    
    for(int i=0;i<m;i++)
    {
        if(mp.find(b[i])!=mp.end())
        {
            count++;
            mp.erase(b[i]);
        }
    }
    return count;
}
int main()
{
    int n = 5, m = 3;
    int a[] = {89, 24, 75, 11, 23};
    int b[] = {89, 2, 4};
    cout<<NumberofElementsInIntersection(a,b,n,m);
}