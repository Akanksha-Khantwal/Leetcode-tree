📌 Detect Dead End in a Binary Search Tree (BST)
✔ Problem Summary

A dead end in a BST is a leaf node such that no further values can be inserted in that position while maintaining BST properties.
For a node to be a dead end:
Let its value be X
Valid insertion range becomes: (lower_bound, upper_bound)

A dead end occurs if:
X - lower_bound == 1  AND  upper_bound - X == 1


This means no integer exists between (lower_bound, X) or (X, upper_bound) → hence no new value can be inserted.

🧠 Approach
We perform a recursive traversal and for every node:
Maintain the valid range of values allowed in the BST at that point.
When a leaf node is reached:
Check if its allowed left and right ranges are blocked (difference is exactly 1).
If any leaf node satisfies this condition → dead end exists.

🚀 Algorithm

Start with the full integer range:

lower = INT_MIN
upper = INT_MAX


Recursively traverse:
For left child → new upper bound = current node value
For right child → new lower bound = current node value
At each leaf node:
If (root->data - lower == 1) AND (upper - root->data == 1)
→ return true

If any subtree returns true, return true.

📌 Example

For BST:

      8
     / \
    5   11
   / \
  2   7
   \
    3
     \
      4
      
Node 4 becomes a dead end, because no value can be inserted to the left or right.



📊 Time & Space Complexity
Complexity	Value
Time Complexity	O(N) – We traverse each node once
Space Complexity	O(H) – Recursion stack where H = height of BST
