#include "main.h"
/**
 * print_most_numbers - Function that prints the numbers, from 0 to 9.
 */
void print_most_numbers(void)
{
int numbers;
for (numbers = '0'; numbers <= '9'; numbers++)
{
if (numbers != '2' && numbers != '4')
{
_putchar(numbers);
}
}
_putchar(10);
}
