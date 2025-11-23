# 🗑️ AVL Tree Deletion (C++ Implementation)

This repository contains the **AVL Tree Deletion Algorithm** implemented in C++. The code performs deletion in an AVL tree while ensuring that the tree remains height-balanced after each deletion using appropriate rotations.

---

## 📌 Features

* Standard **BST Deletion**
* **Height update** after deletion
* **Balance factor calculation**
* Automatic balancing using:

  * Left Rotation (LL)
  * Right Rotation (RR)
  * Left-Right Rotation (LR)
  * Right-Left Rotation (RL)

---

## 🧩 Code Overview

This implementation includes:

* `getheight()` – returns the height of a node
* `getbalance()` – returns balance factor of a node
* `leftrotation()` – fixes Right-Right imbalance
* `rightrotation()` – fixes Left-Left imbalance
* `deleteNode()` – deletes a value and re-balances the tree

---

## 🧠 How AVL Deletion Works

Deletion in an AVL tree is similar to BST deletion but includes extra steps:

1. **Search and delete the node**
2. **Handle cases**:

   * Node has **no children**
   * Node has **one child**
   * Node has **two children** → replace with inorder successor
3. **Update heights**
4. **Calculate balance factor**
5. Apply rotations if tree becomes unbalanced:

   * **balance > 1 & left subtree heavy → LL or LR case**
   * **balance < -1 & right subtree heavy → RR or RL case**

---

## 🧪 Time & Space Complexity

| Operation | Time Complexity | Space Complexity         |
| --------- | --------------- | ------------------------ |
| Deletion  | **O(log n)**    | **O(log n)** (recursion) |
| Rotations | **O(1)**        | **O(1)**                 |

AVL guarantees logarithmic height → efficient operations.

---


If you want insertion code, diagrams, or dry run examples added to this README, feel free to ask!
