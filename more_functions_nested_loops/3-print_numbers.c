#include "main.h"
/**
 * print_numbers - Function that prints the numbers.
 * Return: Any.
 */
void print_numbers(void)
{
int numbers;

for (numbers = '0'; numbers <= '9'; numbers++)
{
_putchar(numbers);
}
_putchar(10);
}
