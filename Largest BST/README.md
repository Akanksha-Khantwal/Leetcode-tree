Largest BST in a Binary Tree

This document explains the Largest BST Subtree problem and the corresponding C++ solution implemented using a post-order traversal approach.

🧩 Problem Summary

Given a binary tree, the goal is to find the size (number of nodes) of the largest subtree that is also a Binary Search Tree (BST).

A BST is valid if:
Left subtree contains nodes with values less than the current node.
Right subtree contains nodes with values greater than the current node.
Both left and right subtrees are also valid BSTs.

🛠️ Approach Used: Post-order Traversal + Information Struct

For each node, we compute an Info structure containing:
isBST → whether current subtree is a valid BST
size → size of current subtree if BST else largest BST size in the subtree
mn → minimum value in the subtree
mx → maximum value in the subtree

Why Post-order?

Because we need information from the left and right child before deciding if the current node forms a valid BST.

📦 The Info Structure
struct Info{
    bool isBST;
    int size;
    int mx;
    int mn;
};
🚀 How the Algorithm Works

Recursively compute Info for left and right child.
For current node:
If both children are BSTs AND satisfy BST property → current node also forms a BST.
Otherwise → pick the largest BST size from left or right subtree.
Return the Info for the current node.

✔️ Base Case

For a null node:
return {true, 0, INT_MIN, INT_MAX};
This helps parent nodes validate BST constraints.


🏁 Output

The function returns the size of the largest BST found inside the given binary tree.

📘 Example

If the tree is:

       10
      /  \
     5   15
    / \    \
   1   8    7

Largest BST is:

    5
   / \
  1   8

Size = 3
