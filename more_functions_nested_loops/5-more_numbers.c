#include "main.h"
/**
 * more_numbers - Function that prints 10 times the numbers, from 0 to 14.
 */
void more_numbers(void)
{
int times;
int c;

for (times = 0; times < 10; times++)
{
for (c = 0; c <= 14; c++)
{
if (c >= 10)
_putchar(c / 10 + '0');
_putchar(c % 10 + '0');
}
_putchar(10);
}
}
