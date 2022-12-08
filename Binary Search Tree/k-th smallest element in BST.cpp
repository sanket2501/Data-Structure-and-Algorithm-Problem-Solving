/*
Medium
Given a BST and an integer K. Find the Kth Smallest element in the BST using O(1) extra space. 

Example 1:

Input:
      2
    /   \
   1     3
K = 2
Output: 2
Explanation: 2 is the 2nd smallest element in the BST

Example 2:

Input:
        2
      /  \
     1    3
K = 5
Output: -1
Explanation: There is no 5th smallest element in the BST as the size of BST is 3

*/

/*
#include<bits/stdc++.h>
using namespace std;

int inorder(Node *root, int &k , int &ans)
{
    if(root==NULL)
        return 0;
    inorder(root->left,k,ans);
    k--;
    if(k==0)
        ans=root->data;
    inorder(root->right,k,ans);
}
// Return the Kth smallest element in the given BST
int KthSmallestElement(Node *root, int K) {
    // add code here.
    int ans=-1;
    inorder(root, K, ans);
    return ans;
}

int main()
{

}
*/