#include "main.h"
/**
 * main - Write a function that prints the alphabet, in lowercase.
 * Return: Alphabet.
 */
int main(void)
{
	int x;
	for(x = 'a'; x <= 'z'; x++)
	{
		print_alphabet(x);
	}
	print_alphabet(10);
	return (0);
}
