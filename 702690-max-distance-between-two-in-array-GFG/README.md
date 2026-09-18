# [Max Distance Between Two in Array](https://www.geeksforgeeks.org/problems/count-number-of-elements-between-two-given-elements-in-array4044/1?utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab&utm_source=geeksforgeeks)
## Easy
Given an unsorted array arr[] and two integer x and y, find how many elements lie between x and y in the array, excluding x and y&nbsp;themselves.If either x or y appears multiple times in the array, consider the pair of occurrences that are farthest apart (i.e., have the maximum distance between their indices).&nbsp; If either&nbsp;x or y&nbsp;is not present in the array, or if x and y are the same, return -1.Examples:Input: arr[] = [4, 2, 1, 10, 6], x = 4, y = 6
Output: 3
Explanation: We have an array [4, 2, 1, 10, 6] and x = 4 and y = 6. Elements between them are [2, 1, 10] Input: arr[] = [3, 2, 7, 2, 6, 1, 4], x = 2, y = 4
Output: 4Explanation: The farthest 2 and 4 have four elements between them.Input: arr[] = [3, 2, 7], x = 2, y = 4
Output: -1Explanation: 4 is not present in the array.