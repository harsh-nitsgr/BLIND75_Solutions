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
//using recursion
class Solution {
public:
    vector<vector<int>> v;
    vector<vector<int>> levelOrder(TreeNode* root){
        
        util(root,0);
        return v;
    }
    
    void util(TreeNode* root,int level){
    
        if(root==NULL) return;
        if(v.size()==level) v.push_back(vector<int>());
        
        v[level].push_back(root->val);
        
        util(root->left,level+1);
        util(root->right,level+1);
    }
};
    

//using queue

class Solution{
public:
    queue<TreeNode*>q;
    vector<vector<int>>ans;
    
    vector<vector<int>> levelOrder(TreeNode* root){
        if(root==NULL)return ans;
        
        q.push(root);
        int level=0;
        int popsize=1;
        int i=0;
        
        while(!q.empty()){
            if(i==popsize){
                i=0;
                level++;
                popsize=q.size(); //shows how many nodes are to be poped before next level
            }
            if(ans.size()==level) ans.push_back(vector<int>());
            ans[level].push_back(q.front()->val);
            
            if(q.front()->left)q.push(q.front()->left);
            if(q.front()->right)q.push(q.front()->right);
            q.pop();
            i++;
        }
        return ans;
    }
};
