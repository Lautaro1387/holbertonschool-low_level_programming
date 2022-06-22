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
	int a, b, c;

	b = atoi(argv[0]);
	c = atoi(argv[0]);
	for (a = 0; a < argc; a++)
	{
	printf("%d\n", b * c);

	if (*argv[a] == 0)
	{
	printf("Error%d\n", *argv[a]);
	}
	}
	exit(0);
}
