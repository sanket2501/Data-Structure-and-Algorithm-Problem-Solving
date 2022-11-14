/*
Difficulty Easy
Given an array Arr of N positive integers and another number X. Determine whether or not there exist two elements in Arr whose sum is exactly X.

Example 1:

Input:
N = 6, X = 16
Arr[] = {1, 4, 45, 6, 10, 8}
Output: Yes
Explanation: Arr[3] + Arr[4] = 6 + 10 = 16
Example 2:

Input:
N = 5, X = 10
Arr[] = {1, 2, 4, 3, 6}
Output: Yes
Explanation: Arr[2] + Arr[4] = 4 + 6 = 10

*/


/*
bool hasArrayTwoCandidates(int a[], int n, int x) {
    sort(a,a+n);
    int i=0,j=n-1;
    while(i<j)
    {
        if(a[i]+a[j]==x)
        {
            return true;
        }
        else if((a[i]+a[j])<x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false;
}
*/
#include<bits/stdc++.h>
using namespace std;

bool hasArrayTwoCandidates(int arr[], int n, int x) {
    // code here
    set<int>mp;
    for(int i=0;i<n;i++)
    {
        if(mp.find(x-arr[i])!=mp.end())
            return true;
        mp.insert(arr[i]);
    }
    return false;
}

int main()
{
    int N = 5, X = 10;
    int Arr[] = {1, 2, 4, 3, 6};
    cout<<hasArrayTwoCandidates(Arr,N,X);
}