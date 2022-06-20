#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - Function that returns the value of x raised.
 * @x: Element.
 * @y: Element.
 * Return: If y is lower than 0. The function should return -1.
 */
int _pow_recursion(int x, int y)
{
	int a = 0;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
	return (a = x * _pow_recursion(x, y - 1));
	}
}
