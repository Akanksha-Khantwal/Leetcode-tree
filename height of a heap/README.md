📘 Height of a Heap 
📝 Problem Statement

You are given a Binary Heap containing n elements.
You need to find the height of the heap.

A complete binary heap with:

n = 1 ⇒ height = 1

For every level, number of nodes doubles → so height = log₂(n) (rounded down) + 1

🔍 Understanding Heap Height

A heap is a complete binary tree, so:

Level 1 → 1 node
Level 2 → 2 nodes
Level 3 → 4 nodes
Level 4 → 8 nodes

And so on…

If a heap has n nodes, the height is:

height = floor(log2(n)) + 1

🧠 Approach

Instead of using logarithms directly, you repeatedly divide n by 2 until it becomes 1.
Every division reduces one level from the heap, so the number of divisions = height - 1.

⏱ Time Complexity
O(log n)


Because we repeatedly divide n by 2.

📦 Space Complexity
O(1)


No extra data structures used.
