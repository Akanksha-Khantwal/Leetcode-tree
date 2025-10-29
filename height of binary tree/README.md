# 🌲 Height of Binary Tree

### 📘 Problem Statement
Given the root of a **Binary Tree**, find the **height (maximum depth)** of the tree.

> The height of a binary tree is defined as the number of **edges** on the longest path from the root node to a leaf node.

---

### 🧩 Example

**Input:**
    12
   /  \
  8    18
 / \
5  11
**Output:**
2
**Explanation:**  
One of the longest paths from the root (12) goes through nodes `8 → 5`, which has **2 edges**, so the height is **2**.

---

### 🧠 Approach

We use a **recursive Depth-First Search (DFS)** approach:
1. If the current node is `NULL`, return `-1` (since an empty tree has no edges).
2. Recursively compute the height of the left and right subtrees.
3. The height of the current node is:
1 + max(left_subtree_height, right_subtree_height)
   
⏱️ Complexity Analysis
Type	Complexity	Explanation
Time	O(N)	Each node is visited once
Space	O(H)	Recursive call stack, where H is the height of the tree
