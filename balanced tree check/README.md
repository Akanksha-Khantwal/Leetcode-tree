# 🧩 Balanced Binary Tree

## 📝 Problem Statement
Given a binary tree, determine whether it is **height balanced** or not.  
A binary tree is considered balanced if, for every node in the tree,  
the height difference between its left and right subtrees is **not more than one**.

Input:
        1
       / \
      2   3
     / \
    4   5
Output:
True
Explanation:
All nodes have a height difference ≤ 1, so the tree is balanced.

---

## 💡 Approach
The problem is solved using **recursion** with a helper function `height()` that computes the height of each subtree while checking for balance simultaneously.

### Steps:
1. **Base Case:** If the node is `NULL`, return 0 (height = 0).  
2. **Recursive Case:**  
   - Recursively find the height of the left and right subtrees.  
   - If the difference `abs(L - R)` is greater than 1, mark `valid = false`.  
3. **Early Stop Optimization:**  
   If `valid` becomes false at any point, stop further recursive checks to save time.  
4. Finally, return `valid` from the main function `isBalanced()` to indicate if the tree is balanced.


⏱️ Time Complexity
O(N) → Each node is visited once.

💾 Space Complexity
O(H) → Due to recursion stack, where H is the height of the tree.

---
