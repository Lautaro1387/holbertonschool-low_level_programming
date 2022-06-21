#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int a, b;

	a = *argv[0];
	b = *argv[0];
	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a * b]);
		if (argv[a] == 0)
		{
		printf("Error");
		}
	}
	exit(0);
}
