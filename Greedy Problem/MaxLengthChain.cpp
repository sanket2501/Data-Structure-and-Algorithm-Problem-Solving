/*
You are given N pairs of numbers. In every pair, the first number is always smaller than the second number. A pair (c, d) can follow another pair (a, b) if b < c. Chain of pairs can be formed in this fashion. You have to find the longest chain which can be formed from the given set of pairs. 
 
Example 1:
Input:
N = 5
P[] = {5  24 , 39 60 , 15 28 , 27 40 , 50 90}
Output: 3
Explanation: The given pairs are { {5, 24}, {39, 60},
{15, 28}, {27, 40}, {50, 90} },the longest chain that
can be formed is of length 3, and the chain is
{{5, 24}, {27, 40}, {50, 90}}

Example 2:
Input:
N = 2
P[] = {5 10 , 1 11}
Output: 1
Explanation:The max length chain possible is only of
length one.

*/
struct val{
	int first;
	int second;
};
static bool cmp(struct val a,struct val b)
{
    return(a.second<b.second);
}
int maxChainLen(struct val p[],int n)
{
    sort(p,p+n,cmp);
    int count=1;
    int j=0;
    for(int i=1;i<n;i++)
    {
        if(p[j].second<p[i].first)
        {
            count++;
            j=i;
        }
    }
    return count;
}
