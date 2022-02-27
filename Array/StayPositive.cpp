/*
we are given a sequence of numbers (may be positive negative or zero). We have to take a positive integer with us and then we will start adding all integers of this array from left
to right with it.We want the minimum positive integer that we should take in the start, so that, at any time our current sum will always remain positive.
Input
nums = [-3,2,-3,4,2]
Output
5
*/
#include <iostream>
#include<vector>
using namespace std;

int minStartValue(vector<int>& nums) 
{
  int sum=0,minvalue=0;
  for(int i=0;i<nums.size();i++)
  {
    sum+=arr[i];
    minvalue=min(minvalue,sum);
  }
  return 1-minvalue;
}
int main() {
  vector<int> nums{-3,2,-3,4,2}; 
  cout<<minStartValue(nums)<<endl;  
  return 0;
}
