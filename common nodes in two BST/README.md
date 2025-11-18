📌 Common Nodes in Two BSTs

Efficient C++ solution using iterative inorder traversal

📝 Problem Description
Given two Binary Search Trees (BSTs), the task is to find all the nodes that are common in both trees.

✔️ Requirements

Return the common elements in sorted order.
Time complexity should be efficient (better than O(n²)).
Use properties of BST for optimized traversal.

🚀 Approach

The solution uses two stacks to perform simultaneous inorder traversal of both BSTs.
Since inorder traversal of a BST gives sorted order, comparing elements from both traversals works exactly like merging two sorted arrays.

🔑 Steps

Push the leftmost nodes of both BSTs into two stacks.

Compare the top elements:
If equal → add to answer and move to the right subtree of both.
If one is smaller → move to the right subtree of the smaller one.
Continue until either stack becomes empty.
Return collected common nodes.

🧠 Why this works

Inorder traversal gives sorted values.
Two-pointer-like technique reduces complexity.
Avoids extra space for storing entire inorder traversals.

⏱️ Time & Space Complexity
Complexity	Value
Time	O(n + m) — simultaneous traversal of both BSTs
Space	O(h1 + h2) — stacks store height of each tree
