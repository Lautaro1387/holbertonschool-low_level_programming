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
if (n <= 98)
{
for (n = n; n <= 97; n++)
{
printf("%d, ", n);
printf("%d\n", 98);
}
}
else
{
for (n = n; n > 98; n--)
{
printf("%d, ", n);
printf("%d\n", 98);
}
}
}
