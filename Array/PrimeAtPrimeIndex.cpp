/*
Difficulty Medium
Given a vector V of n elements. Return the vector containing prime numbers that are at prime index(1-indexing).

Inuput:
5
3 5 2 4 8
Output:
5 2
Explanation:
Only 5 and 2 are the numbers that are prime and are present at prime position (2 and 3 respectively).

Time Complexity: O(n)
*/
#include<iostream>
using namespace std;

bool checkprime(int n)
{
    if(n==0 || n==1)
        return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
vector<int> prime_at_prime(vector<int>v)
{
    int n=v.size();
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        if(checkprime(v[i]) && checkprime(i+1))
        {
            ans.push_back(v[i]);
        }
    }
    return ans;
}
int main()
{
  int n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  vector<int> ans=prime_at_prime(v);
  for(int i=0;i<ans.size();i++)
    cout<<ans[i];
  
}
