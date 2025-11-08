# 🌳 Left View of Binary Tree (C++)

## 📘 Problem Statement
Given a binary tree, print the **left view** of it.  
The left view of a binary tree includes all nodes that are visible when the tree is viewed from the **left side**.

---

## 🧩 Example

### Input Tree:

Copy code
    1
   / \
  2   3
 / \   \
4   5   6
shell
Copy code

### Output:
1 2 4
Copy code

---

## 💡 Approach

The solution uses a **Level Order Traversal (BFS)** approach with a **queue**:
1. Traverse the tree level by level.
2. For each level, record the **first node** (the leftmost node).
3. Push its children (left then right) into the queue.
4. Repeat until all levels are processed.

This ensures that for every level, only the first node is captured in the result vector.

---

## 🧠 Algorithm
1. If the root is `NULL`, return an empty vector.  
2. Create a queue and push the root node.  
3. While the queue is not empty:
   - Find the size of the queue (number of nodes at the current level).
   - Add the **first element** of this level to the result vector.
   - Pop all nodes of this level and push their left and right children into the queue.
4. Return the result vector containing the left view.

 🧮 Time and Space Complexity
Operation	Complexity
Time	O(N) — each node is visited once
Space	O(N) — queue stores nodes of the largest level

---
