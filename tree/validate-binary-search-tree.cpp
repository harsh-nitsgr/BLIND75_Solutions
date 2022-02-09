/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root,long int MinVal=LONG_MIN,long int MaxVal=LONG_MAX) {
        if(root==NULL)return 1; 
        return root->val>MinVal 
            &&root->val<MaxVal 
            && isValidBST(root->left,MinVal,root->val)
            && isValidBST(root->right,root->val,MaxVal);
    }
};