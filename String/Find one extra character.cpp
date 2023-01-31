/*
Given two strings which are of lengths n and n+1. The second string contains all the character of the first string, but there is one extra character. Your task to find the extra character in the second string. 

Example 1:

Input:
s1 = abcd
s2 = badce
Output: 
e
Example 2:

Input:
s1 = efg
s2 = gtfe
Output: 
t
*/

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

char extraChar(string s1, string s2)
{
    /*
    Method I
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    int n=s1.length();
    for(int i=0;i<n; i++)
    {
        if(s1[i]!=s2[i])
            return s2[i];
    }
    return s2[n];
    */  

   /*
   Method II
   int count[256]={0};
    //code here
    for(int i=0; i<s1.length(); i++)
        count[s1[i]]++;
        
    for(int i=0; i<s2.length(); i++)
        count[s2[i]]--;
        
    for(int i=0; i<256; i++)
        if(count[i]>=1)
            return (char)i;
    */

    int res=0;
    int i=0;
    for(i=0; i<s1.length(); i++)
        res=res^s1[i]^s2[i];
    
    res=res^s2[i];
    return res;  
    
    
}

//{ Driver Code Starts.
    
int main() {
	
        int t;
        cin>>t;
        while(t--) {
            string s1,s2;
            cin>>s1;
            cin>>s2;
            cout<<extraChar(s1, s2)<<endl;
        }
}
// } Driver Code Ends