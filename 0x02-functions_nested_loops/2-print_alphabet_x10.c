#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets times 10
 * Return:
 */
void print_alphabet_x10(void)
{
char aa;
int a = 0;
while (a < 10)
{
aa = 'a';
while (aa <= 'z')
{
_putchar(aa);
aa++;
}
_putchar('\n');
a++;
}
}
