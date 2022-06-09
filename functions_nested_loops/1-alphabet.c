#include "main.h"
/**
 * main - Write a function that prints the alphabet, in lowercase.
 * Return: Alphabet.
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
