#include "main.h"
/**
 * print_binary - Function.
 * @n: Element of type unsigned long int.
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	int count = 0;
	unsigned long int aux;

	aux = n;
	while (aux > 0)
	{
		count++;
		aux = aux >> 1;
	}
	count--;
	if (n == 0)
		_putchar('0');
	while (count >= 0)
	{
	if ((n >> count) & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	count--;
	}
}
