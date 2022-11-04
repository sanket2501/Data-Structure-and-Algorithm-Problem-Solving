/*
Difficulty Medium

Given a number (n) and no. of digits (m) to represent the number, we have to check if we can represent n using exactly m digits in any base from 2 to 32.

Example 1:

Input: n = 8, m = 2
Output: Yes 
Explanation: Possible in base 3 as 8 in base 3 is 22.  

Example 2:

Input: n = 8, m = 3
Output: No
Explanation: Not possible in any base. 

*/

#include<bits/stdc++.h>
using namespace std;

string baseEquiv(int n, int m){
    int i=2;
    while(i<=32)
    {
        int digit=(log(n)/log(i))+1;
        if(digit==m) return "Yes";
        i++;
    }
    return "No";
}

int main()
{
    int n = 8, m = 2;
    cout<<baseEquiv(n,m);
}