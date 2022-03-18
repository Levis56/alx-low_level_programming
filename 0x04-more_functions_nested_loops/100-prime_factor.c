#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: 0 always is a success/correct.
 */

int main(void)

{
long a, b;

a = 612852475143;
for (b = 2; b < a; b++)
{
while (a % b == 0)
b = b / a;
}

printf("%lu\n", a);

return (0);
}
