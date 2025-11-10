🌳 Diagonal Traversal of a Binary Tree
📘 Overview

This project implements the Diagonal Traversal of a Binary Tree in C++.
In diagonal traversal, all nodes of the binary tree are traversed diagonally from top-right to bottom-left.
Each diagonal is processed before moving to the next one below it.

🧠 Problem Definition

Given a binary tree, print all its nodes diagonally.
For example:

Input:
        8
       / \
      3   10
     / \    \
    1   6    14
       / \   /
      4   7 13

Output (Diagonal Traversal):
[8, 10, 14, 3, 6, 7, 13, 1, 4]

🧩 Algorithm Steps

Initialize variables

l = 0 → to store maximum diagonal index.

Use helper functions find() and finddiag().

Find total diagonals

Traverse using find(root, pos, l):

Move left → pos + 1

Move right → pos

Update maximum diagonal l = max(l, pos).

Create diagonal storage

Create vector<vector<int>> ans(l + 1).

Store nodes diagonally

Traverse using finddiag(root, pos, ans):

Add current node’s data to ans[pos].

Move to left with pos + 1.

Move to right with pos.

Flatten diagonals

Combine all diagonals from ans into one final result vector.

Return result

Return the result vector containing all nodes in diagonal order.

🧮 Time & Space Complexity
Operation	Complexity
Time	O(N) – each node is visited once
Space	O(N) – for storing nodes and recursion stack
