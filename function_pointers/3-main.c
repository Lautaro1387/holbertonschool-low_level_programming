#include "3-calc.h"
/**
 * main - Function main.
 * @argc: Argument.
 * @argv: Pointer element.
 * Return: 0.
 */
int main(int  argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	printf ("%d\n", (get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
