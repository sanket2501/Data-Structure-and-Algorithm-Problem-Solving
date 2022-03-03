/*
Difficulty Medium
Given a string S consisting of lowercase Latin Letters. Find the first non-repeating character in S.

Example 1:

Input:
S = hello
Output: h
Explanation: In the given string, the
first character which is non-repeating
is h, as it appears first and there is
no other 'h' in the string.
Example 2:

Input:
S = zxvczbtxyzvy
Output: c
Explanation: In the given string, 'c' is
the character which is non-repeating. 
If there is no non-repeating character then return '$' .
*/

#include<iostream>
using namespace std;
char nonrepeatingCharacter(string str)
{
    int arr[256]={0};
    for(int i=0;str[i];i++)
    {
        arr[str[i]]++;
    }
    for(int i=0;str[i];i++)
    {
        if(arr[str[i]]==1)
        return str[i];
    }
    return '$';
}
int main()
{
    string str;
    cin>>str;
    cout<<nonrepeatingCharacter(str);
}