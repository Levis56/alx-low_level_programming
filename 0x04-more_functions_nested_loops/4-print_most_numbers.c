#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0-9 excluding 2 and 4.
 *
 * Return: Always 0 (Success/Correct).
 */
void print_most_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
_putchar((num % 10) + '0');
}

_putchar('\n');
}