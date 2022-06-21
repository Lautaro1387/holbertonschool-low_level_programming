#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%i\n", argv[a] * argv[a]);
		if (argv[a] == 0)
		{
		printf("Error");
		}
	}
	exit(0);
}
