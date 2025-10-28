# 🍃 Count Leaves in a Binary Tree

### 📘 Problem Statement
Given the root of a **Binary Tree**, your task is to **count and return the number of leaf nodes** in the tree.

A **leaf node** is a node that has **no left or right child**.

---

### 🧩 Example

**Input:**
    1
   / \
  2   3
 / \
4   5

**Output:**
3
**Explanation:**  
Leaf nodes are `3`, `4`, and `5`.  
Hence, the total number of leaf nodes = **3**.

---

### 🧠 Approach

We use **recursion** to solve this problem efficiently.

1. **Base Case:**  
   If the current node is `NULL`, return `0` — there’s nothing to count.

2. **Leaf Node Check:**  
   If both `left` and `right` child of a node are `NULL`, it’s a **leaf node**, so return `1`.

3. **Recursive Step:**  
   Otherwise, count leaves in both the left and right subtrees and return their sum:
countLeaves(root->left) + countLeaves(root->right)
This ensures all nodes are visited once.

---
⏱️ Complexity Analysis
Type	Complexity	Explanation
Time Complexity	O(N)	Every node is visited exactly once
Space Complexity	O(H)	Recursive stack space, where H is the height of the tree

