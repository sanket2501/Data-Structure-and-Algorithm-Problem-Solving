/* 
Given N activities with their start and finish day given in array start[ ] and end[ ]. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a given day.
Note : Duration of the activity includes both starting and ending day.

Input:
N = 2
start[] = {2, 1}
end[] = {2, 2}
Output: 
1
Explanation:
A person can perform only one of the
given activities.

Input:
N = 4
start[] = {1, 3, 2, 5}
end[] = {2, 4, 3, 6}
Output: 
3
Explanation:
A person can perform activities 1, 2
and 4.

*/
#include<iostream>
using namespace std;
class Solution
{
	public:
	struct comp
	{
		bool operator(pair<int,int>a,vector<int,int>b)
		{
			if(a.second<b.second)
					return true;
		  else if(a.second>b.second)
				  return false;
			return a.first<b.first;
		}
	};
	int activityselection(vector<int> start, vector<int>end, int n)
	{
		//create vector of pair
		vector<pair<int,int>>v(n);
		for(int i=0;i<n;i++)
				v[i]={start[i],end[i]};
		
		//sort vector of pair
		sort(v.begin(),v.end(),comp());
		
		int count=1;
		int j=0;
		for(int i=1;i<n;i++)
		{
			if(v[j].second<v[i].first)
			{
				count++;
				j=i;
			}
		}
		return count;
	}
}

int main()
{
	int n;
	cin>>n;
	vector<int> start(n), end(n);
	
	for(int i=0;i<n;i++)
			cin>>start[i];
	for(int i=0;i<n;i++)
		  cin>>end[i];
	
	Solution ob;
	cout<<ob.activityselection(start, end, n);
}
	





