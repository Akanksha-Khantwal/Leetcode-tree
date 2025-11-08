# 🌳 Right View of Binary Tree (C++)

## 📘 Overview
This project implements a C++ program to print the **Right View of a Binary Tree**.  
The *right view* of a binary tree includes all the nodes that are **visible when the tree is viewed from the right side**.

---

## 🧠 Problem Statement
Given the root of a binary tree, return the list of nodes visible from the **right view**.  
That means, for each level of the tree, only the **rightmost node** is included in the output

---
🧪 Example
Input:
        1
       / \
      2   3
     / \   \
    4   5   6

Output:
Right View: 1 3 6


## 💡 Approach
The algorithm uses **Level Order Traversal (Breadth-First Search)** with the help of a **queue**.

### Steps:
1. Use a queue to perform level-order traversal.
2. For each level, push all nodes into the queue.
3. From each level, the **first node encountered** (rightmost node) is added to the result.
4. Traverse children — first right, then left — to ensure the rightmost nodes are processed first.

---

🕒 Time & Space Complexity
Complexity Type	Explanation	Big-O
⏱️ Time Complexity	Each node is visited once during BFS traversal	O(N)
💾 Space Complexity	Queue stores nodes of one level at a time	O(N)
