# 🌳 Boundary Traversal of a Binary Tree

This repository contains a **C++ implementation** of the **Boundary Traversal** algorithm for a binary tree.  
The boundary traversal includes **nodes on the left boundary**, **leaf nodes**, and **nodes on the right boundary (in reverse order)** — forming the *complete outer boundary* of the tree in an anti-clockwise direction.

---

## 📘 Problem Description

Given a binary tree, the task is to **print its boundary traversal** in anti-clockwise order starting from the root.  
Boundary includes:
1. **Left Boundary** (excluding leaf nodes)  
2. **All Leaf Nodes** (from left to right)  
3. **Right Boundary** (excluding leaf nodes, printed in reverse)

---

## 🧩 Example

### Input Tree:
     1
   /   \
  2     3
 / \   / \
4   5 6   7
   / \
  8   9

### Output:
1 2 4 8 9 6 7 3
---

## ⚙️ Algorithm Steps

1. **Start from the root** and add it to the result.
2. **Traverse the left boundary**:
   - Go left whenever possible.
   - Stop before reaching leaf nodes.
3. **Add all leaf nodes**:
   - Perform a simple recursive traversal to collect leaves.
4. **Traverse the right boundary**:
   - Go right whenever possible.
   - Stop before reaching leaf nodes.
   - Store nodes temporarily, then **reverse** them before adding to the final list.

---

## 🧠 Time and Space Complexity

- **Time Complexity:** `O(N)` — Every node is visited once.
- **Space Complexity:** `O(H)` — Due to recursive call stack, where `H` is the height of the tree.

---
