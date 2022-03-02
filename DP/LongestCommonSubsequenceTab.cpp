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

Time Complexity O(m*n)
*/
#include<iostream>
#include<cstring>
using namespace std;
int lcs(int x, int y, string s1, string s2)
{
    int arr[x+1][y+1];
        for(int i=0;i<=x;i++)
            arr[i][0]=0;
        for(int i=0;i<=y;i++)
            arr[0][i]=0;
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=y;j++)
            {
                if(s1[i-1]==s2[j-1])
                    arr[i][j]=1+arr[i-1][j-1];
                else
                    arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
            }
        }
        return arr[x][y];
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