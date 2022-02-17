/*
Difficulty - Medium
Given a set of N jobs where each jobi has a deadline and profit associated with it.
Each job takes 1 unit of time to complete and only one job can be scheduled at a time. We earn the profit associated with job if and only if the job is completed by its deadline.
Find the number of jobs done and the maximum profit.
Note: Jobs will be given in the form (Jobid, Deadline, Profit) associated with that Job.

Input:
N = 4
Jobs = {(1,4,20),(2,1,10),(3,1,40),(4,1,30)}
Output:
2 60
Explanation:
Job1 and Job3 can be done with
maximum profit of 60 (20+40).

Input:
N = 5
Jobs = {(1,2,100),(2,1,19),(3,2,27),
        (4,1,25),(5,1,15)}
Output:
2 127
Explanation:
2 jobs can be done with
maximum profit of 127 (100+27).
*/
#include<bits/stdc++.h>
#include<vector>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
struct item
{
        int id;
        int dead;
        int profit;
};

static bool cmp(item a,item b)
{
        return a.profit>b.profit;
}
int main()
{
        int n;
        cin>>n;
        item arr[n];

        rep(i,0,n)
        {
             cin>>arr[i].id>>arr[i].dead>>arr[i].profit;   
        }
        
        sort(arr,arr+n,cmp);

        vector<int>v(n,false);
        int profitsum=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
                for(int j=arr[i].dead-1;j>=0;j--)
                {
                        if(v[j]==true)
                                continue;
                        else
                        {
                                v[j]=true;
                                profitsum+=arr[i].profit;
                                count++;
                                break;
                        }
                }
        }
        cout<<profitsum<<" "<<count;
      
}