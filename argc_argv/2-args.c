#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function.
 * @argc: Element.
 * @argv: Pointer element.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	exit(0);
}
