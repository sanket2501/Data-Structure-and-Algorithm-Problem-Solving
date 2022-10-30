/*
Difficulty Easy
Initially, the zoo have a single chick. A chick gives birth to 2 chicks every day and the life expectancy of a chick is 6 days. Zoo officials want to buy food for chicks so they want to know the number of chicks on an Nth day. Help the officials with this task.


Example 1:

Input: N = 2
Output: 3
Explanation: First day there is only 1 chick.
On second day total number of chicks = 3.
Example 2:

Input: N = 3
Output: 9
Explanation: First day there is only 1 chick.
On second day total number of chicks = 3.
On third day total number of chicks = 9

*/
#include<bits/stdc++.h>
using namespace std;

long long int NoOfChicks(int n){
    long long int chicks=1;
    long newchicks[n];
    newchicks[0]=1;
    
    for(int days=1;days<n;days++)
    {
        if(days>=6)
        {
            chicks=chicks-newchicks[days-6];
        }
        newchicks[days]=chicks*2;
        chicks=chicks+newchicks[days];
    }
    return chicks;
}

int main()
{
    int n=3;
    cout<<(NoOfChicks(n));
}