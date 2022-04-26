/*
Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

Example 1:

Input:
N = 5
A[] = {1,2,3,5}
Output: 4
Example 2:

Input:
N = 10
A[] = {6,1,2,8,3,4,7,10,5}
Output: 9
*/

//Solution 1st
int MissingNumber(vector<int>& array, int n) {
    sort(array.begin(),array.end());
    int j=1;
    for(int i=0;i<n;i++)
    {
        if(array[i]==j)
            j++;
        else
            return j;
    }
}    

//Solution 2nd
  int MissingNumber(int array[], int n) {        
    int actual = (n*(n+1)/2);
        int total = 0;
        for(int num : array){
            total += num;

        }
                return actual- total;     
   }