/*
Difficulty Medium
You live in Geek land. Geek land can be seen as a grid of shape N x M.Their are K enemy at K positions. Each enemy blocks the row and column to which it belongs. You have to find the largest continuous area that is not blocked.No two enemies share the same row or the same column.

Example 1:

Input:
N = 2
M = 2
K = 1
enemy[]={{2,2}}
Output:
1
Explanation:
Since only (1,1) cell is free from the enemy hence answer is 1.
 

Example 2:

Input:
N = 3
M = 3
K = 1
enemy[]={{3,3}}
Output:
4
Explanation:
The cells (1,1),(1,2) ,(2,1) and (2,2) are free hence answer =4.
*/

#include<bits/stdc++.h>
using namespace std;

int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
{
    //  code here
    vector<int>row(n,0);
    vector<int>col(m,0);
    for(int i=0;i<enemy.size();i++)
    {
        row[enemy[i][0]-1]=-1;
        col[enemy[i][1]-1]=-1;
    }
    
    int cntrow=0;
    int maxrow=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(row[i]!=-1) cntrow++;
        else cntrow=0;
        if(maxrow<cntrow) maxrow=cntrow;
    }
    
    int cntcol=0;
    int maxcol=INT_MIN;
    for(int i=0;i<m;i++)
    {
        if(col[i]!=-1) cntcol++;
        else cntcol=0;
        if(maxcol<cntcol) maxcol=cntcol;
    }
    
    return (maxrow*maxcol);
}

int main()
{
    
    int n,m;
    cin>>n>>m;
    int k;
    cin>>k;
    vector<vector<int>> e(k,vector<int>(2));
    for(int i=0;i<k;i++)
        cin>>e[i][0]>>e[i][1];
    
    cout<<largestArea(n,m,k,e)<<endl;
    
    return 0;
}