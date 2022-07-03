#include "variadic_functions.h"
/**
 * print_numbers - Function.
 * @separator: Pointer element.
 * @n: Element.
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	char a, p = 0;

	if (separator)
	{
		va_start(num, n);
		for (i = 0; i < n; i++)
		{
		a = va_arg(num, int);
		p += a;
		printf("%d\n", p);
		}
		va_end(num);
	}
	if (!separator)
	{
	}
	printf("\n");
}
