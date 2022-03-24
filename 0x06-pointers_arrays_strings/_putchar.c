
/**
 * _putchar - writes the character c to stdout.
 * @c: Character to be printed.
 *
 * Return: 1 on success.
 * On error, return -1, and erreor is set.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}