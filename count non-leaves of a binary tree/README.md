# 🌳 Count Non-Leaf Nodes in a Binary Tree

### 📘 Problem Statement
Given the root of a **Binary Tree**, your task is to **count and return the number of non-leaf nodes** present in the tree.

A **non-leaf node** is a node that **has at least one child** (i.e., either a left or a right child or both).

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
Non-leaf nodes are `1`, `2`, and `3`.  
Hence, total number of non-leaf nodes = **3**.

---

### 🧠 Approach

We use **recursion** to count all nodes that are **not leaves**.

1. **Base Case:**  
   - If the node is `NULL`, return immediately.
   - If both `left` and `right` children are `NULL`, it’s a **leaf node**, so we don’t count it.

2. **Recursive Step:**  
   - If the node has at least one child, increment the count.
   - Then, recursively traverse the left and right subtrees.
  
⏱️ Complexity Analysis
Type	Complexity	Explanation
Time Complexity	O(N)	Every node is visited exactly once
Space Complexity	O(H)	Recursive call stack, where H is the height of the tree

---
