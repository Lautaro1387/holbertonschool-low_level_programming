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
	int b, c;

	(void)argc;
	b = atoi(argv[1]);
	c = atoi(argv[2]);
	if (argv[1] && argv[2])
	{
	printf("%d\n", b * c);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	exit(0);
}
