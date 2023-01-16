/*
Medium

Given an array arr[] of N positive integers, where elements are consecutive (sorted). Also, there is a single element which is repeating X (any variable) number of times. Now, the task is to find the element which is repeated and number of times it is repeated.
Note: If there's no repeating element, Return {-1,-1}.


Example 1:

Input:
N = 5
arr[] = {1,2,3,3,4}
Output: 3 2
Explanation: In the given array, 3 is 
occuring two times.
Example 2:

Input:
N = 5
arr[] = {2,3,4,5,5}
Output: 5 2
Explanation: In the given array, 5 is 
occuring two times.
Example 3:

Input:
N = 3
arr[] = {1,2,3}
Output: -1 -1
Explanation: In the given array, there's no
repeating element, and thus the given Output.
*/

//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    /*
    O(logN):
    //code here
    {
        if(n-(arr[n-1]-arr[0]) == 1) return {-1,-1};
        int l = 0, h = n-1;
        int mid = 0;
        while(l < h){
            mid = (l+h)/2;
            if(arr[mid] >= mid + arr[0]) l = mid+1;
            else h = mid;
        }
        return {arr[mid], n-(arr[n-1]-arr[0])};
    }
    */
    public:
    //Function to find repeated element and its frequency.
    pair<long, long> findRepeating(long *arr, int n){
        //code here
        unordered_set<long>s;
        pair<long, long>p(-1, 1);
        long ans=0;
        for(long i=0;i<n;i++)
        {
            if(s.find(arr[i])==s.end())
                s.insert(arr[i]);
            else
            {
                p.first=arr[i];
                p.second++;
            }
        }
        
        if(p.first==-1)
            p.second=-1;
        return p;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    long arr[n];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    Solution obj;
	    pair<long, long> ans = obj.findRepeating(arr,n);
	    
	    cout << ans.first << " " << ans.second << endl;
	    
	}
	
}
// } Driver Code Ends