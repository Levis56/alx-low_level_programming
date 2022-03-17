#include "main.h"

/**
 * print_square - Prints a square using # character.
 * @size: The size of the square.
 * Return: 0 Always is (SUccess/Correct).
 */
void print_square(int size)
{
int h, w;

if (size > 0)
{
for (h = 0; h < size; h++)
{
for (w = 0; w < size; w++)
_putchar('#');

if (h == size - 1)
continue;
_putchar('\n');
}
}

_putchar('\n');
}
