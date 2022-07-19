#include "main.h"
/**
 * flip_bits - Function.
 * @n: Element of type unsigned long int.
 * @m: Element of type unsigned long int.
 * Return: unsigned int.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0, count = 0;

	num = n ^ m;
	while (num)
	{
		if (num & 1)
		{
			count++;
		}
		num >>= 1;
	}
	return (count);
}
