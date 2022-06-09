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
int nfs = abs(nf);
_putchar('0' + nf);
return (nfs);
_putchar(10);
}
