# 🌲 Level Order Traversal in Spiral Form

### 🧩 Problem Statement
Given the **root of a binary tree**, your task is to return its **level order traversal in spiral (zigzag) form**.

In a **spiral traversal**, the nodes of the binary tree are printed **level by level**, but the direction of traversal alternates at each level:
- The first level is traversed from **right to left**.
- The next level is traversed from **left to right**, and so on.

---

### 💡 Example

#### Input:
    1
  /   \
 2     3
/ \   / \
7 6 5 4

#### Output:
1 3 2 7 6 5 4
#### Explanation:
- Level 1 → `1` (Right to Left)
- Level 2 → `3 2` (Left to Right)
- Level 3 → `7 6 5 4` (Right to Left)

Hence, spiral traversal = **1 3 2 7 6 5 4**

---

### ⚙️ Approach

We use **two stacks (`s1` and `s2`)** to alternate between left-to-right and right-to-left levels.

1. Push the root node into `s1`.
2. While either stack is not empty:
   - Process all nodes in `s1`:
     - Pop from `s1`, push its **right then left** children into `s2`.
   - Process all nodes in `s2`:
     - Pop from `s2`, push its **left then right** children into `s1`.
3. Continue until both stacks are empty.
4. Collect the visited nodes in order.

This ensures alternating direction at each level.

---


🧮 Complexity Analysis
Type	Complexity
Time Complexity	O(N) — Each node is visited exactly once
Space Complexity	O(N) — Due to the use of two stacks
