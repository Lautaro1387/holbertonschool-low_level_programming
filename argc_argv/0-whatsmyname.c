#include <stdio.h>
/**
 * main - Function.
 * @argc: Element.
 * @argv: Pointer element.
 */
void main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Lautaro.\n");
		exit(1);
	}
	printf("Nombre %s", argv[1]);
}
