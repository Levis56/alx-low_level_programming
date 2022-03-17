#include <stdio.h>
/**
 * main - Prints numbers from 1-100, but for multiples of 3,
 * 	     Fizz is printed instead of the number while for of 5,
 *	     Buzz  is printed and FizzBuzz is printed for multiples of both 3 and 5.
 *
 * Return: 0 Always is a (Success/Correct).
 */
int main(void)
{
int a;

for (a = 1; a <= 100; a++)
{
if ((a % 3) == 0 && (a % 5) == 0)
printf("FizzBuzz");

elseif ((a % 3) == 0)
printf("Fizz");

elseif((a % 5) == 0)
printf("Buzz");

else
printf("%d", a);

if (a == 100)
continue;
printf(" ");
}

printf("\n");

return (0);
}
