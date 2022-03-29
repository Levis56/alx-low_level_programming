
/**
 * _putchar - Writes writes character c to stdout
 * @c: The character to print
 *
 * Return: On success/correct 1.
 * On error, -1 is returned,  and error is set
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}