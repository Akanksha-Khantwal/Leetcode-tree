# AVL Tree Insertion — README

This repository contains an implementation of **AVL Tree insertion** in C++. AVL Trees are self-balancing Binary Search Trees (BSTs) that maintain a height difference (balance factor) of at most 1 between the left and right subtrees of every node.

The provided code includes node insertion, height calculation, balance factor evaluation, and all required rotations (LL, RR, LR, RL).

---

## 📌 Features

* Insert nodes while keeping the AVL property intact
* Automatic height updates
* Balance factor calculation
* Four types of rotations:

  * Left-Left (LL)
  * Right-Right (RR)
  * Left-Right (LR)
  * Right-Left (RL)

---
## 🛠️ How It Works

1. Insert the new key as in a normal BST.
2. Update the height of the current node.
3. Compute the balance factor.
4. Perform required rotations depending on the imbalance type.
5. Return the (possibly new) root of the subtree.

---

## 📚 Rotation Cases

### 🔹 Left-Left (LL)

Occurs when:
```
balance > 1 and key < root->left->data
```
Solution → **Right Rotation**
### 🔹 Right-Right (RR)
Occurs when:
```
balance < -1 and key > root->right->data
```
Solution → **Left Rotation**
### 🔹 Left-Right (LR)
Occurs when:
```
balance > 1 and key > root->left->data
```
Solution → **Left Rotation on left child → Right Rotation on root**

### 🔹 Right-Left (RL)
Occurs when:
```
balance < -1 and key < root->right->data
```
Solution → **Right Rotation on right child → Left Rotation on root**


⏱️ Time & Space Complexity
🕒 Time Complexity
Insertion in AVL Tree: O(log n)
The tree remains balanced after every insertion.
Height is always O(log n) → rotations also take constant time.

🧠 Space Complexity
Recursive Stack: O(log n)
Due to recursion depth equal to the height of the AVL tree.
Node storage: O(n) for storing all nodes.


