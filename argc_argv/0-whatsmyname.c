#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function.
 * @argc: Element.
 * @argv: Pointer element.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
