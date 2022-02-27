/*
A financial analyst is responsible for a portfolio of profitable stocks represented in an array. Each item in the array represents the yearly profit of a corresponding stock. 
The analyst gathers all distinct pairs of stocks that reached the target profit. Distinct pairs are pairs that differ in at least one element. Given the array of profits, 
find the number of distinct pairs of stocks where the sum of each pair’s profits is exactly equal to the target sum.

Example:
stocksProfit = [5, 7, 9, 13, 11, 6, 6, 3, 3]
target = 12 profit's target

There are 4 pairs of stocks that have the sum of their profits equal to the target 12. Note that because there are two instances of 3 in stocksProfit there are two pair matching (9, 3)
stocksProfits indices 2 and 7, and indices 2 and 8, but only one can be included. There are 3 distinct pairs of stocks: (5, 7), (3, 9), and (6, 6) and the return value is 3.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int stockPair(vector<int> arr,int target)
{
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int l=0;
    int h=n-1;
    int pair=0;
    while(l<h)
    {
        if(arr[l]+arr[h]==target)
        {
            l++;
            h--;
            pair++;
        }
        else if(arr[l]+arr[h]<target)
        {
            l++;
        }
        else 
        {
            h--;
        }
    }
    return pair;

}
int main()
{
    vector<int> arr={5,7,9,13,11,6,6,3,3};
    int target=12;
    cout<<stockPair(arr,target);
}
