#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - Function that returns the natural
 * square root of a number.
 * @n: Element.
 * Return: If n does not have a natural square root. Should return -1.
 */
int _sqrt_recursion(int n)
{
	int a = sqrt(n);

	if (n != a)
	{
		return (-1);
	}
	if (n == a)
	{
		return (1);
	}
	else
	{
	return (a);
	}
}
/**
 * _sqrt - Function that the return sqrt the n.
 * @n: Element.
 * Return: sqrt the n.
 */
int _sqrt(int n)
{
	return (_sqrt_recursion(sqrt(n)));
}
