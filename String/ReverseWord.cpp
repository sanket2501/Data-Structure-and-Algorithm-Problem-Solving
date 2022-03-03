/*
Difficulty Medium
Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

Example 1:

Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i
Example 2:

Input:
S = pqr.mno
Output: mno.pqr
Explanation: After reversing the whole
string , the input string becomes
mno.pqr
*/

#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

    string rev(string &s,int start,int end)
    {
        while(start<=end)
        {
            swap(s[start],s[end]);
            start++;
            end--;
        }
        return s;
    }
    string reverseWords(string s) 
    { 
        int n=s.length();
        int start=0;
        for(int end=0;end<n;end++)
        {
            if(s[end]=='.')
            {
                rev(s,start,end-1);
                start=end+1;
            }
        }
        rev(s,start,n-1);
        rev(s,0,n-1);
        return s;
    } 
    int main()
    {
        string s;
        cin>>s;
        cout<<reverseWords(s);
    }