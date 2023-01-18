/*
You are given N strings denoting usernames that are represented by elements of a vector V. Now whenever you encounter a new string, you print it without any modification. If you encounter a string that exists already then you append a number as a suffix to it. So, if you encounter a string, say ab, then you will print ab. Now,again if you encounter ab, the you will print ab1, and so on.
Following this criteria, you need to print the strings.

Input Format:
The First line contains a number of test cases T. Each test case contains N, the number of usernames and then the next N lines contain N usernames.

Output Format:
For each testcase, in a new line, print the strings.

User Task:
You need to complete the function login_system() that takes a vector of strings as a parameter and returns the vector of strings that contains the output.

Constraints:
1 <= T <= 100
1 <= N <= 103
1 <= |Vi| <= 103

Example:
Input:
1
5
aba
ab
aba
aba
ab
Output:
aba
ab
aba1
aba2
ab1
*/

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

vector<string> login_system(vector<string> v)
{
  // Your code here 
  unordered_map<string, int>um;
  vector<string>ans(v.size());
  
  for(int i=0; i<v.size(); i++)
  {
    if(um.find(v[i])!=um.end())
        ans[i]+=v[i]+to_string(um[v[i]]);
    
    else
        ans[i]=v[i];
        
    um[v[i]]++;
  }
  
  return ans;
  
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>v;
        for(int i=0;i<n;i++)
        {
            string k;
            cin>>k;
            v.push_back(k);
        }
        vector<string>ans=login_system(v);
        for(auto i:ans)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends
