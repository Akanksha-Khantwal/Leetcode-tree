# 🌲 Size of a Binary Tree

### 📘 Problem Statement
Given the root of a **Binary Tree**, the task is to **return the total number of nodes (size)** in the tree.

---

### 🧩 Example

**Input:**
markdown
Copy code
    1
   / \
  2   3
 / \
4   5

**Output:**
5

**Explanation:**  
There are 5 nodes in total — `{1, 2, 3, 4, 5}`.  
Hence, the size of the binary tree is **5**.

---

### 🧠 Approach

The problem can be solved using **recursion**.

1. If the current node is `NULL`, return `0`.  
2. Otherwise, return:
1 + size of left subtree + size of right subtree
3. This recursively adds up all nodes in the tree.

This is a classic example of a **Post-Order Traversal (Left → Right → Root)** approach.

---

⏱️ Complexity Analysis
Type	Complexity	Explanation
Time	O(N)	Each node is visited exactly once
Space	O(H)	Due to recursive call stack, where H is the height of the tree
