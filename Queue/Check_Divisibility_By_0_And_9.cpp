/*

We are given an integer N, we need to find least X (X > 0) such that X 
is divisible by N and X is made up of only digits 0 and 9.
Assume that the answer X is less than 10^9


N = 5
X = 90     (900, 9000)

N = 7
X = 9009

*/

/*

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=7;

    for(int i=n;i<=1e7;i+=n)
    {
        int temp=i;
        while(temp>0)
        {
            if(temp%10 != 0 && temp%10!=9 )
                break;
            temp/=10;
        }
        if(temp==0)
        {
            cout<<i;
            break;
        }
    }
}

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    long long temp=0;
    queue<long long>q;
    q.push(9);
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        if(temp%n==0)
            break;
        q.push((temp*10));
        q.push(((temp*10)+9));
    }
    cout<<temp;
}