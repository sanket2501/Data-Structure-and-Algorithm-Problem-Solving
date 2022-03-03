/*
Difficulty Easy
Given two stringsaandbconsisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, act and tac are an anagram of each other.

Example 1:

Input:a = listen, b = silent
Output: YES
Explanation: Both the string have samecharacters with
        same frequency. So, both are anagrams.

Example 2:

Input:a = allergy, b = allergic
Output: NO
Explanation:Characters in both the strings are 
        not same, so they are not anagrams.
*/
#include<iostream>
using namespace std;

bool isAnagram(string a, string b){
        
        int No_Of_Char =256;
        int arr[No_Of_Char]={0};
        if(a.length()!=b.length())
            return false;
        for(int i=0;i<a.length();i++)
        {
            arr[a[i]]++;
            arr[b[i]]--;
        }
        for(int i=0;i<No_Of_Char;i++)
        {
            if(arr[i]!=0)
                return false;
        }
        return true;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(isAnagram(s1,s2))
        cout<<"Yes";
    else
        cout<<"No";
}