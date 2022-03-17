#include "main.h"

/**
 * more_numbers - prints numbers from 0-14 ten times.
 *
 * Return: 0 always (is success/correct)
 */
void more_numbers(void)
{
int i, results;

for (results = 0; results <= 9; results++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
