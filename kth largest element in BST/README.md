📘 K-th Largest Element in a Binary Search Tree (BST)
📝 Problem Statement

Given the root of a Binary Search Tree (BST) and an integer k, find the k-th largest element in the BST.

A BST follows the property:
Left Subtree  <  Root  <  Right Subtree


To find the k-th largest, we use the fact that a reverse inorder traversal:

Right → Root → Left


visits nodes in descending order.

So, when we decrement k during traversal, the moment k becomes 0, we have reached the k-th largest element.

🚀 Approach
🔹 Key Idea

Perform reverse inorder traversal to visit nodes in descending order.
Start from the rightmost node (largest)
Decrement k at each visited node
When k == 0, store the current node’s value as the answer
Stop further traversal when the answer is found (k <= 0)

🔹 Why This Works

Reverse inorder traversal produces elements in sorted descending order:
Largest → ... → Smallest


So the k-th visited node is exactly the k-th largest.

⏳ Time & Space Complexity
Operation	Complexity
Time	O(h + k) average, O(n) worst-case (skewed tree)
Space	O(h) recursion stack

Where h is the height of the BST.
