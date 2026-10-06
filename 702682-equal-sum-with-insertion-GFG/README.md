# [Equal Sum with Insertion](https://www.geeksforgeeks.org/problems/equal-sums4801/1)
## Easy
Given an array arr[] of positive integers. Find the smallest non-negative integer x that can be inserted between any two elements of the array such that the sum of the elements in the subarray before x is equal to the sum of the elements in the subarray after x, with x being included in either of the two subarrays.
Return a list containing three integers:

The smallest non-negative integer x that can be inserted.
The position (1-indexed) where x is inserted.
A flag indicating whether x was added to the first subarray (1) or the second subarray (2).&nbsp;

Note:&nbsp;If the returned answer is correct, the driver code will print true, otherwise, it will print false.
Examples:
Input: arr[] = [3, 2, 1, 5, 7, 8]
Output: [4, 5, 1]
Explanation: The smallest possible integer x = 4 can be inserted between 5 and 7, making the subarrays:
First subarray: [3, 2, 1, 5, 4] with sum = 15.
Second subarray: [7, 8] with sum = 15.
x is inserted at position 5 and included in the first subarray.
Input: arr[] = [9, 5, 1, 2, 0]
Output: [1, 2, 2]
Explanation: The smallest possible integer x = 1 can be inserted between 9 and 5, making the subarrays:
First subarray: [9] with sum = 9.
Second subarray: [1, 5, 1, 2, 0] with sum = 9.
x is inserted at position 2 and included in the second subarray.
Constraints:2 ≤ arr.size() ≤ 1060 ≤ arr[i] ≤ 103