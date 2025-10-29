# 🌳 Mirror of Binary Tree

### 🧩 Problem Statement
Given the **root of a binary tree**, convert it into its **mirror tree**.  
In a mirror tree, for every node, the left and right subtrees are swapped.

---

### 📥 Example

**Input Tree:**
Copy code
1
/
2 3
**Output (Mirrored Tree):**
Copy code
1
/
3 2
---

### 💡 Approach

1. If the current node is `NULL`, return (base case).  
2. Swap the left and right child pointers of the current node.  
3. Recursively repeat the same process for both left and right subtrees.

This ensures that the entire tree is mirrored level by level.

---

### 🧠 Algorithm Steps

1. Start from the root node.  
2. For each node:
   - Swap its `left` and `right` pointers.
   - Recursively mirror the left and right subtrees.
3. Continue until all nodes are processed.

---

### 🧮 Time and Space Complexity

| Complexity | Analysis |
|-------------|-----------|
| **Time** | O(N) — Each node is visited once |
| **Space** | O(H) — Due to recursive call stack (H = height of tree) |
