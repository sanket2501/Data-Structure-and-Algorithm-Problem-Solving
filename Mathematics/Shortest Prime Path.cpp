/*
You are given two four digit prime numbers Num1 and Num2. Find the distance of the shortest path from Num1 to Num2 that can be attained by altering only one single digit at a time. Every number obtained after changing a digit should be a four digit prime number with no leading zeros.


Example 1:

Input:
Num1 = 1033 
Num2 = 8179
Output: 6
Explanation:
1033 -> 1733 -> 3733 -> 3739 -> 3779
                 -> 8779 -> 8179.
There are only 6 steps required to reach
Num2 from Num1, and all the intermediate
numbers are 4 digit prime numbers.
Example 2:

Input:
Num1 = 1033 
Num2 = 1033
Output:
0
*/

//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    int shortestPath(int Num1,int Num2)
    {   
        int N = 1e4+1;
        vector<bool> primes(N, 1);   // N = 1e4+1;
        primes[0] = primes[1] = false;
        for(int i = 2; i*i < N; i++){
            if(primes[i]){
                for(int j = i*i; j < N; j += i){
                    primes[j] = false;
                }
            }
        }
          if(primes[Num1]){
            queue<int> q;
            q.push(Num1);
            primes[Num1] = false;
            int ans = 0;
            while(!q.empty()){
                for(int i = q.size(); i > 0; i--){
                    int curr = q.front();
                    q.pop();
                    if(curr == Num2){
                        return ans;
                    }
                    for(int num = 0; num < 10; num++){
                        int powers = 1;
                        for(int dig = 0; dig < 4; dig++){
                            if(dig == 3 && num == 0) continue; // Leading zero case skipped
                            int newdig = curr / (powers * 10) * (powers * 10) + num * powers + curr % powers;
                            if(primes[newdig]){
                                primes[newdig] = false; // We don't want to visit this node again
                                q.push(newdig); 
                            }
                            powers *= 10;
                        }
                    }
                }
                ans++;
            }
        }
        
      return -1;
    }
};


signed main()
{
    int t;
    cin>>t;
    Solution obj;
    while(t--)
    {
        int Num1,Num2;
        cin>>Num1>>Num2;
        int answer=obj.shortestPath(Num1,Num2);
        cout<<answer<<endl;
    }
}
