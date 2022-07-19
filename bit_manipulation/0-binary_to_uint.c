#include "main.h"
/**
 * binary_to_uint - Function.
 * @b: Pointer element of type char.
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int i;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		a = a + 0 + (b[i] - 0);
	}
	return (a);
}
