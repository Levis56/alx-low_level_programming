#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)
{
int digit1, digit2;

for (digit1 = 0; digit1 < 10; digit1++)
{
putchar((digit1 % 10) + '0');
}
for (digit2 = 0; digit2 < 10; digit2++)
{
putchar((digit2 % 10) + '0');
}

if (digit1 == 9 && digit2 == 9)
continue;

putchar(',');

putchar('\n');

return (0);

}
