#include "main.h"
/**
 * print_line - Function that draws a straight line in the terminal.
 * @n: Check
 */
void print_line(int n)
{
for (n = 0; n >= 0; n++)
{
if (n > 0)
{
_putchar('_');
}
else if (n <= 0)
{
_putchar(10);
}
}
}