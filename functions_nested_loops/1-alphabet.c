#include "main.h"
/**
 * main - Write a function that prints the alphabet, in lowercase.
 * Return: Alphabet.
 */
void print_alphabet_x(void)
{
	int x;
	for(x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar(10);
	return (0);
}
