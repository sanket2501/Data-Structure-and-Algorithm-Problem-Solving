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
bool isSubSequence(string A, string B)
{
        int n1=A.length();
        int n2=B.length();
        int j=0;
        for(int i=0;i<n2;i++)
        {
            if(A[j]==B[i])
                j++;
        }
        return (j==n1);
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    bool ans=isSubSequence(s1,s2);
    if(ans==true)
        cout<<true;
    else
        cout<<false;
}