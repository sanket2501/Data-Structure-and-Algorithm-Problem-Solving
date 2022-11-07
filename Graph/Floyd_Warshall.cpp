/*
The problem is to find the shortest distances between every pair of vertices in a given edge-weighted directed graph. The graph is represented as an adjacency matrix of size n*n. Matrix[i][j] denotes the weight of the edge from i to j. If Matrix[i][j]=-1, it means there is no edge from i to j.
Do it in-place.

Example 1:

Input: matrix = {{0,25},{-1,0}}

Output: {{0,25},{-1,0}}

Explanation: The shortest distance between
every pair is already given(if it exists).
Example 2:

Input: matrix = {{0,1,43},{1,0,6},{-1,-1,0}}

Output: {{0,1,7},{1,0,6},{-1,-1,0}}

Explanation: We can reach 2 from 0 as 0->1->2
and the cost will be 1+6=7 which is less than 
43.
*/

#include<bits/stdc++.h>
using namespace std;

void shortest_distance(vector<vector<int>>&matrix){
	    // Code here
    int n=matrix.size();
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i !=j && i != k && j != k && matrix[i][k] != -1 && matrix[k][j]!=-1)
                {
                    if(matrix[i][j] == -1)

                        matrix[i][j] = matrix[i][k]+matrix[k][j];

                    else

                        matrix[i][j] = min(matrix[i][j], matrix[i][k]+matrix[k][j]);
                }
            }
        }
    }
}

int main()
{
   vector<vector<int>> matrix = {{0,1,43},{1,0,6},{-1,-1,0}};
   int n=matrix.size();
   shortest_distance(matrix);
   for(int i=0;i<n;i++)
   {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
   }
}