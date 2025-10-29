# 🌳 Largest Value in Each Level of a Binary Tree

## 🧩 Problem Statement
Given the root of a binary tree, find the **largest value** at each level.  
Return a vector containing the maximum value of every level from top to bottom.

---

## 🧠 Example

**Input:**
    1
   / \
  2   3
 / \   \
4   5   6
**Output:**
[1, 3, 6]
---

## 🪜 Steps to Solve
1. Use a **queue** for level order traversal (BFS).  
2. For each level, store all node values in a temporary vector.  
3. Find the **maximum element** in that level using `max_element()`.  
4. Push the maximum value to the result vector.  
5. Repeat until all levels are processed.

🧮 Complexity Analysis

Time Complexity: O(N) — Each node is visited once.

Space Complexity: O(W) — Where W is the maximum width of the tree.

---
