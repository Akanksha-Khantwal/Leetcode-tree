🌳 Construct BST from Postorder Traversal
Build a Binary Search Tree using recursion + BST boundaries
📌 Problem Overview

Given the postorder traversal of a Binary Search Tree (BST), reconstruct the original BST.

📝 Postorder Traversal format:

Left → Right → Root


To rebuild the BST, we must reverse this process because postorder stores root at the end.

🎯 Key Insight

Since the last element in postorder is always the root, we process the array from right to left and rebuild the tree by respecting BST rules:

All values in the left subtree must be between:
(lowerBound, rootValue)

All values in the right subtree must be between:
(rootValue, upperBound)

We use recursive range constraints to ensure each node belongs to its correct position.

🧠 Algorithm Intuition

Start from the last index (root of BST).
Create a node with this value.
Recursively build:
Right subtree first
(because while moving backward in postorder, right subtree comes before left subtree)
Then left subtree
Use (lower, upper) bounds to validate whether a value can be placed in the current subtree.
Decrement index after placing a node.

🔍 Example

Postorder:

[10, 40, 50, 100, 90]


Constructed BST:

        90
       /  \
     40   100
    /  \
  10   50


The boundaries ensure each value lands in the correct subtree.


⏱️ Time & Space Complexity
Operation	Complexity
Time	O(N) — Each node is visited once
Space	O(H) — Recursion stack (worst case: O(N))
