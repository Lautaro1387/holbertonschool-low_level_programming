#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet.
 * Return: 10 times.
 */
void print_alphabet_x10(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
	if (alphabet < 'z')
	{
	print_alphabet_x10(alphabet + 1);
	}
	_putchar(alphabet);
	}
_putchar(10);
}
