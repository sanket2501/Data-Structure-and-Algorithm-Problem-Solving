/*
Medium

Given a vector V of N positive elements. Find the maximum sum of the subarray that starts and ends with the same value element.
Note: A single value subarray can be considered as the start and end with the same element.

Example 1:

Input:
N = 3
arr[] = {2, 6, 4}
Output: 6
Explanation:
The maximum sum of the subarray is 6
because there is no such subarray where
starting and ending point is same and 6
is the maximum element.
Example 2:

Input:
N = 6
arr[] = {6, 3, 2, 3, 2, 6}
Output: 22
Explanation: Maximum sum of
subarray is 22 where the subarray is
starting with 6 and ending with 6.
*/

/*
TC O(N^2)
long long int maximum_sum(vector<long long int>v)
{
    // Your code here
    int sum=0;
    int max_sum=0;
    long long n=v.size();
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=v[j];
            if(max_sum<sum && v[i]==v[j])
                max_sum=sum;
        }
    }
    return max_sum;
}
*/

// TC O(N)

#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
        long long int maximum_sum(vector<long long int>v)
    {
        // Your code here
        long long int max_sum=0;
        unordered_map<int, int>um;
        vector<long long int>prefixSum(v.size());
        prefixSum[0]=v[0];
        
        for(int i=1; i<v.size(); i++)
            prefixSum[i]=prefixSum[i-1]+v[i];
            
        for(int i=0;i<v.size(); i++)
        {
            if(um.find(v[i])==um.end())
            {
                um[v[i]]=i;
                if(max_sum<v[i])
                    max_sum=v[i];
            }
                
            else
            {
                long long int temp = prefixSum[i]-prefixSum[(um.find(v[i]))->second]+v[i];
                if(max_sum<temp)
                    max_sum=temp;
            }
        }
        return max_sum;
    }
};

//{ Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    vector<long long int>v(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    Solution ob;
	    long long int max_sum=ob.maximum_sum(v);
	    cout<<max_sum<<endl;
	}
	return 0;
}

// } Driver Code Ends