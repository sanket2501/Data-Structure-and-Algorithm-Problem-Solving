/*
Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.
 
Example 1:

Input:
N = 3 
A[] = {1,2,3} 
Output:
-1
Explanation:
Since, each element in 
{1,2,3} appears only once so there 
is no majority element.

Example 2:

Input:
N = 5 
A[] = {3,1,3,3,2} 
Output:
3
Explanation:
Since, 3 is present more
than N/2 times, so it is 
the majority element.
*/

 int majorityElement(int a[], int size)
    {
        
        // your code here
        map<int,int>mp;
        for(int i=0;i<size;i++)
        {
            mp[a[i]]++;   
        }
        for(auto it:mp)
            if(it.second>size/2)
                return it.first;
        return -1;
    }
