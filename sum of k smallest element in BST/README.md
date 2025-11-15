📘 Sum of K Smallest Elements in a Binary Search Tree (BST)
📝 Problem Statement

Given the root of a Binary Search Tree (BST) and an integer k, your task is to find the sum of the k smallest elements in the BST.
If the number of nodes in the tree is less than k, return -1.

🔍 Key Insight

A Binary Search Tree follows the property:

Left Subtree  <  Root  <  Right Subtree
Therefore, inorder traversal of a BST returns all elements in sorted (ascending) order.
So to get the sum of the k smallest elements, we:
Perform inorder traversal → get a sorted list
Add the first k elements from that list

🧠 Approach
✔ Steps:

Traverse the BST using inorder traversal
Store all elements in a vector
Check if k is valid
Compute the sum of the first k elements

✔ Time Complexity:

Inorder traversal: O(n)
Summation of k elements: O(k)
Total: O(n)

✔ Space Complexity:

Vector storage: O(n)
(You can optimize to O(1) extra space using a counter-based inorder traversal, but this version keeps it simple.)
