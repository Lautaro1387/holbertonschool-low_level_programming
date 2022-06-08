#include <unist.h>
/**
 * main - Write a program that prints _putchar
 * Return: return...
 */
int _putchar(char c)
{
	putchar(10);
	return (write(1, &c, 1));
}
