/*
Difficulty- Medium
Given a matrix of size r*c. Traverse the matrix in spiral form.

Example 1:
Input:
r = 4, c = 4
matrix[][] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15,16}}
Output: 
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
Explanation:

Example 2:
Input:
r = 3, c = 4  
matrix[][] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12}}
Output: 
1 2 3 4 8 12 11 10 9 5 6 7
Explanation:
Applying same technique as shown above, 
output for the 2nd testcase will be 
1 2 3 4 8 12 11 10 9 5 6 7.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
{
    vector<int> arr;
    int top=0;
    int bottom=r-1;
    int left=0;
    int right=c-1;
    int j=0;

    int direction=0;
    // 0 -> move rightward
    // 1 -> move downward
    // 2 -> move leftward
    // 3 -> move upward

    while(top<=bottom && left<=right)
    {
        if(direction==0)
        {
            for(int i=left;i<=right;i++)
            {
                arr.push_back(matrix[top][i]);
            }
            top++;
        }
        else if(direction==1)
        {
            for(int i=top;i<=bottom;i++)
            {
                arr.push_back(matrix[i][right]);
            }
            right--;
        }
        else if(direction==2)
        {
            for(int i=right;i>=left;i--)
            {
                arr.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        else if(direction==3)
        {
            for(int i=bottom;i>=top;i--)
            {
                arr.push_back(matrix[i][left]);
            }
            left++;
        } 
        direction=(direction+1)%4;     
    }
    
    return arr;
}

int main()
{
    int r = 4, c = 4;
    vector<vector<int>>v{{1, 2, 3, 4},
                         {5, 6, 7, 8},
                         {9, 10, 11, 12},
                         {13, 14, 15,16}};

    
    vector<int>v1 = spirallyTraverse(v,r,c); 
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }  
             
}