#include "main.h"
/**
 * more_numbers - Function that prints 10 times the numbers, from 0 to 14.
 */
void more_numbers(void)
{
int times;
int numbers;

for (times = 0; times <= 10; times++)
{
for (numbers = 0; numbers <= 14; numbers++)
{
_putchar(times);
_putchar(numbers);
}
}
_putchar(10);
}
