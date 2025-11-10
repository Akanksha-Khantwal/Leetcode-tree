# 🌳 Vertical Order Traversal of Binary Tree

This repository contains a **C++ implementation** of the **Vertical Order Traversal** of a binary tree.  
It is a popular coding interview and competitive programming problem featured on **GeeksforGeeks** and **LeetCode**.

---

## 📘 Problem Description

Given the **root of a binary tree**, the task is to **print its vertical order traversal** — i.e., nodes are printed **column-wise** from left to right.

### 🧩 Example:

**Input Tree**

    1
   / \
  2   3
 / \ / \
4  6 5  7
mathematical
**Expected Vertical Order Traversal**
[[4], [2], [1, 5, 6], [3], [7]]

🧠 Approach

Find column range:
Use a helper function find() to determine the leftmost and rightmost vertical levels of the tree.

Level Order Traversal (BFS):
Use a queue to perform a level-order traversal while keeping track of the column index (pos) of each node.

Store values:

Positive column indices → stored in positive vector

Negative column indices → stored in negative vector

Merge columns:
Combine left (negative) and right (positive) columns into the final ans vector.

🕒 Time and Space Complexity
Operation	Complexity
Time Complexity	O(N) — Every node is processed once
Space Complexity	O(N) — For queues and auxiliary data structures
