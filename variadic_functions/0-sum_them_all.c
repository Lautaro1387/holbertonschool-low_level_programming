#include "variadic_functions.h"
/**
 * sum_them_all - Function.
 * @n: Element.
 * Return: 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	int i;

	if (n)
	{
		va_start(sum, n);
		for (i = n; i >= 0; i = va_arg(sum, int))
		return (n);
		va_end(sum);
	}
	if (!n)
	return (0);
	return (0);
}
