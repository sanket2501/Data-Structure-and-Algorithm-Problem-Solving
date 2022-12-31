/*
Hard
There are N students standing outside the class. The heights of these students is represented by a vector V.
Every student j knows the height of each student i standing in front of him (j>i). Each student tries to find the smallest height Vi greater than him Vj standing in front of him.
If such a student is the tallest among all students then print -1 for that student.

Input Format:
First-line contains the number of test case T.  Each test case contains N, the number of students and followed by the height of N students separated by spaces.

Output Format:
For each testcase, in a new line, print the next greater heights for each student.

User Task:
This is a function problem. You only need to complete the function greater_height() that takes a vector of heights as a parameter and returns the output vector.

Constraints:
1 <= T <= 100
1 <= N <= 105
1 <= Vi <= 105

Example
Input:
1
5
3 2 5 4 1
Output:
-1 3 -1 5 2

Explanation:
Testcase1: For 3 (j=0) we won't have any element greater than 3 to the left (j>i). For 2 we have 3. For 5 we don't have any greater element. For 4 we have 5, and for 1 we have 2, 3, 4, 5 but we have to choose the smallest
greater element, hence 2.
*/

/*
vector<int> greater_height(vector<int>arr)
{
    //Your code here
    set<int>s;
    int n=arr.size();
    vector<int>res;
    
    for(int i=0;i<n;i++)
    {
        auto it=s.upper_bound(arr[i]);
        
        if(it==s.end())
            res.push_back(-1);
        else
            res.push_back(*it);
        s.insert(arr[i]);
    }
    return res;
}
*/