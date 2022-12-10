/*
Given the root of a binary tree, split the binary tree into two subtrees by removing one edge such that the product of the sums of the subtrees is maximized.

Return the maximum product of the sums of the two subtrees. Since the answer may be too large, return it modulo 109 + 7.

Note that you need to maximize the answer before taking the mod and not after taking it.

Example 1:

Input: root = [1,2,3,4,5,6]
Output: 110
Explanation: Remove the red edge and get 2 binary trees with sum 11 and 10. Their product is 110 (11*10)
Example 2:

Input: root = [1,null,2,3,4,null,null,5,6]
Output: 90
Explanation: Remove the red edge and get 2 binary trees with sum 15 and 6.Their product is 90 (15*6)
*/


/*

static int MOD=1e9+7;
class Solution {
    
public:
    long long totalTreeSum=0,result=0;
    void getTotalTreeSum(TreeNode* root)
    {
        if(root==nullptr)
            return;
        totalTreeSum+=root->val;
        getTotalTreeSum(root->left);
        getTotalTreeSum(root->right);

    }

    int SumUnder(TreeNode* root)
    {
        if(!root)
            return 0;
        int sumUnderLeft=SumUnder(root->left);
        int sumUnderRight=SumUnder(root->right);

       result=max({result,(totalTreeSum-sumUnderLeft)*sumUnderLeft,(totalTreeSum-sumUnderRight)*sumUnderRight});    

        return (sumUnderLeft+sumUnderRight+root->val);
    }

    int maxProduct(TreeNode* root) {
       getTotalTreeSum(root);
       SumUnder(root); 
       return result%MOD;
    }
};

*/