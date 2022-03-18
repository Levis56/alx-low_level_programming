#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always is a (Success/Correct).
 */
int main(void)
{

int p = 100;
int a;

a = 1;
while (a <= p)
{
if (a % 3 == 0 && a % 5 == 0)
{
printf("FizzBuzz ");
}

else if (a % 3 == 0)
{
printf("Fizz ");
}

else if (a % 5 == 0)
{
if (a < p)
printf("Buzz ");

else
printf("Buzz");
}

else
{
printf("%i ", a);
}

a++;


}
printf("\n");
return (0);
}
