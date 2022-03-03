/*
Difficulty medium
Given two strings A and B, find if A is a subsequence of B. A subsequence is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements.

Example 1:

Input:
A = AXY 
B = YADXCP
Output: False
Explanation: A is not a subsequence of B
as 'Y' appears before 'A'.

Example 2:

Input:
A = gksrek
B = geeksforgeeks
Output: True
Explanation: A is a subsequence of B.
Time Complexity O(m*n)
*/

#include<iostream>
using namespace std;
bool isSubSequence(string s1, string s2,int n1,int n2)
{
    if(n1==0)
        return true;
    if(n2==0)
        return false;
    if(s1[n1]==s2[n2])
        return isSubSequence(s1,s2,n1-1,n2-1);
    else    
        return isSubSequence(s1,s2,n1,n2-1);
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int len1=s1.length();
    int len2=s2.length(); 
    bool ans=isSubSequence(s1,s2,len1-1,len2-1);
    if(ans==true)
        cout<<true;
    else
        cout<<false;
}