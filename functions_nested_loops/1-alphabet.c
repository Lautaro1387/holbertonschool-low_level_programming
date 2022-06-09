#include "main.h"

/**
 * print_alphabet - Prints the alphabet, in lowercase.
 * Return: Alphabet.
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		_putchar(x);
	}
	_putchar(10);
}
