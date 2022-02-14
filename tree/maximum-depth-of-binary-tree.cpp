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
//depth first
class Solution {
public:
    int maxLevel=0;
    int maxDepth(TreeNode* root,int level=1) {
        if(root==NULL) return 0;
        if(level>maxLevel){
            maxLevel=level;
        }
        maxDepth(root->left,level+1);
        maxDepth(root->right,level+1);
        return maxLevel;
    }
};
class Solution {
public:
    int depth=0;
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        return 1+max(maxDepth(root->left),maxDepth(root->right)); 
    }
};

// breadth first
class Solution {
public:
    
    int maxDepth(TreeNode* root) {
        queue<TreeNode*>q;
        int level=1;
        int popsize=1;
        int i=0;
        if(root==NULL)return 0;
        q.push(root);
        
        while(!q.empty()){
            if(i==popsize){
                i=0;
                level++;
                popsize=q.size(); //shows how many nodes are to be poped before next level
            }
            if(q.front()->right !=NULL)q.push(q.front()->right);
            if(q.front()->left !=NULL)q.push(q.front()->left);
            q.pop();
            i++;
        }
        return level;
    }
};
