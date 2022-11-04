/*

Input {15, 10, 18, 12, 4, 6, 2, 8}
Output {-1, 15, -1, 18, 12, 12, 6, 12}
*/

#include<bits/stdc++.h>
using namespace std;

void previousGreater(vector<int> arr, int n)
{
    stack<int> s;
    s.push(arr[0]);
    cout<<-1<<" ";
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && s.top()<=arr[i])
        {
            s.pop();
        }
        cout<<(s.empty()?-1:s.top())<<" ";
        s.push(arr[i]);
    }
}
int main()
{
    int n=8;
    vector<int>arr={15, 10, 18, 12, 4, 6, 2, 8};
    previousGreater(arr, n);
}