#include "main.h"
/**
 * times_table - prints out the 9 times table
 * Return: void
 */
void times_table(void)
{
int a, b, c;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
c = a * b;
if (c == 0)
{
_putchar('0');
continue;
}
_putchar(',');
_putchar(' ');
if (c / 10 == 0)
_putchar(' ');
else
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
_putchar('\n');
}
}
