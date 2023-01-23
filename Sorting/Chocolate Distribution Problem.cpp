/*
Given an array arr of positive integers of size n, where each value represents number of chocolates in a packet. Each packet can have variable number of chocolates. There are m students, the task is to distribute chocolate packets such that :
1. Each student gets one packet.
2. The difference between the number of chocolates given to the students having packet with maximum chocolates and student having packet with minimum chocolates should be minimum.

 

Example 1:

Input:
8
3 4 1 9 56 7 9 125
5
Output:
6

Explanation:
The minimum difference between maximum chocolates
and minimum chocolates is 9 - 3 = 6.
*/

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int minDiff(int arr[], int n, int m){
    
    //code here
    sort(arr, arr+n);
    int res=arr[m-1]-arr[0];
    
    for(int i=1; (m+i-1)<n; i++)
        res=min(res, (arr[m+i-1]-arr[i]));
    
    return res;
    
    
}

//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		
		for(int i = 0; i < n;i++)
		{
			cin>>arr[i];
		}
		
		int m;
		cin>>m;
		
		cout<<minDiff(arr, n , m)<<endl;
	}
	return 0;
}
// } Driver Code Ends