# Merge K Sorted Arrays using Min Heap (C++)

This repository contains an efficient C++ implementation to merge **K sorted arrays** into a single sorted array using a **Min Heap (Priority Queue) and Pair**.

---

## 🚀 Problem Statement

Given `k` sorted arrays, merge them into a single sorted array in increasing order.

---

## ✅ Approach Used

We use a **Min Heap (Priority Queue)** where each heap element stores:

This allows us to always extract the smallest available element among all arrays. Repeat until the heap is empty.

Input:
mat = {
  {1, 4, 7},
  {2, 5, 8},
  {3, 6, 9}
};

Output:
1 2 3 4 5 6 7 8 9



## ⏱️ Time and Space Complexity

- **Time Complexity:** `O(N log K)`  
  - Each of the `N` elements is pushed and popped from the heap once.
- **Space Complexity:** `O(K)`  
  - The heap stores at most one element from each array at a time.

---

## 🧠 Key Idea

1. Insert the **first element of each array** into the min heap.
2. Extract the smallest element and add it to the result.
3. Push the next element from the **same array** into the heap.
4.
