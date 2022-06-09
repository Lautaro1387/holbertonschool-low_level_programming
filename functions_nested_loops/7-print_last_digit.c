#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * print_last_digit - Prints the sign of a number.
 * @n: The check.
 * Return: Anything.
 */
int print_last_digit(int n)
{
int nf = n % 10;
_putchar(nf + n);
return (nf);
}
