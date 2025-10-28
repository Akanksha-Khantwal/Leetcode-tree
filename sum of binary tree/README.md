# 🌳 Sum of Binary Tree

### 📘 Problem Statement
Given the root of a **Binary Tree**, the task is to **find the sum of all the nodes** present in the tree.

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
15
**Explanation:**  
Sum of all nodes = 1 + 2 + 3 + 4 + 5 = **15**

---

### 🧠 Approach

We use a **recursive traversal** approach:
1. If the current node is `NULL`, return `0`.
2. Otherwise, return:
current_node_value + sum of left subtree + sum of right subtree
3. This ensures that all nodes are visited and their values are added up.

This approach follows a **Post-Order Traversal** pattern (Left → Right → Root).

---⏱️ Complexity Analysis
Type	Complexity	Explanation
Time	O(N)	Each node is visited once
Space	O(H)	Recursive call stack, where H is the height of the tree

