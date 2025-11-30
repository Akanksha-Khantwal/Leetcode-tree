📘 README.md — Sum of Elements Between K1-th and K2-th Smallest Elements
Sum Between Two K-th Smallest Elements

This repository contains a C++ implementation to compute the sum of all elements that lie strictly between the K1-th smallest and K2-th smallest elements of an array.

This problem is commonly asked in coding interviews to test understanding of:
Heaps (priority queues)

Order statistics
K-th smallest/largest element logic

Efficient usage of max-heaps for selection

📌 Problem Statement

Given:

An array A[] of size N
Two integers K1 and K2, where 1 ≤ K1 < K2 ≤ N
You must find the sum of all elements strictly between:
the K1-th smallest element
the K2-th smallest element

For example:

Input:
A = [20, 8, 22, 4, 12, 10, 14]
K1 = 3
K2 = 6

Sorted array = [4, 8, 10, 12, 14, 20, 22]

3rd smallest = 10  
6th smallest = 20  

Elements between them = {12, 14}
Sum = 12 + 14 = 26

🧠 Approach Used (Max-Heap)
To efficiently find:
K1-th smallest element → maintain a max-heap of size K1
K2-th smallest element → maintain a max-heap of size K2 - 1

Steps:
Build p1 of size K1
Build p2 of size K2 - 1
K1-th smallest = top(p1)
(K2−1)-th smallest = top(p2)
Sum all elements strictly between these two values

⏱ Time Complexity
Operation	Complexity
Building heaps	O(N log K)
Summation loop	O(N)
Total	O(N log K)

Space Complexity: O(K)
