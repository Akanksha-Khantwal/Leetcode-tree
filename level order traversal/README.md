# 🌳 Level Order Traversal of a Binary Tree

### 📘 Problem Statement
Given the root of a **Binary Tree**, return its **Level Order Traversal**.

A **Level Order Traversal** (also known as **Breadth-First Search**, BFS) visits all nodes level by level — starting from the root and processing nodes from **left to right** within each level before moving to the next.

---

### 🧩 Example

**Input:**
root = [1, 2, 3]

makefile
Copy code

**Output:**
[[1], [2, 3]]

arduino
Copy code

**Explanation:**  
- Start with the root node `1`, so the first level is `[1]`.  
- Move to its children `2` and `3`, forming the next level `[2, 3]`.  
Hence, the final output is `[[1], [2, 3]]`.

---

### 🧠 Approach

We use a **queue** to perform **Breadth-First Search (BFS)** traversal:
1. Start with the root node in the queue.
2. For each level:
   - Record all nodes currently in the queue.
   - Add their child nodes to the queue.
3. Continue until the queue is empty.
  


⏱️ Complexity Analysis
Type	Complexity	Explanation
Time	O(N)	Every node is visited once
Space	O(N)	Queue stores nodes level-wise


---
