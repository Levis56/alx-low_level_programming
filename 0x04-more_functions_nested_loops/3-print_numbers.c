#include "main.c"
/**
 * print_numbers - print numbers.
 * Return: Always 0 (success/correct)
 */
void print_numbers(void)
{
int i;

i = 0;
while (i < 10)
{
_putchar (i + '0');
i++;
}

_putchar ('\n');
}
