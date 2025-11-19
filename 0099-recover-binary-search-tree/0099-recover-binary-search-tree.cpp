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
    void inorder(vector<int>&ans,TreeNode*root){
        if(!root)
        return;
        inorder(ans,root->left);
        ans.push_back(root->val);
        inorder(ans,root->right);
    }
    void inorderfix(vector<int>ans,TreeNode*root,int &i){
        if(!root)
        return;
        inorderfix(ans,root->left,i);
        root->val=ans[i++];
        inorderfix(ans,root->right,i);

    }
    void recoverTree(TreeNode* root) {
        vector<int>ans;
        inorder(ans,root);
        sort(ans.begin(),ans.end());
        int i=0;
        inorderfix(ans,root,i);
       
        
    }
};