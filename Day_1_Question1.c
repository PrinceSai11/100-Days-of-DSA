/*Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers.
 Shift existing elements to the right to make space.

Input:
- First line: integer n
- Second line: n space-separated integers (the array)
- Third line: integer pos (1-based position)
- Fourth line: integer x (element to insert)

Output:
- Print the updated array (n+1 integers) in a single line, space-separated

Example:
Input:
5
1 2 4 5 6
3
3

Output:
1 2 3 4 5 6

Explanation: Insert 3 at position 3, elements [4,5,6] shift right*/

#include <stdio.h>
int main()
{
    int n, position, number;
    printf("Enter no of elements in array:\n");
    scanf("%d", &n);
    printf("Enter the position of  element in array:\n");
    scanf("%d", &position);
    position = position - 1;
    printf("Enter the element you want to insert in array:\n");
    scanf("%d", &number);
    int array[n + 1];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number element in array:\n", i + 1);
        scanf("%d", &array[i]);
    }
    for (int i = n; i > position; i--)
    {
        array[i] = array[i - 1];
    }
    array[position] = number;
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
