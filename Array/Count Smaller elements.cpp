/*
Given an array Arr of size N containing positive integers. Count number of smaller elements on right side of each array element.

Example 1:

Input:
N = 7
Arr[] = {12, 1, 2, 3, 0, 11, 4}
Output: 6 1 1 1 0 1 0
Explanation: There are 6 elements right
after 12. There are 1 element right after
1. And so on.
Example 2:

Input:
N = 5
Arr[] = {1, 2, 3, 4, 5}
Output: 0 0 0 0 0
Explanation: There are 0 elements right
after 1. There are 0 elements right after
2. And so on.
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	//O(nlogn)
	vector<int> constructLowerArray(int *arr, int n) {
	    // code here
	    vector<int>ans(n,0);
	    vector<int>temp;
	    for(int i=n-1;i>=0;i--)
	    {
	        auto it = lower_bound(temp.begin(), temp.end(), arr[i]);
	        int idx=it-temp.begin();
	        ans[i]=idx;
	        
	        //vector_name.insert (position, val)
	        temp.insert(temp.begin()+idx, arr[i]);
	    }
	    return ans;
	}

	/*
	O(n^2)
	vector<int> constructLowerArray(int *arr, int n) {
	    // code here
	    map<int, int, greater<int>>mp;
	    vector<int>v(n,0);
	    
	    for(int i=n-1;i>=0;i--)
	    {
	        int x=0;
	        mp[arr[i]]++;
	        auto it=mp.find(arr[i]);
	        while(it!=mp.end())
	        {
	            it++;
	            x+=(*it).second;
	        }
	        v[i]=x;
	    }
	    return v;
	}
	*/
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.constructLowerArray(arr, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends