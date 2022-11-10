/*
Difficulty Medium

Given a positive number X. Find the largest Jumping Number which is smaller than or equal to X. 
Jumping Number: A number is called Jumping Number if all adjacent digits in it differ by only 1. All single-digit numbers are considered as Jumping Numbers. For example 7, 8987 and 4343456 are Jumping numbers but 796, 677 and 89098 are not.

 

Example 1:

Input:
X = 10
Output:
10
Explanation:
10 is the largest Jumping Number
possible for X = 10.
Example 2:

Input:
X = 50
Output:
45
Explanation:
45 is the largest Jumping Number
possible for X = 50.

*/

#include<bits/stdc++.h>
using namespace std;

long long jumpingNums(long long X) {
    // code here
    if(X<=10) return X;
    
    queue<int>q;
    for(int i=1;i<=9;i++)
    {
        q.push(i);
    }
    
    int ans=INT_MIN;
    while(q.size()>0)
    {
        int digit = q.front();
        q.pop();
        
        //update
        ans=max(ans,digit);
        
        int rem=digit%10;
        int num1=digit*10+rem+1;
        int num2=digit*10+rem-1;
        
        if(rem==0)
        {
            if(num1<=X)
            q.push(num1);
        }
        
        else if(rem==9)
        {
            if(num2<=X)
            q.push(num2);
        }
        
        else
        {
            if(num1<=X)
            q.push(num1);
            
            if(num2<=X)
            q.push(num2);
        }
    }
    return ans;
}

int main()
{
    long long x=50;
    cout<<jumpingNums(x);
}