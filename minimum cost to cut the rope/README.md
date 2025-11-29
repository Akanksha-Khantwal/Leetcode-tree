📘 Minimum Cost to Connect Ropes — README
📝 Problem Statement

You are given an array arr[] where each element represents the length of a rope.
Your task is to connect all ropes into one rope.
The cost of connecting two ropes of lengths a and b is:

cost = a + b


After connecting, the new rope has length (a + b) and can be used again for further connections.
Your goal is to minimize the total cost of connecting all ropes.

🔍 Key Idea

To minimize cost:
Always connect the two smallest ropes first.
When they are connected, push the result back and continue.
This is a classic Greedy Algorithm solved using a Min-Heap (priority queue).

🧠 Approach

Insert all rope lengths into a min-heap
While more than one rope exists:
Extract the two smallest ropes
Add their sum to total cost
Push the combined rope back into heap
Final accumulated cost is the minimum total cost

⏱ Time & Space Complexity
Time Complexity:
O(n log n)

Each insertion and extraction from a heap costs log n.

Space Complexity:
O(n)


The priority queue stores all elements.

💡 Example

Input:

arr = [4, 3, 2, 6]


Steps:

Connect 2 + 3 = 5 → cost = 5
Connect 4 + 5 = 9 → cost = 14
Connect 6 + 9 = 15 → cost = 29
Final minimum cost = 29
