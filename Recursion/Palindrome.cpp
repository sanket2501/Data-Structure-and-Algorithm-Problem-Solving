/*
Difficulty Easy
You are given a number n. You need to see if the number is a palindrome or not (recursively)

Input:
n = 100
Output: 0
Example 2:

Input:
n = 101
Output: 1
*/


#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;
bool palincheck(string str,int start,int end)
{
    if(start>=end)
        return true;
    return ((str[start]==str[end]) && (palincheck(str,start+1,end-1)));
}
int main()
{
    string str="nayan";
    int len=str.length();
    cout<<palincheck(str,0,len-1);

}