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
    void mindiff(TreeNode* root,vector<int>&ans){
        if(!root)
        return;
        mindiff(root->left,ans);
        ans.push_back(root->val);
        mindiff(root->right,ans);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int>ans;
        if(!root)
        return 0;
        mindiff(root,ans);
        return ans[1]-ans[0];
        
    }
};