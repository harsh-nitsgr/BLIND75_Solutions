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
// class Solution {
// public:
//     int maxLevel=0;
//     int maxDepth(TreeNode* root,int level=1) {
//         if(root==NULL) return 0;
//         if(level>maxLevel){
//             maxLevel=level;
//         }
//         maxDepth(root->left,level+1);
//         maxDepth(root->right,level+1);
//         return maxLevel;
//     }
// };
class Solution {
public:
    int depth=0;
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        return 1+max(maxDepth(root->left),maxDepth(root->right)); 
    }
};