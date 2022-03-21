#include "main.h"

/**
 * swap_int - swaps the values of integers a and b
 * @a: A pointer to an int to be updated.
 * @b: B pointer to an int that will be uppdated.
 * Return: Void
 */

void swap_int(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
}
