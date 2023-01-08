/*
Easy

Given an array of integers and a number k, write a function that returns true if given array can be divided into pairs such that sum of every pair is divisible by k.
 
Example 1 :

Input : arr = [9, 5, 7, 3], k = 6
Output: True
Explanation: {(9, 3), (5, 7)} is a 
possible solution. 9 + 3 = 12 is divisible
by 6 and 7 + 5 = 12 is also divisible by 6.

Example 2:

Input : arr = [2, 4, 1, 3], k = 4
Output: False
Explanation: There is no possible solution.
*/

/*

bool canPair(vector<int> nums, int k) {
    // Code here.
    unordered_map<int, int> m;
    for(int i=0; i<nums.size(); i++)
    {
        m[nums[i]%k]++;
    }
    
    if(m[0]==1)
        return false;
    for(int i=1;i<k;i++)
    {
        if(m[i]!=m[k-i])
            return false;
    }
    return true;
}

*/