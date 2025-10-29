# 🌲 Identical Trees

## 🧩 Problem Statement
Given the roots of **two binary trees**, determine whether the two trees are **identical** or not.  
Two binary trees are considered identical if they are **structurally the same** and their corresponding nodes have **equal values**.

---

## 🧠 Example

**Input:**
Tree 1: 1
       /
      2  3

Tree 2: 1
       /
      2  3
**Output:**
Yes
**Explanation:**  
Both trees are identical — they have the same structure and the same node values.

---

## 🪜 Steps to Solve
1. If both roots are `NULL`, return `true` (both trees are empty).  
2. If one tree is `NULL` and the other is not, return `false`.  
3. Check if the data in both current nodes are equal.  
4. Recursively check the **left** and **right** subtrees.  
5. Return `true` only if both subtrees are identical.

🧮 Complexity Analysis

Time Complexity: O(N) — Each node is visited once.

Space Complexity: O(H) — Due to recursion stack, where H is the height of the tree.

---
