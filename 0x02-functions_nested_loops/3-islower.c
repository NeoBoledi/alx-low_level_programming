#include "main.h"
/**
 * _islower - Checks if the input  character
 * is lower or upper case
 *
 * @c: The character in ASCII code
 *
 *
 * Return: 1 if lowercase, 2 upper
 *
 */
int _islower(int c)
{
int i = c;
if (i >= 97 && i <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
