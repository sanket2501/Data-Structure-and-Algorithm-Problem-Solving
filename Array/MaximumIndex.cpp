/*
Difficulty- Hard
Given an array A[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of A[i] < A[j] and i < j.
 
Example 1:
Input:
N = 2
A[] = {1, 10}
Output:
1
Explanation:
A[0]<A[1] so (j-i) is 1-0 = 1.

Example 2:
Input:
N = 9
A[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}
Output:
6
Explanation:
In the given array A[1] < A[7]
satisfying the required 
condition(A[i] < A[j]) thus giving 
the maximum difference of j - i 
which is 6(7-1).

*/
/*
Solution 1
Time Complexity O(nlogn)
   static bool cmp(pair<int,int>a, pair<int,int>b)
    {
        return a.second<b.second;
    }
     int maxIndexDiff(int a[], int n) 
     { 
        int maxvalue=0;
        int j=0;
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++)
        {
            v[i]={i,a[i]};   
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=1;i<n;i++)
        {
            if(v[j].first<v[i].first)
                maxvalue=max((v[i].first-v[j].first),maxvalue);
            else
                j=i;
        }
        return maxvalue;
*/

int maxIndexDiff(int a[], int n) 
{ 
    int i=0,j=n-1,maxvalue=0;
    while(i<=j)
    {
        if(a[i]<=a[j])
        {
            maxvalue=max(maxvalue,j-i);
            i++;
            j=n-1;
        }
        else
        {
            j--;
        }
    }
    return maxvalue;
 }
