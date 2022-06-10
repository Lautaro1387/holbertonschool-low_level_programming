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
for (n = n; n <= 98; n++)
{
printf("%d, ", n);
printf("\n");
}
if(n > 0)
{
for (n = n; n >= 98; n--)
{
printf("-%d, ", n);
printf("\n");
}
}
}
}
