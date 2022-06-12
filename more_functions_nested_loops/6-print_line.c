#include "main.h"
/**
 * print_line - Function that draws a straight line in the terminal.
 * @n: Check
 */
void print_line(int n)
{
int a;
if (n > 0)
{
for (a = 1; a <= n; a++)
{
_putchar('_');
}
}
else
{
_putchar(10);
}
_putchar(10);
}
