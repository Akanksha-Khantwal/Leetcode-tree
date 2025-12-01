📘 Convert BST to Max Heap – README
📝 Problem Description

Given a Binary Search Tree (BST), convert it into a Max Heap without changing the structure of the tree.

A Max Heap must satisfy:

Heap Order Property:
Every parent node should be greater than or equal to its children.

Structure Property:
The tree must remain complete, but since we are not altering the shape of the tree, structure remains unchanged.

Important Note

For a valid Max Heap after conversion, only the node values are rearranged, not the links.

🎯 Approach

To convert a BST into a Max Heap, the following properties must hold:

✔ 1. BST → Sorted Array (Inorder Traversal)

Inorder traversal of a BST gives elements in increasing sorted order.

Store this sorted sequence in an array.

✔ 2. Build Max Heap Using Postorder Traversal

Postorder ensures:

Left subtree is filled first

Then right subtree

Finally the root

This creates a Max Heap ordering naturally when assigning values from the sorted array.

✔ Why This Works?

Inorder gives sorted order

Postorder fills tree bottom-up

So smallest values go to leaves, largest values go to root → forming a Max Heap.

🔍 Algorithm Steps

Perform inorder traversal and store all node values in a vector ans.
Perform postorder traversal, and during the visit:
Replace current node’s data with ans[index]
Increase index to assign next element
Tree now becomes a valid Max Heap.


🧪 Example

For BST:

      4
     / \
    2   6
   / \ / \
  1  3 5  7


Inorder output:
[1, 2, 3, 4, 5, 6, 7]

Postorder assignment transforms it to Max Heap:

      7
     / \
    3   6
   / \ / \
  1  2 4  5

⏱️ Time Complexity
Step	Complexity
Inorder Traversal	O(N)
Postorder Traversal	O(N)
Total	O(N)

Space Complexity:

O(N) for storing inorder values

