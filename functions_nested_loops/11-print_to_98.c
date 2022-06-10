#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - Prints the sign of a number.
 * @n: Check.
 * Return: number 98.
 */
void print_to_98(int n)
{

for (n = 0; n <= 98; n++)
{
_putchar(n);
printf("%d\n", n);
_putchar(',');
_putchar(32);
}
}
