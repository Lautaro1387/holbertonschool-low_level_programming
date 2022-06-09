#include "main.h"
/**
 * main - Write a function that prints the alphabet, in lowercase.
 * Return: Alphabet.
 */
void print_alphabet(void)
{
	int x;
	for(x = 'a'; x <= 'z'; x++)
	{
	 	_putchar(x);
	}
	_putchar(10);
	return (0);
}
