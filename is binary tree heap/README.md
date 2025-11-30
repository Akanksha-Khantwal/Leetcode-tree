📘 Check if a Binary Tree is a Max Heap — README
📝 Problem Description

Given a binary tree, determine whether it satisfies the properties of a Max Heap.

A Max Heap must follow two conditions:

✔ 1. Complete Binary Tree (CBT)
Every level must be completely filled except possibly the last, and nodes must be as left-aligned as possible.

✔ 2. Heap Order Property
Every node must be greater than or equal to its children.
Your task is to verify both properties using recursion.

🧪 Example

For tree:

        10
      /    \
    9       8
   / \     /
  7   6   5


Output:

true

🚀 Approach Used in This Solution
This solution checks whether the given binary tree is a Max Heap in three steps:

🔹 1. Count Total Nodes
int count(Node* root)
Performs a recursive count of all nodes in the tree.
Required for verifying CBT using index comparison.

🔹 2. Check if Tree is Complete (CBT)
bool CBT(Node* root, int index, int n)
A binary tree is complete if:
For each node at index i,
its left child is at 2*i + 1
its right child is at 2*i + 2

If any node index ≥ total nodes, it’s not complete.
This function recursively checks whether all nodes follow this rule.

🔹 3. Check Max Heap Property
bool MaxHeap(Node* root)
Checks:
Parent value ≥ child value
Recursively verifies the property for left and right subtrees

🔹 4. Final Result
bool isHeap(Node* tree)


Calls:

count()
CBT()
MaxHeap()

Returns true only if both CBT and Heap Order conditions are satisfied.


⏱ Time Complexity
Function	Complexity
Count nodes	O(N)
Check CBT	O(N)
Check MaxHeap	O(N)
Total	O(N)
📁 Output

true → The binary tree is a valid Max Heap

false → The binary tree does not satisfy Max Heap properties

