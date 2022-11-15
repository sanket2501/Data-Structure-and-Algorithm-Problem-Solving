/*
Difficulty Easy
Given an array arr[] of N Numbers. A Perfect Piece is defined as a subarray such that the difference between the minimum and the maximum value in that range is at most 1. Find the Maximal Length Perfect Piece.

Example 1:

Input:
N = 4
arr[] = {8, 8, 8, 8}
Output:
4
Explanation:
The longest subarray is [1, 4]
where maximum=8 and minimum = 8 and
difference is 0, which is less than 1.
Its length is 4.
Example 2:

Input:
N = 11
arr[] = {5, 4, 5, 5, 6, 7, 8, 8, 8, 7, 6}
Output:
5
Explanation:
The longest subarray is [6, 10]
where maximum=8 and minimum = 7 and
difference is 1. Its length is 5. 

*/

#include<bits/stdc++.h>
using namespace std;

int longestPerfectPiece(int arr[], int n) {
 
    map<int,int> mp;
    int ans=1;
    int l=0;
    for(int r=0;r<n;r++){
        mp[arr[r]]++;
        
        while(mp.rbegin()->first-mp.begin()->first>1){
            mp[arr[l]]--;
            if(mp[arr[l]]==0){
                mp.erase(arr[l]);
            }
            l++;
        }
        
        ans=max(ans,r-l+1);
    }
    return ans;
}

int main()
{
    int N = 11;
    int arr[] = {5, 4, 5, 5, 6, 7, 8, 8, 8, 7, 6};
    cout<<longestPerfectPiece(arr,N);
}