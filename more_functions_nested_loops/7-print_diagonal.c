#include "main.h"
/**
 * print_diagonal - Function that draws a diagonal line on the terminal.
 * @n: Check
 */
void print_diagonal(int n)
{
int a;

if (n > 0)
{
for (a = 1; a <= n; a++)
{
_putchar(92);
_putchar(10);
}
}
else if (n <= 0)
{
_putchar(10);
}
}
