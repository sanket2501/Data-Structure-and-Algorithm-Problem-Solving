/*

Given a number N. Find if it can be expressed as sum of two prime numbers.

Example 1:

Input: N = 34
Output: "Yes" 
Explanation: 34 can be expressed as 
sum of two prime numbers.
Example 2:

Input: N = 23
Output: "No"
Explanation: 23 cannnot be expressed as
sum of two prime numbers. 

*/
#include<bits/stdc++.h>
using namespace std;

string isSumOfTwo(int N){
    // code here
    if(N==1 || N==2)
        return "NO";
    
    for(int i=2;i<N;i++)
    {
        int rem = N-i;
        if(isPrime(rem) and isPrime(i))
            return "Yes";
    }
    return "No";
}

bool isPrime(int n)
{
    if(n==1)
        return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    int N=34;
    cout<<isSumOfTwo(N);
}