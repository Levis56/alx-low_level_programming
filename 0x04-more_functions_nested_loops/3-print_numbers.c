#include "main.c"
/**
 * print_numbers - print numbers.
 * Return: Always 0 (success/correct)
 */
void print_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
_putchar ((i % 10) + '0');

_putchar ('\n');
}
