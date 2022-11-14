/*
Difficulty Medium
Given two strings S and W. Find the number of times W appears as a subsequence of string S where every character of string S can be included in forming at most one subsequence.
 

Example 1:

Input: 
 S = "abcdrtbwerrcokokokd" 
 W = "bcd" 
Output: 
 2
Explanation: 
The two subsequences of string W are
{ S1 , S2 , S3 } and { S6 , S11 , S18 }
(Assuming 0- based indexing).
 

Example 2:

Input: 
S = "ascfret" 
W = "qwer" 
Output: 
0
Explanation:
No valid subsequences are possible.
*/

#include<bits/stdc++.h>
using namespace std;

int numberOfSubsequences(string S, string W)
{
    int ans=0;
    int k=0;
    for(int i=0;i<S.length();i++)
    {
        if(S[i]==W[0])
        {
            k=0;
            for(int j=i;j<S.length() and k<W.length();j++)
            {
                if(S[j]==W[k])
                {
                    S[j]='#';
                    k++;
                }
                if(k==W.length())
                {
                    ans++;
                }
            }
        }
    }
    return ans;
}

int main()
{
    string S = "abcdrtbwerrcokokokd";
    string W = "bcd";
    cout<<numberOfSubsequences(S,W);
}