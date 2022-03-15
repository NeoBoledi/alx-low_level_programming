#include "main.h"
/**
 * jack_bauer - prints every minute of a day
 * Return: void
 */
void jack_bauer(void)
{
int a = 0;
int b;
while (a < 24)
{
b = 0;
while (b < 60)
{
_putchar('0' + (b / 10));
_putchar('0' + (b % 10));
_putchar(':');
_putchar('0' + (b / 10));
_putchar('0' + (b % 10));
_putchar('\n');
b++;
}
b = 0;
a++;
}
}
