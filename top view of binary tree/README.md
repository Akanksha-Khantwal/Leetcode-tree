👇

🌳 Top View of Binary Tree
📘 Problem Description

The Top View of a Binary Tree is the set of nodes visible when the tree is viewed from the top.
When we look at a binary tree from the top, only the first node encountered at each horizontal distance from the root is visible.

🧩 Example
Input:
       1
     /   \
    2     3
     \   / \
      4 5   6

Output:
2 1 3 6

Explanation:

Node 2 is the leftmost visible node.

Node 1 is the root (center view).

Node 3 and 6 are visible on the right side.

Nodes 4 and 5 are hidden behind other nodes in the top view.

⚙️ Approach

Find the range (leftmost and rightmost indices):

Perform a DFS traversal to find the minimum and maximum horizontal distances (l and r).

Level Order Traversal (BFS):

Use a queue to traverse nodes level by level.

For each node, store its position (pos) in relation to the root (root = 0).

When a position is encountered for the first time, record the node’s data in the result array.

Continue BFS for left (pos-1) and right (pos+1) children.

Return the collected values representing the top view.

🧠 Intuition

Think of horizontal distances:

Root node → distance = 0

Left child → distance = -1

Right child → distance = +1

We only take the first node we encounter at each horizontal distance during a level-order traversal, since higher nodes obscure lower ones from the top.


🕒 Time and Space Complexity
Complexity	Explanation
Time	O(N) – Each node is visited once.
Space	O(N) – Queues and auxiliary arrays used for traversal.
