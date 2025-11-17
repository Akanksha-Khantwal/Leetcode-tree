# 🌳 Print BST Elements in a Given Range — C++ Solution

This repository contains the solution to the classic Binary Search Tree problem:

**"Print all BST elements that lie in the given range [low, high]."**

This problem is commonly asked in interviews and frequently appears on  
platforms like **GeeksforGeeks (GFG)** and **LeetCode (variant: Range Sum of BST)**.

---

## 📌 Problem Description

Given a **Binary Search Tree (BST)** and a range defined by two values:

low and high
You must return all the node values such that:
low <= node->data <= high
The output must be in **sorted (increasing)** order.

---

## 🧠 Key Idea / Approach

We use **inorder traversal**, which naturally prints BST values in sorted order.

To improve efficiency, we use the BST property to prune the search:

- Go **left** only if:  
  `root->data > low`

- Add root’s value only if:  
  `low <= root->data <= high`

- Go **right** only if:  
  `root->data < high`

This avoids unnecessary traversal and keeps the solution optimal.

---


📝 Example
Input Tree
        20
       /  \
     10    30
    / \    / \
   5  15  25 35
Range:
[10, 25]

Output:
10 15 20 25

⏱️ Time & Space Complexity
Category	Complexity
Time	O(h + k) where h = tree height, k = number of valid nodes
Space	O(h) recursion stack

This is the optimal solution for this problem.
