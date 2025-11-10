🌳 Construct Binary Tree from Inorder and Preorder Traversal
📘 Problem Statement

Given two arrays representing the inorder and preorder traversals of a binary tree, construct the original binary tree and return its root.

Inorder Traversal → (Left → Root → Right)

Preorder Traversal → (Root → Left → Right)

The task is to rebuild the tree structure using these traversal arrays.

🧩 Example
Input:
Inorder:   [9, 3, 15, 20, 7]
Preorder:  [3, 9, 20, 15, 7]

Output (Tree Structure):
       3
      / \
     9  20
       /  \
      15   7

🧠 Approach

Key Insight:

In Preorder, the first element is always the root.

In Inorder, elements to the left of the root belong to the left subtree, and elements to the right belong to the right subtree.

Steps:

Start from the beginning of the preorder array.
Pick the current element as the root.
Find the root’s index in the inorder array.
Recursively build the left and right subtrees.
Continue until all nodes are processed.

Time Complexity:

O(N^2) — because for each node, we may search its position in the inorder array.
(Can be optimized to O(N) using a hashmap.)

Space Complexity:
O(N) — recursion stack and tree nodes.
