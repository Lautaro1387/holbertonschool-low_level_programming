#include "main.h"
/**
 * print_diagonal - Function that draws a diagonal line on the terminal.
 * @n: The character to print.
 */
void print_diagonal(int n)
{
int a;
int b;

if (n > 0)
{
	_putchar(92);
	_putchar(10);

for (a = 2; a <= n; a++)
{
	for (b = 2; b <= a; b++)
	_putchar(' ');
	_putchar(92);
	_putchar(10);
}
}
else
{
if (n <= 0)
_putchar(10);
}
}
