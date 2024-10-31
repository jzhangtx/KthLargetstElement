Kth Largest Element

n a list of numbers below:
4, 3, 6, 4, 1

What is the largest element in the list? → 6

What is the 3rd largest element in the list? → 4

Given a list of numbers, find the kth largest element in the list.

A simple solution is to sort the array and get the kth largest element. The best sorting algorithms have an average case time complexity of O(n log n).

Try to solve this problem with an average time complexity of O(n).
Hint: Quickselect

Testing
Input format
The first line contains ‘T’ denoting the number of independent test cases.

For each test case,

The first line contains ‘n’, denoting the length of the list.
The second line contains n space-separated integers denoting the elements of the list.
The third line contains ‘k’ denoting the kth largest element to be found.
Output format
For each test case, one line containing an integer denoting the kth largest element.

Sample Input
2
4
4 3 2 1
2
5
1 2 3 4 5
1
Expected Output
3
5