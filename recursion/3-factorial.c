#include "main.h"
#include <stdio.h>
/**
 * factorial - Function that returns the factorial of a given number.
 * @n: Element.
 * Return: If n is lower than 0, should return -1.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n >= 0)
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
