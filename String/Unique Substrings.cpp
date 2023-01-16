/*
Easy

Given a string str. Calculate the total number of unique substrings of the given string.

Example 1:

Input:
abd

Ouput:
6

Explanation:
str = abd. The 6 unique substrings 
are {a, b, d, ab, bd, abd}.
Example 2:

Input:
jaja

Ouput:
7

Explanation:
str = jaja. The substrings will be j, a, j, a, 
ja, aj, ja, jaj, aja, jaja. Out of these the 
unique are j, a, ja, aj, jaj, aja, jaja.
*/

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int unique_substring(string s)
    {
        // Your code here
       unordered_set<string>us;
       
       for(int i=0;i<s.size();i++)
       {
           string ss="";
           for(int j=i;j<s.size();j++)
           {
               ss=ss+s[j];
               us.insert(ss);
           }
       }
       
       int ans=0;
       for(auto x:us)
            ans++;
       return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t-->0){
        string str;
        cin>>str;
        Solution ob;
        int ans= ob.unique_substring(str);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends