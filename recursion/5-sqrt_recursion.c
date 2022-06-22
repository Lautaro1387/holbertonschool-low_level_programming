#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt - Function that returns the natural square root of a number.
 * @n: Element.
 * @a: Element.
 * Return: If n does not have a natural square root. Should return -1.
 */
int _sqrt(int n, int a)
{

	if (a > n / 2)
	{
		return (-1);
	}
	if (a * a == n)
	{
		return (1);
	}
	else
	{
	return (_sqrt(a + 1, n));
	}
}
/**
 * _sqrt_recursion - Function that the return sqrt the n.
 * @n: Element.
 * Return: sqrt the n.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}
