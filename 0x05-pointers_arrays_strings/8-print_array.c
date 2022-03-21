#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: A pointer to an int to be changed.
 * @n: return value n.
 * Return: void (is always correct/success).
 */

void print_array(int *a, int n)
{
int x;

x = 0;
while (x < n)
{
printf("%d", a[x]);

if (x < n - 1)
{
printf(", ");
}

x++;
}

printf("\n");
}
