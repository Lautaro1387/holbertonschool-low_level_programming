#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function main.
 * @argc: Element.
 * @argv: Pointer element.
 */
int main(int argc, char *argv[])
{
	while(argc--)
	{
		printf("%s%d\n", *argv++);
	}
	exit(0);
}
