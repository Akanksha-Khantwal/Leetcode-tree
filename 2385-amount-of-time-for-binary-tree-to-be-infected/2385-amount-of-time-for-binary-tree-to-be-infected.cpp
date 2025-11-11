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
    int  burn(TreeNode*root,int start,int &timer){
        if(!root){
            return 0;
        }
        if(root->val==start){
            return -1;
        }
        int left=burn(root->left,start,timer);
        int right=burn(root->right,start,timer);
        if(left<0){
            timer=max(timer,abs(left)+right);
            return left-1;
        }
        if(right<0){
            timer=max(timer,abs(right)+left);
            return right-1;
        }
        return 1+max(left,right);

    } 
    void find(TreeNode*root,int start,TreeNode* &burnnode){
        if(!root)
        return;
        if(root->val==start){
            burnnode=root;
        }
        find(root->left,start,burnnode);
        find(root->right,start,burnnode);

    }
    int height(TreeNode*root){
        if(!root)
        return 0;
        return 1 + max(height(root->left), height(root->right));

    }
    int amountOfTime(TreeNode* root, int start) {
        int timer=0;
        burn(root,start,timer);
        TreeNode* burnnode=NULL;
        find(root,start,burnnode);
        int high=height(burnnode);
        return max(timer,high-1);
    }
};