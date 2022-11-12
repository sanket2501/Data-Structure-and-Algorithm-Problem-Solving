/*

Maximum Sub-String after at most K changes
MediumAccuracy: 38.02%Submissions: 2255Points: 4
We have a string s of length n, which contains only UPPERCASE characters and we have a number k (always less than n). We can make at most k changes in our string. In one change, you can replace any s[i] (0<= i < n) with any uppercase character (from 'A' to 'Z'). After k changes, find the maximum possible length of the sub-string which have all same characters.

Example 1:

Input: s = "ABAB", k = 2
Output: 4
Explanation: Change 2 'B' into 'A'. 
Now s = "AAAA"

Example:

Input: s = "ADBD", k = 1
Output: 3
Explanation: Change 'B' into 'D'.
Now s = "ADDD"

*/

#include<bits/stdc++.h>
using namespace std;

int characterReplacement(string s, int k){
        // Code here
    int ans=0;
    int start=0,end;
    vector<int>temp(26);
    for(end=0;end<s.size();end++)
    {
        temp[s[end]-'A']++;
        int length=end-start+1;
        int maxFreq=*max_element(temp.begin(),temp.end());
        if(length-maxFreq>k)
        {
            temp[s[start]-'A']--;
            start++;
        }
        else
        {
            ans=max(ans,end-start+1);
        }
    }
    return ans;
}

int main()
{
    string str="ADBD";
    int  k = 1;
    cout<<characterReplacement(str,k);
}