/*
Given two sequences, find the length of longest subsequence present in both of them. Both the strings are of uppercase.

Example 1:

Input:
A = 6, B = 6
str1 = ABCDGH
str2 = AEDFHR
Output: 3
Explanation: LCS for input Sequences
“ABCDGH” and “AEDFHR” is “ADH” of
length 3.

Example 2:

Input:
A = 3, B = 2
str1 = ABC
str2 = AC
Output: 2
Explanation: LCS of "ABC" and "AC" is
"AC" of length 2.

Time Complexity 2^n(Exponential)
*/
#include<iostream>
using namespace std;
int lcs(int x, int y, string s1, string s2)
    {
        if(x==0 || y==0)
            return 0;
        if(s1[x-1]==s2[y-1])
            return 1+lcs(x-1,y-1,s1,s2);
        else 
            return max(lcs(x-1,y,s1,s2),lcs(x,y-1,s1,s2));
    }
int main()
{
    string s1;
    string s2;
    cin>>s1>>s2;
    int len1=s1.length();
    int len2=s2.length();
    cout<<lcs(len1,len2,s1,s2);
}
