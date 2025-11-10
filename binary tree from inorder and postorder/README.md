/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int find(vector<int>inorder,int target,int start,int end){
        for(int i= start;i<=end;i++){
            if(inorder[i]==target){
                return i;
            }
        }
        return -1;
    }
    Node*buildTreehelper(vector<int>&inorder,vector<int>&postorder,int instart,int inend,int &index){
        if(instart>inend)
        return NULL;
        Node* root=new Node(postorder[index]);
        int curr=postorder[index];
        index--;
        int pos=find(inorder,curr,instart,inend);
        root->right=buildTreehelper(inorder,postorder,pos+1,inend,index);
        root->left=buildTreehelper(inorder,postorder,instart,pos-1,index);
        return root;
    }
    Node *buildTree(vector<int> &inorder, vector<int> &postorder) {
        int index=postorder.size()-1;
        return buildTreehelper(inorder,postorder,0,inorder.size()-1,index);
    
    }
};
