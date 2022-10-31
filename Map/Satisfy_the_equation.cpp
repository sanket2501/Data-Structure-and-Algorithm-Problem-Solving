/*
Difficulty Medium

Given an array A[ ] of N of  integers, find the index of values that satisfy A + B = C + D where A,B,C & D are integers values in the array.
Note: As there may be multiple pairs satisfying the equation return lexicographically smallest order of  A, B, C and D and return all as -1 if there are no pairs satisfying the equation.

Example 1:

Input:
N = 7
A[] = {3, 4, 7, 1, 2, 9, 8}
Output:
0 2 3 5
Explanation:
A[0] + A[2] = 3+7 = 10
A[3] + A[5] = 1+9 = 10
Example 2:

Input:
N = 4
A[] = {424, 12, 31, 7}
Output:
-1 -1 -1 -1
Explanation:
There are no pairs satisfying the equation.

Expected Time Complexity: O(N2*logN2)
Expected Auxiliary Space: O(N2)
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> satisfyEqn(int A[], int N) 
{
    unordered_map<int, vector<int>>mp;
    vector<int> ans;
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            int sum=A[i]+A[j];
            if(mp.find(sum)!=mp.end() and mp[sum][0]!=i and mp[sum][1]!=j and mp[sum][1]!=i and mp[sum][0]!=j )
            {
                vector<int> temp = {mp[sum][0],mp[sum][1],i,j};
                if(ans.empty() or temp<ans)
                {
                    ans=temp;
                }
            }
            else
            {
                mp[sum].push_back(i);
                mp[sum].push_back(j);
            }
        }
    }
    if(ans.empty())
    {
        return {-1,-1,-1,-1};
    }
    return ans;
}

int main()
{
    int N=7;
    int A[] = {3, 4, 7, 1, 2, 9, 8};
    vector<int> ans = satisfyEqn(A,N);
    cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<" "<<ans[3];
}