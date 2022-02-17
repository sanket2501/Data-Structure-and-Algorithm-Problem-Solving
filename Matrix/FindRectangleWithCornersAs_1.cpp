/*
Given a NxM binary matrix consisting of 0s and 1s. Find if there exists a rectangle/ square
within the matrix whose all four corners are 1. 

Example 1:

Input:
N = 4, M = 5
matrix[][] = 
{
{1 0 0 1 0},
{0 0 1 0 1},
{0 0 0 1 0}, 
{1 0 1 0 1}
} 

Output: Yes
Explanation:
Valid corners are at index (1,2), (1,4), (3,2), (3,4) 
*/

#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;

bool solution(vector<vector<int>>a)
{
    int row=a.size();
    int col=a[0].size();
    
    rep(i,0,row)
    {
        rep(j,i+1,row)
        {
            int count=0;
            rep(k,0,col)
            {
                if(a[i][k]==1 && a[j][k]==1)
                    count++;
                if(count==2)
                    return true;
            }
        }
    }
    return false;
}
int main()
{
    int row;
    int col;
    cin>>row>>col;
    vector<vector<int>>v(row);
    rep(i,0,row)
    {
        rep(j,0,col)
        {
            cin>>v[i][j];
        }
    }

    if(solution(v))
        cout<<"Yes";
    else    
        cout<<"No";
}