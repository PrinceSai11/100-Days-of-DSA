/*
Problem: Given an array of integers, rotate the array to the right by k positions.

Input:
- First line: integer n
- Second line: n integers
- Third line: integer k

Output:
- Print the rotated array

Example:
Input:
5
1 2 3 4 5
2

Output:
4 5 1 2 3
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    k = k % n;  // normalize k

    // print rotated array directly
    for (int i = 0; i < n; i++) {
        int idx = (i + n - k) % n;  // shifted index
        printf("%d ", arr[idx]);
    }
    return 0;
}