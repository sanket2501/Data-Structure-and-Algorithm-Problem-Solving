/*
Difficulty - Medium
Given weights and values of N items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
Note: Unlike 0/1 knapsack, you are allowed to break the item. 

Input:
N = 3, W = 50																															
values[] = {60,100,120}
weight[] = {10,20,30}
Output:
240.00
Explanation:Total maximum value of item
we can have is 240.00 from the given
capacity of sack.

Input:
N = 2, W = 50
values[] = {60,100}
weight[] = {10,20}
Output:
160.00
Explanation:
Total maximum value of item
we can have is 160.00 from the given
capacity of sack.
*/

struct item
{
	int value;
	int weight;
}

struct comp{
      bool operator()(pair<int,int>a, pair<int,int>b)
      {
          double x=(double)a.first/a.second;
          double y=(double)b.first/b.second;
          return(x>y);
      }

int fractionalknapsack(item arr[],int w,int n)
{
	vector<pair<int,int>>v(n);
	for(int i=0;i<n;i++)
		v[i]={arr[i].value,arr[i].weight};
	
	sort(v.begin(),v.end(),cmp());
	double sum=0.0;
        for(int i=0;i<n;i++)
        {
            if(v[i].second<=W)
            {
                W=W-v[i].second;
                sum=sum+v[i].first;
            }
            else
            {
                sum=sum+(double)W*v[i].first/v[i].second;
                break;
            }
        }
        return sum;
    }
}

int main()
{
	int n,weight;
	cin>>n>>weight;
	item arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i].value>>arr[i].weight;
	cout<<fractionalkanpsack(arr,n,weight);
}
